// This file automatically generated from 'SR-Parser.sref'
// Don't edit! Edit 'SR-Parser.sref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_378583373_621461326
static const refalrts::IdentReference ident_ADTm_Brackets("ADT-Brackets");
static const refalrts::IdentReference ident_Assign("Assign");
static const refalrts::IdentReference ident_Brackets("Brackets");
static const refalrts::IdentReference ident_CallBrackets("CallBrackets");
static const refalrts::IdentReference ident_Char("Char");
static const refalrts::IdentReference ident_Close("Close");
static const refalrts::IdentReference ident_Closure("Closure");
static const refalrts::IdentReference ident_Condition("Condition");
static const refalrts::IdentReference ident_Declaration("Declaration");
static const refalrts::IdentReference ident_EEnum("EEnum");
static const refalrts::IdentReference ident_ESwap("ESwap");
static const refalrts::IdentReference ident_Entry("Entry");
static const refalrts::IdentReference ident_Enum("Enum");
static const refalrts::IdentReference ident_Extern("Extern");
static const refalrts::IdentReference ident_Forward("Forward");
static const refalrts::IdentReference ident_Function("Function");
static const refalrts::IdentReference ident_GNm_Entry("GN-Entry");
static const refalrts::IdentReference ident_GNm_Local("GN-Local");
static const refalrts::IdentReference ident_Ident("Ident");
static const refalrts::IdentReference ident_Identifier("Identifier");
static const refalrts::IdentReference ident_Include("Include");
static const refalrts::IdentReference ident_Name("Name");
static const refalrts::IdentReference ident_NativeBlock("NativeBlock");
static const refalrts::IdentReference ident_NativeBody("NativeBody");
static const refalrts::IdentReference ident_Number("Number");
static const refalrts::IdentReference ident_Open("Open");
static const refalrts::IdentReference ident_Sentences("Sentences");
static const refalrts::IdentReference ident_Spec("Spec");
static const refalrts::IdentReference ident_Swap("Swap");
static const refalrts::IdentReference ident_Symbol("Symbol");
static const refalrts::IdentReference ident_TkChar("TkChar");
static const refalrts::IdentReference ident_TkCloseADT("TkCloseADT");
static const refalrts::IdentReference ident_TkCloseBlock("TkCloseBlock");
static const refalrts::IdentReference ident_TkCloseBracket("TkCloseBracket");
static const refalrts::IdentReference ident_TkCloseCall("TkCloseCall");
static const refalrts::IdentReference ident_TkColon("TkColon");
static const refalrts::IdentReference ident_TkComma("TkComma");
static const refalrts::IdentReference ident_TkCompound("TkCompound");
static const refalrts::IdentReference ident_TkDirective("TkDirective");
static const refalrts::IdentReference ident_TkEOF("TkEOF");
static const refalrts::IdentReference ident_TkError("TkError");
static const refalrts::IdentReference ident_TkIdentMarker("TkIdentMarker");
static const refalrts::IdentReference ident_TkName("TkName");
static const refalrts::IdentReference ident_TkNativeBlock("TkNativeBlock");
static const refalrts::IdentReference ident_TkNewVariable("TkNewVariable");
static const refalrts::IdentReference ident_TkNumber("TkNumber");
static const refalrts::IdentReference ident_TkOpenADT("TkOpenADT");
static const refalrts::IdentReference ident_TkOpenBlock("TkOpenBlock");
static const refalrts::IdentReference ident_TkOpenBracket("TkOpenBracket");
static const refalrts::IdentReference ident_TkOpenCall("TkOpenCall");
static const refalrts::IdentReference ident_TkRedefinition("TkRedefinition");
static const refalrts::IdentReference ident_TkReplace("TkReplace");
static const refalrts::IdentReference ident_TkSemicolon("TkSemicolon");
static const refalrts::IdentReference ident_TkUnexpected("TkUnexpected");
static const refalrts::IdentReference ident_TkVariable("TkVariable");
static const refalrts::IdentReference ident_UnnamedADT("UnnamedADT");
static refalrts::ExternalReference ref_ASTItemFromDirective("ASTItemFromDirective", 378583373U, 621461326U);
static refalrts::ExternalReference ref_AddUnexpected("AddUnexpected", 378583373U, 621461326U);
static refalrts::ExternalReference ref_DoParseBlock("DoParseBlock", 378583373U, 621461326U);
static refalrts::ExternalReference ref_gen_DoParseBlock_S3A1("DoParseBlock$3=1", 378583373U, 621461326U);
static refalrts::ExternalReference ref_DoParsePattern("DoParsePattern", 378583373U, 621461326U);
static refalrts::ExternalReference ref_DoParseResult("DoParseResult", 378583373U, 621461326U);
static refalrts::ExternalReference ref_gen_DoParseResult_S10L1("DoParseResult$10\\1", 378583373U, 621461326U);
static refalrts::ExternalReference ref_gen_DoParseResult_S10L2("DoParseResult$10\\2", 378583373U, 621461326U);
static refalrts::ExternalReference ref_gen_DoParseResult_S12L1("DoParseResult$12\\1", 378583373U, 621461326U);
static refalrts::ExternalReference ref_ELm_AddErrorAt("EL-AddErrorAt", 0U, 0U);
static refalrts::ExternalReference ref_Expect("Expect", 378583373U, 621461326U);
static refalrts::ExternalReference ref_Fetch("Fetch", 0U, 0U);
static refalrts::ExternalReference ref_Map("Map", 0U, 0U);
static refalrts::ExternalReference ref_ParseBlock("ParseBlock", 378583373U, 621461326U);
static refalrts::ExternalReference ref_ParseBlocks("ParseBlocks", 378583373U, 621461326U);
static refalrts::ExternalReference ref_gen_ParseBlocks_S1A1("ParseBlocks$1=1", 378583373U, 621461326U);
static refalrts::ExternalReference ref_gen_ParseBlocks_S1A2("ParseBlocks$1=2", 378583373U, 621461326U);
static refalrts::ExternalReference ref_ParseElementm_SwDirective("ParseElement-SwDirective", 378583373U, 621461326U);
static refalrts::ExternalReference ref_ParseElements("ParseElements", 378583373U, 621461326U);
static refalrts::ExternalReference ref_gen_ParseElements_S2A1("ParseElements$2=1", 378583373U, 621461326U);
static refalrts::ExternalReference ref_gen_ParseElements_S4A1("ParseElements$4=1", 378583373U, 621461326U);
static refalrts::ExternalReference ref_ParseFunction("ParseFunction", 378583373U, 621461326U);
static refalrts::ExternalReference ref_gen_ParseFunction_S1A1("ParseFunction$1=1", 378583373U, 621461326U);
static refalrts::ExternalReference ref_ParseInclude("ParseInclude", 378583373U, 621461326U);
static refalrts::ExternalReference ref_ParseNameList("ParseNameList", 378583373U, 621461326U);
static refalrts::ExternalReference ref_ParseNameListm_Idents("ParseNameList-Idents", 378583373U, 621461326U);
static refalrts::ExternalReference ref_ParseNameListm_Identsm_Tail("ParseNameList-Idents-Tail", 378583373U, 621461326U);
static refalrts::ExternalReference ref_ParseNameListm_Tail("ParseNameList-Tail", 378583373U, 621461326U);
static refalrts::ExternalReference ref_ParsePattern("ParsePattern", 378583373U, 621461326U);
static refalrts::ExternalReference ref_ParseResult("ParseResult", 378583373U, 621461326U);
static refalrts::ExternalReference ref_gen_ParseResult_A1("ParseResult=1", 378583373U, 621461326U);
static refalrts::ExternalReference ref_gen_ParseResult_A2("ParseResult=2", 378583373U, 621461326U);
static refalrts::ExternalReference ref_ParseSentence("ParseSentence", 378583373U, 621461326U);
static refalrts::ExternalReference ref_gen_ParseSentence_B1("ParseSentence:1", 378583373U, 621461326U);
static refalrts::ExternalReference ref_gen_ParseSentence_B1S1A1("ParseSentence:1$1=1", 378583373U, 621461326U);
static refalrts::ExternalReference ref_gen_ParseSentence_B1S1A1L1("ParseSentence:1$1=1\\1", 378583373U, 621461326U);
static refalrts::ExternalReference ref_gen_ParseSentence_B1S2A1("ParseSentence:1$2=1", 378583373U, 621461326U);
static refalrts::ExternalReference ref_gen_ParseSentence_B1S2A2("ParseSentence:1$2=2", 378583373U, 621461326U);
static refalrts::ExternalReference ref_gen_ParseSentence_B1S4A1("ParseSentence:1$4=1", 378583373U, 621461326U);
static refalrts::ExternalReference ref_gen_ParseSentence_A1("ParseSentence=1", 378583373U, 621461326U);
static refalrts::ExternalReference ref_ParseSentencePart("ParseSentencePart", 378583373U, 621461326U);
static refalrts::ExternalReference ref_gen_ParseSentencePart_A1("ParseSentencePart=1", 378583373U, 621461326U);
static refalrts::ExternalReference ref_gen_ParseSentencePart_A2("ParseSentencePart=2", 378583373U, 621461326U);
static refalrts::ExternalReference ref_gen_ParseSentencePart_A2L1("ParseSentencePart=2\\1", 378583373U, 621461326U);
static refalrts::ExternalReference ref_gen_ParseSentencePart_A3("ParseSentencePart=3", 378583373U, 621461326U);
static refalrts::ExternalReference ref_ParseSpec("ParseSpec", 378583373U, 621461326U);
static refalrts::ExternalReference ref_gen_ParseSpec_S1A1("ParseSpec$1=1", 378583373U, 621461326U);
static refalrts::ExternalReference ref_gen_ParseSpec_S1A2("ParseSpec$1=2", 378583373U, 621461326U);
static refalrts::ExternalReference ref_PrepareBracket("PrepareBracket", 378583373U, 621461326U);
static refalrts::ExternalReference ref_SRm_ParseProgram("SR-ParseProgram", 0U, 0U);
static refalrts::ExternalReference ref_SRm_StrFromToken("SR-StrFromToken", 0U, 0U);
static refalrts::ExternalReference ref_StrFromBracket("StrFromBracket", 378583373U, 621461326U);

static refalrts::FnResult func_SRm_ParseProgram(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & SR-ParseProgram/4 t.ErrorList#1/5 e.Tokens#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tokens#1 as range 2
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseElements/4 AsIs: t.ErrorList#1/5 } (/7 )/8 </9 & Map/10 & PrepareBracket/11 Tile{ AsIs: e.Tokens#1/2 } >/12 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( vm, context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[10], ref_Map.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[11], ref_PrepareBracket.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[12] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_ParseElements.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SRm_ParseProgram("SR-ParseProgram", 0U, 0U, func_SRm_ParseProgram);


static refalrts::FnResult func_PrepareBracket(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & PrepareBracket/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & PrepareBracket/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & PrepareBracket/4 (/5 s.new#2/9 s.new#3/10 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[7], context[8] ) )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    do {
      // </0 & PrepareBracket/4 (/5 # TkOpenBracket/9 s.LnNum#1/10 )/6 >/1
      if( ! refalrts::ident_term(  ident_TkOpenBracket.ref(vm), context[9] ) )
        continue;
      //DEBUG: s.LnNum#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & PrepareBracket/4 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # Open/9 AsIs: s.LnNum#1/10 HalfReuse: # TkOpenBracket/6 HalfReuse: )/1 ]] }
      refalrts::update_ident( context[9], ident_Open.ref(vm) );
      refalrts::reinit_ident( context[6], ident_TkOpenBracket.ref(vm) );
      refalrts::reinit_close_bracket( context[1] );
      refalrts::link_brackets( context[5], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[5];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & PrepareBracket/4 (/5 # TkCloseBracket/9 s.LnNum#1/10 )/6 >/1
      if( ! refalrts::ident_term(  ident_TkCloseBracket.ref(vm), context[9] ) )
        continue;
      //DEBUG: s.LnNum#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & PrepareBracket/4 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # Close/9 AsIs: s.LnNum#1/10 HalfReuse: # TkCloseBracket/6 HalfReuse: )/1 ]] }
      refalrts::update_ident( context[9], ident_Close.ref(vm) );
      refalrts::reinit_ident( context[6], ident_TkCloseBracket.ref(vm) );
      refalrts::reinit_close_bracket( context[1] );
      refalrts::link_brackets( context[5], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[5];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & PrepareBracket/4 (/5 # TkOpenADT/9 s.LnNum#1/10 )/6 >/1
      if( ! refalrts::ident_term(  ident_TkOpenADT.ref(vm), context[9] ) )
        continue;
      //DEBUG: s.LnNum#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & PrepareBracket/4 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # Open/9 AsIs: s.LnNum#1/10 HalfReuse: # TkOpenADT/6 HalfReuse: )/1 ]] }
      refalrts::update_ident( context[9], ident_Open.ref(vm) );
      refalrts::reinit_ident( context[6], ident_TkOpenADT.ref(vm) );
      refalrts::reinit_close_bracket( context[1] );
      refalrts::link_brackets( context[5], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[5];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & PrepareBracket/4 (/5 # TkCloseADT/9 s.LnNum#1/10 )/6 >/1
      if( ! refalrts::ident_term(  ident_TkCloseADT.ref(vm), context[9] ) )
        continue;
      //DEBUG: s.LnNum#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & PrepareBracket/4 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # Close/9 AsIs: s.LnNum#1/10 HalfReuse: # TkCloseADT/6 HalfReuse: )/1 ]] }
      refalrts::update_ident( context[9], ident_Close.ref(vm) );
      refalrts::reinit_ident( context[6], ident_TkCloseADT.ref(vm) );
      refalrts::reinit_close_bracket( context[1] );
      refalrts::link_brackets( context[5], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[5];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & PrepareBracket/4 (/5 # TkOpenCall/9 s.LnNum#1/10 )/6 >/1
      if( ! refalrts::ident_term(  ident_TkOpenCall.ref(vm), context[9] ) )
        continue;
      //DEBUG: s.LnNum#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & PrepareBracket/4 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # Open/9 AsIs: s.LnNum#1/10 HalfReuse: # TkOpenCall/6 HalfReuse: )/1 ]] }
      refalrts::update_ident( context[9], ident_Open.ref(vm) );
      refalrts::reinit_ident( context[6], ident_TkOpenCall.ref(vm) );
      refalrts::reinit_close_bracket( context[1] );
      refalrts::link_brackets( context[5], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[5];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & PrepareBracket/4 (/5 # TkCloseCall/9 s.LnNum#1/10 )/6 >/1
    if( ! refalrts::ident_term(  ident_TkCloseCall.ref(vm), context[9] ) )
      continue;
    //DEBUG: s.LnNum#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & PrepareBracket/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # Close/9 AsIs: s.LnNum#1/10 HalfReuse: # TkCloseCall/6 HalfReuse: )/1 ]] }
    refalrts::update_ident( context[9], ident_Close.ref(vm) );
    refalrts::reinit_ident( context[6], ident_TkCloseCall.ref(vm) );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[5], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PrepareBracket/4 t.OtherToken#1/5 >/1
  //DEBUG: t.OtherToken#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & PrepareBracket/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherToken#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrepareBracket("PrepareBracket", 378583373U, 621461326U, func_PrepareBracket);


static refalrts::FnResult func_gen_ParseElements_S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & ParseElements$2=1/4 (/7 e.AST#1/5 )/8 (/11 e.NewASTItems#2/9 )/12 t.ErrorList#2/13 e.Tail#2/2 >/1
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
  // closed e.AST#1 as range 5
  // closed e.NewASTItems#2 as range 9
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#2 as range 2
  //DEBUG: e.AST#1: 5
  //DEBUG: e.NewASTItems#2: 9
  //DEBUG: t.ErrorList#2: 13
  //DEBUG: e.Tail#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseElements/4 } Tile{ AsIs: t.ErrorList#2/13 } Tile{ AsIs: (/11 } Tile{ AsIs: e.AST#1/5 } Tile{ AsIs: e.NewASTItems#2/9 } Tile{ AsIs: )/12 } Tile{ AsIs: e.Tail#2/2 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_ParseElements.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseElements_S2A1("ParseElements$2=1", 378583373U, 621461326U, func_gen_ParseElements_S2A1);


static refalrts::FnResult func_gen_ParseElements_S4A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & ParseElements$4=1/4 (/7 e.AST#1/5 )/8 (/11 e.NewASTItems#2/9 )/12 t.ErrorList#2/13 e.Tail#2/2 >/1
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
  // closed e.AST#1 as range 5
  // closed e.NewASTItems#2 as range 9
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#2 as range 2
  //DEBUG: e.AST#1: 5
  //DEBUG: e.NewASTItems#2: 9
  //DEBUG: t.ErrorList#2: 13
  //DEBUG: e.Tail#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseElements/4 } Tile{ AsIs: t.ErrorList#2/13 } Tile{ AsIs: (/11 } Tile{ AsIs: e.AST#1/5 } Tile{ AsIs: e.NewASTItems#2/9 } Tile{ AsIs: )/12 } Tile{ AsIs: e.Tail#2/2 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_ParseElements.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseElements_S4A1("ParseElements$4=1", 378583373U, 621461326U, func_gen_ParseElements_S4A1);


static refalrts::FnResult func_ParseElements(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & ParseElements/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseElements/4 t.new#1/5 (/9 e.new#2/7 )/10 t.new#3/11 e.new#4/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[9], context[10]);
  // closed e.new#2 as range 7
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 2
  do {
    // </0 & ParseElements/4 t.new#5/5 (/9 e.new#6/7 )/10 (/11 s.new#7/15 t.new#8/16 e.new#9/13 )/12 e.new#10/2 >/1
    context[13] = 0;
    context[14] = 0;
    if( ! refalrts::brackets_term( context[13], context[14], context[11] ) )
      continue;
    // closed e.new#6 as range 7
    // closed e.new#10 as range 2
    if( ! refalrts::svar_left( context[15], context[13], context[14] ) )
      continue;
    context[17] = refalrts::tvar_left( context[16], context[13], context[14] );
    if( ! context[17] )
      continue;
    // closed e.new#9 as range 13
    do {
      // </0 & ParseElements/4 t.new#11/5 (/9 e.new#12/7 )/10 (/11 s.new#13/15 s.new#14/16 e.new#15/13 )/12 e.new#16/2 >/1
      if( ! refalrts::svar_term( context[16], context[16] ) )
        continue;
      // closed e.new#12 as range 7
      // closed e.new#15 as range 13
      // closed e.new#16 as range 2
      do {
        // </0 & ParseElements/4 t.ErrorList#1/5 (/9 e.AST#1/7 )/10 (/11 # TkEOF/15 s.LnNum#1/16 )/12 >/1
        if( ! refalrts::ident_term(  ident_TkEOF.ref(vm), context[15] ) )
          continue;
        if( ! refalrts::empty_seq( context[13], context[14] ) )
          continue;
        if( ! refalrts::empty_seq( context[2], context[3] ) )
          continue;
        // closed e.AST#1 as range 7
        //DEBUG: t.ErrorList#1: 5
        //DEBUG: s.LnNum#1: 16
        //DEBUG: e.AST#1: 7

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & ParseElements/4 {REMOVED TILE} (/9 {REMOVED TILE} )/10 (/11 # TkEOF/15 s.LnNum#1/16 )/12 >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: e.AST#1/7 } Tile{ ]] }
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[7], context[8] );
        res = refalrts::splice_evar( res, context[5], context[6] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ParseElements/4 t.ErrorList#1/5 (/9 e.AST#1/7 )/10 (/11 # TkDirective/15 s.LnNum#1/16 s.Directive#1/20 )/12 e.Tail#1/2 >/1
      context[18] = context[13];
      context[19] = context[14];
      if( ! refalrts::ident_term(  ident_TkDirective.ref(vm), context[15] ) )
        continue;
      // closed e.AST#1 as range 7
      // closed e.Tail#1 as range 2
      if( ! refalrts::svar_left( context[20], context[18], context[19] ) )
        continue;
      if( ! refalrts::empty_seq( context[18], context[19] ) )
        continue;
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: s.LnNum#1: 16
      //DEBUG: e.AST#1: 7
      //DEBUG: e.Tail#1: 2
      //DEBUG: s.Directive#1: 20

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.LnNum#1/16 s.Directive#1/20 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & ParseElements$2=1/21 Tile{ AsIs: (/9 AsIs: e.AST#1/7 AsIs: )/10 HalfReuse: {*}/11 HalfReuse: </15 } & ParseElement-SwDirective/22 Tile{ AsIs: t.ErrorList#1/5 } Tile{ HalfReuse: s.Directive1 #20/12 AsIs: e.Tail#1/2 AsIs: >/1 } >/23 Tile{ ]] }
      if( ! refalrts::alloc_name( vm, context[21], ref_gen_ParseElements_S2A1.ref(vm) ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( vm, context[22], ref_ParseElementm_SwDirective.ref(vm) ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( vm, context[23] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_closure_head( context[4] );
      refalrts::reinit_unwrapped_closure( context[11], context[4] );
      refalrts::reinit_open_call( context[15] );
      refalrts::reinit_svar( context[12], context[20] );
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[15] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[23], context[23] );
      res = refalrts::splice_evar( res, context[12], context[1] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[22], context[22] );
      res = refalrts::splice_evar( res, context[9], context[15] );
      res = refalrts::splice_evar( res, context[21], context[21] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      refalrts::wrap_closure( context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseElements/4 t.ErrorList#1/5 (/9 e.AST#1/7 )/10 (/11 # TkNativeBlock/15 t.SrcPos#1/16 e.Block#1/13 )/12 e.Tail#1/2 >/1
      if( ! refalrts::ident_term(  ident_TkNativeBlock.ref(vm), context[15] ) )
        continue;
      // closed e.AST#1 as range 7
      // closed e.Block#1 as range 13
      // closed e.Tail#1 as range 2
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: t.SrcPos#1: 16
      //DEBUG: e.AST#1: 7
      //DEBUG: e.Block#1: 13
      //DEBUG: e.Tail#1: 2

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParseElements/4 AsIs: t.ErrorList#1/5 AsIs: (/9 AsIs: e.AST#1/7 HalfReuse: (/10 HalfReuse: # NativeBlock/11 } Tile{ AsIs: t.SrcPos#1/16 } Tile{ AsIs: e.Block#1/13 } Tile{ HalfReuse: )/15 } Tile{ AsIs: )/12 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
      refalrts::reinit_open_bracket( context[10] );
      refalrts::reinit_ident( context[11], ident_NativeBlock.ref(vm) );
      refalrts::reinit_close_bracket( context[15] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[12] );
      refalrts::link_brackets( context[10], context[15] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[15], context[15] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ParseElements/4 t.new#11/5 (/9 e.new#12/7 )/10 (/11 s.new#13/15 s.new#14/16 e.new#15/13 )/12 e.new#16/2 >/1
    if( ! refalrts::svar_term( context[16], context[16] ) )
      continue;
    // closed e.new#12 as range 7
    // closed e.new#15 as range 13
    // closed e.new#16 as range 2
    do {
      // </0 & ParseElements/4 t.ErrorList#1/5 (/9 e.AST#1/7 )/10 (/11 # TkName/15 s.LnNum#1/16 e.Name#1/13 )/12 e.Tail#1/2 >/1
      if( ! refalrts::ident_term(  ident_TkName.ref(vm), context[15] ) )
        continue;
      // closed e.AST#1 as range 7
      // closed e.Name#1 as range 13
      // closed e.Tail#1 as range 2
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: s.LnNum#1: 16
      //DEBUG: e.AST#1: 7
      //DEBUG: e.Name#1: 13
      //DEBUG: e.Tail#1: 2

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.LnNum#1/16 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & ParseElements$4=1/18 Tile{ AsIs: (/9 AsIs: e.AST#1/7 AsIs: )/10 HalfReuse: {*}/11 HalfReuse: </15 } & ParseFunction/19 # GN-Local/20 (/21 Tile{ AsIs: e.Name#1/13 } Tile{ AsIs: )/12 } Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: e.Tail#1/2 } >/22 Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_name( vm, context[18], ref_gen_ParseElements_S4A1.ref(vm) ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( vm, context[19], ref_ParseFunction.ref(vm) ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( vm, context[20], ident_GNm_Local.ref(vm) ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( vm, context[21] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( vm, context[22] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_closure_head( context[4] );
      refalrts::reinit_unwrapped_closure( context[11], context[4] );
      refalrts::reinit_open_call( context[15] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[22] );
      refalrts::push_stack( vm, context[15] );
      refalrts::link_brackets( context[21], context[12] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[22], context[22] );
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[19], context[21] );
      res = refalrts::splice_evar( res, context[9], context[15] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      refalrts::wrap_closure( context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ParseElements/4 t.ErrorList#1/5 (/9 e.AST#1/7 )/10 (/11 # TkSemicolon/15 s.LnNum#1/16 )/12 e.Tail#1/2 >/1
    if( ! refalrts::ident_term(  ident_TkSemicolon.ref(vm), context[15] ) )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    // closed e.AST#1 as range 7
    // closed e.Tail#1 as range 2
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: s.LnNum#1: 16
    //DEBUG: e.AST#1: 7
    //DEBUG: e.Tail#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/11 # TkSemicolon/15 s.LnNum#1/16 )/12 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParseElements/4 AsIs: t.ErrorList#1/5 AsIs: (/9 AsIs: e.AST#1/7 AsIs: )/10 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::splice_to_freelist_open( vm, context[10], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseElements/4 t.ErrorList#1/5 (/9 e.AST#1/7 )/10 t.Unexpected#1/11 e.Tail#1/2 >/1
  // closed e.AST#1 as range 7
  // closed e.Tail#1 as range 2
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: t.Unexpected#1: 11
  //DEBUG: e.AST#1: 7
  //DEBUG: e.Tail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParseElements/4 } </13 & AddUnexpected/14 Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: t.Unexpected#1/11 }"directive or name"/15 >/17 Tile{ AsIs: (/9 AsIs: e.AST#1/7 AsIs: )/10 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[14], ref_AddUnexpected.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[15], context[16], "directive or name", 17 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[17] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[15], context[17] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseElements("ParseElements", 378583373U, 621461326U, func_ParseElements);


static refalrts::FnResult func_ASTItemFromDirective(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & ASTItemFromDirective/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ASTItemFromDirective/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ASTItemFromDirective/4 # EEnum/5 >/1
    if( ! refalrts::ident_term(  ident_EEnum.ref(vm), context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & ASTItemFromDirective/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ Reuse: # Enum/5 HalfReuse: # GN-Entry/1 ]] }
    refalrts::update_ident( context[5], ident_Enum.ref(vm) );
    refalrts::reinit_ident( context[1], ident_GNm_Entry.ref(vm) );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ASTItemFromDirective/4 # Enum/5 >/1
    if( ! refalrts::ident_term(  ident_Enum.ref(vm), context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & ASTItemFromDirective/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: # Enum/5 HalfReuse: # GN-Local/1 ]] }
    refalrts::reinit_ident( context[1], ident_GNm_Local.ref(vm) );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ASTItemFromDirective/4 # ESwap/5 >/1
    if( ! refalrts::ident_term(  ident_ESwap.ref(vm), context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & ASTItemFromDirective/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ Reuse: # Swap/5 HalfReuse: # GN-Entry/1 ]] }
    refalrts::update_ident( context[5], ident_Swap.ref(vm) );
    refalrts::reinit_ident( context[1], ident_GNm_Entry.ref(vm) );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ASTItemFromDirective/4 # Swap/5 >/1
    if( ! refalrts::ident_term(  ident_Swap.ref(vm), context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & ASTItemFromDirective/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: # Swap/5 HalfReuse: # GN-Local/1 ]] }
    refalrts::reinit_ident( context[1], ident_GNm_Local.ref(vm) );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ASTItemFromDirective/4 # Extern/5 >/1
    if( ! refalrts::ident_term(  ident_Extern.ref(vm), context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & ASTItemFromDirective/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ Reuse: # Declaration/5 HalfReuse: # GN-Entry/1 ]] }
    refalrts::update_ident( context[5], ident_Declaration.ref(vm) );
    refalrts::reinit_ident( context[1], ident_GNm_Entry.ref(vm) );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ASTItemFromDirective/4 # Forward/5 >/1
    if( ! refalrts::ident_term(  ident_Forward.ref(vm), context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & ASTItemFromDirective/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ Reuse: # Declaration/5 HalfReuse: # GN-Local/1 ]] }
    refalrts::update_ident( context[5], ident_Declaration.ref(vm) );
    refalrts::reinit_ident( context[1], ident_GNm_Local.ref(vm) );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ASTItemFromDirective/4 # Entry/5 >/1
  if( ! refalrts::ident_term(  ident_Entry.ref(vm), context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ASTItemFromDirective/4 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: # Entry/5 HalfReuse: # GN-Entry/1 ]] }
  refalrts::reinit_ident( context[1], ident_GNm_Entry.ref(vm) );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[5];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ASTItemFromDirective("ASTItemFromDirective", 378583373U, 621461326U, func_ASTItemFromDirective);


static refalrts::FnResult func_ParseElementm_SwDirective(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & ParseElement-SwDirective/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseElement-SwDirective/4 t.new#1/5 s.new#2/7 e.new#3/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & ParseElement-SwDirective/4 t.ErrorList#1/5 # Entry/7 (/12 # TkName/14 s.NamePos#1/20 e.Name#1/10 )/13 (/17 # TkOpenBlock/19 s.BracePos#1/21 )/18 e.Tail#1/8 >/1
    context[8] = context[2];
    context[9] = context[3];
    if( ! refalrts::ident_term(  ident_Entry.ref(vm), context[7] ) )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[8], context[9] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = refalrts::ident_left(  ident_TkName.ref(vm), context[10], context[11] );
    if( ! context[14] )
      continue;
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[8], context[9] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    context[19] = refalrts::ident_left(  ident_TkOpenBlock.ref(vm), context[15], context[16] );
    if( ! context[19] )
      continue;
    // closed e.Tail#1 as range 8
    if( ! refalrts::svar_left( context[20], context[10], context[11] ) )
      continue;
    // closed e.Name#1 as range 10
    if( ! refalrts::svar_left( context[21], context[15], context[16] ) )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: e.Tail#1: 8
    //DEBUG: s.NamePos#1: 20
    //DEBUG: e.Name#1: 10
    //DEBUG: s.BracePos#1: 21

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # TkName/14 s.NamePos#1/20 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseFunction/4 } Tile{ Reuse: # GN-Entry/7 AsIs: (/12 } Tile{ AsIs: e.Name#1/10 } Tile{ AsIs: )/13 } Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: (/17 AsIs: # TkOpenBlock/19 AsIs: s.BracePos#1/21 AsIs: )/18 AsIs: e.Tail#1/8 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_ParseFunction.ref(vm) );
    refalrts::update_ident( context[7], ident_GNm_Entry.ref(vm) );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[17];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[7], context[12] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ParseElement-SwDirective/4 t.ErrorList#1/5 # Include/7 e.Tail#1/2 >/1
    if( ! refalrts::ident_term(  ident_Include.ref(vm), context[7] ) )
      continue;
    // closed e.Tail#1 as range 2
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: e.Tail#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} # Include/7 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseInclude/4 AsIs: t.ErrorList#1/5 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_ParseInclude.ref(vm) );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::splice_to_freelist_open( vm, context[6], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ParseElement-SwDirective/4 t.ErrorList#1/5 # Ident/7 e.Tail#1/2 >/1
    if( ! refalrts::ident_term(  ident_Ident.ref(vm), context[7] ) )
      continue;
    // closed e.Tail#1 as range 2
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: e.Tail#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseNameList-Idents/4 } Tile{ HalfReuse: (/7 } )/8 Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( vm, context[8] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_ParseNameListm_Idents.ref(vm) );
    refalrts::reinit_open_bracket( context[7] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ParseElement-SwDirective/4 t.ErrorList#1/5 # Spec/7 e.Tail#1/2 >/1
    if( ! refalrts::ident_term(  ident_Spec.ref(vm), context[7] ) )
      continue;
    // closed e.Tail#1 as range 2
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: e.Tail#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} # Spec/7 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseSpec/4 AsIs: t.ErrorList#1/5 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_ParseSpec.ref(vm) );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::splice_to_freelist_open( vm, context[6], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseElement-SwDirective/4 t.ErrorList#1/5 s.Directive#1/7 e.Tail#1/2 >/1
  // closed e.Tail#1 as range 2
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: s.Directive#1: 7
  //DEBUG: e.Tail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseNameList/4 } (/8 )/9 Tile{ AsIs: t.ErrorList#1/5 } </10 & ASTItemFromDirective/11 Tile{ AsIs: s.Directive#1/7 } >/12 Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( vm, context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[11], ref_ASTItemFromDirective.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[12] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_ParseNameList.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[10] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseElementm_SwDirective("ParseElement-SwDirective", 378583373U, 621461326U, func_ParseElementm_SwDirective);


static refalrts::FnResult func_gen_ParseSpec_S1A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & ParseSpec$1=2/4 t.ErrorList#2/5 s.LnNum#1/7 (/10 e.Name#1/8 )/11 (/14 e.Pattern#2/12 )/15 t.ErrorList#2/16 e.Tail#3/2 >/1
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
  context[12] = 0;
  context[13] = 0;
  context[14] = refalrts::brackets_left( context[12], context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[14], context[15]);
  context[17] = refalrts::repeated_stvar_left( vm, context[16], context[5], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 8
  // closed e.Pattern#2 as range 12
  // closed e.Tail#3 as range 2
  //DEBUG: t.ErrorList#2: 5
  //DEBUG: s.LnNum#1: 7
  //DEBUG: e.Name#1: 8
  //DEBUG: e.Pattern#2: 12
  //DEBUG: e.Tail#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} t.ErrorList#2/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 } Tile{ HalfReuse: # Spec/14 } Tile{ AsIs: s.LnNum#1/7 AsIs: (/10 AsIs: e.Name#1/8 AsIs: )/11 } Tile{ AsIs: e.Pattern#2/12 } Tile{ HalfReuse: )/1 } Tile{ AsIs: )/15 AsIs: t.ErrorList#2/16 } Tile{ AsIs: e.Tail#3/2 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_ident( context[14], ident_Spec.ref(vm) );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[15] );
  refalrts::link_brackets( context[4], context[1] );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[15], context[17] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[7], context[11] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseSpec_S1A2("ParseSpec$1=2", 378583373U, 621461326U, func_gen_ParseSpec_S1A2);


static refalrts::FnResult func_gen_ParseSpec_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & ParseSpec$1=1/4 s.LnNum#1/5 (/8 e.Name#1/6 )/9 t.ErrorList#2/10 (/14 e.Pattern#2/12 )/15 e.Tail#2/2 >/1
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
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  context[12] = 0;
  context[13] = 0;
  context[14] = refalrts::brackets_left( context[12], context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[14], context[15]);
  // closed e.Pattern#2 as range 12
  // closed e.Tail#2 as range 2
  //DEBUG: s.LnNum#1: 5
  //DEBUG: e.Name#1: 6
  //DEBUG: t.ErrorList#2: 10
  //DEBUG: e.Pattern#2: 12
  //DEBUG: e.Tail#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & ParseSpec$1=2/16 Tile{ AsIs: t.ErrorList#2/10 } Tile{ AsIs: s.LnNum#1/5 AsIs: (/8 AsIs: e.Name#1/6 AsIs: )/9 } Tile{ AsIs: (/14 AsIs: e.Pattern#2/12 AsIs: )/15 } {*}/17 </18 & Expect/19 # TkSemicolon/20 (/21 ';'/22 )/23 t.ErrorList#2/10/24 Tile{ AsIs: e.Tail#2/2 } >/26 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_name( vm, context[16], ref_gen_ParseSpec_S1A2.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[17], context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[19], ref_Expect.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[20], ident_TkSemicolon.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( vm, context[22], ';' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[23] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(vm, context[24], context[25], context[10], context[11]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[26] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[4] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[26] );
  refalrts::push_stack( vm, context[18] );
  refalrts::link_brackets( context[21], context[23] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[26], context[26] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[17], context[25] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[5], context[9] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  refalrts::use( res );
  refalrts::wrap_closure( context[17] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseSpec_S1A1("ParseSpec$1=1", 378583373U, 621461326U, func_gen_ParseSpec_S1A1);


static refalrts::FnResult func_ParseSpec(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ParseSpec/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseSpec/4 t.new#1/5 t.new#2/7 e.new#3/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & ParseSpec/4 t.ErrorList#1/5 (/7 # TkName/11 s.LnNum#1/12 e.Name#1/9 )/8 e.Tail#1/2 >/1
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[7] ) )
      continue;
    context[11] = refalrts::ident_left(  ident_TkName.ref(vm), context[9], context[10] );
    if( ! context[11] )
      continue;
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[12], context[9], context[10] ) )
      continue;
    // closed e.Name#1 as range 9
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: e.Tail#1: 2
    //DEBUG: s.LnNum#1: 12
    //DEBUG: e.Name#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </13 Tile{ HalfReuse: [*]/7 HalfReuse: & ParseSpec$1=1/11 AsIs: s.LnNum#1/12 } (/14 Tile{ AsIs: e.Name#1/9 } Tile{ AsIs: )/8 } {*}/15 Tile{ AsIs: </0 Reuse: & ParsePattern/4 AsIs: t.ErrorList#1/5 } Tile{ AsIs: e.Tail#1/2 } >/16 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( vm, context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( vm, context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_unwrapped_closure( vm, context[15], context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( vm, context[16] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_closure_head( context[7] );
    refalrts::reinit_name( context[11], ref_gen_ParseSpec_S1A1.ref(vm) );
    refalrts::update_name( context[4], ref_ParsePattern.ref(vm) );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[14], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[6] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[7], context[12] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    refalrts::use( res );
    refalrts::wrap_closure( context[15] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseSpec/4 t.ErrorList#1/5 t.Unexpected#1/7 e.Tail#1/2 >/1
  // closed e.Tail#1 as range 2
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: t.Unexpected#1: 7
  //DEBUG: e.Tail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 )/10 Tile{ AsIs: </0 Reuse: & AddUnexpected/4 AsIs: t.ErrorList#1/5 AsIs: t.Unexpected#1/7 }"function name"/11 Tile{ AsIs: >/1 } t.Unexpected#1/7/13 Tile{ AsIs: e.Tail#1/2 } Tile{ ]] }
  if( ! refalrts::alloc_open_bracket( vm, context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[11], context[12], "function name", 13 ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(vm, context[13], context[14], context[7], context[8]))
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_AddUnexpected.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseSpec("ParseSpec", 378583373U, 621461326U, func_ParseSpec);


static refalrts::FnResult func_ParseInclude(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & ParseInclude/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseInclude/4 t.new#1/5 t.new#2/7 e.new#3/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & ParseInclude/4 t.new#4/5 (/7 # TkCompound/13 s.new#5/14 e.new#6/11 )/8 t.new#7/15 e.new#8/9 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
      continue;
    context[13] = refalrts::ident_left(  ident_TkCompound.ref(vm), context[11], context[12] );
    if( ! context[13] )
      continue;
    if( ! refalrts::svar_left( context[14], context[11], context[12] ) )
      continue;
    // closed e.new#6 as range 11
    context[16] = refalrts::tvar_left( context[15], context[9], context[10] );
    if( ! context[16] )
      continue;
    // closed e.new#8 as range 9
    do {
      // </0 & ParseInclude/4 t.ErrorList#1/5 (/7 # TkCompound/13 s.LnNum1#1/14 e.Compound#1/11 )/8 (/15 # TkSemicolon/19 s.LnNum2#1/20 )/16 e.Tail#1/9 >/1
      context[17] = 0;
      context[18] = 0;
      if( ! refalrts::brackets_term( context[17], context[18], context[15] ) )
        continue;
      context[19] = refalrts::ident_left(  ident_TkSemicolon.ref(vm), context[17], context[18] );
      if( ! context[19] )
        continue;
      // closed e.Compound#1 as range 11
      // closed e.Tail#1 as range 9
      if( ! refalrts::svar_left( context[20], context[17], context[18] ) )
        continue;
      if( ! refalrts::empty_seq( context[17], context[18] ) )
        continue;
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: s.LnNum1#1: 14
      //DEBUG: e.Compound#1: 11
      //DEBUG: e.Tail#1: 9
      //DEBUG: s.LnNum2#1: 20

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} & ParseInclude/4 {REMOVED TILE} {REMOVED TILE} # TkSemicolon/19 s.LnNum2#1/20 )/16 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: (/7 Reuse: # Include/13 AsIs: s.LnNum1#1/14 AsIs: e.Compound#1/11 AsIs: )/8 HalfReuse: )/15 } Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: e.Tail#1/9 } Tile{ ]] }
      refalrts::reinit_open_bracket( context[0] );
      refalrts::update_ident( context[13], ident_Include.ref(vm) );
      refalrts::reinit_close_bracket( context[15] );
      refalrts::link_brackets( context[0], context[15] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[7], context[15] );
      refalrts::splice_to_freelist_open( vm, context[0], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ParseInclude/4 t.ErrorList#1/5 (/7 # TkCompound/13 s.LnNum#1/14 e.Compound#1/11 )/8 t.Unexpected#1/15 e.Tail#1/9 >/1
    // closed e.Compound#1 as range 11
    // closed e.Tail#1 as range 9
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: t.Unexpected#1: 15
    //DEBUG: s.LnNum#1: 14
    //DEBUG: e.Compound#1: 11
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/17 Tile{ AsIs: (/7 Reuse: # Include/13 AsIs: s.LnNum#1/14 AsIs: e.Compound#1/11 AsIs: )/8 } )/18 Tile{ AsIs: </0 Reuse: & AddUnexpected/4 AsIs: t.ErrorList#1/5 } Tile{ AsIs: t.Unexpected#1/15 }"semicolon"/19 Tile{ AsIs: >/1 } t.Unexpected#1/15/21 Tile{ AsIs: e.Tail#1/9 } Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( vm, context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( vm, context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( vm, context[19], context[20], "semicolon", 9 ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(vm, context[21], context[22], context[15], context[16]))
      return refalrts::cNoMemory;
    refalrts::update_ident( context[13], ident_Include.ref(vm) );
    refalrts::update_name( context[4], ref_AddUnexpected.ref(vm) );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[0], context[6] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseInclude/4 t.ErrorList#1/5 t.Unexpected#1/7 e.Tail#1/2 >/1
  // closed e.Tail#1 as range 2
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: t.Unexpected#1: 7
  //DEBUG: e.Tail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 )/10 Tile{ AsIs: </0 Reuse: & AddUnexpected/4 AsIs: t.ErrorList#1/5 AsIs: t.Unexpected#1/7 }"compound symbol"/11 Tile{ AsIs: >/1 } t.Unexpected#1/7/13 Tile{ AsIs: e.Tail#1/2 } Tile{ ]] }
  if( ! refalrts::alloc_open_bracket( vm, context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[11], context[12], "compound symbol", 15 ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(vm, context[13], context[14], context[7], context[8]))
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_AddUnexpected.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseInclude("ParseInclude", 378583373U, 621461326U, func_ParseInclude);


static refalrts::FnResult func_ParseNameList(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & ParseNameList/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseNameList/4 (/7 e.new#1/5 )/8 t.new#2/9 s.new#3/11 s.new#4/12 t.new#5/13 e.new#6/2 >/1
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
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#6 as range 2
  do {
    // </0 & ParseNameList/4 (/7 e.AST#1/5 )/8 t.ErrorList#1/9 s.ASTItem#1/11 s.ScopeClass#1/12 (/13 # TkName/17 s.LnNum#1/18 e.Name#1/15 )/14 e.Tail#1/2 >/1
    context[15] = 0;
    context[16] = 0;
    if( ! refalrts::brackets_term( context[15], context[16], context[13] ) )
      continue;
    context[17] = refalrts::ident_left(  ident_TkName.ref(vm), context[15], context[16] );
    if( ! context[17] )
      continue;
    // closed e.AST#1 as range 5
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[18], context[15], context[16] ) )
      continue;
    // closed e.Name#1 as range 15
    //DEBUG: t.ErrorList#1: 9
    //DEBUG: s.ASTItem#1: 11
    //DEBUG: s.ScopeClass#1: 12
    //DEBUG: e.AST#1: 5
    //DEBUG: e.Tail#1: 2
    //DEBUG: s.LnNum#1: 18
    //DEBUG: e.Name#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseNameList-Tail/4 AsIs: (/7 AsIs: e.AST#1/5 HalfReuse: (/8 } Tile{ HalfReuse: s.ASTItem1 #11/17 AsIs: s.LnNum#1/18 } Tile{ AsIs: s.ScopeClass#1/12 } Tile{ AsIs: e.Name#1/15 } )/19 Tile{ HalfReuse: )/13 } Tile{ AsIs: t.ErrorList#1/9 AsIs: s.ASTItem#1/11 } Tile{ HalfReuse: s.ScopeClass1 #12/14 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( vm, context[19] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_ParseNameListm_Tail.ref(vm) );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_svar( context[17], context[11] );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::reinit_svar( context[14], context[12] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[13] );
    refalrts::link_brackets( context[8], context[19] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[14];
    res = refalrts::splice_evar( res, context[9], context[11] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseNameList/4 (/7 e.AST#1/5 )/8 t.ErrorList#1/9 s.ASTItem#1/11 s.ScopeClass#1/12 t.Unexpected#1/13 e.Tail#1/2 >/1
  // closed e.AST#1 as range 5
  // closed e.Tail#1 as range 2
  //DEBUG: t.ErrorList#1: 9
  //DEBUG: t.Unexpected#1: 13
  //DEBUG: s.ASTItem#1: 11
  //DEBUG: s.ScopeClass#1: 12
  //DEBUG: e.AST#1: 5
  //DEBUG: e.Tail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.ASTItem#1/11 s.ScopeClass#1/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.AST#1/5 AsIs: )/8 } Tile{ AsIs: </0 Reuse: & AddUnexpected/4 } Tile{ AsIs: t.ErrorList#1/9 } Tile{ AsIs: t.Unexpected#1/13 }"function name"/15 Tile{ AsIs: >/1 } t.Unexpected#1/13/17 Tile{ AsIs: e.Tail#1/2 } Tile{ ]] }
  if( ! refalrts::alloc_chars( vm, context[15], context[16], "function name", 13 ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(vm, context[17], context[18], context[13], context[14]))
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_AddUnexpected.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseNameList("ParseNameList", 378583373U, 621461326U, func_ParseNameList);


static refalrts::FnResult func_ParseNameListm_Tail(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & ParseNameList-Tail/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseNameList-Tail/4 (/7 e.new#1/5 )/8 t.new#2/9 s.new#3/11 s.new#4/12 t.new#5/13 e.new#6/2 >/1
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
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#6 as range 2
  do {
    // </0 & ParseNameList-Tail/4 (/7 e.new#7/5 )/8 t.new#8/9 s.new#9/11 s.new#10/12 (/13 s.new#11/17 s.new#12/18 )/14 e.new#13/2 >/1
    context[15] = 0;
    context[16] = 0;
    if( ! refalrts::brackets_term( context[15], context[16], context[13] ) )
      continue;
    // closed e.new#7 as range 5
    // closed e.new#13 as range 2
    if( ! refalrts::svar_left( context[17], context[15], context[16] ) )
      continue;
    if( ! refalrts::svar_left( context[18], context[15], context[16] ) )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    do {
      // </0 & ParseNameList-Tail/4 (/7 e.AST#1/5 )/8 t.ErrorList#1/9 s.ASTItem#1/11 s.ScopeClass#1/12 (/13 # TkComma/17 s.LnNum#1/18 )/14 e.Tail#1/2 >/1
      if( ! refalrts::ident_term(  ident_TkComma.ref(vm), context[17] ) )
        continue;
      // closed e.AST#1 as range 5
      // closed e.Tail#1 as range 2
      //DEBUG: t.ErrorList#1: 9
      //DEBUG: s.ASTItem#1: 11
      //DEBUG: s.ScopeClass#1: 12
      //DEBUG: s.LnNum#1: 18
      //DEBUG: e.AST#1: 5
      //DEBUG: e.Tail#1: 2

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/13 # TkComma/17 s.LnNum#1/18 )/14 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseNameList/4 AsIs: (/7 AsIs: e.AST#1/5 AsIs: )/8 AsIs: t.ErrorList#1/9 AsIs: s.ASTItem#1/11 AsIs: s.ScopeClass#1/12 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_ParseNameList.ref(vm) );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[2], context[3] );
      refalrts::splice_to_freelist_open( vm, context[12], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ParseNameList-Tail/4 (/7 e.AST#1/5 )/8 t.ErrorList#1/9 s.ASTItem#1/11 s.ScopeClass#1/12 (/13 # TkSemicolon/17 s.LnNum#1/18 )/14 e.Tail#1/2 >/1
    if( ! refalrts::ident_term(  ident_TkSemicolon.ref(vm), context[17] ) )
      continue;
    // closed e.AST#1 as range 5
    // closed e.Tail#1 as range 2
    //DEBUG: t.ErrorList#1: 9
    //DEBUG: s.ASTItem#1: 11
    //DEBUG: s.ScopeClass#1: 12
    //DEBUG: s.LnNum#1: 18
    //DEBUG: e.AST#1: 5
    //DEBUG: e.Tail#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & ParseNameList-Tail/4 {REMOVED TILE} s.ASTItem#1/11 s.ScopeClass#1/12 (/13 # TkSemicolon/17 s.LnNum#1/18 )/14 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.AST#1/5 AsIs: )/8 AsIs: t.ErrorList#1/9 } Tile{ AsIs: e.Tail#1/2 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[7], context[10] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseNameList-Tail/4 (/7 e.AST#1/5 )/8 t.ErrorList#1/9 s.ASTItem#1/11 s.ScopeClass#1/12 t.Unexpected#1/13 e.Tail#1/2 >/1
  // closed e.AST#1 as range 5
  // closed e.Tail#1 as range 2
  //DEBUG: t.ErrorList#1: 9
  //DEBUG: t.Unexpected#1: 13
  //DEBUG: s.ASTItem#1: 11
  //DEBUG: s.ScopeClass#1: 12
  //DEBUG: e.AST#1: 5
  //DEBUG: e.Tail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.ASTItem#1/11 s.ScopeClass#1/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.AST#1/5 AsIs: )/8 } Tile{ AsIs: </0 Reuse: & AddUnexpected/4 } Tile{ AsIs: t.ErrorList#1/9 } Tile{ AsIs: t.Unexpected#1/13 }"comma or semicolon"/15 Tile{ AsIs: >/1 } t.Unexpected#1/13/17 Tile{ AsIs: e.Tail#1/2 } Tile{ ]] }
  if( ! refalrts::alloc_chars( vm, context[15], context[16], "comma or semicolon", 18 ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(vm, context[17], context[18], context[13], context[14]))
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_AddUnexpected.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseNameListm_Tail("ParseNameList-Tail", 378583373U, 621461326U, func_ParseNameListm_Tail);


static refalrts::FnResult func_ParseNameListm_Idents(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ParseNameList-Idents/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseNameList-Idents/4 (/7 e.new#1/5 )/8 t.new#2/9 t.new#3/11 e.new#4/2 >/1
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
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 2
  do {
    // </0 & ParseNameList-Idents/4 (/7 e.new#5/5 )/8 t.new#6/9 (/11 s.new#7/15 s.new#8/16 e.new#9/13 )/12 e.new#10/2 >/1
    context[13] = 0;
    context[14] = 0;
    if( ! refalrts::brackets_term( context[13], context[14], context[11] ) )
      continue;
    // closed e.new#5 as range 5
    // closed e.new#10 as range 2
    if( ! refalrts::svar_left( context[15], context[13], context[14] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[13], context[14] ) )
      continue;
    // closed e.new#9 as range 13
    do {
      // </0 & ParseNameList-Idents/4 (/7 e.AST#1/5 )/8 t.ErrorList#1/9 (/11 # TkName/15 s.LnNum#1/16 e.Name#1/13 )/12 e.Tail#1/2 >/1
      if( ! refalrts::ident_term(  ident_TkName.ref(vm), context[15] ) )
        continue;
      // closed e.AST#1 as range 5
      // closed e.Name#1 as range 13
      // closed e.Tail#1 as range 2
      //DEBUG: t.ErrorList#1: 9
      //DEBUG: s.LnNum#1: 16
      //DEBUG: e.AST#1: 5
      //DEBUG: e.Name#1: 13
      //DEBUG: e.Tail#1: 2

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseNameList-Idents-Tail/4 AsIs: (/7 AsIs: e.AST#1/5 HalfReuse: (/8 } Tile{ Reuse: # Ident/15 AsIs: s.LnNum#1/16 AsIs: e.Name#1/13 AsIs: )/12 } Tile{ HalfReuse: )/11 } Tile{ AsIs: t.ErrorList#1/9 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_ParseNameListm_Identsm_Tail.ref(vm) );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::update_ident( context[15], ident_Ident.ref(vm) );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      refalrts::link_brackets( context[8], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[11], context[11] );
      res = refalrts::splice_evar( res, context[15], context[12] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ParseNameList-Idents/4 (/7 e.AST#1/5 )/8 t.ErrorList#1/9 (/11 # TkCompound/15 s.LnNum#1/16 e.Name#1/13 )/12 e.Tail#1/2 >/1
    if( ! refalrts::ident_term(  ident_TkCompound.ref(vm), context[15] ) )
      continue;
    // closed e.AST#1 as range 5
    // closed e.Name#1 as range 13
    // closed e.Tail#1 as range 2
    //DEBUG: t.ErrorList#1: 9
    //DEBUG: s.LnNum#1: 16
    //DEBUG: e.AST#1: 5
    //DEBUG: e.Name#1: 13
    //DEBUG: e.Tail#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseNameList-Idents-Tail/4 AsIs: (/7 AsIs: e.AST#1/5 HalfReuse: (/8 } Tile{ Reuse: # Ident/15 AsIs: s.LnNum#1/16 AsIs: e.Name#1/13 AsIs: )/12 } Tile{ HalfReuse: )/11 } Tile{ AsIs: t.ErrorList#1/9 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_ParseNameListm_Identsm_Tail.ref(vm) );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::update_ident( context[15], ident_Ident.ref(vm) );
    refalrts::reinit_close_bracket( context[11] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[11] );
    refalrts::link_brackets( context[8], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[15], context[12] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseNameList-Idents/4 (/7 e.AST#1/5 )/8 t.ErrorList#1/9 t.Unexpected#1/11 e.Tail#1/2 >/1
  // closed e.AST#1 as range 5
  // closed e.Tail#1 as range 2
  //DEBUG: t.ErrorList#1: 9
  //DEBUG: t.Unexpected#1: 11
  //DEBUG: e.AST#1: 5
  //DEBUG: e.Tail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.AST#1/5 AsIs: )/8 } Tile{ AsIs: </0 Reuse: & AddUnexpected/4 } Tile{ AsIs: t.ErrorList#1/9 AsIs: t.Unexpected#1/11 }"identifier name or compound symbol"/13 Tile{ AsIs: >/1 } t.Unexpected#1/11/15 Tile{ AsIs: e.Tail#1/2 } Tile{ ]] }
  if( ! refalrts::alloc_chars( vm, context[13], context[14], "identifier name or compound symbol", 34 ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(vm, context[15], context[16], context[11], context[12]))
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_AddUnexpected.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[9], context[12] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseNameListm_Idents("ParseNameList-Idents", 378583373U, 621461326U, func_ParseNameListm_Idents);


static refalrts::FnResult func_ParseNameListm_Identsm_Tail(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ParseNameList-Idents-Tail/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseNameList-Idents-Tail/4 (/7 e.new#1/5 )/8 t.new#2/9 t.new#3/11 e.new#4/2 >/1
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
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 2
  do {
    // </0 & ParseNameList-Idents-Tail/4 (/7 e.new#5/5 )/8 t.new#6/9 (/11 s.new#7/15 s.new#8/16 )/12 e.new#9/2 >/1
    context[13] = 0;
    context[14] = 0;
    if( ! refalrts::brackets_term( context[13], context[14], context[11] ) )
      continue;
    // closed e.new#5 as range 5
    // closed e.new#9 as range 2
    if( ! refalrts::svar_left( context[15], context[13], context[14] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[13], context[14] ) )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    do {
      // </0 & ParseNameList-Idents-Tail/4 (/7 e.AST#1/5 )/8 t.ErrorList#1/9 (/11 # TkComma/15 s.LnNum#1/16 )/12 e.Tail#1/2 >/1
      if( ! refalrts::ident_term(  ident_TkComma.ref(vm), context[15] ) )
        continue;
      // closed e.AST#1 as range 5
      // closed e.Tail#1 as range 2
      //DEBUG: t.ErrorList#1: 9
      //DEBUG: s.LnNum#1: 16
      //DEBUG: e.AST#1: 5
      //DEBUG: e.Tail#1: 2

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/11 # TkComma/15 s.LnNum#1/16 )/12 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseNameList-Idents/4 AsIs: (/7 AsIs: e.AST#1/5 AsIs: )/8 AsIs: t.ErrorList#1/9 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_ParseNameListm_Idents.ref(vm) );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[2], context[3] );
      refalrts::splice_to_freelist_open( vm, context[10], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ParseNameList-Idents-Tail/4 (/7 e.AST#1/5 )/8 t.ErrorList#1/9 (/11 # TkSemicolon/15 s.LnNum#1/16 )/12 e.Tail#1/2 >/1
    if( ! refalrts::ident_term(  ident_TkSemicolon.ref(vm), context[15] ) )
      continue;
    // closed e.AST#1 as range 5
    // closed e.Tail#1 as range 2
    //DEBUG: t.ErrorList#1: 9
    //DEBUG: s.LnNum#1: 16
    //DEBUG: e.AST#1: 5
    //DEBUG: e.Tail#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & ParseNameList-Idents-Tail/4 {REMOVED TILE} (/11 # TkSemicolon/15 s.LnNum#1/16 )/12 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.AST#1/5 AsIs: )/8 AsIs: t.ErrorList#1/9 } Tile{ AsIs: e.Tail#1/2 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[7], context[10] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseNameList-Idents-Tail/4 (/7 e.AST#1/5 )/8 t.ErrorList#1/9 t.Unexpected#1/11 e.Tail#1/2 >/1
  // closed e.AST#1 as range 5
  // closed e.Tail#1 as range 2
  //DEBUG: t.ErrorList#1: 9
  //DEBUG: t.Unexpected#1: 11
  //DEBUG: e.AST#1: 5
  //DEBUG: e.Tail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.AST#1/5 AsIs: )/8 } Tile{ AsIs: </0 Reuse: & AddUnexpected/4 } Tile{ AsIs: t.ErrorList#1/9 AsIs: t.Unexpected#1/11 }"comma or semicolon"/13 Tile{ AsIs: >/1 } t.Unexpected#1/11/15 Tile{ AsIs: e.Tail#1/2 } Tile{ ]] }
  if( ! refalrts::alloc_chars( vm, context[13], context[14], "comma or semicolon", 18 ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(vm, context[15], context[16], context[11], context[12]))
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_AddUnexpected.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[9], context[12] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseNameListm_Identsm_Tail("ParseNameList-Idents-Tail", 378583373U, 621461326U, func_ParseNameListm_Identsm_Tail);


static refalrts::FnResult func_gen_ParseFunction_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ParseFunction$1=1/4 s.LnNum#1/5 s.ScopeClass#1/6 (/9 e.Name#1/7 )/10 (/13 e.Block#2/11 )/14 t.ErrorList#2/15 e.Tail#2/2 >/1
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
  // closed e.Name#1 as range 7
  // closed e.Block#2 as range 11
  context[16] = refalrts::tvar_left( context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#2 as range 2
  //DEBUG: s.LnNum#1: 5
  //DEBUG: s.ScopeClass#1: 6
  //DEBUG: e.Name#1: 7
  //DEBUG: e.Block#2: 11
  //DEBUG: t.ErrorList#2: 15
  //DEBUG: e.Tail#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/13 } Tile{ HalfReuse: (/0 HalfReuse: # Function/4 AsIs: s.LnNum#1/5 AsIs: s.ScopeClass#1/6 AsIs: (/9 AsIs: e.Name#1/7 AsIs: )/10 } Tile{ AsIs: e.Block#2/11 } Tile{ HalfReuse: )/1 } Tile{ AsIs: )/14 AsIs: t.ErrorList#2/15 } Tile{ AsIs: e.Tail#2/2 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], ident_Function.ref(vm) );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[14], context[16] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[0], context[10] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseFunction_S1A1("ParseFunction$1=1", 378583373U, 621461326U, func_gen_ParseFunction_S1A1);


static refalrts::FnResult func_ParseFunction(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & ParseFunction/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseFunction/4 s.new#1/5 (/8 e.new#2/6 )/9 t.new#3/10 t.new#4/12 e.new#5/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  // closed e.new#2 as range 6
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  context[13] = refalrts::tvar_left( context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#5 as range 2
  do {
    // </0 & ParseFunction/4 s.ScopeClass#1/5 (/8 e.Name#1/6 )/9 t.ErrorList#1/10 (/12 # TkOpenBlock/16 s.LnNum#1/17 )/13 e.Tail#1/2 >/1
    context[14] = 0;
    context[15] = 0;
    if( ! refalrts::brackets_term( context[14], context[15], context[12] ) )
      continue;
    context[16] = refalrts::ident_left(  ident_TkOpenBlock.ref(vm), context[14], context[15] );
    if( ! context[16] )
      continue;
    // closed e.Name#1 as range 6
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[17], context[14], context[15] ) )
      continue;
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;
    //DEBUG: t.ErrorList#1: 10
    //DEBUG: s.ScopeClass#1: 5
    //DEBUG: e.Name#1: 6
    //DEBUG: e.Tail#1: 2
    //DEBUG: s.LnNum#1: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.LnNum#1/17 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </13 } [*]/18 Tile{ HalfReuse: & ParseFunction$1=1/0 HalfReuse: s.LnNum1 #17/4 AsIs: s.ScopeClass#1/5 AsIs: (/8 AsIs: e.Name#1/6 AsIs: )/9 } {*}/19 Tile{ HalfReuse: </12 HalfReuse: & ParseBlock/16 } Tile{ AsIs: t.ErrorList#1/10 } Tile{ AsIs: e.Tail#1/2 } >/20 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_closure_head( vm, context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_unwrapped_closure( vm, context[19], context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( vm, context[20] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_call( context[13] );
    refalrts::reinit_name( context[0], ref_gen_ParseFunction_S1A1.ref(vm) );
    refalrts::reinit_svar( context[4], context[17] );
    refalrts::reinit_open_call( context[12] );
    refalrts::reinit_name( context[16], ref_ParseBlock.ref(vm) );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[12] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[12], context[16] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[0], context[9] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    refalrts::wrap_closure( context[19] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseFunction/4 s.ScopeClass#1/5 (/8 e.Name#1/6 )/9 t.ErrorList#1/10 t.Unexpected#1/12 e.Tail#1/2 >/1
  // closed e.Name#1 as range 6
  // closed e.Tail#1 as range 2
  //DEBUG: t.ErrorList#1: 10
  //DEBUG: t.Unexpected#1: 12
  //DEBUG: s.ScopeClass#1: 5
  //DEBUG: e.Name#1: 6
  //DEBUG: e.Tail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.ScopeClass#1/5 {REMOVED TILE} e.Name#1/6 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: )/4 } </14 Tile{ HalfReuse: & AddUnexpected/9 AsIs: t.ErrorList#1/10 AsIs: t.Unexpected#1/12 } 'o'/15 Tile{ HalfReuse: 'p'/8 }"en brace"/16 Tile{ AsIs: >/1 } t.Unexpected#1/12/18 Tile{ AsIs: e.Tail#1/2 } Tile{ ]] }
  if( ! refalrts::alloc_open_call( vm, context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( vm, context[15], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[16], context[17], "en brace", 8 ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(vm, context[18], context[19], context[12], context[13]))
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::reinit_name( context[9], ref_AddUnexpected.ref(vm) );
  refalrts::reinit_char( context[8], 'p' );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[14] );
  refalrts::link_brackets( context[0], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[9], context[13] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseFunction("ParseFunction", 378583373U, 621461326U, func_ParseFunction);


static refalrts::FnResult func_ParseBlock(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & ParseBlock/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseBlock/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & ParseBlock/4 t.ErrorList#1/5 (/11 # TkNativeBlock/13 t.SrcPos#1/14 e.Block#1/9 )/12 e.Tokens#1/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  ident_TkNativeBlock.ref(vm), context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Tokens#1 as range 7
    context[15] = refalrts::tvar_left( context[14], context[9], context[10] );
    if( ! context[15] )
      continue;
    // closed e.Block#1 as range 9
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: e.Tokens#1: 7
    //DEBUG: t.SrcPos#1: 14
    //DEBUG: e.Block#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 Reuse: # NativeBody/13 AsIs: t.SrcPos#1/14 AsIs: e.Block#1/9 AsIs: )/12 } Tile{ AsIs: </0 Reuse: & Expect/4 } # TkCloseBlock/16 (/17 '}'/18 )/19 Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: e.Tokens#1/7 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( vm, context[16], ident_TkCloseBlock.ref(vm) ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( vm, context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( vm, context[18], '}' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( vm, context[19] ) )
      return refalrts::cNoMemory;
    refalrts::update_ident( context[13], ident_NativeBody.ref(vm) );
    refalrts::update_name( context[4], ref_Expect.ref(vm) );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[17], context[19] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[16], context[19] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseBlock/4 t.ErrorList#1/5 e.Tokens#1/2 >/1
  // closed e.Tokens#1 as range 2
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoParseBlock/4 AsIs: t.ErrorList#1/5 } (/7 )/8 Tile{ AsIs: e.Tokens#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( vm, context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[8] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_DoParseBlock.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseBlock("ParseBlock", 378583373U, 621461326U, func_ParseBlock);


static refalrts::FnResult func_Expect(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Expect/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Expect/4 s.new#1/5 (/8 e.new#2/6 )/9 t.new#3/10 t.new#4/12 e.new#5/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  // closed e.new#2 as range 6
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  context[13] = refalrts::tvar_left( context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#5 as range 2
  do {
    // </0 & Expect/4 s.Expected#1/5 (/8 e.ExpectedText#1/6 )/9 t.ErrorList#1/10 (/12 s.Expected#1/16 t.SrcPos#1/17 )/13 e.Tokens#1/2 >/1
    context[14] = 0;
    context[15] = 0;
    if( ! refalrts::brackets_term( context[14], context[15], context[12] ) )
      continue;
    if( ! refalrts::repeated_stvar_left( vm, context[16], context[5], context[14], context[15] ) )
      continue;
    // closed e.ExpectedText#1 as range 6
    // closed e.Tokens#1 as range 2
    context[18] = refalrts::tvar_left( context[17], context[14], context[15] );
    if( ! context[18] )
      continue;
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;
    //DEBUG: t.ErrorList#1: 10
    //DEBUG: s.Expected#1: 5
    //DEBUG: e.ExpectedText#1: 6
    //DEBUG: e.Tokens#1: 2
    //DEBUG: t.SrcPos#1: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Expect/4 s.Expected#1/5 (/8 e.ExpectedText#1/6 )/9 {REMOVED TILE} (/12 s.Expected#1/16 t.SrcPos#1/17 )/13 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/10 } Tile{ AsIs: e.Tokens#1/2 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Expect/4 s.Expected#1/5 (/8 e.ExpectedText#1/6 )/9 t.ErrorList#1/10 t.Unexpected#1/12 e.Tokens#1/2 >/1
  // closed e.ExpectedText#1 as range 6
  // closed e.Tokens#1 as range 2
  //DEBUG: t.ErrorList#1: 10
  //DEBUG: t.Unexpected#1: 12
  //DEBUG: s.Expected#1: 5
  //DEBUG: e.ExpectedText#1: 6
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Expected#1/5 (/8 {REMOVED TILE} )/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & AddUnexpected/4 } Tile{ AsIs: t.ErrorList#1/10 AsIs: t.Unexpected#1/12 } Tile{ AsIs: e.ExpectedText#1/6 } Tile{ AsIs: >/1 } t.Unexpected#1/12/14 Tile{ AsIs: e.Tokens#1/2 } Tile{ ]] }
  if (! refalrts::copy_evar(vm, context[14], context[15], context[12], context[13]))
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_AddUnexpected.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[10], context[13] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Expect("Expect", 378583373U, 621461326U, func_Expect);


static refalrts::FnResult func_gen_DoParseBlock_S3A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & DoParseBlock$3=1/4 (/7 e.Sentences#1/5 )/8 (/11 e.Sentence#2/9 )/12 t.ErrorList#2/13 e.Tail#2/2 >/1
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
  // closed e.Sentences#1 as range 5
  // closed e.Sentence#2 as range 9
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#2 as range 2
  //DEBUG: e.Sentences#1: 5
  //DEBUG: e.Sentence#2: 9
  //DEBUG: t.ErrorList#2: 13
  //DEBUG: e.Tail#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoParseBlock/4 } Tile{ AsIs: t.ErrorList#2/13 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Sentences#1/5 } Tile{ AsIs: (/11 AsIs: e.Sentence#2/9 AsIs: )/12 } Tile{ AsIs: )/8 } Tile{ AsIs: e.Tail#2/2 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_DoParseBlock.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoParseBlock_S3A1("DoParseBlock$3=1", 378583373U, 621461326U, func_gen_DoParseBlock_S3A1);


static refalrts::FnResult func_DoParseBlock(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & DoParseBlock/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoParseBlock/4 t.new#1/5 (/9 e.new#2/7 )/10 e.new#3/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[9], context[10]);
  // closed e.new#2 as range 7
  // closed e.new#3 as range 2
  do {
    // </0 & DoParseBlock/4 t.new#4/5 (/9 e.new#5/7 )/10 (/15 s.new#6/17 s.new#7/18 )/16 e.new#8/11 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[11], context[12] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    // closed e.new#5 as range 7
    // closed e.new#8 as range 11
    if( ! refalrts::svar_left( context[17], context[13], context[14] ) )
      continue;
    if( ! refalrts::svar_left( context[18], context[13], context[14] ) )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    do {
      // </0 & DoParseBlock/4 t.ErrorList#1/5 (/9 e.Sentences#1/7 )/10 (/15 # TkCloseBlock/17 s.LnNumber#1/18 )/16 e.Tail#1/11 >/1
      if( ! refalrts::ident_term(  ident_TkCloseBlock.ref(vm), context[17] ) )
        continue;
      // closed e.Sentences#1 as range 7
      // closed e.Tail#1 as range 11
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: s.LnNumber#1: 18
      //DEBUG: e.Sentences#1: 7
      //DEBUG: e.Tail#1: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} & DoParseBlock/4 {REMOVED TILE} {REMOVED TILE} (/15 # TkCloseBlock/17 s.LnNumber#1/18 )/16 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ HalfReuse: # Sentences/9 AsIs: e.Sentences#1/7 AsIs: )/10 } Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: e.Tail#1/11 } Tile{ ]] }
      refalrts::reinit_open_bracket( context[0] );
      refalrts::reinit_ident( context[9], ident_Sentences.ref(vm) );
      refalrts::link_brackets( context[0], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[0], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoParseBlock/4 t.ErrorList#1/5 (/9 e.Sentences#1/7 )/10 (/15 # TkEOF/17 s.LnNum#1/18 )/16 e.Tail#1/11 >/1
    if( ! refalrts::ident_term(  ident_TkEOF.ref(vm), context[17] ) )
      continue;
    // closed e.Sentences#1 as range 7
    // closed e.Tail#1 as range 11
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: s.LnNum#1: 18
    //DEBUG: e.Sentences#1: 7
    //DEBUG: e.Tail#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/19 # Sentences/20 Tile{ AsIs: e.Sentences#1/7 } )/21 Tile{ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#1/5 HalfReuse: s.LnNum1 #18/9 } 'U'/22 Tile{ HalfReuse: 'n'/1 }"expected EOF, expected \"}\""/23 Tile{ HalfReuse: >/10 AsIs: (/15 AsIs: # TkEOF/17 AsIs: s.LnNum#1/18 AsIs: )/16 } Tile{ AsIs: e.Tail#1/11 } Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( vm, context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( vm, context[20], ident_Sentences.ref(vm) ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( vm, context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( vm, context[22], 'U' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( vm, context[23], context[24], "expected EOF, expected \"}\"", 26 ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_ELm_AddErrorAt.ref(vm) );
    refalrts::reinit_svar( context[9], context[18] );
    refalrts::reinit_char( context[1], 'n' );
    refalrts::reinit_close_call( context[10] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[19], context[21] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[10], context[16] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[0], context[9] );
    res = refalrts::splice_evar( res, context[21], context[21] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoParseBlock/4 t.ErrorList#1/5 (/9 e.Sentences#1/7 )/10 e.Tokens#1/2 >/1
  // closed e.Sentences#1 as range 7
  // closed e.Tokens#1 as range 2
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: e.Sentences#1: 7
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </11 [*]/12 & DoParseBlock$3=1/13 Tile{ AsIs: (/9 AsIs: e.Sentences#1/7 AsIs: )/10 } {*}/14 Tile{ AsIs: </0 Reuse: & ParseSentence/4 AsIs: t.ErrorList#1/5 } Tile{ AsIs: e.Tokens#1/2 } >/15 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_closure_head( vm, context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[13], ref_gen_DoParseBlock_S3A1.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[14], context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[15] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_ParseSentence.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[11], context[13] );
  refalrts::use( res );
  refalrts::wrap_closure( context[14] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoParseBlock("DoParseBlock", 378583373U, 621461326U, func_DoParseBlock);


static refalrts::FnResult func_gen_ParseSentence_B1S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & ParseSentence:1$1=1/4 (/7 e.StartPattern#2/5 )/8 (/11 e.Result#2/9 )/12 (/15 e.Blocks#2/13 )/16 (/19 e.Tokens#2/17 )/20 t.ErrorList#4/21 >/1
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
  // closed e.StartPattern#2 as range 5
  // closed e.Result#2 as range 9
  // closed e.Blocks#2 as range 13
  // closed e.Tokens#2 as range 17
  context[22] = refalrts::tvar_left( context[21], context[2], context[3] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.StartPattern#2: 5
  //DEBUG: e.Result#2: 9
  //DEBUG: e.Blocks#2: 13
  //DEBUG: e.Tokens#2: 17
  //DEBUG: t.ErrorList#4: 21

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} )/20 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: (/7 AsIs: e.StartPattern#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.Result#2/9 AsIs: )/12 AsIs: (/15 AsIs: e.Blocks#2/13 AsIs: )/16 HalfReuse: )/19 } Tile{ AsIs: t.ErrorList#4/21 } Tile{ AsIs: e.Tokens#2/17 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_close_bracket( context[19] );
  refalrts::link_brackets( context[4], context[19] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[4], context[19] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseSentence_B1S1A1("ParseSentence:1$1=1", 378583373U, 621461326U, func_gen_ParseSentence_B1S1A1);


static refalrts::FnResult func_gen_ParseSentence_B1S1A1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & ParseSentence:1$1=1\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseSentence:1$1=1\1/4 t.new#1/5 t.new#2/7 s.new#3/9 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ParseSentence:1$1=1\1/4 t.ErrorList#2/5 t.SrcPos#3/7 # Assign/9 >/1
    if( ! refalrts::ident_term(  ident_Assign.ref(vm), context[9] ) )
      continue;
    //DEBUG: t.ErrorList#2: 5
    //DEBUG: t.SrcPos#3: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & ParseSentence:1$1=1\1/4 {REMOVED TILE} t.SrcPos#3/7 # Assign/9 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#2/5 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseSentence:1$1=1\1/4 t.ErrorList#2/5 t.SrcPos#3/7 # Condition/9 >/1
  if( ! refalrts::ident_term(  ident_Condition.ref(vm), context[9] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.ErrorList#2: 5
  //DEBUG: t.SrcPos#3: 7

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#2/5 AsIs: t.SrcPos#3/7 HalfReuse: 'B'/9 HalfReuse: 'e'/1 }"fore the last result expr must be \"=\""/10 >/12 Tile{ ]] }
  if( ! refalrts::alloc_chars( vm, context[10], context[11], "fore the last result expr must be \"=\"", 37 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[12] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_ELm_AddErrorAt.ref(vm) );
  refalrts::reinit_char( context[9], 'B' );
  refalrts::reinit_char( context[1], 'e' );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[10], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseSentence_B1S1A1L1("ParseSentence:1$1=1\\1", 378583373U, 621461326U, func_gen_ParseSentence_B1S1A1L1);


static refalrts::FnResult func_gen_ParseSentence_B1S2A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & ParseSentence:1$2=2/4 (/7 e.StartPattern#2/5 )/8 (/11 e.EndResult#4/9 )/12 (/15 e.EndBlocks#4/13 )/16 t.ErrorList#4/17 (/21 e.Tokens#4/19 )/22 e.AssignmentsANDCond#5/2 >/1
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
  // closed e.StartPattern#2 as range 5
  // closed e.EndResult#4 as range 9
  // closed e.EndBlocks#4 as range 13
  context[18] = refalrts::tvar_left( context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  context[19] = 0;
  context[20] = 0;
  context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[21], context[22]);
  // closed e.Tokens#4 as range 19
  // closed e.AssignmentsANDCond#5 as range 2
  //DEBUG: e.StartPattern#2: 5
  //DEBUG: e.EndResult#4: 9
  //DEBUG: e.EndBlocks#4: 13
  //DEBUG: t.ErrorList#4: 17
  //DEBUG: e.Tokens#4: 19
  //DEBUG: e.AssignmentsANDCond#5: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: (/7 AsIs: e.StartPattern#2/5 AsIs: )/8 } Tile{ AsIs: e.AssignmentsANDCond#5/2 } Tile{ AsIs: (/11 AsIs: e.EndResult#4/9 AsIs: )/12 AsIs: (/15 AsIs: e.EndBlocks#4/13 AsIs: )/16 } Tile{ AsIs: )/22 } Tile{ AsIs: t.ErrorList#4/17 } Tile{ AsIs: e.Tokens#4/19 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[4] );
  refalrts::link_brackets( context[4], context[22] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[11], context[16] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseSentence_B1S2A2("ParseSentence:1$2=2", 378583373U, 621461326U, func_gen_ParseSentence_B1S2A2);


static refalrts::FnResult func_gen_ParseSentence_B1S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 40 elems
  refalrts::Iter context[40];
  refalrts::zeros( context, 40 );
  // </0 & ParseSentence:1$2=1/4 (/7 e.StartPattern#2/5 )/8 s.Type#2/9 (/12 e.Result#2/10 )/13 (/16 e.Blocks#2/14 )/17 (/20 (/24 e.InnerPattern#4/22 )/25 e.AssignmentsANDCond#4/18 (/32 e.EndResult#4/30 )/33 (/28 e.EndBlocks#4/26 )/29 )/21 t.ErrorList#4/34 e.Tokens#4/2 >/1
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
  // closed e.StartPattern#2 as range 5
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
  context[24] = refalrts::brackets_left( context[22], context[23], context[18], context[19] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[24], context[25]);
  context[26] = 0;
  context[27] = 0;
  context[28] = refalrts::brackets_right( context[26], context[27], context[18], context[19] );
  if( ! context[28] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[28], context[29]);
  context[30] = 0;
  context[31] = 0;
  context[32] = refalrts::brackets_right( context[30], context[31], context[18], context[19] );
  if( ! context[32] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[32], context[33]);
  // closed e.Result#2 as range 10
  // closed e.Blocks#2 as range 14
  // closed e.InnerPattern#4 as range 22
  // closed e.AssignmentsANDCond#4 as range 18
  // closed e.EndResult#4 as range 30
  // closed e.EndBlocks#4 as range 26
  context[35] = refalrts::tvar_left( context[34], context[2], context[3] );
  if( ! context[35] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tokens#4 as range 2
  //DEBUG: e.StartPattern#2: 5
  //DEBUG: s.Type#2: 9
  //DEBUG: e.Result#2: 10
  //DEBUG: e.Blocks#2: 14
  //DEBUG: e.InnerPattern#4: 22
  //DEBUG: e.AssignmentsANDCond#4: 18
  //DEBUG: e.EndResult#4: 30
  //DEBUG: e.EndBlocks#4: 26
  //DEBUG: t.ErrorList#4: 34
  //DEBUG: e.Tokens#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 HalfReuse: & ParseSentence:1$2=2/7 } Tile{ AsIs: (/24 } Tile{ AsIs: e.StartPattern#2/5 } Tile{ AsIs: )/25 } Tile{ AsIs: (/32 AsIs: e.EndResult#4/30 AsIs: )/33 AsIs: (/28 AsIs: e.EndBlocks#4/26 AsIs: )/29 } Tile{ AsIs: t.ErrorList#4/34 } (/36 Tile{ AsIs: e.Tokens#4/2 } Tile{ AsIs: )/21 } {*}/37 Tile{ HalfReuse: (/8 AsIs: s.Type#2/9 AsIs: (/12 AsIs: e.Result#2/10 AsIs: )/13 AsIs: (/16 AsIs: e.Blocks#2/14 AsIs: )/17 AsIs: (/20 } Tile{ AsIs: e.InnerPattern#4/22 } )/38 )/39 Tile{ AsIs: e.AssignmentsANDCond#4/18 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( vm, context[36] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[37], context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[38] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[39] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[4] );
  refalrts::reinit_name( context[7], ref_gen_ParseSentence_B1S2A2.ref(vm) );
  refalrts::reinit_open_bracket( context[8] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[8], context[39] );
  refalrts::link_brackets( context[20], context[38] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[36], context[21] );
  refalrts::link_brackets( context[28], context[29] );
  refalrts::link_brackets( context[32], context[33] );
  refalrts::link_brackets( context[24], context[25] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[38], context[39] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[8], context[20] );
  res = refalrts::splice_evar( res, context[37], context[37] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[36], context[36] );
  res = refalrts::splice_evar( res, context[34], context[35] );
  res = refalrts::splice_evar( res, context[32], context[29] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  refalrts::use( res );
  refalrts::wrap_closure( context[37] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseSentence_B1S2A1("ParseSentence:1$2=1", 378583373U, 621461326U, func_gen_ParseSentence_B1S2A1);


static refalrts::FnResult func_gen_ParseSentence_B1S4A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  // </0 & ParseSentence:1$4=1/4 (/7 e.StartPattern#2/5 )/8 (/11 e.Result#2/9 )/12 (/15 e.Blocks#2/13 )/16 t.ErrorList#2/17 t.SrcPos#3/19 >/1
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
  // closed e.StartPattern#2 as range 5
  // closed e.Result#2 as range 9
  // closed e.Blocks#2 as range 13
  context[18] = refalrts::tvar_left( context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  context[20] = refalrts::tvar_left( context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.StartPattern#2: 5
  //DEBUG: e.Result#2: 9
  //DEBUG: e.Blocks#2: 13
  //DEBUG: t.ErrorList#2: 17
  //DEBUG: t.SrcPos#3: 19

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: (/7 AsIs: e.StartPattern#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.Result#2/9 AsIs: )/12 AsIs: (/15 AsIs: e.Blocks#2/13 AsIs: )/16 } )/21 Tile{ AsIs: </0 } & EL-AddErrorAt/22 Tile{ AsIs: t.ErrorList#2/17 AsIs: t.SrcPos#3/19 HalfReuse: 'U'/1 }"nexpected EOF in function"/23 >/25 (/26 # TkEOF/27 t.SrcPos#3/19/28 )/30 Tile{ ]] }
  if( ! refalrts::alloc_close_bracket( vm, context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[22], ref_ELm_AddErrorAt.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[23], context[24], "nexpected EOF in function", 25 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[27], ident_TkEOF.ref(vm) ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(vm, context[28], context[29], context[19], context[20]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[30] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_char( context[1], 'U' );
  refalrts::link_brackets( context[26], context[30] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[4], context[21] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[23], context[30] );
  res = refalrts::splice_evar( res, context[17], context[1] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[4], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseSentence_B1S4A1("ParseSentence:1$4=1", 378583373U, 621461326U, func_gen_ParseSentence_B1S4A1);


static refalrts::FnResult func_gen_ParseSentence_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
  // </0 & ParseSentence:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseSentence:1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 (/15 e.new#3/13 )/16 (/19 e.new#4/17 )/20 s.new#5/21 t.new#6/22 t.new#7/24 >/1
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
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  // closed e.new#3 as range 13
  // closed e.new#4 as range 17
  if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
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
    // </0 & ParseSentence:1/4 (/7 e.new#8/5 )/8 (/11 e.new#9/9 )/12 (/15 e.new#10/13 )/16 (/19 e.new#11/17 )/20 s.new#12/21 t.new#13/22 (/24 s.new#14/28 t.new#15/29 )/25 >/1
    context[26] = 0;
    context[27] = 0;
    if( ! refalrts::brackets_term( context[26], context[27], context[24] ) )
      continue;
    // closed e.new#8 as range 5
    // closed e.new#9 as range 9
    // closed e.new#10 as range 13
    // closed e.new#11 as range 17
    if( ! refalrts::svar_left( context[28], context[26], context[27] ) )
      continue;
    context[30] = refalrts::tvar_left( context[29], context[26], context[27] );
    if( ! context[30] )
      continue;
    if( ! refalrts::empty_seq( context[26], context[27] ) )
      continue;
    do {
      // </0 & ParseSentence:1/4 (/7 e.StartPattern#2/5 )/8 (/11 e.Result#2/9 )/12 (/15 e.Blocks#2/13 )/16 (/19 e.Tokens#2/17 )/20 s.Type#2/21 t.ErrorList#2/22 (/24 # TkSemicolon/28 t.SrcPos#3/29 )/25 >/1
      if( ! refalrts::ident_term(  ident_TkSemicolon.ref(vm), context[28] ) )
        continue;
      // closed e.StartPattern#2 as range 5
      // closed e.Result#2 as range 9
      // closed e.Blocks#2 as range 13
      // closed e.Tokens#2 as range 17
      //DEBUG: t.ErrorList#2: 22
      //DEBUG: t.SrcPos#3: 29
      //DEBUG: s.Type#2: 21
      //DEBUG: e.StartPattern#2: 5
      //DEBUG: e.Result#2: 9
      //DEBUG: e.Blocks#2: 13
      //DEBUG: e.Tokens#2: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </31 Tile{ HalfReuse: [*]/0 Reuse: & ParseSentence:1$1=1/4 AsIs: (/7 AsIs: e.StartPattern#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.Result#2/9 AsIs: )/12 AsIs: (/15 AsIs: e.Blocks#2/13 AsIs: )/16 AsIs: (/19 AsIs: e.Tokens#2/17 AsIs: )/20 } {*}/32 Tile{ HalfReuse: </24 HalfReuse: & Fetch/28 } Tile{ AsIs: s.Type#2/21 } [*]/33 & ParseSentence:1$1=1\1/34 Tile{ AsIs: t.ErrorList#2/22 } Tile{ AsIs: t.SrcPos#3/29 HalfReuse: {*}/25 AsIs: >/1 } >/35 Tile{ ]] }
      if( ! refalrts::alloc_open_call( vm, context[31] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_unwrapped_closure( vm, context[32], context[0] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_closure_head( vm, context[33] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( vm, context[34], ref_gen_ParseSentence_B1S1A1L1.ref(vm) ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( vm, context[35] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_closure_head( context[0] );
      refalrts::update_name( context[4], ref_gen_ParseSentence_B1S1A1.ref(vm) );
      refalrts::reinit_open_call( context[24] );
      refalrts::reinit_name( context[28], ref_Fetch.ref(vm) );
      refalrts::reinit_unwrapped_closure( context[25], context[33] );
      refalrts::push_stack( vm, context[35] );
      refalrts::push_stack( vm, context[31] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[24] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[35], context[35] );
      res = refalrts::splice_evar( res, context[29], context[1] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      res = refalrts::splice_evar( res, context[21], context[21] );
      res = refalrts::splice_evar( res, context[24], context[28] );
      res = refalrts::splice_evar( res, context[32], context[32] );
      res = refalrts::splice_evar( res, context[0], context[20] );
      res = refalrts::splice_evar( res, context[31], context[31] );
      refalrts::use( res );
      refalrts::wrap_closure( context[32] );
      refalrts::wrap_closure( context[25] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseSentence:1/4 (/7 e.StartPattern#2/5 )/8 (/11 e.Result#2/9 )/12 (/15 e.Blocks#2/13 )/16 (/19 e.Tokens#2/17 )/20 s.Type#2/21 t.ErrorList#2/22 (/24 # TkColon/28 t.SrcPos#3/29 )/25 >/1
      if( ! refalrts::ident_term(  ident_TkColon.ref(vm), context[28] ) )
        continue;
      // closed e.StartPattern#2 as range 5
      // closed e.Result#2 as range 9
      // closed e.Blocks#2 as range 13
      // closed e.Tokens#2 as range 17
      //DEBUG: t.ErrorList#2: 22
      //DEBUG: t.SrcPos#3: 29
      //DEBUG: s.Type#2: 21
      //DEBUG: e.StartPattern#2: 5
      //DEBUG: e.Result#2: 9
      //DEBUG: e.Blocks#2: 13
      //DEBUG: e.Tokens#2: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Type#2/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SrcPos#3/29 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 HalfReuse: & ParseSentence:1$2=1/7 } Tile{ AsIs: (/24 } Tile{ AsIs: e.StartPattern#2/5 } Tile{ AsIs: )/20 } Tile{ HalfReuse: s.Type2 #21/8 AsIs: (/11 AsIs: e.Result#2/9 AsIs: )/12 AsIs: (/15 AsIs: e.Blocks#2/13 AsIs: )/16 HalfReuse: {*}/19 } </31 Tile{ HalfReuse: & ParseSentence/28 } Tile{ AsIs: t.ErrorList#2/22 } Tile{ AsIs: e.Tokens#2/17 } Tile{ HalfReuse: >/25 AsIs: >/1 ]] }
      if( ! refalrts::alloc_open_call( vm, context[31] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_closure_head( context[4] );
      refalrts::reinit_name( context[7], ref_gen_ParseSentence_B1S2A1.ref(vm) );
      refalrts::reinit_svar( context[8], context[21] );
      refalrts::reinit_unwrapped_closure( context[19], context[4] );
      refalrts::reinit_name( context[28], ref_ParseSentence.ref(vm) );
      refalrts::reinit_close_call( context[25] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[25] );
      refalrts::push_stack( vm, context[31] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[24], context[20] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[25];
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[28], context[28] );
      res = refalrts::splice_evar( res, context[31], context[31] );
      res = refalrts::splice_evar( res, context[8], context[19] );
      res = refalrts::splice_evar( res, context[20], context[20] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[24], context[24] );
      refalrts::splice_to_freelist_open( vm, context[7], res );
      refalrts::wrap_closure( context[19] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseSentence:1/4 (/7 e.StartPattern#2/5 )/8 (/11 e.Result#2/9 )/12 (/15 e.Blocks#2/13 )/16 (/19 e.Tokens#2/17 )/20 s.Type#2/21 t.ErrorList#2/22 (/24 # TkCloseBlock/28 t.SrcPos#3/29 )/25 >/1
      if( ! refalrts::ident_term(  ident_TkCloseBlock.ref(vm), context[28] ) )
        continue;
      // closed e.StartPattern#2 as range 5
      // closed e.Result#2 as range 9
      // closed e.Blocks#2 as range 13
      // closed e.Tokens#2 as range 17
      //DEBUG: t.ErrorList#2: 22
      //DEBUG: t.SrcPos#3: 29
      //DEBUG: s.Type#2: 21
      //DEBUG: e.StartPattern#2: 5
      //DEBUG: e.Result#2: 9
      //DEBUG: e.Blocks#2: 13
      //DEBUG: e.Tokens#2: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Type#2/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: (/7 AsIs: e.StartPattern#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.Result#2/9 AsIs: )/12 AsIs: (/15 AsIs: e.Blocks#2/13 AsIs: )/16 HalfReuse: )/19 } Tile{ AsIs: </0 } & EL-AddErrorAt/31 Tile{ AsIs: t.ErrorList#2/22 } t.SrcPos#3/29/32 'M'/34 Tile{ HalfReuse: 'i'/20 }"ssed semicolon"/35 Tile{ AsIs: >/1 } Tile{ AsIs: (/24 AsIs: # TkCloseBlock/28 AsIs: t.SrcPos#3/29 AsIs: )/25 } Tile{ AsIs: e.Tokens#2/17 } Tile{ ]] }
      if( ! refalrts::alloc_name( vm, context[31], ref_ELm_AddErrorAt.ref(vm) ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(vm, context[32], context[33], context[29], context[30]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( vm, context[34], 'M' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_chars( vm, context[35], context[36], "ssed semicolon", 14 ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[4] );
      refalrts::reinit_close_bracket( context[19] );
      refalrts::reinit_char( context[20], 'i' );
      refalrts::link_brackets( context[24], context[25] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[4], context[19] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_evar( res, context[20], context[20] );
      res = refalrts::splice_evar( res, context[32], context[34] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[31], context[31] );
      res = refalrts::splice_evar( res, context[0], context[0] );
      res = refalrts::splice_evar( res, context[4], context[19] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ParseSentence:1/4 (/7 e.StartPattern#2/5 )/8 (/11 e.Result#2/9 )/12 (/15 e.Blocks#2/13 )/16 (/19 e.Tokens#2/17 )/20 s.Type#2/21 t.ErrorList#2/22 (/24 # TkEOF/28 t.SrcPos#3/29 )/25 >/1
    if( ! refalrts::ident_term(  ident_TkEOF.ref(vm), context[28] ) )
      continue;
    // closed e.StartPattern#2 as range 5
    // closed e.Result#2 as range 9
    // closed e.Blocks#2 as range 13
    // closed e.Tokens#2 as range 17
    //DEBUG: t.ErrorList#2: 22
    //DEBUG: t.SrcPos#3: 29
    //DEBUG: s.Type#2: 21
    //DEBUG: e.StartPattern#2: 5
    //DEBUG: e.Result#2: 9
    //DEBUG: e.Blocks#2: 13
    //DEBUG: e.Tokens#2: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} (/19 {REMOVED TILE} )/20 s.Type#2/21 {REMOVED TILE} (/24 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </28 } Tile{ HalfReuse: [*]/0 Reuse: & ParseSentence:1$4=1/4 AsIs: (/7 AsIs: e.StartPattern#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.Result#2/9 AsIs: )/12 AsIs: (/15 AsIs: e.Blocks#2/13 AsIs: )/16 } Tile{ AsIs: t.ErrorList#2/22 } Tile{ AsIs: t.SrcPos#3/29 HalfReuse: {*}/25 } Tile{ AsIs: e.Tokens#2/17 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[28] );
    refalrts::reinit_closure_head( context[0] );
    refalrts::update_name( context[4], ref_gen_ParseSentence_B1S4A1.ref(vm) );
    refalrts::reinit_unwrapped_closure( context[25], context[0] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[28] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[29], context[25] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[0], context[16] );
    res = refalrts::splice_evar( res, context[28], context[28] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    refalrts::wrap_closure( context[25] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseSentence:1/4 (/7 e.StartPattern#2/5 )/8 (/11 e.Result#2/9 )/12 (/15 e.Blocks#2/13 )/16 (/19 e.Tokens#2/17 )/20 s.Type#2/21 t.ErrorList#2/22 t.Unexpected#3/24 >/1
  // closed e.StartPattern#2 as range 5
  // closed e.Result#2 as range 9
  // closed e.Blocks#2 as range 13
  // closed e.Tokens#2 as range 17
  //DEBUG: t.ErrorList#2: 22
  //DEBUG: t.Unexpected#3: 24
  //DEBUG: s.Type#2: 21
  //DEBUG: e.StartPattern#2: 5
  //DEBUG: e.Result#2: 9
  //DEBUG: e.Blocks#2: 13
  //DEBUG: e.Tokens#2: 17

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Type#2/21 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: (/7 AsIs: e.StartPattern#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.Result#2/9 AsIs: )/12 AsIs: (/15 AsIs: e.Blocks#2/13 AsIs: )/16 HalfReuse: )/19 } Tile{ AsIs: </0 } & AddUnexpected/26 Tile{ AsIs: t.ErrorList#2/22 AsIs: t.Unexpected#3/24 HalfReuse: 's'/1 } 'e'/27 Tile{ HalfReuse: 'm'/20 }"icolon"/28 >/30 Tile{ AsIs: e.Tokens#2/17 } Tile{ ]] }
  if( ! refalrts::alloc_name( vm, context[26], ref_AddUnexpected.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( vm, context[27], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[28], context[29], "icolon", 6 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[30] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_close_bracket( context[19] );
  refalrts::reinit_char( context[1], 's' );
  refalrts::reinit_char( context[20], 'm' );
  refalrts::push_stack( vm, context[30] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[4], context[19] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[28], context[30] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[27], context[27] );
  res = refalrts::splice_evar( res, context[22], context[1] );
  res = refalrts::splice_evar( res, context[26], context[26] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[4], context[19] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseSentence_B1("ParseSentence:1", 378583373U, 621461326U, func_gen_ParseSentence_B1);


static refalrts::FnResult func_gen_ParseSentence_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & ParseSentence=1/4 (/7 (/11 e.StartPattern#2/9 )/12 s.Type#2/21 (/19 e.Result#2/17 )/20 (/15 e.Blocks#2/13 )/16 )/8 t.ErrorList#2/22 t.NextToken#2/24 e.Tokens#2/2 >/1
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
  // closed e.StartPattern#2 as range 9
  // closed e.Result#2 as range 17
  // closed e.Blocks#2 as range 13
  if( ! refalrts::svar_left( context[21], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  context[23] = refalrts::tvar_left( context[22], context[2], context[3] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  context[25] = refalrts::tvar_left( context[24], context[2], context[3] );
  if( ! context[25] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tokens#2 as range 2
  //DEBUG: e.StartPattern#2: 9
  //DEBUG: e.Result#2: 17
  //DEBUG: e.Blocks#2: 13
  //DEBUG: s.Type#2: 21
  //DEBUG: t.ErrorList#2: 22
  //DEBUG: t.NextToken#2: 24
  //DEBUG: e.Tokens#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 HalfReuse: & ParseSentence:1/7 AsIs: (/11 AsIs: e.StartPattern#2/9 AsIs: )/12 } Tile{ AsIs: (/19 AsIs: e.Result#2/17 AsIs: )/20 AsIs: (/15 AsIs: e.Blocks#2/13 AsIs: )/16 HalfReuse: (/8 } Tile{ AsIs: e.Tokens#2/2 } )/26 Tile{ AsIs: s.Type#2/21 } Tile{ AsIs: t.ErrorList#2/22 } {*}/27 Tile{ AsIs: t.NextToken#2/24 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_close_bracket( vm, context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[27], context[4] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[4] );
  refalrts::reinit_name( context[7], ref_gen_ParseSentence_B1.ref(vm) );
  refalrts::reinit_open_bracket( context[8] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[8], context[26] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[24], context[25] );
  res = refalrts::splice_evar( res, context[27], context[27] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[26], context[26] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[19], context[8] );
  refalrts::use( res );
  refalrts::wrap_closure( context[27] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseSentence_A1("ParseSentence=1", 378583373U, 621461326U, func_gen_ParseSentence_A1);


static refalrts::FnResult func_ParseSentence(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & ParseSentence/4 t.ErrorList#1/5 e.Tokens#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tokens#1 as range 2
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 & ParseSentence=1/8 Tile{ AsIs: </0 Reuse: & ParseSentencePart/4 AsIs: t.ErrorList#1/5 AsIs: e.Tokens#1/2 AsIs: >/1 } >/9 Tile{ ]] }
  if( ! refalrts::alloc_open_call( vm, context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[8], ref_gen_ParseSentence_A1.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[9] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_ParseSentencePart.ref(vm) );
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

static refalrts::NativeReference nat_ref_ParseSentence("ParseSentence", 378583373U, 621461326U, func_ParseSentence);


static refalrts::FnResult func_gen_ParseSentencePart_A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & ParseSentencePart=3/4 (/7 e.Pattern#2/5 )/8 s.Type#3/9 t.ErrorList#4/10 (/14 e.Result#4/12 )/15 (/18 e.Blocks#4/16 )/19 e.Tokens#4/2 >/1
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
  // closed e.Pattern#2 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
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
  context[16] = 0;
  context[17] = 0;
  context[18] = refalrts::brackets_left( context[16], context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[18], context[19]);
  // closed e.Result#4 as range 12
  // closed e.Blocks#4 as range 16
  // closed e.Tokens#4 as range 2
  //DEBUG: e.Pattern#2: 5
  //DEBUG: s.Type#3: 9
  //DEBUG: t.ErrorList#4: 10
  //DEBUG: e.Result#4: 12
  //DEBUG: e.Blocks#4: 16
  //DEBUG: e.Tokens#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: (/7 AsIs: e.Pattern#2/5 AsIs: )/8 AsIs: s.Type#3/9 } Tile{ AsIs: (/14 AsIs: e.Result#4/12 AsIs: )/15 AsIs: (/18 AsIs: e.Blocks#4/16 AsIs: )/19 } Tile{ HalfReuse: )/1 } Tile{ AsIs: t.ErrorList#4/10 } Tile{ AsIs: e.Tokens#4/2 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[4], context[1] );
  refalrts::link_brackets( context[18], context[19] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[14], context[19] );
  res = refalrts::splice_evar( res, context[4], context[9] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseSentencePart_A3("ParseSentencePart=3", 378583373U, 621461326U, func_gen_ParseSentencePart_A3);


static refalrts::FnResult func_gen_ParseSentencePart_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ParseSentencePart=2/4 (/7 e.Pattern#2/5 )/8 s.Type#3/9 t.ErrorList#3/10 e.Tokens#3/2 >/1
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
  // closed e.Pattern#2 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tokens#3 as range 2
  //DEBUG: e.Pattern#2: 5
  //DEBUG: s.Type#3: 9
  //DEBUG: t.ErrorList#3: 10
  //DEBUG: e.Tokens#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </12 Tile{ HalfReuse: [*]/0 Reuse: & ParseSentencePart=3/4 AsIs: (/7 AsIs: e.Pattern#2/5 AsIs: )/8 AsIs: s.Type#3/9 } {*}/13 </14 & ParseResult/15 Tile{ AsIs: t.ErrorList#3/10 AsIs: e.Tokens#3/2 AsIs: >/1 } >/16 Tile{ ]] }
  if( ! refalrts::alloc_open_call( vm, context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[13], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[15], ref_ParseResult.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[16] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_ParseSentencePart_A3.ref(vm) );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[14] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[10], context[1] );
  res = refalrts::splice_evar( res, context[13], context[15] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  refalrts::use( res );
  refalrts::wrap_closure( context[13] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseSentencePart_A2("ParseSentencePart=2", 378583373U, 621461326U, func_gen_ParseSentencePart_A2);


static refalrts::FnResult func_gen_ParseSentencePart_A2L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & ParseSentencePart=2\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseSentencePart=2\1/4 t.new#1/5 t.new#2/7 e.new#3/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & ParseSentencePart=2\1/4 t.new#4/5 (/7 s.new#5/11 t.new#6/12 )/8 e.new#7/2 >/1
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[7] ) )
      continue;
    // closed e.new#7 as range 2
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    context[13] = refalrts::tvar_left( context[12], context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    do {
      // </0 & ParseSentencePart=2\1/4 t.ErrorList#2/5 (/7 # TkReplace/11 t.SrcPos#3/12 )/8 e.Tokens#3/2 >/1
      if( ! refalrts::ident_term(  ident_TkReplace.ref(vm), context[11] ) )
        continue;
      // closed e.Tokens#3 as range 2
      //DEBUG: t.ErrorList#2: 5
      //DEBUG: t.SrcPos#3: 12
      //DEBUG: e.Tokens#3: 2

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} (/7 # TkReplace/11 t.SrcPos#3/12 )/8 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Assign/4 AsIs: t.ErrorList#2/5 } Tile{ AsIs: e.Tokens#3/2 } Tile{ ]] }
      refalrts::reinit_ident( context[4], ident_Assign.ref(vm) );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_evar( res, context[4], context[6] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ParseSentencePart=2\1/4 t.ErrorList#2/5 (/7 # TkComma/11 t.SrcPos#3/12 )/8 e.Tokens#3/2 >/1
    if( ! refalrts::ident_term(  ident_TkComma.ref(vm), context[11] ) )
      continue;
    // closed e.Tokens#3 as range 2
    //DEBUG: t.ErrorList#2: 5
    //DEBUG: t.SrcPos#3: 12
    //DEBUG: e.Tokens#3: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} (/7 # TkComma/11 t.SrcPos#3/12 )/8 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Condition/4 AsIs: t.ErrorList#2/5 } Tile{ AsIs: e.Tokens#3/2 } Tile{ ]] }
    refalrts::reinit_ident( context[4], ident_Condition.ref(vm) );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[4], context[6] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseSentencePart=2\1/4 t.ErrorList#2/5 t.Unexpected#3/7 e.Tokens#3/2 >/1
  // closed e.Tokens#3 as range 2
  //DEBUG: t.ErrorList#2: 5
  //DEBUG: t.Unexpected#3: 7
  //DEBUG: e.Tokens#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } # Assign/9 Tile{ AsIs: </0 Reuse: & AddUnexpected/4 AsIs: t.ErrorList#2/5 AsIs: t.Unexpected#3/7 }"\",\" or \"=\""/10 Tile{ AsIs: >/1 } t.Unexpected#3/7/12 Tile{ AsIs: e.Tokens#3/2 } Tile{ ]] }
  if( ! refalrts::alloc_ident( vm, context[9], ident_Assign.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[10], context[11], "\",\" or \"=\"", 10 ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(vm, context[12], context[13], context[7], context[8]))
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_AddUnexpected.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseSentencePart_A2L1("ParseSentencePart=2\\1", 378583373U, 621461326U, func_gen_ParseSentencePart_A2L1);


static refalrts::FnResult func_gen_ParseSentencePart_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & ParseSentencePart=1/4 t.ErrorList#2/5 (/9 e.Pattern#2/7 )/10 e.Tokens#2/2 >/1
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
  // closed e.Pattern#2 as range 7
  // closed e.Tokens#2 as range 2
  //DEBUG: t.ErrorList#2: 5
  //DEBUG: e.Pattern#2: 7
  //DEBUG: e.Tokens#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & ParseSentencePart=2/11 Tile{ AsIs: (/9 AsIs: e.Pattern#2/7 AsIs: )/10 } {*}/12 </13 & Fetch/14 Tile{ AsIs: e.Tokens#2/2 } [*]/15 & ParseSentencePart=2\1/16 Tile{ AsIs: t.ErrorList#2/5 } {*}/17 >/18 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_name( vm, context[11], ref_gen_ParseSentencePart_A2.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[12], context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[14], ref_Fetch.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_closure_head( vm, context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[16], ref_gen_ParseSentencePart_A2L1.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[17], context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[18] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[4] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[14] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::use( res );
  refalrts::wrap_closure( context[12] );
  refalrts::wrap_closure( context[17] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseSentencePart_A1("ParseSentencePart=1", 378583373U, 621461326U, func_gen_ParseSentencePart_A1);


static refalrts::FnResult func_ParseSentencePart(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & ParseSentencePart/4 t.ErrorList#1/5 e.Tokens#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tokens#1 as range 2
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 & ParseSentencePart=1/8 Tile{ AsIs: </0 Reuse: & ParsePattern/4 AsIs: t.ErrorList#1/5 AsIs: e.Tokens#1/2 AsIs: >/1 } >/9 Tile{ ]] }
  if( ! refalrts::alloc_open_call( vm, context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[8], ref_gen_ParseSentencePart_A1.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[9] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_ParsePattern.ref(vm) );
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

static refalrts::NativeReference nat_ref_ParseSentencePart("ParseSentencePart", 378583373U, 621461326U, func_ParseSentencePart);


static refalrts::FnResult func_ParsePattern(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & ParsePattern/4 t.ErrorList#1/5 e.Tokens#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tokens#1 as range 2
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoParsePattern/4 AsIs: t.ErrorList#1/5 } (/7 )/8 (/9 )/10 Tile{ AsIs: e.Tokens#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( vm, context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[10] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_DoParsePattern.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
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

static refalrts::NativeReference nat_ref_ParsePattern("ParsePattern", 378583373U, 621461326U, func_ParsePattern);


static refalrts::FnResult func_DoParsePattern(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 46 elems
  refalrts::Iter context[46];
  refalrts::zeros( context, 46 );
  // </0 & DoParsePattern/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoParsePattern/4 t.new#1/5 (/9 e.new#2/7 )/10 (/13 e.new#3/11 )/14 e.new#4/2 >/1
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
  // closed e.new#2 as range 7
  // closed e.new#3 as range 11
  // closed e.new#4 as range 2
  do {
    // </0 & DoParsePattern/4 t.new#5/5 (/9 e.new#6/7 )/10 (/13 e.new#7/11 )/14 (/19 s.new#8/21 s.new#9/22 e.new#10/17 )/20 e.new#11/15 >/1
    context[15] = context[2];
    context[16] = context[3];
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[15], context[16] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    // closed e.new#6 as range 7
    // closed e.new#7 as range 11
    // closed e.new#11 as range 15
    if( ! refalrts::svar_left( context[21], context[17], context[18] ) )
      continue;
    if( ! refalrts::svar_left( context[22], context[17], context[18] ) )
      continue;
    // closed e.new#10 as range 17
    do {
      // </0 & DoParsePattern/4 t.new#12/5 (/9 e.new#13/7 )/10 (/13 e.new#14/11 )/14 (/19 s.new#15/21 s.new#16/22 s.new#17/25 )/20 e.new#18/15 >/1
      context[23] = context[17];
      context[24] = context[18];
      // closed e.new#13 as range 7
      // closed e.new#14 as range 11
      // closed e.new#18 as range 15
      if( ! refalrts::svar_left( context[25], context[23], context[24] ) )
        continue;
      if( ! refalrts::empty_seq( context[23], context[24] ) )
        continue;
      do {
        // </0 & DoParsePattern/4 t.ErrorList#1/5 (/9 e.MultiBrackets#1/7 )/10 (/13 e.Scanned#1/11 )/14 (/19 # TkChar/21 s.LnNum#1/22 s.Char#1/25 )/20 e.Tail#1/15 >/1
        if( ! refalrts::ident_term(  ident_TkChar.ref(vm), context[21] ) )
          continue;
        // closed e.MultiBrackets#1 as range 7
        // closed e.Scanned#1 as range 11
        // closed e.Tail#1 as range 15
        //DEBUG: t.ErrorList#1: 5
        //DEBUG: s.LnNum#1: 22
        //DEBUG: s.Char#1: 25
        //DEBUG: e.MultiBrackets#1: 7
        //DEBUG: e.Scanned#1: 11
        //DEBUG: e.Tail#1: 15

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.LnNum#1/22 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoParsePattern/4 AsIs: t.ErrorList#1/5 AsIs: (/9 AsIs: e.MultiBrackets#1/7 AsIs: )/10 AsIs: (/13 AsIs: e.Scanned#1/11 HalfReuse: (/14 HalfReuse: # Symbol/19 Reuse: # Char/21 } Tile{ AsIs: s.Char#1/25 } )/26 Tile{ AsIs: )/20 AsIs: e.Tail#1/15 AsIs: >/1 ]] }
        if( ! refalrts::alloc_close_bracket( vm, context[26] ) )
          return refalrts::cNoMemory;
        refalrts::reinit_open_bracket( context[14] );
        refalrts::reinit_ident( context[19], ident_Symbol.ref(vm) );
        refalrts::update_ident( context[21], ident_Char.ref(vm) );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[13], context[20] );
        refalrts::link_brackets( context[14], context[26] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[20];
        res = refalrts::splice_evar( res, context[26], context[26] );
        res = refalrts::splice_evar( res, context[25], context[25] );
        refalrts::splice_to_freelist_open( vm, context[21], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoParsePattern/4 t.ErrorList#1/5 (/9 e.MultiBrackets#1/7 )/10 (/13 e.Scanned#1/11 )/14 (/19 # TkNumber/21 s.LnNum#1/22 s.Number#1/25 )/20 e.Tail#1/15 >/1
      if( ! refalrts::ident_term(  ident_TkNumber.ref(vm), context[21] ) )
        continue;
      // closed e.MultiBrackets#1 as range 7
      // closed e.Scanned#1 as range 11
      // closed e.Tail#1 as range 15
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: s.LnNum#1: 22
      //DEBUG: s.Number#1: 25
      //DEBUG: e.MultiBrackets#1: 7
      //DEBUG: e.Scanned#1: 11
      //DEBUG: e.Tail#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.LnNum#1/22 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoParsePattern/4 AsIs: t.ErrorList#1/5 AsIs: (/9 AsIs: e.MultiBrackets#1/7 AsIs: )/10 AsIs: (/13 AsIs: e.Scanned#1/11 HalfReuse: (/14 HalfReuse: # Symbol/19 Reuse: # Number/21 } Tile{ AsIs: s.Number#1/25 } )/26 Tile{ AsIs: )/20 AsIs: e.Tail#1/15 AsIs: >/1 ]] }
      if( ! refalrts::alloc_close_bracket( vm, context[26] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[14] );
      refalrts::reinit_ident( context[19], ident_Symbol.ref(vm) );
      refalrts::update_ident( context[21], ident_Number.ref(vm) );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[13], context[20] );
      refalrts::link_brackets( context[14], context[26] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[20];
      res = refalrts::splice_evar( res, context[26], context[26] );
      res = refalrts::splice_evar( res, context[25], context[25] );
      refalrts::splice_to_freelist_open( vm, context[21], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoParsePattern/4 t.ErrorList#1/5 (/9 e.MultiBrackets#1/7 )/10 (/13 e.Scanned#1/11 )/14 (/19 # TkName/21 s.LnNum#1/22 e.Name#1/17 )/20 e.Tail#1/15 >/1
      if( ! refalrts::ident_term(  ident_TkName.ref(vm), context[21] ) )
        continue;
      // closed e.MultiBrackets#1 as range 7
      // closed e.Scanned#1 as range 11
      // closed e.Name#1 as range 17
      // closed e.Tail#1 as range 15
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: s.LnNum#1: 22
      //DEBUG: e.MultiBrackets#1: 7
      //DEBUG: e.Scanned#1: 11
      //DEBUG: e.Name#1: 17
      //DEBUG: e.Tail#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoParsePattern/4 AsIs: t.ErrorList#1/5 AsIs: (/9 AsIs: e.MultiBrackets#1/7 AsIs: )/10 AsIs: (/13 AsIs: e.Scanned#1/11 HalfReuse: (/14 HalfReuse: # Symbol/19 Reuse: # Name/21 AsIs: s.LnNum#1/22 AsIs: e.Name#1/17 AsIs: )/20 } )/23 Tile{ AsIs: e.Tail#1/15 } Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_close_bracket( vm, context[23] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[14] );
      refalrts::reinit_ident( context[19], ident_Symbol.ref(vm) );
      refalrts::update_ident( context[21], ident_Name.ref(vm) );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[13], context[23] );
      refalrts::link_brackets( context[14], context[20] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[23], context[23] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoParsePattern/4 t.new#12/5 (/9 e.new#13/7 )/10 (/13 e.new#14/11 )/14 (/19 # TkIdentMarker/21 s.new#15/22 )/20 e.new#16/15 >/1
      if( ! refalrts::ident_term(  ident_TkIdentMarker.ref(vm), context[21] ) )
        continue;
      if( ! refalrts::empty_seq( context[17], context[18] ) )
        continue;
      // closed e.new#13 as range 7
      // closed e.new#14 as range 11
      // closed e.new#16 as range 15
      do {
        // </0 & DoParsePattern/4 t.ErrorList#1/5 (/9 e.MultiBrackets#1/7 )/10 (/13 e.Scanned#1/11 )/14 (/19 # TkIdentMarker/21 s.LnNumMarker#1/22 )/20 (/27 # TkName/29 s.LnNumName#1/30 e.Name#1/25 )/28 e.Tail#1/23 >/1
        context[23] = context[15];
        context[24] = context[16];
        context[25] = 0;
        context[26] = 0;
        context[27] = refalrts::brackets_left( context[25], context[26], context[23], context[24] );
        if( ! context[27] )
          continue;
        refalrts::bracket_pointers(context[27], context[28]);
        context[29] = refalrts::ident_left(  ident_TkName.ref(vm), context[25], context[26] );
        if( ! context[29] )
          continue;
        // closed e.MultiBrackets#1 as range 7
        // closed e.Scanned#1 as range 11
        // closed e.Tail#1 as range 23
        if( ! refalrts::svar_left( context[30], context[25], context[26] ) )
          continue;
        // closed e.Name#1 as range 25
        //DEBUG: t.ErrorList#1: 5
        //DEBUG: s.LnNumMarker#1: 22
        //DEBUG: e.MultiBrackets#1: 7
        //DEBUG: e.Scanned#1: 11
        //DEBUG: e.Tail#1: 23
        //DEBUG: s.LnNumName#1: 30
        //DEBUG: e.Name#1: 25

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.LnNumMarker#1/22 {REMOVED TILE} (/27 # TkName/29 s.LnNumName#1/30 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoParsePattern/4 AsIs: t.ErrorList#1/5 AsIs: (/9 AsIs: e.MultiBrackets#1/7 AsIs: )/10 AsIs: (/13 AsIs: e.Scanned#1/11 HalfReuse: (/14 HalfReuse: # Symbol/19 Reuse: # Identifier/21 } Tile{ AsIs: e.Name#1/25 } Tile{ AsIs: )/20 } Tile{ AsIs: )/28 AsIs: e.Tail#1/23 AsIs: >/1 ]] }
        refalrts::reinit_open_bracket( context[14] );
        refalrts::reinit_ident( context[19], ident_Symbol.ref(vm) );
        refalrts::update_ident( context[21], ident_Identifier.ref(vm) );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[13], context[28] );
        refalrts::link_brackets( context[14], context[20] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[28];
        res = refalrts::splice_evar( res, context[20], context[20] );
        res = refalrts::splice_evar( res, context[25], context[26] );
        refalrts::splice_to_freelist_open( vm, context[21], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoParsePattern/4 t.ErrorList#1/5 (/9 e.MultiBrackets#1/7 )/10 (/13 e.Scanned#1/11 )/14 (/19 # TkIdentMarker/21 s.LnNum#1/22 )/20 e.Tail#1/15 >/1
      // closed e.MultiBrackets#1 as range 7
      // closed e.Scanned#1 as range 11
      // closed e.Tail#1 as range 15
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: s.LnNum#1: 22
      //DEBUG: e.MultiBrackets#1: 7
      //DEBUG: e.Scanned#1: 11
      //DEBUG: e.Tail#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoParsePattern/4 } </23 & EL-AddErrorAt/24 Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: s.LnNum#1/22 HalfReuse: 'M'/20 }"is"/25 Tile{ HalfReuse: 's'/19 HalfReuse: 'e'/21 }"d name after \'#\'"/27 >/29 Tile{ AsIs: (/9 AsIs: e.MultiBrackets#1/7 AsIs: )/10 AsIs: (/13 AsIs: e.Scanned#1/11 AsIs: )/14 } Tile{ AsIs: e.Tail#1/15 } Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_open_call( vm, context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( vm, context[24], ref_ELm_AddErrorAt.ref(vm) ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_chars( vm, context[25], context[26], "is", 2 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_chars( vm, context[27], context[28], "d name after \'#\'", 16 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( vm, context[29] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_char( context[20], 'M' );
      refalrts::reinit_char( context[19], 's' );
      refalrts::reinit_char( context[21], 'e' );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::push_stack( vm, context[29] );
      refalrts::push_stack( vm, context[23] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[9], context[14] );
      res = refalrts::splice_evar( res, context[27], context[29] );
      res = refalrts::splice_evar( res, context[19], context[21] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_evar( res, context[22], context[20] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoParsePattern/4 t.ErrorList#1/5 (/9 e.MultiBrackets#1/7 )/10 (/13 e.Scanned#1/11 )/14 (/19 # TkCompound/21 s.LnNum#1/22 e.Name#1/17 )/20 e.Tail#1/15 >/1
      if( ! refalrts::ident_term(  ident_TkCompound.ref(vm), context[21] ) )
        continue;
      // closed e.MultiBrackets#1 as range 7
      // closed e.Scanned#1 as range 11
      // closed e.Name#1 as range 17
      // closed e.Tail#1 as range 15
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: s.LnNum#1: 22
      //DEBUG: e.MultiBrackets#1: 7
      //DEBUG: e.Scanned#1: 11
      //DEBUG: e.Name#1: 17
      //DEBUG: e.Tail#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.LnNum#1/22 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoParsePattern/4 AsIs: t.ErrorList#1/5 AsIs: (/9 AsIs: e.MultiBrackets#1/7 AsIs: )/10 AsIs: (/13 AsIs: e.Scanned#1/11 HalfReuse: (/14 HalfReuse: # Symbol/19 Reuse: # Identifier/21 } Tile{ AsIs: e.Name#1/17 } )/23 Tile{ AsIs: )/20 AsIs: e.Tail#1/15 AsIs: >/1 ]] }
      if( ! refalrts::alloc_close_bracket( vm, context[23] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[14] );
      refalrts::reinit_ident( context[19], ident_Symbol.ref(vm) );
      refalrts::update_ident( context[21], ident_Identifier.ref(vm) );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[13], context[20] );
      refalrts::link_brackets( context[14], context[23] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[20];
      res = refalrts::splice_evar( res, context[23], context[23] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      refalrts::splice_to_freelist_open( vm, context[21], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoParsePattern/4 t.new#12/5 (/9 e.new#13/7 )/10 (/13 e.new#14/11 )/14 (/19 # TkVariable/21 s.new#15/22 s.new#16/25 e.new#17/23 )/20 e.new#18/15 >/1
      context[23] = context[17];
      context[24] = context[18];
      if( ! refalrts::ident_term(  ident_TkVariable.ref(vm), context[21] ) )
        continue;
      // closed e.new#13 as range 7
      // closed e.new#14 as range 11
      // closed e.new#18 as range 15
      if( ! refalrts::svar_left( context[25], context[23], context[24] ) )
        continue;
      // closed e.new#17 as range 23
      do {
        // </0 & DoParsePattern/4 t.ErrorList#1/5 (/9 e.MultiBracket#1/7 )/10 (/13 e.Scanned#1/11 )/14 (/19 # TkVariable/21 s.LnNumVar#1/22 s.Mode#1/25 e.Index#1/23 )/20 (/30 # TkRedefinition/32 s.LnNumRedef#1/33 )/31 e.Tail#1/26 >/1
        context[26] = context[15];
        context[27] = context[16];
        context[28] = 0;
        context[29] = 0;
        context[30] = refalrts::brackets_left( context[28], context[29], context[26], context[27] );
        if( ! context[30] )
          continue;
        refalrts::bracket_pointers(context[30], context[31]);
        context[32] = refalrts::ident_left(  ident_TkRedefinition.ref(vm), context[28], context[29] );
        if( ! context[32] )
          continue;
        // closed e.MultiBracket#1 as range 7
        // closed e.Scanned#1 as range 11
        // closed e.Index#1 as range 23
        // closed e.Tail#1 as range 26
        if( ! refalrts::svar_left( context[33], context[28], context[29] ) )
          continue;
        if( ! refalrts::empty_seq( context[28], context[29] ) )
          continue;
        //DEBUG: t.ErrorList#1: 5
        //DEBUG: s.LnNumVar#1: 22
        //DEBUG: s.Mode#1: 25
        //DEBUG: e.MultiBracket#1: 7
        //DEBUG: e.Scanned#1: 11
        //DEBUG: e.Index#1: 23
        //DEBUG: e.Tail#1: 26
        //DEBUG: s.LnNumRedef#1: 33

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.LnNumVar#1/22 {REMOVED TILE} (/30 # TkRedefinition/32 s.LnNumRedef#1/33 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoParsePattern/4 AsIs: t.ErrorList#1/5 AsIs: (/9 AsIs: e.MultiBracket#1/7 AsIs: )/10 AsIs: (/13 AsIs: e.Scanned#1/11 HalfReuse: (/14 HalfReuse: # TkNewVariable/19 HalfReuse: s.LnNumVar1 #22/21 } Tile{ AsIs: s.Mode#1/25 AsIs: e.Index#1/23 AsIs: )/20 } Tile{ AsIs: )/31 AsIs: e.Tail#1/26 AsIs: >/1 ]] }
        refalrts::reinit_open_bracket( context[14] );
        refalrts::reinit_ident( context[19], ident_TkNewVariable.ref(vm) );
        refalrts::reinit_svar( context[21], context[22] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[13], context[31] );
        refalrts::link_brackets( context[14], context[20] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[31];
        res = refalrts::splice_evar( res, context[25], context[20] );
        refalrts::splice_to_freelist_open( vm, context[21], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoParsePattern/4 t.ErrorList#1/5 (/9 e.MultiBracket#1/7 )/10 (/13 e.Scanned#1/11 )/14 (/19 # TkVariable/21 s.LnNum#1/22 s.Mode#1/25 e.Index#1/23 )/20 e.Tail#1/15 >/1
      // closed e.MultiBracket#1 as range 7
      // closed e.Scanned#1 as range 11
      // closed e.Index#1 as range 23
      // closed e.Tail#1 as range 15
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: s.LnNum#1: 22
      //DEBUG: s.Mode#1: 25
      //DEBUG: e.MultiBracket#1: 7
      //DEBUG: e.Scanned#1: 11
      //DEBUG: e.Index#1: 23
      //DEBUG: e.Tail#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.LnNum#1/22 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoParsePattern/4 AsIs: t.ErrorList#1/5 AsIs: (/9 AsIs: e.MultiBracket#1/7 AsIs: )/10 AsIs: (/13 AsIs: e.Scanned#1/11 HalfReuse: (/14 HalfReuse: # TkVariable/19 HalfReuse: s.LnNum1 #22/21 } Tile{ AsIs: s.Mode#1/25 } Tile{ AsIs: e.Index#1/23 } )/26 Tile{ AsIs: )/20 AsIs: e.Tail#1/15 AsIs: >/1 ]] }
      if( ! refalrts::alloc_close_bracket( vm, context[26] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[14] );
      refalrts::reinit_ident( context[19], ident_TkVariable.ref(vm) );
      refalrts::reinit_svar( context[21], context[22] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[13], context[20] );
      refalrts::link_brackets( context[14], context[26] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[20];
      res = refalrts::splice_evar( res, context[26], context[26] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[25], context[25] );
      refalrts::splice_to_freelist_open( vm, context[21], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoParsePattern/4 t.ErrorList#1/5 (/9 e.MultiBracket#1/7 )/10 (/13 e.Scanned#1/11 )/14 (/19 # TkRedefinition/21 s.LnNum#1/22 )/20 e.Tail#1/15 >/1
      if( ! refalrts::ident_term(  ident_TkRedefinition.ref(vm), context[21] ) )
        continue;
      if( ! refalrts::empty_seq( context[17], context[18] ) )
        continue;
      // closed e.MultiBracket#1 as range 7
      // closed e.Scanned#1 as range 11
      // closed e.Tail#1 as range 15
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: s.LnNum#1: 22
      //DEBUG: e.MultiBracket#1: 7
      //DEBUG: e.Scanned#1: 11
      //DEBUG: e.Tail#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoParsePattern/4 } </23 & EL-AddErrorAt/24 Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: s.LnNum#1/22 HalfReuse: 'N'/20 }"ak"/25 Tile{ HalfReuse: 'e'/19 HalfReuse: 'd'/21 }" redefinition sign"/27 >/29 Tile{ AsIs: (/9 AsIs: e.MultiBracket#1/7 AsIs: )/10 AsIs: (/13 AsIs: e.Scanned#1/11 AsIs: )/14 } Tile{ AsIs: e.Tail#1/15 } Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_open_call( vm, context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( vm, context[24], ref_ELm_AddErrorAt.ref(vm) ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_chars( vm, context[25], context[26], "ak", 2 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_chars( vm, context[27], context[28], " redefinition sign", 18 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( vm, context[29] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_char( context[20], 'N' );
      refalrts::reinit_char( context[19], 'e' );
      refalrts::reinit_char( context[21], 'd' );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::push_stack( vm, context[29] );
      refalrts::push_stack( vm, context[23] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[9], context[14] );
      res = refalrts::splice_evar( res, context[27], context[29] );
      res = refalrts::splice_evar( res, context[19], context[21] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_evar( res, context[22], context[20] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoParsePattern/4 t.new#12/5 (/9 e.new#13/7 )/10 (/13 e.new#14/11 )/14 (/19 s.new#15/21 s.new#16/22 s.new#17/25 )/20 e.new#18/15 >/1
    context[23] = context[17];
    context[24] = context[18];
    // closed e.new#13 as range 7
    // closed e.new#14 as range 11
    // closed e.new#18 as range 15
    if( ! refalrts::svar_left( context[25], context[23], context[24] ) )
      continue;
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;
    do {
      // </0 & DoParsePattern/4 t.new#19/5 (/9 e.new#20/7 )/10 (/13 e.new#21/11 )/14 (/19 # Open/21 s.new#22/22 s.new#23/25 )/20 e.new#24/15 >/1
      if( ! refalrts::ident_term(  ident_Open.ref(vm), context[21] ) )
        continue;
      // closed e.new#20 as range 7
      // closed e.new#21 as range 11
      // closed e.new#24 as range 15
      do {
        // </0 & DoParsePattern/4 t.ErrorList#1/5 (/9 e.MultiBracket#1/7 )/10 (/13 e.Scanned#1/11 )/14 (/19 # Open/21 s.LnNum#1/22 # TkOpenBracket/25 )/20 e.Tail#1/15 >/1
        if( ! refalrts::ident_term(  ident_TkOpenBracket.ref(vm), context[25] ) )
          continue;
        // closed e.MultiBracket#1 as range 7
        // closed e.Scanned#1 as range 11
        // closed e.Tail#1 as range 15
        //DEBUG: t.ErrorList#1: 5
        //DEBUG: s.LnNum#1: 22
        //DEBUG: e.MultiBracket#1: 7
        //DEBUG: e.Scanned#1: 11
        //DEBUG: e.Tail#1: 15

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoParsePattern/4 AsIs: t.ErrorList#1/5 AsIs: (/9 AsIs: e.MultiBracket#1/7 HalfReuse: (/10 HalfReuse: # Brackets/13 } Tile{ AsIs: s.LnNum#1/22 } Tile{ Reuse: # TkCloseBracket/21 } Tile{ AsIs: e.Scanned#1/11 } Tile{ AsIs: )/14 HalfReuse: )/19 } Tile{ HalfReuse: (/25 AsIs: )/20 AsIs: e.Tail#1/15 AsIs: >/1 ]] }
        refalrts::reinit_open_bracket( context[10] );
        refalrts::reinit_ident( context[13], ident_Brackets.ref(vm) );
        refalrts::update_ident( context[21], ident_TkCloseBracket.ref(vm) );
        refalrts::reinit_close_bracket( context[19] );
        refalrts::reinit_open_bracket( context[25] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[25], context[20] );
        refalrts::link_brackets( context[9], context[19] );
        refalrts::link_brackets( context[10], context[14] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[25];
        res = refalrts::splice_evar( res, context[14], context[19] );
        res = refalrts::splice_evar( res, context[11], context[12] );
        res = refalrts::splice_evar( res, context[21], context[21] );
        res = refalrts::splice_evar( res, context[22], context[22] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & DoParsePattern/4 t.new#25/5 (/9 e.new#26/7 )/10 (/13 e.new#27/11 )/14 (/19 # Open/21 s.new#28/22 # TkOpenADT/25 )/20 e.new#29/15 >/1
        if( ! refalrts::ident_term(  ident_TkOpenADT.ref(vm), context[25] ) )
          continue;
        // closed e.new#26 as range 7
        // closed e.new#27 as range 11
        // closed e.new#29 as range 15
        do {
          // </0 & DoParsePattern/4 t.ErrorList#1/5 (/9 e.MultiBracket#1/7 )/10 (/13 e.Scanned#1/11 )/14 (/19 # Open/21 s.LnNumBracket#1/22 # TkOpenADT/25 )/20 (/30 # TkName/32 s.LnNumName#1/33 e.Name#1/28 )/31 e.Tail#1/26 >/1
          context[26] = context[15];
          context[27] = context[16];
          context[28] = 0;
          context[29] = 0;
          context[30] = refalrts::brackets_left( context[28], context[29], context[26], context[27] );
          if( ! context[30] )
            continue;
          refalrts::bracket_pointers(context[30], context[31]);
          context[32] = refalrts::ident_left(  ident_TkName.ref(vm), context[28], context[29] );
          if( ! context[32] )
            continue;
          // closed e.MultiBracket#1 as range 7
          // closed e.Scanned#1 as range 11
          // closed e.Tail#1 as range 26
          if( ! refalrts::svar_left( context[33], context[28], context[29] ) )
            continue;
          // closed e.Name#1 as range 28
          //DEBUG: t.ErrorList#1: 5
          //DEBUG: s.LnNumBracket#1: 22
          //DEBUG: e.MultiBracket#1: 7
          //DEBUG: e.Scanned#1: 11
          //DEBUG: e.Tail#1: 26
          //DEBUG: s.LnNumName#1: 33
          //DEBUG: e.Name#1: 28

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.LnNumBracket#1/22 {REMOVED TILE} s.LnNumName#1/33 {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoParsePattern/4 AsIs: t.ErrorList#1/5 AsIs: (/9 AsIs: e.MultiBracket#1/7 HalfReuse: (/10 HalfReuse: # ADT-Brackets/13 } Tile{ HalfReuse: s.LnNumBracket1 #22/19 Reuse: # TkCloseADT/21 } Tile{ AsIs: e.Scanned#1/11 } Tile{ HalfReuse: )/25 AsIs: )/20 AsIs: (/30 HalfReuse: s.LnNumName1 #33/32 } (/34 Tile{ AsIs: e.Name#1/28 } Tile{ AsIs: )/14 } Tile{ AsIs: )/31 AsIs: e.Tail#1/26 AsIs: >/1 ]] }
          if( ! refalrts::alloc_open_bracket( vm, context[34] ) )
            return refalrts::cNoMemory;
          refalrts::reinit_open_bracket( context[10] );
          refalrts::reinit_ident( context[13], ident_ADTm_Brackets.ref(vm) );
          refalrts::reinit_svar( context[19], context[22] );
          refalrts::update_ident( context[21], ident_TkCloseADT.ref(vm) );
          refalrts::reinit_close_bracket( context[25] );
          refalrts::reinit_svar( context[32], context[33] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[30], context[31] );
          refalrts::link_brackets( context[34], context[14] );
          refalrts::link_brackets( context[9], context[20] );
          refalrts::link_brackets( context[10], context[25] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[31];
          res = refalrts::splice_evar( res, context[14], context[14] );
          res = refalrts::splice_evar( res, context[28], context[29] );
          res = refalrts::splice_evar( res, context[34], context[34] );
          res = refalrts::splice_evar( res, context[25], context[32] );
          res = refalrts::splice_evar( res, context[11], context[12] );
          res = refalrts::splice_evar( res, context[19], context[21] );
          refalrts::splice_to_freelist_open( vm, context[13], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & DoParsePattern/4 t.ErrorList#1/5 (/9 e.MultiBracket#1/7 )/10 (/13 e.Scanned#1/11 )/14 (/19 # Open/21 s.LnNum#1/22 # TkOpenADT/25 )/20 e.Tail#1/15 >/1
        // closed e.MultiBracket#1 as range 7
        // closed e.Scanned#1 as range 11
        // closed e.Tail#1 as range 15
        //DEBUG: t.ErrorList#1: 5
        //DEBUG: s.LnNum#1: 22
        //DEBUG: e.MultiBracket#1: 7
        //DEBUG: e.Scanned#1: 11
        //DEBUG: e.Tail#1: 15

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } </26 & DoParsePattern/27 Tile{ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#1/5 HalfReuse: s.LnNum1 #22/9 }"Expected name after \"[\""/28 >/30 (/31 Tile{ AsIs: e.MultiBracket#1/7 } (/32 # ADT-Brackets/33 Tile{ HalfReuse: s.LnNum1 #22/10 HalfReuse: # TkCloseADT/13 AsIs: e.Scanned#1/11 AsIs: )/14 HalfReuse: )/19 HalfReuse: (/21 AsIs: s.LnNum#1/22 HalfReuse: (/25 HalfReuse: # UnnamedADT/20 } )/34 )/35 Tile{ AsIs: e.Tail#1/15 } Tile{ AsIs: >/1 ]] }
        if( ! refalrts::alloc_open_call( vm, context[26] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( vm, context[27], ref_DoParsePattern.ref(vm) ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_chars( vm, context[28], context[29], "Expected name after \"[\"", 23 ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( vm, context[30] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( vm, context[31] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( vm, context[32] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( vm, context[33], ident_ADTm_Brackets.ref(vm) ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( vm, context[34] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( vm, context[35] ) )
          return refalrts::cNoMemory;
        refalrts::update_name( context[4], ref_ELm_AddErrorAt.ref(vm) );
        refalrts::reinit_svar( context[9], context[22] );
        refalrts::reinit_svar( context[10], context[22] );
        refalrts::reinit_ident( context[13], ident_TkCloseADT.ref(vm) );
        refalrts::reinit_close_bracket( context[19] );
        refalrts::reinit_open_bracket( context[21] );
        refalrts::reinit_open_bracket( context[25] );
        refalrts::reinit_ident( context[20], ident_UnnamedADT.ref(vm) );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[26] );
        refalrts::link_brackets( context[21], context[35] );
        refalrts::link_brackets( context[25], context[34] );
        refalrts::link_brackets( context[31], context[19] );
        refalrts::link_brackets( context[32], context[14] );
        refalrts::push_stack( vm, context[30] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[15], context[16] );
        res = refalrts::splice_evar( res, context[34], context[35] );
        res = refalrts::splice_evar( res, context[10], context[20] );
        res = refalrts::splice_evar( res, context[32], context[33] );
        res = refalrts::splice_evar( res, context[7], context[8] );
        res = refalrts::splice_evar( res, context[28], context[31] );
        res = refalrts::splice_evar( res, context[0], context[9] );
        res = refalrts::splice_evar( res, context[26], context[27] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoParsePattern/4 t.ErrorList#1/5 (/9 e.MultiBracket#1/7 )/10 (/13 e.Scanned#1/11 )/14 (/19 # Open/21 s.LnNum#1/22 # TkOpenCall/25 )/20 e.Tail#1/15 >/1
      if( ! refalrts::ident_term(  ident_TkOpenCall.ref(vm), context[25] ) )
        continue;
      // closed e.MultiBracket#1 as range 7
      // closed e.Scanned#1 as range 11
      // closed e.Tail#1 as range 15
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: s.LnNum#1: 22
      //DEBUG: e.MultiBracket#1: 7
      //DEBUG: e.Scanned#1: 11
      //DEBUG: e.Tail#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.LnNum#1/22 {REMOVED TILE}
      //RESULT: Tile{ [[ } </26 & DoParsePattern/27 Tile{ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#1/5 HalfReuse: s.LnNum1 #22/9 }"Unexpected call bracket in pattern expression"/28 >/30 (/31 Tile{ AsIs: e.MultiBracket#1/7 } (/32 Tile{ Reuse: # Brackets/21 } Tile{ HalfReuse: s.LnNum1 #22/10 HalfReuse: # TkCloseCall/13 AsIs: e.Scanned#1/11 AsIs: )/14 HalfReuse: )/19 } Tile{ HalfReuse: (/25 AsIs: )/20 AsIs: e.Tail#1/15 AsIs: >/1 ]] }
      if( ! refalrts::alloc_open_call( vm, context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( vm, context[27], ref_DoParsePattern.ref(vm) ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_chars( vm, context[28], context[29], "Unexpected call bracket in pattern expression", 45 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( vm, context[30] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( vm, context[31] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( vm, context[32] ) )
        return refalrts::cNoMemory;
      refalrts::update_name( context[4], ref_ELm_AddErrorAt.ref(vm) );
      refalrts::reinit_svar( context[9], context[22] );
      refalrts::update_ident( context[21], ident_Brackets.ref(vm) );
      refalrts::reinit_svar( context[10], context[22] );
      refalrts::reinit_ident( context[13], ident_TkCloseCall.ref(vm) );
      refalrts::reinit_close_bracket( context[19] );
      refalrts::reinit_open_bracket( context[25] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[26] );
      refalrts::link_brackets( context[25], context[20] );
      refalrts::link_brackets( context[31], context[19] );
      refalrts::link_brackets( context[32], context[14] );
      refalrts::push_stack( vm, context[30] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[25];
      res = refalrts::splice_evar( res, context[10], context[19] );
      res = refalrts::splice_evar( res, context[21], context[21] );
      res = refalrts::splice_evar( res, context[32], context[32] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_evar( res, context[28], context[31] );
      res = refalrts::splice_evar( res, context[0], context[9] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoParsePattern/4 t.new#19/5 (/9 e.new#20/7 )/10 (/13 e.new#21/11 )/14 (/19 # Close/21 s.new#22/22 s.new#23/25 )/20 e.new#24/15 >/1
    if( ! refalrts::ident_term(  ident_Close.ref(vm), context[21] ) )
      continue;
    // closed e.new#20 as range 7
    // closed e.new#21 as range 11
    // closed e.new#24 as range 15
    do {
      // </0 & DoParsePattern/4 t.new#25/5 (/9 e.new#26/26 (/30 s.new#27/32 s.new#28/33 s.new#29/34 e.new#30/28 )/31 )/10 (/13 e.new#31/11 )/14 (/19 # Close/21 s.new#32/22 s.new#33/25 )/20 e.new#34/15 >/1
      context[26] = context[7];
      context[27] = context[8];
      context[28] = 0;
      context[29] = 0;
      context[30] = refalrts::brackets_right( context[28], context[29], context[26], context[27] );
      if( ! context[30] )
        continue;
      refalrts::bracket_pointers(context[30], context[31]);
      // closed e.new#26 as range 26
      // closed e.new#31 as range 11
      // closed e.new#34 as range 15
      if( ! refalrts::svar_left( context[32], context[28], context[29] ) )
        continue;
      if( ! refalrts::svar_left( context[33], context[28], context[29] ) )
        continue;
      if( ! refalrts::svar_left( context[34], context[28], context[29] ) )
        continue;
      // closed e.new#30 as range 28
      do {
        // </0 & DoParsePattern/4 t.ErrorList#1/5 (/9 e.MultiBracket#1/26 (/30 s.BracketsSign#1/32 s.InnerLnNum#1/33 s.CloseBracket#1/34 e.Scanned#1/28 )/31 )/10 (/13 e.InnerScanned#1/11 )/14 (/19 # Close/21 s.ClosedLnNum#1/22 s.CloseBracket#1/25 )/20 e.Tail#1/15 >/1
        if( ! refalrts::repeated_stvar_term( vm, context[25], context[34] ) )
          continue;
        // closed e.MultiBracket#1 as range 26
        // closed e.Scanned#1 as range 28
        // closed e.InnerScanned#1 as range 11
        // closed e.Tail#1 as range 15
        //DEBUG: t.ErrorList#1: 5
        //DEBUG: s.BracketsSign#1: 32
        //DEBUG: s.InnerLnNum#1: 33
        //DEBUG: s.CloseBracket#1: 34
        //DEBUG: s.ClosedLnNum#1: 22
        //DEBUG: e.MultiBracket#1: 26
        //DEBUG: e.Scanned#1: 28
        //DEBUG: e.InnerScanned#1: 11
        //DEBUG: e.Tail#1: 15

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.BracketsSign#1/32 s.InnerLnNum#1/33 s.CloseBracket#1/34 {REMOVED TILE} )/31 {REMOVED TILE} {REMOVED TILE} # Close/21 s.ClosedLnNum#1/22 s.CloseBracket#1/25 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoParsePattern/4 AsIs: t.ErrorList#1/5 AsIs: (/9 AsIs: e.MultiBracket#1/26 HalfReuse: )/30 } Tile{ AsIs: (/19 } Tile{ AsIs: e.Scanned#1/28 } Tile{ HalfReuse: (/10 HalfReuse: s.BracketsSign1 #32/13 AsIs: e.InnerScanned#1/11 AsIs: )/14 } Tile{ AsIs: )/20 AsIs: e.Tail#1/15 AsIs: >/1 ]] }
        refalrts::reinit_close_bracket( context[30] );
        refalrts::reinit_open_bracket( context[10] );
        refalrts::reinit_svar( context[13], context[32] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[19], context[20] );
        refalrts::link_brackets( context[10], context[14] );
        refalrts::link_brackets( context[9], context[30] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[20];
        res = refalrts::splice_evar( res, context[10], context[14] );
        res = refalrts::splice_evar( res, context[28], context[29] );
        res = refalrts::splice_evar( res, context[19], context[19] );
        refalrts::splice_to_freelist_open( vm, context[30], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoParsePattern/4 t.ErrorList#1/5 (/9 e.MultiBracket#1/26 (/30 s.BracketsSign#1/32 s.InnerLnNum#1/33 s.CloseBracket#1/34 e.Scanned#1/28 )/31 )/10 (/13 e.InnerScanned#1/11 )/14 (/19 # Close/21 s.LnNum#1/22 s.OtherCloseBracket#1/25 )/20 e.Tail#1/15 >/1
      // closed e.MultiBracket#1 as range 26
      // closed e.Scanned#1 as range 28
      // closed e.InnerScanned#1 as range 11
      // closed e.Tail#1 as range 15
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: s.BracketsSign#1: 32
      //DEBUG: s.InnerLnNum#1: 33
      //DEBUG: s.CloseBracket#1: 34
      //DEBUG: s.LnNum#1: 22
      //DEBUG: s.OtherCloseBracket#1: 25
      //DEBUG: e.MultiBracket#1: 26
      //DEBUG: e.Scanned#1: 28
      //DEBUG: e.InnerScanned#1: 11
      //DEBUG: e.Tail#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.InnerLnNum#1/33 s.CloseBracket#1/34 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </35 & DoParsePattern/36 Tile{ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#1/5 HalfReuse: s.InnerLnNum1 #33/9 }"Unbalanced bracket \""/37 </39 & StrFromBracket/40 s.BracketsSign#1/32/41 >/42 '\"'/43 >/44 (/45 Tile{ AsIs: e.MultiBracket#1/26 } Tile{ AsIs: )/10 AsIs: (/13 } Tile{ AsIs: e.Scanned#1/28 } Tile{ AsIs: (/30 AsIs: s.BracketsSign#1/32 } Tile{ AsIs: e.InnerScanned#1/11 } Tile{ AsIs: )/31 } Tile{ AsIs: )/14 AsIs: (/19 AsIs: # Close/21 AsIs: s.LnNum#1/22 AsIs: s.OtherCloseBracket#1/25 AsIs: )/20 AsIs: e.Tail#1/15 AsIs: >/1 ]] }
      if( ! refalrts::alloc_open_call( vm, context[35] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( vm, context[36], ref_DoParsePattern.ref(vm) ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_chars( vm, context[37], context[38], "Unbalanced bracket \"", 20 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( vm, context[39] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( vm, context[40], ref_StrFromBracket.ref(vm) ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(vm, context[41], context[32]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( vm, context[42] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( vm, context[43], '\"' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( vm, context[44] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( vm, context[45] ) )
        return refalrts::cNoMemory;
      refalrts::update_name( context[4], ref_ELm_AddErrorAt.ref(vm) );
      refalrts::reinit_svar( context[9], context[33] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[35] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::link_brackets( context[30], context[31] );
      refalrts::link_brackets( context[45], context[10] );
      refalrts::push_stack( vm, context[44] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[42] );
      refalrts::push_stack( vm, context[39] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[14];
      res = refalrts::splice_evar( res, context[31], context[31] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[30], context[32] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_evar( res, context[10], context[13] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[37], context[45] );
      res = refalrts::splice_evar( res, context[0], context[9] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoParsePattern/4 t.ErrorList#1/5 (/9 )/10 (/13 e.Scanned#1/11 )/14 (/19 # Close/21 s.LnNum#1/22 s.CloseBracket#1/25 )/20 e.Tail#1/15 >/1
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    // closed e.Scanned#1 as range 11
    // closed e.Tail#1 as range 15
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: s.LnNum#1: 22
    //DEBUG: s.CloseBracket#1: 25
    //DEBUG: e.Scanned#1: 11
    //DEBUG: e.Tail#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoParsePattern/4 } </26 & EL-AddErrorAt/27 Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: s.LnNum#1/22 }"Unb"/28 Tile{ HalfReuse: 'a'/19 HalfReuse: 'l'/21 }"anced bracket \""/30 </32 & StrFromBracket/33 Tile{ AsIs: s.CloseBracket#1/25 HalfReuse: >/20 } '\"'/34 >/35 Tile{ AsIs: (/9 AsIs: )/10 AsIs: (/13 AsIs: e.Scanned#1/11 AsIs: )/14 } Tile{ AsIs: e.Tail#1/15 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( vm, context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( vm, context[27], ref_ELm_AddErrorAt.ref(vm) ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( vm, context[28], context[29], "Unb", 3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( vm, context[30], context[31], "anced bracket \"", 15 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( vm, context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( vm, context[33], ref_StrFromBracket.ref(vm) ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( vm, context[34], '\"' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( vm, context[35] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[19], 'a' );
    refalrts::reinit_char( context[21], 'l' );
    refalrts::reinit_close_call( context[20] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::push_stack( vm, context[35] );
    refalrts::push_stack( vm, context[26] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[32] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[9], context[14] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_evar( res, context[25], context[20] );
    res = refalrts::splice_evar( res, context[30], context[33] );
    res = refalrts::splice_evar( res, context[19], context[21] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoParsePattern/4 t.ErrorList#1/5 (/9 e.MultiBracket#1/15 (/19 s.BracketsSign#1/21 s.InnerLnNum#1/22 s.CloseBracket#1/23 e.Scanned#1/17 )/20 )/10 (/13 e.InnerScanned#1/11 )/14 e.Tail#1/2 >/1
    context[15] = context[7];
    context[16] = context[8];
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_right( context[17], context[18], context[15], context[16] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    // closed e.MultiBracket#1 as range 15
    // closed e.InnerScanned#1 as range 11
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[21], context[17], context[18] ) )
      continue;
    if( ! refalrts::svar_left( context[22], context[17], context[18] ) )
      continue;
    if( ! refalrts::svar_left( context[23], context[17], context[18] ) )
      continue;
    // closed e.Scanned#1 as range 17
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: e.MultiBracket#1: 15
    //DEBUG: e.InnerScanned#1: 11
    //DEBUG: e.Tail#1: 2
    //DEBUG: s.BracketsSign#1: 21
    //DEBUG: s.InnerLnNum#1: 22
    //DEBUG: s.CloseBracket#1: 23
    //DEBUG: e.Scanned#1: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.InnerLnNum#1/22 s.CloseBracket#1/23 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </24 & DoParsePattern/25 Tile{ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#1/5 HalfReuse: s.InnerLnNum1 #22/9 }"Unbalanced bracket \""/26 </28 & StrFromBracket/29 s.BracketsSign#1/21/30 >/31 '\"'/32 >/33 (/34 Tile{ AsIs: e.MultiBracket#1/15 } Tile{ AsIs: )/10 AsIs: (/13 } Tile{ AsIs: e.Scanned#1/17 } Tile{ AsIs: (/19 AsIs: s.BracketsSign#1/21 } Tile{ AsIs: e.InnerScanned#1/11 } Tile{ AsIs: )/20 } Tile{ AsIs: )/14 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( vm, context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( vm, context[25], ref_DoParsePattern.ref(vm) ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( vm, context[26], context[27], "Unbalanced bracket \"", 20 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( vm, context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( vm, context[29], ref_StrFromBracket.ref(vm) ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(vm, context[30], context[21]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( vm, context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( vm, context[32], '\"' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( vm, context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( vm, context[34] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_ELm_AddErrorAt.ref(vm) );
    refalrts::reinit_svar( context[9], context[22] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[24] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[34], context[10] );
    refalrts::push_stack( vm, context[33] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[31] );
    refalrts::push_stack( vm, context[28] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[14];
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[19], context[21] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[10], context[13] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[26], context[34] );
    res = refalrts::splice_evar( res, context[0], context[9] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoParsePattern/4 t.ErrorList#1/5 (/9 )/10 (/13 e.Pattern#1/11 )/14 e.Tail#1/2 >/1
  if( ! refalrts::empty_seq( context[7], context[8] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Pattern#1 as range 11
  // closed e.Tail#1 as range 2
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: e.Pattern#1: 11
  //DEBUG: e.Tail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DoParsePattern/4 {REMOVED TILE} (/9 )/10 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: (/13 AsIs: e.Pattern#1/11 AsIs: )/14 } Tile{ AsIs: e.Tail#1/2 } Tile{ ]] }
  refalrts::link_brackets( context[13], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoParsePattern("DoParsePattern", 378583373U, 621461326U, func_DoParsePattern);


static refalrts::FnResult func_StrFromBracket(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & StrFromBracket/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & StrFromBracket/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & StrFromBracket/4 # TkOpenBracket/5 >/1
    if( ! refalrts::ident_term(  ident_TkOpenBracket.ref(vm), context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & StrFromBracket/4 # TkOpenBracket/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '('/1 ]] }
    refalrts::reinit_char( context[1], '(' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & StrFromBracket/4 # TkCloseBracket/5 >/1
    if( ! refalrts::ident_term(  ident_TkCloseBracket.ref(vm), context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & StrFromBracket/4 # TkCloseBracket/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: ')'/1 ]] }
    refalrts::reinit_char( context[1], ')' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & StrFromBracket/4 # TkOpenCall/5 >/1
    if( ! refalrts::ident_term(  ident_TkOpenCall.ref(vm), context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & StrFromBracket/4 # TkOpenCall/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '<'/1 ]] }
    refalrts::reinit_char( context[1], '<' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & StrFromBracket/4 # TkCloseCall/5 >/1
    if( ! refalrts::ident_term(  ident_TkCloseCall.ref(vm), context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & StrFromBracket/4 # TkCloseCall/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '>'/1 ]] }
    refalrts::reinit_char( context[1], '>' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & StrFromBracket/4 # TkOpenADT/5 >/1
    if( ! refalrts::ident_term(  ident_TkOpenADT.ref(vm), context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & StrFromBracket/4 # TkOpenADT/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '['/1 ]] }
    refalrts::reinit_char( context[1], '[' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & StrFromBracket/4 # TkCloseADT/5 >/1
    if( ! refalrts::ident_term(  ident_TkCloseADT.ref(vm), context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & StrFromBracket/4 # TkCloseADT/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: ']'/1 ]] }
    refalrts::reinit_char( context[1], ']' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & StrFromBracket/4 # Brackets/5 >/1
    if( ! refalrts::ident_term(  ident_Brackets.ref(vm), context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & StrFromBracket/4 # Brackets/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '('/1 ]] }
    refalrts::reinit_char( context[1], '(' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & StrFromBracket/4 # ADT-Brackets/5 >/1
    if( ! refalrts::ident_term(  ident_ADTm_Brackets.ref(vm), context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & StrFromBracket/4 # ADT-Brackets/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '['/1 ]] }
    refalrts::reinit_char( context[1], '[' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & StrFromBracket/4 # CallBrackets/5 >/1
  if( ! refalrts::ident_term(  ident_CallBrackets.ref(vm), context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & StrFromBracket/4 # CallBrackets/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: '<'/1 ]] }
  refalrts::reinit_char( context[1], '<' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_StrFromBracket("StrFromBracket", 378583373U, 621461326U, func_StrFromBracket);


static refalrts::FnResult func_gen_ParseResult_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & ParseResult=2/4 (/7 e.Result#2/5 )/8 t.ErrorList#3/9 (/13 e.Blocks#3/11 )/14 e.Tail#3/2 >/1
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
  // closed e.Result#2 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.Blocks#3 as range 11
  // closed e.Tail#3 as range 2
  //DEBUG: e.Result#2: 5
  //DEBUG: t.ErrorList#3: 9
  //DEBUG: e.Blocks#3: 11
  //DEBUG: e.Tail#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ParseResult=2/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#3/9 } Tile{ AsIs: (/7 AsIs: e.Result#2/5 AsIs: )/8 } Tile{ AsIs: (/13 AsIs: e.Blocks#3/11 AsIs: )/14 } Tile{ AsIs: e.Tail#3/2 } Tile{ ]] }
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseResult_A2("ParseResult=2", 378583373U, 621461326U, func_gen_ParseResult_A2);


static refalrts::FnResult func_gen_ParseResult_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & ParseResult=1/4 t.ErrorList#2/5 (/9 e.Result#2/7 )/10 e.Tail#2/2 >/1
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
  // closed e.Result#2 as range 7
  // closed e.Tail#2 as range 2
  //DEBUG: t.ErrorList#2: 5
  //DEBUG: e.Result#2: 7
  //DEBUG: e.Tail#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </11 [*]/12 & ParseResult=2/13 Tile{ AsIs: (/9 AsIs: e.Result#2/7 AsIs: )/10 } {*}/14 Tile{ AsIs: </0 Reuse: & ParseBlocks/4 AsIs: t.ErrorList#2/5 } Tile{ AsIs: e.Tail#2/2 } >/15 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_closure_head( vm, context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[13], ref_gen_ParseResult_A2.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[14], context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[15] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_ParseBlocks.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[11], context[13] );
  refalrts::use( res );
  refalrts::wrap_closure( context[14] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseResult_A1("ParseResult=1", 378583373U, 621461326U, func_gen_ParseResult_A1);


static refalrts::FnResult func_ParseResult(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & ParseResult/4 t.ErrorList#1/5 e.Tokens#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tokens#1 as range 2
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseResult=1/4 } </7 & DoParseResult/8 Tile{ AsIs: t.ErrorList#1/5 } (/9 )/10 (/11 )/12 Tile{ AsIs: e.Tokens#1/2 } >/13 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[8], ref_DoParseResult.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[13] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_gen_ParseResult_A1.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[7] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[12] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseResult("ParseResult", 378583373U, 621461326U, func_ParseResult);


static refalrts::FnResult func_gen_ParseBlocks_S1A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & ParseBlocks$1=2/4 (/7 e.Block#2/5 )/8 t.ErrorList#3/9 (/13 e.Blocks#3/11 )/14 e.Tail#3/2 >/1
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
  // closed e.Block#2 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.Blocks#3 as range 11
  // closed e.Tail#3 as range 2
  //DEBUG: e.Block#2: 5
  //DEBUG: t.ErrorList#3: 9
  //DEBUG: e.Blocks#3: 11
  //DEBUG: e.Tail#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} (/13 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#3/9 } Tile{ HalfReuse: (/4 AsIs: (/7 AsIs: e.Block#2/5 AsIs: )/8 } Tile{ AsIs: e.Blocks#3/11 } Tile{ AsIs: )/14 } Tile{ AsIs: e.Tail#3/2 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[4] );
  refalrts::link_brackets( context[4], context[14] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[4], context[8] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseBlocks_S1A2("ParseBlocks$1=2", 378583373U, 621461326U, func_gen_ParseBlocks_S1A2);


static refalrts::FnResult func_gen_ParseBlocks_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & ParseBlocks$1=1/4 (/7 e.Block#2/5 )/8 t.ErrorList#2/9 e.Tail#2/2 >/1
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
  // closed e.Block#2 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#2 as range 2
  //DEBUG: e.Block#2: 5
  //DEBUG: t.ErrorList#2: 9
  //DEBUG: e.Tail#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </11 Tile{ HalfReuse: [*]/0 Reuse: & ParseBlocks$1=2/4 AsIs: (/7 AsIs: e.Block#2/5 AsIs: )/8 } {*}/12 </13 & ParseBlocks/14 Tile{ AsIs: t.ErrorList#2/9 AsIs: e.Tail#2/2 AsIs: >/1 } >/15 Tile{ ]] }
  if( ! refalrts::alloc_open_call( vm, context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[12], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[14], ref_ParseBlocks.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[15] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_ParseBlocks_S1A2.ref(vm) );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[9], context[1] );
  res = refalrts::splice_evar( res, context[12], context[14] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::use( res );
  refalrts::wrap_closure( context[12] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseBlocks_S1A1("ParseBlocks$1=1", 378583373U, 621461326U, func_gen_ParseBlocks_S1A1);


static refalrts::FnResult func_ParseBlocks(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & ParseBlocks/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseBlocks/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & ParseBlocks/4 t.ErrorList#1/5 (/11 # TkColon/13 s.ColonPos#1/19 )/12 (/16 # TkOpenBlock/18 s.OpenBlockPos#1/20 )/17 e.Tail#1/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  ident_TkColon.ref(vm), context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[7], context[8] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left(  ident_TkOpenBlock.ref(vm), context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.Tail#1 as range 7
    if( ! refalrts::svar_left( context[19], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[20], context[14], context[15] ) )
      continue;
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: e.Tail#1: 7
    //DEBUG: s.ColonPos#1: 19
    //DEBUG: s.OpenBlockPos#1: 20

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.ColonPos#1/19 )/12 (/16 # TkOpenBlock/18 s.OpenBlockPos#1/20 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseBlocks$1=1/4 } Tile{ HalfReuse: </11 HalfReuse: & ParseBlock/13 } Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: e.Tail#1/7 } Tile{ HalfReuse: >/17 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_gen_ParseBlocks_S1A1.ref(vm) );
    refalrts::reinit_open_call( context[11] );
    refalrts::reinit_name( context[13], ref_ParseBlock.ref(vm) );
    refalrts::reinit_close_call( context[17] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[11], context[13] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseBlocks/4 t.ErrorList#1/5 e.Tokens#1/2 >/1
  // closed e.Tokens#1 as range 2
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/5 } Tile{ HalfReuse: (/0 HalfReuse: )/4 } Tile{ AsIs: e.Tokens#1/2 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::link_brackets( context[0], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseBlocks("ParseBlocks", 378583373U, 621461326U, func_ParseBlocks);


static refalrts::FnResult func_gen_DoParseResult_S10L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & DoParseResult$10\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoParseResult$10\1/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & DoParseResult$10\1/4 # TkOpenBracket/5 >/1
    if( ! refalrts::ident_term(  ident_TkOpenBracket.ref(vm), context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoParseResult$10\1/4 # TkOpenBracket/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Brackets/1 ]] }
    refalrts::reinit_ident( context[1], ident_Brackets.ref(vm) );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoParseResult$10\1/4 # TkOpenCall/5 >/1
  if( ! refalrts::ident_term(  ident_TkOpenCall.ref(vm), context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DoParseResult$10\1/4 # TkOpenCall/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # CallBrackets/1 ]] }
  refalrts::reinit_ident( context[1], ident_CallBrackets.ref(vm) );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoParseResult_S10L1("DoParseResult$10\\1", 378583373U, 621461326U, func_gen_DoParseResult_S10L1);


static refalrts::FnResult func_gen_DoParseResult_S10L2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & DoParseResult$10\2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoParseResult$10\2/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & DoParseResult$10\2/4 # TkOpenBracket/5 >/1
    if( ! refalrts::ident_term(  ident_TkOpenBracket.ref(vm), context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoParseResult$10\2/4 # TkOpenBracket/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # TkCloseBracket/1 ]] }
    refalrts::reinit_ident( context[1], ident_TkCloseBracket.ref(vm) );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoParseResult$10\2/4 # TkOpenCall/5 >/1
  if( ! refalrts::ident_term(  ident_TkOpenCall.ref(vm), context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DoParseResult$10\2/4 # TkOpenCall/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # TkCloseCall/1 ]] }
  refalrts::reinit_ident( context[1], ident_TkCloseCall.ref(vm) );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoParseResult_S10L2("DoParseResult$10\\2", 378583373U, 621461326U, func_gen_DoParseResult_S10L2);


static refalrts::FnResult func_gen_DoParseResult_S12L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & DoParseResult$12\1/4 (/7 e.MultiBracket#1/5 )/8 (/11 e.Scanned#1/9 )/12 (/15 e.Block#2/13 )/16 t.ErrorList#2/17 e.Tail#2/2 >/1
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
  // closed e.MultiBracket#1 as range 5
  // closed e.Scanned#1 as range 9
  // closed e.Block#2 as range 13
  context[18] = refalrts::tvar_left( context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#2 as range 2
  //DEBUG: e.MultiBracket#1: 5
  //DEBUG: e.Scanned#1: 9
  //DEBUG: e.Block#2: 13
  //DEBUG: t.ErrorList#2: 17
  //DEBUG: e.Tail#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoParseResult/4 } Tile{ AsIs: t.ErrorList#2/17 } Tile{ AsIs: (/7 AsIs: e.MultiBracket#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Scanned#1/9 HalfReuse: (/12 HalfReuse: # Closure/15 AsIs: e.Block#2/13 AsIs: )/16 } )/19 Tile{ AsIs: e.Tail#2/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_close_bracket( vm, context[19] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_DoParseResult.ref(vm) );
  refalrts::reinit_open_bracket( context[12] );
  refalrts::reinit_ident( context[15], ident_Closure.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[19] );
  refalrts::link_brackets( context[12], context[16] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[7], context[16] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoParseResult_S12L1("DoParseResult$12\\1", 378583373U, 621461326U, func_gen_DoParseResult_S12L1);


static refalrts::FnResult func_DoParseResult(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 36 elems
  refalrts::Iter context[36];
  refalrts::zeros( context, 36 );
  // </0 & DoParseResult/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoParseResult/4 t.new#1/5 (/9 e.new#2/7 )/10 (/13 e.new#3/11 )/14 e.new#4/2 >/1
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
  // closed e.new#2 as range 7
  // closed e.new#3 as range 11
  // closed e.new#4 as range 2
  do {
    // </0 & DoParseResult/4 t.new#5/5 (/9 e.new#6/7 )/10 (/13 e.new#7/11 )/14 (/19 s.new#8/21 s.new#9/22 e.new#10/17 )/20 e.new#11/15 >/1
    context[15] = context[2];
    context[16] = context[3];
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[15], context[16] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    // closed e.new#6 as range 7
    // closed e.new#7 as range 11
    // closed e.new#11 as range 15
    if( ! refalrts::svar_left( context[21], context[17], context[18] ) )
      continue;
    if( ! refalrts::svar_left( context[22], context[17], context[18] ) )
      continue;
    // closed e.new#10 as range 17
    do {
      // </0 & DoParseResult/4 t.new#12/5 (/9 e.new#13/7 )/10 (/13 e.new#14/11 )/14 (/19 s.new#15/21 s.new#16/22 s.new#17/25 )/20 e.new#18/15 >/1
      context[23] = context[17];
      context[24] = context[18];
      // closed e.new#13 as range 7
      // closed e.new#14 as range 11
      // closed e.new#18 as range 15
      if( ! refalrts::svar_left( context[25], context[23], context[24] ) )
        continue;
      if( ! refalrts::empty_seq( context[23], context[24] ) )
        continue;
      do {
        // </0 & DoParseResult/4 t.ErrorList#1/5 (/9 e.MultiBracket#1/7 )/10 (/13 e.Scanned#1/11 )/14 (/19 # TkChar/21 s.LnNum#1/22 s.Char#1/25 )/20 e.Tail#1/15 >/1
        if( ! refalrts::ident_term(  ident_TkChar.ref(vm), context[21] ) )
          continue;
        // closed e.MultiBracket#1 as range 7
        // closed e.Scanned#1 as range 11
        // closed e.Tail#1 as range 15
        //DEBUG: t.ErrorList#1: 5
        //DEBUG: s.LnNum#1: 22
        //DEBUG: s.Char#1: 25
        //DEBUG: e.MultiBracket#1: 7
        //DEBUG: e.Scanned#1: 11
        //DEBUG: e.Tail#1: 15

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.LnNum#1/22 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoParseResult/4 AsIs: t.ErrorList#1/5 AsIs: (/9 AsIs: e.MultiBracket#1/7 AsIs: )/10 AsIs: (/13 AsIs: e.Scanned#1/11 HalfReuse: (/14 HalfReuse: # Symbol/19 Reuse: # Char/21 } Tile{ AsIs: s.Char#1/25 } )/26 Tile{ AsIs: )/20 AsIs: e.Tail#1/15 AsIs: >/1 ]] }
        if( ! refalrts::alloc_close_bracket( vm, context[26] ) )
          return refalrts::cNoMemory;
        refalrts::reinit_open_bracket( context[14] );
        refalrts::reinit_ident( context[19], ident_Symbol.ref(vm) );
        refalrts::update_ident( context[21], ident_Char.ref(vm) );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[13], context[20] );
        refalrts::link_brackets( context[14], context[26] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[20];
        res = refalrts::splice_evar( res, context[26], context[26] );
        res = refalrts::splice_evar( res, context[25], context[25] );
        refalrts::splice_to_freelist_open( vm, context[21], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoParseResult/4 t.ErrorList#1/5 (/9 e.MultiBracket#1/7 )/10 (/13 e.Scanned#1/11 )/14 (/19 # TkNumber/21 s.LnNum#1/22 s.Number#1/25 )/20 e.Tail#1/15 >/1
      if( ! refalrts::ident_term(  ident_TkNumber.ref(vm), context[21] ) )
        continue;
      // closed e.MultiBracket#1 as range 7
      // closed e.Scanned#1 as range 11
      // closed e.Tail#1 as range 15
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: s.LnNum#1: 22
      //DEBUG: s.Number#1: 25
      //DEBUG: e.MultiBracket#1: 7
      //DEBUG: e.Scanned#1: 11
      //DEBUG: e.Tail#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.LnNum#1/22 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoParseResult/4 AsIs: t.ErrorList#1/5 AsIs: (/9 AsIs: e.MultiBracket#1/7 AsIs: )/10 AsIs: (/13 AsIs: e.Scanned#1/11 HalfReuse: (/14 HalfReuse: # Symbol/19 Reuse: # Number/21 } Tile{ AsIs: s.Number#1/25 } )/26 Tile{ AsIs: )/20 AsIs: e.Tail#1/15 AsIs: >/1 ]] }
      if( ! refalrts::alloc_close_bracket( vm, context[26] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[14] );
      refalrts::reinit_ident( context[19], ident_Symbol.ref(vm) );
      refalrts::update_ident( context[21], ident_Number.ref(vm) );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[13], context[20] );
      refalrts::link_brackets( context[14], context[26] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[20];
      res = refalrts::splice_evar( res, context[26], context[26] );
      res = refalrts::splice_evar( res, context[25], context[25] );
      refalrts::splice_to_freelist_open( vm, context[21], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoParseResult/4 t.ErrorList#1/5 (/9 e.MultiBracket#1/7 )/10 (/13 e.Scanned#1/11 )/14 (/19 # TkName/21 s.LnNum#1/22 e.Name#1/17 )/20 e.Tail#1/15 >/1
      if( ! refalrts::ident_term(  ident_TkName.ref(vm), context[21] ) )
        continue;
      // closed e.MultiBracket#1 as range 7
      // closed e.Scanned#1 as range 11
      // closed e.Name#1 as range 17
      // closed e.Tail#1 as range 15
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: s.LnNum#1: 22
      //DEBUG: e.MultiBracket#1: 7
      //DEBUG: e.Scanned#1: 11
      //DEBUG: e.Name#1: 17
      //DEBUG: e.Tail#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoParseResult/4 AsIs: t.ErrorList#1/5 AsIs: (/9 AsIs: e.MultiBracket#1/7 AsIs: )/10 AsIs: (/13 AsIs: e.Scanned#1/11 HalfReuse: (/14 HalfReuse: # Symbol/19 Reuse: # Name/21 AsIs: s.LnNum#1/22 AsIs: e.Name#1/17 AsIs: )/20 } )/23 Tile{ AsIs: e.Tail#1/15 } Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_close_bracket( vm, context[23] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[14] );
      refalrts::reinit_ident( context[19], ident_Symbol.ref(vm) );
      refalrts::update_ident( context[21], ident_Name.ref(vm) );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[13], context[23] );
      refalrts::link_brackets( context[14], context[20] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[23], context[23] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoParseResult/4 t.new#12/5 (/9 e.new#13/7 )/10 (/13 e.new#14/11 )/14 (/19 # TkIdentMarker/21 s.new#15/22 )/20 e.new#16/15 >/1
      if( ! refalrts::ident_term(  ident_TkIdentMarker.ref(vm), context[21] ) )
        continue;
      if( ! refalrts::empty_seq( context[17], context[18] ) )
        continue;
      // closed e.new#13 as range 7
      // closed e.new#14 as range 11
      // closed e.new#16 as range 15
      do {
        // </0 & DoParseResult/4 t.ErrorList#1/5 (/9 e.MultiBracket#1/7 )/10 (/13 e.Scanned#1/11 )/14 (/19 # TkIdentMarker/21 s.MarkerLnNum#1/22 )/20 (/27 # TkName/29 s.NameLnNum#1/30 e.Name#1/25 )/28 e.Tail#1/23 >/1
        context[23] = context[15];
        context[24] = context[16];
        context[25] = 0;
        context[26] = 0;
        context[27] = refalrts::brackets_left( context[25], context[26], context[23], context[24] );
        if( ! context[27] )
          continue;
        refalrts::bracket_pointers(context[27], context[28]);
        context[29] = refalrts::ident_left(  ident_TkName.ref(vm), context[25], context[26] );
        if( ! context[29] )
          continue;
        // closed e.MultiBracket#1 as range 7
        // closed e.Scanned#1 as range 11
        // closed e.Tail#1 as range 23
        if( ! refalrts::svar_left( context[30], context[25], context[26] ) )
          continue;
        // closed e.Name#1 as range 25
        //DEBUG: t.ErrorList#1: 5
        //DEBUG: s.MarkerLnNum#1: 22
        //DEBUG: e.MultiBracket#1: 7
        //DEBUG: e.Scanned#1: 11
        //DEBUG: e.Tail#1: 23
        //DEBUG: s.NameLnNum#1: 30
        //DEBUG: e.Name#1: 25

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.MarkerLnNum#1/22 {REMOVED TILE} (/27 # TkName/29 s.NameLnNum#1/30 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoParseResult/4 AsIs: t.ErrorList#1/5 AsIs: (/9 AsIs: e.MultiBracket#1/7 AsIs: )/10 AsIs: (/13 AsIs: e.Scanned#1/11 HalfReuse: (/14 HalfReuse: # Symbol/19 Reuse: # Identifier/21 } Tile{ AsIs: e.Name#1/25 } Tile{ AsIs: )/20 } Tile{ AsIs: )/28 AsIs: e.Tail#1/23 AsIs: >/1 ]] }
        refalrts::reinit_open_bracket( context[14] );
        refalrts::reinit_ident( context[19], ident_Symbol.ref(vm) );
        refalrts::update_ident( context[21], ident_Identifier.ref(vm) );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[13], context[28] );
        refalrts::link_brackets( context[14], context[20] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[28];
        res = refalrts::splice_evar( res, context[20], context[20] );
        res = refalrts::splice_evar( res, context[25], context[26] );
        refalrts::splice_to_freelist_open( vm, context[21], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoParseResult/4 t.ErrorList#1/5 (/9 e.MultiBracket#1/7 )/10 (/13 e.Scanned#1/11 )/14 (/19 # TkIdentMarker/21 s.LnNum#1/22 )/20 e.Tail#1/15 >/1
      // closed e.MultiBracket#1 as range 7
      // closed e.Scanned#1 as range 11
      // closed e.Tail#1 as range 15
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: s.LnNum#1: 22
      //DEBUG: e.MultiBracket#1: 7
      //DEBUG: e.Scanned#1: 11
      //DEBUG: e.Tail#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoParseResult/4 } </23 & EL-AddErrorAt/24 Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: s.LnNum#1/22 HalfReuse: 'M'/20 }"is"/25 Tile{ HalfReuse: 's'/19 HalfReuse: 'e'/21 }"d name after \"#\""/27 >/29 Tile{ AsIs: (/9 AsIs: e.MultiBracket#1/7 AsIs: )/10 AsIs: (/13 AsIs: e.Scanned#1/11 AsIs: )/14 } Tile{ AsIs: e.Tail#1/15 } Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_open_call( vm, context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( vm, context[24], ref_ELm_AddErrorAt.ref(vm) ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_chars( vm, context[25], context[26], "is", 2 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_chars( vm, context[27], context[28], "d name after \"#\"", 16 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( vm, context[29] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_char( context[20], 'M' );
      refalrts::reinit_char( context[19], 's' );
      refalrts::reinit_char( context[21], 'e' );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::push_stack( vm, context[29] );
      refalrts::push_stack( vm, context[23] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[9], context[14] );
      res = refalrts::splice_evar( res, context[27], context[29] );
      res = refalrts::splice_evar( res, context[19], context[21] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_evar( res, context[22], context[20] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoParseResult/4 t.ErrorList#1/5 (/9 e.MultiBracket#1/7 )/10 (/13 e.Scanned#1/11 )/14 (/19 # TkCompound/21 s.LnNum#1/22 e.Name#1/17 )/20 e.Tail#1/15 >/1
      if( ! refalrts::ident_term(  ident_TkCompound.ref(vm), context[21] ) )
        continue;
      // closed e.MultiBracket#1 as range 7
      // closed e.Scanned#1 as range 11
      // closed e.Name#1 as range 17
      // closed e.Tail#1 as range 15
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: s.LnNum#1: 22
      //DEBUG: e.MultiBracket#1: 7
      //DEBUG: e.Scanned#1: 11
      //DEBUG: e.Name#1: 17
      //DEBUG: e.Tail#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.LnNum#1/22 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoParseResult/4 AsIs: t.ErrorList#1/5 AsIs: (/9 AsIs: e.MultiBracket#1/7 AsIs: )/10 AsIs: (/13 AsIs: e.Scanned#1/11 HalfReuse: (/14 HalfReuse: # Symbol/19 Reuse: # Identifier/21 } Tile{ AsIs: e.Name#1/17 } )/23 Tile{ AsIs: )/20 AsIs: e.Tail#1/15 AsIs: >/1 ]] }
      if( ! refalrts::alloc_close_bracket( vm, context[23] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[14] );
      refalrts::reinit_ident( context[19], ident_Symbol.ref(vm) );
      refalrts::update_ident( context[21], ident_Identifier.ref(vm) );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[13], context[20] );
      refalrts::link_brackets( context[14], context[23] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[20];
      res = refalrts::splice_evar( res, context[23], context[23] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      refalrts::splice_to_freelist_open( vm, context[21], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoParseResult/4 t.new#12/5 (/9 e.new#13/7 )/10 (/13 e.new#14/11 )/14 (/19 s.new#15/21 s.new#16/22 s.new#17/25 e.new#18/23 )/20 e.new#19/15 >/1
      context[23] = context[17];
      context[24] = context[18];
      // closed e.new#13 as range 7
      // closed e.new#14 as range 11
      // closed e.new#19 as range 15
      if( ! refalrts::svar_left( context[25], context[23], context[24] ) )
        continue;
      // closed e.new#18 as range 23
      do {
        // </0 & DoParseResult/4 t.ErrorList#1/5 (/9 e.MultiBracket#1/7 )/10 (/13 e.Scanned#1/11 )/14 (/19 # TkVariable/21 s.LnNum#1/22 s.Mode#1/25 e.Index#1/23 )/20 e.Tail#1/15 >/1
        if( ! refalrts::ident_term(  ident_TkVariable.ref(vm), context[21] ) )
          continue;
        // closed e.MultiBracket#1 as range 7
        // closed e.Scanned#1 as range 11
        // closed e.Index#1 as range 23
        // closed e.Tail#1 as range 15
        //DEBUG: t.ErrorList#1: 5
        //DEBUG: s.LnNum#1: 22
        //DEBUG: s.Mode#1: 25
        //DEBUG: e.MultiBracket#1: 7
        //DEBUG: e.Scanned#1: 11
        //DEBUG: e.Index#1: 23
        //DEBUG: e.Tail#1: 15

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.LnNum#1/22 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoParseResult/4 AsIs: t.ErrorList#1/5 AsIs: (/9 AsIs: e.MultiBracket#1/7 AsIs: )/10 AsIs: (/13 AsIs: e.Scanned#1/11 HalfReuse: (/14 HalfReuse: # TkVariable/19 HalfReuse: s.LnNum1 #22/21 } Tile{ AsIs: s.Mode#1/25 } Tile{ AsIs: e.Index#1/23 } )/26 Tile{ AsIs: )/20 AsIs: e.Tail#1/15 AsIs: >/1 ]] }
        if( ! refalrts::alloc_close_bracket( vm, context[26] ) )
          return refalrts::cNoMemory;
        refalrts::reinit_open_bracket( context[14] );
        refalrts::reinit_ident( context[19], ident_TkVariable.ref(vm) );
        refalrts::reinit_svar( context[21], context[22] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[13], context[20] );
        refalrts::link_brackets( context[14], context[26] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[20];
        res = refalrts::splice_evar( res, context[26], context[26] );
        res = refalrts::splice_evar( res, context[23], context[24] );
        res = refalrts::splice_evar( res, context[25], context[25] );
        refalrts::splice_to_freelist_open( vm, context[21], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoParseResult/4 t.new#20/5 (/9 e.new#21/7 )/10 (/13 e.new#22/11 )/14 (/19 s.new#23/21 s.new#24/22 s.new#25/25 )/20 e.new#26/15 >/1
      if( ! refalrts::empty_seq( context[23], context[24] ) )
        continue;
      // closed e.new#21 as range 7
      // closed e.new#22 as range 11
      // closed e.new#26 as range 15
      do {
        // </0 & DoParseResult/4 t.new#27/5 (/9 e.new#28/7 )/10 (/13 e.new#29/11 )/14 (/19 # Open/21 s.new#30/22 s.new#31/25 )/20 e.new#32/15 >/1
        if( ! refalrts::ident_term(  ident_Open.ref(vm), context[21] ) )
          continue;
        // closed e.new#28 as range 7
        // closed e.new#29 as range 11
        // closed e.new#32 as range 15
        do {
          // </0 & DoParseResult/4 t.new#33/5 (/9 e.new#34/7 )/10 (/13 e.new#35/11 )/14 (/19 # Open/21 s.new#36/22 # TkOpenADT/25 )/20 e.new#37/15 >/1
          if( ! refalrts::ident_term(  ident_TkOpenADT.ref(vm), context[25] ) )
            continue;
          // closed e.new#34 as range 7
          // closed e.new#35 as range 11
          // closed e.new#37 as range 15
          do {
            // </0 & DoParseResult/4 t.ErrorList#1/5 (/9 e.MultiBracket#1/7 )/10 (/13 e.Scanned#1/11 )/14 (/19 # Open/21 s.LnNumADT#1/22 # TkOpenADT/25 )/20 (/30 # TkName/32 s.LnNumName#1/33 e.Name#1/28 )/31 e.Tail#1/26 >/1
            context[26] = context[15];
            context[27] = context[16];
            context[28] = 0;
            context[29] = 0;
            context[30] = refalrts::brackets_left( context[28], context[29], context[26], context[27] );
            if( ! context[30] )
              continue;
            refalrts::bracket_pointers(context[30], context[31]);
            context[32] = refalrts::ident_left(  ident_TkName.ref(vm), context[28], context[29] );
            if( ! context[32] )
              continue;
            // closed e.MultiBracket#1 as range 7
            // closed e.Scanned#1 as range 11
            // closed e.Tail#1 as range 26
            if( ! refalrts::svar_left( context[33], context[28], context[29] ) )
              continue;
            // closed e.Name#1 as range 28
            //DEBUG: t.ErrorList#1: 5
            //DEBUG: s.LnNumADT#1: 22
            //DEBUG: e.MultiBracket#1: 7
            //DEBUG: e.Scanned#1: 11
            //DEBUG: e.Tail#1: 26
            //DEBUG: s.LnNumName#1: 33
            //DEBUG: e.Name#1: 28

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.LnNumADT#1/22 {REMOVED TILE} s.LnNumName#1/33 {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoParseResult/4 AsIs: t.ErrorList#1/5 AsIs: (/9 AsIs: e.MultiBracket#1/7 HalfReuse: (/10 HalfReuse: # ADT-Brackets/13 } Tile{ HalfReuse: s.LnNumADT1 #22/19 Reuse: # TkCloseADT/21 } Tile{ AsIs: e.Scanned#1/11 } Tile{ HalfReuse: )/25 AsIs: )/20 AsIs: (/30 HalfReuse: s.LnNumName1 #33/32 } (/34 Tile{ AsIs: e.Name#1/28 } Tile{ AsIs: )/14 } Tile{ AsIs: )/31 AsIs: e.Tail#1/26 AsIs: >/1 ]] }
            if( ! refalrts::alloc_open_bracket( vm, context[34] ) )
              return refalrts::cNoMemory;
            refalrts::reinit_open_bracket( context[10] );
            refalrts::reinit_ident( context[13], ident_ADTm_Brackets.ref(vm) );
            refalrts::reinit_svar( context[19], context[22] );
            refalrts::update_ident( context[21], ident_TkCloseADT.ref(vm) );
            refalrts::reinit_close_bracket( context[25] );
            refalrts::reinit_svar( context[32], context[33] );
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[30], context[31] );
            refalrts::link_brackets( context[34], context[14] );
            refalrts::link_brackets( context[9], context[20] );
            refalrts::link_brackets( context[10], context[25] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[31];
            res = refalrts::splice_evar( res, context[14], context[14] );
            res = refalrts::splice_evar( res, context[28], context[29] );
            res = refalrts::splice_evar( res, context[34], context[34] );
            res = refalrts::splice_evar( res, context[25], context[32] );
            res = refalrts::splice_evar( res, context[11], context[12] );
            res = refalrts::splice_evar( res, context[19], context[21] );
            refalrts::splice_to_freelist_open( vm, context[13], res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & DoParseResult/4 t.ErrorList#1/5 (/9 e.MultiBracket#1/7 )/10 (/13 e.Scanned#1/11 )/14 (/19 # Open/21 s.LnNum#1/22 # TkOpenADT/25 )/20 e.Tail#1/15 >/1
          // closed e.MultiBracket#1 as range 7
          // closed e.Scanned#1 as range 11
          // closed e.Tail#1 as range 15
          //DEBUG: t.ErrorList#1: 5
          //DEBUG: s.LnNum#1: 22
          //DEBUG: e.MultiBracket#1: 7
          //DEBUG: e.Scanned#1: 11
          //DEBUG: e.Tail#1: 15

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } </26 & DoParseResult/27 Tile{ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#1/5 HalfReuse: s.LnNum1 #22/9 }"Expected name after \"[\""/28 >/30 (/31 Tile{ AsIs: e.MultiBracket#1/7 } (/32 # ADT-Brackets/33 Tile{ HalfReuse: s.LnNum1 #22/10 HalfReuse: # TkCloseADT/13 AsIs: e.Scanned#1/11 AsIs: )/14 HalfReuse: )/19 HalfReuse: (/21 AsIs: s.LnNum#1/22 HalfReuse: (/25 HalfReuse: # UnnamedADT/20 } )/34 )/35 Tile{ AsIs: e.Tail#1/15 } Tile{ AsIs: >/1 ]] }
          if( ! refalrts::alloc_open_call( vm, context[26] ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_name( vm, context[27], ref_DoParseResult.ref(vm) ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_chars( vm, context[28], context[29], "Expected name after \"[\"", 23 ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_close_call( vm, context[30] ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_open_bracket( vm, context[31] ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_open_bracket( vm, context[32] ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_ident( vm, context[33], ident_ADTm_Brackets.ref(vm) ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_close_bracket( vm, context[34] ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_close_bracket( vm, context[35] ) )
            return refalrts::cNoMemory;
          refalrts::update_name( context[4], ref_ELm_AddErrorAt.ref(vm) );
          refalrts::reinit_svar( context[9], context[22] );
          refalrts::reinit_svar( context[10], context[22] );
          refalrts::reinit_ident( context[13], ident_TkCloseADT.ref(vm) );
          refalrts::reinit_close_bracket( context[19] );
          refalrts::reinit_open_bracket( context[21] );
          refalrts::reinit_open_bracket( context[25] );
          refalrts::reinit_ident( context[20], ident_UnnamedADT.ref(vm) );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[26] );
          refalrts::link_brackets( context[21], context[35] );
          refalrts::link_brackets( context[25], context[34] );
          refalrts::link_brackets( context[31], context[19] );
          refalrts::link_brackets( context[32], context[14] );
          refalrts::push_stack( vm, context[30] );
          refalrts::push_stack( vm, context[0] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[15], context[16] );
          res = refalrts::splice_evar( res, context[34], context[35] );
          res = refalrts::splice_evar( res, context[10], context[20] );
          res = refalrts::splice_evar( res, context[32], context[33] );
          res = refalrts::splice_evar( res, context[7], context[8] );
          res = refalrts::splice_evar( res, context[28], context[31] );
          res = refalrts::splice_evar( res, context[0], context[9] );
          res = refalrts::splice_evar( res, context[26], context[27] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & DoParseResult/4 t.ErrorList#1/5 (/9 e.MultiBracket#1/7 )/10 (/13 e.Scanned#1/11 )/14 (/19 # Open/21 s.LnNum#1/22 s.OpenBracket#1/25 )/20 e.Tail#1/15 >/1
        // closed e.MultiBracket#1 as range 7
        // closed e.Scanned#1 as range 11
        // closed e.Tail#1 as range 15
        //DEBUG: t.ErrorList#1: 5
        //DEBUG: s.LnNum#1: 22
        //DEBUG: s.OpenBracket#1: 25
        //DEBUG: e.MultiBracket#1: 7
        //DEBUG: e.Scanned#1: 11
        //DEBUG: e.Tail#1: 15

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoParseResult/4 AsIs: t.ErrorList#1/5 AsIs: (/9 AsIs: e.MultiBracket#1/7 HalfReuse: (/10 HalfReuse: </13 } & Fetch/26 Tile{ HalfReuse: s.OpenBracket1 #25/14 HalfReuse: & DoParseResult$10\1/19 HalfReuse: >/21 AsIs: s.LnNum#1/22 } </27 & Fetch/28 Tile{ AsIs: s.OpenBracket#1/25 } & DoParseResult$10\2/29 >/30 Tile{ AsIs: e.Scanned#1/11 } )/31 )/32 (/33 Tile{ AsIs: )/20 AsIs: e.Tail#1/15 AsIs: >/1 ]] }
        if( ! refalrts::alloc_name( vm, context[26], ref_Fetch.ref(vm) ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_call( vm, context[27] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( vm, context[28], ref_Fetch.ref(vm) ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( vm, context[29], ref_gen_DoParseResult_S10L2.ref(vm) ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( vm, context[30] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( vm, context[31] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( vm, context[32] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( vm, context[33] ) )
          return refalrts::cNoMemory;
        refalrts::reinit_open_bracket( context[10] );
        refalrts::reinit_open_call( context[13] );
        refalrts::reinit_svar( context[14], context[25] );
        refalrts::reinit_name( context[19], ref_gen_DoParseResult_S10L1.ref(vm) );
        refalrts::reinit_close_call( context[21] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[33], context[20] );
        refalrts::link_brackets( context[9], context[32] );
        refalrts::link_brackets( context[10], context[31] );
        refalrts::push_stack( vm, context[30] );
        refalrts::push_stack( vm, context[27] );
        refalrts::push_stack( vm, context[21] );
        refalrts::push_stack( vm, context[13] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[20];
        res = refalrts::splice_evar( res, context[31], context[33] );
        res = refalrts::splice_evar( res, context[11], context[12] );
        res = refalrts::splice_evar( res, context[29], context[30] );
        res = refalrts::splice_evar( res, context[25], context[25] );
        res = refalrts::splice_evar( res, context[27], context[28] );
        res = refalrts::splice_evar( res, context[14], context[22] );
        res = refalrts::splice_evar( res, context[26], context[26] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoParseResult/4 t.ErrorList#1/5 (/9 e.MultiBracket#1/26 (/30 s.BracketsSign#1/32 s.OpenLnNum#1/33 s.CloseBracket#1/34 e.Scanned#1/28 )/31 )/10 (/13 e.InnerScanned#1/11 )/14 (/19 # Close/21 s.LnNum#1/22 s.CloseBracket#1/25 )/20 e.Tail#1/15 >/1
      context[26] = context[7];
      context[27] = context[8];
      if( ! refalrts::ident_term(  ident_Close.ref(vm), context[21] ) )
        continue;
      context[28] = 0;
      context[29] = 0;
      context[30] = refalrts::brackets_right( context[28], context[29], context[26], context[27] );
      if( ! context[30] )
        continue;
      refalrts::bracket_pointers(context[30], context[31]);
      // closed e.MultiBracket#1 as range 26
      // closed e.InnerScanned#1 as range 11
      // closed e.Tail#1 as range 15
      if( ! refalrts::svar_left( context[32], context[28], context[29] ) )
        continue;
      if( ! refalrts::svar_left( context[33], context[28], context[29] ) )
        continue;
      if( ! refalrts::repeated_stvar_left( vm, context[34], context[25], context[28], context[29] ) )
        continue;
      // closed e.Scanned#1 as range 28
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: s.LnNum#1: 22
      //DEBUG: s.CloseBracket#1: 25
      //DEBUG: e.MultiBracket#1: 26
      //DEBUG: e.InnerScanned#1: 11
      //DEBUG: e.Tail#1: 15
      //DEBUG: s.BracketsSign#1: 32
      //DEBUG: s.OpenLnNum#1: 33
      //DEBUG: e.Scanned#1: 28

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.BracketsSign#1/32 s.OpenLnNum#1/33 s.CloseBracket#1/34 {REMOVED TILE} )/31 {REMOVED TILE} {REMOVED TILE} # Close/21 s.LnNum#1/22 s.CloseBracket#1/25 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoParseResult/4 AsIs: t.ErrorList#1/5 AsIs: (/9 AsIs: e.MultiBracket#1/26 HalfReuse: )/30 } Tile{ AsIs: (/19 } Tile{ AsIs: e.Scanned#1/28 } Tile{ HalfReuse: (/10 HalfReuse: s.BracketsSign1 #32/13 AsIs: e.InnerScanned#1/11 AsIs: )/14 } Tile{ AsIs: )/20 AsIs: e.Tail#1/15 AsIs: >/1 ]] }
      refalrts::reinit_close_bracket( context[30] );
      refalrts::reinit_open_bracket( context[10] );
      refalrts::reinit_svar( context[13], context[32] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::link_brackets( context[10], context[14] );
      refalrts::link_brackets( context[9], context[30] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[20];
      res = refalrts::splice_evar( res, context[10], context[14] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_evar( res, context[19], context[19] );
      refalrts::splice_to_freelist_open( vm, context[30], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoParseResult/4 t.ErrorList#1/5 (/9 e.MultiBracket#1/7 )/10 (/13 e.Scanned#1/11 )/14 (/19 # TkOpenBlock/21 s.LnNum#1/22 )/20 e.Tail#1/15 >/1
    if( ! refalrts::ident_term(  ident_TkOpenBlock.ref(vm), context[21] ) )
      continue;
    if( ! refalrts::empty_seq( context[17], context[18] ) )
      continue;
    // closed e.MultiBracket#1 as range 7
    // closed e.Scanned#1 as range 11
    // closed e.Tail#1 as range 15
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: s.LnNum#1: 22
    //DEBUG: e.MultiBracket#1: 7
    //DEBUG: e.Scanned#1: 11
    //DEBUG: e.Tail#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.LnNum#1/22 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </23 & Fetch/24 Tile{ AsIs: </0 Reuse: & ParseBlock/4 AsIs: t.ErrorList#1/5 } Tile{ AsIs: e.Tail#1/15 } Tile{ AsIs: >/1 } [*]/25 Tile{ HalfReuse: & DoParseResult$12\1/20 } Tile{ AsIs: (/9 AsIs: e.MultiBracket#1/7 AsIs: )/10 AsIs: (/13 AsIs: e.Scanned#1/11 AsIs: )/14 HalfReuse: {*}/19 HalfReuse: >/21 } Tile{ ]] }
    if( ! refalrts::alloc_open_call( vm, context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( vm, context[24], ref_Fetch.ref(vm) ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_closure_head( vm, context[25] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_ParseBlock.ref(vm) );
    refalrts::reinit_name( context[20], ref_gen_DoParseResult_S12L1.ref(vm) );
    refalrts::reinit_unwrapped_closure( context[19], context[25] );
    refalrts::reinit_close_call( context[21] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[23] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[9], context[21] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[0], context[6] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    refalrts::wrap_closure( context[19] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoParseResult/4 t.ErrorList#1/5 (/9 e.MultiBracket#1/15 (/19 s.BracketsSign#1/21 s.OpenLnNum#1/22 s.CloseBracket#1/23 e.Scanned#1/17 )/20 )/10 (/13 e.InnerScanned#1/11 )/14 e.Tail#1/2 >/1
    context[15] = context[7];
    context[16] = context[8];
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_right( context[17], context[18], context[15], context[16] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    // closed e.MultiBracket#1 as range 15
    // closed e.InnerScanned#1 as range 11
    // closed e.Tail#1 as range 2
    if( ! refalrts::svar_left( context[21], context[17], context[18] ) )
      continue;
    if( ! refalrts::svar_left( context[22], context[17], context[18] ) )
      continue;
    if( ! refalrts::svar_left( context[23], context[17], context[18] ) )
      continue;
    // closed e.Scanned#1 as range 17
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: e.MultiBracket#1: 15
    //DEBUG: e.InnerScanned#1: 11
    //DEBUG: e.Tail#1: 2
    //DEBUG: s.BracketsSign#1: 21
    //DEBUG: s.OpenLnNum#1: 22
    //DEBUG: s.CloseBracket#1: 23
    //DEBUG: e.Scanned#1: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.OpenLnNum#1/22 s.CloseBracket#1/23 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </24 & DoParseResult/25 Tile{ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#1/5 HalfReuse: s.OpenLnNum1 #22/9 }"Unbalanced bracket \""/26 </28 & StrFromBracket/29 s.BracketsSign#1/21/30 >/31 '\"'/32 >/33 (/34 Tile{ AsIs: e.MultiBracket#1/15 } Tile{ AsIs: )/10 AsIs: (/13 } Tile{ AsIs: e.Scanned#1/17 } Tile{ AsIs: (/19 AsIs: s.BracketsSign#1/21 } Tile{ AsIs: e.InnerScanned#1/11 } Tile{ AsIs: )/20 } Tile{ AsIs: )/14 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( vm, context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( vm, context[25], ref_DoParseResult.ref(vm) ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( vm, context[26], context[27], "Unbalanced bracket \"", 20 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( vm, context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( vm, context[29], ref_StrFromBracket.ref(vm) ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(vm, context[30], context[21]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( vm, context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( vm, context[32], '\"' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( vm, context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( vm, context[34] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_ELm_AddErrorAt.ref(vm) );
    refalrts::reinit_svar( context[9], context[22] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[24] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[34], context[10] );
    refalrts::push_stack( vm, context[33] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[31] );
    refalrts::push_stack( vm, context[28] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[14];
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[19], context[21] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[10], context[13] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[26], context[34] );
    res = refalrts::splice_evar( res, context[0], context[9] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoParseResult/4 t.new#5/5 (/9 )/10 (/13 e.new#6/11 )/14 e.new#7/2 >/1
  if( ! refalrts::empty_seq( context[7], context[8] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#6 as range 11
  // closed e.new#7 as range 2
  do {
    // </0 & DoParseResult/4 t.ErrorList#1/5 (/9 )/10 (/13 e.Scanned#1/11 )/14 (/19 # Close/21 s.LnNum#1/22 s.CloseBracket#1/23 )/20 e.Tail#1/15 >/1
    context[15] = context[2];
    context[16] = context[3];
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[15], context[16] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = refalrts::ident_left(  ident_Close.ref(vm), context[17], context[18] );
    if( ! context[21] )
      continue;
    // closed e.Scanned#1 as range 11
    // closed e.Tail#1 as range 15
    if( ! refalrts::svar_left( context[22], context[17], context[18] ) )
      continue;
    if( ! refalrts::svar_left( context[23], context[17], context[18] ) )
      continue;
    if( ! refalrts::empty_seq( context[17], context[18] ) )
      continue;
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: e.Scanned#1: 11
    //DEBUG: e.Tail#1: 15
    //DEBUG: s.LnNum#1: 22
    //DEBUG: s.CloseBracket#1: 23

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoParseResult/4 } </24 & EL-AddErrorAt/25 Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: s.LnNum#1/22 }"Unb"/26 Tile{ HalfReuse: 'a'/19 HalfReuse: 'l'/21 }"anced bracket \""/28 </30 & StrFromBracket/31 Tile{ AsIs: s.CloseBracket#1/23 HalfReuse: >/20 } '\"'/32 >/33 Tile{ AsIs: (/9 AsIs: )/10 AsIs: (/13 AsIs: e.Scanned#1/11 AsIs: )/14 } Tile{ AsIs: e.Tail#1/15 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( vm, context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( vm, context[25], ref_ELm_AddErrorAt.ref(vm) ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( vm, context[26], context[27], "Unb", 3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( vm, context[28], context[29], "anced bracket \"", 15 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( vm, context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( vm, context[31], ref_StrFromBracket.ref(vm) ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( vm, context[32], '\"' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( vm, context[33] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[19], 'a' );
    refalrts::reinit_char( context[21], 'l' );
    refalrts::reinit_close_call( context[20] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::push_stack( vm, context[33] );
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[30] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[9], context[14] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_evar( res, context[23], context[20] );
    res = refalrts::splice_evar( res, context[28], context[31] );
    res = refalrts::splice_evar( res, context[19], context[21] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoParseResult/4 t.ErrorList#1/5 (/9 )/10 (/13 e.Result#1/11 )/14 e.Tail#1/2 >/1
  // closed e.Result#1 as range 11
  // closed e.Tail#1 as range 2
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: e.Result#1: 11
  //DEBUG: e.Tail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DoParseResult/4 {REMOVED TILE} (/9 )/10 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: (/13 AsIs: e.Result#1/11 AsIs: )/14 } Tile{ AsIs: e.Tail#1/2 } Tile{ ]] }
  refalrts::link_brackets( context[13], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoParseResult("DoParseResult", 378583373U, 621461326U, func_DoParseResult);


static refalrts::FnResult func_AddUnexpected(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & AddUnexpected/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & AddUnexpected/4 t.new#1/5 (/9 s.new#2/11 s.new#3/12 e.new#4/7 )/10 e.new#5/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[9], context[10]);
  // closed e.new#5 as range 2
  if( ! refalrts::svar_left( context[11], context[7], context[8] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[7], context[8] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 7
  do {
    // </0 & AddUnexpected/4 t.ErrorList#1/5 (/9 # TkError/11 s.LineNumber#1/12 e.Message#1/7 )/10 e.Expected#1/2 >/1
    if( ! refalrts::ident_term(  ident_TkError.ref(vm), context[11] ) )
      continue;
    // closed e.Message#1 as range 7
    // closed e.Expected#1 as range 2
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: s.LineNumber#1: 12
    //DEBUG: e.Message#1: 7
    //DEBUG: e.Expected#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} # TkError/11 s.LineNumber#1/12 {REMOVED TILE} )/10 e.Expected#1/2 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#1/5 HalfReuse: s.LineNumber1 #12/9 } Tile{ AsIs: e.Message#1/7 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_ELm_AddErrorAt.ref(vm) );
    refalrts::reinit_svar( context[9], context[12] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( vm, context[9], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & AddUnexpected/4 t.ErrorList#1/5 (/9 # TkUnexpected/11 s.LineNumber#1/12 e.Unexpected#1/7 )/10 e.Expected#1/2 >/1
    if( ! refalrts::ident_term(  ident_TkUnexpected.ref(vm), context[11] ) )
      continue;
    // closed e.Unexpected#1 as range 7
    // closed e.Expected#1 as range 2
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: s.LineNumber#1: 12
    //DEBUG: e.Unexpected#1: 7
    //DEBUG: e.Expected#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.LineNumber#1/12 {REMOVED TILE} {REMOVED TILE} e.Expected#1/2 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#1/5 HalfReuse: s.LineNumber1 #12/9 HalfReuse: 'U'/11 } 'n'/13 Tile{ HalfReuse: 'k'/10 }"nown characters \""/14 Tile{ AsIs: e.Unexpected#1/7 } '\"'/16 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( vm, context[13], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( vm, context[14], context[15], "nown characters \"", 17 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( vm, context[16], '\"' ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_ELm_AddErrorAt.ref(vm) );
    refalrts::reinit_svar( context[9], context[12] );
    refalrts::reinit_char( context[11], 'U' );
    refalrts::reinit_char( context[10], 'k' );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    refalrts::splice_to_freelist_open( vm, context[11], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AddUnexpected/4 t.ErrorList#1/5 (/9 s.Unexpected#1/11 s.LineNumber#1/12 e.Info#1/7 )/10 e.Expected#1/2 >/1
  // closed e.Info#1 as range 7
  // closed e.Expected#1 as range 2
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: s.Unexpected#1: 11
  //DEBUG: s.LineNumber#1: 12
  //DEBUG: e.Info#1: 7
  //DEBUG: e.Expected#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.LineNumber#1/12 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#1/5 HalfReuse: s.LineNumber1 #12/9 }"Unexpected "/13 </15 & SR-StrFromToken/16 Tile{ AsIs: s.Unexpected#1/11 } Tile{ AsIs: e.Info#1/7 } >/17", expected"/18 Tile{ HalfReuse: ' '/10 AsIs: e.Expected#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_chars( vm, context[13], context[14], "Unexpected ", 11 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[16], ref_SRm_StrFromToken.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[18], context[19], ", expected", 10 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_ELm_AddErrorAt.ref(vm) );
  refalrts::reinit_svar( context[9], context[12] );
  refalrts::reinit_char( context[10], ' ' );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[10];
  res = refalrts::splice_evar( res, context[17], context[19] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[13], context[16] );
  refalrts::splice_to_freelist_open( vm, context[9], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_AddUnexpected("AddUnexpected", 378583373U, 621461326U, func_AddUnexpected);


//End of file
