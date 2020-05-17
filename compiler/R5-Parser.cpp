// This file automatically generated from 'R5-Parser.ref'
// Don't edit! Edit 'R5-Parser.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_581901624_468946290
#define COOKIE1_ 581901624U
#define COOKIE2_ 468946290U

enum efunc {
  efunc_u_u_Stepm_Drop = 0,
  efunc_u_u_Metau_Mu = 1,
  efunc_d_table = 2,
  efunc_Program = 3,
  efunc_DoProgram = 4,
  efunc_gen_DoProgram_S1C1 = 5,
  efunc_gen_DoProgram_S1C2 = 6,
  efunc_OneOf = 7,
  efunc_UnitStartToken = 8,
  efunc_gen_DoProgram_S1A3 = 9,
  efunc_Unit = 10,
  efunc_UnexpectedUnitToken = 11,
  efunc_UnexpectedToken = 12,
  efunc_NameListTags = 13,
  efunc_TokName = 14,
  efunc_ClassicError = 15,
  efunc_ELm_AddErrorAt = 16,
  efunc_NameList = 17,
  efunc_gen_Unit_B1S2C1 = 18,
  efunc_gen_Unit_B1S2B1 = 19,
  efunc_Include = 20,
  efunc_Specialization = 21,
  efunc_gen_Unit_B1S7C1 = 22,
  efunc_Function = 23,
  efunc_gen_Unit_B1S8B1 = 24,
  efunc_gen_Unit_B1D1 = 25,
  efunc_NameListm_DoNames = 26,
  efunc_gen_NameList_S3C1 = 27,
  efunc_gen_NameListm_DoNames_S8C1 = 28,
  efunc_gen_NameListm_DoNames_S8C2 = 29,
  efunc_gen_Include_A1 = 30,
  efunc_Expect = 31,
  efunc_gen_Specialization_S1A2 = 32,
  efunc_gen_Specialization_S1A1 = 33,
  efunc_Pattern = 34,
  efunc_gen_Function_S1C1 = 35,
  efunc_Functionm_AfterBlock = 36,
  efunc_Block = 37,
  efunc_gen_Block_S2A1 = 38,
  efunc_Blockm_AfterSentence = 39,
  efunc_Sentence = 40,
  efunc_gen_Blockm_AfterSentence_S1B1S6A1 = 41,
  efunc_SentenceTail = 42,
  efunc_SentencePart = 43,
  efunc_AssignmentError = 44,
  efunc_gen_SentenceTail_S1A3 = 45,
  efunc_gen_SentenceTail_S1A2 = 46,
  efunc_CheckExceedBlocks = 47,
  efunc_gen_SentenceTail_S1A1 = 48,
  efunc_CheckSentenceEnd = 49,
  efunc_gen_SentenceTail_S2A1 = 50,
  efunc_DoCheckExceedBlocks = 51,
  efunc_gen_CheckSentenceEnd_S1A2 = 52,
  efunc_gen_CheckSentenceEnd_S1A1 = 53,
  efunc_CheckMistakenAssign = 54,
  efunc_SentencePartm_AfterPattern = 55,
  efunc_gen_SentencePartm_AfterPattern_B1S1C1 = 56,
  efunc_gen_SentencePartm_AfterPattern_B1S1A2 = 57,
  efunc_Result = 58,
  efunc_gen_SentencePartm_AfterPattern_B1S2C1 = 59,
  efunc_gen_SentencePartm_AfterPattern_B1 = 60,
  efunc_Expression = 61,
  efunc_Resultm_Blocks = 62,
  efunc_gen_Resultm_Blocks_S3A1 = 63,
  efunc_Expressionm_CheckBrackets = 64,
  efunc_TokenChain = 65,
  efunc_DoTokenChain = 66,
  efunc_gen_DoTokenChain_B1S6A2 = 67,
  efunc_gen_DoTokenChain_B1S6A2B1D2 = 68,
  efunc_DoTokenChainm_AfterCall = 69,
  efunc_gen_DoTokenChain_B1S9A3 = 70,
  efunc_gen_DoTokenChain_B1S9A3B1D2 = 71,
  efunc_gen_DoTokenChain_B1S9A2 = 72,
  efunc_gen_DoTokenChain_B1S11A1B1S2A1B1D2 = 73,
  efunc_gen_DoTokenChain_B1S11A1B1S2A1 = 74,
  efunc_gen_DoTokenChain_B1S12A3 = 75,
  efunc_gen_DoTokenChain_B1S6A1 = 76,
  efunc_gen_DoTokenChain_B1S7A1 = 77,
  efunc_gen_DoTokenChain_B1S9A1 = 78,
  efunc_gen_DoTokenChain_B1S11A1Z1 = 79,
  efunc_gen_DoTokenChain_B1S11A1Z2 = 80,
  efunc_gen_DoTokenChain_B1S11A1 = 81,
  efunc_gen_DoTokenChain_B1S12C1 = 82,
  efunc_gen_DoTokenChain_B1S12A2 = 83,
  efunc_DoTokenChainm_AddRedefinition = 84,
  efunc_gen_DoTokenChain_B1D11 = 85,
  efunc_gen_DoTokenChainm_AfterCall_S4A2 = 86,
  efunc_gen_DoTokenChainm_AfterCall_S4A1 = 87,
  efunc_gen_Expressionm_CheckBrackets_S1A3 = 88,
  efunc_gen_Expressionm_CheckBrackets_S1C1 = 89,
  efunc_gen_Expressionm_CheckBrackets_S1A2 = 90,
  efunc_Mu = 91,
  efunc_Up = 92,
  efunc_Evm_met = 93,
  efunc_Residue = 94,
  efunc_u_u_Metau_Residue = 95,
  efunc_R5m_Parse = 96,
  efunc_TkExtern = 97,
  efunc_TkEnum = 98,
  efunc_TkEEnum = 99,
  efunc_TkSwap = 100,
  efunc_TkESwap = 101,
  efunc_TkLabel = 102,
  efunc_TkEntryL = 103,
  efunc_TkInline = 104,
  efunc_TkDrive = 105,
  efunc_TkMeta = 106,
  efunc_gen_Unit_B1D1S2C1 = 107,
  efunc_gen_Unit_B1D1S7C1 = 108,
  efunc_gen_DoTokenChain_B1D11S12C1 = 109,
  efunc_gen_DoTokenChain_B1S11A1Z0 = 110,
};


enum ident {
  ident_True = 0,
  ident_TkRefal5Mode = 1,
  ident_TkEOF = 2,
  ident_TkEntry = 3,
  ident_TkName = 4,
  ident_TkSemicolon = 5,
  ident_TkInclude = 6,
  ident_TkNativeCode = 7,
  ident_TkSpec = 8,
  ident_TkPseudoComment = 9,
  ident_TkSwap = 10,
  ident_TkESwap = 11,
  ident_TkLabel = 12,
  ident_TkInline = 13,
  ident_TkDrive = 14,
  ident_TkMeta = 15,
  ident_TkExtern = 16,
  ident_TkEnum = 17,
  ident_TkEEnum = 18,
  ident_False = 19,
  ident_NativeBlock = 20,
  ident_Extended = 21,
  ident_GNm_Entry = 22,
  ident_Declaration = 23,
  ident_GNm_Local = 24,
  ident_Enum = 25,
  ident_Swap = 26,
  ident_Ident = 27,
  ident_Entry = 28,
  ident_Inline = 29,
  ident_Drive = 30,
  ident_Meta = 31,
  ident_TkComma = 32,
  ident_TkOpenBlock = 33,
  ident_TkCompound = 34,
  ident_Include = 35,
  ident_Spec = 36,
  ident_TkEntryL = 37,
  ident_Function = 38,
  ident_NativeBody = 39,
  ident_TkCloseBlock = 40,
  ident_Sentences = 41,
  ident_TkColon = 42,
  ident_Classic = 43,
  ident_Assign = 44,
  ident_Condition = 45,
  ident_TkAssign = 46,
  ident_Pattern = 47,
  ident_Result = 48,
  ident_Brackets = 49,
  ident_TkCloseBracket = 50,
  ident_ADTm_Brackets = 51,
  ident_TkCloseADT = 52,
  ident_Symbol = 53,
  ident_Name = 54,
  ident_Closure = 55,
  ident_Identifier = 56,
  ident_TkMacroDigit = 57,
  ident_Number = 58,
  ident_TkChar = 59,
  ident_Char = 60,
  ident_TkVariable = 61,
  ident_TkOpenBracket = 62,
  ident_TkOpenCall = 63,
  ident_TkOpenADT = 64,
  ident_TkAmpersand = 65,
  ident_TkRedefinition = 66,
  ident_TkScopeId = 67,
  ident_Cookie1 = 68,
  ident_Cookie2 = 69,
  ident_TkError = 70,
  ident_TkCloseCall = 71,
  ident_CallBrackets = 72,
  ident_TkNewVariable = 73,
  ident_Mu = 74,
  ident_Up = 75,
  ident_Evm_met = 76,
  ident_Residue = 77,
  ident_u_u_Metau_Residue = 78,
  ident_R5m_Parse = 79,
  ident_Program = 80,
  ident_DoProgram = 81,
  ident_UnexpectedUnitToken = 82,
  ident_UnitStartToken = 83,
  ident_NameListTags = 84,
  ident_OneOf = 85,
  ident_Unit = 86,
  ident_NameList = 87,
  ident_NameListm_DoNames = 88,
  ident_Specialization = 89,
  ident_Expect = 90,
  ident_Functionm_AfterBlock = 91,
  ident_Block = 92,
  ident_Blockm_AfterSentence = 93,
  ident_Sentence = 94,
  ident_SentenceTail = 95,
  ident_CheckExceedBlocks = 96,
  ident_DoCheckExceedBlocks = 97,
  ident_AssignmentError = 98,
  ident_CheckSentenceEnd = 99,
  ident_CheckMistakenAssign = 100,
  ident_SentencePart = 101,
  ident_SentencePartm_AfterPattern = 102,
  ident_Resultm_Blocks = 103,
  ident_Expression = 104,
  ident_TokenChain = 105,
  ident_DoTokenChain = 106,
  ident_DoTokenChainm_AfterCall = 107,
  ident_DoTokenChainm_AddRedefinition = 108,
  ident_Expressionm_CheckBrackets = 109,
  ident_ClassicError = 110,
  ident_UnexpectedToken = 111,
  ident_TokName = 112,
};


static refalrts::FnResult func_Mu(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & Mu/4 e.Arg#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Arg#1 as range 2
  //DEBUG: e.Arg#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & __Step-Drop/6 >/7 Tile{ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: e.Arg#1/2 HalfReuse: & $table/1 } >/8 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_u_u_Stepm_Drop]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::update_name(context[4], functions[efunc_u_u_Metau_Mu]);
  refalrts::reinit_name(context[1], functions[efunc_d_table]);
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Mu("Mu", COOKIE1_, COOKIE2_, func_Mu);


static refalrts::FnResult func_Residue(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & Residue/4 e.Arg#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Arg#1 as range 2
  //DEBUG: e.Arg#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & __Step-Drop/6 >/7 </8 & __Step-Drop/9 >/10 Tile{ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: e.Arg#1/2 HalfReuse: & $table/1 } >/11 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_u_u_Stepm_Drop]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_u_u_Stepm_Drop]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_u_u_Metau_Mu]);
  refalrts::reinit_name(context[1], functions[efunc_d_table]);
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Residue("Residue", COOKIE1_, COOKIE2_, func_Residue);


static refalrts::FnResult func_u_u_Metau_Residue(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & __Meta_Residue/4 e.Arg#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Arg#1 as range 2
  //DEBUG: e.Arg#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & __Step-Drop/6 >/7 Tile{ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: e.Arg#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_u_u_Stepm_Drop]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_u_u_Metau_Mu]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_u_u_Metau_Residue("__Meta_Residue", COOKIE1_, COOKIE2_, func_u_u_Metau_Residue);


static refalrts::FnResult func_R5m_Parse(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Program/4 AsIs: t.ErrorList#1/5 AsIs: s.Mode#1/7 AsIs: e.Tokens#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_Program]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_R5m_Parse("R5-Parse", 0U, 0U, func_R5m_Parse);


static refalrts::FnResult func_Program(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoProgram/4 AsIs: t.ErrorList#1/5 AsIs: s.Mode#1/7 } (/8 )/9 Tile{ AsIs: e.Tokens#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[8]);
  refalrts::alloc_close_bracket(vm, context[9]);
  refalrts::update_name(context[4], functions[efunc_DoProgram]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Program("Program", COOKIE1_, COOKIE2_, func_Program);


static refalrts::FnResult func_gen_DoProgram_S1A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/9 {REMOVED TILE} (/14 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoProgram/4 } Tile{ AsIs: t.ErrorList#4/10 } Tile{ AsIs: s.Mode#1/5 AsIs: (/8 } Tile{ AsIs: e.Units#1/6 } Tile{ AsIs: e.NewUnits#4/12 } Tile{ AsIs: )/15 AsIs: e.Tokens#4/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_DoProgram]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[8], context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[15];
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[5], context[8] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoProgram_S1A3("DoProgram$1=3", COOKIE1_, COOKIE2_, func_gen_DoProgram_S1A3);


static refalrts::FnResult func_DoProgram(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 40 elems
  refalrts::Iter context[40];
  refalrts::zeros( context, 40 );
  // </0 & DoProgram/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoProgram/4 t.new#1/5 s.new#2/7 (/10 e.new#3/8 )/11 t.new#4/12 e.new#5/2 >/1
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
  // closed e.new#3 as range 8
  context[13] = refalrts::tvar_left( context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#5 as range 2
  do {
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

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[18]);
    refalrts::alloc_name(vm, context[20], functions[efunc_gen_DoProgram_S1C1]);
    refalrts::copy_stvar(vm, context[21], context[12]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[18] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_stvar( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[18] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
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

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[30]);
      refalrts::alloc_name(vm, context[32], functions[efunc_gen_DoProgram_S1C2]);
      refalrts::alloc_open_call(vm, context[33]);
      refalrts::alloc_name(vm, context[34], functions[efunc_OneOf]);
      refalrts::copy_stvar(vm, context[35], context[27]);
      refalrts::alloc_open_call(vm, context[36]);
      refalrts::alloc_name(vm, context[37], functions[efunc_UnitStartToken]);
      refalrts::alloc_close_call(vm, context[38]);
      refalrts::alloc_close_call(vm, context[39]);
      refalrts::alloc_close_call(vm, context[31]);
      refalrts::push_stack( vm, context[31] );
      refalrts::push_stack( vm, context[30] );
      res = refalrts::splice_elem( res, context[31] );
      refalrts::push_stack( vm, context[39] );
      refalrts::push_stack( vm, context[33] );
      res = refalrts::splice_elem( res, context[39] );
      refalrts::push_stack( vm, context[38] );
      refalrts::push_stack( vm, context[36] );
      res = refalrts::splice_elem( res, context[38] );
      res = refalrts::splice_elem( res, context[37] );
      res = refalrts::splice_elem( res, context[36] );
      res = refalrts::splice_stvar( res, context[35] );
      res = refalrts::splice_elem( res, context[34] );
      res = refalrts::splice_elem( res, context[33] );
      res = refalrts::splice_elem( res, context[32] );
      res = refalrts::splice_elem( res, context[30] );
      refalrts::use( res );
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function(vm);
      do {
        // </30 & DoProgram$1?2/34 # True/35 >/31
        context[32] = 0;
        context[33] = 0;
        context[34] = refalrts::call_left( context[32], context[33], context[30], context[31] );
        context[35] = refalrts::ident_left( identifiers[ident_True], context[32], context[33] );
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

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/25 s.Type#2/27 t.Pos#2/28 e.Value#2/23 )/26 {REMOVED TILE} </30 & DoProgram$1?2/34 # True/35 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoProgram$1=3/4 } Tile{ AsIs: s.Mode#1/7 AsIs: (/10 AsIs: e.Units#1/14 AsIs: )/11 } Tile{ AsIs: </18 Reuse: & Unit/22 } Tile{ AsIs: t.ErrorList#1/5 } Tile{ HalfReuse: s.Mode1 #7/19 } Tile{ AsIs: t.NextToken#1/12 } Tile{ AsIs: e.Tokens#1/16 } Tile{ AsIs: >/31 AsIs: >/1 ]] }
        refalrts::update_name(context[4], functions[efunc_gen_DoProgram_S1A3]);
        refalrts::update_name(context[22], functions[efunc_Unit]);
        refalrts::reinit_svar( context[19], context[7] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[31] );
        refalrts::push_stack( vm, context[18] );
        refalrts::link_brackets( context[10], context[11] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[31];
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[12], context[13] );
        res = refalrts::splice_evar( res, context[19], context[19] );
        res = refalrts::splice_evar( res, context[5], context[6] );
        res = refalrts::splice_evar( res, context[18], context[22] );
        res = refalrts::splice_evar( res, context[7], context[11] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[30], context[31]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[18], context[19]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoProgram/4 t.new#6/5 s.new#7/7 (/10 e.new#12/14 )/11 (/12 s.new#8/20 e.new#9/18 t.new#10/21 )/13 e.new#11/16 >/1
    context[14] = context[8];
    context[15] = context[9];
    context[16] = context[2];
    context[17] = context[3];
    context[18] = 0;
    context[19] = 0;
    if( ! refalrts::brackets_term( context[18], context[19], context[12] ) )
      continue;
    // closed e.new#12 as range 14
    // closed e.new#11 as range 16
    if( ! refalrts::svar_left( context[20], context[18], context[19] ) )
      continue;
    context[22] = refalrts::tvar_right( context[21], context[18], context[19] );
    if( ! context[22] )
      continue;
    // closed e.new#9 as range 18
    do {
      // </0 & DoProgram/4 t.ErrorList#1/5 s.Mode#1/7 (/10 e.Units#1/23 )/11 (/12 # TkRefal5Mode/20 t.Pos#1/29 s.NewMode#1/21 )/13 e.Tokens#1/27 >/1
      context[23] = context[14];
      context[24] = context[15];
      context[25] = context[18];
      context[26] = context[19];
      context[27] = context[16];
      context[28] = context[17];
      if( ! refalrts::svar_term( context[21], context[21] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_TkRefal5Mode], context[20] ) )
        continue;
      // closed e.Units#1 as range 23
      // closed e.Tokens#1 as range 27
      context[30] = refalrts::tvar_left( context[29], context[25], context[26] );
      if( ! context[30] )
        continue;
      if( ! refalrts::empty_seq( context[25], context[26] ) )
        continue;
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: s.NewMode#1: 21
      //DEBUG: s.Mode#1: 7
      //DEBUG: e.Units#1: 23
      //DEBUG: e.Tokens#1: 27
      //DEBUG: t.Pos#1: 29

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Mode#1/7 (/10 {REMOVED TILE} {REMOVED TILE} # TkRefal5Mode/20 t.Pos#1/29 s.NewMode#1/21 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoProgram/4 AsIs: t.ErrorList#1/5 } Tile{ HalfReuse: s.NewMode1 #21/11 AsIs: (/12 } Tile{ AsIs: e.Units#1/23 } Tile{ AsIs: )/13 AsIs: e.Tokens#1/27 AsIs: >/1 ]] }
      refalrts::reinit_svar( context[11], context[21] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[12], context[13] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[13];
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::splice_to_freelist_open( vm, context[6], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoProgram/4 t.ErrorList#1/5 s.Mode#1/7 (/10 e.Units#1/23 )/11 (/12 # TkEOF/20 t.Pos#1/21 )/13 >/1
    context[23] = context[14];
    context[24] = context[15];
    if( ! refalrts::ident_term( identifiers[ident_TkEOF], context[20] ) )
      continue;
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;
    // closed e.Units#1 as range 23
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: t.Pos#1: 21
    //DEBUG: s.Mode#1: 7
    //DEBUG: e.Units#1: 23

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoProgram/4 {REMOVED TILE} s.Mode#1/7 (/10 {REMOVED TILE} )/11 (/12 # TkEOF/20 t.Pos#1/21 )/13 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: e.Units#1/23 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoProgram/4 t.ErrorList#1/5 s.Mode#1/7 (/10 e.Units#1/8 )/11 t.Unexpected#1/12 e.Tokens#1/2 >/1
  // closed e.Units#1 as range 8
  // closed e.Tokens#1 as range 2
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: t.Unexpected#1: 12
  //DEBUG: s.Mode#1: 7
  //DEBUG: e.Units#1: 8
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoProgram/4 } </14 & UnexpectedUnitToken/15 Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: t.Unexpected#1/12 } >/16 Tile{ AsIs: s.Mode#1/7 AsIs: (/10 AsIs: e.Units#1/8 AsIs: )/11 } Tile{ AsIs: e.Tokens#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_UnexpectedUnitToken]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[11] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoProgram("DoProgram", COOKIE1_, COOKIE2_, func_DoProgram);


static refalrts::FnResult func_UnexpectedUnitToken(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & UnexpectedUnitToken/4 t.ErrorList#1/5 t.Unexpected#1/7 >/1
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
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: t.Unexpected#1: 7

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 AsIs: t.ErrorList#1/5 AsIs: t.Unexpected#1/7 HalfReuse: 'D'/1 }"eclaration, definition, $INCLUDE or special comment"/9 >/11 Tile{ ]] }
  refalrts::alloc_chars(vm, context[9], context[10], "eclaration, definition, $INCLUDE or special comment", 51);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_UnexpectedToken]);
  refalrts::reinit_char(context[1], 'D');
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_UnexpectedUnitToken("UnexpectedUnitToken", COOKIE1_, COOKIE2_, func_UnexpectedUnitToken);


static refalrts::FnResult func_UnitStartToken(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & UnitStartToken/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & NameListTags/4 AsIs: >/1 } # TkEntry/5 # TkName/6 # TkSemicolon/7 # TkInclude/8 # TkNativeCode/9 # TkSpec/10 # TkPseudoComment/11 Tile{ ]] }
  refalrts::alloc_ident(vm, context[5], identifiers[ident_TkEntry]);
  refalrts::alloc_ident(vm, context[6], identifiers[ident_TkName]);
  refalrts::alloc_ident(vm, context[7], identifiers[ident_TkSemicolon]);
  refalrts::alloc_ident(vm, context[8], identifiers[ident_TkInclude]);
  refalrts::alloc_ident(vm, context[9], identifiers[ident_TkNativeCode]);
  refalrts::alloc_ident(vm, context[10], identifiers[ident_TkSpec]);
  refalrts::alloc_ident(vm, context[11], identifiers[ident_TkPseudoComment]);
  refalrts::update_name(context[4], functions[efunc_NameListTags]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_UnitStartToken("UnitStartToken", COOKIE1_, COOKIE2_, func_UnitStartToken);


static refalrts::FnResult func_NameListTags(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & NameListTags/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: # TkExtern/0 HalfReuse: # TkEnum/4 HalfReuse: # TkEEnum/1 } # TkSwap/5 # TkESwap/6 # TkLabel/7 # TkInline/8 # TkDrive/9 # TkMeta/10 Tile{ ]] }
  refalrts::alloc_ident(vm, context[5], identifiers[ident_TkSwap]);
  refalrts::alloc_ident(vm, context[6], identifiers[ident_TkESwap]);
  refalrts::alloc_ident(vm, context[7], identifiers[ident_TkLabel]);
  refalrts::alloc_ident(vm, context[8], identifiers[ident_TkInline]);
  refalrts::alloc_ident(vm, context[9], identifiers[ident_TkDrive]);
  refalrts::alloc_ident(vm, context[10], identifiers[ident_TkMeta]);
  refalrts::reinit_ident(context[0], identifiers[ident_TkExtern]);
  refalrts::reinit_ident(context[4], identifiers[ident_TkEnum]);
  refalrts::reinit_ident(context[1], identifiers[ident_TkEEnum]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_NameListTags("NameListTags", COOKIE1_, COOKIE2_, func_NameListTags);


static refalrts::FnResult func_OneOf(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & OneOf/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & OneOf/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & OneOf/4 t.Elem#1/5 e.Elems-B#1/9 t.Elem#1/13 e.Elems-E#1/11 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[9] = 0;
    context[10] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[11] = context[7];
      context[12] = context[8];
      context[14] = refalrts::repeated_stvar_left( vm, context[13], context[5], context[11], context[12] );
      if( ! context[14] )
        continue;
      // closed e.Elems-E#1 as range 11
      //DEBUG: t.Elem#1: 5
      //DEBUG: e.Elems-B#1: 9
      //DEBUG: e.Elems-E#1: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & OneOf/4 t.Elem#1/5 e.Elems-B#1/9 t.Elem#1/13 e.Elems-E#1/11 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_True]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[9], context[10], context[7], context[8] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & OneOf/4 t.Elem#1/5 e.Elems#1/2 >/1
  // closed e.Elems#1 as range 2
  //DEBUG: t.Elem#1: 5
  //DEBUG: e.Elems#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & OneOf/4 t.Elem#1/5 e.Elems#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_False]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OneOf("OneOf", COOKIE1_, COOKIE2_, func_OneOf);


static refalrts::FnResult func_gen_Unit_B1S2B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ClassicError/4 } Tile{ AsIs: t.ErrorList#4/9 } Tile{ AsIs: s.Mode#1/5 AsIs: t.Pos#2/6 } </15 & TokName/16 Tile{ AsIs: s.Tag#2/8 } Tile{ AsIs: >/1 }" is an extension"/17 >/19 Tile{ AsIs: (/13 AsIs: e.Units#4/11 AsIs: )/14 } Tile{ AsIs: e.Tokens#4/2 } Tile{ ]] }
  refalrts::alloc_open_call(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_TokName]);
  refalrts::alloc_chars(vm, context[17], context[18], " is an extension", 16);
  refalrts::alloc_close_call(vm, context[19]);
  refalrts::update_name(context[4], functions[efunc_ClassicError]);
  refalrts::link_brackets( context[13], context[14] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[15] );
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

static refalrts::NativeReference nat_ref_gen_Unit_B1S2B1("Unit:1$2:1", COOKIE1_, COOKIE2_, func_gen_Unit_B1S2B1);


static refalrts::FnResult func_gen_Unit_B1S8B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & Unit:1$8:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Unit:1$8:1/4 (/7 e.new#1/5 )/8 t.new#2/9 (/13 e.new#3/11 )/14 (/17 s.new#4/19 t.new#5/20 e.new#6/15 )/18 e.new#7/2 >/1
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
  // closed e.new#3 as range 11
  // closed e.new#7 as range 2
  if( ! refalrts::svar_left( context[19], context[15], context[16] ) )
    return refalrts::cRecognitionImpossible;
  context[21] = refalrts::tvar_left( context[20], context[15], context[16] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#6 as range 15
  do {
    // </0 & Unit:1$8:1/4 (/7 e.Tokens#1/22 )/8 t.ErrorList#3/9 (/13 e.Units#3/24 )/14 (/17 # TkEOF/19 t._#3/20 )/18 >/1
    context[22] = context[5];
    context[23] = context[6];
    context[24] = context[11];
    context[25] = context[12];
    if( ! refalrts::ident_term( identifiers[ident_TkEOF], context[19] ) )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Tokens#1 as range 22
    // closed e.Units#3 as range 24
    //DEBUG: t.ErrorList#3: 9
    //DEBUG: t._#3: 20
    //DEBUG: e.Tokens#1: 22
    //DEBUG: e.Units#3: 24

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Unit:1$8:1/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE} (/17 # TkEOF/19 t._#3/20 )/18 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#3/9 AsIs: (/13 AsIs: e.Units#3/24 AsIs: )/14 } Tile{ AsIs: e.Tokens#1/22 } Tile{ ]] }
    refalrts::link_brackets( context[13], context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[9], context[14] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Unit:1$8:1/4 (/7 e.Tokens#1/5 )/8 t.ErrorList#3/9 (/13 e.Units#3/11 )/14 (/17 s.Token#3/19 t.Pos#3/20 e.Info#3/15 )/18 e._#3/2 >/1
  // closed e.Tokens#1 as range 5
  // closed e.Units#3 as range 11
  // closed e.Info#3 as range 15
  // closed e._#3 as range 2
  //DEBUG: t.ErrorList#3: 9
  //DEBUG: t.Pos#3: 20
  //DEBUG: s.Token#3: 19
  //DEBUG: e.Tokens#1: 5
  //DEBUG: e.Units#3: 11
  //DEBUG: e.Info#3: 15
  //DEBUG: e._#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Units#3/11 {REMOVED TILE} s.Token#3/19 {REMOVED TILE} e.Info#3/15 {REMOVED TILE} e._#3/2 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 } Tile{ AsIs: t.ErrorList#3/9 } Tile{ AsIs: t.Pos#3/20 } Tile{ HalfReuse: 'T'/13 } Tile{ HalfReuse: 'o'/8 } Tile{ HalfReuse: 'o'/7 }" m"/22 Tile{ HalfReuse: 'a'/1 }"ny units in pseudocomment"/24 Tile{ HalfReuse: >/14 AsIs: (/17 } Tile{ AsIs: )/18 } Tile{ AsIs: e.Tokens#1/5 } Tile{ ]] }
  refalrts::alloc_chars(vm, context[22], context[23], " m", 2);
  refalrts::alloc_chars(vm, context[24], context[25], "ny units in pseudocomment", 25);
  refalrts::update_name(context[4], functions[efunc_ELm_AddErrorAt]);
  refalrts::reinit_char(context[13], 'T');
  refalrts::reinit_char(context[8], 'o');
  refalrts::reinit_char(context[7], 'o');
  refalrts::reinit_char(context[1], 'a');
  refalrts::reinit_close_call(context[14]);
  refalrts::link_brackets( context[17], context[18] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[14], context[17] );
  res = refalrts::splice_evar( res, context[24], context[25] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Unit_B1S8B1("Unit:1$8:1", COOKIE1_, COOKIE2_, func_gen_Unit_B1S8B1);


static refalrts::FnResult func_gen_Unit_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
  // </0 & Unit:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Unit:1/4 t.new#1/5 (/9 e.new#2/7 )/10 s.new#3/11 t.new#4/12 t.new#5/14 >/1
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
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[13] = refalrts::tvar_left( context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  context[15] = refalrts::tvar_left( context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & Unit:1/4 t.new#6/5 (/9 e.new#12/16 )/10 s.new#7/11 t.new#8/12 (/14 s.new#9/20 t.new#10/21 e.new#11/18 )/15 >/1
    context[16] = context[7];
    context[17] = context[8];
    context[18] = 0;
    context[19] = 0;
    if( ! refalrts::brackets_term( context[18], context[19], context[14] ) )
      continue;
    // closed e.new#12 as range 16
    if( ! refalrts::svar_left( context[20], context[18], context[19] ) )
      continue;
    context[22] = refalrts::tvar_left( context[21], context[18], context[19] );
    if( ! context[22] )
      continue;
    // closed e.new#11 as range 18
    do {
      // </0 & Unit:1/4 t.new#13/5 (/9 e.new#18/23 )/10 s.new#14/11 t.new#15/12 (/14 s.new#16/20 t.new#17/21 )/15 >/1
      context[23] = context[16];
      context[24] = context[17];
      if( ! refalrts::empty_seq( context[18], context[19] ) )
        continue;
      // closed e.new#18 as range 23
      do {
        // </0 & Unit:1/4 t.ErrorList#1/5 (/9 e.Tokens#1/25 )/10 s.Mode#1/11 t.NextToken#1/12 (/14 # TkExtern/20 t.Pos#2/21 )/15 >/1
        context[25] = context[23];
        context[26] = context[24];
        if( ! refalrts::ident_term( identifiers[ident_TkExtern], context[20] ) )
          continue;
        // closed e.Tokens#1 as range 25
        //DEBUG: t.ErrorList#1: 5
        //DEBUG: t.NextToken#1: 12
        //DEBUG: t.Pos#2: 21
        //DEBUG: s.Mode#1: 11
        //DEBUG: e.Tokens#1: 25

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.Mode#1/11 t.NextToken#1/12 (/14 # TkExtern/20 t.Pos#2/21 )/15 >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & NameList/4 AsIs: t.ErrorList#1/5 HalfReuse: # TkExtern/9 AsIs: e.Tokens#1/25 HalfReuse: >/10 } Tile{ ]] }
        refalrts::update_name(context[4], functions[efunc_NameList]);
        refalrts::reinit_ident(context[9], identifiers[ident_TkExtern]);
        refalrts::reinit_close_call(context[10]);
        refalrts::push_stack( vm, context[10] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        refalrts::splice_to_freelist_open( vm, context[10], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Unit:1/4 t.ErrorList#1/5 (/9 e.Tokens#1/25 )/10 s.Mode#1/11 t.NextToken#1/12 (/14 s.Tag#2/20 t.Pos#2/21 )/15 >/1
        context[25] = context[23];
        context[26] = context[24];
        // closed e.Tokens#1 as range 25
        //DEBUG: t.ErrorList#1: 5
        //DEBUG: t.NextToken#1: 12
        //DEBUG: t.Pos#2: 21
        //DEBUG: s.Mode#1: 11
        //DEBUG: s.Tag#2: 20
        //DEBUG: e.Tokens#1: 25
        //5: t.ErrorList#1
        //11: s.Mode#1
        //12: t.NextToken#1
        //20: s.Tag#2
        //21: t.Pos#2
        //25: e.Tokens#1
        //32: s.Tag#2

        refalrts::reset_allocator(vm);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::alloc_open_call(vm, context[27]);
        refalrts::alloc_name(vm, context[29], functions[efunc_gen_Unit_B1S2C1]);
        refalrts::alloc_open_call(vm, context[30]);
        refalrts::alloc_name(vm, context[31], functions[efunc_OneOf]);
        refalrts::copy_stvar(vm, context[32], context[20]);
        refalrts::alloc_open_call(vm, context[33]);
        refalrts::alloc_name(vm, context[34], functions[efunc_NameListTags]);
        refalrts::alloc_close_call(vm, context[35]);
        refalrts::alloc_close_call(vm, context[36]);
        refalrts::alloc_close_call(vm, context[28]);
        refalrts::push_stack( vm, context[28] );
        refalrts::push_stack( vm, context[27] );
        res = refalrts::splice_elem( res, context[28] );
        refalrts::push_stack( vm, context[36] );
        refalrts::push_stack( vm, context[30] );
        res = refalrts::splice_elem( res, context[36] );
        refalrts::push_stack( vm, context[35] );
        refalrts::push_stack( vm, context[33] );
        res = refalrts::splice_elem( res, context[35] );
        res = refalrts::splice_elem( res, context[34] );
        res = refalrts::splice_elem( res, context[33] );
        res = refalrts::splice_stvar( res, context[32] );
        res = refalrts::splice_elem( res, context[31] );
        res = refalrts::splice_elem( res, context[30] );
        res = refalrts::splice_elem( res, context[29] );
        res = refalrts::splice_elem( res, context[27] );
        refalrts::use( res );
        refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
        if (rec_res != refalrts::cSuccess)
          return rec_res;
        refalrts::this_is_generated_function(vm);
        do {
          // </27 & Unit:1$2?1/31 # True/32 >/28
          context[29] = 0;
          context[30] = 0;
          context[31] = refalrts::call_left( context[29], context[30], context[27], context[28] );
          context[32] = refalrts::ident_left( identifiers[ident_True], context[29], context[30] );
          if( ! context[32] )
            continue;
          if( ! refalrts::empty_seq( context[29], context[30] ) )
            continue;
          //DEBUG: t.ErrorList#1: 5
          //DEBUG: t.NextToken#1: 12
          //DEBUG: t.Pos#2: 21
          //DEBUG: s.Mode#1: 11
          //DEBUG: s.Tag#2: 20
          //DEBUG: e.Tokens#1: 25

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} s.Mode#1/11 t.NextToken#1/12 (/14 s.Tag#2/20 {REMOVED TILE} {REMOVED TILE} >/28 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: </27 Reuse: & Unit:1$2:1/31 HalfReuse: s.Mode1 #11/32 } Tile{ AsIs: t.Pos#2/21 HalfReuse: s.Tag2 #20/15 } Tile{ AsIs: </0 Reuse: & NameList/4 AsIs: t.ErrorList#1/5 HalfReuse: s.Tag2 #20/9 AsIs: e.Tokens#1/25 HalfReuse: >/10 } Tile{ AsIs: >/1 ]] }
          refalrts::update_name(context[31], functions[efunc_gen_Unit_B1S2B1]);
          refalrts::reinit_svar( context[32], context[11] );
          refalrts::reinit_svar( context[15], context[20] );
          refalrts::update_name(context[4], functions[efunc_NameList]);
          refalrts::reinit_svar( context[9], context[20] );
          refalrts::reinit_close_call(context[10]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[27] );
          refalrts::push_stack( vm, context[10] );
          refalrts::push_stack( vm, context[0] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[0], context[10] );
          res = refalrts::splice_evar( res, context[21], context[15] );
          res = refalrts::splice_evar( res, context[27], context[32] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        refalrts::splice_to_freelist(vm, context[27], context[28]);
        continue;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Unit:1/4 t.ErrorList#1/5 (/9 e.Tokens#1/25 )/10 s.Mode#1/11 t.NextToken#1/12 (/14 # TkInclude/20 t.Pos#2/21 )/15 >/1
      context[25] = context[23];
      context[26] = context[24];
      if( ! refalrts::ident_term( identifiers[ident_TkInclude], context[20] ) )
        continue;
      // closed e.Tokens#1 as range 25
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: t.NextToken#1: 12
      //DEBUG: t.Pos#2: 21
      //DEBUG: s.Mode#1: 11
      //DEBUG: e.Tokens#1: 25

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} )/10 s.Mode#1/11 t.NextToken#1/12 (/14 # TkInclude/20 {REMOVED TILE} )/15 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Include/4 AsIs: t.ErrorList#1/5 HalfReuse: s.Mode1 #11/9 } Tile{ AsIs: t.Pos#2/21 } Tile{ AsIs: e.Tokens#1/25 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Include]);
      refalrts::reinit_svar( context[9], context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      refalrts::splice_to_freelist_open( vm, context[9], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Unit:1/4 t.ErrorList#1/5 (/9 e.Tokens#1/23 )/10 s.Mode#1/11 t.NextToken#1/12 (/14 # TkNativeCode/20 t.Pos#2/21 e.Lines#2/25 )/15 >/1
      context[23] = context[16];
      context[24] = context[17];
      context[25] = context[18];
      context[26] = context[19];
      if( ! refalrts::ident_term( identifiers[ident_TkNativeCode], context[20] ) )
        continue;
      // closed e.Tokens#1 as range 23
      // closed e.Lines#2 as range 25
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: t.NextToken#1: 12
      //DEBUG: t.Pos#2: 21
      //DEBUG: s.Mode#1: 11
      //DEBUG: e.Tokens#1: 23
      //DEBUG: e.Lines#2: 25

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & Unit:1/4 {REMOVED TILE} {REMOVED TILE} )/10 s.Mode#1/11 t.NextToken#1/12 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/5 AsIs: (/9 } Tile{ AsIs: (/14 Reuse: # NativeBlock/20 AsIs: t.Pos#2/21 AsIs: e.Lines#2/25 AsIs: )/15 HalfReuse: )/1 } Tile{ AsIs: e.Tokens#1/23 } Tile{ ]] }
      refalrts::update_ident(context[20], identifiers[ident_NativeBlock]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[9], context[1] );
      refalrts::link_brackets( context[14], context[15] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[14], context[1] );
      res = refalrts::splice_evar( res, context[5], context[9] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Unit:1/4 t.new#13/5 (/9 e.new#18/23 )/10 s.new#14/11 t.new#15/12 (/14 s.new#16/20 t.new#17/21 )/15 >/1
      context[23] = context[16];
      context[24] = context[17];
      if( ! refalrts::empty_seq( context[18], context[19] ) )
        continue;
      // closed e.new#18 as range 23
      do {
        // </0 & Unit:1/4 t.ErrorList#1/5 (/9 e.Tokens#1/25 )/10 s.Mode#1/11 t.NextToken#1/12 (/14 # TkSemicolon/20 t.Pos#2/21 )/15 >/1
        context[25] = context[23];
        context[26] = context[24];
        if( ! refalrts::ident_term( identifiers[ident_TkSemicolon], context[20] ) )
          continue;
        // closed e.Tokens#1 as range 25
        //DEBUG: t.ErrorList#1: 5
        //DEBUG: t.NextToken#1: 12
        //DEBUG: t.Pos#2: 21
        //DEBUG: s.Mode#1: 11
        //DEBUG: e.Tokens#1: 25

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & Unit:1/4 {REMOVED TILE} {REMOVED TILE} )/10 s.Mode#1/11 t.NextToken#1/12 (/14 # TkSemicolon/20 t.Pos#2/21 {REMOVED TILE} >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/5 AsIs: (/9 } Tile{ AsIs: )/15 } Tile{ AsIs: e.Tokens#1/25 } Tile{ ]] }
        refalrts::link_brackets( context[9], context[15] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[25], context[26] );
        res = refalrts::splice_evar( res, context[15], context[15] );
        res = refalrts::splice_evar( res, context[5], context[9] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Unit:1/4 t.ErrorList#1/5 (/9 e.Tokens#1/25 )/10 s.Mode#1/11 t.NextToken#1/12 (/14 # TkSpec/20 t.Pos#2/21 )/15 >/1
      context[25] = context[23];
      context[26] = context[24];
      if( ! refalrts::ident_term( identifiers[ident_TkSpec], context[20] ) )
        continue;
      // closed e.Tokens#1 as range 25
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: t.NextToken#1: 12
      //DEBUG: t.Pos#2: 21
      //DEBUG: s.Mode#1: 11
      //DEBUG: e.Tokens#1: 25

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} )/10 s.Mode#1/11 t.NextToken#1/12 (/14 # TkSpec/20 {REMOVED TILE} )/15 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Specialization/4 AsIs: t.ErrorList#1/5 HalfReuse: s.Mode1 #11/9 } Tile{ AsIs: t.Pos#2/21 } Tile{ AsIs: e.Tokens#1/25 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Specialization]);
      refalrts::reinit_svar( context[9], context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      refalrts::splice_to_freelist_open( vm, context[9], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Unit:1/4 t.ErrorList#1/5 (/9 e.Tokens#1/23 )/10 s.Mode#1/11 t.NextToken#1/12 (/14 s.Type#2/20 t.Pos#2/21 e.Value#2/25 )/15 >/1
      context[23] = context[16];
      context[24] = context[17];
      context[25] = context[18];
      context[26] = context[19];
      // closed e.Tokens#1 as range 23
      // closed e.Value#2 as range 25
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: t.NextToken#1: 12
      //DEBUG: t.Pos#2: 21
      //DEBUG: s.Mode#1: 11
      //DEBUG: s.Type#2: 20
      //DEBUG: e.Tokens#1: 23
      //DEBUG: e.Value#2: 25
      //5: t.ErrorList#1
      //11: s.Mode#1
      //12: t.NextToken#1
      //20: s.Type#2
      //21: t.Pos#2
      //23: e.Tokens#1
      //25: e.Value#2
      //32: s.Type#2

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[27]);
      refalrts::alloc_name(vm, context[29], functions[efunc_gen_Unit_B1S7C1]);
      refalrts::alloc_open_call(vm, context[30]);
      refalrts::alloc_name(vm, context[31], functions[efunc_OneOf]);
      refalrts::copy_stvar(vm, context[32], context[20]);
      refalrts::alloc_ident(vm, context[33], identifiers[ident_TkEntry]);
      refalrts::alloc_ident(vm, context[34], identifiers[ident_TkName]);
      refalrts::alloc_close_call(vm, context[35]);
      refalrts::alloc_close_call(vm, context[28]);
      refalrts::push_stack( vm, context[28] );
      refalrts::push_stack( vm, context[27] );
      res = refalrts::splice_elem( res, context[28] );
      refalrts::push_stack( vm, context[35] );
      refalrts::push_stack( vm, context[30] );
      res = refalrts::splice_elem( res, context[35] );
      res = refalrts::splice_elem( res, context[34] );
      res = refalrts::splice_elem( res, context[33] );
      res = refalrts::splice_stvar( res, context[32] );
      res = refalrts::splice_elem( res, context[31] );
      res = refalrts::splice_elem( res, context[30] );
      res = refalrts::splice_elem( res, context[29] );
      res = refalrts::splice_elem( res, context[27] );
      refalrts::use( res );
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function(vm);
      do {
        // </27 & Unit:1$7?1/31 # True/32 >/28
        context[29] = 0;
        context[30] = 0;
        context[31] = refalrts::call_left( context[29], context[30], context[27], context[28] );
        context[32] = refalrts::ident_left( identifiers[ident_True], context[29], context[30] );
        if( ! context[32] )
          continue;
        if( ! refalrts::empty_seq( context[29], context[30] ) )
          continue;
        //DEBUG: t.ErrorList#1: 5
        //DEBUG: t.NextToken#1: 12
        //DEBUG: t.Pos#2: 21
        //DEBUG: s.Mode#1: 11
        //DEBUG: s.Type#2: 20
        //DEBUG: e.Tokens#1: 23
        //DEBUG: e.Value#2: 25

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} )/10 s.Mode#1/11 {REMOVED TILE} (/14 s.Type#2/20 t.Pos#2/21 e.Value#2/25 )/15 </27 & Unit:1$7?1/31 # True/32 >/28 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Function/4 AsIs: t.ErrorList#1/5 HalfReuse: s.Mode1 #11/9 } Tile{ AsIs: t.NextToken#1/12 } Tile{ AsIs: e.Tokens#1/23 } Tile{ AsIs: >/1 ]] }
        refalrts::update_name(context[4], functions[efunc_Function]);
        refalrts::reinit_svar( context[9], context[11] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[23], context[24] );
        res = refalrts::splice_evar( res, context[12], context[13] );
        refalrts::splice_to_freelist_open( vm, context[9], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[27], context[28]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Unit:1/4 t.ErrorList#1/5 (/9 e.Tokens#1/23 )/10 s.Mode#1/11 t.NextToken#1/12 (/14 # TkPseudoComment/20 t.Pos#2/21 e.CommentTokens#2/25 )/15 >/1
    context[23] = context[16];
    context[24] = context[17];
    context[25] = context[18];
    context[26] = context[19];
    if( ! refalrts::ident_term( identifiers[ident_TkPseudoComment], context[20] ) )
      continue;
    // closed e.Tokens#1 as range 23
    // closed e.CommentTokens#2 as range 25
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: t.NextToken#1: 12
    //DEBUG: t.Pos#2: 21
    //DEBUG: s.Mode#1: 11
    //DEBUG: e.Tokens#1: 23
    //DEBUG: e.CommentTokens#2: 25

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Mode#1/11 t.NextToken#1/12 {REMOVED TILE} t.Pos#2/21 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Unit:1$8:1/4 } Tile{ AsIs: (/9 AsIs: e.Tokens#1/23 AsIs: )/10 } Tile{ HalfReuse: </14 HalfReuse: & Unit/20 } Tile{ AsIs: t.ErrorList#1/5 } # Extended/27 Tile{ AsIs: e.CommentTokens#2/25 } Tile{ HalfReuse: >/15 AsIs: >/1 ]] }
    refalrts::alloc_ident(vm, context[27], identifiers[ident_Extended]);
    refalrts::update_name(context[4], functions[efunc_gen_Unit_B1S8B1]);
    refalrts::reinit_open_call(context[14]);
    refalrts::reinit_name(context[20], functions[efunc_Unit]);
    refalrts::reinit_close_call(context[15]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[14] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[15];
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[27], context[27] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[14], context[20] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Unit:1/4 t.ErrorList#1/5 (/9 e.Tokens#1/7 )/10 s.Mode#1/11 t.NextToken#1/12 t.Unexpected#2/14 >/1
  // closed e.Tokens#1 as range 7
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: t.NextToken#1: 12
  //DEBUG: t.Unexpected#2: 14
  //DEBUG: s.Mode#1: 11
  //DEBUG: e.Tokens#1: 7

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/9 {REMOVED TILE} )/10 s.Mode#1/11 t.NextToken#1/12 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedUnitToken/4 AsIs: t.ErrorList#1/5 } Tile{ AsIs: t.Unexpected#2/14 AsIs: >/1 } Tile{ AsIs: e.Tokens#1/7 } Tile{ ]] }
  refalrts::update_name(context[4], functions[efunc_UnexpectedUnitToken]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[14], context[1] );
  refalrts::splice_to_freelist_open( vm, context[6], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Unit_B1("Unit:1", COOKIE1_, COOKIE2_, func_gen_Unit_B1);


static refalrts::FnResult func_Unit(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & Unit/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Unit/4 t.new#1/5 s.new#2/7 t.new#3/8 e.new#4/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[9] = refalrts::tvar_left( context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 2
  do {
    // </0 & Unit/4 t.ErrorList#1/5 s.Mode#1/7 (/8 # TkExtern/14 t.0#0/15 )/9 e.Tokens#1/10 >/1
    context[10] = context[2];
    context[11] = context[3];
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_term( context[12], context[13], context[8] ) )
      continue;
    context[14] = refalrts::ident_left( identifiers[ident_TkExtern], context[12], context[13] );
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
    //DEBUG: t.0#0: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Mode#1/7 (/8 # TkExtern/14 t.0#0/15 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & NameList/4 AsIs: t.ErrorList#1/5 } Tile{ HalfReuse: # TkExtern/9 AsIs: e.Tokens#1/10 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_NameList]);
    refalrts::reinit_ident(context[9], identifiers[ident_TkExtern]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    refalrts::splice_to_freelist_open( vm, context[6], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Unit/4 t.ErrorList#1/5 s.Mode#1/7 t.NextToken#1/8 e.Tokens#1/2 >/1
  // closed e.Tokens#1 as range 2
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: t.NextToken#1: 8
  //DEBUG: s.Mode#1: 7
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Unit:1*1/4 AsIs: t.ErrorList#1/5 } (/10 Tile{ AsIs: e.Tokens#1/2 } )/11 Tile{ AsIs: s.Mode#1/7 AsIs: t.NextToken#1/8 } t.NextToken#1/8/12 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[10]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::copy_evar(vm, context[12], context[13], context[8], context[9]);
  refalrts::update_name(context[4], functions[efunc_gen_Unit_B1D1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[7], context[9] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Unit("Unit", COOKIE1_, COOKIE2_, func_Unit);


static refalrts::FnResult func_NameList(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & NameList/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & NameList/4 t.new#1/5 s.new#2/7 t.new#3/8 e.new#4/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[9] = refalrts::tvar_left( context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 2
  do {
    // </0 & NameList/4 t.new#5/5 s.new#6/7 (/8 s.new#7/14 t.new#8/15 e.new#9/12 )/9 e.new#10/10 >/1
    context[10] = context[2];
    context[11] = context[3];
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_term( context[12], context[13], context[8] ) )
      continue;
    // closed e.new#10 as range 10
    if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
      continue;
    context[16] = refalrts::tvar_left( context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    // closed e.new#9 as range 12
    do {
      // </0 & NameList/4 t.ErrorList#1/5 s.Tag#1/7 (/8 # TkName/14 t.Pos#1/15 e.Name#1/17 )/9 e.Tokens#1/19 >/1
      context[17] = context[12];
      context[18] = context[13];
      context[19] = context[10];
      context[20] = context[11];
      if( ! refalrts::ident_term( identifiers[ident_TkName], context[14] ) )
        continue;
      // closed e.Name#1 as range 17
      // closed e.Tokens#1 as range 19
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: t.Pos#1: 15
      //DEBUG: s.Tag#1: 7
      //DEBUG: e.Name#1: 17
      //DEBUG: e.Tokens#1: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & NameList-DoNames/4 AsIs: t.ErrorList#1/5 AsIs: s.Tag#1/7 AsIs: (/8 HalfReuse: </14 } & __Step-Drop/21 >/22 </23 & __Meta_Mu/24 s.Tag#1/7/25 Tile{ AsIs: t.Pos#1/15 } Tile{ AsIs: e.Name#1/17 } & $table/26 >/27 Tile{ AsIs: )/9 AsIs: e.Tokens#1/19 AsIs: >/1 ]] }
      refalrts::alloc_name(vm, context[21], functions[efunc_u_u_Stepm_Drop]);
      refalrts::alloc_close_call(vm, context[22]);
      refalrts::alloc_open_call(vm, context[23]);
      refalrts::alloc_name(vm, context[24], functions[efunc_u_u_Metau_Mu]);
      refalrts::copy_stvar(vm, context[25], context[7]);
      refalrts::alloc_name(vm, context[26], functions[efunc_d_table]);
      refalrts::alloc_close_call(vm, context[27]);
      refalrts::update_name(context[4], functions[efunc_NameListm_DoNames]);
      refalrts::reinit_open_call(context[14]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[9] );
      refalrts::push_stack( vm, context[27] );
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[22] );
      refalrts::push_stack( vm, context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[9];
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[21], context[25] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & NameList/4 t.ErrorList#1/5 s.Tag#1/7 (/8 # TkRefal5Mode/14 t.Pos#1/15 s.Mode#1/21 )/9 e.Tokens#1/19 >/1
    context[17] = context[12];
    context[18] = context[13];
    context[19] = context[10];
    context[20] = context[11];
    if( ! refalrts::ident_term( identifiers[ident_TkRefal5Mode], context[14] ) )
      continue;
    // closed e.Tokens#1 as range 19
    if( ! refalrts::svar_left( context[21], context[17], context[18] ) )
      continue;
    if( ! refalrts::empty_seq( context[17], context[18] ) )
      continue;
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: t.Pos#1: 15
    //DEBUG: s.Tag#1: 7
    //DEBUG: e.Tokens#1: 19
    //DEBUG: s.Mode#1: 21

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/8 # TkRefal5Mode/14 t.Pos#1/15 s.Mode#1/21 )/9 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & NameList/4 AsIs: t.ErrorList#1/5 AsIs: s.Tag#1/7 } Tile{ AsIs: e.Tokens#1/19 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & NameList/4 t.ErrorList#1/5 s.Tag#1/7 t.NextToken#1/8 e.Tokens#1/2 >/1
  // closed e.Tokens#1 as range 2
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: t.NextToken#1: 8
  //DEBUG: s.Tag#1: 7
  //DEBUG: e.Tokens#1: 2
  //2: e.Tokens#1
  //5: t.ErrorList#1
  //7: s.Tag#1
  //8: t.NextToken#1
  //13: t.NextToken#1

  refalrts::reset_allocator(vm);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[12], functions[efunc_gen_NameList_S3C1]);
  refalrts::copy_stvar(vm, context[13], context[8]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[10] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_stvar( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::use( res );
  refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
  if (rec_res != refalrts::cSuccess)
    return rec_res;
  refalrts::this_is_generated_function(vm);
  do {
    // </10 & NameList$3?1/14 (/17 s.Type#2/19 t.Pos#2/20 e.Value#2/15 )/18 >/11
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::call_left( context[12], context[13], context[10], context[11] );
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[12], context[13] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;
    if( ! refalrts::svar_left( context[19], context[15], context[16] ) )
      continue;
    context[21] = refalrts::tvar_left( context[20], context[15], context[16] );
    if( ! context[21] )
      continue;
    // closed e.Value#2 as range 15
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: t.NextToken#1: 8
    //DEBUG: s.Tag#1: 7
    //DEBUG: e.Tokens#1: 2
    //DEBUG: s.Type#2: 19
    //DEBUG: t.Pos#2: 20
    //DEBUG: e.Value#2: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Tag#1/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Type#2/19 {REMOVED TILE} e.Value#2/15 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#1/5 } Tile{ AsIs: t.Pos#2/20 }"expected function name after "/22 Tile{ AsIs: </10 Reuse: & TokName/14 HalfReuse: s.Tag1 #7/17 } >/24" keywo"/25 Tile{ HalfReuse: 'r'/18 HalfReuse: 'd'/11 AsIs: >/1 } (/27 )/28 Tile{ AsIs: t.NextToken#1/8 } Tile{ AsIs: e.Tokens#1/2 } Tile{ ]] }
    refalrts::alloc_chars(vm, context[22], context[23], "expected function name after ", 29);
    refalrts::alloc_close_call(vm, context[24]);
    refalrts::alloc_chars(vm, context[25], context[26], " keywo", 6);
    refalrts::alloc_open_bracket(vm, context[27]);
    refalrts::alloc_close_bracket(vm, context[28]);
    refalrts::update_name(context[4], functions[efunc_ELm_AddErrorAt]);
    refalrts::update_name(context[14], functions[efunc_TokName]);
    refalrts::reinit_svar( context[17], context[7] );
    refalrts::reinit_char(context[18], 'r');
    refalrts::reinit_char(context[11], 'd');
    refalrts::link_brackets( context[27], context[28] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[18], context[1] );
    res = refalrts::splice_evar( res, context[24], context[26] );
    res = refalrts::splice_evar( res, context[10], context[17] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    refalrts::splice_to_freelist_open( vm, context[6], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  refalrts::splice_to_freelist(vm, context[10], context[11]);
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_NameList("NameList", COOKIE1_, COOKIE2_, func_NameList);


static refalrts::FnResult func_TkExtern(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Declaration/4 AsIs: t.Pos#1/5 } # GN-Entry/7 Tile{ AsIs: e.Name#1/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_ident(vm, context[7], identifiers[ident_GNm_Entry]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_Declaration]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_TkExtern("TkExtern", COOKIE1_, COOKIE2_, func_TkExtern);


static refalrts::FnResult func_TkEnum(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Enum/4 AsIs: t.Pos#1/5 } # GN-Local/7 Tile{ AsIs: e.Name#1/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_ident(vm, context[7], identifiers[ident_GNm_Local]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_Enum]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_TkEnum("TkEnum", COOKIE1_, COOKIE2_, func_TkEnum);


static refalrts::FnResult func_TkEEnum(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Enum/4 AsIs: t.Pos#1/5 } # GN-Entry/7 Tile{ AsIs: e.Name#1/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_ident(vm, context[7], identifiers[ident_GNm_Entry]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_Enum]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_TkEEnum("TkEEnum", COOKIE1_, COOKIE2_, func_TkEEnum);


static refalrts::FnResult func_TkSwap(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Swap/4 AsIs: t.Pos#1/5 } # GN-Local/7 Tile{ AsIs: e.Name#1/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_ident(vm, context[7], identifiers[ident_GNm_Local]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_Swap]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_TkSwap("TkSwap", COOKIE1_, COOKIE2_, func_TkSwap);


static refalrts::FnResult func_TkESwap(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Swap/4 AsIs: t.Pos#1/5 } # GN-Entry/7 Tile{ AsIs: e.Name#1/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_ident(vm, context[7], identifiers[ident_GNm_Entry]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_Swap]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_TkESwap("TkESwap", COOKIE1_, COOKIE2_, func_TkESwap);


static refalrts::FnResult func_TkLabel(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & TkLabel/4 t.Pos#1/5 e.Name#1/2 >/1
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Ident/4 AsIs: t.Pos#1/5 AsIs: e.Name#1/2 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_Ident]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_TkLabel("TkLabel", COOKIE1_, COOKIE2_, func_TkLabel);


static refalrts::FnResult func_TkEntryL(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & TkEntryL/4 t.Pos#1/5 e.Name#1/2 >/1
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Entry/4 AsIs: t.Pos#1/5 } # GN-Entry/7 Tile{ AsIs: e.Name#1/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_ident(vm, context[7], identifiers[ident_GNm_Entry]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_Entry]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_TkEntryL("TkEntryL", COOKIE1_, COOKIE2_, func_TkEntryL);


static refalrts::FnResult func_TkInline(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & TkInline/4 t.Pos#1/5 e.Name#1/2 >/1
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Inline/4 AsIs: t.Pos#1/5 } # GN-Local/7 Tile{ AsIs: e.Name#1/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_ident(vm, context[7], identifiers[ident_GNm_Local]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_Inline]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_TkInline("TkInline", COOKIE1_, COOKIE2_, func_TkInline);


static refalrts::FnResult func_TkDrive(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & TkDrive/4 t.Pos#1/5 e.Name#1/2 >/1
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Drive/4 AsIs: t.Pos#1/5 } # GN-Local/7 Tile{ AsIs: e.Name#1/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_ident(vm, context[7], identifiers[ident_GNm_Local]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_Drive]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_TkDrive("TkDrive", COOKIE1_, COOKIE2_, func_TkDrive);


static refalrts::FnResult func_TkMeta(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & TkMeta/4 t.Pos#1/5 e.Name#1/2 >/1
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Meta/4 AsIs: t.Pos#1/5 } # GN-Local/7 Tile{ AsIs: e.Name#1/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_ident(vm, context[7], identifiers[ident_GNm_Local]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_Meta]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_TkMeta("TkMeta", COOKIE1_, COOKIE2_, func_TkMeta);


static refalrts::FnResult func_NameListm_DoNames(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 51 elems
  refalrts::Iter context[51];
  refalrts::zeros( context, 51 );
  // </0 & NameList-DoNames/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & NameList-DoNames/4 t.new#1/5 s.new#2/7 (/10 e.new#3/8 )/11 t.new#4/12 e.new#5/2 >/1
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
  // closed e.new#3 as range 8
  context[13] = refalrts::tvar_left( context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#5 as range 2
  do {
    // </0 & NameList-DoNames/4 t.new#6/5 s.new#7/7 (/10 e.new#12/14 )/11 (/12 s.new#8/20 t.new#9/21 e.new#10/18 )/13 e.new#11/16 >/1
    context[14] = context[8];
    context[15] = context[9];
    context[16] = context[2];
    context[17] = context[3];
    context[18] = 0;
    context[19] = 0;
    if( ! refalrts::brackets_term( context[18], context[19], context[12] ) )
      continue;
    // closed e.new#12 as range 14
    // closed e.new#11 as range 16
    if( ! refalrts::svar_left( context[20], context[18], context[19] ) )
      continue;
    context[22] = refalrts::tvar_left( context[21], context[18], context[19] );
    if( ! context[22] )
      continue;
    // closed e.new#10 as range 18
    do {
      // </0 & NameList-DoNames/4 t.ErrorList#1/5 s.Tag#1/7 (/10 e.Units#1/23 )/11 (/12 # TkRefal5Mode/20 t.Pos#1/21 s.Mode#1/29 )/13 e.Tokens#1/27 >/1
      context[23] = context[14];
      context[24] = context[15];
      context[25] = context[18];
      context[26] = context[19];
      context[27] = context[16];
      context[28] = context[17];
      if( ! refalrts::ident_term( identifiers[ident_TkRefal5Mode], context[20] ) )
        continue;
      // closed e.Units#1 as range 23
      // closed e.Tokens#1 as range 27
      if( ! refalrts::svar_left( context[29], context[25], context[26] ) )
        continue;
      if( ! refalrts::empty_seq( context[25], context[26] ) )
        continue;
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: t.Pos#1: 21
      //DEBUG: s.Tag#1: 7
      //DEBUG: e.Units#1: 23
      //DEBUG: e.Tokens#1: 27
      //DEBUG: s.Mode#1: 29

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/12 # TkRefal5Mode/20 t.Pos#1/21 s.Mode#1/29 )/13 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & NameList-DoNames/4 AsIs: t.ErrorList#1/5 AsIs: s.Tag#1/7 AsIs: (/10 AsIs: e.Units#1/23 AsIs: )/11 } Tile{ AsIs: e.Tokens#1/27 } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[10], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[27], context[28] );
      refalrts::splice_to_freelist_open( vm, context[11], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & NameList-DoNames/4 t.new#13/5 s.new#14/7 (/10 e.new#18/23 )/11 (/12 s.new#15/20 t.new#16/21 )/13 e.new#17/25 >/1
      context[23] = context[14];
      context[24] = context[15];
      context[25] = context[16];
      context[26] = context[17];
      if( ! refalrts::empty_seq( context[18], context[19] ) )
        continue;
      // closed e.new#18 as range 23
      // closed e.new#17 as range 25
      do {
        // </0 & NameList-DoNames/4 t.new#19/5 s.new#20/7 (/10 e.new#26/27 )/11 (/12 # TkComma/20 t.new#21/21 )/13 (/33 s.new#22/35 t.new#23/36 e.new#24/31 )/34 e.new#25/29 >/1
        context[27] = context[23];
        context[28] = context[24];
        context[29] = context[25];
        context[30] = context[26];
        if( ! refalrts::ident_term( identifiers[ident_TkComma], context[20] ) )
          continue;
        context[31] = 0;
        context[32] = 0;
        context[33] = refalrts::brackets_left( context[31], context[32], context[29], context[30] );
        if( ! context[33] )
          continue;
        refalrts::bracket_pointers(context[33], context[34]);
        // closed e.new#26 as range 27
        // closed e.new#25 as range 29
        if( ! refalrts::svar_left( context[35], context[31], context[32] ) )
          continue;
        context[37] = refalrts::tvar_left( context[36], context[31], context[32] );
        if( ! context[37] )
          continue;
        // closed e.new#24 as range 31
        do {
          // </0 & NameList-DoNames/4 t.ErrorList#1/5 s.Tag#1/7 (/10 e.Units#1/38 )/11 (/12 # TkComma/20 t.CommaPos#1/21 )/13 (/33 # TkRefal5Mode/35 t.ModePos#1/36 s.Mode#1/44 )/34 e.Tokens#1/42 >/1
          context[38] = context[27];
          context[39] = context[28];
          context[40] = context[31];
          context[41] = context[32];
          context[42] = context[29];
          context[43] = context[30];
          if( ! refalrts::ident_term( identifiers[ident_TkRefal5Mode], context[35] ) )
            continue;
          // closed e.Units#1 as range 38
          // closed e.Tokens#1 as range 42
          if( ! refalrts::svar_left( context[44], context[40], context[41] ) )
            continue;
          if( ! refalrts::empty_seq( context[40], context[41] ) )
            continue;
          //DEBUG: t.ErrorList#1: 5
          //DEBUG: t.CommaPos#1: 21
          //DEBUG: t.ModePos#1: 36
          //DEBUG: s.Tag#1: 7
          //DEBUG: e.Units#1: 38
          //DEBUG: e.Tokens#1: 42
          //DEBUG: s.Mode#1: 44

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} (/33 # TkRefal5Mode/35 t.ModePos#1/36 s.Mode#1/44 )/34 {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & NameList-DoNames/4 AsIs: t.ErrorList#1/5 AsIs: s.Tag#1/7 AsIs: (/10 AsIs: e.Units#1/38 AsIs: )/11 AsIs: (/12 AsIs: # TkComma/20 AsIs: t.CommaPos#1/21 AsIs: )/13 } Tile{ AsIs: e.Tokens#1/42 } Tile{ AsIs: >/1 ]] }
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[12], context[13] );
          refalrts::link_brackets( context[10], context[11] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[42], context[43] );
          refalrts::splice_to_freelist_open( vm, context[13], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & NameList-DoNames/4 t.ErrorList#1/5 s.Tag#1/7 (/10 e.Units#1/38 )/11 (/12 # TkComma/20 t.CommaPos#1/21 )/13 (/33 # TkName/35 t.NamePos#1/36 e.Name#1/40 )/34 e.Tokens#1/42 >/1
        context[38] = context[27];
        context[39] = context[28];
        context[40] = context[31];
        context[41] = context[32];
        context[42] = context[29];
        context[43] = context[30];
        if( ! refalrts::ident_term( identifiers[ident_TkName], context[35] ) )
          continue;
        // closed e.Units#1 as range 38
        // closed e.Name#1 as range 40
        // closed e.Tokens#1 as range 42
        //DEBUG: t.ErrorList#1: 5
        //DEBUG: t.CommaPos#1: 21
        //DEBUG: t.NamePos#1: 36
        //DEBUG: s.Tag#1: 7
        //DEBUG: e.Units#1: 38
        //DEBUG: e.Name#1: 40
        //DEBUG: e.Tokens#1: 42

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} t.CommaPos#1/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & NameList-DoNames/4 AsIs: t.ErrorList#1/5 AsIs: s.Tag#1/7 AsIs: (/10 AsIs: e.Units#1/38 HalfReuse: </11 HalfReuse: & __Step-Drop/12 HalfReuse: >/20 } Tile{ HalfReuse: </13 HalfReuse: & __Meta_Mu/33 HalfReuse: s.Tag1 #7/35 AsIs: t.NamePos#1/36 } Tile{ AsIs: e.Name#1/40 } & $table/44 >/45 Tile{ AsIs: )/34 AsIs: e.Tokens#1/42 AsIs: >/1 ]] }
        refalrts::alloc_name(vm, context[44], functions[efunc_d_table]);
        refalrts::alloc_close_call(vm, context[45]);
        refalrts::reinit_open_call(context[11]);
        refalrts::reinit_name(context[12], functions[efunc_u_u_Stepm_Drop]);
        refalrts::reinit_close_call(context[20]);
        refalrts::reinit_open_call(context[13]);
        refalrts::reinit_name(context[33], functions[efunc_u_u_Metau_Mu]);
        refalrts::reinit_svar( context[35], context[7] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[10], context[34] );
        refalrts::push_stack( vm, context[45] );
        refalrts::push_stack( vm, context[13] );
        refalrts::push_stack( vm, context[20] );
        refalrts::push_stack( vm, context[11] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[34];
        res = refalrts::splice_evar( res, context[44], context[45] );
        res = refalrts::splice_evar( res, context[40], context[41] );
        res = refalrts::splice_evar( res, context[13], context[37] );
        refalrts::splice_to_freelist_open( vm, context[20], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & NameList-DoNames/4 t.ErrorList#1/5 s.Tag#1/7 (/10 e.Units#1/27 )/11 (/12 # TkSemicolon/20 t.Pos#1/21 )/13 e.Tokens#1/29 >/1
        context[27] = context[23];
        context[28] = context[24];
        context[29] = context[25];
        context[30] = context[26];
        if( ! refalrts::ident_term( identifiers[ident_TkSemicolon], context[20] ) )
          continue;
        // closed e.Units#1 as range 27
        // closed e.Tokens#1 as range 29
        //DEBUG: t.ErrorList#1: 5
        //DEBUG: t.Pos#1: 21
        //DEBUG: s.Tag#1: 7
        //DEBUG: e.Units#1: 27
        //DEBUG: e.Tokens#1: 29

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & NameList-DoNames/4 {REMOVED TILE} s.Tag#1/7 {REMOVED TILE} (/12 # TkSemicolon/20 t.Pos#1/21 )/13 {REMOVED TILE} >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: (/10 AsIs: e.Units#1/27 AsIs: )/11 } Tile{ AsIs: e.Tokens#1/29 } Tile{ ]] }
        refalrts::link_brackets( context[10], context[11] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[29], context[30] );
        res = refalrts::splice_evar( res, context[10], context[11] );
        res = refalrts::splice_evar( res, context[5], context[6] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & NameList-DoNames/4 t.ErrorList#1/5 s.Tag#1/7 (/10 e.Units#1/27 )/11 (/12 # TkComma/20 t.Pos#1/21 )/13 e.Tokens#1/29 >/1
      context[27] = context[23];
      context[28] = context[24];
      context[29] = context[25];
      context[30] = context[26];
      if( ! refalrts::ident_term( identifiers[ident_TkComma], context[20] ) )
        continue;
      // closed e.Units#1 as range 27
      // closed e.Tokens#1 as range 29
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: t.Pos#1: 21
      //DEBUG: s.Tag#1: 7
      //DEBUG: e.Units#1: 27
      //DEBUG: e.Tokens#1: 29

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & NameList-DoNames/4 } </31 & EL-AddErrorAt/32 Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: t.Pos#1/21 } Tile{ HalfReuse: 'e'/11 HalfReuse: 'x'/12 HalfReuse: 'p'/20 }"ected name after comma"/33 >/35 Tile{ AsIs: s.Tag#1/7 AsIs: (/10 } Tile{ AsIs: e.Units#1/27 } Tile{ AsIs: )/13 AsIs: e.Tokens#1/29 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[31]);
      refalrts::alloc_name(vm, context[32], functions[efunc_ELm_AddErrorAt]);
      refalrts::alloc_chars(vm, context[33], context[34], "ected name after comma", 22);
      refalrts::alloc_close_call(vm, context[35]);
      refalrts::reinit_char(context[11], 'e');
      refalrts::reinit_char(context[12], 'x');
      refalrts::reinit_char(context[20], 'p');
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[10], context[13] );
      refalrts::push_stack( vm, context[35] );
      refalrts::push_stack( vm, context[31] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[13];
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[7], context[10] );
      res = refalrts::splice_evar( res, context[33], context[35] );
      res = refalrts::splice_evar( res, context[11], context[20] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[31], context[32] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & NameList-DoNames/4 t.new#13/5 s.new#14/7 (/10 e.new#18/23 )/11 (/12 # TkName/20 t.new#15/21 e.new#16/25 )/13 e.new#17/27 >/1
    context[23] = context[14];
    context[24] = context[15];
    context[25] = context[18];
    context[26] = context[19];
    context[27] = context[16];
    context[28] = context[17];
    if( ! refalrts::ident_term( identifiers[ident_TkName], context[20] ) )
      continue;
    // closed e.new#18 as range 23
    // closed e.new#16 as range 25
    // closed e.new#17 as range 27
    do {
      // </0 & NameList-DoNames/4 t.ErrorList#1/5 s.Tag#1/7 (/10 e.Units#1/29 )/11 (/12 # TkName/20 t.NamePos#1/21 e.Name#1/31 )/13 (/37 # TkOpenBlock/39 t.BracketPos#1/40 )/38 e.Tokens#1/33 >/1
      context[29] = context[23];
      context[30] = context[24];
      context[31] = context[25];
      context[32] = context[26];
      context[33] = context[27];
      context[34] = context[28];
      context[35] = 0;
      context[36] = 0;
      context[37] = refalrts::brackets_left( context[35], context[36], context[33], context[34] );
      if( ! context[37] )
        continue;
      refalrts::bracket_pointers(context[37], context[38]);
      context[39] = refalrts::ident_left( identifiers[ident_TkOpenBlock], context[35], context[36] );
      if( ! context[39] )
        continue;
      // closed e.Units#1 as range 29
      // closed e.Name#1 as range 31
      // closed e.Tokens#1 as range 33
      context[41] = refalrts::tvar_left( context[40], context[35], context[36] );
      if( ! context[41] )
        continue;
      if( ! refalrts::empty_seq( context[35], context[36] ) )
        continue;
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: t.NamePos#1: 21
      //DEBUG: s.Tag#1: 7
      //DEBUG: e.Units#1: 29
      //DEBUG: e.Name#1: 31
      //DEBUG: e.Tokens#1: 33
      //DEBUG: t.BracketPos#1: 40

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#1/5 } t.NamePos#1/21/42"missed semicolon after previous "/44 </46 & TokName/47 Tile{ AsIs: s.Tag#1/7 } >/48" declaration"/49 Tile{ AsIs: >/1 } Tile{ AsIs: (/10 AsIs: e.Units#1/29 AsIs: )/11 AsIs: (/12 AsIs: # TkName/20 AsIs: t.NamePos#1/21 AsIs: e.Name#1/31 AsIs: )/13 AsIs: (/37 AsIs: # TkOpenBlock/39 AsIs: t.BracketPos#1/40 AsIs: )/38 } Tile{ AsIs: e.Tokens#1/33 } Tile{ ]] }
      refalrts::copy_evar(vm, context[42], context[43], context[21], context[22]);
      refalrts::alloc_chars(vm, context[44], context[45], "missed semicolon after previous ", 32);
      refalrts::alloc_open_call(vm, context[46]);
      refalrts::alloc_name(vm, context[47], functions[efunc_TokName]);
      refalrts::alloc_close_call(vm, context[48]);
      refalrts::alloc_chars(vm, context[49], context[50], " declaration", 12);
      refalrts::update_name(context[4], functions[efunc_ELm_AddErrorAt]);
      refalrts::link_brackets( context[37], context[38] );
      refalrts::link_brackets( context[12], context[13] );
      refalrts::link_brackets( context[10], context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[48] );
      refalrts::push_stack( vm, context[46] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[33], context[34] );
      res = refalrts::splice_evar( res, context[10], context[38] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[48], context[50] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[42], context[47] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & NameList-DoNames/4 t.ErrorList#1/5 s.Tag#1/7 (/10 e.Units#1/29 )/11 (/12 # TkName/20 t.Pos#1/21 e.Name#1/31 )/13 e.Tokens#1/33 >/1
    context[29] = context[23];
    context[30] = context[24];
    context[31] = context[25];
    context[32] = context[26];
    context[33] = context[27];
    context[34] = context[28];
    // closed e.Units#1 as range 29
    // closed e.Name#1 as range 31
    // closed e.Tokens#1 as range 33
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: t.Pos#1: 21
    //DEBUG: s.Tag#1: 7
    //DEBUG: e.Units#1: 29
    //DEBUG: e.Name#1: 31
    //DEBUG: e.Tokens#1: 33

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Name#1/31 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & NameList-DoNames/4 } </35 & EL-AddErrorAt/36 Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: t.Pos#1/21 } Tile{ HalfReuse: 'm'/11 HalfReuse: 'i'/12 HalfReuse: 's'/20 }"sed comma after external name"/37 >/39 Tile{ AsIs: s.Tag#1/7 AsIs: (/10 } Tile{ AsIs: e.Units#1/29 } Tile{ AsIs: )/13 AsIs: e.Tokens#1/33 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[35]);
    refalrts::alloc_name(vm, context[36], functions[efunc_ELm_AddErrorAt]);
    refalrts::alloc_chars(vm, context[37], context[38], "sed comma after external name", 29);
    refalrts::alloc_close_call(vm, context[39]);
    refalrts::reinit_char(context[11], 'm');
    refalrts::reinit_char(context[12], 'i');
    refalrts::reinit_char(context[20], 's');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[10], context[13] );
    refalrts::push_stack( vm, context[39] );
    refalrts::push_stack( vm, context[35] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[13];
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_evar( res, context[7], context[10] );
    res = refalrts::splice_evar( res, context[37], context[39] );
    res = refalrts::splice_evar( res, context[11], context[20] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
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

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[18]);
    refalrts::alloc_name(vm, context[20], functions[efunc_gen_NameListm_DoNames_S8C1]);
    refalrts::copy_stvar(vm, context[21], context[12]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[18] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_stvar( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[18] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
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

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[30]);
      refalrts::alloc_name(vm, context[32], functions[efunc_gen_NameListm_DoNames_S8C2]);
      refalrts::alloc_open_call(vm, context[33]);
      refalrts::alloc_name(vm, context[34], functions[efunc_OneOf]);
      refalrts::copy_stvar(vm, context[35], context[27]);
      refalrts::alloc_ident(vm, context[36], identifiers[ident_TkExtern]);
      refalrts::alloc_ident(vm, context[37], identifiers[ident_TkEntry]);
      refalrts::alloc_ident(vm, context[38], identifiers[ident_TkEOF]);
      refalrts::alloc_close_call(vm, context[39]);
      refalrts::alloc_close_call(vm, context[31]);
      refalrts::push_stack( vm, context[31] );
      refalrts::push_stack( vm, context[30] );
      res = refalrts::splice_elem( res, context[31] );
      refalrts::push_stack( vm, context[39] );
      refalrts::push_stack( vm, context[33] );
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
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function(vm);
      do {
        // </30 & NameList-DoNames$8?2/34 # True/35 >/31
        context[32] = 0;
        context[33] = 0;
        context[34] = refalrts::call_left( context[32], context[33], context[30], context[31] );
        context[35] = refalrts::ident_left( identifiers[ident_True], context[32], context[33] );
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

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.Tag#1/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Type#2/27 {REMOVED TILE} e.Value#2/23 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#1/5 } Tile{ AsIs: t.Pos#2/28 } Tile{ HalfReuse: 's'/18 HalfReuse: 'e'/22 HalfReuse: 'm'/25 } Tile{ HalfReuse: 'i'/26 HalfReuse: 'c'/19 HalfReuse: 'o'/30 HalfReuse: 'l'/34 HalfReuse: 'o'/35 HalfReuse: 'n'/31 AsIs: >/1 } Tile{ AsIs: (/10 AsIs: e.Units#1/14 AsIs: )/11 AsIs: t.NextToken#1/12 } Tile{ AsIs: e.Tokens#1/16 } Tile{ ]] }
        refalrts::update_name(context[4], functions[efunc_ELm_AddErrorAt]);
        refalrts::reinit_char(context[18], 's');
        refalrts::reinit_char(context[22], 'e');
        refalrts::reinit_char(context[25], 'm');
        refalrts::reinit_char(context[26], 'i');
        refalrts::reinit_char(context[19], 'c');
        refalrts::reinit_char(context[30], 'o');
        refalrts::reinit_char(context[34], 'l');
        refalrts::reinit_char(context[35], 'o');
        refalrts::reinit_char(context[31], 'n');
        refalrts::link_brackets( context[10], context[11] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[10], context[13] );
        res = refalrts::splice_evar( res, context[26], context[1] );
        res = refalrts::splice_evar( res, context[18], context[25] );
        res = refalrts::splice_evar( res, context[28], context[29] );
        refalrts::splice_to_freelist_open( vm, context[6], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[30], context[31]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[18], context[19]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & NameList-DoNames/4 t.ErrorList#1/5 s.Tag#1/7 (/10 e.Units#1/8 )/11 t.NextToken#1/12 e.Tokens#1/2 >/1
  // closed e.Units#1 as range 8
  // closed e.Tokens#1 as range 2
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: t.NextToken#1: 12
  //DEBUG: s.Tag#1: 7
  //DEBUG: e.Units#1: 8
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 AsIs: & NameList-DoNames/4 } </14 & UnexpectedToken/15 Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: t.NextToken#1/12 }"comma or semicolon"/16 >/18 Tile{ AsIs: s.Tag#1/7 AsIs: (/10 AsIs: e.Units#1/8 AsIs: )/11 } Tile{ AsIs: e.Tokens#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_UnexpectedToken]);
  refalrts::alloc_chars(vm, context[16], context[17], "comma or semicolon", 18);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[11] );
  res = refalrts::splice_evar( res, context[16], context[18] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_NameListm_DoNames("NameList-DoNames", COOKIE1_, COOKIE2_, func_NameListm_DoNames);


static refalrts::FnResult func_gen_Include_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  // </0 & Include:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Include:1/4 t.new#1/5 (/9 e.new#2/7 )/10 t.new#3/11 t.new#4/13 >/1
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
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & Include:1/4 t.new#5/5 (/9 e.new#9/15 )/10 (/11 # TkCompound/19 t.new#6/20 e.new#7/17 )/12 t.new#8/13 >/1
    context[15] = context[7];
    context[16] = context[8];
    context[17] = 0;
    context[18] = 0;
    if( ! refalrts::brackets_term( context[17], context[18], context[11] ) )
      continue;
    context[19] = refalrts::ident_left( identifiers[ident_TkCompound], context[17], context[18] );
    if( ! context[19] )
      continue;
    // closed e.new#9 as range 15
    context[21] = refalrts::tvar_left( context[20], context[17], context[18] );
    if( ! context[21] )
      continue;
    // closed e.new#7 as range 17
    do {
      // </0 & Include:1/4 t.ErrorList#2/5 (/9 e.Tokens#1/22 )/10 (/11 # TkCompound/19 t.FilePos#3/20 e.FileName#3/24 )/12 (/13 # TkSemicolon/28 t.SemicolonPos#3/29 )/14 >/1
      context[22] = context[15];
      context[23] = context[16];
      context[24] = context[17];
      context[25] = context[18];
      context[26] = 0;
      context[27] = 0;
      if( ! refalrts::brackets_term( context[26], context[27], context[13] ) )
        continue;
      context[28] = refalrts::ident_left( identifiers[ident_TkSemicolon], context[26], context[27] );
      if( ! context[28] )
        continue;
      // closed e.Tokens#1 as range 22
      // closed e.FileName#3 as range 24
      context[30] = refalrts::tvar_left( context[29], context[26], context[27] );
      if( ! context[30] )
        continue;
      if( ! refalrts::empty_seq( context[26], context[27] ) )
        continue;
      //DEBUG: t.ErrorList#2: 5
      //DEBUG: t.FilePos#3: 20
      //DEBUG: e.Tokens#1: 22
      //DEBUG: e.FileName#3: 24
      //DEBUG: t.SemicolonPos#3: 29

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & Include:1/4 {REMOVED TILE} (/9 {REMOVED TILE} {REMOVED TILE} # TkSemicolon/28 t.SemicolonPos#3/29 )/14 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#2/5 } Tile{ HalfReuse: (/10 AsIs: (/11 Reuse: # Include/19 AsIs: t.FilePos#3/20 AsIs: e.FileName#3/24 AsIs: )/12 HalfReuse: )/13 } Tile{ AsIs: e.Tokens#1/22 } Tile{ ]] }
      refalrts::reinit_open_bracket(context[10]);
      refalrts::update_ident(context[19], identifiers[ident_Include]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::link_brackets( context[10], context[13] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[10], context[13] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Include:1/4 t.ErrorList#2/5 (/9 e.Tokens#1/22 )/10 (/11 # TkCompound/19 t.FilePos#3/20 e.FileName#3/24 )/12 t.Unexpected#3/13 >/1
    context[22] = context[15];
    context[23] = context[16];
    context[24] = context[17];
    context[25] = context[18];
    // closed e.Tokens#1 as range 22
    // closed e.FileName#3 as range 24
    //DEBUG: t.ErrorList#2: 5
    //DEBUG: t.FilePos#3: 20
    //DEBUG: t.Unexpected#3: 13
    //DEBUG: e.Tokens#1: 22
    //DEBUG: e.FileName#3: 24

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 AsIs: t.ErrorList#2/5 } Tile{ AsIs: t.Unexpected#3/13 HalfReuse: '\''/1 }";\'"/26 Tile{ HalfReuse: >/9 } Tile{ HalfReuse: (/10 AsIs: (/11 Reuse: # Include/19 AsIs: t.FilePos#3/20 AsIs: e.FileName#3/24 AsIs: )/12 } )/28 t.Unexpected#3/13/29 Tile{ AsIs: e.Tokens#1/22 } Tile{ ]] }
    refalrts::alloc_chars(vm, context[26], context[27], ";\'", 2);
    refalrts::alloc_close_bracket(vm, context[28]);
    refalrts::copy_evar(vm, context[29], context[30], context[13], context[14]);
    refalrts::update_name(context[4], functions[efunc_UnexpectedToken]);
    refalrts::reinit_char(context[1], '\'');
    refalrts::reinit_close_call(context[9]);
    refalrts::reinit_open_bracket(context[10]);
    refalrts::update_ident(context[19], identifiers[ident_Include]);
    refalrts::link_brackets( context[10], context[28] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[28], context[30] );
    res = refalrts::splice_evar( res, context[10], context[12] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[13], context[1] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Include:1/4 t.ErrorList#2/5 (/9 e.Tokens#1/7 )/10 t.Unexpected1#3/11 t.Unexpected2#3/13 >/1
  // closed e.Tokens#1 as range 7
  //DEBUG: t.ErrorList#2: 5
  //DEBUG: t.Unexpected1#3: 11
  //DEBUG: t.Unexpected2#3: 13
  //DEBUG: e.Tokens#1: 7

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 AsIs: t.ErrorList#2/5 } t.Unexpected1#3/11/15"compound symbol"/17 Tile{ AsIs: >/1 } Tile{ AsIs: (/9 } Tile{ AsIs: )/10 AsIs: t.Unexpected1#3/11 AsIs: t.Unexpected2#3/13 } Tile{ AsIs: e.Tokens#1/7 } Tile{ ]] }
  refalrts::copy_evar(vm, context[15], context[16], context[11], context[12]);
  refalrts::alloc_chars(vm, context[17], context[18], "compound symbol", 15);
  refalrts::update_name(context[4], functions[efunc_UnexpectedToken]);
  refalrts::link_brackets( context[9], context[10] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[10], context[14] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[15], context[18] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Include_B1("Include:1", COOKIE1_, COOKIE2_, func_gen_Include_B1);


static refalrts::FnResult func_gen_Include_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  // </0 & Include=1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Include=1/4 (/7 e.new#1/5 )/8 t.new#2/9 t.new#3/11 t.new#4/13 >/1
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
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & Include=1/4 (/7 e.new#9/15 )/8 (/9 # TkCompound/19 t.new#5/20 e.new#6/17 )/10 t.new#7/11 t.new#8/13 >/1
    context[15] = context[5];
    context[16] = context[6];
    context[17] = 0;
    context[18] = 0;
    if( ! refalrts::brackets_term( context[17], context[18], context[9] ) )
      continue;
    context[19] = refalrts::ident_left( identifiers[ident_TkCompound], context[17], context[18] );
    if( ! context[19] )
      continue;
    // closed e.new#9 as range 15
    context[21] = refalrts::tvar_left( context[20], context[17], context[18] );
    if( ! context[21] )
      continue;
    // closed e.new#6 as range 17
    do {
      // </0 & Include=1/4 (/7 e.Tokens#1/22 )/8 (/9 # TkCompound/19 t.0#0/20 e.2#0/24 )/10 (/11 # TkSemicolon/28 t.2#0/29 )/12 t.ErrorList#2/13 >/1
      context[22] = context[15];
      context[23] = context[16];
      context[24] = context[17];
      context[25] = context[18];
      context[26] = 0;
      context[27] = 0;
      if( ! refalrts::brackets_term( context[26], context[27], context[11] ) )
        continue;
      context[28] = refalrts::ident_left( identifiers[ident_TkSemicolon], context[26], context[27] );
      if( ! context[28] )
        continue;
      // closed e.Tokens#1 as range 22
      // closed e.2#0 as range 24
      context[30] = refalrts::tvar_left( context[29], context[26], context[27] );
      if( ! context[30] )
        continue;
      if( ! refalrts::empty_seq( context[26], context[27] ) )
        continue;
      //DEBUG: t.0#0: 20
      //DEBUG: t.ErrorList#2: 13
      //DEBUG: e.Tokens#1: 22
      //DEBUG: e.2#0: 24
      //DEBUG: t.2#0: 29

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & Include=1/4 (/7 {REMOVED TILE} {REMOVED TILE} # TkSemicolon/28 t.2#0/29 )/12 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#2/13 } Tile{ HalfReuse: (/8 AsIs: (/9 Reuse: # Include/19 AsIs: t.0#0/20 AsIs: e.2#0/24 AsIs: )/10 HalfReuse: )/11 } Tile{ AsIs: e.Tokens#1/22 } Tile{ ]] }
      refalrts::reinit_open_bracket(context[8]);
      refalrts::update_ident(context[19], identifiers[ident_Include]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[8], context[11] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Include=1/4 (/7 e.Tokens#1/22 )/8 (/9 # TkCompound/19 t.0#0/20 e.1#0/24 )/10 t.Token2#1/11 t.ErrorList#2/13 >/1
    context[22] = context[15];
    context[23] = context[16];
    context[24] = context[17];
    context[25] = context[18];
    // closed e.Tokens#1 as range 22
    // closed e.1#0 as range 24
    //DEBUG: t.0#0: 20
    //DEBUG: t.Token2#1: 11
    //DEBUG: t.ErrorList#2: 13
    //DEBUG: e.Tokens#1: 22
    //DEBUG: e.1#0: 24

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 } Tile{ AsIs: t.ErrorList#2/13 } Tile{ AsIs: t.Token2#1/11 } Tile{ HalfReuse: '\''/7 }";\'"/26 Tile{ AsIs: >/1 } Tile{ HalfReuse: (/8 AsIs: (/9 Reuse: # Include/19 AsIs: t.0#0/20 AsIs: e.1#0/24 AsIs: )/10 } )/28 t.Token2#1/11/29 Tile{ AsIs: e.Tokens#1/22 } Tile{ ]] }
    refalrts::alloc_chars(vm, context[26], context[27], ";\'", 2);
    refalrts::alloc_close_bracket(vm, context[28]);
    refalrts::copy_evar(vm, context[29], context[30], context[11], context[12]);
    refalrts::update_name(context[4], functions[efunc_UnexpectedToken]);
    refalrts::reinit_char(context[7], '\'');
    refalrts::reinit_open_bracket(context[8]);
    refalrts::update_ident(context[19], identifiers[ident_Include]);
    refalrts::link_brackets( context[8], context[28] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[28], context[30] );
    res = refalrts::splice_evar( res, context[8], context[10] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Include=1/4 (/7 e.Tokens#1/5 )/8 t.Token1#1/9 t.Token2#1/11 t.ErrorList#2/13 >/1
  // closed e.Tokens#1 as range 5
  //DEBUG: t.Token1#1: 9
  //DEBUG: t.Token2#1: 11
  //DEBUG: t.ErrorList#2: 13
  //DEBUG: e.Tokens#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 } Tile{ AsIs: t.ErrorList#2/13 } t.Token1#1/9/15"compound symbol"/17 Tile{ AsIs: >/1 } Tile{ AsIs: (/7 } Tile{ AsIs: )/8 AsIs: t.Token1#1/9 AsIs: t.Token2#1/11 } Tile{ AsIs: e.Tokens#1/5 } Tile{ ]] }
  refalrts::copy_evar(vm, context[15], context[16], context[9], context[10]);
  refalrts::alloc_chars(vm, context[17], context[18], "compound symbol", 15);
  refalrts::update_name(context[4], functions[efunc_UnexpectedToken]);
  refalrts::link_brackets( context[7], context[8] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[12] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[15], context[18] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Include_A1("Include=1", COOKIE1_, COOKIE2_, func_gen_Include_A1);


static refalrts::FnResult func_Include(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </14 & Include=1/15 (/16 Tile{ AsIs: e.Tokens#1/2 } )/17 Tile{ AsIs: t.Token1#1/10 AsIs: t.Token2#1/12 } Tile{ AsIs: </0 Reuse: & ClassicError/4 AsIs: t.ErrorList#1/5 AsIs: s.Mode#1/7 AsIs: t.Pos#1/8 }"$INCLUDE is extension"/18 >/20 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_Include_A1]);
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::alloc_close_bracket(vm, context[17]);
  refalrts::alloc_chars(vm, context[18], context[19], "$INCLUDE is extension", 21);
  refalrts::alloc_close_call(vm, context[20]);
  refalrts::update_name(context[4], functions[efunc_ClassicError]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[18], context[20] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[10], context[13] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[14], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Include("Include", COOKIE1_, COOKIE2_, func_Include);


static refalrts::FnResult func_gen_Specialization_S1A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & Specialization$1=2/4 t.Pos#1/5 (/9 e.Name#1/7 )/10 (/13 e.Pattern#2/11 )/14 t.ErrorList#3/15 e.Tokens#3/2 >/1
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
  // closed e.Name#1 as range 7
  // closed e.Pattern#2 as range 11
  context[16] = refalrts::tvar_left( context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tokens#3 as range 2
  //DEBUG: t.Pos#1: 5
  //DEBUG: e.Name#1: 7
  //DEBUG: e.Pattern#2: 11
  //DEBUG: t.ErrorList#3: 15
  //DEBUG: e.Tokens#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#3/15 } Tile{ AsIs: (/13 } Tile{ HalfReuse: (/0 HalfReuse: # Spec/4 AsIs: t.Pos#1/5 AsIs: (/9 AsIs: e.Name#1/7 AsIs: )/10 } Tile{ AsIs: e.Pattern#2/11 } Tile{ AsIs: )/14 } Tile{ HalfReuse: )/1 } Tile{ AsIs: e.Tokens#3/2 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_Spec]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[13], context[1] );
  refalrts::link_brackets( context[0], context[14] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[0], context[10] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Specialization_S1A2("Specialization$1=2", COOKIE1_, COOKIE2_, func_gen_Specialization_S1A2);


static refalrts::FnResult func_gen_Specialization_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & Specialization$1=1/4 t.Pos#1/5 (/9 e.Name#1/7 )/10 t.ErrorList#2/11 (/15 e.Pattern#2/13 )/16 e.Tokens#2/2 >/1
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
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.Pattern#2 as range 13
  // closed e.Tokens#2 as range 2
  //DEBUG: t.Pos#1: 5
  //DEBUG: e.Name#1: 7
  //DEBUG: t.ErrorList#2: 11
  //DEBUG: e.Pattern#2: 13
  //DEBUG: e.Tokens#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Specialization$1=2/4 AsIs: t.Pos#1/5 AsIs: (/9 AsIs: e.Name#1/7 AsIs: )/10 } Tile{ AsIs: (/15 AsIs: e.Pattern#2/13 AsIs: )/16 } </17 & Expect/18 Tile{ AsIs: t.ErrorList#2/11 } # TkSemicolon/19 (/20"missed semicolon"/21 )/23 Tile{ AsIs: e.Tokens#2/2 } >/24 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[17]);
  refalrts::alloc_name(vm, context[18], functions[efunc_Expect]);
  refalrts::alloc_ident(vm, context[19], identifiers[ident_TkSemicolon]);
  refalrts::alloc_open_bracket(vm, context[20]);
  refalrts::alloc_chars(vm, context[21], context[22], "missed semicolon", 16);
  refalrts::alloc_close_bracket(vm, context[23]);
  refalrts::alloc_close_call(vm, context[24]);
  refalrts::update_name(context[4], functions[efunc_gen_Specialization_S1A2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[24] );
  refalrts::push_stack( vm, context[17] );
  refalrts::link_brackets( context[20], context[23] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[24], context[24] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[19], context[23] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Specialization_S1A1("Specialization$1=1", COOKIE1_, COOKIE2_, func_gen_Specialization_S1A1);


static refalrts::FnResult func_Specialization(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & Specialization/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Specialization/4 t.new#1/5 s.new#2/7 t.new#3/8 t.new#4/10 e.new#5/2 >/1
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
  // closed e.new#5 as range 2
  do {
    // </0 & Specialization/4 t.ErrorList#1/5 s.Mode#1/7 t.Pos#1/8 (/10 # TkName/16 t.NamePos#1/17 e.Name#1/14 )/11 e.Tokens#1/12 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[14] = 0;
    context[15] = 0;
    if( ! refalrts::brackets_term( context[14], context[15], context[10] ) )
      continue;
    context[16] = refalrts::ident_left( identifiers[ident_TkName], context[14], context[15] );
    if( ! context[16] )
      continue;
    // closed e.Tokens#1 as range 12
    context[18] = refalrts::tvar_left( context[17], context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.Name#1 as range 14
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: t.Pos#1: 8
    //DEBUG: s.Mode#1: 7
    //DEBUG: e.Tokens#1: 12
    //DEBUG: t.NamePos#1: 17
    //DEBUG: e.Name#1: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.NamePos#1/17 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </19 Tile{ HalfReuse: & Specialization$1=1/16 } Tile{ AsIs: t.Pos#1/8 AsIs: (/10 } Tile{ AsIs: e.Name#1/14 } Tile{ AsIs: )/11 } Tile{ AsIs: </0 Reuse: & Pattern/4 AsIs: t.ErrorList#1/5 AsIs: s.Mode#1/7 } Tile{ AsIs: e.Tokens#1/12 } >/20 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_close_call(vm, context[20]);
    refalrts::reinit_name(context[16], functions[efunc_gen_Specialization_S1A1]);
    refalrts::update_name(context[4], functions[efunc_Pattern]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[10], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[8], context[10] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Specialization/4 t.ErrorList#1/5 s.Mode#1/7 t.Pos#1/8 t.Unexpected#1/10 e.Tokens#1/2 >/1
  // closed e.Tokens#1 as range 2
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: t.Pos#1: 8
  //DEBUG: t.Unexpected#1: 10
  //DEBUG: s.Mode#1: 7
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Mode#1/7 t.Pos#1/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 AsIs: t.ErrorList#1/5 } Tile{ AsIs: t.Unexpected#1/10 }"function name"/12 Tile{ AsIs: >/1 } (/14 )/15 Tile{ AsIs: e.Tokens#1/2 } Tile{ ]] }
  refalrts::alloc_chars(vm, context[12], context[13], "function name", 13);
  refalrts::alloc_open_bracket(vm, context[14]);
  refalrts::alloc_close_bracket(vm, context[15]);
  refalrts::update_name(context[4], functions[efunc_UnexpectedToken]);
  refalrts::link_brackets( context[14], context[15] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::splice_to_freelist_open( vm, context[6], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Specialization("Specialization", COOKIE1_, COOKIE2_, func_Specialization);


static refalrts::FnResult func_Expect(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & Expect/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Expect/4 t.new#1/5 s.new#2/7 (/10 e.new#3/8 )/11 t.new#4/12 e.new#5/2 >/1
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
  // closed e.new#3 as range 8
  context[13] = refalrts::tvar_left( context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#5 as range 2
  do {
    // </0 & Expect/4 t.ErrorList#1/5 s.Expected#1/7 (/10 e.ExpectedText#1/14 )/11 (/12 s.Expected#1/20 t.SrcPos#1/21 )/13 e.Tokens#1/16 >/1
    context[14] = context[8];
    context[15] = context[9];
    context[16] = context[2];
    context[17] = context[3];
    context[18] = 0;
    context[19] = 0;
    if( ! refalrts::brackets_term( context[18], context[19], context[12] ) )
      continue;
    if( ! refalrts::repeated_stvar_left( vm, context[20], context[7], context[18], context[19] ) )
      continue;
    // closed e.ExpectedText#1 as range 14
    // closed e.Tokens#1 as range 16
    context[22] = refalrts::tvar_left( context[21], context[18], context[19] );
    if( ! context[22] )
      continue;
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: s.Expected#1: 7
    //DEBUG: e.ExpectedText#1: 14
    //DEBUG: e.Tokens#1: 16
    //DEBUG: t.SrcPos#1: 21

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Expect/4 {REMOVED TILE} s.Expected#1/7 (/10 e.ExpectedText#1/14 )/11 (/12 s.Expected#1/20 t.SrcPos#1/21 )/13 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: e.Tokens#1/16 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Expect/4 t.ErrorList#1/5 s.Expected#1/7 (/10 e.ExpectedText#1/8 )/11 t.Unexpected#1/12 e.Tokens#1/2 >/1
  // closed e.ExpectedText#1 as range 8
  // closed e.Tokens#1 as range 2
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: t.Unexpected#1: 12
  //DEBUG: s.Expected#1: 7
  //DEBUG: e.ExpectedText#1: 8
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Expected#1/7 (/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 AsIs: t.ErrorList#1/5 } t.Unexpected#1/12/14 Tile{ AsIs: e.ExpectedText#1/8 } Tile{ HalfReuse: >/11 AsIs: t.Unexpected#1/12 } Tile{ AsIs: e.Tokens#1/2 } Tile{ ]] }
  refalrts::copy_evar(vm, context[14], context[15], context[12], context[13]);
  refalrts::update_name(context[4], functions[efunc_UnexpectedToken]);
  refalrts::reinit_close_call(context[11]);
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[13] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  refalrts::splice_to_freelist_open( vm, context[6], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Expect("Expect", COOKIE1_, COOKIE2_, func_Expect);


static refalrts::FnResult func_Function(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 46 elems
  refalrts::Iter context[46];
  refalrts::zeros( context, 46 );
  // </0 & Function/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Function/4 t.new#1/5 s.new#2/7 (/10 s.new#3/12 t.new#4/13 e.new#5/8 )/11 e.new#6/2 >/1
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
  // closed e.new#6 as range 2
  if( ! refalrts::svar_left( context[12], context[8], context[9] ) )
    return refalrts::cRecognitionImpossible;
  context[14] = refalrts::tvar_left( context[13], context[8], context[9] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#5 as range 8
  do {
    // </0 & Function/4 t.new#7/5 s.new#8/7 (/10 # TkEntry/12 t.new#12/13 )/11 (/19 # TkName/21 t.new#9/22 e.new#10/17 )/20 e.new#11/15 >/1
    context[15] = context[2];
    context[16] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_TkEntry], context[12] ) )
      continue;
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[15], context[16] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = refalrts::ident_left( identifiers[ident_TkName], context[17], context[18] );
    if( ! context[21] )
      continue;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      continue;
    // closed e.new#11 as range 15
    context[23] = refalrts::tvar_left( context[22], context[17], context[18] );
    if( ! context[23] )
      continue;
    // closed e.new#10 as range 17
    do {
      // </0 & Function/4 t.ErrorList#1/5 s.Mode#1/7 (/10 # TkEntry/12 t.EntryPos#1/13 )/11 (/19 # TkName/21 t.NamePos#1/22 e.Name#1/24 )/20 (/30 s.Punctuation#1/32 t.PunctPos#1/33 )/31 e.Tokens#1/26 >/1
      context[24] = context[17];
      context[25] = context[18];
      context[26] = context[15];
      context[27] = context[16];
      context[28] = 0;
      context[29] = 0;
      context[30] = refalrts::brackets_left( context[28], context[29], context[26], context[27] );
      if( ! context[30] )
        continue;
      refalrts::bracket_pointers(context[30], context[31]);
      // closed e.Name#1 as range 24
      // closed e.Tokens#1 as range 26
      if( ! refalrts::svar_left( context[32], context[28], context[29] ) )
        continue;
      context[34] = refalrts::tvar_left( context[33], context[28], context[29] );
      if( ! context[34] )
        continue;
      if( ! refalrts::empty_seq( context[28], context[29] ) )
        continue;
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: t.EntryPos#1: 13
      //DEBUG: t.NamePos#1: 22
      //DEBUG: s.Mode#1: 7
      //DEBUG: e.Name#1: 24
      //DEBUG: e.Tokens#1: 26
      //DEBUG: s.Punctuation#1: 32
      //DEBUG: t.PunctPos#1: 33
      //5: t.ErrorList#1
      //7: s.Mode#1
      //13: t.EntryPos#1
      //22: t.NamePos#1
      //24: e.Name#1
      //26: e.Tokens#1
      //32: s.Punctuation#1
      //33: t.PunctPos#1
      //40: s.Punctuation#1

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[35]);
      refalrts::alloc_name(vm, context[37], functions[efunc_gen_Function_S1C1]);
      refalrts::alloc_open_call(vm, context[38]);
      refalrts::alloc_name(vm, context[39], functions[efunc_OneOf]);
      refalrts::copy_stvar(vm, context[40], context[32]);
      refalrts::alloc_ident(vm, context[41], identifiers[ident_TkComma]);
      refalrts::alloc_ident(vm, context[42], identifiers[ident_TkSemicolon]);
      refalrts::alloc_close_call(vm, context[43]);
      refalrts::alloc_close_call(vm, context[36]);
      refalrts::push_stack( vm, context[36] );
      refalrts::push_stack( vm, context[35] );
      res = refalrts::splice_elem( res, context[36] );
      refalrts::push_stack( vm, context[43] );
      refalrts::push_stack( vm, context[38] );
      res = refalrts::splice_elem( res, context[43] );
      res = refalrts::splice_elem( res, context[42] );
      res = refalrts::splice_elem( res, context[41] );
      res = refalrts::splice_stvar( res, context[40] );
      res = refalrts::splice_elem( res, context[39] );
      res = refalrts::splice_elem( res, context[38] );
      res = refalrts::splice_elem( res, context[37] );
      res = refalrts::splice_elem( res, context[35] );
      refalrts::use( res );
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function(vm);
      do {
        // </35 & Function$1?1/39 # True/40 >/36
        context[37] = 0;
        context[38] = 0;
        context[39] = refalrts::call_left( context[37], context[38], context[35], context[36] );
        context[40] = refalrts::ident_left( identifiers[ident_True], context[37], context[38] );
        if( ! context[40] )
          continue;
        if( ! refalrts::empty_seq( context[37], context[38] ) )
          continue;
        //DEBUG: t.ErrorList#1: 5
        //DEBUG: t.EntryPos#1: 13
        //DEBUG: t.NamePos#1: 22
        //DEBUG: s.Mode#1: 7
        //DEBUG: e.Name#1: 24
        //DEBUG: e.Tokens#1: 26
        //DEBUG: s.Punctuation#1: 32
        //DEBUG: t.PunctPos#1: 33

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } </41 & NameList/42 Tile{ AsIs: </0 Reuse: & ClassicError/4 AsIs: t.ErrorList#1/5 AsIs: s.Mode#1/7 } Tile{ AsIs: t.EntryPos#1/13 } 'E'/43 Tile{ HalfReuse: 'n'/10 HalfReuse: 't'/12 }"ry list is an extens"/44 Tile{ HalfReuse: 'i'/39 HalfReuse: 'o'/40 HalfReuse: 'n'/36 AsIs: >/1 } Tile{ HalfReuse: # TkEntryL/11 AsIs: (/19 AsIs: # TkName/21 AsIs: t.NamePos#1/22 AsIs: e.Name#1/24 AsIs: )/20 AsIs: (/30 AsIs: s.Punctuation#1/32 AsIs: t.PunctPos#1/33 AsIs: )/31 AsIs: e.Tokens#1/26 HalfReuse: >/35 } Tile{ ]] }
        refalrts::alloc_open_call(vm, context[41]);
        refalrts::alloc_name(vm, context[42], functions[efunc_NameList]);
        refalrts::alloc_char(vm, context[43], 'E');
        refalrts::alloc_chars(vm, context[44], context[45], "ry list is an extens", 20);
        refalrts::update_name(context[4], functions[efunc_ClassicError]);
        refalrts::reinit_char(context[10], 'n');
        refalrts::reinit_char(context[12], 't');
        refalrts::reinit_char(context[39], 'i');
        refalrts::reinit_char(context[40], 'o');
        refalrts::reinit_char(context[36], 'n');
        refalrts::reinit_ident(context[11], identifiers[ident_TkEntryL]);
        refalrts::reinit_close_call(context[35]);
        refalrts::push_stack( vm, context[35] );
        refalrts::push_stack( vm, context[41] );
        refalrts::link_brackets( context[30], context[31] );
        refalrts::link_brackets( context[19], context[20] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[11], context[35] );
        res = refalrts::splice_evar( res, context[39], context[1] );
        res = refalrts::splice_evar( res, context[44], context[45] );
        res = refalrts::splice_evar( res, context[10], context[12] );
        res = refalrts::splice_evar( res, context[43], context[43] );
        res = refalrts::splice_evar( res, context[13], context[14] );
        res = refalrts::splice_evar( res, context[0], context[7] );
        res = refalrts::splice_evar( res, context[41], context[42] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[35], context[36]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Function/4 t.ErrorList#1/5 s.Mode#1/7 (/10 # TkEntry/12 t.EntryPos#1/13 )/11 (/19 # TkName/21 t.NamePos#1/22 e.Name#1/24 )/20 e.Tokens#1/26 >/1
    context[24] = context[17];
    context[25] = context[18];
    context[26] = context[15];
    context[27] = context[16];
    // closed e.Name#1 as range 24
    // closed e.Tokens#1 as range 26
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: t.EntryPos#1: 13
    //DEBUG: t.NamePos#1: 22
    //DEBUG: s.Mode#1: 7
    //DEBUG: e.Name#1: 24
    //DEBUG: e.Tokens#1: 26

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.NamePos#1/22 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </10 HalfReuse: & Function-AfterBlock/12 AsIs: t.EntryPos#1/13 HalfReuse: (/11 } Tile{ AsIs: e.Name#1/24 } Tile{ HalfReuse: )/19 Reuse: # GN-Entry/21 } Tile{ AsIs: </0 Reuse: & Block/4 AsIs: t.ErrorList#1/5 AsIs: s.Mode#1/7 } Tile{ AsIs: e.Tokens#1/26 } Tile{ HalfReuse: >/20 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_open_call(context[10]);
    refalrts::reinit_name(context[12], functions[efunc_Functionm_AfterBlock]);
    refalrts::reinit_open_bracket(context[11]);
    refalrts::reinit_close_bracket(context[19]);
    refalrts::update_ident(context[21], identifiers[ident_GNm_Entry]);
    refalrts::update_name(context[4], functions[efunc_Block]);
    refalrts::reinit_close_call(context[20]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[11], context[19] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[19], context[21] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Function/4 t.ErrorList#1/5 s.Mode#1/7 (/10 # TkName/12 t.Pos#1/13 e.Name#1/15 )/11 e.Tokens#1/17 >/1
    context[15] = context[8];
    context[16] = context[9];
    context[17] = context[2];
    context[18] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_TkName], context[12] ) )
      continue;
    // closed e.Name#1 as range 15
    // closed e.Tokens#1 as range 17
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: t.Pos#1: 13
    //DEBUG: s.Mode#1: 7
    //DEBUG: e.Name#1: 15
    //DEBUG: e.Tokens#1: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </10 HalfReuse: & Function-AfterBlock/12 AsIs: t.Pos#1/13 } (/19 Tile{ AsIs: e.Name#1/15 } Tile{ AsIs: )/11 } # GN-Local/20 Tile{ AsIs: </0 Reuse: & Block/4 AsIs: t.ErrorList#1/5 AsIs: s.Mode#1/7 } Tile{ AsIs: e.Tokens#1/17 } >/21 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[19]);
    refalrts::alloc_ident(vm, context[20], identifiers[ident_GNm_Local]);
    refalrts::alloc_close_call(vm, context[21]);
    refalrts::reinit_open_call(context[10]);
    refalrts::reinit_name(context[12], functions[efunc_Functionm_AfterBlock]);
    refalrts::update_name(context[4], functions[efunc_Block]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[0] );
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
  refalrts::stop_sentence(vm);

  // </0 & Function/4 t.new#7/5 s.new#8/7 (/10 # TkEntry/12 t.new#10/13 )/11 e.new#9/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_TkEntry], context[12] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[8], context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#9 as range 2
  do {
    // </0 & Function/4 t.ErrorList#1/5 s.Mode#1/7 (/10 # TkEntry/12 t.EntryPos#1/13 )/11 (/19 # TkRefal5Mode/21 t.ModePos#1/22 s.NewMode#1/24 )/20 e.Tokens#1/15 >/1
    context[15] = context[2];
    context[16] = context[3];
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[15], context[16] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = refalrts::ident_left( identifiers[ident_TkRefal5Mode], context[17], context[18] );
    if( ! context[21] )
      continue;
    // closed e.Tokens#1 as range 15
    context[23] = refalrts::tvar_left( context[22], context[17], context[18] );
    if( ! context[23] )
      continue;
    if( ! refalrts::svar_left( context[24], context[17], context[18] ) )
      continue;
    if( ! refalrts::empty_seq( context[17], context[18] ) )
      continue;
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: t.EntryPos#1: 13
    //DEBUG: s.Mode#1: 7
    //DEBUG: e.Tokens#1: 15
    //DEBUG: t.ModePos#1: 22
    //DEBUG: s.NewMode#1: 24

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Mode#1/7 {REMOVED TILE} )/11 (/19 # TkRefal5Mode/21 t.ModePos#1/22 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Function/4 AsIs: t.ErrorList#1/5 } Tile{ AsIs: s.NewMode#1/24 } Tile{ AsIs: (/10 AsIs: # TkEntry/12 AsIs: t.EntryPos#1/13 } Tile{ AsIs: )/20 AsIs: e.Tokens#1/15 AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[10], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[20];
    res = refalrts::splice_evar( res, context[10], context[14] );
    res = refalrts::splice_evar( res, context[24], context[24] );
    refalrts::splice_to_freelist_open( vm, context[6], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Function/4 t.ErrorList#1/5 s.Mode#1/7 (/10 # TkEntry/12 t.Pos#1/13 )/11 e.Tokens#1/2 >/1
  // closed e.Tokens#1 as range 2
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: t.Pos#1: 13
  //DEBUG: s.Mode#1: 7
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Mode#1/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#1/5 } Tile{ AsIs: t.Pos#1/13 HalfReuse: '$'/11 }"ENTRY without function name, skipped"/15 Tile{ AsIs: >/1 } Tile{ AsIs: (/10 HalfReuse: )/12 } Tile{ AsIs: e.Tokens#1/2 } Tile{ ]] }
  refalrts::alloc_chars(vm, context[15], context[16], "ENTRY without function name, skipped", 36);
  refalrts::update_name(context[4], functions[efunc_ELm_AddErrorAt]);
  refalrts::reinit_char(context[11], '$');
  refalrts::reinit_close_bracket(context[12]);
  refalrts::link_brackets( context[10], context[12] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[10], context[12] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[13], context[11] );
  refalrts::splice_to_freelist_open( vm, context[6], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Function("Function", COOKIE1_, COOKIE2_, func_Function);


static refalrts::FnResult func_Functionm_AfterBlock(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/12 AsIs: (/16 } Tile{ HalfReuse: (/0 HalfReuse: # Function/4 AsIs: t.Pos#1/5 } Tile{ AsIs: s.Scope#1/11 } Tile{ AsIs: (/9 AsIs: e.Name#1/7 AsIs: )/10 } Tile{ AsIs: e.Body#1/14 } Tile{ HalfReuse: )/1 } Tile{ AsIs: )/17 } Tile{ AsIs: e.Tokens#1/2 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_Function]);
  refalrts::reinit_close_bracket(context[1]);
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

static refalrts::NativeReference nat_ref_Functionm_AfterBlock("Function-AfterBlock", COOKIE1_, COOKIE2_, func_Functionm_AfterBlock);


static refalrts::FnResult func_gen_Block_S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ClassicError/4 } Tile{ AsIs: t.ErrorList#2/16 } Tile{ AsIs: s.Mode#1/5 AsIs: t.NativePos#1/6 HalfReuse: 'N'/10 } Tile{ HalfReuse: 'a'/1 }"tive code insertion is an extension"/18 Tile{ HalfReuse: >/11 AsIs: (/14 } # NativeBody/20 t.NativePos#1/6/21 Tile{ AsIs: e.Code#1/8 } Tile{ AsIs: )/15 } Tile{ AsIs: e.NextToken#2/2 } Tile{ AsIs: e.Tokens#1/12 } Tile{ ]] }
  refalrts::alloc_chars(vm, context[18], context[19], "tive code insertion is an extension", 35);
  refalrts::alloc_ident(vm, context[20], identifiers[ident_NativeBody]);
  refalrts::copy_evar(vm, context[21], context[22], context[6], context[7]);
  refalrts::update_name(context[4], functions[efunc_ClassicError]);
  refalrts::reinit_char(context[10], 'N');
  refalrts::reinit_char(context[1], 'a');
  refalrts::reinit_close_call(context[11]);
  refalrts::link_brackets( context[14], context[15] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[0] );
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

static refalrts::NativeReference nat_ref_gen_Block_S2A1("Block$2=1", COOKIE1_, COOKIE2_, func_gen_Block_S2A1);


static refalrts::FnResult func_gen_Block_S2A1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & Block$2=1:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Block$2=1:1/4 t.new#1/5 t.new#2/7 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & Block$2=1:1/4 t.ErrorList#1/5 (/7 # TkCloseBlock/11 t.Pos#2/12 )/8 >/1
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[7] ) )
      continue;
    context[11] = refalrts::ident_left( identifiers[ident_TkCloseBlock], context[9], context[10] );
    if( ! context[11] )
      continue;
    context[13] = refalrts::tvar_left( context[12], context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: t.Pos#2: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Block$2=1:1/4 {REMOVED TILE} (/7 # TkCloseBlock/11 t.Pos#2/12 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/5 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Block$2=1:1/4 t.ErrorList#1/5 t.Unexpected#2/7 >/1
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: t.Unexpected#2: 7

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 AsIs: t.ErrorList#1/5 AsIs: t.Unexpected#2/7 HalfReuse: '\''/1 }"}\'"/9 >/11 t.Unexpected#2/7/12 Tile{ ]] }
  refalrts::alloc_chars(vm, context[9], context[10], "}\'", 2);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::copy_evar(vm, context[12], context[13], context[7], context[8]);
  refalrts::update_name(context[4], functions[efunc_UnexpectedToken]);
  refalrts::reinit_char(context[1], '\'');
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Block_S2A1B1("Block$2=1:1", COOKIE1_, COOKIE2_, func_gen_Block_S2A1B1);


static refalrts::FnResult func_Block(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 47 elems
  refalrts::Iter context[47];
  refalrts::zeros( context, 47 );
  // </0 & Block/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Block/4 t.new#1/5 s.new#2/7 t.new#3/8 e.new#4/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[9] = refalrts::tvar_left( context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 2
  do {
    // </0 & Block/4 t.new#5/5 s.new#6/7 (/8 s.new#7/14 e.new#8/12 t.new#9/15 )/9 e.new#10/10 >/1
    context[10] = context[2];
    context[11] = context[3];
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_term( context[12], context[13], context[8] ) )
      continue;
    // closed e.new#10 as range 10
    if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
      continue;
    context[16] = refalrts::tvar_right( context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    // closed e.new#8 as range 12
    do {
      // </0 & Block/4 t.new#11/5 s.new#12/7 (/8 # TkOpenBlock/14 t.new#13/15 )/9 e.new#14/17 >/1
      context[17] = context[10];
      context[18] = context[11];
      if( ! refalrts::ident_term( identifiers[ident_TkOpenBlock], context[14] ) )
        continue;
      if( ! refalrts::empty_seq( context[12], context[13] ) )
        continue;
      // closed e.new#14 as range 17
      do {
        // </0 & Block/4 t.new#15/5 s.new#16/7 (/8 # TkOpenBlock/14 t.new#17/15 )/9 (/23 s.new#18/25 t.new#19/26 e.new#20/21 )/24 e.new#21/19 >/1
        context[19] = context[17];
        context[20] = context[18];
        context[21] = 0;
        context[22] = 0;
        context[23] = refalrts::brackets_left( context[21], context[22], context[19], context[20] );
        if( ! context[23] )
          continue;
        refalrts::bracket_pointers(context[23], context[24]);
        // closed e.new#21 as range 19
        if( ! refalrts::svar_left( context[25], context[21], context[22] ) )
          continue;
        context[27] = refalrts::tvar_left( context[26], context[21], context[22] );
        if( ! context[27] )
          continue;
        // closed e.new#20 as range 21
        do {
          // </0 & Block/4 t.ErrorList#1/5 s.Mode#1/7 (/8 # TkOpenBlock/14 t.OpenPos#1/15 )/9 (/23 # TkCloseBlock/25 t.ClosePos#1/26 )/24 e.Tokens#1/28 >/1
          context[28] = context[19];
          context[29] = context[20];
          if( ! refalrts::ident_term( identifiers[ident_TkCloseBlock], context[25] ) )
            continue;
          if( ! refalrts::empty_seq( context[21], context[22] ) )
            continue;
          // closed e.Tokens#1 as range 28
          //DEBUG: t.ErrorList#1: 5
          //DEBUG: t.OpenPos#1: 15
          //DEBUG: t.ClosePos#1: 26
          //DEBUG: s.Mode#1: 7
          //DEBUG: e.Tokens#1: 28

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.ClosePos#1/26 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & ClassicError/4 AsIs: t.ErrorList#1/5 AsIs: s.Mode#1/7 } Tile{ AsIs: t.OpenPos#1/15 HalfReuse: 'E'/9 HalfReuse: 'm'/23 HalfReuse: 'p'/25 }"ty function block"/30 Tile{ AsIs: >/1 } Tile{ AsIs: (/8 Reuse: # Sentences/14 } Tile{ AsIs: )/24 } Tile{ AsIs: e.Tokens#1/28 } Tile{ ]] }
          refalrts::alloc_chars(vm, context[30], context[31], "ty function block", 17);
          refalrts::update_name(context[4], functions[efunc_ClassicError]);
          refalrts::reinit_char(context[9], 'E');
          refalrts::reinit_char(context[23], 'm');
          refalrts::reinit_char(context[25], 'p');
          refalrts::update_ident(context[14], identifiers[ident_Sentences]);
          refalrts::link_brackets( context[8], context[24] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[28], context[29] );
          res = refalrts::splice_evar( res, context[24], context[24] );
          res = refalrts::splice_evar( res, context[8], context[14] );
          res = refalrts::splice_evar( res, context[1], context[1] );
          res = refalrts::splice_evar( res, context[30], context[31] );
          res = refalrts::splice_evar( res, context[15], context[25] );
          refalrts::splice_to_freelist_open( vm, context[7], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Block/4 t.new#22/5 s.new#23/7 (/8 # TkOpenBlock/14 t.new#24/15 )/9 (/23 # TkNativeCode/25 t.new#27/26 e.new#28/28 )/24 t.new#25/32 e.new#26/30 >/1
        context[28] = context[21];
        context[29] = context[22];
        context[30] = context[19];
        context[31] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_TkNativeCode], context[25] ) )
          continue;
        // closed e.new#28 as range 28
        context[33] = refalrts::tvar_left( context[32], context[30], context[31] );
        if( ! context[33] )
          continue;
        // closed e.new#26 as range 30
        do {
          // </0 & Block/4 t.ErrorList#1/5 s.Mode#1/7 (/8 # TkOpenBlock/14 t.OpenPos#1/15 )/9 (/23 # TkNativeCode/25 t.NativePos#1/26 e.Code#1/34 )/24 (/32 # TkCloseBlock/40 t.0#0/41 )/33 e.Tokens#1/36 >/1
          context[34] = context[28];
          context[35] = context[29];
          context[36] = context[30];
          context[37] = context[31];
          context[38] = 0;
          context[39] = 0;
          if( ! refalrts::brackets_term( context[38], context[39], context[32] ) )
            continue;
          context[40] = refalrts::ident_left( identifiers[ident_TkCloseBlock], context[38], context[39] );
          if( ! context[40] )
            continue;
          // closed e.Code#1 as range 34
          // closed e.Tokens#1 as range 36
          context[42] = refalrts::tvar_left( context[41], context[38], context[39] );
          if( ! context[42] )
            continue;
          if( ! refalrts::empty_seq( context[38], context[39] ) )
            continue;
          //DEBUG: t.ErrorList#1: 5
          //DEBUG: t.OpenPos#1: 15
          //DEBUG: t.NativePos#1: 26
          //DEBUG: s.Mode#1: 7
          //DEBUG: e.Code#1: 34
          //DEBUG: e.Tokens#1: 36
          //DEBUG: t.0#0: 41

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} t.OpenPos#1/15 {REMOVED TILE} {REMOVED TILE} t.0#0/41 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & ClassicError/4 AsIs: t.ErrorList#1/5 AsIs: s.Mode#1/7 } t.NativePos#1/26/43 Tile{ HalfReuse: 'N'/8 HalfReuse: 'a'/14 } Tile{ HalfReuse: 't'/33 } Tile{ HalfReuse: 'i'/32 HalfReuse: 'v'/40 } Tile{ HalfReuse: 'e'/1 }" code insertion is an extension"/45 Tile{ HalfReuse: >/9 AsIs: (/23 Reuse: # NativeBody/25 AsIs: t.NativePos#1/26 AsIs: e.Code#1/34 AsIs: )/24 } Tile{ AsIs: e.Tokens#1/36 } Tile{ ]] }
          refalrts::copy_evar(vm, context[43], context[44], context[26], context[27]);
          refalrts::alloc_chars(vm, context[45], context[46], " code insertion is an extension", 31);
          refalrts::update_name(context[4], functions[efunc_ClassicError]);
          refalrts::reinit_char(context[8], 'N');
          refalrts::reinit_char(context[14], 'a');
          refalrts::reinit_char(context[33], 't');
          refalrts::reinit_char(context[32], 'i');
          refalrts::reinit_char(context[40], 'v');
          refalrts::reinit_char(context[1], 'e');
          refalrts::reinit_close_call(context[9]);
          refalrts::update_ident(context[25], identifiers[ident_NativeBody]);
          refalrts::link_brackets( context[23], context[24] );
          refalrts::push_stack( vm, context[9] );
          refalrts::push_stack( vm, context[0] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[36], context[37] );
          res = refalrts::splice_evar( res, context[9], context[24] );
          res = refalrts::splice_evar( res, context[45], context[46] );
          res = refalrts::splice_evar( res, context[1], context[1] );
          res = refalrts::splice_evar( res, context[32], context[40] );
          res = refalrts::splice_evar( res, context[33], context[33] );
          res = refalrts::splice_evar( res, context[8], context[14] );
          res = refalrts::splice_evar( res, context[43], context[44] );
          refalrts::splice_to_freelist_open( vm, context[7], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Block/4 t.ErrorList#1/5 s.Mode#1/7 (/8 # TkOpenBlock/14 t.OpenPos#1/15 )/9 (/23 # TkNativeCode/25 t.NativePos#1/26 e.Code#1/34 )/24 t.CloseBlock#1/32 e.Tokens#1/36 >/1
        context[34] = context[28];
        context[35] = context[29];
        context[36] = context[30];
        context[37] = context[31];
        // closed e.Code#1 as range 34
        // closed e.Tokens#1 as range 36
        //DEBUG: t.ErrorList#1: 5
        //DEBUG: t.OpenPos#1: 15
        //DEBUG: t.NativePos#1: 26
        //DEBUG: t.CloseBlock#1: 32
        //DEBUG: s.Mode#1: 7
        //DEBUG: e.Code#1: 34
        //DEBUG: e.Tokens#1: 36

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.Mode#1/7 {REMOVED TILE} {REMOVED TILE} t.OpenPos#1/15 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Block$2=1/4 } Tile{ HalfReuse: s.Mode1 #7/25 AsIs: t.NativePos#1/26 } Tile{ AsIs: (/8 } Tile{ AsIs: e.Code#1/34 } Tile{ AsIs: )/9 AsIs: (/23 } Tile{ AsIs: e.Tokens#1/36 } Tile{ HalfReuse: )/14 } </38 & UnexpectedToken/39 Tile{ AsIs: t.ErrorList#1/5 } t.CloseBlock#1/32/40"\'}\'"/42 Tile{ HalfReuse: >/24 AsIs: t.CloseBlock#1/32 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[38]);
        refalrts::alloc_name(vm, context[39], functions[efunc_UnexpectedToken]);
        refalrts::copy_evar(vm, context[40], context[41], context[32], context[33]);
        refalrts::alloc_chars(vm, context[42], context[43], "\'}\'", 3);
        refalrts::update_name(context[4], functions[efunc_gen_Block_S2A1]);
        refalrts::reinit_svar( context[25], context[7] );
        refalrts::reinit_close_bracket(context[14]);
        refalrts::reinit_close_call(context[24]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[24] );
        refalrts::push_stack( vm, context[38] );
        refalrts::link_brackets( context[23], context[14] );
        refalrts::link_brackets( context[8], context[9] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[24], context[33] );
        res = refalrts::splice_evar( res, context[40], context[43] );
        res = refalrts::splice_evar( res, context[5], context[6] );
        res = refalrts::splice_evar( res, context[38], context[39] );
        res = refalrts::splice_evar( res, context[14], context[14] );
        res = refalrts::splice_evar( res, context[36], context[37] );
        res = refalrts::splice_evar( res, context[9], context[23] );
        res = refalrts::splice_evar( res, context[34], context[35] );
        res = refalrts::splice_evar( res, context[8], context[8] );
        res = refalrts::splice_evar( res, context[25], context[27] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Block/4 t.ErrorList#1/5 s.Mode#1/7 (/8 # TkOpenBlock/14 t.Pos#1/15 )/9 e.Tokens#1/19 >/1
      context[19] = context[17];
      context[20] = context[18];
      // closed e.Tokens#1 as range 19
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: t.Pos#1: 15
      //DEBUG: s.Mode#1: 7
      //DEBUG: e.Tokens#1: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.Pos#1/15 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </9 } & Block-AfterSentence/21 s.Mode#1/7/22 Tile{ AsIs: (/8 HalfReuse: )/14 } Tile{ AsIs: </0 Reuse: & Sentence/4 AsIs: t.ErrorList#1/5 AsIs: s.Mode#1/7 } Tile{ AsIs: e.Tokens#1/19 } >/23 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_name(vm, context[21], functions[efunc_Blockm_AfterSentence]);
      refalrts::copy_stvar(vm, context[22], context[7]);
      refalrts::alloc_close_call(vm, context[23]);
      refalrts::reinit_open_call(context[9]);
      refalrts::reinit_close_bracket(context[14]);
      refalrts::update_name(context[4], functions[efunc_Sentence]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[9] );
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[23], context[23] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[0], context[7] );
      res = refalrts::splice_evar( res, context[8], context[14] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[9], context[9] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Block/4 t.ErrorList#1/5 s.Mode#1/7 (/8 # TkRefal5Mode/14 t.Pos#1/21 s.NewMode#1/15 )/9 e.Tokens#1/19 >/1
    context[17] = context[12];
    context[18] = context[13];
    context[19] = context[10];
    context[20] = context[11];
    if( ! refalrts::svar_term( context[15], context[15] ) )
      continue;
    if( ! refalrts::ident_term( identifiers[ident_TkRefal5Mode], context[14] ) )
      continue;
    // closed e.Tokens#1 as range 19
    context[22] = refalrts::tvar_left( context[21], context[17], context[18] );
    if( ! context[22] )
      continue;
    if( ! refalrts::empty_seq( context[17], context[18] ) )
      continue;
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: s.NewMode#1: 15
    //DEBUG: s.Mode#1: 7
    //DEBUG: e.Tokens#1: 19
    //DEBUG: t.Pos#1: 21

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Mode#1/7 (/8 # TkRefal5Mode/14 t.Pos#1/21 s.NewMode#1/15 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Block/4 AsIs: t.ErrorList#1/5 } Tile{ HalfReuse: s.NewMode1 #15/9 AsIs: e.Tokens#1/19 AsIs: >/1 ]] }
    refalrts::reinit_svar( context[9], context[15] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    refalrts::splice_to_freelist_open( vm, context[6], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Block/4 t.ErrorList#1/5 s.Mode#1/7 t.Unexpected#1/8 e.Tokens#1/2 >/1
  // closed e.Tokens#1 as range 2
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: t.Unexpected#1: 8
  //DEBUG: s.Mode#1: 7
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Mode#1/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 AsIs: t.ErrorList#1/5 } Tile{ AsIs: t.Unexpected#1/8 }"\'{\'"/10 Tile{ AsIs: >/1 } (/12 # Sentences/13 )/14 t.Unexpected#1/8/15 Tile{ AsIs: e.Tokens#1/2 } Tile{ ]] }
  refalrts::alloc_chars(vm, context[10], context[11], "\'{\'", 3);
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_ident(vm, context[13], identifiers[ident_Sentences]);
  refalrts::alloc_close_bracket(vm, context[14]);
  refalrts::copy_evar(vm, context[15], context[16], context[8], context[9]);
  refalrts::update_name(context[4], functions[efunc_UnexpectedToken]);
  refalrts::link_brackets( context[12], context[14] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[16] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  refalrts::splice_to_freelist_open( vm, context[6], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Block("Block", COOKIE1_, COOKIE2_, func_Block);


static refalrts::FnResult func_gen_Blockm_AfterSentence_S1B1S6A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Block-AfterSentence/4 AsIs: s.Mode#1/5 AsIs: (/8 } Tile{ AsIs: e.Sentences#1/6 } Tile{ AsIs: t.NextSentence#1/10 } Tile{ AsIs: )/9 } </20 Tile{ HalfReuse: & Sentence/17 AsIs: t.ErrorList#3/18 } Tile{ HalfReuse: s.Mode1 #5/16 } Tile{ AsIs: t.Token2#1/12 } Tile{ AsIs: e.Tokens#1/14 } >/21 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[20]);
  refalrts::alloc_close_call(vm, context[21]);
  refalrts::update_name(context[4], functions[efunc_Blockm_AfterSentence]);
  refalrts::reinit_name(context[17], functions[efunc_Sentence]);
  refalrts::reinit_svar( context[16], context[5] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[20] );
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

static refalrts::NativeReference nat_ref_gen_Blockm_AfterSentence_S1B1S6A1("Block-AfterSentence$1:1$6=1", COOKIE1_, COOKIE2_, func_gen_Blockm_AfterSentence_S1B1S6A1);


static refalrts::FnResult func_gen_Blockm_AfterSentence_S1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 48 elems
  refalrts::Iter context[48];
  refalrts::zeros( context, 48 );
  // </0 & Block-AfterSentence$1:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Block-AfterSentence$1:1/4 (/7 e.new#1/5 )/8 t.new#2/9 t.new#3/11 (/15 e.new#4/13 )/16 t.new#5/17 s.new#6/19 t.new#7/20 t.new#8/22 t.new#9/24 >/1
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
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.new#4 as range 13
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
    // </0 & Block-AfterSentence$1:1/4 (/7 e.new#19/26 )/8 t.new#10/9 t.new#11/11 (/15 e.new#20/28 )/16 t.new#12/17 s.new#13/19 t.new#14/20 (/22 s.new#15/32 e.new#16/30 t.new#17/33 )/23 t.new#18/24 >/1
    context[26] = context[5];
    context[27] = context[6];
    context[28] = context[13];
    context[29] = context[14];
    context[30] = 0;
    context[31] = 0;
    if( ! refalrts::brackets_term( context[30], context[31], context[22] ) )
      continue;
    // closed e.new#19 as range 26
    // closed e.new#20 as range 28
    if( ! refalrts::svar_left( context[32], context[30], context[31] ) )
      continue;
    context[34] = refalrts::tvar_right( context[33], context[30], context[31] );
    if( ! context[34] )
      continue;
    // closed e.new#16 as range 30
    do {
      // </0 & Block-AfterSentence$1:1/4 (/7 e.Sentences#1/35 )/8 t.ErrorList#1/9 t.NextSentence#1/11 (/15 e.Tokens#1/37 )/16 t.Token2#1/17 s.Mode#1/19 t.Token1#1/20 (/22 # TkSemicolon/32 t.SemicolonPos#2/33 )/23 (/24 # TkRefal5Mode/41 t.ModePos#2/42 s.NewMode#2/44 )/25 >/1
      context[35] = context[26];
      context[36] = context[27];
      context[37] = context[28];
      context[38] = context[29];
      context[39] = 0;
      context[40] = 0;
      if( ! refalrts::brackets_term( context[39], context[40], context[24] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_TkSemicolon], context[32] ) )
        continue;
      context[41] = refalrts::ident_left( identifiers[ident_TkRefal5Mode], context[39], context[40] );
      if( ! context[41] )
        continue;
      if( ! refalrts::empty_seq( context[30], context[31] ) )
        continue;
      // closed e.Sentences#1 as range 35
      // closed e.Tokens#1 as range 37
      context[43] = refalrts::tvar_left( context[42], context[39], context[40] );
      if( ! context[43] )
        continue;
      if( ! refalrts::svar_left( context[44], context[39], context[40] ) )
        continue;
      if( ! refalrts::empty_seq( context[39], context[40] ) )
        continue;
      //DEBUG: t.ErrorList#1: 9
      //DEBUG: t.NextSentence#1: 11
      //DEBUG: t.Token2#1: 17
      //DEBUG: t.Token1#1: 20
      //DEBUG: t.SemicolonPos#2: 33
      //DEBUG: s.Mode#1: 19
      //DEBUG: e.Sentences#1: 35
      //DEBUG: e.Tokens#1: 37
      //DEBUG: t.ModePos#2: 42
      //DEBUG: s.NewMode#2: 44

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/16 t.Token2#1/17 s.Mode#1/19 t.Token1#1/20 {REMOVED TILE} {REMOVED TILE} (/24 # TkRefal5Mode/41 t.ModePos#2/42 s.NewMode#2/44 )/25 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </22 } Tile{ HalfReuse: & Block-AfterSentence/0 HalfReuse: s.NewMode2 #44/4 AsIs: (/7 AsIs: e.Sentences#1/35 AsIs: )/8 AsIs: t.ErrorList#1/9 AsIs: t.NextSentence#1/11 AsIs: (/15 } Tile{ AsIs: # TkSemicolon/32 AsIs: t.SemicolonPos#2/33 AsIs: )/23 } Tile{ AsIs: e.Tokens#1/37 } Tile{ AsIs: >/1 ]] }
      refalrts::reinit_open_call(context[22]);
      refalrts::reinit_name(context[0], functions[efunc_Blockm_AfterSentence]);
      refalrts::reinit_svar( context[4], context[44] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[22] );
      refalrts::link_brackets( context[15], context[23] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[37], context[38] );
      res = refalrts::splice_evar( res, context[32], context[23] );
      res = refalrts::splice_evar( res, context[0], context[15] );
      res = refalrts::splice_evar( res, context[22], context[22] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Block-AfterSentence$1:1/4 (/7 e.Sentences#1/35 )/8 t.ErrorList#1/9 t.NextSentence#1/11 (/15 e.Tokens#1/37 )/16 t.Token2#1/17 s.Mode#1/19 t.Token1#1/20 (/22 # TkRefal5Mode/32 t.Pos#2/41 s.NewMode#2/33 )/23 t.Token2#2/24 >/1
      context[35] = context[26];
      context[36] = context[27];
      context[37] = context[28];
      context[38] = context[29];
      context[39] = context[30];
      context[40] = context[31];
      if( ! refalrts::svar_term( context[33], context[33] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_TkRefal5Mode], context[32] ) )
        continue;
      // closed e.Sentences#1 as range 35
      // closed e.Tokens#1 as range 37
      context[42] = refalrts::tvar_left( context[41], context[39], context[40] );
      if( ! context[42] )
        continue;
      if( ! refalrts::empty_seq( context[39], context[40] ) )
        continue;
      //DEBUG: t.ErrorList#1: 9
      //DEBUG: t.NextSentence#1: 11
      //DEBUG: t.Token2#1: 17
      //DEBUG: t.Token1#1: 20
      //DEBUG: t.Token2#2: 24
      //DEBUG: s.NewMode#2: 33
      //DEBUG: s.Mode#1: 19
      //DEBUG: e.Sentences#1: 35
      //DEBUG: e.Tokens#1: 37
      //DEBUG: t.Pos#2: 41

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} (/15 {REMOVED TILE} {REMOVED TILE} t.Token2#1/17 s.Mode#1/19 t.Token1#1/20 (/22 # TkRefal5Mode/32 t.Pos#2/41 s.NewMode#2/33 )/23 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </16 } Tile{ HalfReuse: & Block-AfterSentence/0 HalfReuse: s.NewMode2 #33/4 AsIs: (/7 AsIs: e.Sentences#1/35 AsIs: )/8 AsIs: t.ErrorList#1/9 AsIs: t.NextSentence#1/11 } Tile{ AsIs: t.Token2#2/24 } Tile{ AsIs: e.Tokens#1/37 } Tile{ AsIs: >/1 ]] }
      refalrts::reinit_open_call(context[16]);
      refalrts::reinit_name(context[0], functions[efunc_Blockm_AfterSentence]);
      refalrts::reinit_svar( context[4], context[33] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[16] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[37], context[38] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      res = refalrts::splice_evar( res, context[0], context[12] );
      res = refalrts::splice_evar( res, context[16], context[16] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Block-AfterSentence$1:1/4 (/7 e.new#29/35 )/8 t.new#21/9 t.new#22/11 (/15 e.new#30/37 )/16 t.new#23/17 s.new#24/19 t.new#25/20 (/22 s.new#26/32 t.new#27/33 )/23 t.new#28/24 >/1
    context[35] = context[26];
    context[36] = context[27];
    context[37] = context[28];
    context[38] = context[29];
    if( ! refalrts::empty_seq( context[30], context[31] ) )
      continue;
    // closed e.new#29 as range 35
    // closed e.new#30 as range 37
    do {
      // </0 & Block-AfterSentence$1:1/4 (/7 e.Sentences#1/39 )/8 t.ErrorList#1/9 t.NextSentence#1/11 (/15 e.Tokens#1/41 )/16 t.Token2#1/17 s.Mode#1/19 t.Token1#1/20 (/22 # TkSemicolon/32 t.Pos1#2/33 )/23 (/24 # TkCloseBlock/45 t.Pos2#2/46 )/25 >/1
      context[39] = context[35];
      context[40] = context[36];
      context[41] = context[37];
      context[42] = context[38];
      context[43] = 0;
      context[44] = 0;
      if( ! refalrts::brackets_term( context[43], context[44], context[24] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_TkSemicolon], context[32] ) )
        continue;
      context[45] = refalrts::ident_left( identifiers[ident_TkCloseBlock], context[43], context[44] );
      if( ! context[45] )
        continue;
      // closed e.Sentences#1 as range 39
      // closed e.Tokens#1 as range 41
      context[47] = refalrts::tvar_left( context[46], context[43], context[44] );
      if( ! context[47] )
        continue;
      if( ! refalrts::empty_seq( context[43], context[44] ) )
        continue;
      //DEBUG: t.ErrorList#1: 9
      //DEBUG: t.NextSentence#1: 11
      //DEBUG: t.Token2#1: 17
      //DEBUG: t.Token1#1: 20
      //DEBUG: t.Pos1#2: 33
      //DEBUG: s.Mode#1: 19
      //DEBUG: e.Sentences#1: 39
      //DEBUG: e.Tokens#1: 41
      //DEBUG: t.Pos2#2: 46

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & Block-AfterSentence$1:1/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/16 t.Token2#1/17 s.Mode#1/19 t.Token1#1/20 (/22 # TkSemicolon/32 t.Pos1#2/33 )/23 {REMOVED TILE} t.Pos2#2/46 )/25 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/9 } Tile{ AsIs: (/24 Reuse: # Sentences/45 } Tile{ AsIs: e.Sentences#1/39 } Tile{ AsIs: t.NextSentence#1/11 HalfReuse: )/15 } Tile{ AsIs: e.Tokens#1/41 } Tile{ ]] }
      refalrts::update_ident(context[45], identifiers[ident_Sentences]);
      refalrts::reinit_close_bracket(context[15]);
      refalrts::link_brackets( context[24], context[15] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[41], context[42] );
      res = refalrts::splice_evar( res, context[11], context[15] );
      res = refalrts::splice_evar( res, context[39], context[40] );
      res = refalrts::splice_evar( res, context[24], context[45] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Block-AfterSentence$1:1/4 (/7 e.Sentences#1/39 )/8 t.ErrorList#1/9 t.NextSentence#1/11 (/15 e.Tokens#1/41 )/16 t.Token2#1/17 s.Mode#1/19 t.Token1#1/20 (/22 # TkCloseBlock/32 t.Pos#2/33 )/23 t.Token2#1/24 >/1
      context[39] = context[35];
      context[40] = context[36];
      context[41] = context[37];
      context[42] = context[38];
      if( ! refalrts::repeated_stvar_term( vm, context[24], context[17] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_TkCloseBlock], context[32] ) )
        continue;
      // closed e.Sentences#1 as range 39
      // closed e.Tokens#1 as range 41
      //DEBUG: t.ErrorList#1: 9
      //DEBUG: t.NextSentence#1: 11
      //DEBUG: t.Token2#1: 17
      //DEBUG: t.Token1#1: 20
      //DEBUG: t.Pos#2: 33
      //DEBUG: s.Mode#1: 19
      //DEBUG: e.Sentences#1: 39
      //DEBUG: e.Tokens#1: 41

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & Block-AfterSentence$1:1/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} (/15 {REMOVED TILE} )/16 t.Token2#1/17 s.Mode#1/19 t.Token1#1/20 {REMOVED TILE} t.Pos#2/33 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/9 } Tile{ AsIs: (/22 Reuse: # Sentences/32 } Tile{ AsIs: e.Sentences#1/39 } Tile{ AsIs: t.NextSentence#1/11 } Tile{ AsIs: )/23 AsIs: t.Token2#1/24 } Tile{ AsIs: e.Tokens#1/41 } Tile{ ]] }
      refalrts::update_ident(context[32], identifiers[ident_Sentences]);
      refalrts::link_brackets( context[22], context[23] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[41], context[42] );
      res = refalrts::splice_evar( res, context[23], context[25] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[39], context[40] );
      res = refalrts::splice_evar( res, context[22], context[32] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Block-AfterSentence$1:1/4 (/7 e.Sentences#1/39 )/8 t.ErrorList#1/9 t.NextSentence#1/11 (/15 e.Tokens#1/41 )/16 t.Token2#1/17 s.Mode#1/19 t.Token1#1/20 (/22 # TkSemicolon/32 t.Pos#2/33 )/23 t.Token2#1/24 >/1
    context[39] = context[35];
    context[40] = context[36];
    context[41] = context[37];
    context[42] = context[38];
    if( ! refalrts::repeated_stvar_term( vm, context[24], context[17] ) )
      continue;
    if( ! refalrts::ident_term( identifiers[ident_TkSemicolon], context[32] ) )
      continue;
    // closed e.Sentences#1 as range 39
    // closed e.Tokens#1 as range 41
    //DEBUG: t.ErrorList#1: 9
    //DEBUG: t.NextSentence#1: 11
    //DEBUG: t.Token2#1: 17
    //DEBUG: t.Token1#1: 20
    //DEBUG: t.Pos#2: 33
    //DEBUG: s.Mode#1: 19
    //DEBUG: e.Sentences#1: 39
    //DEBUG: e.Tokens#1: 41

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.Token2#1/17 s.Mode#1/19 t.Token1#1/20 {REMOVED TILE} {REMOVED TILE} t.Pos#2/33 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Block-AfterSentence/4 HalfReuse: s.Mode1 #19/7 } Tile{ AsIs: (/22 } Tile{ AsIs: e.Sentences#1/39 } Tile{ AsIs: t.NextSentence#1/11 HalfReuse: )/15 } Tile{ HalfReuse: </16 } Tile{ HalfReuse: & Sentence/8 AsIs: t.ErrorList#1/9 } Tile{ HalfReuse: s.Mode1 #19/23 AsIs: t.Token2#1/24 } Tile{ AsIs: e.Tokens#1/41 } Tile{ HalfReuse: >/32 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_Blockm_AfterSentence]);
    refalrts::reinit_svar( context[7], context[19] );
    refalrts::reinit_close_bracket(context[15]);
    refalrts::reinit_open_call(context[16]);
    refalrts::reinit_name(context[8], functions[efunc_Sentence]);
    refalrts::reinit_svar( context[23], context[19] );
    refalrts::reinit_close_call(context[32]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[32] );
    refalrts::push_stack( vm, context[16] );
    refalrts::link_brackets( context[22], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[32], context[32] );
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_evar( res, context[23], context[25] );
    res = refalrts::splice_evar( res, context[8], context[10] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[11], context[15] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[22], context[22] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Block-AfterSentence$1:1/4 (/7 e.Sentences#1/5 )/8 t.ErrorList#1/9 t.NextSentence#1/11 (/15 e.Tokens#1/13 )/16 t.Token2#1/17 s.Mode#1/19 t.Token1#1/20 t.Token1#1/22 t.Token2#1/24 >/1
  if( ! refalrts::repeated_stvar_term( vm, context[24], context[17] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::repeated_stvar_term( vm, context[22], context[20] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Sentences#1 as range 5
  // closed e.Tokens#1 as range 13
  //DEBUG: t.ErrorList#1: 9
  //DEBUG: t.NextSentence#1: 11
  //DEBUG: t.Token2#1: 17
  //DEBUG: t.Token1#1: 20
  //DEBUG: s.Mode#1: 19
  //DEBUG: e.Sentences#1: 5
  //DEBUG: e.Tokens#1: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.Token2#1/17 s.Mode#1/19 t.Token1#1/20 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </26 Tile{ HalfReuse: & Block-AfterSentence$1:1$6=1/0 HalfReuse: s.Mode1 #19/4 AsIs: (/7 AsIs: e.Sentences#1/5 AsIs: )/8 } Tile{ AsIs: t.NextSentence#1/11 } Tile{ AsIs: t.Token2#1/24 } Tile{ AsIs: (/15 AsIs: e.Tokens#1/13 AsIs: )/16 } </27 & UnexpectedToken/28 Tile{ AsIs: t.ErrorList#1/9 } Tile{ AsIs: t.Token1#1/22 }"\';\' or \'}\', skipped"/29 >/31 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[26]);
  refalrts::alloc_open_call(vm, context[27]);
  refalrts::alloc_name(vm, context[28], functions[efunc_UnexpectedToken]);
  refalrts::alloc_chars(vm, context[29], context[30], "\';\' or \'}\', skipped", 19);
  refalrts::alloc_close_call(vm, context[31]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Blockm_AfterSentence_S1B1S6A1]);
  refalrts::reinit_svar( context[4], context[19] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[26] );
  refalrts::push_stack( vm, context[31] );
  refalrts::push_stack( vm, context[27] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[29], context[31] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[24], context[25] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[26], context[26] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Blockm_AfterSentence_S1B1("Block-AfterSentence$1:1", COOKIE1_, COOKIE2_, func_gen_Blockm_AfterSentence_S1B1);


static refalrts::FnResult func_Blockm_AfterSentence(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 44 elems
  refalrts::Iter context[44];
  refalrts::zeros( context, 44 );
  // </0 & Block-AfterSentence/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Block-AfterSentence/4 s.new#1/5 (/8 e.new#2/6 )/9 t.new#3/10 t.new#4/12 t.new#5/14 e.new#6/2 >/1
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
  context[15] = refalrts::tvar_left( context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#6 as range 2
  do {
    // </0 & Block-AfterSentence/4 s.new#7/5 (/8 e.new#13/16 )/9 t.new#8/10 t.new#9/12 t.new#10/14 t.new#11/20 e.new#12/18 >/1
    context[16] = context[6];
    context[17] = context[7];
    context[18] = context[2];
    context[19] = context[3];
    // closed e.new#13 as range 16
    context[21] = refalrts::tvar_left( context[20], context[18], context[19] );
    if( ! context[21] )
      continue;
    // closed e.new#12 as range 18
    do {
      // </0 & Block-AfterSentence/4 s.new#14/5 (/8 e.new#22/22 )/9 t.new#15/10 t.new#16/12 (/14 s.new#17/28 e.new#18/26 t.new#19/29 )/15 t.new#20/20 e.new#21/24 >/1
      context[22] = context[16];
      context[23] = context[17];
      context[24] = context[18];
      context[25] = context[19];
      context[26] = 0;
      context[27] = 0;
      if( ! refalrts::brackets_term( context[26], context[27], context[14] ) )
        continue;
      // closed e.new#22 as range 22
      // closed e.new#21 as range 24
      if( ! refalrts::svar_left( context[28], context[26], context[27] ) )
        continue;
      context[30] = refalrts::tvar_right( context[29], context[26], context[27] );
      if( ! context[30] )
        continue;
      // closed e.new#18 as range 26
      do {
        // </0 & Block-AfterSentence/4 s.Mode#1/5 (/8 e.Sentences#1/31 )/9 t.ErrorList#1/10 t.NextSentence#1/12 (/14 # TkSemicolon/28 t.0#0/29 )/15 (/20 # TkRefal5Mode/37 t.2#0/38 s.NewMode#2/40 )/21 e.Tokens#1/33 >/1
        context[31] = context[22];
        context[32] = context[23];
        context[33] = context[24];
        context[34] = context[25];
        context[35] = 0;
        context[36] = 0;
        if( ! refalrts::brackets_term( context[35], context[36], context[20] ) )
          continue;
        if( ! refalrts::ident_term( identifiers[ident_TkSemicolon], context[28] ) )
          continue;
        context[37] = refalrts::ident_left( identifiers[ident_TkRefal5Mode], context[35], context[36] );
        if( ! context[37] )
          continue;
        if( ! refalrts::empty_seq( context[26], context[27] ) )
          continue;
        // closed e.Sentences#1 as range 31
        // closed e.Tokens#1 as range 33
        context[39] = refalrts::tvar_left( context[38], context[35], context[36] );
        if( ! context[39] )
          continue;
        if( ! refalrts::svar_left( context[40], context[35], context[36] ) )
          continue;
        if( ! refalrts::empty_seq( context[35], context[36] ) )
          continue;
        //DEBUG: t.ErrorList#1: 10
        //DEBUG: t.NextSentence#1: 12
        //DEBUG: t.0#0: 29
        //DEBUG: s.Mode#1: 5
        //DEBUG: e.Sentences#1: 31
        //DEBUG: e.Tokens#1: 33
        //DEBUG: t.2#0: 38
        //DEBUG: s.NewMode#2: 40

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.Mode#1/5 {REMOVED TILE} (/20 # TkRefal5Mode/37 t.2#0/38 {REMOVED TILE} )/21 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & Block-AfterSentence/4 } Tile{ AsIs: s.NewMode#2/40 } Tile{ AsIs: (/8 AsIs: e.Sentences#1/31 AsIs: )/9 AsIs: t.ErrorList#1/10 AsIs: t.NextSentence#1/12 AsIs: (/14 AsIs: # TkSemicolon/28 AsIs: t.0#0/29 AsIs: )/15 } Tile{ AsIs: e.Tokens#1/33 } Tile{ AsIs: >/1 ]] }
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[14], context[15] );
        refalrts::link_brackets( context[8], context[9] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[33], context[34] );
        res = refalrts::splice_evar( res, context[8], context[15] );
        res = refalrts::splice_evar( res, context[40], context[40] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Block-AfterSentence/4 s.Mode#1/5 (/8 e.Sentences#1/31 )/9 t.ErrorList#1/10 t.NextSentence#1/12 (/14 # TkRefal5Mode/28 t.0#0/37 s.NewMode#2/29 )/15 t.Token2#1/20 e.Tokens#1/35 >/1
        context[31] = context[22];
        context[32] = context[23];
        context[33] = context[26];
        context[34] = context[27];
        context[35] = context[24];
        context[36] = context[25];
        if( ! refalrts::svar_term( context[29], context[29] ) )
          continue;
        if( ! refalrts::ident_term( identifiers[ident_TkRefal5Mode], context[28] ) )
          continue;
        // closed e.Sentences#1 as range 31
        // closed e.Tokens#1 as range 35
        context[38] = refalrts::tvar_left( context[37], context[33], context[34] );
        if( ! context[38] )
          continue;
        if( ! refalrts::empty_seq( context[33], context[34] ) )
          continue;
        //DEBUG: t.ErrorList#1: 10
        //DEBUG: t.NextSentence#1: 12
        //DEBUG: t.Token2#1: 20
        //DEBUG: s.NewMode#2: 29
        //DEBUG: s.Mode#1: 5
        //DEBUG: e.Sentences#1: 31
        //DEBUG: e.Tokens#1: 35
        //DEBUG: t.0#0: 37

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.Mode#1/5 {REMOVED TILE} (/14 # TkRefal5Mode/28 t.0#0/37 {REMOVED TILE} )/15 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & Block-AfterSentence/4 } Tile{ AsIs: s.NewMode#2/29 } Tile{ AsIs: (/8 AsIs: e.Sentences#1/31 AsIs: )/9 AsIs: t.ErrorList#1/10 AsIs: t.NextSentence#1/12 } Tile{ AsIs: t.Token2#1/20 AsIs: e.Tokens#1/35 AsIs: >/1 ]] }
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[8], context[9] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[20];
        res = refalrts::splice_evar( res, context[8], context[13] );
        res = refalrts::splice_evar( res, context[29], context[29] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Block-AfterSentence/4 s.new#23/5 (/8 e.new#30/31 )/9 t.new#24/10 t.new#25/12 (/14 s.new#26/28 t.new#27/29 )/15 t.new#28/20 e.new#29/33 >/1
      context[31] = context[22];
      context[32] = context[23];
      context[33] = context[24];
      context[34] = context[25];
      if( ! refalrts::empty_seq( context[26], context[27] ) )
        continue;
      // closed e.new#30 as range 31
      // closed e.new#29 as range 33
      do {
        // </0 & Block-AfterSentence/4 s.Mode#1/5 (/8 e.Sentences#1/35 )/9 t.ErrorList#1/10 t.NextSentence#1/12 (/14 # TkSemicolon/28 t.0#0/29 )/15 (/20 # TkCloseBlock/41 t.2#0/42 )/21 e.Tokens#1/37 >/1
        context[35] = context[31];
        context[36] = context[32];
        context[37] = context[33];
        context[38] = context[34];
        context[39] = 0;
        context[40] = 0;
        if( ! refalrts::brackets_term( context[39], context[40], context[20] ) )
          continue;
        if( ! refalrts::ident_term( identifiers[ident_TkSemicolon], context[28] ) )
          continue;
        context[41] = refalrts::ident_left( identifiers[ident_TkCloseBlock], context[39], context[40] );
        if( ! context[41] )
          continue;
        // closed e.Sentences#1 as range 35
        // closed e.Tokens#1 as range 37
        context[43] = refalrts::tvar_left( context[42], context[39], context[40] );
        if( ! context[43] )
          continue;
        if( ! refalrts::empty_seq( context[39], context[40] ) )
          continue;
        //DEBUG: t.ErrorList#1: 10
        //DEBUG: t.NextSentence#1: 12
        //DEBUG: t.0#0: 29
        //DEBUG: s.Mode#1: 5
        //DEBUG: e.Sentences#1: 35
        //DEBUG: e.Tokens#1: 37
        //DEBUG: t.2#0: 42

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & Block-AfterSentence/4 s.Mode#1/5 (/8 {REMOVED TILE} )/9 {REMOVED TILE} {REMOVED TILE} # TkSemicolon/28 t.0#0/29 )/15 {REMOVED TILE} t.2#0/42 )/21 {REMOVED TILE} >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/10 } Tile{ AsIs: (/20 Reuse: # Sentences/41 } Tile{ AsIs: e.Sentences#1/35 } Tile{ AsIs: t.NextSentence#1/12 HalfReuse: )/14 } Tile{ AsIs: e.Tokens#1/37 } Tile{ ]] }
        refalrts::update_ident(context[41], identifiers[ident_Sentences]);
        refalrts::reinit_close_bracket(context[14]);
        refalrts::link_brackets( context[20], context[14] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[37], context[38] );
        res = refalrts::splice_evar( res, context[12], context[14] );
        res = refalrts::splice_evar( res, context[35], context[36] );
        res = refalrts::splice_evar( res, context[20], context[41] );
        res = refalrts::splice_evar( res, context[10], context[11] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Block-AfterSentence/4 s.Mode#1/5 (/8 e.Sentences#1/35 )/9 t.ErrorList#1/10 t.NextSentence#1/12 (/14 # TkCloseBlock/28 t.0#0/29 )/15 t.Token2#1/20 e.Tokens#1/37 >/1
        context[35] = context[31];
        context[36] = context[32];
        context[37] = context[33];
        context[38] = context[34];
        if( ! refalrts::ident_term( identifiers[ident_TkCloseBlock], context[28] ) )
          continue;
        // closed e.Sentences#1 as range 35
        // closed e.Tokens#1 as range 37
        //DEBUG: t.ErrorList#1: 10
        //DEBUG: t.NextSentence#1: 12
        //DEBUG: t.0#0: 29
        //DEBUG: t.Token2#1: 20
        //DEBUG: s.Mode#1: 5
        //DEBUG: e.Sentences#1: 35
        //DEBUG: e.Tokens#1: 37

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & Block-AfterSentence/4 s.Mode#1/5 (/8 {REMOVED TILE} )/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.0#0/29 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/10 } Tile{ AsIs: (/14 Reuse: # Sentences/28 } Tile{ AsIs: e.Sentences#1/35 } Tile{ AsIs: t.NextSentence#1/12 } Tile{ AsIs: )/15 AsIs: t.Token2#1/20 } Tile{ AsIs: e.Tokens#1/37 } Tile{ ]] }
        refalrts::update_ident(context[28], identifiers[ident_Sentences]);
        refalrts::link_brackets( context[14], context[15] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[37], context[38] );
        res = refalrts::splice_evar( res, context[15], context[21] );
        res = refalrts::splice_evar( res, context[12], context[13] );
        res = refalrts::splice_evar( res, context[35], context[36] );
        res = refalrts::splice_evar( res, context[14], context[28] );
        res = refalrts::splice_evar( res, context[10], context[11] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Block-AfterSentence/4 s.Mode#1/5 (/8 e.Sentences#1/35 )/9 t.ErrorList#1/10 t.NextSentence#1/12 (/14 # TkSemicolon/28 t.0#0/29 )/15 t.Token2#1/20 e.Tokens#1/37 >/1
      context[35] = context[31];
      context[36] = context[32];
      context[37] = context[33];
      context[38] = context[34];
      if( ! refalrts::ident_term( identifiers[ident_TkSemicolon], context[28] ) )
        continue;
      // closed e.Sentences#1 as range 35
      // closed e.Tokens#1 as range 37
      //DEBUG: t.ErrorList#1: 10
      //DEBUG: t.NextSentence#1: 12
      //DEBUG: t.0#0: 29
      //DEBUG: t.Token2#1: 20
      //DEBUG: s.Mode#1: 5
      //DEBUG: e.Sentences#1: 35
      //DEBUG: e.Tokens#1: 37

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.0#0/29 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Block-AfterSentence/4 AsIs: s.Mode#1/5 AsIs: (/8 } Tile{ AsIs: e.Sentences#1/35 } Tile{ AsIs: t.NextSentence#1/12 HalfReuse: )/14 HalfReuse: </28 } Tile{ HalfReuse: & Sentence/9 AsIs: t.ErrorList#1/10 } Tile{ HalfReuse: s.Mode1 #5/15 AsIs: t.Token2#1/20 AsIs: e.Tokens#1/37 AsIs: >/1 } >/39 Tile{ ]] }
      refalrts::alloc_close_call(vm, context[39]);
      refalrts::reinit_close_bracket(context[14]);
      refalrts::reinit_open_call(context[28]);
      refalrts::reinit_name(context[9], functions[efunc_Sentence]);
      refalrts::reinit_svar( context[15], context[5] );
      refalrts::push_stack( vm, context[39] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[28] );
      refalrts::link_brackets( context[8], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[39], context[39] );
      res = refalrts::splice_evar( res, context[15], context[1] );
      res = refalrts::splice_evar( res, context[9], context[11] );
      res = refalrts::splice_evar( res, context[12], context[28] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      refalrts::splice_to_freelist_open( vm, context[8], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Block-AfterSentence/4 s.Mode#1/5 (/8 e.Sentences#1/22 )/9 t.ErrorList#1/10 t.NextSentence#1/12 t.Token1#1/14 t.Token2#1/20 e.Tokens#1/24 >/1
    context[22] = context[16];
    context[23] = context[17];
    context[24] = context[18];
    context[25] = context[19];
    // closed e.Sentences#1 as range 22
    // closed e.Tokens#1 as range 24
    //DEBUG: t.ErrorList#1: 10
    //DEBUG: t.NextSentence#1: 12
    //DEBUG: t.Token1#1: 14
    //DEBUG: t.Token2#1: 20
    //DEBUG: s.Mode#1: 5
    //DEBUG: e.Sentences#1: 22
    //DEBUG: e.Tokens#1: 24

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Block-AfterSentence$1:1$6=1/4 AsIs: s.Mode#1/5 AsIs: (/8 AsIs: e.Sentences#1/22 AsIs: )/9 } Tile{ AsIs: t.NextSentence#1/12 } Tile{ AsIs: t.Token2#1/20 } (/26 Tile{ AsIs: e.Tokens#1/24 } )/27 </28 & UnexpectedToken/29 Tile{ AsIs: t.ErrorList#1/10 } Tile{ AsIs: t.Token1#1/14 }"\';\' or \'}\', skipped"/30 >/32 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[26]);
    refalrts::alloc_close_bracket(vm, context[27]);
    refalrts::alloc_open_call(vm, context[28]);
    refalrts::alloc_name(vm, context[29], functions[efunc_UnexpectedToken]);
    refalrts::alloc_chars(vm, context[30], context[31], "\';\' or \'}\', skipped", 19);
    refalrts::alloc_close_call(vm, context[32]);
    refalrts::update_name(context[4], functions[efunc_gen_Blockm_AfterSentence_S1B1S6A1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[32] );
    refalrts::push_stack( vm, context[28] );
    refalrts::link_brackets( context[26], context[27] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[30], context[32] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[27], context[29] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[26], context[26] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Block-AfterSentence/4 s.Mode#1/5 (/8 e.Sentences#1/6 )/9 t.ErrorList#1/10 t.NextSentence#1/12 (/14 # TkEOF/18 t.Pos#1/19 )/15 >/1
  context[16] = 0;
  context[17] = 0;
  if( ! refalrts::brackets_term( context[16], context[17], context[14] ) )
    return refalrts::cRecognitionImpossible;
  context[18] = refalrts::ident_left( identifiers[ident_TkEOF], context[16], context[17] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Sentences#1 as range 6
  context[20] = refalrts::tvar_left( context[19], context[16], context[17] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[16], context[17] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.ErrorList#1: 10
  //DEBUG: t.NextSentence#1: 12
  //DEBUG: s.Mode#1: 5
  //DEBUG: e.Sentences#1: 6
  //DEBUG: t.Pos#1: 19

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Mode#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 } Tile{ AsIs: t.ErrorList#1/10 } Tile{ AsIs: (/14 AsIs: # TkEOF/18 AsIs: t.Pos#1/19 AsIs: )/15 HalfReuse: '\''/1 }";\' or \'}\'"/21 >/23 Tile{ AsIs: (/8 } # Sentences/24 Tile{ AsIs: e.Sentences#1/6 } Tile{ AsIs: t.NextSentence#1/12 } Tile{ AsIs: )/9 } (/25 # TkEOF/26 t.Pos#1/19/27 )/29 Tile{ ]] }
  refalrts::alloc_chars(vm, context[21], context[22], ";\' or \'}\'", 9);
  refalrts::alloc_close_call(vm, context[23]);
  refalrts::alloc_ident(vm, context[24], identifiers[ident_Sentences]);
  refalrts::alloc_open_bracket(vm, context[25]);
  refalrts::alloc_ident(vm, context[26], identifiers[ident_TkEOF]);
  refalrts::copy_evar(vm, context[27], context[28], context[19], context[20]);
  refalrts::alloc_close_bracket(vm, context[29]);
  refalrts::update_name(context[4], functions[efunc_UnexpectedToken]);
  refalrts::reinit_char(context[1], '\'');
  refalrts::link_brackets( context[25], context[29] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[25], context[29] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[21], context[23] );
  res = refalrts::splice_evar( res, context[14], context[1] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Blockm_AfterSentence("Block-AfterSentence", COOKIE1_, COOKIE2_, func_Blockm_AfterSentence);


static refalrts::FnResult func_Sentence(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & Sentence/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Sentence/4 t.new#1/5 s.new#2/7 e.new#3/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & Sentence/4 t.ErrorList#1/5 s.Mode#1/7 (/12 # TkRefal5Mode/14 t.Pos#1/15 s.NewMode#1/17 )/13 e.Tokens#1/8 >/1
    context[8] = context[2];
    context[9] = context[3];
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[8], context[9] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = refalrts::ident_left( identifiers[ident_TkRefal5Mode], context[10], context[11] );
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

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Mode#1/7 (/12 # TkRefal5Mode/14 t.Pos#1/15 s.NewMode#1/17 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Sentence/4 AsIs: t.ErrorList#1/5 } Tile{ HalfReuse: s.NewMode1 #17/13 AsIs: e.Tokens#1/8 AsIs: >/1 ]] }
    refalrts::reinit_svar( context[13], context[17] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[13];
    refalrts::splice_to_freelist_open( vm, context[6], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Sentence/4 t.ErrorList#1/5 s.Mode#1/7 e.Tokens#1/2 >/1
  // closed e.Tokens#1 as range 2
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: s.Mode#1: 7
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </8 & SentenceTail/9 s.Mode#1/7/10 Tile{ AsIs: </0 Reuse: & SentencePart/4 AsIs: t.ErrorList#1/5 AsIs: s.Mode#1/7 AsIs: e.Tokens#1/2 AsIs: >/1 } >/11 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_SentenceTail]);
  refalrts::copy_stvar(vm, context[10], context[7]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_SentencePart]);
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[8], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Sentence("Sentence", COOKIE1_, COOKIE2_, func_Sentence);


static refalrts::FnResult func_gen_SentenceTail_S1A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & SentenceTail$1=3/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/29 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#4/30 HalfReuse: (/1 } Tile{ AsIs: t.FirstPattern#1/5 } Tile{ HalfReuse: (/19 } Tile{ AsIs: s.PartType#1/7 AsIs: t.FirstResult#1/8 AsIs: (/12 AsIs: e.FirstBlocks#3/10 AsIs: )/13 AsIs: t.NextPattern#2/14 HalfReuse: )/18 } Tile{ AsIs: e.ConditionsAndAssignments#2/16 } Tile{ AsIs: t.LastResult#2/20 AsIs: (/24 AsIs: e.LastBlocks#2/22 AsIs: )/25 HalfReuse: )/28 } Tile{ AsIs: e.Tokens#2/26 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[1]);
  refalrts::reinit_open_bracket(context[19]);
  refalrts::reinit_close_bracket(context[18]);
  refalrts::reinit_close_bracket(context[28]);
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
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SentenceTail_S1A3("SentenceTail$1=3", COOKIE1_, COOKIE2_, func_gen_SentenceTail_S1A3);


static refalrts::FnResult func_gen_SentenceTail_S1A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & SentenceTail$1=3/4 AsIs: t.FirstPattern#1/5 AsIs: s.PartType#1/7 AsIs: t.FirstResult#1/8 } (/31 Tile{ AsIs: e.FirstBlocks#3/2 } )/32 Tile{ AsIs: t.NextPattern#2/10 AsIs: (/14 AsIs: e.ConditionsAndAssignments#2/12 AsIs: )/15 AsIs: t.LastResult#2/16 AsIs: (/20 AsIs: e.LastBlocks#2/18 AsIs: )/21 AsIs: (/24 AsIs: e.Tokens#2/22 AsIs: )/25 } </33 & AssignmentError/34 Tile{ AsIs: t.ErrorList#3/29 } Tile{ AsIs: s.Mode#1/26 } s.PartType#1/7/35 Tile{ AsIs: t.Pos#1/27 } >/36 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[31]);
  refalrts::alloc_close_bracket(vm, context[32]);
  refalrts::alloc_open_call(vm, context[33]);
  refalrts::alloc_name(vm, context[34], functions[efunc_AssignmentError]);
  refalrts::copy_stvar(vm, context[35], context[7]);
  refalrts::alloc_close_call(vm, context[36]);
  refalrts::update_name(context[4], functions[efunc_gen_SentenceTail_S1A3]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[36] );
  refalrts::push_stack( vm, context[33] );
  refalrts::link_brackets( context[24], context[25] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::link_brackets( context[31], context[32] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[36], context[36] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_evar( res, context[35], context[35] );
  res = refalrts::splice_evar( res, context[26], context[26] );
  res = refalrts::splice_evar( res, context[29], context[30] );
  res = refalrts::splice_evar( res, context[33], context[34] );
  res = refalrts::splice_evar( res, context[10], context[25] );
  res = refalrts::splice_evar( res, context[32], context[32] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[31], context[31] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SentenceTail_S1A2("SentenceTail$1=2", COOKIE1_, COOKIE2_, func_gen_SentenceTail_S1A2);


static refalrts::FnResult func_gen_SentenceTail_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & SentenceTail$1=2/4 AsIs: t.FirstPattern#1/5 AsIs: s.PartType#1/7 AsIs: t.FirstResult#1/8 } Tile{ AsIs: t.NextPattern#2/27 } (/31 Tile{ AsIs: e.ConditionsAndAssignments#2/19 } )/32 Tile{ AsIs: t.LastResult#2/29 AsIs: (/25 AsIs: e.LastBlocks#2/23 AsIs: )/26 HalfReuse: (/22 AsIs: e.Tokens#2/2 HalfReuse: )/1 } Tile{ AsIs: s.Mode#1/10 AsIs: t.Pos#1/11 HalfReuse: </15 } Tile{ HalfReuse: & CheckExceedBlocks/16 AsIs: t.ErrorList#2/17 HalfReuse: s.Mode1 #10/21 } Tile{ AsIs: e.FirstBlocks#1/13 } >/33 >/34 Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[31]);
  refalrts::alloc_close_bracket(vm, context[32]);
  refalrts::alloc_close_call(vm, context[33]);
  refalrts::alloc_close_call(vm, context[34]);
  refalrts::update_name(context[4], functions[efunc_gen_SentenceTail_S1A2]);
  refalrts::reinit_open_bracket(context[22]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::reinit_open_call(context[15]);
  refalrts::reinit_name(context[16], functions[efunc_CheckExceedBlocks]);
  refalrts::reinit_svar( context[21], context[10] );
  refalrts::push_stack( vm, context[34] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[33] );
  refalrts::push_stack( vm, context[15] );
  refalrts::link_brackets( context[22], context[1] );
  refalrts::link_brackets( context[25], context[26] );
  refalrts::link_brackets( context[31], context[32] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[33], context[34] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[16], context[21] );
  res = refalrts::splice_evar( res, context[10], context[15] );
  res = refalrts::splice_evar( res, context[29], context[1] );
  res = refalrts::splice_evar( res, context[32], context[32] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[31], context[31] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SentenceTail_S1A1("SentenceTail$1=1", COOKIE1_, COOKIE2_, func_gen_SentenceTail_S1A1);


static refalrts::FnResult func_gen_SentenceTail_S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#2/13 } Tile{ HalfReuse: (/4 AsIs: t.Pattern#1/5 AsIs: t.Result#1/7 AsIs: (/11 } Tile{ AsIs: e.Blocks#2/2 } Tile{ AsIs: )/12 } Tile{ HalfReuse: )/1 } Tile{ AsIs: e.Tokens#1/9 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_close_bracket(context[1]);
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
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SentenceTail_S2A1("SentenceTail$2=1", COOKIE1_, COOKIE2_, func_gen_SentenceTail_S2A1);


static refalrts::FnResult func_SentenceTail(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
  // </0 & SentenceTail/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & SentenceTail/4 s.new#1/5 t.new#2/6 t.new#3/8 s.new#4/10 t.new#5/11 t.new#6/13 (/17 e.new#7/15 )/18 e.new#8/2 >/1
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
  // closed e.new#7 as range 15
  // closed e.new#8 as range 2
  do {
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
    context[27] = refalrts::ident_left( identifiers[ident_TkColon], context[23], context[24] );
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

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.ColonPos#1/28 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SentenceTail$1=1/4 } Tile{ AsIs: t.FirstPattern#1/8 AsIs: s.PartType#1/10 } Tile{ AsIs: t.FirstResult#1/13 } Tile{ AsIs: s.Mode#1/5 } Tile{ AsIs: t.Pos#1/11 } Tile{ AsIs: (/17 AsIs: e.FirstBlocks#1/19 AsIs: )/18 HalfReuse: </25 HalfReuse: & SentenceTail/27 } s.Mode#1/5/30 </31 & SentencePart/32 Tile{ AsIs: t.ErrorList#1/6 } Tile{ HalfReuse: s.Mode1 #5/26 AsIs: e.Tokens#1/21 AsIs: >/1 } >/33 >/34 Tile{ ]] }
    refalrts::copy_stvar(vm, context[30], context[5]);
    refalrts::alloc_open_call(vm, context[31]);
    refalrts::alloc_name(vm, context[32], functions[efunc_SentencePart]);
    refalrts::alloc_close_call(vm, context[33]);
    refalrts::alloc_close_call(vm, context[34]);
    refalrts::update_name(context[4], functions[efunc_gen_SentenceTail_S1A1]);
    refalrts::reinit_open_call(context[25]);
    refalrts::reinit_name(context[27], functions[efunc_SentenceTail]);
    refalrts::reinit_svar( context[26], context[5] );
    refalrts::push_stack( vm, context[34] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[33] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[31] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[33], context[34] );
    res = refalrts::splice_evar( res, context[26], context[1] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[30], context[32] );
    res = refalrts::splice_evar( res, context[17], context[27] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[5], context[5] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[8], context[10] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SentenceTail/4 s.Mode#1/5 t.ErrorList#1/6 t.Pattern#1/8 s.PartType#1/10 t.Pos#1/11 t.Result#1/13 (/17 e.Blocks#1/15 )/18 e.Tokens#1/2 >/1
  // closed e.Blocks#1 as range 15
  // closed e.Tokens#1 as range 2
  //DEBUG: t.ErrorList#1: 6
  //DEBUG: t.Pattern#1: 8
  //DEBUG: t.Pos#1: 11
  //DEBUG: t.Result#1: 13
  //DEBUG: s.Mode#1: 5
  //DEBUG: s.PartType#1: 10
  //DEBUG: e.Blocks#1: 15
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & SentenceTail$2=1/4 } Tile{ AsIs: t.Pattern#1/8 } Tile{ AsIs: t.Result#1/13 AsIs: (/17 } Tile{ AsIs: e.Tokens#1/2 } Tile{ AsIs: )/18 } </19 & CheckSentenceEnd/20 Tile{ AsIs: t.ErrorList#1/6 } Tile{ AsIs: s.Mode#1/5 } Tile{ AsIs: s.PartType#1/10 AsIs: t.Pos#1/11 } Tile{ AsIs: e.Blocks#1/15 } >/21 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[19]);
  refalrts::alloc_name(vm, context[20], functions[efunc_CheckSentenceEnd]);
  refalrts::alloc_close_call(vm, context[21]);
  refalrts::update_name(context[4], functions[efunc_gen_SentenceTail_S2A1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[19] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[10], context[12] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[17] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SentenceTail("SentenceTail", COOKIE1_, COOKIE2_, func_SentenceTail);


static refalrts::FnResult func_CheckExceedBlocks(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoCheckExceedBlocks/4 } Tile{ AsIs: s.Mode#1/7 } Tile{ AsIs: t.ErrorList#1/5 } (/8 )/9 Tile{ AsIs: e.ExceedBlocks#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[8]);
  refalrts::alloc_close_bracket(vm, context[9]);
  refalrts::update_name(context[4], functions[efunc_DoCheckExceedBlocks]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
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

static refalrts::NativeReference nat_ref_CheckExceedBlocks("CheckExceedBlocks", COOKIE1_, COOKIE2_, func_CheckExceedBlocks);


static refalrts::FnResult func_DoCheckExceedBlocks(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & DoCheckExceedBlocks/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoCheckExceedBlocks/4 s.new#1/5 t.new#2/6 (/10 e.new#3/8 )/11 e.new#4/2 >/1
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
  // closed e.new#3 as range 8
  // closed e.new#4 as range 2
  do {
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

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoCheckExceedBlocks/4 AsIs: s.Mode#1/5 } </22 & ClassicError/23 Tile{ AsIs: t.ErrorList#1/6 } Tile{ HalfReuse: s.Mode1 #5/18 AsIs: t.Pos#1/20 }"Exceed block in this position"/24 >/26 Tile{ AsIs: (/10 AsIs: e.ScannedBlocks#1/12 HalfReuse: (/11 } Tile{ AsIs: e.Body#1/16 } )/27 Tile{ AsIs: )/19 AsIs: e.RestBlocks#1/14 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[22]);
    refalrts::alloc_name(vm, context[23], functions[efunc_ClassicError]);
    refalrts::alloc_chars(vm, context[24], context[25], "Exceed block in this position", 29);
    refalrts::alloc_close_call(vm, context[26]);
    refalrts::alloc_close_bracket(vm, context[27]);
    refalrts::reinit_svar( context[18], context[5] );
    refalrts::reinit_open_bracket(context[11]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[10], context[19] );
    refalrts::link_brackets( context[11], context[27] );
    refalrts::push_stack( vm, context[26] );
    refalrts::push_stack( vm, context[22] );
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
  refalrts::stop_sentence(vm);

  // </0 & DoCheckExceedBlocks/4 s.Mode#1/5 t.ErrorList#1/6 (/10 e.ScannedBlocks#1/8 )/11 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ScannedBlocks#1 as range 8
  //DEBUG: t.ErrorList#1: 6
  //DEBUG: s.Mode#1: 5
  //DEBUG: e.ScannedBlocks#1: 8

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DoCheckExceedBlocks/4 s.Mode#1/5 {REMOVED TILE} (/10 {REMOVED TILE} )/11 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/6 } Tile{ AsIs: e.ScannedBlocks#1/8 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoCheckExceedBlocks("DoCheckExceedBlocks", COOKIE1_, COOKIE2_, func_DoCheckExceedBlocks);


static refalrts::FnResult func_AssignmentError(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & AssignmentError/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & AssignmentError/4 t.new#1/5 s.new#2/7 s.new#3/8 t.new#4/9 >/1
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
    // </0 & AssignmentError/4 t.ErrorList#1/5 # Classic/7 # Assign/8 t.Pos#1/9 >/1
    if( ! refalrts::ident_term( identifiers[ident_Classic], context[7] ) )
      continue;
    if( ! refalrts::ident_term( identifiers[ident_Assign], context[8] ) )
      continue;
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: t.Pos#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#1/5 } Tile{ AsIs: t.Pos#1/9 } 'A'/11 Tile{ HalfReuse: 's'/7 HalfReuse: 's'/8 }"ignment not supported in classic mode"/12 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_char(vm, context[11], 'A');
    refalrts::alloc_chars(vm, context[12], context[13], "ignment not supported in classic mode", 37);
    refalrts::update_name(context[4], functions[efunc_ELm_AddErrorAt]);
    refalrts::reinit_char(context[7], 's');
    refalrts::reinit_char(context[8], 's');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
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
  refalrts::stop_sentence(vm);

  // </0 & AssignmentError/4 t.ErrorList#1/5 s.Mode#1/7 s.Type#1/8 t.Pos#1/9 >/1
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: t.Pos#1: 9
  //DEBUG: s.Mode#1: 7
  //DEBUG: s.Type#1: 8

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & AssignmentError/4 {REMOVED TILE} s.Mode#1/7 s.Type#1/8 t.Pos#1/9 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_AssignmentError("AssignmentError", COOKIE1_, COOKIE2_, func_AssignmentError);


static refalrts::FnResult func_gen_CheckSentenceEnd_S1A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CheckSentenceEnd$1=2/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#3/9 } Tile{ AsIs: (/7 AsIs: e.Body#1/5 AsIs: )/8 } Tile{ AsIs: e.ExceedBlocks#3/2 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CheckSentenceEnd_S1A2("CheckSentenceEnd$1=2", COOKIE1_, COOKIE2_, func_gen_CheckSentenceEnd_S1A2);


static refalrts::FnResult func_gen_CheckSentenceEnd_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Mode#1/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckSentenceEnd$1=2/4 AsIs: (/7 AsIs: e.Body#1/5 AsIs: )/8 } </16 & CheckExceedBlocks/17 Tile{ AsIs: t.ErrorList#2/14 } Tile{ HalfReuse: s.Mode1 #9/12 AsIs: e.ExceedBlocks#1/10 HalfReuse: >/13 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[16]);
  refalrts::alloc_name(vm, context[17], functions[efunc_CheckExceedBlocks]);
  refalrts::update_name(context[4], functions[efunc_gen_CheckSentenceEnd_S1A2]);
  refalrts::reinit_svar( context[12], context[9] );
  refalrts::reinit_close_call(context[13]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[16] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  refalrts::splice_to_freelist_open( vm, context[8], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CheckSentenceEnd_S1A1("CheckSentenceEnd$1=1", COOKIE1_, COOKIE2_, func_gen_CheckSentenceEnd_S1A1);


static refalrts::FnResult func_CheckSentenceEnd(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & CheckSentenceEnd/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CheckSentenceEnd/4 t.new#1/5 s.new#2/7 s.new#3/8 t.new#4/9 e.new#5/2 >/1
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
  // closed e.new#5 as range 2
  do {
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

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} t.BodyPos#1/17 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </19 & CheckSentenceEnd$1=1/20 (/21 Tile{ AsIs: e.Body#1/13 } )/22 s.Mode#1/7/23 (/24 Tile{ AsIs: e.ExceedBlocks#1/11 } Tile{ AsIs: )/16 } Tile{ AsIs: </0 Reuse: & CheckMistakenAssign/4 AsIs: t.ErrorList#1/5 AsIs: s.Mode#1/7 AsIs: s.PartType#1/8 AsIs: t.Pos#1/9 HalfReuse: >/15 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_gen_CheckSentenceEnd_S1A1]);
    refalrts::alloc_open_bracket(vm, context[21]);
    refalrts::alloc_close_bracket(vm, context[22]);
    refalrts::copy_stvar(vm, context[23], context[7]);
    refalrts::alloc_open_bracket(vm, context[24]);
    refalrts::update_name(context[4], functions[efunc_CheckMistakenAssign]);
    refalrts::reinit_close_call(context[15]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[24], context[16] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[0], context[15] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[22], context[24] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[19], context[21] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CheckSentenceEnd/4 t.new#6/5 s.new#7/7 s.new#8/8 t.new#9/9 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & CheckSentenceEnd/4 t.ErrorList#1/5 s.Mode#1/7 # Condition/8 t.Pos#1/9 >/1
    if( ! refalrts::ident_term( identifiers[ident_Condition], context[8] ) )
      continue;
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: t.Pos#1: 9
    //DEBUG: s.Mode#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Mode#1/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#1/5 } Tile{ AsIs: t.Pos#1/9 } 'M'/11 Tile{ HalfReuse: 'i'/8 }"staken \',\' for \'=\'"/12 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_char(vm, context[11], 'M');
    refalrts::alloc_chars(vm, context[12], context[13], "staken \',\' for \'=\'", 18);
    refalrts::update_name(context[4], functions[efunc_ELm_AddErrorAt]);
    refalrts::reinit_char(context[8], 'i');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( vm, context[6], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CheckSentenceEnd/4 t.ErrorList#1/5 s.Mode#1/7 # Assign/8 t.Pos#1/9 >/1
  if( ! refalrts::ident_term( identifiers[ident_Assign], context[8] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: t.Pos#1: 9
  //DEBUG: s.Mode#1: 7

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CheckSentenceEnd/4 {REMOVED TILE} s.Mode#1/7 # Assign/8 t.Pos#1/9 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckSentenceEnd("CheckSentenceEnd", COOKIE1_, COOKIE2_, func_CheckSentenceEnd);


static refalrts::FnResult func_CheckMistakenAssign(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & CheckMistakenAssign/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CheckMistakenAssign/4 t.new#1/5 s.new#2/7 s.new#3/8 t.new#4/9 >/1
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
    // </0 & CheckMistakenAssign/4 t.ErrorList#1/5 s.Mode#1/7 # Assign/8 t.Pos#1/9 >/1
    if( ! refalrts::ident_term( identifiers[ident_Assign], context[8] ) )
      continue;
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: t.Pos#1: 9
    //DEBUG: s.Mode#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ClassicError/4 AsIs: t.ErrorList#1/5 AsIs: s.Mode#1/7 } Tile{ AsIs: t.Pos#1/9 } 'M'/11 Tile{ HalfReuse: 'i'/8 }"staken \'=\' for \',\' in classic mode"/12 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_char(vm, context[11], 'M');
    refalrts::alloc_chars(vm, context[12], context[13], "staken \'=\' for \',\' in classic mode", 34);
    refalrts::update_name(context[4], functions[efunc_ClassicError]);
    refalrts::reinit_char(context[8], 'i');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
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
  refalrts::stop_sentence(vm);

  // </0 & CheckMistakenAssign/4 t.ErrorList#1/5 s.Mode#1/7 # Condition/8 t.Pos#1/9 >/1
  if( ! refalrts::ident_term( identifiers[ident_Condition], context[8] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: t.Pos#1: 9
  //DEBUG: s.Mode#1: 7

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CheckMistakenAssign/4 {REMOVED TILE} s.Mode#1/7 # Condition/8 t.Pos#1/9 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckMistakenAssign("CheckMistakenAssign", COOKIE1_, COOKIE2_, func_CheckMistakenAssign);


static refalrts::FnResult func_SentencePart(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </8 & SentencePart-AfterPattern/9 s.Mode#1/7/10 Tile{ AsIs: </0 Reuse: & Pattern/4 AsIs: t.ErrorList#1/5 AsIs: s.Mode#1/7 AsIs: e.Tokens#1/2 AsIs: >/1 } >/11 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_SentencePartm_AfterPattern]);
  refalrts::copy_stvar(vm, context[10], context[7]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_Pattern]);
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[8], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SentencePart("SentencePart", COOKIE1_, COOKIE2_, func_SentencePart);


static refalrts::FnResult func_gen_SentencePartm_AfterPattern_B1S1A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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

  refalrts::reset_allocator(vm);
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
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SentencePartm_AfterPattern_B1S1A2("SentencePart-AfterPattern:1$1=2", COOKIE1_, COOKIE2_, func_gen_SentencePartm_AfterPattern_B1S1A2);


static refalrts::FnResult func_gen_SentencePartm_AfterPattern_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 42 elems
  refalrts::Iter context[42];
  refalrts::zeros( context, 42 );
  // </0 & SentencePart-AfterPattern:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & SentencePart-AfterPattern:1/4 t.new#1/10 t.new#2/12 s.new#3/14 (/17 e.new#4/15 )/18 t.new#5/19 (/7 s.new#6/9 t.new#7/21 e.new#8/5 )/8 >/1
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
  // closed e.new#4 as range 15
  context[20] = refalrts::tvar_left( context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[22] = refalrts::tvar_left( context[21], context[5], context[6] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#8 as range 5
  do {
    // </0 & SentencePart-AfterPattern:1/4 t.new#9/10 t.new#10/12 s.new#11/14 (/17 e.new#13/23 )/18 t.new#12/19 (/7 s.new#14/9 t.new#15/21 )/8 >/1
    context[23] = context[15];
    context[24] = context[16];
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.new#13 as range 23
    do {
      // </0 & SentencePart-AfterPattern:1/4 t.Pattern#1/10 t.ErrorList#1/12 s.Mode#1/14 (/17 e.Tokens#1/25 )/18 t.NextToken#1/19 (/7 s.PartToken#2/9 t.Pos#2/21 )/8 >/1
      context[25] = context[23];
      context[26] = context[24];
      // closed e.Tokens#1 as range 25
      //DEBUG: t.Pattern#1: 10
      //DEBUG: t.ErrorList#1: 12
      //DEBUG: t.NextToken#1: 19
      //DEBUG: t.Pos#2: 21
      //DEBUG: s.Mode#1: 14
      //DEBUG: s.PartToken#2: 9
      //DEBUG: e.Tokens#1: 25
      //9: s.PartToken#2
      //10: t.Pattern#1
      //12: t.ErrorList#1
      //14: s.Mode#1
      //19: t.NextToken#1
      //21: t.Pos#2
      //25: e.Tokens#1

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[27]);
      refalrts::alloc_name(vm, context[29], functions[efunc_gen_SentencePartm_AfterPattern_B1S1C1]);
      refalrts::alloc_open_bracket(vm, context[30]);
      refalrts::alloc_ident(vm, context[31], identifiers[ident_TkComma]);
      refalrts::alloc_ident(vm, context[32], identifiers[ident_Condition]);
      refalrts::alloc_close_bracket(vm, context[33]);
      refalrts::alloc_open_bracket(vm, context[34]);
      refalrts::alloc_ident(vm, context[35], identifiers[ident_TkAssign]);
      refalrts::alloc_ident(vm, context[36], identifiers[ident_Assign]);
      refalrts::alloc_close_bracket(vm, context[37]);
      refalrts::alloc_close_call(vm, context[28]);
      refalrts::push_stack( vm, context[28] );
      refalrts::push_stack( vm, context[27] );
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
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function(vm);
      do {
        // </27 & SentencePart-AfterPattern:1$1?1/31 e.Types-B#3/32 (/38 s.PartToken#2/40 s.PartType#3/41 )/39 e.Types-E#3/34 >/28
        context[29] = 0;
        context[30] = 0;
        context[31] = refalrts::call_left( context[29], context[30], context[27], context[28] );
        context[32] = 0;
        context[33] = 0;
        refalrts::start_e_loop(vm);
        do {
          context[34] = context[29];
          context[35] = context[30];
          context[36] = 0;
          context[37] = 0;
          context[38] = refalrts::brackets_left( context[36], context[37], context[34], context[35] );
          if( ! context[38] )
            continue;
          refalrts::bracket_pointers(context[38], context[39]);
          if( ! refalrts::repeated_stvar_left( vm, context[40], context[9], context[36], context[37] ) )
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
          //DEBUG: e.Tokens#1: 25
          //DEBUG: e.Types-B#3: 32
          //DEBUG: e.Types-E#3: 34
          //DEBUG: s.PartType#3: 41

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} (/17 {REMOVED TILE} )/18 t.NextToken#1/19 (/7 s.PartToken#2/9 {REMOVED TILE} )/8 {REMOVED TILE} e.Types-B#3/32 (/38 s.PartToken#2/40 {REMOVED TILE} )/39 e.Types-E#3/34 {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & SentencePart-AfterPattern:1$1=2/4 AsIs: t.Pattern#1/10 } Tile{ AsIs: s.PartType#3/41 } Tile{ AsIs: t.Pos#2/21 } Tile{ AsIs: </27 Reuse: & Result/31 } Tile{ AsIs: t.ErrorList#1/12 AsIs: s.Mode#1/14 } Tile{ AsIs: e.Tokens#1/25 } Tile{ AsIs: >/28 AsIs: >/1 ]] }
          refalrts::update_name(context[4], functions[efunc_gen_SentencePartm_AfterPattern_B1S1A2]);
          refalrts::update_name(context[31], functions[efunc_Result]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[28] );
          refalrts::push_stack( vm, context[27] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[28];
          res = refalrts::splice_evar( res, context[25], context[26] );
          res = refalrts::splice_evar( res, context[12], context[14] );
          res = refalrts::splice_evar( res, context[27], context[31] );
          res = refalrts::splice_evar( res, context[21], context[22] );
          res = refalrts::splice_evar( res, context[41], context[41] );
          refalrts::splice_to_freelist_open( vm, context[11], res );
          return refalrts::cSuccess;
        } while ( refalrts::open_evar_advance( context[32], context[33], context[29], context[30] ) );
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[27], context[28]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & SentencePart-AfterPattern:1/4 t.Pattern#1/10 t.ErrorList#1/12 s.Mode#1/14 (/17 e.Tokens#1/25 )/18 t.NextToken#1/19 (/7 s.EndOfPart#2/9 t.Pos#2/21 )/8 >/1
    context[25] = context[23];
    context[26] = context[24];
    // closed e.Tokens#1 as range 25
    //DEBUG: t.Pattern#1: 10
    //DEBUG: t.ErrorList#1: 12
    //DEBUG: t.NextToken#1: 19
    //DEBUG: t.Pos#2: 21
    //DEBUG: s.Mode#1: 14
    //DEBUG: s.EndOfPart#2: 9
    //DEBUG: e.Tokens#1: 25
    //9: s.EndOfPart#2
    //10: t.Pattern#1
    //12: t.ErrorList#1
    //14: s.Mode#1
    //19: t.NextToken#1
    //21: t.Pos#2
    //25: e.Tokens#1
    //32: s.EndOfPart#2

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[27]);
    refalrts::alloc_name(vm, context[29], functions[efunc_gen_SentencePartm_AfterPattern_B1S2C1]);
    refalrts::alloc_open_call(vm, context[30]);
    refalrts::alloc_name(vm, context[31], functions[efunc_OneOf]);
    refalrts::copy_stvar(vm, context[32], context[9]);
    refalrts::alloc_ident(vm, context[33], identifiers[ident_TkColon]);
    refalrts::alloc_ident(vm, context[34], identifiers[ident_TkSemicolon]);
    refalrts::alloc_close_call(vm, context[35]);
    refalrts::alloc_close_call(vm, context[28]);
    refalrts::push_stack( vm, context[28] );
    refalrts::push_stack( vm, context[27] );
    res = refalrts::splice_elem( res, context[28] );
    refalrts::push_stack( vm, context[35] );
    refalrts::push_stack( vm, context[30] );
    res = refalrts::splice_elem( res, context[35] );
    res = refalrts::splice_elem( res, context[34] );
    res = refalrts::splice_elem( res, context[33] );
    res = refalrts::splice_stvar( res, context[32] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_elem( res, context[27] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </27 & SentencePart-AfterPattern:1$2?1/31 # True/32 >/28
      context[29] = 0;
      context[30] = 0;
      context[31] = refalrts::call_left( context[29], context[30], context[27], context[28] );
      context[32] = refalrts::ident_left( identifiers[ident_True], context[29], context[30] );
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
      //DEBUG: e.Tokens#1: 25

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Mode#1/14 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.NextToken#1/19 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: </27 Reuse: & SentencePart-AfterPattern/31 HalfReuse: s.Mode1 #14/32 HalfReuse: </28 HalfReuse: & EL-AddErrorAt/1 } Tile{ AsIs: t.ErrorList#1/12 } t.Pos#2/21/33"Missed \',\' or \'="/35 Tile{ HalfReuse: '\''/0 HalfReuse: >/4 AsIs: t.Pattern#1/10 } Tile{ AsIs: (/17 } # TkComma/37 t.Pos#2/21/38 Tile{ AsIs: )/18 } Tile{ AsIs: (/7 AsIs: s.EndOfPart#2/9 AsIs: t.Pos#2/21 AsIs: )/8 } Tile{ AsIs: e.Tokens#1/25 } >/40 Tile{ ]] }
      refalrts::copy_evar(vm, context[33], context[34], context[21], context[22]);
      refalrts::alloc_chars(vm, context[35], context[36], "Missed \',\' or \'=", 16);
      refalrts::alloc_ident(vm, context[37], identifiers[ident_TkComma]);
      refalrts::copy_evar(vm, context[38], context[39], context[21], context[22]);
      refalrts::alloc_close_call(vm, context[40]);
      refalrts::update_name(context[31], functions[efunc_SentencePartm_AfterPattern]);
      refalrts::reinit_svar( context[32], context[14] );
      refalrts::reinit_open_call(context[28]);
      refalrts::reinit_name(context[1], functions[efunc_ELm_AddErrorAt]);
      refalrts::reinit_char(context[0], '\'');
      refalrts::reinit_close_call(context[4]);
      refalrts::push_stack( vm, context[40] );
      refalrts::push_stack( vm, context[27] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[17], context[18] );
      refalrts::push_stack( vm, context[4] );
      refalrts::push_stack( vm, context[28] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[40], context[40] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[37], context[39] );
      res = refalrts::splice_evar( res, context[17], context[17] );
      res = refalrts::splice_evar( res, context[0], context[11] );
      res = refalrts::splice_evar( res, context[33], context[36] );
      res = refalrts::splice_evar( res, context[12], context[13] );
      res = refalrts::splice_evar( res, context[27], context[1] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[27], context[28]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SentencePart-AfterPattern:1/4 t.Pattern#1/10 t.ErrorList#1/12 s.Mode#1/14 (/17 e.Tokens#1/15 )/18 t.NextToken#1/19 (/7 s.Unexpected#2/9 t.Pos#2/21 e.Info#2/5 )/8 >/1
  // closed e.Tokens#1 as range 15
  // closed e.Info#2 as range 5
  //DEBUG: t.Pattern#1: 10
  //DEBUG: t.ErrorList#1: 12
  //DEBUG: t.NextToken#1: 19
  //DEBUG: t.Pos#2: 21
  //DEBUG: s.Mode#1: 14
  //DEBUG: s.Unexpected#2: 9
  //DEBUG: e.Tokens#1: 15
  //DEBUG: e.Info#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Mode#1/14 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 } Tile{ AsIs: t.ErrorList#1/12 } Tile{ AsIs: (/7 AsIs: s.Unexpected#2/9 AsIs: t.Pos#2/21 AsIs: e.Info#2/5 AsIs: )/8 HalfReuse: 'v'/1 }"alid Refal expression, \'=\', \',\', \':\' or \';\'"/23 >/25 Tile{ AsIs: t.Pattern#1/10 } # Assign/26 t.Pos#2/21/27 Tile{ AsIs: (/17 } )/29 (/30 Tile{ AsIs: )/18 AsIs: t.NextToken#1/19 } Tile{ AsIs: e.Tokens#1/15 } Tile{ ]] }
  refalrts::alloc_chars(vm, context[23], context[24], "alid Refal expression, \'=\', \',\', \':\' or \';\'", 43);
  refalrts::alloc_close_call(vm, context[25]);
  refalrts::alloc_ident(vm, context[26], identifiers[ident_Assign]);
  refalrts::copy_evar(vm, context[27], context[28], context[21], context[22]);
  refalrts::alloc_close_bracket(vm, context[29]);
  refalrts::alloc_open_bracket(vm, context[30]);
  refalrts::update_name(context[4], functions[efunc_UnexpectedToken]);
  refalrts::reinit_char(context[1], 'v');
  refalrts::link_brackets( context[30], context[18] );
  refalrts::link_brackets( context[17], context[29] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[18], context[20] );
  res = refalrts::splice_evar( res, context[29], context[30] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[26], context[28] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[23], context[25] );
  res = refalrts::splice_evar( res, context[7], context[1] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SentencePartm_AfterPattern_B1("SentencePart-AfterPattern:1", COOKIE1_, COOKIE2_, func_gen_SentencePartm_AfterPattern_B1);


static refalrts::FnResult func_SentencePartm_AfterPattern(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & SentencePart-AfterPattern:1/4 } Tile{ AsIs: t.Pattern#1/8 } Tile{ AsIs: t.ErrorList#1/6 } Tile{ AsIs: s.Mode#1/5 } (/12 Tile{ AsIs: e.Tokens#1/2 } )/13 Tile{ AsIs: t.NextToken#1/10 } t.NextToken#1/10/14 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::copy_evar(vm, context[14], context[15], context[10], context[11]);
  refalrts::update_name(context[4], functions[efunc_gen_SentencePartm_AfterPattern_B1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SentencePartm_AfterPattern("SentencePart-AfterPattern", COOKIE1_, COOKIE2_, func_SentencePartm_AfterPattern);


static refalrts::FnResult func_Pattern(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Expression/4 AsIs: t.ErrorList#1/5 AsIs: s.Mode#1/7 } # Pattern/8 Tile{ AsIs: e.Tokens#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_ident(vm, context[8], identifiers[ident_Pattern]);
  refalrts::update_name(context[4], functions[efunc_Expression]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Pattern("Pattern", COOKIE1_, COOKIE2_, func_Pattern);


static refalrts::FnResult func_Result(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </8 & Result-Blocks/9 s.Mode#1/7/10 (/11 )/12 Tile{ AsIs: </0 Reuse: & Expression/4 AsIs: t.ErrorList#1/5 AsIs: s.Mode#1/7 } # Result/13 Tile{ AsIs: e.Tokens#1/2 } >/14 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Resultm_Blocks]);
  refalrts::copy_stvar(vm, context[10], context[7]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_close_bracket(vm, context[12]);
  refalrts::alloc_ident(vm, context[13], identifiers[ident_Result]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::update_name(context[4], functions[efunc_Expression]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[0] );
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

static refalrts::NativeReference nat_ref_Result("Result", COOKIE1_, COOKIE2_, func_Result);


static refalrts::FnResult func_gen_Resultm_Blocks_S3A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Result-Blocks/4 AsIs: s.Mode#1/5 AsIs: (/8 AsIs: e.Blocks#1/6 HalfReuse: (/9 AsIs: t.ColonPos#1/10 } Tile{ AsIs: e.Body#2/16 } Tile{ AsIs: )/19 } Tile{ HalfReuse: )/18 } Tile{ AsIs: t.ErrorList#2/14 } Tile{ AsIs: t.Result#1/12 } Tile{ AsIs: e.Tokens#2/2 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_Resultm_Blocks]);
  refalrts::reinit_open_bracket(context[9]);
  refalrts::reinit_close_bracket(context[18]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
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

static refalrts::NativeReference nat_ref_gen_Resultm_Blocks_S3A1("Result-Blocks$3=1", COOKIE1_, COOKIE2_, func_gen_Resultm_Blocks_S3A1);


static refalrts::FnResult func_Resultm_Blocks(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 48 elems
  refalrts::Iter context[48];
  refalrts::zeros( context, 48 );
  // </0 & Result-Blocks/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Result-Blocks/4 s.new#1/5 (/8 e.new#2/6 )/9 t.new#3/10 t.new#4/12 e.new#5/2 >/1
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
    // </0 & Result-Blocks/4 s.new#6/5 (/8 e.new#13/14 )/9 t.new#7/10 t.new#8/12 (/20 s.new#9/22 e.new#10/18 t.new#11/23 )/21 e.new#12/16 >/1
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
    // closed e.new#13 as range 14
    // closed e.new#12 as range 16
    if( ! refalrts::svar_left( context[22], context[18], context[19] ) )
      continue;
    context[24] = refalrts::tvar_right( context[23], context[18], context[19] );
    if( ! context[24] )
      continue;
    // closed e.new#10 as range 18
    do {
      // </0 & Result-Blocks/4 s.Mode#1/5 (/8 e.Blocks#1/25 )/9 t.ErrorList#1/10 t.Result#1/12 (/20 # TkRefal5Mode/22 t.ModePos#1/31 s.NewMode#1/23 )/21 e.Tokens#1/29 >/1
      context[25] = context[14];
      context[26] = context[15];
      context[27] = context[18];
      context[28] = context[19];
      context[29] = context[16];
      context[30] = context[17];
      if( ! refalrts::svar_term( context[23], context[23] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_TkRefal5Mode], context[22] ) )
        continue;
      // closed e.Blocks#1 as range 25
      // closed e.Tokens#1 as range 29
      context[32] = refalrts::tvar_left( context[31], context[27], context[28] );
      if( ! context[32] )
        continue;
      if( ! refalrts::empty_seq( context[27], context[28] ) )
        continue;
      //DEBUG: t.ErrorList#1: 10
      //DEBUG: t.Result#1: 12
      //DEBUG: s.NewMode#1: 23
      //DEBUG: s.Mode#1: 5
      //DEBUG: e.Blocks#1: 25
      //DEBUG: e.Tokens#1: 29
      //DEBUG: t.ModePos#1: 31

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Mode#1/5 {REMOVED TILE} (/20 # TkRefal5Mode/22 t.ModePos#1/31 {REMOVED TILE} )/21 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Result-Blocks/4 } Tile{ AsIs: s.NewMode#1/23 } Tile{ AsIs: (/8 AsIs: e.Blocks#1/25 AsIs: )/9 AsIs: t.ErrorList#1/10 AsIs: t.Result#1/12 } Tile{ AsIs: e.Tokens#1/29 } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[9] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[29], context[30] );
      res = refalrts::splice_evar( res, context[8], context[13] );
      res = refalrts::splice_evar( res, context[23], context[23] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Result-Blocks/4 s.new#14/5 (/8 e.new#20/25 )/9 t.new#15/10 t.new#16/12 (/20 s.new#18/22 t.new#19/23 )/21 e.new#17/27 >/1
    context[25] = context[14];
    context[26] = context[15];
    context[27] = context[16];
    context[28] = context[17];
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;
    // closed e.new#20 as range 25
    // closed e.new#17 as range 27
    do {
      // </0 & Result-Blocks/4 s.new#21/5 (/8 e.new#29/29 )/9 t.new#22/10 t.new#23/12 (/20 # TkColon/22 t.new#28/23 )/21 (/35 s.new#24/37 e.new#25/33 t.new#26/38 )/36 e.new#27/31 >/1
      context[29] = context[25];
      context[30] = context[26];
      context[31] = context[27];
      context[32] = context[28];
      if( ! refalrts::ident_term( identifiers[ident_TkColon], context[22] ) )
        continue;
      context[33] = 0;
      context[34] = 0;
      context[35] = refalrts::brackets_left( context[33], context[34], context[31], context[32] );
      if( ! context[35] )
        continue;
      refalrts::bracket_pointers(context[35], context[36]);
      // closed e.new#29 as range 29
      // closed e.new#27 as range 31
      if( ! refalrts::svar_left( context[37], context[33], context[34] ) )
        continue;
      context[39] = refalrts::tvar_right( context[38], context[33], context[34] );
      if( ! context[39] )
        continue;
      // closed e.new#25 as range 33
      do {
        // </0 & Result-Blocks/4 s.Mode#1/5 (/8 e.Blocks#1/40 )/9 t.ErrorList#1/10 t.Result#1/12 (/20 # TkColon/22 t.ColonPos#1/23 )/21 (/35 # TkRefal5Mode/37 t.ModePos#1/46 s.NewMode#1/38 )/36 e.Tokens#1/44 >/1
        context[40] = context[29];
        context[41] = context[30];
        context[42] = context[33];
        context[43] = context[34];
        context[44] = context[31];
        context[45] = context[32];
        if( ! refalrts::svar_term( context[38], context[38] ) )
          continue;
        if( ! refalrts::ident_term( identifiers[ident_TkRefal5Mode], context[37] ) )
          continue;
        // closed e.Blocks#1 as range 40
        // closed e.Tokens#1 as range 44
        context[47] = refalrts::tvar_left( context[46], context[42], context[43] );
        if( ! context[47] )
          continue;
        if( ! refalrts::empty_seq( context[42], context[43] ) )
          continue;
        //DEBUG: t.ErrorList#1: 10
        //DEBUG: t.Result#1: 12
        //DEBUG: t.ColonPos#1: 23
        //DEBUG: s.NewMode#1: 38
        //DEBUG: s.Mode#1: 5
        //DEBUG: e.Blocks#1: 40
        //DEBUG: e.Tokens#1: 44
        //DEBUG: t.ModePos#1: 46

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.Mode#1/5 {REMOVED TILE} (/35 # TkRefal5Mode/37 t.ModePos#1/46 {REMOVED TILE} )/36 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & Result-Blocks/4 } Tile{ AsIs: s.NewMode#1/38 } Tile{ AsIs: (/8 AsIs: e.Blocks#1/40 AsIs: )/9 AsIs: t.ErrorList#1/10 AsIs: t.Result#1/12 AsIs: (/20 AsIs: # TkColon/22 AsIs: t.ColonPos#1/23 AsIs: )/21 } Tile{ AsIs: e.Tokens#1/44 } Tile{ AsIs: >/1 ]] }
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[20], context[21] );
        refalrts::link_brackets( context[8], context[9] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[44], context[45] );
        res = refalrts::splice_evar( res, context[8], context[21] );
        res = refalrts::splice_evar( res, context[38], context[38] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Result-Blocks/4 s.Mode#1/5 (/8 e.Blocks#1/40 )/9 t.ErrorList#1/10 t.Result#1/12 (/20 # TkColon/22 t.ColonPos#1/23 )/21 (/35 # TkOpenBlock/37 t.BlockPos#1/38 )/36 e.Tokens#1/42 >/1
      context[40] = context[29];
      context[41] = context[30];
      context[42] = context[31];
      context[43] = context[32];
      if( ! refalrts::ident_term( identifiers[ident_TkOpenBlock], context[37] ) )
        continue;
      if( ! refalrts::empty_seq( context[33], context[34] ) )
        continue;
      // closed e.Blocks#1 as range 40
      // closed e.Tokens#1 as range 42
      //DEBUG: t.ErrorList#1: 10
      //DEBUG: t.Result#1: 12
      //DEBUG: t.ColonPos#1: 23
      //DEBUG: t.BlockPos#1: 38
      //DEBUG: s.Mode#1: 5
      //DEBUG: e.Blocks#1: 40
      //DEBUG: e.Tokens#1: 42

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Result-Blocks$3=1/4 AsIs: s.Mode#1/5 AsIs: (/8 AsIs: e.Blocks#1/40 AsIs: )/9 } Tile{ AsIs: t.ColonPos#1/23 } Tile{ AsIs: t.Result#1/12 HalfReuse: </20 HalfReuse: & Block/22 } Tile{ AsIs: t.ErrorList#1/10 } Tile{ HalfReuse: s.Mode1 #5/21 AsIs: (/35 AsIs: # TkOpenBlock/37 AsIs: t.BlockPos#1/38 AsIs: )/36 AsIs: e.Tokens#1/42 AsIs: >/1 } >/44 Tile{ ]] }
      refalrts::alloc_close_call(vm, context[44]);
      refalrts::update_name(context[4], functions[efunc_gen_Resultm_Blocks_S3A1]);
      refalrts::reinit_open_call(context[20]);
      refalrts::reinit_name(context[22], functions[efunc_Block]);
      refalrts::reinit_svar( context[21], context[5] );
      refalrts::push_stack( vm, context[44] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[20] );
      refalrts::link_brackets( context[35], context[36] );
      refalrts::link_brackets( context[8], context[9] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[44], context[44] );
      res = refalrts::splice_evar( res, context[21], context[1] );
      res = refalrts::splice_evar( res, context[10], context[11] );
      res = refalrts::splice_evar( res, context[12], context[22] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Result-Blocks/4 s.Mode#1/5 (/8 e.Blocks#1/29 )/9 t.ErrorList#1/10 t.Result#1/12 (/20 # TkOpenBlock/22 t.BlockPos#1/23 )/21 e.Tokens#1/31 >/1
    context[29] = context[25];
    context[30] = context[26];
    context[31] = context[27];
    context[32] = context[28];
    if( ! refalrts::ident_term( identifiers[ident_TkOpenBlock], context[22] ) )
      continue;
    // closed e.Blocks#1 as range 29
    // closed e.Tokens#1 as range 31
    //DEBUG: t.ErrorList#1: 10
    //DEBUG: t.Result#1: 12
    //DEBUG: t.BlockPos#1: 23
    //DEBUG: s.Mode#1: 5
    //DEBUG: e.Blocks#1: 29
    //DEBUG: e.Tokens#1: 31

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Result-Blocks/4 AsIs: s.Mode#1/5 AsIs: (/8 AsIs: e.Blocks#1/29 AsIs: )/9 } </33 & EL-AddErrorAt/34 Tile{ AsIs: t.ErrorList#1/10 } t.BlockPos#1/23/35"Missed \':\'"/37 >/39 Tile{ AsIs: t.Result#1/12 } (/40 # TkColon/41 t.BlockPos#1/23/42 )/44 Tile{ AsIs: (/20 AsIs: # TkOpenBlock/22 AsIs: t.BlockPos#1/23 AsIs: )/21 AsIs: e.Tokens#1/31 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[33]);
    refalrts::alloc_name(vm, context[34], functions[efunc_ELm_AddErrorAt]);
    refalrts::copy_evar(vm, context[35], context[36], context[23], context[24]);
    refalrts::alloc_chars(vm, context[37], context[38], "Missed \':\'", 10);
    refalrts::alloc_close_call(vm, context[39]);
    refalrts::alloc_open_bracket(vm, context[40]);
    refalrts::alloc_ident(vm, context[41], identifiers[ident_TkColon]);
    refalrts::copy_evar(vm, context[42], context[43], context[23], context[24]);
    refalrts::alloc_close_bracket(vm, context[44]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[20], context[21] );
    refalrts::link_brackets( context[40], context[44] );
    refalrts::push_stack( vm, context[39] );
    refalrts::push_stack( vm, context[33] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[20];
    res = refalrts::splice_evar( res, context[40], context[44] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[35], context[39] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[33], context[34] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Result-Blocks/4 s.Mode#1/5 (/8 e.Blocks#1/6 )/9 t.ErrorList#1/10 t.Result#1/12 e.Tokens#1/2 >/1
  // closed e.Blocks#1 as range 6
  // closed e.Tokens#1 as range 2
  //DEBUG: t.ErrorList#1: 10
  //DEBUG: t.Result#1: 12
  //DEBUG: s.Mode#1: 5
  //DEBUG: e.Blocks#1: 6
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Result-Blocks/4 s.Mode#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/10 AsIs: t.Result#1/12 } Tile{ AsIs: (/8 AsIs: e.Blocks#1/6 AsIs: )/9 } Tile{ AsIs: e.Tokens#1/2 } Tile{ ]] }
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_evar( res, context[10], context[13] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Resultm_Blocks("Result-Blocks", COOKIE1_, COOKIE2_, func_Resultm_Blocks);


static refalrts::FnResult func_Expression(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & Expression-CheckBrackets/10 s.Mode#1/7/11 s.Kind#1/8/12 Tile{ AsIs: </0 Reuse: & TokenChain/4 AsIs: t.ErrorList#1/5 AsIs: s.Mode#1/7 AsIs: s.Kind#1/8 AsIs: e.Tokens#1/2 AsIs: >/1 } >/13 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_Expressionm_CheckBrackets]);
  refalrts::copy_stvar(vm, context[11], context[7]);
  refalrts::copy_stvar(vm, context[12], context[8]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_TokenChain]);
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[9], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Expression("Expression", COOKIE1_, COOKIE2_, func_Expression);


static refalrts::FnResult func_TokenChain(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain/4 } Tile{ AsIs: s.Mode#1/7 AsIs: s.Kind#1/8 } Tile{ AsIs: t.ErrorList#1/5 } (/9 )/10 Tile{ AsIs: e.Tokens#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_close_bracket(vm, context[10]);
  refalrts::update_name(context[4], functions[efunc_DoTokenChain]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
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

static refalrts::NativeReference nat_ref_TokenChain("TokenChain", COOKIE1_, COOKIE2_, func_TokenChain);


static refalrts::FnResult func_gen_DoTokenChain_B1S6A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 } Tile{ AsIs: t.ErrorList#4/15 } Tile{ AsIs: (/9 AsIs: e.Collected#1/7 HalfReuse: (/10 HalfReuse: # Brackets/13 AsIs: e.BracketTerms#3/11 AsIs: )/14 } )/17 Tile{ AsIs: e.Tokens#4/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[17]);
  refalrts::update_name(context[4], functions[efunc_DoTokenChain]);
  refalrts::reinit_open_bracket(context[10]);
  refalrts::reinit_ident(context[13], identifiers[ident_Brackets]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
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

static refalrts::NativeReference nat_ref_gen_DoTokenChain_B1S6A2("DoTokenChain:1$6=2", COOKIE1_, COOKIE2_, func_gen_DoTokenChain_B1S6A2);


static refalrts::FnResult func_gen_DoTokenChain_B1S6A2B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & DoTokenChain:1$6=2:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoTokenChain:1$6=2:1/4 t.new#1/5 (/9 s.new#2/11 t.new#3/12 e.new#4/7 )/10 e.new#5/2 >/1
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
  context[13] = refalrts::tvar_left( context[12], context[7], context[8] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 7
  do {
    // </0 & DoTokenChain:1$6=2:1/4 t.ErrorList#3/5 (/9 # TkCloseBracket/11 t.ClosePos#4/12 )/10 e.Tokens#4/14 >/1
    context[14] = context[2];
    context[15] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_TkCloseBracket], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    // closed e.Tokens#4 as range 14
    //DEBUG: t.ErrorList#3: 5
    //DEBUG: t.ClosePos#4: 12
    //DEBUG: e.Tokens#4: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoTokenChain:1$6=2:1/4 {REMOVED TILE} (/9 # TkCloseBracket/11 t.ClosePos#4/12 )/10 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#3/5 } Tile{ AsIs: e.Tokens#4/14 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoTokenChain:1$6=2:1/4 t.ErrorList#3/5 (/9 s.Type#4/11 t.Pos#4/12 e.Value#4/7 )/10 e.Tokens#4/2 >/1
  // closed e.Value#4 as range 7
  // closed e.Tokens#4 as range 2
  //DEBUG: t.ErrorList#3: 5
  //DEBUG: t.Pos#4: 12
  //DEBUG: s.Type#4: 11
  //DEBUG: e.Value#4: 7
  //DEBUG: e.Tokens#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#3/5 } t.Pos#4/12/14"Missed \')\'"/16 Tile{ AsIs: >/1 } Tile{ AsIs: (/9 AsIs: s.Type#4/11 AsIs: t.Pos#4/12 AsIs: e.Value#4/7 AsIs: )/10 } Tile{ AsIs: e.Tokens#4/2 } Tile{ ]] }
  refalrts::copy_evar(vm, context[14], context[15], context[12], context[13]);
  refalrts::alloc_chars(vm, context[16], context[17], "Missed \')\'", 10);
  refalrts::update_name(context[4], functions[efunc_ELm_AddErrorAt]);
  refalrts::link_brackets( context[9], context[10] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[14], context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoTokenChain_B1S6A2B1("DoTokenChain:1$6=2:1", COOKIE1_, COOKIE2_, func_gen_DoTokenChain_B1S6A2B1);


static refalrts::FnResult func_gen_DoTokenChain_B1S6A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 45 elems
  refalrts::Iter context[45];
  refalrts::zeros( context, 45 );
  // </0 & DoTokenChain:1$6=1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoTokenChain:1$6=1/4 s.new#1/5 s.new#2/6 (/9 e.new#3/7 )/10 t.new#4/11 (/15 e.new#5/13 )/16 e.new#6/2 >/1
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
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.new#5 as range 13
  // closed e.new#6 as range 2
  do {
    // </0 & DoTokenChain:1$6=1/4 s.new#7/5 s.new#8/6 (/9 e.new#14/17 )/10 t.new#9/11 (/15 e.new#15/19 )/16 (/25 s.new#10/27 t.new#11/28 e.new#12/23 )/26 e.new#13/21 >/1
    context[17] = context[7];
    context[18] = context[8];
    context[19] = context[13];
    context[20] = context[14];
    context[21] = context[2];
    context[22] = context[3];
    context[23] = 0;
    context[24] = 0;
    context[25] = refalrts::brackets_left( context[23], context[24], context[21], context[22] );
    if( ! context[25] )
      continue;
    refalrts::bracket_pointers(context[25], context[26]);
    // closed e.new#14 as range 17
    // closed e.new#15 as range 19
    // closed e.new#13 as range 21
    if( ! refalrts::svar_left( context[27], context[23], context[24] ) )
      continue;
    context[29] = refalrts::tvar_left( context[28], context[23], context[24] );
    if( ! context[29] )
      continue;
    // closed e.new#12 as range 23
    do {
      // </0 & DoTokenChain:1$6=1/4 s.Mode#1/5 s.Kind#1/6 (/9 e.Collected#1/30 )/10 t.ErrorList#3/11 (/15 e.BracketTerms#3/32 )/16 (/25 # TkCloseBracket/27 t.1#0/28 )/26 e.#0/34 >/1
      context[30] = context[17];
      context[31] = context[18];
      context[32] = context[19];
      context[33] = context[20];
      context[34] = context[21];
      context[35] = context[22];
      if( ! refalrts::ident_term( identifiers[ident_TkCloseBracket], context[27] ) )
        continue;
      if( ! refalrts::empty_seq( context[23], context[24] ) )
        continue;
      // closed e.Collected#1 as range 30
      // closed e.BracketTerms#3 as range 32
      // closed e.#0 as range 34
      //DEBUG: t.ErrorList#3: 11
      //DEBUG: t.1#0: 28
      //DEBUG: s.Mode#1: 5
      //DEBUG: s.Kind#1: 6
      //DEBUG: e.Collected#1: 30
      //DEBUG: e.BracketTerms#3: 32
      //DEBUG: e.#0: 34

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/25 # TkCloseBracket/27 t.1#0/28 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 } Tile{ AsIs: t.ErrorList#3/11 } Tile{ AsIs: (/9 AsIs: e.Collected#1/30 HalfReuse: (/10 } Tile{ HalfReuse: # Brackets/15 AsIs: e.BracketTerms#3/32 AsIs: )/16 } Tile{ AsIs: )/26 AsIs: e.#0/34 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_DoTokenChain]);
      refalrts::reinit_open_bracket(context[10]);
      refalrts::reinit_ident(context[15], identifiers[ident_Brackets]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[26] );
      refalrts::link_brackets( context[10], context[16] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[26];
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::splice_to_freelist_open( vm, context[6], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoTokenChain:1$6=1/4 s.Mode#1/5 s.Kind#1/6 (/9 e.Collected#1/30 )/10 t.ErrorList#3/11 (/15 e.BracketTerms#3/32 )/16 (/25 s.Type#4/27 t.1#0/28 e.2#0/34 )/26 e.#0/36 >/1
    context[30] = context[17];
    context[31] = context[18];
    context[32] = context[19];
    context[33] = context[20];
    context[34] = context[23];
    context[35] = context[24];
    context[36] = context[21];
    context[37] = context[22];
    // closed e.Collected#1 as range 30
    // closed e.BracketTerms#3 as range 32
    // closed e.2#0 as range 34
    // closed e.#0 as range 36
    //DEBUG: t.ErrorList#3: 11
    //DEBUG: t.1#0: 28
    //DEBUG: s.Mode#1: 5
    //DEBUG: s.Kind#1: 6
    //DEBUG: s.Type#4: 27
    //DEBUG: e.Collected#1: 30
    //DEBUG: e.BracketTerms#3: 32
    //DEBUG: e.2#0: 34
    //DEBUG: e.#0: 36

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain:1$6=2/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 AsIs: (/9 AsIs: e.Collected#1/30 AsIs: )/10 } Tile{ AsIs: (/15 } Tile{ AsIs: e.BracketTerms#3/32 } )/38 </39 & EL-AddErrorAt/40 Tile{ AsIs: t.ErrorList#3/11 } t.1#0/28/41"Missed \')\'"/43 Tile{ HalfReuse: >/16 AsIs: (/25 AsIs: s.Type#4/27 AsIs: t.1#0/28 AsIs: e.2#0/34 AsIs: )/26 AsIs: e.#0/36 AsIs: >/1 ]] }
    refalrts::alloc_close_bracket(vm, context[38]);
    refalrts::alloc_open_call(vm, context[39]);
    refalrts::alloc_name(vm, context[40], functions[efunc_ELm_AddErrorAt]);
    refalrts::copy_evar(vm, context[41], context[42], context[28], context[29]);
    refalrts::alloc_chars(vm, context[43], context[44], "Missed \')\'", 10);
    refalrts::update_name(context[4], functions[efunc_gen_DoTokenChain_B1S6A2]);
    refalrts::reinit_close_call(context[16]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[25], context[26] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[39] );
    refalrts::link_brackets( context[15], context[38] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[16];
    res = refalrts::splice_evar( res, context[41], context[44] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[38], context[40] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoTokenChain:1$6=1/4 s.Mode#1/5 s.Kind#1/6 (/9 e.Collected#1/7 )/10 t.ErrorList#3/11 (/15 e.BracketTerms#3/13 )/16 e.Tokens#3/2 >/1
  // closed e.Collected#1 as range 7
  // closed e.BracketTerms#3 as range 13
  // closed e.Tokens#3 as range 2
  //DEBUG: t.ErrorList#3: 11
  //DEBUG: s.Mode#1: 5
  //DEBUG: s.Kind#1: 6
  //DEBUG: e.Collected#1: 7
  //DEBUG: e.BracketTerms#3: 13
  //DEBUG: e.Tokens#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain:1$6=2/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 AsIs: (/9 AsIs: e.Collected#1/7 AsIs: )/10 } Tile{ AsIs: (/15 AsIs: e.BracketTerms#3/13 AsIs: )/16 } </17 & DoTokenChain:1$6=2:1*2/18 Tile{ AsIs: t.ErrorList#3/11 } Tile{ AsIs: e.Tokens#3/2 } >/19 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[17]);
  refalrts::alloc_name(vm, context[18], functions[efunc_gen_DoTokenChain_B1S6A2B1D2]);
  refalrts::alloc_close_call(vm, context[19]);
  refalrts::update_name(context[4], functions[efunc_gen_DoTokenChain_B1S6A2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[17] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoTokenChain_B1S6A1("DoTokenChain:1$6=1", COOKIE1_, COOKIE2_, func_gen_DoTokenChain_B1S6A1);


static refalrts::FnResult func_gen_DoTokenChain_B1S7A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain-AfterCall/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 AsIs: (/9 AsIs: e.Collected#1/7 AsIs: )/10 AsIs: t.Pos#2/11 AsIs: (/15 } )/19 </20 Tile{ HalfReuse: & TokenChain/16 AsIs: t.ErrorList#3/17 } s.Mode#1/5/21 s.Kind#1/6/22 Tile{ AsIs: e.Tokens#1/13 } >/23 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[19]);
  refalrts::alloc_open_call(vm, context[20]);
  refalrts::copy_stvar(vm, context[21], context[5]);
  refalrts::copy_stvar(vm, context[22], context[6]);
  refalrts::alloc_close_call(vm, context[23]);
  refalrts::update_name(context[4], functions[efunc_DoTokenChainm_AfterCall]);
  refalrts::reinit_name(context[16], functions[efunc_TokenChain]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[20] );
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

static refalrts::NativeReference nat_ref_gen_DoTokenChain_B1S7A1("DoTokenChain:1$7=1", COOKIE1_, COOKIE2_, func_gen_DoTokenChain_B1S7A1);


static refalrts::FnResult func_gen_DoTokenChain_B1S9A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 } Tile{ AsIs: t.ErrorList#5/21 } Tile{ AsIs: (/19 } Tile{ AsIs: e.Collected#1/7 } Tile{ AsIs: (/9 } Tile{ HalfReuse: # ADT-Brackets/10 AsIs: t.OpenPos#2/11 AsIs: (/15 AsIs: e.FuncName#2/13 AsIs: )/16 } Tile{ AsIs: e.BracketTerms#4/17 } Tile{ AsIs: )/20 } )/23 Tile{ AsIs: e.Tokens#5/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[23]);
  refalrts::update_name(context[4], functions[efunc_DoTokenChain]);
  refalrts::reinit_ident(context[10], identifiers[ident_ADTm_Brackets]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
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

static refalrts::NativeReference nat_ref_gen_DoTokenChain_B1S9A3("DoTokenChain:1$9=3", COOKIE1_, COOKIE2_, func_gen_DoTokenChain_B1S9A3);


static refalrts::FnResult func_gen_DoTokenChain_B1S9A3B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & DoTokenChain:1$9=3:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoTokenChain:1$9=3:1/4 t.new#1/5 (/9 s.new#2/11 t.new#3/12 e.new#4/7 )/10 e.new#5/2 >/1
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
  context[13] = refalrts::tvar_left( context[12], context[7], context[8] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 7
  do {
    // </0 & DoTokenChain:1$9=3:1/4 t.ErrorList#4/5 (/9 # TkCloseADT/11 t.ClosePos#5/12 )/10 e.Tokens#5/14 >/1
    context[14] = context[2];
    context[15] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_TkCloseADT], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    // closed e.Tokens#5 as range 14
    //DEBUG: t.ErrorList#4: 5
    //DEBUG: t.ClosePos#5: 12
    //DEBUG: e.Tokens#5: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoTokenChain:1$9=3:1/4 {REMOVED TILE} (/9 # TkCloseADT/11 t.ClosePos#5/12 )/10 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#4/5 } Tile{ AsIs: e.Tokens#5/14 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoTokenChain:1$9=3:1/4 t.ErrorList#4/5 (/9 s.Type#5/11 t.Pos#5/12 e.Value#5/7 )/10 e.Tokens#5/2 >/1
  // closed e.Value#5 as range 7
  // closed e.Tokens#5 as range 2
  //DEBUG: t.ErrorList#4: 5
  //DEBUG: t.Pos#5: 12
  //DEBUG: s.Type#5: 11
  //DEBUG: e.Value#5: 7
  //DEBUG: e.Tokens#5: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#4/5 } t.Pos#5/12/14"Missed \']\'"/16 Tile{ AsIs: >/1 } Tile{ AsIs: (/9 AsIs: s.Type#5/11 AsIs: t.Pos#5/12 AsIs: e.Value#5/7 AsIs: )/10 } Tile{ AsIs: e.Tokens#5/2 } Tile{ ]] }
  refalrts::copy_evar(vm, context[14], context[15], context[12], context[13]);
  refalrts::alloc_chars(vm, context[16], context[17], "Missed \']\'", 10);
  refalrts::update_name(context[4], functions[efunc_ELm_AddErrorAt]);
  refalrts::link_brackets( context[9], context[10] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[14], context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoTokenChain_B1S9A3B1("DoTokenChain:1$9=3:1", COOKIE1_, COOKIE2_, func_gen_DoTokenChain_B1S9A3B1);


static refalrts::FnResult func_gen_DoTokenChain_B1S9A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 55 elems
  refalrts::Iter context[55];
  refalrts::zeros( context, 55 );
  // </0 & DoTokenChain:1$9=2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoTokenChain:1$9=2/4 s.new#1/5 s.new#2/6 (/9 e.new#3/7 )/10 t.new#4/11 (/15 e.new#5/13 )/16 t.new#6/17 (/21 e.new#7/19 )/22 e.new#8/2 >/1
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
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.new#5 as range 13
  context[18] = refalrts::tvar_left( context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  context[19] = 0;
  context[20] = 0;
  context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[21], context[22]);
  // closed e.new#7 as range 19
  // closed e.new#8 as range 2
  do {
    // </0 & DoTokenChain:1$9=2/4 s.new#9/5 s.new#10/6 (/9 e.new#17/23 )/10 t.new#11/11 (/15 e.new#18/25 )/16 t.new#12/17 (/21 e.new#19/27 )/22 (/33 s.new#13/35 t.new#14/36 e.new#15/31 )/34 e.new#16/29 >/1
    context[23] = context[7];
    context[24] = context[8];
    context[25] = context[13];
    context[26] = context[14];
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
    // closed e.new#17 as range 23
    // closed e.new#18 as range 25
    // closed e.new#19 as range 27
    // closed e.new#16 as range 29
    if( ! refalrts::svar_left( context[35], context[31], context[32] ) )
      continue;
    context[37] = refalrts::tvar_left( context[36], context[31], context[32] );
    if( ! context[37] )
      continue;
    // closed e.new#15 as range 31
    do {
      // </0 & DoTokenChain:1$9=2/4 s.Mode#1/5 s.Kind#1/6 (/9 e.Collected#1/38 )/10 t.OpenPos#2/11 (/15 e.FuncName#2/40 )/16 t.ErrorList#4/17 (/21 e.BracketTerms#4/42 )/22 (/33 # TkCloseADT/35 t.1#0/36 )/34 e.#0/44 >/1
      context[38] = context[23];
      context[39] = context[24];
      context[40] = context[25];
      context[41] = context[26];
      context[42] = context[27];
      context[43] = context[28];
      context[44] = context[29];
      context[45] = context[30];
      if( ! refalrts::ident_term( identifiers[ident_TkCloseADT], context[35] ) )
        continue;
      if( ! refalrts::empty_seq( context[31], context[32] ) )
        continue;
      // closed e.Collected#1 as range 38
      // closed e.FuncName#2 as range 40
      // closed e.BracketTerms#4 as range 42
      // closed e.#0 as range 44
      //DEBUG: t.OpenPos#2: 11
      //DEBUG: t.ErrorList#4: 17
      //DEBUG: t.1#0: 36
      //DEBUG: s.Mode#1: 5
      //DEBUG: s.Kind#1: 6
      //DEBUG: e.Collected#1: 38
      //DEBUG: e.FuncName#2: 40
      //DEBUG: e.BracketTerms#4: 42
      //DEBUG: e.#0: 44

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # TkCloseADT/35 t.1#0/36 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 } Tile{ AsIs: t.ErrorList#4/17 AsIs: (/21 } Tile{ AsIs: e.Collected#1/38 } Tile{ AsIs: (/33 } Tile{ HalfReuse: # ADT-Brackets/10 AsIs: t.OpenPos#2/11 AsIs: (/15 AsIs: e.FuncName#2/40 AsIs: )/16 } Tile{ AsIs: e.BracketTerms#4/42 } Tile{ AsIs: )/22 } Tile{ AsIs: )/34 AsIs: e.#0/44 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_DoTokenChain]);
      refalrts::reinit_ident(context[10], identifiers[ident_ADTm_Brackets]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[21], context[34] );
      refalrts::link_brackets( context[33], context[22] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[34];
      res = refalrts::splice_evar( res, context[22], context[22] );
      res = refalrts::splice_evar( res, context[42], context[43] );
      res = refalrts::splice_evar( res, context[10], context[16] );
      res = refalrts::splice_evar( res, context[33], context[33] );
      res = refalrts::splice_evar( res, context[38], context[39] );
      res = refalrts::splice_evar( res, context[17], context[21] );
      refalrts::splice_to_freelist_open( vm, context[6], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoTokenChain:1$9=2/4 s.Mode#1/5 s.Kind#1/6 (/9 e.Collected#1/38 )/10 t.OpenPos#2/11 (/15 e.FuncName#2/40 )/16 t.ErrorList#4/17 (/21 e.BracketTerms#4/42 )/22 (/33 s.Type#5/35 t.1#0/36 e.2#0/44 )/34 e.#0/46 >/1
    context[38] = context[23];
    context[39] = context[24];
    context[40] = context[25];
    context[41] = context[26];
    context[42] = context[27];
    context[43] = context[28];
    context[44] = context[31];
    context[45] = context[32];
    context[46] = context[29];
    context[47] = context[30];
    // closed e.Collected#1 as range 38
    // closed e.FuncName#2 as range 40
    // closed e.BracketTerms#4 as range 42
    // closed e.2#0 as range 44
    // closed e.#0 as range 46
    //DEBUG: t.OpenPos#2: 11
    //DEBUG: t.ErrorList#4: 17
    //DEBUG: t.1#0: 36
    //DEBUG: s.Mode#1: 5
    //DEBUG: s.Kind#1: 6
    //DEBUG: s.Type#5: 35
    //DEBUG: e.Collected#1: 38
    //DEBUG: e.FuncName#2: 40
    //DEBUG: e.BracketTerms#4: 42
    //DEBUG: e.2#0: 44
    //DEBUG: e.#0: 46

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain:1$9=3/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 AsIs: (/9 AsIs: e.Collected#1/38 AsIs: )/10 AsIs: t.OpenPos#2/11 AsIs: (/15 AsIs: e.FuncName#2/40 AsIs: )/16 } Tile{ AsIs: (/21 } Tile{ AsIs: e.BracketTerms#4/42 } )/48 </49 & EL-AddErrorAt/50 Tile{ AsIs: t.ErrorList#4/17 } t.1#0/36/51"Missed \']\'"/53 Tile{ HalfReuse: >/22 AsIs: (/33 AsIs: s.Type#5/35 AsIs: t.1#0/36 AsIs: e.2#0/44 AsIs: )/34 AsIs: e.#0/46 AsIs: >/1 ]] }
    refalrts::alloc_close_bracket(vm, context[48]);
    refalrts::alloc_open_call(vm, context[49]);
    refalrts::alloc_name(vm, context[50], functions[efunc_ELm_AddErrorAt]);
    refalrts::copy_evar(vm, context[51], context[52], context[36], context[37]);
    refalrts::alloc_chars(vm, context[53], context[54], "Missed \']\'", 10);
    refalrts::update_name(context[4], functions[efunc_gen_DoTokenChain_B1S9A3]);
    refalrts::reinit_close_call(context[22]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[33], context[34] );
    refalrts::push_stack( vm, context[22] );
    refalrts::push_stack( vm, context[49] );
    refalrts::link_brackets( context[21], context[48] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[22];
    res = refalrts::splice_evar( res, context[51], context[54] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[48], context[50] );
    res = refalrts::splice_evar( res, context[42], context[43] );
    res = refalrts::splice_evar( res, context[21], context[21] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoTokenChain:1$9=2/4 s.Mode#1/5 s.Kind#1/6 (/9 e.Collected#1/7 )/10 t.OpenPos#2/11 (/15 e.FuncName#2/13 )/16 t.ErrorList#4/17 (/21 e.BracketTerms#4/19 )/22 e.Tokens#4/2 >/1
  // closed e.Collected#1 as range 7
  // closed e.FuncName#2 as range 13
  // closed e.BracketTerms#4 as range 19
  // closed e.Tokens#4 as range 2
  //DEBUG: t.OpenPos#2: 11
  //DEBUG: t.ErrorList#4: 17
  //DEBUG: s.Mode#1: 5
  //DEBUG: s.Kind#1: 6
  //DEBUG: e.Collected#1: 7
  //DEBUG: e.FuncName#2: 13
  //DEBUG: e.BracketTerms#4: 19
  //DEBUG: e.Tokens#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain:1$9=3/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 AsIs: (/9 AsIs: e.Collected#1/7 AsIs: )/10 AsIs: t.OpenPos#2/11 AsIs: (/15 AsIs: e.FuncName#2/13 AsIs: )/16 } Tile{ AsIs: (/21 AsIs: e.BracketTerms#4/19 AsIs: )/22 } </23 & DoTokenChain:1$9=3:1*2/24 Tile{ AsIs: t.ErrorList#4/17 } Tile{ AsIs: e.Tokens#4/2 } >/25 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[23]);
  refalrts::alloc_name(vm, context[24], functions[efunc_gen_DoTokenChain_B1S9A3B1D2]);
  refalrts::alloc_close_call(vm, context[25]);
  refalrts::update_name(context[4], functions[efunc_gen_DoTokenChain_B1S9A3]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[23] );
  refalrts::link_brackets( context[21], context[22] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoTokenChain_B1S9A2("DoTokenChain:1$9=2", COOKIE1_, COOKIE2_, func_gen_DoTokenChain_B1S9A2);


static refalrts::FnResult func_gen_DoTokenChain_B1S9A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain:1$9=2/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 AsIs: (/9 AsIs: e.Collected#1/7 AsIs: )/10 AsIs: t.OpenPos#2/11 AsIs: (/15 AsIs: e.FuncName#2/13 AsIs: )/16 HalfReuse: </19 } Tile{ HalfReuse: & TokenChain/20 AsIs: t.ErrorList#3/21 } s.Mode#1/5/23 s.Kind#1/6/24 Tile{ AsIs: e.Tokens#1/17 } >/25 Tile{ AsIs: >/1 ]] }
  refalrts::copy_stvar(vm, context[23], context[5]);
  refalrts::copy_stvar(vm, context[24], context[6]);
  refalrts::alloc_close_call(vm, context[25]);
  refalrts::update_name(context[4], functions[efunc_gen_DoTokenChain_B1S9A2]);
  refalrts::reinit_open_call(context[19]);
  refalrts::reinit_name(context[20], functions[efunc_TokenChain]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[19] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[20], context[22] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoTokenChain_B1S9A1("DoTokenChain:1$9=1", COOKIE1_, COOKIE2_, func_gen_DoTokenChain_B1S9A1);


static refalrts::FnResult func_gen_DoTokenChain_B1S11A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/9 {REMOVED TILE} )/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 } Tile{ AsIs: t.ErrorList#3/11 AsIs: (/15 } Tile{ AsIs: e.Collected#1/7 } Tile{ AsIs: e.Term#3/13 } Tile{ AsIs: )/16 AsIs: e.Tokens#3/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_DoTokenChain]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[16];
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[11], context[15] );
  refalrts::splice_to_freelist_open( vm, context[6], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoTokenChain_B1S11A1("DoTokenChain:1$11=1", COOKIE1_, COOKIE2_, func_gen_DoTokenChain_B1S11A1);


static refalrts::FnResult func_gen_DoTokenChain_B1S11A1B1S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#1/5 AsIs: t.Pos#2/7 } Tile{ AsIs: e.ErrorMessage#4/2 } Tile{ AsIs: >/1 } Tile{ AsIs: (/11 } Tile{ AsIs: )/12 } Tile{ AsIs: e.Tokens#3/9 } Tile{ ]] }
  refalrts::update_name(context[4], functions[efunc_ELm_AddErrorAt]);
  refalrts::link_brackets( context[11], context[12] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
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

static refalrts::NativeReference nat_ref_gen_DoTokenChain_B1S11A1B1S2A1("DoTokenChain:1$11=1:1$2=1", COOKIE1_, COOKIE2_, func_gen_DoTokenChain_B1S11A1B1S2A1);


static refalrts::FnResult func_gen_DoTokenChain_B1S11A1B1S2A1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & DoTokenChain:1$11=1:1$2=1:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoTokenChain:1$11=1:1$2=1:1/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & DoTokenChain:1$11=1:1$2=1:1/4 # Classic/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_Classic], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: '\''/0 HalfReuse: '&'/4 HalfReuse: '\''/5 HalfReuse: ' '/1 }"is not where-with sign"/6 Tile{ ]] }
    refalrts::alloc_chars(vm, context[6], context[7], "is not where-with sign", 22);
    refalrts::reinit_char(context[0], '\'');
    refalrts::reinit_char(context[4], '&');
    refalrts::reinit_char(context[5], '\'');
    refalrts::reinit_char(context[1], ' ');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoTokenChain:1$11=1:1$2=1:1/4 # Extended/5 >/1
  if( ! refalrts::ident_term( identifiers[ident_Extended], context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: 'E'/0 HalfReuse: 'x'/4 HalfReuse: 'p'/5 HalfReuse: 'e'/1 }"cted function name after \'&\'"/6 Tile{ ]] }
  refalrts::alloc_chars(vm, context[6], context[7], "cted function name after \'&\'", 28);
  refalrts::reinit_char(context[0], 'E');
  refalrts::reinit_char(context[4], 'x');
  refalrts::reinit_char(context[5], 'p');
  refalrts::reinit_char(context[1], 'e');
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoTokenChain_B1S11A1B1S2A1B1("DoTokenChain:1$11=1:1$2=1:1", COOKIE1_, COOKIE2_, func_gen_DoTokenChain_B1S11A1B1S2A1B1);


static refalrts::FnResult func_gen_DoTokenChain_B1S11A1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & DoTokenChain:1$11=1:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoTokenChain:1$11=1:1/4 t.new#1/5 t.new#2/7 s.new#3/9 e.new#4/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 2
  do {
    // </0 & DoTokenChain:1$11=1:1/4 t.ErrorList#1/5 t.Pos#2/7 # Extended/9 (/14 # TkName/16 t.Pos#3/17 e.Name#3/12 )/15 e.Tokens#3/10 >/1
    context[10] = context[2];
    context[11] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Extended], context[9] ) )
      continue;
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[10], context[11] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    context[16] = refalrts::ident_left( identifiers[ident_TkName], context[12], context[13] );
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

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} t.Pos#2/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/5 } Tile{ HalfReuse: (/1 } Tile{ HalfReuse: (/9 HalfReuse: # Symbol/14 Reuse: # Name/16 AsIs: t.Pos#3/17 AsIs: e.Name#3/12 AsIs: )/15 } Tile{ HalfReuse: )/4 } Tile{ AsIs: e.Tokens#3/10 } Tile{ ]] }
    refalrts::reinit_open_bracket(context[1]);
    refalrts::reinit_open_bracket(context[9]);
    refalrts::reinit_ident(context[14], identifiers[ident_Symbol]);
    refalrts::update_ident(context[16], identifiers[ident_Name]);
    refalrts::reinit_close_bracket(context[4]);
    refalrts::link_brackets( context[1], context[4] );
    refalrts::link_brackets( context[9], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[4], context[4] );
    res = refalrts::splice_evar( res, context[9], context[15] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoTokenChain:1$11=1:1/4 t.ErrorList#1/5 t.Pos#2/7 # Classic/9 e.Tokens#3/10 >/1
    context[10] = context[2];
    context[11] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Classic], context[9] ) )
      continue;
    // closed e.Tokens#3 as range 10
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: t.Pos#2: 7
    //DEBUG: e.Tokens#3: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#1/5 AsIs: t.Pos#2/7 HalfReuse: '\''/9 }"&\' is not where-with sign"/12 Tile{ AsIs: >/1 } (/14 )/15 Tile{ AsIs: e.Tokens#3/10 } Tile{ ]] }
    refalrts::alloc_chars(vm, context[12], context[13], "&\' is not where-with sign", 25);
    refalrts::alloc_open_bracket(vm, context[14]);
    refalrts::alloc_close_bracket(vm, context[15]);
    refalrts::update_name(context[4], functions[efunc_ELm_AddErrorAt]);
    refalrts::reinit_char(context[9], '\'');
    refalrts::link_brackets( context[14], context[15] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoTokenChain:1$11=1:1/4 t.ErrorList#1/5 t.Pos#2/7 # Extended/9 e.Tokens#3/10 >/1
    context[10] = context[2];
    context[11] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Extended], context[9] ) )
      continue;
    // closed e.Tokens#3 as range 10
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: t.Pos#2: 7
    //DEBUG: e.Tokens#3: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#1/5 AsIs: t.Pos#2/7 HalfReuse: 'E'/9 }"xpected function name after \'&\'"/12 Tile{ AsIs: >/1 } (/14 )/15 Tile{ AsIs: e.Tokens#3/10 } Tile{ ]] }
    refalrts::alloc_chars(vm, context[12], context[13], "xpected function name after \'&\'", 31);
    refalrts::alloc_open_bracket(vm, context[14]);
    refalrts::alloc_close_bracket(vm, context[15]);
    refalrts::update_name(context[4], functions[efunc_ELm_AddErrorAt]);
    refalrts::reinit_char(context[9], 'E');
    refalrts::link_brackets( context[14], context[15] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoTokenChain:1$11=1:1/4 t.ErrorList#1/5 t.Pos#2/7 s.Mode#3/9 e.Tokens#3/2 >/1
  // closed e.Tokens#3 as range 2
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: t.Pos#2: 7
  //DEBUG: s.Mode#3: 9
  //DEBUG: e.Tokens#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain:1$11=1:1$2=1/4 AsIs: t.ErrorList#1/5 AsIs: t.Pos#2/7 } (/10 Tile{ AsIs: e.Tokens#3/2 } )/11 </12 & DoTokenChain:1$11=1:1$2=1:1*2/13 Tile{ AsIs: s.Mode#3/9 } >/14 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[10]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::alloc_open_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_DoTokenChain_B1S11A1B1S2A1B1D2]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::update_name(context[4], functions[efunc_gen_DoTokenChain_B1S11A1B1S2A1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[12] );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[11], context[13] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoTokenChain_B1S11A1B1("DoTokenChain:1$11=1:1", COOKIE1_, COOKIE2_, func_gen_DoTokenChain_B1S11A1B1);


static refalrts::FnResult func_gen_DoTokenChain_B1S12A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain/4 AsIs: s.Mode#1/5 HalfReuse: # Result/8 } Tile{ AsIs: t.ErrorList#5/10 AsIs: (/14 } Tile{ AsIs: e.Collected#1/6 } (/16 # Closure/17 Tile{ AsIs: e.Body#5/12 } Tile{ AsIs: )/9 } Tile{ AsIs: )/15 AsIs: e.Tokens#5/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::alloc_ident(vm, context[17], identifiers[ident_Closure]);
  refalrts::update_name(context[4], functions[efunc_DoTokenChain]);
  refalrts::reinit_ident(context[8], identifiers[ident_Result]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
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

static refalrts::NativeReference nat_ref_gen_DoTokenChain_B1S12A3("DoTokenChain:1$12=3", COOKIE1_, COOKIE2_, func_gen_DoTokenChain_B1S12A3);


static refalrts::FnResult func_gen_DoTokenChain_B1S12A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain:1$12=3/4 AsIs: s.Mode#1/5 AsIs: (/8 AsIs: e.Collected#1/6 AsIs: )/9 } </18 & Block/19 Tile{ AsIs: t.ErrorList#4/16 } s.Mode#1/5/20 (/21 # TkOpenBlock/22 Tile{ AsIs: t.Pos#2/10 HalfReuse: )/14 AsIs: e.Tokens#1/12 HalfReuse: >/15 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[18]);
  refalrts::alloc_name(vm, context[19], functions[efunc_Block]);
  refalrts::copy_stvar(vm, context[20], context[5]);
  refalrts::alloc_open_bracket(vm, context[21]);
  refalrts::alloc_ident(vm, context[22], identifiers[ident_TkOpenBlock]);
  refalrts::update_name(context[4], functions[efunc_gen_DoTokenChain_B1S12A3]);
  refalrts::reinit_close_bracket(context[14]);
  refalrts::reinit_close_call(context[15]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[18] );
  refalrts::link_brackets( context[21], context[14] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[10], context[15] );
  res = refalrts::splice_evar( res, context[20], context[22] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoTokenChain_B1S12A2("DoTokenChain:1$12=2", COOKIE1_, COOKIE2_, func_gen_DoTokenChain_B1S12A2);


static refalrts::FnResult func_gen_DoTokenChain_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 48 elems
  refalrts::Iter context[48];
  refalrts::zeros( context, 48 );
  // </0 & DoTokenChain:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoTokenChain:1/4 s.new#1/5 s.new#2/6 t.new#3/7 (/11 e.new#4/9 )/12 (/15 e.new#5/13 )/16 t.new#6/17 >/1
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
  // closed e.new#4 as range 9
  // closed e.new#5 as range 13
  context[18] = refalrts::tvar_left( context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & DoTokenChain:1/4 s.new#7/5 s.new#8/6 t.new#9/7 (/11 e.new#13/19 )/12 (/15 e.new#14/21 )/16 (/17 s.new#10/25 t.new#11/26 e.new#12/23 )/18 >/1
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = 0;
    context[24] = 0;
    if( ! refalrts::brackets_term( context[23], context[24], context[17] ) )
      continue;
    // closed e.new#13 as range 19
    // closed e.new#14 as range 21
    if( ! refalrts::svar_left( context[25], context[23], context[24] ) )
      continue;
    context[27] = refalrts::tvar_left( context[26], context[23], context[24] );
    if( ! context[27] )
      continue;
    // closed e.new#12 as range 23
    do {
      // </0 & DoTokenChain:1/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/28 )/12 (/15 e.Tokens#1/30 )/16 (/17 # TkName/25 t.Pos#2/26 e.Name#2/32 )/18 >/1
      context[28] = context[19];
      context[29] = context[20];
      context[30] = context[21];
      context[31] = context[22];
      context[32] = context[23];
      context[33] = context[24];
      if( ! refalrts::ident_term( identifiers[ident_TkName], context[25] ) )
        continue;
      // closed e.Collected#1 as range 28
      // closed e.Tokens#1 as range 30
      // closed e.Name#2 as range 32
      //DEBUG: t.ErrorList#1: 7
      //DEBUG: t.Pos#2: 26
      //DEBUG: s.Mode#1: 5
      //DEBUG: s.Kind#1: 6
      //DEBUG: e.Collected#1: 28
      //DEBUG: e.Tokens#1: 30
      //DEBUG: e.Name#2: 32

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.Pos#2/26 {REMOVED TILE} )/18 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 AsIs: t.ErrorList#1/7 AsIs: (/11 AsIs: e.Collected#1/28 HalfReuse: (/12 HalfReuse: # Symbol/15 } Tile{ Reuse: # Identifier/25 } Tile{ AsIs: e.Name#2/32 } Tile{ AsIs: )/16 HalfReuse: )/17 } Tile{ AsIs: e.Tokens#1/30 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_DoTokenChain]);
      refalrts::reinit_open_bracket(context[12]);
      refalrts::reinit_ident(context[15], identifiers[ident_Symbol]);
      refalrts::update_ident(context[25], identifiers[ident_Identifier]);
      refalrts::reinit_close_bracket(context[17]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[11], context[17] );
      refalrts::link_brackets( context[12], context[16] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_evar( res, context[25], context[25] );
      refalrts::splice_to_freelist_open( vm, context[15], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoTokenChain:1/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/28 )/12 (/15 e.Tokens#1/30 )/16 (/17 # TkCompound/25 t.Pos#2/26 e.Symbols#2/32 )/18 >/1
      context[28] = context[19];
      context[29] = context[20];
      context[30] = context[21];
      context[31] = context[22];
      context[32] = context[23];
      context[33] = context[24];
      if( ! refalrts::ident_term( identifiers[ident_TkCompound], context[25] ) )
        continue;
      // closed e.Collected#1 as range 28
      // closed e.Tokens#1 as range 30
      // closed e.Symbols#2 as range 32
      //DEBUG: t.ErrorList#1: 7
      //DEBUG: t.Pos#2: 26
      //DEBUG: s.Mode#1: 5
      //DEBUG: s.Kind#1: 6
      //DEBUG: e.Collected#1: 28
      //DEBUG: e.Tokens#1: 30
      //DEBUG: e.Symbols#2: 32

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.Pos#2/26 {REMOVED TILE} )/18 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 AsIs: t.ErrorList#1/7 AsIs: (/11 AsIs: e.Collected#1/28 HalfReuse: (/12 HalfReuse: # Symbol/15 } Tile{ Reuse: # Identifier/25 } Tile{ AsIs: e.Symbols#2/32 } Tile{ AsIs: )/16 HalfReuse: )/17 } Tile{ AsIs: e.Tokens#1/30 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_DoTokenChain]);
      refalrts::reinit_open_bracket(context[12]);
      refalrts::reinit_ident(context[15], identifiers[ident_Symbol]);
      refalrts::update_ident(context[25], identifiers[ident_Identifier]);
      refalrts::reinit_close_bracket(context[17]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[11], context[17] );
      refalrts::link_brackets( context[12], context[16] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_evar( res, context[25], context[25] );
      refalrts::splice_to_freelist_open( vm, context[15], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoTokenChain:1/4 s.new#15/5 s.new#16/6 t.new#17/7 (/11 e.new#22/28 )/12 (/15 e.new#23/30 )/16 (/17 s.new#18/25 t.new#19/26 s.new#20/34 e.new#21/32 )/18 >/1
      context[28] = context[19];
      context[29] = context[20];
      context[30] = context[21];
      context[31] = context[22];
      context[32] = context[23];
      context[33] = context[24];
      // closed e.new#22 as range 28
      // closed e.new#23 as range 30
      if( ! refalrts::svar_left( context[34], context[32], context[33] ) )
        continue;
      // closed e.new#21 as range 32
      do {
        // </0 & DoTokenChain:1/4 s.new#24/5 s.new#25/6 t.new#26/7 (/11 e.new#30/35 )/12 (/15 e.new#31/37 )/16 (/17 s.new#27/25 t.new#28/26 s.new#29/34 )/18 >/1
        context[35] = context[28];
        context[36] = context[29];
        context[37] = context[30];
        context[38] = context[31];
        if( ! refalrts::empty_seq( context[32], context[33] ) )
          continue;
        // closed e.new#30 as range 35
        // closed e.new#31 as range 37
        do {
          // </0 & DoTokenChain:1/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/39 )/12 (/15 e.Tokens#1/41 )/16 (/17 # TkMacroDigit/25 t.Pos#2/26 s.Number#2/34 )/18 >/1
          context[39] = context[35];
          context[40] = context[36];
          context[41] = context[37];
          context[42] = context[38];
          if( ! refalrts::ident_term( identifiers[ident_TkMacroDigit], context[25] ) )
            continue;
          // closed e.Collected#1 as range 39
          // closed e.Tokens#1 as range 41
          //DEBUG: t.ErrorList#1: 7
          //DEBUG: t.Pos#2: 26
          //DEBUG: s.Mode#1: 5
          //DEBUG: s.Kind#1: 6
          //DEBUG: s.Number#2: 34
          //DEBUG: e.Collected#1: 39
          //DEBUG: e.Tokens#1: 41

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} )/16 {REMOVED TILE} {REMOVED TILE} t.Pos#2/26 {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 AsIs: t.ErrorList#1/7 AsIs: (/11 AsIs: e.Collected#1/39 HalfReuse: (/12 HalfReuse: # Symbol/15 } Tile{ Reuse: # Number/25 } Tile{ AsIs: s.Number#2/34 AsIs: )/18 HalfReuse: )/1 } Tile{ AsIs: e.Tokens#1/41 } Tile{ HalfReuse: >/17 } Tile{ ]] }
          refalrts::update_name(context[4], functions[efunc_DoTokenChain]);
          refalrts::reinit_open_bracket(context[12]);
          refalrts::reinit_ident(context[15], identifiers[ident_Symbol]);
          refalrts::update_ident(context[25], identifiers[ident_Number]);
          refalrts::reinit_close_bracket(context[1]);
          refalrts::reinit_close_call(context[17]);
          refalrts::push_stack( vm, context[17] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[11], context[1] );
          refalrts::link_brackets( context[12], context[18] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[17], context[17] );
          res = refalrts::splice_evar( res, context[41], context[42] );
          res = refalrts::splice_evar( res, context[34], context[1] );
          res = refalrts::splice_evar( res, context[25], context[25] );
          refalrts::splice_to_freelist_open( vm, context[15], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & DoTokenChain:1/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/39 )/12 (/15 e.Tokens#1/41 )/16 (/17 # TkChar/25 t.Pos#2/26 s.Char#2/34 )/18 >/1
        context[39] = context[35];
        context[40] = context[36];
        context[41] = context[37];
        context[42] = context[38];
        if( ! refalrts::ident_term( identifiers[ident_TkChar], context[25] ) )
          continue;
        // closed e.Collected#1 as range 39
        // closed e.Tokens#1 as range 41
        //DEBUG: t.ErrorList#1: 7
        //DEBUG: t.Pos#2: 26
        //DEBUG: s.Mode#1: 5
        //DEBUG: s.Kind#1: 6
        //DEBUG: s.Char#2: 34
        //DEBUG: e.Collected#1: 39
        //DEBUG: e.Tokens#1: 41

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} )/16 {REMOVED TILE} {REMOVED TILE} t.Pos#2/26 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 AsIs: t.ErrorList#1/7 AsIs: (/11 AsIs: e.Collected#1/39 HalfReuse: (/12 HalfReuse: # Symbol/15 } Tile{ Reuse: # Char/25 } Tile{ AsIs: s.Char#2/34 AsIs: )/18 HalfReuse: )/1 } Tile{ AsIs: e.Tokens#1/41 } Tile{ HalfReuse: >/17 } Tile{ ]] }
        refalrts::update_name(context[4], functions[efunc_DoTokenChain]);
        refalrts::reinit_open_bracket(context[12]);
        refalrts::reinit_ident(context[15], identifiers[ident_Symbol]);
        refalrts::update_ident(context[25], identifiers[ident_Char]);
        refalrts::reinit_close_bracket(context[1]);
        refalrts::reinit_close_call(context[17]);
        refalrts::push_stack( vm, context[17] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[11], context[1] );
        refalrts::link_brackets( context[12], context[18] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[17], context[17] );
        res = refalrts::splice_evar( res, context[41], context[42] );
        res = refalrts::splice_evar( res, context[34], context[1] );
        res = refalrts::splice_evar( res, context[25], context[25] );
        refalrts::splice_to_freelist_open( vm, context[15], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoTokenChain:1/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/35 )/12 (/15 e.Tokens#1/37 )/16 (/17 # TkVariable/25 t.Pos#2/26 s.VarType#2/34 e.Index#2/39 )/18 >/1
      context[35] = context[28];
      context[36] = context[29];
      context[37] = context[30];
      context[38] = context[31];
      context[39] = context[32];
      context[40] = context[33];
      if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[25] ) )
        continue;
      // closed e.Collected#1 as range 35
      // closed e.Tokens#1 as range 37
      // closed e.Index#2 as range 39
      //DEBUG: t.ErrorList#1: 7
      //DEBUG: t.Pos#2: 26
      //DEBUG: s.Mode#1: 5
      //DEBUG: s.Kind#1: 6
      //DEBUG: s.VarType#2: 34
      //DEBUG: e.Collected#1: 35
      //DEBUG: e.Tokens#1: 37
      //DEBUG: e.Index#2: 39

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} )/16 {REMOVED TILE} # TkVariable/25 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 AsIs: t.ErrorList#1/7 AsIs: (/11 AsIs: e.Collected#1/35 HalfReuse: (/12 HalfReuse: # TkVariable/15 } Tile{ AsIs: t.Pos#2/26 AsIs: s.VarType#2/34 AsIs: e.Index#2/39 AsIs: )/18 HalfReuse: )/1 } Tile{ AsIs: e.Tokens#1/37 } Tile{ HalfReuse: >/17 } Tile{ ]] }
      refalrts::update_name(context[4], functions[efunc_DoTokenChain]);
      refalrts::reinit_open_bracket(context[12]);
      refalrts::reinit_ident(context[15], identifiers[ident_TkVariable]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::reinit_close_call(context[17]);
      refalrts::push_stack( vm, context[17] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[11], context[1] );
      refalrts::link_brackets( context[12], context[18] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[17], context[17] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      res = refalrts::splice_evar( res, context[26], context[1] );
      refalrts::splice_to_freelist_open( vm, context[15], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoTokenChain:1/4 s.new#15/5 s.new#16/6 t.new#17/7 (/11 e.new#20/28 )/12 (/15 e.new#21/30 )/16 (/17 s.new#18/25 t.new#19/26 )/18 >/1
      context[28] = context[19];
      context[29] = context[20];
      context[30] = context[21];
      context[31] = context[22];
      if( ! refalrts::empty_seq( context[23], context[24] ) )
        continue;
      // closed e.new#20 as range 28
      // closed e.new#21 as range 30
      do {
        // </0 & DoTokenChain:1/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/32 )/12 (/15 e.Tokens#1/34 )/16 (/17 # TkOpenBracket/25 t.Pos#2/26 )/18 >/1
        context[32] = context[28];
        context[33] = context[29];
        context[34] = context[30];
        context[35] = context[31];
        if( ! refalrts::ident_term( identifiers[ident_TkOpenBracket], context[25] ) )
          continue;
        // closed e.Collected#1 as range 32
        // closed e.Tokens#1 as range 34
        //DEBUG: t.ErrorList#1: 7
        //DEBUG: t.Pos#2: 26
        //DEBUG: s.Mode#1: 5
        //DEBUG: s.Kind#1: 6
        //DEBUG: e.Collected#1: 32
        //DEBUG: e.Tokens#1: 34

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.Pos#2/26 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain:1$6=1/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 } Tile{ AsIs: (/11 AsIs: e.Collected#1/32 AsIs: )/12 HalfReuse: </15 } Tile{ HalfReuse: & TokenChain/16 } Tile{ AsIs: t.ErrorList#1/7 } Tile{ HalfReuse: s.Mode1 #5/17 HalfReuse: s.Kind1 #6/25 } Tile{ AsIs: e.Tokens#1/34 } Tile{ HalfReuse: >/18 AsIs: >/1 ]] }
        refalrts::update_name(context[4], functions[efunc_gen_DoTokenChain_B1S6A1]);
        refalrts::reinit_open_call(context[15]);
        refalrts::reinit_name(context[16], functions[efunc_TokenChain]);
        refalrts::reinit_svar( context[17], context[5] );
        refalrts::reinit_svar( context[25], context[6] );
        refalrts::reinit_close_call(context[18]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[18] );
        refalrts::push_stack( vm, context[15] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[18];
        res = refalrts::splice_evar( res, context[34], context[35] );
        res = refalrts::splice_evar( res, context[17], context[25] );
        res = refalrts::splice_evar( res, context[7], context[8] );
        res = refalrts::splice_evar( res, context[16], context[16] );
        res = refalrts::splice_evar( res, context[11], context[15] );
        refalrts::splice_to_freelist_open( vm, context[6], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoTokenChain:1/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/32 )/12 (/15 e.Tokens#1/34 )/16 (/17 # TkOpenCall/25 t.Pos#2/26 )/18 >/1
      context[32] = context[28];
      context[33] = context[29];
      context[34] = context[30];
      context[35] = context[31];
      if( ! refalrts::ident_term( identifiers[ident_TkOpenCall], context[25] ) )
        continue;
      // closed e.Collected#1 as range 32
      // closed e.Tokens#1 as range 34
      //DEBUG: t.ErrorList#1: 7
      //DEBUG: t.Pos#2: 26
      //DEBUG: s.Mode#1: 5
      //DEBUG: s.Kind#1: 6
      //DEBUG: e.Collected#1: 32
      //DEBUG: e.Tokens#1: 34

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain:1$7=1/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 } Tile{ AsIs: (/11 AsIs: e.Collected#1/32 AsIs: )/12 } Tile{ AsIs: t.Pos#2/26 } Tile{ AsIs: (/15 AsIs: e.Tokens#1/34 AsIs: )/16 HalfReuse: </17 HalfReuse: & ClassicError/25 } Tile{ AsIs: t.ErrorList#1/7 } s.Mode#1/5/36 t.Pos#2/26/37"Identifier expected after \'<\'"/39 Tile{ HalfReuse: >/18 AsIs: >/1 ]] }
      refalrts::copy_stvar(vm, context[36], context[5]);
      refalrts::copy_evar(vm, context[37], context[38], context[26], context[27]);
      refalrts::alloc_chars(vm, context[39], context[40], "Identifier expected after \'<\'", 29);
      refalrts::update_name(context[4], functions[efunc_gen_DoTokenChain_B1S7A1]);
      refalrts::reinit_open_call(context[17]);
      refalrts::reinit_name(context[25], functions[efunc_ClassicError]);
      refalrts::reinit_close_call(context[18]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[18] );
      refalrts::push_stack( vm, context[17] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[18];
      res = refalrts::splice_evar( res, context[36], context[40] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_evar( res, context[15], context[25] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoTokenChain:1/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/28 )/12 (/15 e.Tokens#1/30 )/16 (/17 # TkOpenCall/25 t.Pos#2/26 e.FuncName#2/32 )/18 >/1
      context[28] = context[19];
      context[29] = context[20];
      context[30] = context[21];
      context[31] = context[22];
      context[32] = context[23];
      context[33] = context[24];
      if( ! refalrts::ident_term( identifiers[ident_TkOpenCall], context[25] ) )
        continue;
      // closed e.Collected#1 as range 28
      // closed e.Tokens#1 as range 30
      // closed e.FuncName#2 as range 32
      //DEBUG: t.ErrorList#1: 7
      //DEBUG: t.Pos#2: 26
      //DEBUG: s.Mode#1: 5
      //DEBUG: s.Kind#1: 6
      //DEBUG: e.Collected#1: 28
      //DEBUG: e.Tokens#1: 30
      //DEBUG: e.FuncName#2: 32

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain-AfterCall/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 } Tile{ AsIs: (/11 AsIs: e.Collected#1/28 AsIs: )/12 } t.Pos#2/26/34 Tile{ AsIs: (/15 } Tile{ HalfReuse: (/16 HalfReuse: # Symbol/17 Reuse: # Name/25 AsIs: t.Pos#2/26 AsIs: e.FuncName#2/32 AsIs: )/18 HalfReuse: )/1 } </36 & TokenChain/37 Tile{ AsIs: t.ErrorList#1/7 } s.Mode#1/5/38 s.Kind#1/6/39 Tile{ AsIs: e.Tokens#1/30 } >/40 >/41 Tile{ ]] }
      refalrts::copy_evar(vm, context[34], context[35], context[26], context[27]);
      refalrts::alloc_open_call(vm, context[36]);
      refalrts::alloc_name(vm, context[37], functions[efunc_TokenChain]);
      refalrts::copy_stvar(vm, context[38], context[5]);
      refalrts::copy_stvar(vm, context[39], context[6]);
      refalrts::alloc_close_call(vm, context[40]);
      refalrts::alloc_close_call(vm, context[41]);
      refalrts::update_name(context[4], functions[efunc_DoTokenChainm_AfterCall]);
      refalrts::reinit_open_bracket(context[16]);
      refalrts::reinit_ident(context[17], identifiers[ident_Symbol]);
      refalrts::update_ident(context[25], identifiers[ident_Name]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::push_stack( vm, context[41] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[40] );
      refalrts::push_stack( vm, context[36] );
      refalrts::link_brackets( context[15], context[1] );
      refalrts::link_brackets( context[16], context[18] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[40], context[41] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[38], context[39] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_evar( res, context[36], context[37] );
      res = refalrts::splice_evar( res, context[16], context[1] );
      res = refalrts::splice_evar( res, context[15], context[15] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoTokenChain:1/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/28 )/12 (/15 e.Tokens#1/30 )/16 (/17 # TkOpenADT/25 t.OpenPos#2/26 e.FuncName#2/32 )/18 >/1
      context[28] = context[19];
      context[29] = context[20];
      context[30] = context[21];
      context[31] = context[22];
      context[32] = context[23];
      context[33] = context[24];
      if( ! refalrts::ident_term( identifiers[ident_TkOpenADT], context[25] ) )
        continue;
      // closed e.Collected#1 as range 28
      // closed e.Tokens#1 as range 30
      // closed e.FuncName#2 as range 32
      //DEBUG: t.ErrorList#1: 7
      //DEBUG: t.OpenPos#2: 26
      //DEBUG: s.Mode#1: 5
      //DEBUG: s.Kind#1: 6
      //DEBUG: e.Collected#1: 28
      //DEBUG: e.Tokens#1: 30
      //DEBUG: e.FuncName#2: 32

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain:1$9=1/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 } (/34 Tile{ AsIs: e.Collected#1/28 } )/35 Tile{ AsIs: t.OpenPos#2/26 } (/36 Tile{ AsIs: e.FuncName#2/32 } Tile{ AsIs: )/12 AsIs: (/15 AsIs: e.Tokens#1/30 AsIs: )/16 HalfReuse: </17 HalfReuse: & ClassicError/25 } Tile{ AsIs: t.ErrorList#1/7 HalfReuse: s.Mode1 #5/11 } t.OpenPos#2/26/37"Abstract data types is an extension"/39 Tile{ HalfReuse: >/18 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[34]);
      refalrts::alloc_close_bracket(vm, context[35]);
      refalrts::alloc_open_bracket(vm, context[36]);
      refalrts::copy_evar(vm, context[37], context[38], context[26], context[27]);
      refalrts::alloc_chars(vm, context[39], context[40], "Abstract data types is an extension", 35);
      refalrts::update_name(context[4], functions[efunc_gen_DoTokenChain_B1S9A1]);
      refalrts::reinit_open_call(context[17]);
      refalrts::reinit_name(context[25], functions[efunc_ClassicError]);
      refalrts::reinit_svar( context[11], context[5] );
      refalrts::reinit_close_call(context[18]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[18] );
      refalrts::push_stack( vm, context[17] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[36], context[12] );
      refalrts::link_brackets( context[34], context[35] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[18];
      res = refalrts::splice_evar( res, context[37], context[40] );
      res = refalrts::splice_evar( res, context[7], context[11] );
      res = refalrts::splice_evar( res, context[12], context[25] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_evar( res, context[36], context[36] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[35], context[35] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_evar( res, context[34], context[34] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoTokenChain:1/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/28 )/12 (/15 e.Tokens#1/30 )/16 (/17 # TkRefal5Mode/25 t.Pos#2/26 s.NewMode#2/34 )/18 >/1
      context[28] = context[19];
      context[29] = context[20];
      context[30] = context[21];
      context[31] = context[22];
      context[32] = context[23];
      context[33] = context[24];
      if( ! refalrts::ident_term( identifiers[ident_TkRefal5Mode], context[25] ) )
        continue;
      // closed e.Collected#1 as range 28
      // closed e.Tokens#1 as range 30
      if( ! refalrts::svar_left( context[34], context[32], context[33] ) )
        continue;
      if( ! refalrts::empty_seq( context[32], context[33] ) )
        continue;
      //DEBUG: t.ErrorList#1: 7
      //DEBUG: t.Pos#2: 26
      //DEBUG: s.Mode#1: 5
      //DEBUG: s.Kind#1: 6
      //DEBUG: e.Collected#1: 28
      //DEBUG: e.Tokens#1: 30
      //DEBUG: s.NewMode#2: 34

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Mode#1/5 {REMOVED TILE} (/15 {REMOVED TILE} )/16 (/17 # TkRefal5Mode/25 t.Pos#2/26 {REMOVED TILE} )/18 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain/4 } Tile{ AsIs: s.NewMode#2/34 } Tile{ AsIs: s.Kind#1/6 AsIs: t.ErrorList#1/7 AsIs: (/11 AsIs: e.Collected#1/28 AsIs: )/12 } Tile{ AsIs: e.Tokens#1/30 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_DoTokenChain]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[6], context[12] );
      res = refalrts::splice_evar( res, context[34], context[34] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoTokenChain:1/4 s.new#15/5 s.new#16/6 t.new#17/7 (/11 e.new#20/28 )/12 (/15 e.new#21/30 )/16 (/17 s.new#18/25 t.new#19/26 )/18 >/1
      context[28] = context[19];
      context[29] = context[20];
      context[30] = context[21];
      context[31] = context[22];
      if( ! refalrts::empty_seq( context[23], context[24] ) )
        continue;
      // closed e.new#20 as range 28
      // closed e.new#21 as range 30
      do {
        // </0 & DoTokenChain:1/4 s.new#22/5 s.new#23/6 t.new#24/7 (/11 e.new#26/32 )/12 (/15 e.new#27/34 )/16 (/17 # TkAmpersand/25 t.new#25/26 )/18 >/1
        context[32] = context[28];
        context[33] = context[29];
        context[34] = context[30];
        context[35] = context[31];
        if( ! refalrts::ident_term( identifiers[ident_TkAmpersand], context[25] ) )
          continue;
        // closed e.new#26 as range 32
        // closed e.new#27 as range 34
        do {
          // </0 & DoTokenChain:1/4 # Extended/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/36 )/12 (/15 (/42 # TkName/44 t.1#0/45 e.2#0/40 )/43 e.#0/38 )/16 (/17 # TkAmpersand/25 t.Pos#2/26 )/18 >/1
          context[36] = context[32];
          context[37] = context[33];
          context[38] = context[34];
          context[39] = context[35];
          if( ! refalrts::ident_term( identifiers[ident_Extended], context[5] ) )
            continue;
          context[40] = 0;
          context[41] = 0;
          context[42] = refalrts::brackets_left( context[40], context[41], context[38], context[39] );
          if( ! context[42] )
            continue;
          refalrts::bracket_pointers(context[42], context[43]);
          context[44] = refalrts::ident_left( identifiers[ident_TkName], context[40], context[41] );
          if( ! context[44] )
            continue;
          // closed e.Collected#1 as range 36
          // closed e.#0 as range 38
          context[46] = refalrts::tvar_left( context[45], context[40], context[41] );
          if( ! context[46] )
            continue;
          // closed e.2#0 as range 40
          //DEBUG: t.ErrorList#1: 7
          //DEBUG: t.Pos#2: 26
          //DEBUG: s.Kind#1: 6
          //DEBUG: e.Collected#1: 36
          //DEBUG: e.#0: 38
          //DEBUG: t.1#0: 45
          //DEBUG: e.2#0: 40

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} # TkName/44 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/17 # TkAmpersand/25 t.Pos#2/26 )/18 {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain/4 AsIs: # Extended/5 AsIs: s.Kind#1/6 AsIs: t.ErrorList#1/7 AsIs: (/11 AsIs: e.Collected#1/36 HalfReuse: (/12 HalfReuse: # Symbol/15 HalfReuse: # Name/42 } Tile{ AsIs: t.1#0/45 AsIs: e.2#0/40 AsIs: )/43 } Tile{ AsIs: )/16 } Tile{ AsIs: e.#0/38 } Tile{ AsIs: >/1 ]] }
          refalrts::update_name(context[4], functions[efunc_DoTokenChain]);
          refalrts::reinit_open_bracket(context[12]);
          refalrts::reinit_ident(context[15], identifiers[ident_Symbol]);
          refalrts::reinit_ident(context[42], identifiers[ident_Name]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[11], context[16] );
          refalrts::link_brackets( context[12], context[43] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[38], context[39] );
          res = refalrts::splice_evar( res, context[16], context[16] );
          res = refalrts::splice_evar( res, context[45], context[43] );
          refalrts::splice_to_freelist_open( vm, context[42], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & DoTokenChain:1/4 # Classic/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/36 )/12 (/15 e.Tokens#1/38 )/16 (/17 # TkAmpersand/25 t.Pos#2/26 )/18 >/1
          context[36] = context[32];
          context[37] = context[33];
          context[38] = context[34];
          context[39] = context[35];
          if( ! refalrts::ident_term( identifiers[ident_Classic], context[5] ) )
            continue;
          // closed e.Collected#1 as range 36
          // closed e.Tokens#1 as range 38
          //DEBUG: t.ErrorList#1: 7
          //DEBUG: t.Pos#2: 26
          //DEBUG: s.Kind#1: 6
          //DEBUG: e.Collected#1: 36
          //DEBUG: e.Tokens#1: 38

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} s.Kind#1/6 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain:1$11=1@1/4 HalfReuse: s.Kind1 #6/5 } Tile{ AsIs: (/11 AsIs: e.Collected#1/36 AsIs: )/12 HalfReuse: </15 } & EL-AddErrorAt/40 Tile{ AsIs: t.ErrorList#1/7 } Tile{ AsIs: t.Pos#2/26 HalfReuse: '\''/18 }"&\' is not where-with sign"/41 Tile{ HalfReuse: >/16 AsIs: (/17 HalfReuse: )/25 } Tile{ AsIs: e.Tokens#1/38 } Tile{ AsIs: >/1 ]] }
          refalrts::alloc_name(vm, context[40], functions[efunc_ELm_AddErrorAt]);
          refalrts::alloc_chars(vm, context[41], context[42], "&\' is not where-with sign", 25);
          refalrts::update_name(context[4], functions[efunc_gen_DoTokenChain_B1S11A1Z1]);
          refalrts::reinit_svar( context[5], context[6] );
          refalrts::reinit_open_call(context[15]);
          refalrts::reinit_char(context[18], '\'');
          refalrts::reinit_close_call(context[16]);
          refalrts::reinit_close_bracket(context[25]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[17], context[25] );
          refalrts::push_stack( vm, context[16] );
          refalrts::push_stack( vm, context[15] );
          refalrts::link_brackets( context[11], context[12] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[38], context[39] );
          res = refalrts::splice_evar( res, context[16], context[25] );
          res = refalrts::splice_evar( res, context[41], context[42] );
          res = refalrts::splice_evar( res, context[26], context[18] );
          res = refalrts::splice_evar( res, context[7], context[8] );
          res = refalrts::splice_evar( res, context[40], context[40] );
          res = refalrts::splice_evar( res, context[11], context[15] );
          refalrts::splice_to_freelist_open( vm, context[5], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & DoTokenChain:1/4 # Extended/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/36 )/12 (/15 e.Tokens#1/38 )/16 (/17 # TkAmpersand/25 t.Pos#2/26 )/18 >/1
          context[36] = context[32];
          context[37] = context[33];
          context[38] = context[34];
          context[39] = context[35];
          if( ! refalrts::ident_term( identifiers[ident_Extended], context[5] ) )
            continue;
          // closed e.Collected#1 as range 36
          // closed e.Tokens#1 as range 38
          //DEBUG: t.ErrorList#1: 7
          //DEBUG: t.Pos#2: 26
          //DEBUG: s.Kind#1: 6
          //DEBUG: e.Collected#1: 36
          //DEBUG: e.Tokens#1: 38

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} s.Kind#1/6 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain:1$11=1@2/4 HalfReuse: s.Kind1 #6/5 } Tile{ AsIs: (/11 AsIs: e.Collected#1/36 AsIs: )/12 HalfReuse: </15 } & EL-AddErrorAt/40 Tile{ AsIs: t.ErrorList#1/7 } Tile{ AsIs: t.Pos#2/26 HalfReuse: 'E'/18 }"xpected function name after \'&\'"/41 Tile{ HalfReuse: >/16 AsIs: (/17 HalfReuse: )/25 } Tile{ AsIs: e.Tokens#1/38 } Tile{ AsIs: >/1 ]] }
          refalrts::alloc_name(vm, context[40], functions[efunc_ELm_AddErrorAt]);
          refalrts::alloc_chars(vm, context[41], context[42], "xpected function name after \'&\'", 31);
          refalrts::update_name(context[4], functions[efunc_gen_DoTokenChain_B1S11A1Z2]);
          refalrts::reinit_svar( context[5], context[6] );
          refalrts::reinit_open_call(context[15]);
          refalrts::reinit_char(context[18], 'E');
          refalrts::reinit_close_call(context[16]);
          refalrts::reinit_close_bracket(context[25]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[17], context[25] );
          refalrts::push_stack( vm, context[16] );
          refalrts::push_stack( vm, context[15] );
          refalrts::link_brackets( context[11], context[12] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[38], context[39] );
          res = refalrts::splice_evar( res, context[16], context[25] );
          res = refalrts::splice_evar( res, context[41], context[42] );
          res = refalrts::splice_evar( res, context[26], context[18] );
          res = refalrts::splice_evar( res, context[7], context[8] );
          res = refalrts::splice_evar( res, context[40], context[40] );
          res = refalrts::splice_evar( res, context[11], context[15] );
          refalrts::splice_to_freelist_open( vm, context[5], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & DoTokenChain:1/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/36 )/12 (/15 e.Tokens#1/38 )/16 (/17 # TkAmpersand/25 t.Pos#2/26 )/18 >/1
        context[36] = context[32];
        context[37] = context[33];
        context[38] = context[34];
        context[39] = context[35];
        // closed e.Collected#1 as range 36
        // closed e.Tokens#1 as range 38
        //DEBUG: t.ErrorList#1: 7
        //DEBUG: t.Pos#2: 26
        //DEBUG: s.Mode#1: 5
        //DEBUG: s.Kind#1: 6
        //DEBUG: e.Collected#1: 36
        //DEBUG: e.Tokens#1: 38

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain:1$11=1/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 } Tile{ AsIs: (/11 AsIs: e.Collected#1/36 AsIs: )/12 } </40 & DoTokenChain:1$11=1:1$2=1/41 Tile{ AsIs: t.ErrorList#1/7 } Tile{ AsIs: t.Pos#2/26 } Tile{ AsIs: (/15 AsIs: e.Tokens#1/38 AsIs: )/16 HalfReuse: </17 HalfReuse: & DoTokenChain:1$11=1:1$2=1:1*2/25 } s.Mode#1/5/42 >/43 Tile{ HalfReuse: >/18 AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[40]);
        refalrts::alloc_name(vm, context[41], functions[efunc_gen_DoTokenChain_B1S11A1B1S2A1]);
        refalrts::copy_stvar(vm, context[42], context[5]);
        refalrts::alloc_close_call(vm, context[43]);
        refalrts::update_name(context[4], functions[efunc_gen_DoTokenChain_B1S11A1]);
        refalrts::reinit_open_call(context[17]);
        refalrts::reinit_name(context[25], functions[efunc_gen_DoTokenChain_B1S11A1B1S2A1B1D2]);
        refalrts::reinit_close_call(context[18]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[18] );
        refalrts::push_stack( vm, context[40] );
        refalrts::push_stack( vm, context[43] );
        refalrts::push_stack( vm, context[17] );
        refalrts::link_brackets( context[15], context[16] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[18];
        res = refalrts::splice_evar( res, context[42], context[43] );
        res = refalrts::splice_evar( res, context[15], context[25] );
        res = refalrts::splice_evar( res, context[26], context[27] );
        res = refalrts::splice_evar( res, context[7], context[8] );
        res = refalrts::splice_evar( res, context[40], context[41] );
        res = refalrts::splice_evar( res, context[11], context[12] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & DoTokenChain:1/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/32 )/12 (/15 e.Tokens#1/34 )/16 (/17 # TkOpenBlock/25 t.Pos#2/26 )/18 >/1
        context[32] = context[28];
        context[33] = context[29];
        context[34] = context[30];
        context[35] = context[31];
        if( ! refalrts::ident_term( identifiers[ident_TkOpenBlock], context[25] ) )
          continue;
        // closed e.Collected#1 as range 32
        // closed e.Tokens#1 as range 34
        //DEBUG: t.ErrorList#1: 7
        //DEBUG: t.Pos#2: 26
        //DEBUG: s.Mode#1: 5
        //DEBUG: s.Kind#1: 6
        //DEBUG: e.Collected#1: 32
        //DEBUG: e.Tokens#1: 34
        //5: s.Mode#1
        //6: s.Kind#1
        //7: t.ErrorList#1
        //26: t.Pos#2
        //32: e.Collected#1
        //34: e.Tokens#1
        //39: s.Kind#1

        refalrts::reset_allocator(vm);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::alloc_open_call(vm, context[36]);
        refalrts::alloc_name(vm, context[38], functions[efunc_gen_DoTokenChain_B1S12C1]);
        refalrts::copy_stvar(vm, context[39], context[6]);
        refalrts::alloc_close_call(vm, context[37]);
        refalrts::push_stack( vm, context[37] );
        refalrts::push_stack( vm, context[36] );
        res = refalrts::splice_elem( res, context[37] );
        res = refalrts::splice_stvar( res, context[39] );
        res = refalrts::splice_elem( res, context[38] );
        res = refalrts::splice_elem( res, context[36] );
        refalrts::use( res );
        refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
        if (rec_res != refalrts::cSuccess)
          return rec_res;
        refalrts::this_is_generated_function(vm);
        do {
          // </36 & DoTokenChain:1$12?1/40 # Result/41 >/37
          context[38] = 0;
          context[39] = 0;
          context[40] = refalrts::call_left( context[38], context[39], context[36], context[37] );
          context[41] = refalrts::ident_left( identifiers[ident_Result], context[38], context[39] );
          if( ! context[41] )
            continue;
          if( ! refalrts::empty_seq( context[38], context[39] ) )
            continue;
          //DEBUG: t.ErrorList#1: 7
          //DEBUG: t.Pos#2: 26
          //DEBUG: s.Mode#1: 5
          //DEBUG: s.Kind#1: 6
          //DEBUG: e.Collected#1: 32
          //DEBUG: e.Tokens#1: 34

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} s.Kind#1/6 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain:1$12=2/4 AsIs: s.Mode#1/5 } Tile{ AsIs: (/11 AsIs: e.Collected#1/32 AsIs: )/12 } t.Pos#2/26/42 Tile{ AsIs: (/15 AsIs: e.Tokens#1/34 AsIs: )/16 HalfReuse: </17 HalfReuse: & ClassicError/25 } Tile{ AsIs: t.ErrorList#1/7 } s.Mode#1/5/44 Tile{ AsIs: t.Pos#2/26 }"Do you forged \':\' before bl"/45 Tile{ HalfReuse: 'o'/18 HalfReuse: 'c'/36 HalfReuse: 'k'/40 HalfReuse: '?'/41 AsIs: >/37 AsIs: >/1 ]] }
          refalrts::copy_evar(vm, context[42], context[43], context[26], context[27]);
          refalrts::copy_stvar(vm, context[44], context[5]);
          refalrts::alloc_chars(vm, context[45], context[46], "Do you forged \':\' before bl", 27);
          refalrts::update_name(context[4], functions[efunc_gen_DoTokenChain_B1S12A2]);
          refalrts::reinit_open_call(context[17]);
          refalrts::reinit_name(context[25], functions[efunc_ClassicError]);
          refalrts::reinit_char(context[18], 'o');
          refalrts::reinit_char(context[36], 'c');
          refalrts::reinit_char(context[40], 'k');
          refalrts::reinit_char(context[41], '?');
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[37] );
          refalrts::push_stack( vm, context[17] );
          refalrts::link_brackets( context[15], context[16] );
          refalrts::link_brackets( context[11], context[12] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[18];
          res = refalrts::splice_evar( res, context[45], context[46] );
          res = refalrts::splice_evar( res, context[26], context[27] );
          res = refalrts::splice_evar( res, context[44], context[44] );
          res = refalrts::splice_evar( res, context[7], context[8] );
          res = refalrts::splice_evar( res, context[15], context[25] );
          res = refalrts::splice_evar( res, context[42], context[43] );
          res = refalrts::splice_evar( res, context[11], context[12] );
          refalrts::splice_to_freelist_open( vm, context[5], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        refalrts::splice_to_freelist(vm, context[36], context[37]);
        continue;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & DoTokenChain:1/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/32 )/12 (/15 e.Tokens#1/34 )/16 (/17 # TkRedefinition/25 t.Pos#2/26 )/18 >/1
        context[32] = context[28];
        context[33] = context[29];
        context[34] = context[30];
        context[35] = context[31];
        if( ! refalrts::ident_term( identifiers[ident_TkRedefinition], context[25] ) )
          continue;
        // closed e.Collected#1 as range 32
        // closed e.Tokens#1 as range 34
        //DEBUG: t.ErrorList#1: 7
        //DEBUG: t.Pos#2: 26
        //DEBUG: s.Mode#1: 5
        //DEBUG: s.Kind#1: 6
        //DEBUG: e.Collected#1: 32
        //DEBUG: e.Tokens#1: 34

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 } Tile{ HalfReuse: </15 } & DoTokenChain-AddRedefinition/36 s.Kind#1/6/37 </38 & ClassicError/39 Tile{ AsIs: t.ErrorList#1/7 } Tile{ HalfReuse: s.Mode1 #5/25 AsIs: t.Pos#2/26 HalfReuse: 'V'/18 } Tile{ HalfReuse: 'a'/16 HalfReuse: 'r'/17 }"iable redefinition is available in extended mode"/40 >/42 Tile{ AsIs: (/11 AsIs: e.Collected#1/32 AsIs: )/12 } t.Pos#2/26/43 >/45 Tile{ AsIs: e.Tokens#1/34 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_name(vm, context[36], functions[efunc_DoTokenChainm_AddRedefinition]);
        refalrts::copy_stvar(vm, context[37], context[6]);
        refalrts::alloc_open_call(vm, context[38]);
        refalrts::alloc_name(vm, context[39], functions[efunc_ClassicError]);
        refalrts::alloc_chars(vm, context[40], context[41], "iable redefinition is available in extended mode", 48);
        refalrts::alloc_close_call(vm, context[42]);
        refalrts::copy_evar(vm, context[43], context[44], context[26], context[27]);
        refalrts::alloc_close_call(vm, context[45]);
        refalrts::update_name(context[4], functions[efunc_DoTokenChain]);
        refalrts::reinit_open_call(context[15]);
        refalrts::reinit_svar( context[25], context[5] );
        refalrts::reinit_char(context[18], 'V');
        refalrts::reinit_char(context[16], 'a');
        refalrts::reinit_char(context[17], 'r');
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[45] );
        refalrts::push_stack( vm, context[15] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::push_stack( vm, context[42] );
        refalrts::push_stack( vm, context[38] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[34], context[35] );
        res = refalrts::splice_evar( res, context[43], context[45] );
        res = refalrts::splice_evar( res, context[11], context[12] );
        res = refalrts::splice_evar( res, context[40], context[42] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[25], context[18] );
        res = refalrts::splice_evar( res, context[7], context[8] );
        res = refalrts::splice_evar( res, context[36], context[39] );
        res = refalrts::splice_evar( res, context[15], context[15] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoTokenChain:1/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/32 )/12 (/15 e.Tokens#1/34 )/16 (/17 # TkScopeId/25 t.Pos#2/26 )/18 >/1
      context[32] = context[28];
      context[33] = context[29];
      context[34] = context[30];
      context[35] = context[31];
      if( ! refalrts::ident_term( identifiers[ident_TkScopeId], context[25] ) )
        continue;
      // closed e.Collected#1 as range 32
      // closed e.Tokens#1 as range 34
      //DEBUG: t.ErrorList#1: 7
      //DEBUG: t.Pos#2: 26
      //DEBUG: s.Mode#1: 5
      //DEBUG: s.Kind#1: 6
      //DEBUG: e.Collected#1: 32
      //DEBUG: e.Tokens#1: 34

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 } </36 & ClassicError/37 Tile{ AsIs: t.ErrorList#1/7 } s.Mode#1/5/38 Tile{ AsIs: t.Pos#2/26 HalfReuse: '$'/18 }"SCOPEID is not supported in classic REFAL-5"/39 >/41 Tile{ AsIs: (/11 AsIs: e.Collected#1/32 HalfReuse: (/12 HalfReuse: # Symbol/15 } # Number/42 # Cookie1/43 Tile{ AsIs: )/16 AsIs: (/17 Reuse: # Symbol/25 } # Number/44 # Cookie2/45 )/46 )/47 Tile{ AsIs: e.Tokens#1/34 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[36]);
      refalrts::alloc_name(vm, context[37], functions[efunc_ClassicError]);
      refalrts::copy_stvar(vm, context[38], context[5]);
      refalrts::alloc_chars(vm, context[39], context[40], "SCOPEID is not supported in classic REFAL-5", 43);
      refalrts::alloc_close_call(vm, context[41]);
      refalrts::alloc_ident(vm, context[42], identifiers[ident_Number]);
      refalrts::alloc_ident(vm, context[43], identifiers[ident_Cookie1]);
      refalrts::alloc_ident(vm, context[44], identifiers[ident_Number]);
      refalrts::alloc_ident(vm, context[45], identifiers[ident_Cookie2]);
      refalrts::alloc_close_bracket(vm, context[46]);
      refalrts::alloc_close_bracket(vm, context[47]);
      refalrts::update_name(context[4], functions[efunc_DoTokenChain]);
      refalrts::reinit_char(context[18], '$');
      refalrts::reinit_open_bracket(context[12]);
      refalrts::reinit_ident(context[15], identifiers[ident_Symbol]);
      refalrts::update_ident(context[25], identifiers[ident_Symbol]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[11], context[47] );
      refalrts::link_brackets( context[17], context[46] );
      refalrts::link_brackets( context[12], context[16] );
      refalrts::push_stack( vm, context[41] );
      refalrts::push_stack( vm, context[36] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[34], context[35] );
      res = refalrts::splice_evar( res, context[44], context[47] );
      res = refalrts::splice_evar( res, context[16], context[25] );
      res = refalrts::splice_evar( res, context[42], context[43] );
      res = refalrts::splice_evar( res, context[11], context[15] );
      res = refalrts::splice_evar( res, context[39], context[41] );
      res = refalrts::splice_evar( res, context[26], context[18] );
      res = refalrts::splice_evar( res, context[38], context[38] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_evar( res, context[36], context[37] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoTokenChain:1/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/28 )/12 (/15 e.Tokens#1/30 )/16 (/17 # TkError/25 t.Pos#2/26 e.Message#2/32 )/18 >/1
    context[28] = context[19];
    context[29] = context[20];
    context[30] = context[21];
    context[31] = context[22];
    context[32] = context[23];
    context[33] = context[24];
    if( ! refalrts::ident_term( identifiers[ident_TkError], context[25] ) )
      continue;
    // closed e.Collected#1 as range 28
    // closed e.Tokens#1 as range 30
    // closed e.Message#2 as range 32
    //DEBUG: t.ErrorList#1: 7
    //DEBUG: t.Pos#2: 26
    //DEBUG: s.Mode#1: 5
    //DEBUG: s.Kind#1: 6
    //DEBUG: e.Collected#1: 28
    //DEBUG: e.Tokens#1: 30
    //DEBUG: e.Message#2: 32

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 } Tile{ HalfReuse: </16 } Tile{ HalfReuse: & UnexpectedToken/15 } Tile{ AsIs: t.ErrorList#1/7 } Tile{ AsIs: (/17 AsIs: # TkError/25 AsIs: t.Pos#2/26 AsIs: e.Message#2/32 AsIs: )/18 AsIs: >/1 } Tile{ AsIs: (/11 AsIs: e.Collected#1/28 AsIs: )/12 } Tile{ AsIs: e.Tokens#1/30 } >/34 Tile{ ]] }
    refalrts::alloc_close_call(vm, context[34]);
    refalrts::update_name(context[4], functions[efunc_DoTokenChain]);
    refalrts::reinit_open_call(context[16]);
    refalrts::reinit_name(context[15], functions[efunc_UnexpectedToken]);
    refalrts::push_stack( vm, context[34] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[16] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[34], context[34] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[17], context[1] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoTokenChain:1/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/9 )/12 (/15 e.Tokens#1/13 )/16 t.OtherToken#2/17 >/1
  // closed e.Collected#1 as range 9
  // closed e.Tokens#1 as range 13
  //DEBUG: t.ErrorList#1: 7
  //DEBUG: t.OtherToken#2: 17
  //DEBUG: s.Mode#1: 5
  //DEBUG: s.Kind#1: 6
  //DEBUG: e.Collected#1: 9
  //DEBUG: e.Tokens#1: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DoTokenChain:1/4 s.Mode#1/5 s.Kind#1/6 {REMOVED TILE} (/15 {REMOVED TILE} )/16 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/7 AsIs: (/11 AsIs: e.Collected#1/9 AsIs: )/12 } Tile{ AsIs: t.OtherToken#2/17 } Tile{ AsIs: e.Tokens#1/13 } Tile{ ]] }
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoTokenChain_B1("DoTokenChain:1", COOKIE1_, COOKIE2_, func_gen_DoTokenChain_B1);


static refalrts::FnResult func_DoTokenChain(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 40 elems
  refalrts::Iter context[40];
  refalrts::zeros( context, 40 );
  // </0 & DoTokenChain/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoTokenChain/4 s.new#1/5 s.new#2/6 t.new#3/7 (/11 e.new#4/9 )/12 t.new#5/13 e.new#6/2 >/1
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
  // closed e.new#4 as range 9
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#6 as range 2
  do {
    // </0 & DoTokenChain/4 s.new#7/5 s.new#8/6 t.new#9/7 (/11 e.new#14/15 )/12 (/13 s.new#10/21 t.new#11/22 e.new#12/19 )/14 e.new#13/17 >/1
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[2];
    context[18] = context[3];
    context[19] = 0;
    context[20] = 0;
    if( ! refalrts::brackets_term( context[19], context[20], context[13] ) )
      continue;
    // closed e.new#14 as range 15
    // closed e.new#13 as range 17
    if( ! refalrts::svar_left( context[21], context[19], context[20] ) )
      continue;
    context[23] = refalrts::tvar_left( context[22], context[19], context[20] );
    if( ! context[23] )
      continue;
    // closed e.new#12 as range 19
    do {
      // </0 & DoTokenChain/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/24 )/12 (/13 # TkName/21 t.0#0/22 e.1#0/26 )/14 e.Tokens#1/28 >/1
      context[24] = context[15];
      context[25] = context[16];
      context[26] = context[19];
      context[27] = context[20];
      context[28] = context[17];
      context[29] = context[18];
      if( ! refalrts::ident_term( identifiers[ident_TkName], context[21] ) )
        continue;
      // closed e.Collected#1 as range 24
      // closed e.1#0 as range 26
      // closed e.Tokens#1 as range 28
      //DEBUG: t.ErrorList#1: 7
      //DEBUG: t.0#0: 22
      //DEBUG: s.Mode#1: 5
      //DEBUG: s.Kind#1: 6
      //DEBUG: e.Collected#1: 24
      //DEBUG: e.1#0: 26
      //DEBUG: e.Tokens#1: 28

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} t.0#0/22 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoTokenChain/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 AsIs: t.ErrorList#1/7 AsIs: (/11 AsIs: e.Collected#1/24 HalfReuse: (/12 HalfReuse: # Symbol/13 Reuse: # Identifier/21 } Tile{ AsIs: e.1#0/26 } )/30 Tile{ AsIs: )/14 AsIs: e.Tokens#1/28 AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[30]);
      refalrts::reinit_open_bracket(context[12]);
      refalrts::reinit_ident(context[13], identifiers[ident_Symbol]);
      refalrts::update_ident(context[21], identifiers[ident_Identifier]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[11], context[14] );
      refalrts::link_brackets( context[12], context[30] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[14];
      res = refalrts::splice_evar( res, context[30], context[30] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      refalrts::splice_to_freelist_open( vm, context[21], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoTokenChain/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/24 )/12 (/13 # TkCompound/21 t.0#0/22 e.1#0/26 )/14 e.Tokens#1/28 >/1
      context[24] = context[15];
      context[25] = context[16];
      context[26] = context[19];
      context[27] = context[20];
      context[28] = context[17];
      context[29] = context[18];
      if( ! refalrts::ident_term( identifiers[ident_TkCompound], context[21] ) )
        continue;
      // closed e.Collected#1 as range 24
      // closed e.1#0 as range 26
      // closed e.Tokens#1 as range 28
      //DEBUG: t.ErrorList#1: 7
      //DEBUG: t.0#0: 22
      //DEBUG: s.Mode#1: 5
      //DEBUG: s.Kind#1: 6
      //DEBUG: e.Collected#1: 24
      //DEBUG: e.1#0: 26
      //DEBUG: e.Tokens#1: 28

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} t.0#0/22 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoTokenChain/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 AsIs: t.ErrorList#1/7 AsIs: (/11 AsIs: e.Collected#1/24 HalfReuse: (/12 HalfReuse: # Symbol/13 Reuse: # Identifier/21 } Tile{ AsIs: e.1#0/26 } )/30 Tile{ AsIs: )/14 AsIs: e.Tokens#1/28 AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[30]);
      refalrts::reinit_open_bracket(context[12]);
      refalrts::reinit_ident(context[13], identifiers[ident_Symbol]);
      refalrts::update_ident(context[21], identifiers[ident_Identifier]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[11], context[14] );
      refalrts::link_brackets( context[12], context[30] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[14];
      res = refalrts::splice_evar( res, context[30], context[30] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      refalrts::splice_to_freelist_open( vm, context[21], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoTokenChain/4 s.new#15/5 s.new#16/6 t.new#17/7 (/11 e.new#23/24 )/12 (/13 s.new#18/21 t.new#19/22 s.new#20/30 e.new#21/26 )/14 e.new#22/28 >/1
      context[24] = context[15];
      context[25] = context[16];
      context[26] = context[19];
      context[27] = context[20];
      context[28] = context[17];
      context[29] = context[18];
      // closed e.new#23 as range 24
      // closed e.new#22 as range 28
      if( ! refalrts::svar_left( context[30], context[26], context[27] ) )
        continue;
      // closed e.new#21 as range 26
      do {
        // </0 & DoTokenChain/4 s.new#24/5 s.new#25/6 t.new#26/7 (/11 e.new#31/31 )/12 (/13 s.new#27/21 t.new#28/22 s.new#29/30 )/14 e.new#30/33 >/1
        context[31] = context[24];
        context[32] = context[25];
        context[33] = context[28];
        context[34] = context[29];
        if( ! refalrts::empty_seq( context[26], context[27] ) )
          continue;
        // closed e.new#31 as range 31
        // closed e.new#30 as range 33
        do {
          // </0 & DoTokenChain/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/35 )/12 (/13 # TkMacroDigit/21 t.0#0/22 s.Number#2/30 )/14 e.Tokens#1/37 >/1
          context[35] = context[31];
          context[36] = context[32];
          context[37] = context[33];
          context[38] = context[34];
          if( ! refalrts::ident_term( identifiers[ident_TkMacroDigit], context[21] ) )
            continue;
          // closed e.Collected#1 as range 35
          // closed e.Tokens#1 as range 37
          //DEBUG: t.ErrorList#1: 7
          //DEBUG: t.0#0: 22
          //DEBUG: s.Mode#1: 5
          //DEBUG: s.Kind#1: 6
          //DEBUG: s.Number#2: 30
          //DEBUG: e.Collected#1: 35
          //DEBUG: e.Tokens#1: 37

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} t.0#0/22 {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoTokenChain/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 AsIs: t.ErrorList#1/7 AsIs: (/11 AsIs: e.Collected#1/35 HalfReuse: (/12 HalfReuse: # Symbol/13 Reuse: # Number/21 } Tile{ AsIs: s.Number#2/30 } )/39 Tile{ AsIs: )/14 AsIs: e.Tokens#1/37 AsIs: >/1 ]] }
          refalrts::alloc_close_bracket(vm, context[39]);
          refalrts::reinit_open_bracket(context[12]);
          refalrts::reinit_ident(context[13], identifiers[ident_Symbol]);
          refalrts::update_ident(context[21], identifiers[ident_Number]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[11], context[14] );
          refalrts::link_brackets( context[12], context[39] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[14];
          res = refalrts::splice_evar( res, context[39], context[39] );
          res = refalrts::splice_evar( res, context[30], context[30] );
          refalrts::splice_to_freelist_open( vm, context[21], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & DoTokenChain/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/35 )/12 (/13 # TkChar/21 t.0#0/22 s.Char#2/30 )/14 e.Tokens#1/37 >/1
        context[35] = context[31];
        context[36] = context[32];
        context[37] = context[33];
        context[38] = context[34];
        if( ! refalrts::ident_term( identifiers[ident_TkChar], context[21] ) )
          continue;
        // closed e.Collected#1 as range 35
        // closed e.Tokens#1 as range 37
        //DEBUG: t.ErrorList#1: 7
        //DEBUG: t.0#0: 22
        //DEBUG: s.Mode#1: 5
        //DEBUG: s.Kind#1: 6
        //DEBUG: s.Char#2: 30
        //DEBUG: e.Collected#1: 35
        //DEBUG: e.Tokens#1: 37

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} t.0#0/22 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoTokenChain/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 AsIs: t.ErrorList#1/7 AsIs: (/11 AsIs: e.Collected#1/35 HalfReuse: (/12 HalfReuse: # Symbol/13 Reuse: # Char/21 } Tile{ AsIs: s.Char#2/30 } )/39 Tile{ AsIs: )/14 AsIs: e.Tokens#1/37 AsIs: >/1 ]] }
        refalrts::alloc_close_bracket(vm, context[39]);
        refalrts::reinit_open_bracket(context[12]);
        refalrts::reinit_ident(context[13], identifiers[ident_Symbol]);
        refalrts::update_ident(context[21], identifiers[ident_Char]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[11], context[14] );
        refalrts::link_brackets( context[12], context[39] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[14];
        res = refalrts::splice_evar( res, context[39], context[39] );
        res = refalrts::splice_evar( res, context[30], context[30] );
        refalrts::splice_to_freelist_open( vm, context[21], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoTokenChain/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/31 )/12 (/13 # TkVariable/21 t.0#0/22 s.VarType#2/30 e.2#0/33 )/14 e.Tokens#1/35 >/1
      context[31] = context[24];
      context[32] = context[25];
      context[33] = context[26];
      context[34] = context[27];
      context[35] = context[28];
      context[36] = context[29];
      if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[21] ) )
        continue;
      // closed e.Collected#1 as range 31
      // closed e.2#0 as range 33
      // closed e.Tokens#1 as range 35
      //DEBUG: t.ErrorList#1: 7
      //DEBUG: t.0#0: 22
      //DEBUG: s.Mode#1: 5
      //DEBUG: s.Kind#1: 6
      //DEBUG: s.VarType#2: 30
      //DEBUG: e.Collected#1: 31
      //DEBUG: e.2#0: 33
      //DEBUG: e.Tokens#1: 35

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoTokenChain/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 AsIs: t.ErrorList#1/7 AsIs: (/11 AsIs: e.Collected#1/31 HalfReuse: (/12 HalfReuse: # TkVariable/13 } Tile{ AsIs: t.0#0/22 AsIs: s.VarType#2/30 AsIs: e.2#0/33 AsIs: )/14 } Tile{ HalfReuse: )/21 } Tile{ AsIs: e.Tokens#1/35 } Tile{ AsIs: >/1 ]] }
      refalrts::reinit_open_bracket(context[12]);
      refalrts::reinit_ident(context[13], identifiers[ident_TkVariable]);
      refalrts::reinit_close_bracket(context[21]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[11], context[21] );
      refalrts::link_brackets( context[12], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_evar( res, context[21], context[21] );
      res = refalrts::splice_evar( res, context[22], context[14] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoTokenChain/4 s.new#15/5 s.new#16/6 t.new#17/7 (/11 e.new#21/24 )/12 (/13 s.new#18/21 t.new#19/22 )/14 e.new#20/26 >/1
      context[24] = context[15];
      context[25] = context[16];
      context[26] = context[17];
      context[27] = context[18];
      if( ! refalrts::empty_seq( context[19], context[20] ) )
        continue;
      // closed e.new#21 as range 24
      // closed e.new#20 as range 26
      do {
        // </0 & DoTokenChain/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/28 )/12 (/13 # TkOpenBracket/21 t.0#0/22 )/14 e.Tokens#1/30 >/1
        context[28] = context[24];
        context[29] = context[25];
        context[30] = context[26];
        context[31] = context[27];
        if( ! refalrts::ident_term( identifiers[ident_TkOpenBracket], context[21] ) )
          continue;
        // closed e.Collected#1 as range 28
        // closed e.Tokens#1 as range 30
        //DEBUG: t.ErrorList#1: 7
        //DEBUG: t.0#0: 22
        //DEBUG: s.Mode#1: 5
        //DEBUG: s.Kind#1: 6
        //DEBUG: e.Collected#1: 28
        //DEBUG: e.Tokens#1: 30

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.0#0/22 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain:1$6=1/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 } Tile{ AsIs: (/11 AsIs: e.Collected#1/28 AsIs: )/12 HalfReuse: </13 HalfReuse: & TokenChain/21 } Tile{ AsIs: t.ErrorList#1/7 } s.Mode#1/5/32 Tile{ HalfReuse: s.Kind1 #6/14 AsIs: e.Tokens#1/30 AsIs: >/1 } >/33 Tile{ ]] }
        refalrts::copy_stvar(vm, context[32], context[5]);
        refalrts::alloc_close_call(vm, context[33]);
        refalrts::update_name(context[4], functions[efunc_gen_DoTokenChain_B1S6A1]);
        refalrts::reinit_open_call(context[13]);
        refalrts::reinit_name(context[21], functions[efunc_TokenChain]);
        refalrts::reinit_svar( context[14], context[6] );
        refalrts::push_stack( vm, context[33] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[13] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[33], context[33] );
        res = refalrts::splice_evar( res, context[14], context[1] );
        res = refalrts::splice_evar( res, context[32], context[32] );
        res = refalrts::splice_evar( res, context[7], context[8] );
        res = refalrts::splice_evar( res, context[11], context[21] );
        refalrts::splice_to_freelist_open( vm, context[6], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoTokenChain/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/28 )/12 (/13 # TkOpenCall/21 t.0#0/22 )/14 e.Tokens#1/30 >/1
      context[28] = context[24];
      context[29] = context[25];
      context[30] = context[26];
      context[31] = context[27];
      if( ! refalrts::ident_term( identifiers[ident_TkOpenCall], context[21] ) )
        continue;
      // closed e.Collected#1 as range 28
      // closed e.Tokens#1 as range 30
      //DEBUG: t.ErrorList#1: 7
      //DEBUG: t.0#0: 22
      //DEBUG: s.Mode#1: 5
      //DEBUG: s.Kind#1: 6
      //DEBUG: e.Collected#1: 28
      //DEBUG: e.Tokens#1: 30

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain:1$7=1/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 } Tile{ AsIs: (/11 AsIs: e.Collected#1/28 AsIs: )/12 } Tile{ AsIs: t.0#0/22 HalfReuse: (/14 AsIs: e.Tokens#1/30 HalfReuse: )/1 } Tile{ HalfReuse: </13 HalfReuse: & ClassicError/21 } Tile{ AsIs: t.ErrorList#1/7 } s.Mode#1/5/32 t.0#0/22/33"Identifier expected after \'<\'"/35 >/37 >/38 Tile{ ]] }
      refalrts::copy_stvar(vm, context[32], context[5]);
      refalrts::copy_evar(vm, context[33], context[34], context[22], context[23]);
      refalrts::alloc_chars(vm, context[35], context[36], "Identifier expected after \'<\'", 29);
      refalrts::alloc_close_call(vm, context[37]);
      refalrts::alloc_close_call(vm, context[38]);
      refalrts::update_name(context[4], functions[efunc_gen_DoTokenChain_B1S7A1]);
      refalrts::reinit_open_bracket(context[14]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::reinit_open_call(context[13]);
      refalrts::reinit_name(context[21], functions[efunc_ClassicError]);
      refalrts::push_stack( vm, context[38] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[37] );
      refalrts::push_stack( vm, context[13] );
      refalrts::link_brackets( context[14], context[1] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[32], context[38] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_evar( res, context[13], context[21] );
      res = refalrts::splice_evar( res, context[22], context[1] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoTokenChain/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/24 )/12 (/13 # TkOpenCall/21 t.0#0/22 e.1#0/26 )/14 e.Tokens#1/28 >/1
      context[24] = context[15];
      context[25] = context[16];
      context[26] = context[19];
      context[27] = context[20];
      context[28] = context[17];
      context[29] = context[18];
      if( ! refalrts::ident_term( identifiers[ident_TkOpenCall], context[21] ) )
        continue;
      // closed e.Collected#1 as range 24
      // closed e.1#0 as range 26
      // closed e.Tokens#1 as range 28
      //DEBUG: t.ErrorList#1: 7
      //DEBUG: t.0#0: 22
      //DEBUG: s.Mode#1: 5
      //DEBUG: s.Kind#1: 6
      //DEBUG: e.Collected#1: 24
      //DEBUG: e.1#0: 26
      //DEBUG: e.Tokens#1: 28

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain-AfterCall/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 } (/30 Tile{ AsIs: e.Collected#1/24 } )/31 t.0#0/22/32 (/34 Tile{ HalfReuse: (/12 HalfReuse: # Symbol/13 Reuse: # Name/21 AsIs: t.0#0/22 AsIs: e.1#0/26 AsIs: )/14 } )/35 </36 & TokenChain/37 Tile{ AsIs: t.ErrorList#1/7 HalfReuse: s.Mode1 #5/11 } s.Kind#1/6/38 Tile{ AsIs: e.Tokens#1/28 } >/39 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[30]);
      refalrts::alloc_close_bracket(vm, context[31]);
      refalrts::copy_evar(vm, context[32], context[33], context[22], context[23]);
      refalrts::alloc_open_bracket(vm, context[34]);
      refalrts::alloc_close_bracket(vm, context[35]);
      refalrts::alloc_open_call(vm, context[36]);
      refalrts::alloc_name(vm, context[37], functions[efunc_TokenChain]);
      refalrts::copy_stvar(vm, context[38], context[6]);
      refalrts::alloc_close_call(vm, context[39]);
      refalrts::update_name(context[4], functions[efunc_DoTokenChainm_AfterCall]);
      refalrts::reinit_open_bracket(context[12]);
      refalrts::reinit_ident(context[13], identifiers[ident_Symbol]);
      refalrts::update_ident(context[21], identifiers[ident_Name]);
      refalrts::reinit_svar( context[11], context[5] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[39] );
      refalrts::push_stack( vm, context[36] );
      refalrts::link_brackets( context[34], context[35] );
      refalrts::link_brackets( context[12], context[14] );
      refalrts::link_brackets( context[30], context[31] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[39], context[39] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_evar( res, context[38], context[38] );
      res = refalrts::splice_evar( res, context[7], context[11] );
      res = refalrts::splice_evar( res, context[35], context[37] );
      res = refalrts::splice_evar( res, context[12], context[14] );
      res = refalrts::splice_evar( res, context[31], context[34] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      res = refalrts::splice_evar( res, context[30], context[30] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoTokenChain/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/24 )/12 (/13 # TkOpenADT/21 t.0#0/22 e.1#0/26 )/14 e.Tokens#1/28 >/1
      context[24] = context[15];
      context[25] = context[16];
      context[26] = context[19];
      context[27] = context[20];
      context[28] = context[17];
      context[29] = context[18];
      if( ! refalrts::ident_term( identifiers[ident_TkOpenADT], context[21] ) )
        continue;
      // closed e.Collected#1 as range 24
      // closed e.1#0 as range 26
      // closed e.Tokens#1 as range 28
      //DEBUG: t.ErrorList#1: 7
      //DEBUG: t.0#0: 22
      //DEBUG: s.Mode#1: 5
      //DEBUG: s.Kind#1: 6
      //DEBUG: e.Collected#1: 24
      //DEBUG: e.1#0: 26
      //DEBUG: e.Tokens#1: 28

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain:1$9=1/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 } Tile{ AsIs: (/11 AsIs: e.Collected#1/24 AsIs: )/12 } t.0#0/22/30 Tile{ AsIs: (/13 } Tile{ AsIs: e.1#0/26 } )/32 (/33 Tile{ AsIs: e.Tokens#1/28 } Tile{ AsIs: )/14 } </34 & ClassicError/35 Tile{ AsIs: t.ErrorList#1/7 } Tile{ HalfReuse: s.Mode1 #5/21 AsIs: t.0#0/22 }"Abstract data types is an extension"/36 >/38 Tile{ AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[30], context[31], context[22], context[23]);
      refalrts::alloc_close_bracket(vm, context[32]);
      refalrts::alloc_open_bracket(vm, context[33]);
      refalrts::alloc_open_call(vm, context[34]);
      refalrts::alloc_name(vm, context[35], functions[efunc_ClassicError]);
      refalrts::alloc_chars(vm, context[36], context[37], "Abstract data types is an extension", 35);
      refalrts::alloc_close_call(vm, context[38]);
      refalrts::update_name(context[4], functions[efunc_gen_DoTokenChain_B1S9A1]);
      refalrts::reinit_svar( context[21], context[5] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[38] );
      refalrts::push_stack( vm, context[34] );
      refalrts::link_brackets( context[33], context[14] );
      refalrts::link_brackets( context[13], context[32] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[36], context[38] );
      res = refalrts::splice_evar( res, context[21], context[23] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      res = refalrts::splice_evar( res, context[14], context[14] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoTokenChain/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/24 )/12 (/13 # TkRefal5Mode/21 t.0#0/22 s.NewMode#2/30 )/14 e.Tokens#1/28 >/1
      context[24] = context[15];
      context[25] = context[16];
      context[26] = context[19];
      context[27] = context[20];
      context[28] = context[17];
      context[29] = context[18];
      if( ! refalrts::ident_term( identifiers[ident_TkRefal5Mode], context[21] ) )
        continue;
      // closed e.Collected#1 as range 24
      // closed e.Tokens#1 as range 28
      if( ! refalrts::svar_left( context[30], context[26], context[27] ) )
        continue;
      if( ! refalrts::empty_seq( context[26], context[27] ) )
        continue;
      //DEBUG: t.ErrorList#1: 7
      //DEBUG: t.0#0: 22
      //DEBUG: s.Mode#1: 5
      //DEBUG: s.Kind#1: 6
      //DEBUG: e.Collected#1: 24
      //DEBUG: e.Tokens#1: 28
      //DEBUG: s.NewMode#2: 30

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Mode#1/5 {REMOVED TILE} (/13 # TkRefal5Mode/21 t.0#0/22 {REMOVED TILE} )/14 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoTokenChain/4 } Tile{ AsIs: s.NewMode#2/30 } Tile{ AsIs: s.Kind#1/6 AsIs: t.ErrorList#1/7 AsIs: (/11 AsIs: e.Collected#1/24 AsIs: )/12 } Tile{ AsIs: e.Tokens#1/28 } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_evar( res, context[6], context[12] );
      res = refalrts::splice_evar( res, context[30], context[30] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoTokenChain/4 s.new#15/5 s.new#16/6 t.new#17/7 (/11 e.new#20/24 )/12 (/13 # TkAmpersand/21 t.new#18/22 )/14 e.new#19/26 >/1
    context[24] = context[15];
    context[25] = context[16];
    context[26] = context[17];
    context[27] = context[18];
    if( ! refalrts::ident_term( identifiers[ident_TkAmpersand], context[21] ) )
      continue;
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;
    // closed e.new#20 as range 24
    // closed e.new#19 as range 26
    do {
      // </0 & DoTokenChain/4 # Extended/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/28 )/12 (/13 # TkAmpersand/21 t.0#0/22 )/14 (/34 # TkName/36 t.2#0/37 e.2#0/32 )/35 e.#0/30 >/1
      context[28] = context[24];
      context[29] = context[25];
      context[30] = context[26];
      context[31] = context[27];
      if( ! refalrts::ident_term( identifiers[ident_Extended], context[5] ) )
        continue;
      context[32] = 0;
      context[33] = 0;
      context[34] = refalrts::brackets_left( context[32], context[33], context[30], context[31] );
      if( ! context[34] )
        continue;
      refalrts::bracket_pointers(context[34], context[35]);
      context[36] = refalrts::ident_left( identifiers[ident_TkName], context[32], context[33] );
      if( ! context[36] )
        continue;
      // closed e.Collected#1 as range 28
      // closed e.#0 as range 30
      context[38] = refalrts::tvar_left( context[37], context[32], context[33] );
      if( ! context[38] )
        continue;
      // closed e.2#0 as range 32
      //DEBUG: t.ErrorList#1: 7
      //DEBUG: t.0#0: 22
      //DEBUG: s.Kind#1: 6
      //DEBUG: e.Collected#1: 28
      //DEBUG: e.#0: 30
      //DEBUG: t.2#0: 37
      //DEBUG: e.2#0: 32

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} t.0#0/22 {REMOVED TILE} (/34 # TkName/36 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoTokenChain/4 AsIs: # Extended/5 AsIs: s.Kind#1/6 AsIs: t.ErrorList#1/7 AsIs: (/11 AsIs: e.Collected#1/28 HalfReuse: (/12 HalfReuse: # Symbol/13 Reuse: # Name/21 } Tile{ AsIs: t.2#0/37 } Tile{ AsIs: e.2#0/32 } Tile{ AsIs: )/14 } Tile{ AsIs: )/35 AsIs: e.#0/30 AsIs: >/1 ]] }
      refalrts::reinit_open_bracket(context[12]);
      refalrts::reinit_ident(context[13], identifiers[ident_Symbol]);
      refalrts::update_ident(context[21], identifiers[ident_Name]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[11], context[35] );
      refalrts::link_brackets( context[12], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[35];
      res = refalrts::splice_evar( res, context[14], context[14] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      refalrts::splice_to_freelist_open( vm, context[21], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoTokenChain/4 # Classic/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/28 )/12 (/13 # TkAmpersand/21 t.0#0/22 )/14 e.Tokens#1/30 >/1
      context[28] = context[24];
      context[29] = context[25];
      context[30] = context[26];
      context[31] = context[27];
      if( ! refalrts::ident_term( identifiers[ident_Classic], context[5] ) )
        continue;
      // closed e.Collected#1 as range 28
      // closed e.Tokens#1 as range 30
      //DEBUG: t.ErrorList#1: 7
      //DEBUG: t.0#0: 22
      //DEBUG: s.Kind#1: 6
      //DEBUG: e.Collected#1: 28
      //DEBUG: e.Tokens#1: 30

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Kind#1/6 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain:1$11=1@1/4 HalfReuse: s.Kind1 #6/5 } Tile{ AsIs: (/11 AsIs: e.Collected#1/28 AsIs: )/12 HalfReuse: </13 HalfReuse: & EL-AddErrorAt/21 } Tile{ AsIs: t.ErrorList#1/7 } Tile{ AsIs: t.0#0/22 }"\'&\' is not where-with sign"/32 >/34 (/35 Tile{ AsIs: )/14 AsIs: e.Tokens#1/30 AsIs: >/1 ]] }
      refalrts::alloc_chars(vm, context[32], context[33], "\'&\' is not where-with sign", 26);
      refalrts::alloc_close_call(vm, context[34]);
      refalrts::alloc_open_bracket(vm, context[35]);
      refalrts::update_name(context[4], functions[efunc_gen_DoTokenChain_B1S11A1Z1]);
      refalrts::reinit_svar( context[5], context[6] );
      refalrts::reinit_open_call(context[13]);
      refalrts::reinit_name(context[21], functions[efunc_ELm_AddErrorAt]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[35], context[14] );
      refalrts::push_stack( vm, context[34] );
      refalrts::push_stack( vm, context[13] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[14];
      res = refalrts::splice_evar( res, context[32], context[35] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_evar( res, context[11], context[21] );
      refalrts::splice_to_freelist_open( vm, context[5], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoTokenChain/4 # Extended/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/28 )/12 (/13 # TkAmpersand/21 t.0#0/22 )/14 e.Tokens#1/30 >/1
      context[28] = context[24];
      context[29] = context[25];
      context[30] = context[26];
      context[31] = context[27];
      if( ! refalrts::ident_term( identifiers[ident_Extended], context[5] ) )
        continue;
      // closed e.Collected#1 as range 28
      // closed e.Tokens#1 as range 30
      //DEBUG: t.ErrorList#1: 7
      //DEBUG: t.0#0: 22
      //DEBUG: s.Kind#1: 6
      //DEBUG: e.Collected#1: 28
      //DEBUG: e.Tokens#1: 30

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Kind#1/6 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain:1$11=1@2/4 HalfReuse: s.Kind1 #6/5 } Tile{ AsIs: (/11 AsIs: e.Collected#1/28 AsIs: )/12 HalfReuse: </13 HalfReuse: & EL-AddErrorAt/21 } Tile{ AsIs: t.ErrorList#1/7 } Tile{ AsIs: t.0#0/22 }"Expected function name after \'&\'"/32 >/34 (/35 Tile{ AsIs: )/14 AsIs: e.Tokens#1/30 AsIs: >/1 ]] }
      refalrts::alloc_chars(vm, context[32], context[33], "Expected function name after \'&\'", 32);
      refalrts::alloc_close_call(vm, context[34]);
      refalrts::alloc_open_bracket(vm, context[35]);
      refalrts::update_name(context[4], functions[efunc_gen_DoTokenChain_B1S11A1Z2]);
      refalrts::reinit_svar( context[5], context[6] );
      refalrts::reinit_open_call(context[13]);
      refalrts::reinit_name(context[21], functions[efunc_ELm_AddErrorAt]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[35], context[14] );
      refalrts::push_stack( vm, context[34] );
      refalrts::push_stack( vm, context[13] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[14];
      res = refalrts::splice_evar( res, context[32], context[35] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_evar( res, context[11], context[21] );
      refalrts::splice_to_freelist_open( vm, context[5], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoTokenChain/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/28 )/12 (/13 # TkAmpersand/21 t.0#0/22 )/14 e.Tokens#1/30 >/1
    context[28] = context[24];
    context[29] = context[25];
    context[30] = context[26];
    context[31] = context[27];
    // closed e.Collected#1 as range 28
    // closed e.Tokens#1 as range 30
    //DEBUG: t.ErrorList#1: 7
    //DEBUG: t.0#0: 22
    //DEBUG: s.Mode#1: 5
    //DEBUG: s.Kind#1: 6
    //DEBUG: e.Collected#1: 28
    //DEBUG: e.Tokens#1: 30

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain:1$11=1/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 } Tile{ AsIs: (/11 AsIs: e.Collected#1/28 AsIs: )/12 HalfReuse: </13 HalfReuse: & DoTokenChain:1$11=1:1$2=1/21 } Tile{ AsIs: t.ErrorList#1/7 } Tile{ AsIs: t.0#0/22 HalfReuse: (/14 AsIs: e.Tokens#1/30 HalfReuse: )/1 } </32 & DoTokenChain:1$11=1:1$2=1:1*2/33 s.Mode#1/5/34 >/35 >/36 >/37 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[32]);
    refalrts::alloc_name(vm, context[33], functions[efunc_gen_DoTokenChain_B1S11A1B1S2A1B1D2]);
    refalrts::copy_stvar(vm, context[34], context[5]);
    refalrts::alloc_close_call(vm, context[35]);
    refalrts::alloc_close_call(vm, context[36]);
    refalrts::alloc_close_call(vm, context[37]);
    refalrts::update_name(context[4], functions[efunc_gen_DoTokenChain_B1S11A1]);
    refalrts::reinit_open_call(context[13]);
    refalrts::reinit_name(context[21], functions[efunc_gen_DoTokenChain_B1S11A1B1S2A1]);
    refalrts::reinit_open_bracket(context[14]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::push_stack( vm, context[37] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[36] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[35] );
    refalrts::push_stack( vm, context[32] );
    refalrts::link_brackets( context[14], context[1] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[32], context[37] );
    res = refalrts::splice_evar( res, context[22], context[1] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[11], context[21] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoTokenChain/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/9 )/12 t.NextToken#1/13 e.Tokens#1/2 >/1
  // closed e.Collected#1 as range 9
  // closed e.Tokens#1 as range 2
  //DEBUG: t.ErrorList#1: 7
  //DEBUG: t.NextToken#1: 13
  //DEBUG: s.Mode#1: 5
  //DEBUG: s.Kind#1: 6
  //DEBUG: e.Collected#1: 9
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain:1*11/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 AsIs: t.ErrorList#1/7 AsIs: (/11 AsIs: e.Collected#1/9 AsIs: )/12 } (/15 Tile{ AsIs: e.Tokens#1/2 } )/16 Tile{ AsIs: t.NextToken#1/13 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::alloc_close_bracket(vm, context[16]);
  refalrts::update_name(context[4], functions[efunc_gen_DoTokenChain_B1D11]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoTokenChain("DoTokenChain", COOKIE1_, COOKIE2_, func_DoTokenChain);


static refalrts::FnResult func_gen_DoTokenChainm_AfterCall_S4A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} )/9 (/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain/4 AsIs: s.Mode#1/5 HalfReuse: # Pattern/8 } Tile{ AsIs: t.ErrorList#3/29 } Tile{ AsIs: (/16 } Tile{ AsIs: e.Collected#1/6 } Tile{ AsIs: (/23 } Tile{ HalfReuse: # Brackets/13 } Tile{ AsIs: e.OptionalFuncName#1/10 } Tile{ AsIs: e.BracketTerms#1/14 } Tile{ AsIs: )/24 HalfReuse: )/27 } Tile{ HalfReuse: (/17 AsIs: s.Type#1/18 AsIs: t.Pos#1/19 } Tile{ AsIs: e.Value#1/21 } Tile{ AsIs: )/28 } Tile{ AsIs: e.Tokens#1/25 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_DoTokenChain]);
  refalrts::reinit_ident(context[8], identifiers[ident_Pattern]);
  refalrts::reinit_ident(context[13], identifiers[ident_Brackets]);
  refalrts::reinit_close_bracket(context[27]);
  refalrts::reinit_open_bracket(context[17]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
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
  refalrts::splice_to_freelist_open( vm, context[8], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoTokenChainm_AfterCall_S4A2("DoTokenChain-AfterCall$4=2", COOKIE1_, COOKIE2_, func_gen_DoTokenChainm_AfterCall_S4A2);


static refalrts::FnResult func_gen_DoTokenChainm_AfterCall_S4A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 38 elems
  refalrts::Iter context[38];
  refalrts::zeros( context, 38 );
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain-AfterCall$4=2/4 AsIs: s.Mode#1/5 AsIs: (/8 AsIs: e.Collected#1/6 AsIs: )/9 AsIs: (/12 AsIs: e.OptionalFuncName#1/10 AsIs: )/13 AsIs: (/16 AsIs: e.BracketTerms#1/14 AsIs: )/17 AsIs: s.Type#1/18 AsIs: t.Pos#1/19 AsIs: (/23 AsIs: e.Value#1/21 AsIs: )/24 AsIs: (/27 AsIs: e.Tokens#1/25 AsIs: )/28 } </31 & EL-AddErrorAt/32 Tile{ AsIs: t.ErrorList#2/29 } t.Pos#1/19/33"Missed \'>\'"/35 >/37 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[31]);
  refalrts::alloc_name(vm, context[32], functions[efunc_ELm_AddErrorAt]);
  refalrts::copy_evar(vm, context[33], context[34], context[19], context[20]);
  refalrts::alloc_chars(vm, context[35], context[36], "Missed \'>\'", 10);
  refalrts::alloc_close_call(vm, context[37]);
  refalrts::update_name(context[4], functions[efunc_gen_DoTokenChainm_AfterCall_S4A2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[37] );
  refalrts::push_stack( vm, context[31] );
  refalrts::link_brackets( context[27], context[28] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[33], context[37] );
  res = refalrts::splice_evar( res, context[29], context[30] );
  res = refalrts::splice_evar( res, context[31], context[32] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoTokenChainm_AfterCall_S4A1("DoTokenChain-AfterCall$4=1", COOKIE1_, COOKIE2_, func_gen_DoTokenChainm_AfterCall_S4A1);


static refalrts::FnResult func_DoTokenChainm_AfterCall(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 51 elems
  refalrts::Iter context[51];
  refalrts::zeros( context, 51 );
  // </0 & DoTokenChain-AfterCall/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoTokenChain-AfterCall/4 s.new#1/5 s.new#2/6 (/9 e.new#3/7 )/10 t.new#4/11 (/15 e.new#5/13 )/16 t.new#6/17 (/21 e.new#7/19 )/22 (/25 s.new#8/27 t.new#9/28 e.new#10/23 )/26 e.new#11/2 >/1
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
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.new#5 as range 13
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
  // closed e.new#7 as range 19
  // closed e.new#11 as range 2
  if( ! refalrts::svar_left( context[27], context[23], context[24] ) )
    return refalrts::cRecognitionImpossible;
  context[29] = refalrts::tvar_left( context[28], context[23], context[24] );
  if( ! context[29] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#10 as range 23
  do {
    // </0 & DoTokenChain-AfterCall/4 s.new#12/5 s.new#13/6 (/9 e.new#17/30 )/10 t.new#14/11 (/15 e.new#18/32 )/16 t.new#15/17 (/21 e.new#19/34 )/22 (/25 # TkCloseCall/27 t.new#20/28 )/26 e.new#16/36 >/1
    context[30] = context[7];
    context[31] = context[8];
    context[32] = context[13];
    context[33] = context[14];
    context[34] = context[19];
    context[35] = context[20];
    context[36] = context[2];
    context[37] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_TkCloseCall], context[27] ) )
      continue;
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;
    // closed e.new#17 as range 30
    // closed e.new#18 as range 32
    // closed e.new#19 as range 34
    // closed e.new#16 as range 36
    do {
      // </0 & DoTokenChain-AfterCall/4 s.Mode#1/5 # Result/6 (/9 e.Collected#1/38 )/10 t.CallPos#1/11 (/15 e.OptionalFuncName#1/40 )/16 t.ErrorList#1/17 (/21 e.BracketTerms#1/42 )/22 (/25 # TkCloseCall/27 t.Pos#1/28 )/26 e.Tokens#1/44 >/1
      context[38] = context[30];
      context[39] = context[31];
      context[40] = context[32];
      context[41] = context[33];
      context[42] = context[34];
      context[43] = context[35];
      context[44] = context[36];
      context[45] = context[37];
      if( ! refalrts::ident_term( identifiers[ident_Result], context[6] ) )
        continue;
      // closed e.Collected#1 as range 38
      // closed e.OptionalFuncName#1 as range 40
      // closed e.BracketTerms#1 as range 42
      // closed e.Tokens#1 as range 44
      //DEBUG: t.CallPos#1: 11
      //DEBUG: t.ErrorList#1: 17
      //DEBUG: t.Pos#1: 28
      //DEBUG: s.Mode#1: 5
      //DEBUG: e.Collected#1: 38
      //DEBUG: e.OptionalFuncName#1: 40
      //DEBUG: e.BracketTerms#1: 42
      //DEBUG: e.Tokens#1: 44

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} t.CallPos#1/11 (/15 {REMOVED TILE} )/16 {REMOVED TILE} (/21 {REMOVED TILE} {REMOVED TILE} (/25 {REMOVED TILE} t.Pos#1/28 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain/4 AsIs: s.Mode#1/5 AsIs: # Result/6 } Tile{ AsIs: t.ErrorList#1/17 } Tile{ AsIs: (/9 AsIs: e.Collected#1/38 HalfReuse: (/10 } Tile{ Reuse: # CallBrackets/27 } Tile{ AsIs: e.OptionalFuncName#1/40 } Tile{ AsIs: e.BracketTerms#1/42 } Tile{ AsIs: )/22 } Tile{ AsIs: )/26 AsIs: e.Tokens#1/44 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_DoTokenChain]);
      refalrts::reinit_open_bracket(context[10]);
      refalrts::update_ident(context[27], identifiers[ident_CallBrackets]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[26] );
      refalrts::link_brackets( context[10], context[22] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[26];
      res = refalrts::splice_evar( res, context[22], context[22] );
      res = refalrts::splice_evar( res, context[42], context[43] );
      res = refalrts::splice_evar( res, context[40], context[41] );
      res = refalrts::splice_evar( res, context[27], context[27] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      refalrts::splice_to_freelist_open( vm, context[6], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoTokenChain-AfterCall/4 s.Mode#1/5 # Pattern/6 (/9 e.Collected#1/38 )/10 t.CallPos#1/11 (/15 e.OptionalFuncName#1/40 )/16 t.ErrorList#1/17 (/21 e.BracketTerms#1/42 )/22 (/25 # TkCloseCall/27 t.Pos#1/28 )/26 e.Tokens#1/44 >/1
    context[38] = context[30];
    context[39] = context[31];
    context[40] = context[32];
    context[41] = context[33];
    context[42] = context[34];
    context[43] = context[35];
    context[44] = context[36];
    context[45] = context[37];
    if( ! refalrts::ident_term( identifiers[ident_Pattern], context[6] ) )
      continue;
    // closed e.Collected#1 as range 38
    // closed e.OptionalFuncName#1 as range 40
    // closed e.BracketTerms#1 as range 42
    // closed e.Tokens#1 as range 44
    //DEBUG: t.CallPos#1: 11
    //DEBUG: t.ErrorList#1: 17
    //DEBUG: t.Pos#1: 28
    //DEBUG: s.Mode#1: 5
    //DEBUG: e.Collected#1: 38
    //DEBUG: e.OptionalFuncName#1: 40
    //DEBUG: e.BracketTerms#1: 42
    //DEBUG: e.Tokens#1: 44

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.Pos#1/28 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain/4 AsIs: s.Mode#1/5 AsIs: # Pattern/6 HalfReuse: </9 } Tile{ HalfReuse: & EL-AddErrorAt/16 AsIs: t.ErrorList#1/17 } Tile{ AsIs: t.CallPos#1/11 HalfReuse: 'u'/15 }"ne"/46 Tile{ HalfReuse: 'x'/10 }"pected \'<\' in pattern expression, probably missed \'=\'"/48 >/50 Tile{ AsIs: (/21 } Tile{ AsIs: e.Collected#1/38 } Tile{ AsIs: (/25 Reuse: # Brackets/27 } Tile{ AsIs: e.OptionalFuncName#1/40 } Tile{ AsIs: e.BracketTerms#1/42 } Tile{ AsIs: )/22 } Tile{ AsIs: )/26 AsIs: e.Tokens#1/44 AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[46], context[47], "ne", 2);
    refalrts::alloc_chars(vm, context[48], context[49], "pected \'<\' in pattern expression, probably missed \'=\'", 53);
    refalrts::alloc_close_call(vm, context[50]);
    refalrts::update_name(context[4], functions[efunc_DoTokenChain]);
    refalrts::reinit_open_call(context[9]);
    refalrts::reinit_name(context[16], functions[efunc_ELm_AddErrorAt]);
    refalrts::reinit_char(context[15], 'u');
    refalrts::reinit_char(context[10], 'x');
    refalrts::update_ident(context[27], identifiers[ident_Brackets]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[21], context[26] );
    refalrts::link_brackets( context[25], context[22] );
    refalrts::push_stack( vm, context[50] );
    refalrts::push_stack( vm, context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[26];
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[42], context[43] );
    res = refalrts::splice_evar( res, context[40], context[41] );
    res = refalrts::splice_evar( res, context[25], context[27] );
    res = refalrts::splice_evar( res, context[38], context[39] );
    res = refalrts::splice_evar( res, context[21], context[21] );
    res = refalrts::splice_evar( res, context[48], context[50] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[46], context[47] );
    res = refalrts::splice_evar( res, context[11], context[15] );
    res = refalrts::splice_evar( res, context[16], context[18] );
    refalrts::splice_to_freelist_open( vm, context[9], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
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
    if( ! refalrts::ident_term( identifiers[ident_Result], context[6] ) )
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

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.CallPos#1/11 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain/4 AsIs: s.Mode#1/5 AsIs: # Result/6 HalfReuse: </9 } Tile{ HalfReuse: & EL-AddErrorAt/16 AsIs: t.ErrorList#1/17 } t.Pos#1/28/40"Missed \'>\'"/42 >/44 Tile{ AsIs: (/21 } Tile{ AsIs: e.Collected#1/30 } Tile{ AsIs: (/15 } # CallBrackets/45 Tile{ AsIs: e.OptionalFuncName#1/32 } Tile{ AsIs: e.BracketTerms#1/34 } Tile{ AsIs: )/10 } Tile{ AsIs: )/22 AsIs: (/25 AsIs: s.Type#1/27 AsIs: t.Pos#1/28 AsIs: e.Value#1/36 AsIs: )/26 AsIs: e.Tokens#1/38 AsIs: >/1 ]] }
    refalrts::copy_evar(vm, context[40], context[41], context[28], context[29]);
    refalrts::alloc_chars(vm, context[42], context[43], "Missed \'>\'", 10);
    refalrts::alloc_close_call(vm, context[44]);
    refalrts::alloc_ident(vm, context[45], identifiers[ident_CallBrackets]);
    refalrts::update_name(context[4], functions[efunc_DoTokenChain]);
    refalrts::reinit_open_call(context[9]);
    refalrts::reinit_name(context[16], functions[efunc_ELm_AddErrorAt]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[25], context[26] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::link_brackets( context[15], context[10] );
    refalrts::push_stack( vm, context[44] );
    refalrts::push_stack( vm, context[9] );
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
    refalrts::splice_to_freelist_open( vm, context[9], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoTokenChain-AfterCall/4 s.Mode#1/5 # Pattern/6 (/9 e.Collected#1/7 )/10 t.CallPos#1/11 (/15 e.OptionalFuncName#1/13 )/16 t.ErrorList#1/17 (/21 e.BracketTerms#1/19 )/22 (/25 s.Type#1/27 t.Pos#1/28 e.Value#1/23 )/26 e.Tokens#1/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_Pattern], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Collected#1 as range 7
  // closed e.OptionalFuncName#1 as range 13
  // closed e.BracketTerms#1 as range 19
  // closed e.Value#1 as range 23
  // closed e.Tokens#1 as range 2
  //DEBUG: t.CallPos#1: 11
  //DEBUG: t.ErrorList#1: 17
  //DEBUG: t.Pos#1: 28
  //DEBUG: s.Mode#1: 5
  //DEBUG: s.Type#1: 27
  //DEBUG: e.Collected#1: 7
  //DEBUG: e.OptionalFuncName#1: 13
  //DEBUG: e.BracketTerms#1: 19
  //DEBUG: e.Value#1: 23
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Type#1/27 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain-AfterCall$4=1/4 AsIs: s.Mode#1/5 HalfReuse: (/6 } Tile{ AsIs: e.Collected#1/7 } Tile{ AsIs: )/10 } Tile{ AsIs: (/15 AsIs: e.OptionalFuncName#1/13 AsIs: )/16 } Tile{ AsIs: (/21 AsIs: e.BracketTerms#1/19 AsIs: )/22 HalfReuse: s.Type1 #27/25 } Tile{ AsIs: t.Pos#1/28 } Tile{ AsIs: (/9 } Tile{ AsIs: e.Value#1/23 } Tile{ AsIs: )/26 } (/30 Tile{ AsIs: e.Tokens#1/2 } )/31 </32 & EL-AddErrorAt/33 Tile{ AsIs: t.ErrorList#1/17 } Tile{ AsIs: t.CallPos#1/11 }"unexpected \'<\' in pattern expression, probably missed \'=\'"/34 >/36 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[30]);
  refalrts::alloc_close_bracket(vm, context[31]);
  refalrts::alloc_open_call(vm, context[32]);
  refalrts::alloc_name(vm, context[33], functions[efunc_ELm_AddErrorAt]);
  refalrts::alloc_chars(vm, context[34], context[35], "unexpected \'<\' in pattern expression, probably missed \'=\'", 57);
  refalrts::alloc_close_call(vm, context[36]);
  refalrts::update_name(context[4], functions[efunc_gen_DoTokenChainm_AfterCall_S4A1]);
  refalrts::reinit_open_bracket(context[6]);
  refalrts::reinit_svar( context[25], context[27] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[36] );
  refalrts::push_stack( vm, context[32] );
  refalrts::link_brackets( context[30], context[31] );
  refalrts::link_brackets( context[9], context[26] );
  refalrts::link_brackets( context[21], context[22] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[6], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[34], context[36] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[31], context[33] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[30], context[30] );
  res = refalrts::splice_evar( res, context[26], context[26] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[28], context[29] );
  res = refalrts::splice_evar( res, context[21], context[25] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, context[6], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoTokenChainm_AfterCall("DoTokenChain-AfterCall", COOKIE1_, COOKIE2_, func_DoTokenChainm_AfterCall);


static refalrts::FnResult func_DoTokenChainm_AddRedefinition(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & DoTokenChain-AddRedefinition/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoTokenChain-AddRedefinition/4 s.new#1/5 t.new#2/6 (/10 e.new#3/8 )/11 t.new#4/12 >/1
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
  // closed e.new#3 as range 8
  context[13] = refalrts::tvar_left( context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & DoTokenChain-AddRedefinition/4 # Pattern/5 t.new#5/6 (/10 e.new#7/14 )/11 t.new#6/12 >/1
    context[14] = context[8];
    context[15] = context[9];
    if( ! refalrts::ident_term( identifiers[ident_Pattern], context[5] ) )
      continue;
    // closed e.new#7 as range 14
    do {
      // </0 & DoTokenChain-AddRedefinition/4 # Pattern/5 t.ErrorList#1/6 (/10 e.Collected#1/16 (/20 # TkVariable/22 t.VarPos#1/23 s.VarType#1/25 e.Index#1/18 )/21 )/11 t.Pos#1/12 >/1
      context[16] = context[14];
      context[17] = context[15];
      context[18] = 0;
      context[19] = 0;
      context[20] = refalrts::brackets_right( context[18], context[19], context[16], context[17] );
      if( ! context[20] )
        continue;
      refalrts::bracket_pointers(context[20], context[21]);
      context[22] = refalrts::ident_left( identifiers[ident_TkVariable], context[18], context[19] );
      if( ! context[22] )
        continue;
      // closed e.Collected#1 as range 16
      context[24] = refalrts::tvar_left( context[23], context[18], context[19] );
      if( ! context[24] )
        continue;
      if( ! refalrts::svar_left( context[25], context[18], context[19] ) )
        continue;
      // closed e.Index#1 as range 18
      //DEBUG: t.ErrorList#1: 6
      //DEBUG: t.Pos#1: 12
      //DEBUG: e.Collected#1: 16
      //DEBUG: t.VarPos#1: 23
      //DEBUG: s.VarType#1: 25
      //DEBUG: e.Index#1: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & DoTokenChain-AddRedefinition/4 # Pattern/5 {REMOVED TILE} t.Pos#1/12 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/6 AsIs: (/10 AsIs: e.Collected#1/16 AsIs: (/20 Reuse: # TkNewVariable/22 AsIs: t.VarPos#1/23 AsIs: s.VarType#1/25 AsIs: e.Index#1/18 AsIs: )/21 AsIs: )/11 } Tile{ ]] }
      refalrts::update_ident(context[22], identifiers[ident_TkNewVariable]);
      refalrts::link_brackets( context[10], context[11] );
      refalrts::link_brackets( context[20], context[21] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[6], context[11] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoTokenChain-AddRedefinition/4 # Pattern/5 t.ErrorList#1/6 (/10 e.Collected#1/16 )/11 t.Pos#1/12 >/1
    context[16] = context[14];
    context[17] = context[15];
    // closed e.Collected#1 as range 16
    //DEBUG: t.ErrorList#1: 6
    //DEBUG: t.Pos#1: 12
    //DEBUG: e.Collected#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 } Tile{ AsIs: t.ErrorList#1/6 } Tile{ AsIs: t.Pos#1/12 HalfReuse: 'R'/1 }"ed"/18 Tile{ HalfReuse: 'e'/5 }"finition sign expects variable before"/20 >/22 Tile{ AsIs: (/10 AsIs: e.Collected#1/16 AsIs: )/11 } Tile{ ]] }
    refalrts::alloc_chars(vm, context[18], context[19], "ed", 2);
    refalrts::alloc_chars(vm, context[20], context[21], "finition sign expects variable before", 37);
    refalrts::alloc_close_call(vm, context[22]);
    refalrts::update_name(context[4], functions[efunc_ELm_AddErrorAt]);
    refalrts::reinit_char(context[1], 'R');
    refalrts::reinit_char(context[5], 'e');
    refalrts::link_brackets( context[10], context[11] );
    refalrts::push_stack( vm, context[22] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[20], context[22] );
    res = refalrts::splice_evar( res, context[5], context[5] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[12], context[1] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoTokenChain-AddRedefinition/4 # Result/5 t.ErrorList#1/6 (/10 e.Collected#1/8 )/11 t.Pos#1/12 >/1
  if( ! refalrts::ident_term( identifiers[ident_Result], context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Collected#1 as range 8
  //DEBUG: t.ErrorList#1: 6
  //DEBUG: t.Pos#1: 12
  //DEBUG: e.Collected#1: 8

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 } Tile{ AsIs: t.ErrorList#1/6 } Tile{ AsIs: t.Pos#1/12 HalfReuse: 'I'/1 }"ll"/14 Tile{ HalfReuse: 'e'/5 }"gal redefinition sign in result expression"/16 >/18 Tile{ AsIs: (/10 AsIs: e.Collected#1/8 AsIs: )/11 } Tile{ ]] }
  refalrts::alloc_chars(vm, context[14], context[15], "ll", 2);
  refalrts::alloc_chars(vm, context[16], context[17], "gal redefinition sign in result expression", 42);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::update_name(context[4], functions[efunc_ELm_AddErrorAt]);
  refalrts::reinit_char(context[1], 'I');
  refalrts::reinit_char(context[5], 'e');
  refalrts::link_brackets( context[10], context[11] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[16], context[18] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[12], context[1] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoTokenChainm_AddRedefinition("DoTokenChain-AddRedefinition", COOKIE1_, COOKIE2_, func_DoTokenChainm_AddRedefinition);


static refalrts::FnResult func_gen_Expressionm_CheckBrackets_S1A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/9 {REMOVED TILE} )/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Expression-CheckBrackets/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 } Tile{ AsIs: t.ErrorList#4/11 AsIs: (/15 } Tile{ AsIs: e.Expression#1/7 } Tile{ AsIs: e.Subexpression#4/13 } Tile{ AsIs: )/16 AsIs: e.Tokens#4/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_Expressionm_CheckBrackets]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[16];
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[11], context[15] );
  refalrts::splice_to_freelist_open( vm, context[6], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Expressionm_CheckBrackets_S1A3("Expression-CheckBrackets$1=3", COOKIE1_, COOKIE2_, func_gen_Expressionm_CheckBrackets_S1A3);


static refalrts::FnResult func_gen_Expressionm_CheckBrackets_S1A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Expression-CheckBrackets$1=3/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 AsIs: (/9 AsIs: e.Expression#1/7 AsIs: )/10 HalfReuse: </13 } Tile{ HalfReuse: & TokenChain/14 AsIs: t.ErrorList#3/15 } s.Mode#1/5/17 s.Kind#1/6/18 Tile{ AsIs: e.Tokens#1/11 } >/19 Tile{ AsIs: >/1 ]] }
  refalrts::copy_stvar(vm, context[17], context[5]);
  refalrts::copy_stvar(vm, context[18], context[6]);
  refalrts::alloc_close_call(vm, context[19]);
  refalrts::update_name(context[4], functions[efunc_gen_Expressionm_CheckBrackets_S1A3]);
  refalrts::reinit_open_call(context[13]);
  refalrts::reinit_name(context[14], functions[efunc_TokenChain]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[14], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Expressionm_CheckBrackets_S1A2("Expression-CheckBrackets$1=2", COOKIE1_, COOKIE2_, func_gen_Expressionm_CheckBrackets_S1A2);


static refalrts::FnResult func_Expressionm_CheckBrackets(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
  // </0 & Expression-CheckBrackets/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Expression-CheckBrackets/4 s.new#1/5 s.new#2/6 t.new#3/7 t.new#4/9 e.new#5/2 >/1
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
  // closed e.new#5 as range 2
  do {
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

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[22]);
    refalrts::alloc_name(vm, context[24], functions[efunc_gen_Expressionm_CheckBrackets_S1C1]);
    refalrts::alloc_open_call(vm, context[25]);
    refalrts::alloc_name(vm, context[26], functions[efunc_OneOf]);
    refalrts::copy_stvar(vm, context[27], context[19]);
    refalrts::alloc_ident(vm, context[28], identifiers[ident_TkCloseBracket]);
    refalrts::alloc_ident(vm, context[29], identifiers[ident_TkCloseCall]);
    refalrts::alloc_ident(vm, context[30], identifiers[ident_TkCloseADT]);
    refalrts::alloc_close_call(vm, context[31]);
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[22] );
    res = refalrts::splice_elem( res, context[23] );
    refalrts::push_stack( vm, context[31] );
    refalrts::push_stack( vm, context[25] );
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
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </22 & Expression-CheckBrackets$1?1/26 # True/27 >/23
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::call_left( context[24], context[25], context[22], context[23] );
      context[27] = refalrts::ident_left( identifiers[ident_True], context[24], context[25] );
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

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Type#1/19 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Expression-CheckBrackets$1=2/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 } Tile{ AsIs: (/9 AsIs: e.Expression#1/13 AsIs: )/10 AsIs: (/17 } Tile{ AsIs: e.Tokens#1/11 } )/28 </29 & EL-AddErrorAt/30 Tile{ AsIs: t.ErrorList#1/7 } Tile{ AsIs: t.Pos#1/20 HalfReuse: 'u'/18 }"nbalanced "/31 Tile{ AsIs: </22 Reuse: & TokName/26 HalfReuse: s.Type1 #19/27 AsIs: >/23 AsIs: >/1 } >/33 Tile{ ]] }
      refalrts::alloc_close_bracket(vm, context[28]);
      refalrts::alloc_open_call(vm, context[29]);
      refalrts::alloc_name(vm, context[30], functions[efunc_ELm_AddErrorAt]);
      refalrts::alloc_chars(vm, context[31], context[32], "nbalanced ", 10);
      refalrts::alloc_close_call(vm, context[33]);
      refalrts::update_name(context[4], functions[efunc_gen_Expressionm_CheckBrackets_S1A2]);
      refalrts::reinit_char(context[18], 'u');
      refalrts::update_name(context[26], functions[efunc_TokName]);
      refalrts::reinit_svar( context[27], context[19] );
      refalrts::push_stack( vm, context[33] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[29] );
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[22] );
      refalrts::link_brackets( context[17], context[28] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[33], context[33] );
      res = refalrts::splice_evar( res, context[22], context[1] );
      res = refalrts::splice_evar( res, context[31], context[32] );
      res = refalrts::splice_evar( res, context[20], context[18] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_evar( res, context[28], context[30] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[9], context[17] );
      refalrts::splice_to_freelist_open( vm, context[6], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[22], context[23]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Expression-CheckBrackets/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 t.Expression#1/9 e.Tokens#1/2 >/1
  // closed e.Tokens#1 as range 2
  //DEBUG: t.ErrorList#1: 7
  //DEBUG: t.Expression#1: 9
  //DEBUG: s.Mode#1: 5
  //DEBUG: s.Kind#1: 6
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Expression-CheckBrackets/4 s.Mode#1/5 s.Kind#1/6 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/7 AsIs: t.Expression#1/9 } Tile{ AsIs: e.Tokens#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[10] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Expressionm_CheckBrackets("Expression-CheckBrackets", COOKIE1_, COOKIE2_, func_Expressionm_CheckBrackets);


static refalrts::FnResult func_ClassicError(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & ClassicError/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ClassicError/4 t.new#1/5 s.new#2/7 t.new#3/8 e.new#4/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[9] = refalrts::tvar_left( context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 2
  do {
    // </0 & ClassicError/4 t.ErrorList#1/5 # Classic/7 t.Pos#1/8 e.Message#1/10 >/1
    context[10] = context[2];
    context[11] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Classic], context[7] ) )
      continue;
    // closed e.Message#1 as range 10
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: t.Pos#1: 8
    //DEBUG: e.Message#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} # Classic/7 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#1/5 } Tile{ AsIs: t.Pos#1/8 AsIs: e.Message#1/10 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_ELm_AddErrorAt]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    refalrts::splice_to_freelist_open( vm, context[6], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ClassicError/4 t.ErrorList#1/5 # Extended/7 t.Pos#1/8 e.Message#1/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_Extended], context[7] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Message#1 as range 2
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: t.Pos#1: 8
  //DEBUG: e.Message#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ClassicError/4 {REMOVED TILE} # Extended/7 t.Pos#1/8 e.Message#1/2 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ClassicError("ClassicError", COOKIE1_, COOKIE2_, func_ClassicError);


static refalrts::FnResult func_UnexpectedToken(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & UnexpectedToken/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & UnexpectedToken/4 t.new#1/5 (/9 s.new#2/11 t.new#3/12 e.new#4/7 )/10 e.new#5/2 >/1
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
  context[13] = refalrts::tvar_left( context[12], context[7], context[8] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 7
  do {
    // </0 & UnexpectedToken/4 t.ErrorList#1/5 (/9 # TkError/11 t.Pos#1/12 e.Message#1/14 )/10 e.Expected#1/16 >/1
    context[14] = context[7];
    context[15] = context[8];
    context[16] = context[2];
    context[17] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_TkError], context[11] ) )
      continue;
    // closed e.Message#1 as range 14
    // closed e.Expected#1 as range 16
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: t.Pos#1: 12
    //DEBUG: e.Message#1: 14
    //DEBUG: e.Expected#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/9 # TkError/11 {REMOVED TILE} e.Expected#1/16 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#1/5 } Tile{ AsIs: t.Pos#1/12 AsIs: e.Message#1/14 HalfReuse: >/10 } Tile{ ]] }
    refalrts::update_name(context[4], functions[efunc_ELm_AddErrorAt]);
    refalrts::reinit_close_call(context[10]);
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[10] );
    refalrts::splice_to_freelist_open( vm, context[6], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & UnexpectedToken/4 t.ErrorList#1/5 (/9 s.Type#1/11 t.Pos#1/12 e.Value#1/7 )/10 e.Expected#1/2 >/1
  // closed e.Value#1 as range 7
  // closed e.Expected#1 as range 2
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: t.Pos#1: 12
  //DEBUG: s.Type#1: 11
  //DEBUG: e.Value#1: 7
  //DEBUG: e.Expected#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Value#1/7 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#1/5 } Tile{ AsIs: t.Pos#1/12 }"unexpected "/14 </16 Tile{ HalfReuse: & TokName/9 AsIs: s.Type#1/11 } >/17", expected"/18 Tile{ HalfReuse: ' '/10 AsIs: e.Expected#1/2 AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[14], context[15], "unexpected ", 11);
  refalrts::alloc_open_call(vm, context[16]);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::alloc_chars(vm, context[18], context[19], ", expected", 10);
  refalrts::update_name(context[4], functions[efunc_ELm_AddErrorAt]);
  refalrts::reinit_name(context[9], functions[efunc_TokName]);
  refalrts::reinit_char(context[10], ' ');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[10];
  res = refalrts::splice_evar( res, context[17], context[19] );
  res = refalrts::splice_evar( res, context[9], context[11] );
  res = refalrts::splice_evar( res, context[14], context[16] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  refalrts::splice_to_freelist_open( vm, context[6], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_UnexpectedToken("UnexpectedToken", COOKIE1_, COOKIE2_, func_UnexpectedToken);


static refalrts::FnResult func_TokName(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & TokName/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & TokName/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & TokName/4 # TkName/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkName], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'i'/0 HalfReuse: 'd'/4 HalfReuse: 'e'/5 HalfReuse: 'n'/1 }"tifier"/6 Tile{ ]] }
    refalrts::alloc_chars(vm, context[6], context[7], "tifier", 6);
    refalrts::reinit_char(context[0], 'i');
    refalrts::reinit_char(context[4], 'd');
    refalrts::reinit_char(context[5], 'e');
    refalrts::reinit_char(context[1], 'n');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & TokName/4 # TkCompound/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkCompound], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'c'/0 HalfReuse: 'o'/4 HalfReuse: 'm'/5 HalfReuse: 'p'/1 }"ound symbol"/6 Tile{ ]] }
    refalrts::alloc_chars(vm, context[6], context[7], "ound symbol", 11);
    refalrts::reinit_char(context[0], 'c');
    refalrts::reinit_char(context[4], 'o');
    refalrts::reinit_char(context[5], 'm');
    refalrts::reinit_char(context[1], 'p');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & TokName/4 # TkMacroDigit/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkMacroDigit], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'n'/0 HalfReuse: 'u'/4 HalfReuse: 'm'/5 HalfReuse: 'b'/1 }"er"/6 Tile{ ]] }
    refalrts::alloc_chars(vm, context[6], context[7], "er", 2);
    refalrts::reinit_char(context[0], 'n');
    refalrts::reinit_char(context[4], 'u');
    refalrts::reinit_char(context[5], 'm');
    refalrts::reinit_char(context[1], 'b');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & TokName/4 # TkChar/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkChar], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'c'/0 HalfReuse: 'h'/4 HalfReuse: 'a'/5 HalfReuse: 'r'/1 }"acter"/6 Tile{ ]] }
    refalrts::alloc_chars(vm, context[6], context[7], "acter", 5);
    refalrts::reinit_char(context[0], 'c');
    refalrts::reinit_char(context[4], 'h');
    refalrts::reinit_char(context[5], 'a');
    refalrts::reinit_char(context[1], 'r');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & TokName/4 # TkVariable/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'v'/0 HalfReuse: 'a'/4 HalfReuse: 'r'/5 HalfReuse: 'i'/1 }"able"/6 Tile{ ]] }
    refalrts::alloc_chars(vm, context[6], context[7], "able", 4);
    refalrts::reinit_char(context[0], 'v');
    refalrts::reinit_char(context[4], 'a');
    refalrts::reinit_char(context[5], 'r');
    refalrts::reinit_char(context[1], 'i');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & TokName/4 # TkOpenBracket/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkOpenBracket], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\''/4 HalfReuse: '('/5 HalfReuse: '\''/1 ]] }
    refalrts::reinit_char(context[4], '\'');
    refalrts::reinit_char(context[5], '(');
    refalrts::reinit_char(context[1], '\'');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & TokName/4 # TkCloseBracket/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkCloseBracket], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\''/4 HalfReuse: ')'/5 HalfReuse: '\''/1 ]] }
    refalrts::reinit_char(context[4], '\'');
    refalrts::reinit_char(context[5], ')');
    refalrts::reinit_char(context[1], '\'');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & TokName/4 # TkOpenBlock/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkOpenBlock], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\''/4 HalfReuse: '{'/5 HalfReuse: '\''/1 ]] }
    refalrts::reinit_char(context[4], '\'');
    refalrts::reinit_char(context[5], '{');
    refalrts::reinit_char(context[1], '\'');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & TokName/4 # TkCloseBlock/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkCloseBlock], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\''/4 HalfReuse: '}'/5 HalfReuse: '\''/1 ]] }
    refalrts::reinit_char(context[4], '\'');
    refalrts::reinit_char(context[5], '}');
    refalrts::reinit_char(context[1], '\'');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & TokName/4 # TkOpenCall/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkOpenCall], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\''/4 HalfReuse: '<'/5 HalfReuse: '\''/1 ]] }
    refalrts::reinit_char(context[4], '\'');
    refalrts::reinit_char(context[5], '<');
    refalrts::reinit_char(context[1], '\'');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & TokName/4 # TkCloseCall/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkCloseCall], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\''/4 HalfReuse: '>'/5 HalfReuse: '\''/1 ]] }
    refalrts::reinit_char(context[4], '\'');
    refalrts::reinit_char(context[5], '>');
    refalrts::reinit_char(context[1], '\'');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & TokName/4 # TkOpenADT/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkOpenADT], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\''/4 HalfReuse: '['/5 HalfReuse: '\''/1 ]] }
    refalrts::reinit_char(context[4], '\'');
    refalrts::reinit_char(context[5], '[');
    refalrts::reinit_char(context[1], '\'');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & TokName/4 # TkCloseADT/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkCloseADT], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\''/4 HalfReuse: ']'/5 HalfReuse: '\''/1 ]] }
    refalrts::reinit_char(context[4], '\'');
    refalrts::reinit_char(context[5], ']');
    refalrts::reinit_char(context[1], '\'');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & TokName/4 # TkComma/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkComma], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\''/4 HalfReuse: ','/5 HalfReuse: '\''/1 ]] }
    refalrts::reinit_char(context[4], '\'');
    refalrts::reinit_char(context[5], ',');
    refalrts::reinit_char(context[1], '\'');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & TokName/4 # TkColon/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkColon], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\''/4 HalfReuse: ':'/5 HalfReuse: '\''/1 ]] }
    refalrts::reinit_char(context[4], '\'');
    refalrts::reinit_char(context[5], ':');
    refalrts::reinit_char(context[1], '\'');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & TokName/4 # TkAssign/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkAssign], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\''/4 HalfReuse: '='/5 HalfReuse: '\''/1 ]] }
    refalrts::reinit_char(context[4], '\'');
    refalrts::reinit_char(context[5], '=');
    refalrts::reinit_char(context[1], '\'');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & TokName/4 # TkSemicolon/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkSemicolon], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\''/4 HalfReuse: ';'/5 HalfReuse: '\''/1 ]] }
    refalrts::reinit_char(context[4], '\'');
    refalrts::reinit_char(context[5], ';');
    refalrts::reinit_char(context[1], '\'');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & TokName/4 # TkExtern/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkExtern], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: '$'/0 HalfReuse: 'E'/4 HalfReuse: 'X'/5 HalfReuse: 'T'/1 }"ERN"/6 Tile{ ]] }
    refalrts::alloc_chars(vm, context[6], context[7], "ERN", 3);
    refalrts::reinit_char(context[0], '$');
    refalrts::reinit_char(context[4], 'E');
    refalrts::reinit_char(context[5], 'X');
    refalrts::reinit_char(context[1], 'T');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & TokName/4 # TkEntry/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkEntry], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: '$'/0 HalfReuse: 'E'/4 HalfReuse: 'N'/5 HalfReuse: 'T'/1 }"RY"/6 Tile{ ]] }
    refalrts::alloc_chars(vm, context[6], context[7], "RY", 2);
    refalrts::reinit_char(context[0], '$');
    refalrts::reinit_char(context[4], 'E');
    refalrts::reinit_char(context[5], 'N');
    refalrts::reinit_char(context[1], 'T');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & TokName/4 # TkEnum/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkEnum], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: '$'/0 HalfReuse: 'E'/4 HalfReuse: 'N'/5 HalfReuse: 'U'/1 } 'M'/6 Tile{ ]] }
    refalrts::alloc_char(vm, context[6], 'M');
    refalrts::reinit_char(context[0], '$');
    refalrts::reinit_char(context[4], 'E');
    refalrts::reinit_char(context[5], 'N');
    refalrts::reinit_char(context[1], 'U');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[6] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & TokName/4 # TkEEnum/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkEEnum], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: '$'/0 HalfReuse: 'E'/4 HalfReuse: 'E'/5 HalfReuse: 'N'/1 }"UM"/6 Tile{ ]] }
    refalrts::alloc_chars(vm, context[6], context[7], "UM", 2);
    refalrts::reinit_char(context[0], '$');
    refalrts::reinit_char(context[4], 'E');
    refalrts::reinit_char(context[5], 'E');
    refalrts::reinit_char(context[1], 'N');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & TokName/4 # TkSwap/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkSwap], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: '$'/0 HalfReuse: 'S'/4 HalfReuse: 'W'/5 HalfReuse: 'A'/1 } 'P'/6 Tile{ ]] }
    refalrts::alloc_char(vm, context[6], 'P');
    refalrts::reinit_char(context[0], '$');
    refalrts::reinit_char(context[4], 'S');
    refalrts::reinit_char(context[5], 'W');
    refalrts::reinit_char(context[1], 'A');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[6] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & TokName/4 # TkESwap/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkESwap], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: '$'/0 HalfReuse: 'E'/4 HalfReuse: 'S'/5 HalfReuse: 'W'/1 }"AP"/6 Tile{ ]] }
    refalrts::alloc_chars(vm, context[6], context[7], "AP", 2);
    refalrts::reinit_char(context[0], '$');
    refalrts::reinit_char(context[4], 'E');
    refalrts::reinit_char(context[5], 'S');
    refalrts::reinit_char(context[1], 'W');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & TokName/4 # TkInclude/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkInclude], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: '$'/0 HalfReuse: 'I'/4 HalfReuse: 'N'/5 HalfReuse: 'C'/1 }"LUDE"/6 Tile{ ]] }
    refalrts::alloc_chars(vm, context[6], context[7], "LUDE", 4);
    refalrts::reinit_char(context[0], '$');
    refalrts::reinit_char(context[4], 'I');
    refalrts::reinit_char(context[5], 'N');
    refalrts::reinit_char(context[1], 'C');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & TokName/4 # TkScopeId/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkScopeId], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: '$'/0 HalfReuse: 'S'/4 HalfReuse: 'C'/5 HalfReuse: 'O'/1 }"PEID"/6 Tile{ ]] }
    refalrts::alloc_chars(vm, context[6], context[7], "PEID", 4);
    refalrts::reinit_char(context[0], '$');
    refalrts::reinit_char(context[4], 'S');
    refalrts::reinit_char(context[5], 'C');
    refalrts::reinit_char(context[1], 'O');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & TokName/4 # TkLabel/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkLabel], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: '$'/0 HalfReuse: 'L'/4 HalfReuse: 'A'/5 HalfReuse: 'B'/1 }"EL"/6 Tile{ ]] }
    refalrts::alloc_chars(vm, context[6], context[7], "EL", 2);
    refalrts::reinit_char(context[0], '$');
    refalrts::reinit_char(context[4], 'L');
    refalrts::reinit_char(context[5], 'A');
    refalrts::reinit_char(context[1], 'B');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & TokName/4 # TkInline/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkInline], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: '$'/0 HalfReuse: 'I'/4 HalfReuse: 'N'/5 HalfReuse: 'L'/1 }"INE"/6 Tile{ ]] }
    refalrts::alloc_chars(vm, context[6], context[7], "INE", 3);
    refalrts::reinit_char(context[0], '$');
    refalrts::reinit_char(context[4], 'I');
    refalrts::reinit_char(context[5], 'N');
    refalrts::reinit_char(context[1], 'L');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & TokName/4 # TkDrive/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkDrive], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: '$'/0 HalfReuse: 'D'/4 HalfReuse: 'R'/5 HalfReuse: 'I'/1 }"VE"/6 Tile{ ]] }
    refalrts::alloc_chars(vm, context[6], context[7], "VE", 2);
    refalrts::reinit_char(context[0], '$');
    refalrts::reinit_char(context[4], 'D');
    refalrts::reinit_char(context[5], 'R');
    refalrts::reinit_char(context[1], 'I');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & TokName/4 # TkEOF/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkEOF], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'e'/0 HalfReuse: 'n'/4 HalfReuse: 'd'/5 HalfReuse: '-'/1 }"of-file"/6 Tile{ ]] }
    refalrts::alloc_chars(vm, context[6], context[7], "of-file", 7);
    refalrts::reinit_char(context[0], 'e');
    refalrts::reinit_char(context[4], 'n');
    refalrts::reinit_char(context[5], 'd');
    refalrts::reinit_char(context[1], '-');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & TokName/4 # TkRefal5Mode/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkRefal5Mode], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: '*'/0 HalfReuse: '$'/4 HalfReuse: 'C'/5 HalfReuse: 'L'/1 }"ASSIC or *$EXTENDED"/6 Tile{ ]] }
    refalrts::alloc_chars(vm, context[6], context[7], "ASSIC or *$EXTENDED", 19);
    refalrts::reinit_char(context[0], '*');
    refalrts::reinit_char(context[4], '$');
    refalrts::reinit_char(context[5], 'C');
    refalrts::reinit_char(context[1], 'L');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & TokName/4 # TkAmpersand/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkAmpersand], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\''/4 HalfReuse: '&'/5 HalfReuse: '\''/1 ]] }
    refalrts::reinit_char(context[4], '\'');
    refalrts::reinit_char(context[5], '&');
    refalrts::reinit_char(context[1], '\'');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & TokName/4 # TkRedefinition/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkRedefinition], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\''/4 HalfReuse: '^'/5 HalfReuse: '\''/1 ]] }
    refalrts::reinit_char(context[4], '\'');
    refalrts::reinit_char(context[5], '^');
    refalrts::reinit_char(context[1], '\'');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & TokName/4 # TkNativeCode/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkNativeCode], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'n'/0 HalfReuse: 'a'/4 HalfReuse: 't'/5 HalfReuse: 'i'/1 }"ve code insertion"/6 Tile{ ]] }
    refalrts::alloc_chars(vm, context[6], context[7], "ve code insertion", 17);
    refalrts::reinit_char(context[0], 'n');
    refalrts::reinit_char(context[4], 'a');
    refalrts::reinit_char(context[5], 't');
    refalrts::reinit_char(context[1], 'i');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & TokName/4 # TkSpec/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkSpec], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: '$'/0 HalfReuse: 'S'/4 HalfReuse: 'P'/5 HalfReuse: 'E'/1 } 'C'/6 Tile{ ]] }
    refalrts::alloc_char(vm, context[6], 'C');
    refalrts::reinit_char(context[0], '$');
    refalrts::reinit_char(context[4], 'S');
    refalrts::reinit_char(context[5], 'P');
    refalrts::reinit_char(context[1], 'E');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[6] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & TokName/4 # TkMeta/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkMeta], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: '$'/0 HalfReuse: 'M'/4 HalfReuse: 'E'/5 HalfReuse: 'T'/1 } 'A'/6 Tile{ ]] }
    refalrts::alloc_char(vm, context[6], 'A');
    refalrts::reinit_char(context[0], '$');
    refalrts::reinit_char(context[4], 'M');
    refalrts::reinit_char(context[5], 'E');
    refalrts::reinit_char(context[1], 'T');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[6] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & TokName/4 # TkPseudoComment/5 >/1
  if( ! refalrts::ident_term( identifiers[ident_TkPseudoComment], context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: '*'/0 HalfReuse: '$'/4 HalfReuse: '-'/5 HalfReuse: 'p'/1 }"seudocomment"/6 Tile{ ]] }
  refalrts::alloc_chars(vm, context[6], context[7], "seudocomment", 12);
  refalrts::reinit_char(context[0], '*');
  refalrts::reinit_char(context[4], '$');
  refalrts::reinit_char(context[5], '-');
  refalrts::reinit_char(context[1], 'p');
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_TokName("TokName", COOKIE1_, COOKIE2_, func_TokName);


static refalrts::FnResult func_gen_Unit_B1D1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
  // </0 & Unit:1*1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Unit:1*1/4 t.new#1/5 (/9 e.new#2/7 )/10 s.new#3/11 t.new#4/12 t.new#5/14 >/1
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
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[13] = refalrts::tvar_left( context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  context[15] = refalrts::tvar_left( context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & Unit:1*1/4 t.new#6/5 (/9 e.new#12/16 )/10 s.new#7/11 t.new#8/12 (/14 s.new#9/20 t.new#10/21 e.new#11/18 )/15 >/1
    context[16] = context[7];
    context[17] = context[8];
    context[18] = 0;
    context[19] = 0;
    if( ! refalrts::brackets_term( context[18], context[19], context[14] ) )
      continue;
    // closed e.new#12 as range 16
    if( ! refalrts::svar_left( context[20], context[18], context[19] ) )
      continue;
    context[22] = refalrts::tvar_left( context[21], context[18], context[19] );
    if( ! context[22] )
      continue;
    // closed e.new#11 as range 18
    do {
      // </0 & Unit:1*1/4 t.new#13/5 (/9 e.new#18/23 )/10 s.new#14/11 t.new#15/12 (/14 s.new#16/20 t.new#17/21 )/15 >/1
      context[23] = context[16];
      context[24] = context[17];
      if( ! refalrts::empty_seq( context[18], context[19] ) )
        continue;
      // closed e.new#18 as range 23
      do {
        // </0 & Unit:1*1/4 t.ErrorList#1/5 (/9 e.Tokens#1/25 )/10 s.Mode#1/11 t.NextToken#1/12 (/14 s.Tag#2/20 t.Pos#2/21 )/15 >/1
        context[25] = context[23];
        context[26] = context[24];
        // closed e.Tokens#1 as range 25
        //DEBUG: t.ErrorList#1: 5
        //DEBUG: t.NextToken#1: 12
        //DEBUG: t.Pos#2: 21
        //DEBUG: s.Mode#1: 11
        //DEBUG: s.Tag#2: 20
        //DEBUG: e.Tokens#1: 25
        //5: t.ErrorList#1
        //11: s.Mode#1
        //12: t.NextToken#1
        //20: s.Tag#2
        //21: t.Pos#2
        //25: e.Tokens#1
        //32: s.Tag#2

        refalrts::reset_allocator(vm);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::alloc_open_call(vm, context[27]);
        refalrts::alloc_name(vm, context[29], functions[efunc_gen_Unit_B1D1S2C1]);
        refalrts::alloc_open_call(vm, context[30]);
        refalrts::alloc_name(vm, context[31], functions[efunc_OneOf]);
        refalrts::copy_stvar(vm, context[32], context[20]);
        refalrts::alloc_open_call(vm, context[33]);
        refalrts::alloc_name(vm, context[34], functions[efunc_NameListTags]);
        refalrts::alloc_close_call(vm, context[35]);
        refalrts::alloc_close_call(vm, context[36]);
        refalrts::alloc_close_call(vm, context[28]);
        refalrts::push_stack( vm, context[28] );
        refalrts::push_stack( vm, context[27] );
        res = refalrts::splice_elem( res, context[28] );
        refalrts::push_stack( vm, context[36] );
        refalrts::push_stack( vm, context[30] );
        res = refalrts::splice_elem( res, context[36] );
        refalrts::push_stack( vm, context[35] );
        refalrts::push_stack( vm, context[33] );
        res = refalrts::splice_elem( res, context[35] );
        res = refalrts::splice_elem( res, context[34] );
        res = refalrts::splice_elem( res, context[33] );
        res = refalrts::splice_stvar( res, context[32] );
        res = refalrts::splice_elem( res, context[31] );
        res = refalrts::splice_elem( res, context[30] );
        res = refalrts::splice_elem( res, context[29] );
        res = refalrts::splice_elem( res, context[27] );
        refalrts::use( res );
        refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
        if (rec_res != refalrts::cSuccess)
          return rec_res;
        refalrts::this_is_generated_function(vm);
        do {
          // </27 & Unit:1*1$2?1/31 # True/32 >/28
          context[29] = 0;
          context[30] = 0;
          context[31] = refalrts::call_left( context[29], context[30], context[27], context[28] );
          context[32] = refalrts::ident_left( identifiers[ident_True], context[29], context[30] );
          if( ! context[32] )
            continue;
          if( ! refalrts::empty_seq( context[29], context[30] ) )
            continue;
          //DEBUG: t.ErrorList#1: 5
          //DEBUG: t.NextToken#1: 12
          //DEBUG: t.Pos#2: 21
          //DEBUG: s.Mode#1: 11
          //DEBUG: s.Tag#2: 20
          //DEBUG: e.Tokens#1: 25

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} s.Mode#1/11 t.NextToken#1/12 (/14 s.Tag#2/20 {REMOVED TILE} {REMOVED TILE} >/28 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: </27 Reuse: & Unit:1$2:1/31 HalfReuse: s.Mode1 #11/32 } Tile{ AsIs: t.Pos#2/21 HalfReuse: s.Tag2 #20/15 } Tile{ AsIs: </0 Reuse: & NameList/4 AsIs: t.ErrorList#1/5 HalfReuse: s.Tag2 #20/9 AsIs: e.Tokens#1/25 HalfReuse: >/10 } Tile{ AsIs: >/1 ]] }
          refalrts::update_name(context[31], functions[efunc_gen_Unit_B1S2B1]);
          refalrts::reinit_svar( context[32], context[11] );
          refalrts::reinit_svar( context[15], context[20] );
          refalrts::update_name(context[4], functions[efunc_NameList]);
          refalrts::reinit_svar( context[9], context[20] );
          refalrts::reinit_close_call(context[10]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[27] );
          refalrts::push_stack( vm, context[10] );
          refalrts::push_stack( vm, context[0] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[0], context[10] );
          res = refalrts::splice_evar( res, context[21], context[15] );
          res = refalrts::splice_evar( res, context[27], context[32] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        refalrts::splice_to_freelist(vm, context[27], context[28]);
        continue;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Unit:1*1/4 t.ErrorList#1/5 (/9 e.Tokens#1/25 )/10 s.Mode#1/11 t.NextToken#1/12 (/14 # TkInclude/20 t.Pos#2/21 )/15 >/1
      context[25] = context[23];
      context[26] = context[24];
      if( ! refalrts::ident_term( identifiers[ident_TkInclude], context[20] ) )
        continue;
      // closed e.Tokens#1 as range 25
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: t.NextToken#1: 12
      //DEBUG: t.Pos#2: 21
      //DEBUG: s.Mode#1: 11
      //DEBUG: e.Tokens#1: 25

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} )/10 s.Mode#1/11 t.NextToken#1/12 (/14 # TkInclude/20 {REMOVED TILE} )/15 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Include/4 AsIs: t.ErrorList#1/5 HalfReuse: s.Mode1 #11/9 } Tile{ AsIs: t.Pos#2/21 } Tile{ AsIs: e.Tokens#1/25 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Include]);
      refalrts::reinit_svar( context[9], context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      refalrts::splice_to_freelist_open( vm, context[9], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Unit:1*1/4 t.ErrorList#1/5 (/9 e.Tokens#1/23 )/10 s.Mode#1/11 t.NextToken#1/12 (/14 # TkNativeCode/20 t.Pos#2/21 e.Lines#2/25 )/15 >/1
      context[23] = context[16];
      context[24] = context[17];
      context[25] = context[18];
      context[26] = context[19];
      if( ! refalrts::ident_term( identifiers[ident_TkNativeCode], context[20] ) )
        continue;
      // closed e.Tokens#1 as range 23
      // closed e.Lines#2 as range 25
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: t.NextToken#1: 12
      //DEBUG: t.Pos#2: 21
      //DEBUG: s.Mode#1: 11
      //DEBUG: e.Tokens#1: 23
      //DEBUG: e.Lines#2: 25

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & Unit:1*1/4 {REMOVED TILE} {REMOVED TILE} )/10 s.Mode#1/11 t.NextToken#1/12 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/5 AsIs: (/9 } Tile{ AsIs: (/14 Reuse: # NativeBlock/20 AsIs: t.Pos#2/21 AsIs: e.Lines#2/25 AsIs: )/15 HalfReuse: )/1 } Tile{ AsIs: e.Tokens#1/23 } Tile{ ]] }
      refalrts::update_ident(context[20], identifiers[ident_NativeBlock]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[9], context[1] );
      refalrts::link_brackets( context[14], context[15] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[14], context[1] );
      res = refalrts::splice_evar( res, context[5], context[9] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Unit:1*1/4 t.new#13/5 (/9 e.new#18/23 )/10 s.new#14/11 t.new#15/12 (/14 s.new#16/20 t.new#17/21 )/15 >/1
      context[23] = context[16];
      context[24] = context[17];
      if( ! refalrts::empty_seq( context[18], context[19] ) )
        continue;
      // closed e.new#18 as range 23
      do {
        // </0 & Unit:1*1/4 t.ErrorList#1/5 (/9 e.Tokens#1/25 )/10 s.Mode#1/11 t.NextToken#1/12 (/14 # TkSemicolon/20 t.Pos#2/21 )/15 >/1
        context[25] = context[23];
        context[26] = context[24];
        if( ! refalrts::ident_term( identifiers[ident_TkSemicolon], context[20] ) )
          continue;
        // closed e.Tokens#1 as range 25
        //DEBUG: t.ErrorList#1: 5
        //DEBUG: t.NextToken#1: 12
        //DEBUG: t.Pos#2: 21
        //DEBUG: s.Mode#1: 11
        //DEBUG: e.Tokens#1: 25

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & Unit:1*1/4 {REMOVED TILE} {REMOVED TILE} )/10 s.Mode#1/11 t.NextToken#1/12 (/14 # TkSemicolon/20 t.Pos#2/21 {REMOVED TILE} >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/5 AsIs: (/9 } Tile{ AsIs: )/15 } Tile{ AsIs: e.Tokens#1/25 } Tile{ ]] }
        refalrts::link_brackets( context[9], context[15] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[25], context[26] );
        res = refalrts::splice_evar( res, context[15], context[15] );
        res = refalrts::splice_evar( res, context[5], context[9] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Unit:1*1/4 t.ErrorList#1/5 (/9 e.Tokens#1/25 )/10 s.Mode#1/11 t.NextToken#1/12 (/14 # TkSpec/20 t.Pos#2/21 )/15 >/1
      context[25] = context[23];
      context[26] = context[24];
      if( ! refalrts::ident_term( identifiers[ident_TkSpec], context[20] ) )
        continue;
      // closed e.Tokens#1 as range 25
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: t.NextToken#1: 12
      //DEBUG: t.Pos#2: 21
      //DEBUG: s.Mode#1: 11
      //DEBUG: e.Tokens#1: 25

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} )/10 s.Mode#1/11 t.NextToken#1/12 (/14 # TkSpec/20 {REMOVED TILE} )/15 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Specialization/4 AsIs: t.ErrorList#1/5 HalfReuse: s.Mode1 #11/9 } Tile{ AsIs: t.Pos#2/21 } Tile{ AsIs: e.Tokens#1/25 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Specialization]);
      refalrts::reinit_svar( context[9], context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      refalrts::splice_to_freelist_open( vm, context[9], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Unit:1*1/4 t.ErrorList#1/5 (/9 e.Tokens#1/23 )/10 s.Mode#1/11 t.NextToken#1/12 (/14 s.Type#2/20 t.Pos#2/21 e.Value#2/25 )/15 >/1
      context[23] = context[16];
      context[24] = context[17];
      context[25] = context[18];
      context[26] = context[19];
      // closed e.Tokens#1 as range 23
      // closed e.Value#2 as range 25
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: t.NextToken#1: 12
      //DEBUG: t.Pos#2: 21
      //DEBUG: s.Mode#1: 11
      //DEBUG: s.Type#2: 20
      //DEBUG: e.Tokens#1: 23
      //DEBUG: e.Value#2: 25
      //5: t.ErrorList#1
      //11: s.Mode#1
      //12: t.NextToken#1
      //20: s.Type#2
      //21: t.Pos#2
      //23: e.Tokens#1
      //25: e.Value#2
      //32: s.Type#2

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[27]);
      refalrts::alloc_name(vm, context[29], functions[efunc_gen_Unit_B1D1S7C1]);
      refalrts::alloc_open_call(vm, context[30]);
      refalrts::alloc_name(vm, context[31], functions[efunc_OneOf]);
      refalrts::copy_stvar(vm, context[32], context[20]);
      refalrts::alloc_ident(vm, context[33], identifiers[ident_TkEntry]);
      refalrts::alloc_ident(vm, context[34], identifiers[ident_TkName]);
      refalrts::alloc_close_call(vm, context[35]);
      refalrts::alloc_close_call(vm, context[28]);
      refalrts::push_stack( vm, context[28] );
      refalrts::push_stack( vm, context[27] );
      res = refalrts::splice_elem( res, context[28] );
      refalrts::push_stack( vm, context[35] );
      refalrts::push_stack( vm, context[30] );
      res = refalrts::splice_elem( res, context[35] );
      res = refalrts::splice_elem( res, context[34] );
      res = refalrts::splice_elem( res, context[33] );
      res = refalrts::splice_stvar( res, context[32] );
      res = refalrts::splice_elem( res, context[31] );
      res = refalrts::splice_elem( res, context[30] );
      res = refalrts::splice_elem( res, context[29] );
      res = refalrts::splice_elem( res, context[27] );
      refalrts::use( res );
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function(vm);
      do {
        // </27 & Unit:1*1$7?1/31 # True/32 >/28
        context[29] = 0;
        context[30] = 0;
        context[31] = refalrts::call_left( context[29], context[30], context[27], context[28] );
        context[32] = refalrts::ident_left( identifiers[ident_True], context[29], context[30] );
        if( ! context[32] )
          continue;
        if( ! refalrts::empty_seq( context[29], context[30] ) )
          continue;
        //DEBUG: t.ErrorList#1: 5
        //DEBUG: t.NextToken#1: 12
        //DEBUG: t.Pos#2: 21
        //DEBUG: s.Mode#1: 11
        //DEBUG: s.Type#2: 20
        //DEBUG: e.Tokens#1: 23
        //DEBUG: e.Value#2: 25

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} )/10 s.Mode#1/11 {REMOVED TILE} (/14 s.Type#2/20 t.Pos#2/21 e.Value#2/25 )/15 </27 & Unit:1*1$7?1/31 # True/32 >/28 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Function/4 AsIs: t.ErrorList#1/5 HalfReuse: s.Mode1 #11/9 } Tile{ AsIs: t.NextToken#1/12 } Tile{ AsIs: e.Tokens#1/23 } Tile{ AsIs: >/1 ]] }
        refalrts::update_name(context[4], functions[efunc_Function]);
        refalrts::reinit_svar( context[9], context[11] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[23], context[24] );
        res = refalrts::splice_evar( res, context[12], context[13] );
        refalrts::splice_to_freelist_open( vm, context[9], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[27], context[28]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Unit:1*1/4 t.ErrorList#1/5 (/9 e.Tokens#1/23 )/10 s.Mode#1/11 t.NextToken#1/12 (/14 # TkPseudoComment/20 t.Pos#2/21 e.CommentTokens#2/25 )/15 >/1
    context[23] = context[16];
    context[24] = context[17];
    context[25] = context[18];
    context[26] = context[19];
    if( ! refalrts::ident_term( identifiers[ident_TkPseudoComment], context[20] ) )
      continue;
    // closed e.Tokens#1 as range 23
    // closed e.CommentTokens#2 as range 25
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: t.NextToken#1: 12
    //DEBUG: t.Pos#2: 21
    //DEBUG: s.Mode#1: 11
    //DEBUG: e.Tokens#1: 23
    //DEBUG: e.CommentTokens#2: 25

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Mode#1/11 t.NextToken#1/12 {REMOVED TILE} t.Pos#2/21 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Unit:1$8:1/4 } Tile{ AsIs: (/9 AsIs: e.Tokens#1/23 AsIs: )/10 } Tile{ HalfReuse: </14 HalfReuse: & Unit/20 } Tile{ AsIs: t.ErrorList#1/5 } # Extended/27 Tile{ AsIs: e.CommentTokens#2/25 } Tile{ HalfReuse: >/15 AsIs: >/1 ]] }
    refalrts::alloc_ident(vm, context[27], identifiers[ident_Extended]);
    refalrts::update_name(context[4], functions[efunc_gen_Unit_B1S8B1]);
    refalrts::reinit_open_call(context[14]);
    refalrts::reinit_name(context[20], functions[efunc_Unit]);
    refalrts::reinit_close_call(context[15]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[14] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[15];
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[27], context[27] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[14], context[20] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Unit:1*1/4 t.ErrorList#1/5 (/9 e.Tokens#1/7 )/10 s.Mode#1/11 t.NextToken#1/12 t.Unexpected#2/14 >/1
  // closed e.Tokens#1 as range 7
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: t.NextToken#1: 12
  //DEBUG: t.Unexpected#2: 14
  //DEBUG: s.Mode#1: 11
  //DEBUG: e.Tokens#1: 7

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/9 {REMOVED TILE} )/10 s.Mode#1/11 t.NextToken#1/12 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedUnitToken/4 AsIs: t.ErrorList#1/5 } Tile{ AsIs: t.Unexpected#2/14 AsIs: >/1 } Tile{ AsIs: e.Tokens#1/7 } Tile{ ]] }
  refalrts::update_name(context[4], functions[efunc_UnexpectedUnitToken]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[14], context[1] );
  refalrts::splice_to_freelist_open( vm, context[6], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Unit_B1D1("Unit:1*1", COOKIE1_, COOKIE2_, func_gen_Unit_B1D1);


static refalrts::FnResult func_gen_DoTokenChain_B1D11(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 48 elems
  refalrts::Iter context[48];
  refalrts::zeros( context, 48 );
  // </0 & DoTokenChain:1*11/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoTokenChain:1*11/4 s.new#1/5 s.new#2/6 t.new#3/7 (/11 e.new#4/9 )/12 (/15 e.new#5/13 )/16 t.new#6/17 >/1
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
  // closed e.new#4 as range 9
  // closed e.new#5 as range 13
  context[18] = refalrts::tvar_left( context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & DoTokenChain:1*11/4 s.new#7/5 s.new#8/6 t.new#9/7 (/11 e.new#13/19 )/12 (/15 e.new#14/21 )/16 (/17 s.new#10/25 t.new#11/26 e.new#12/23 )/18 >/1
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = 0;
    context[24] = 0;
    if( ! refalrts::brackets_term( context[23], context[24], context[17] ) )
      continue;
    // closed e.new#13 as range 19
    // closed e.new#14 as range 21
    if( ! refalrts::svar_left( context[25], context[23], context[24] ) )
      continue;
    context[27] = refalrts::tvar_left( context[26], context[23], context[24] );
    if( ! context[27] )
      continue;
    // closed e.new#12 as range 23
    do {
      // </0 & DoTokenChain:1*11/4 s.new#15/5 s.new#16/6 t.new#17/7 (/11 e.new#20/28 )/12 (/15 e.new#21/30 )/16 (/17 s.new#18/25 t.new#19/26 )/18 >/1
      context[28] = context[19];
      context[29] = context[20];
      context[30] = context[21];
      context[31] = context[22];
      if( ! refalrts::empty_seq( context[23], context[24] ) )
        continue;
      // closed e.new#20 as range 28
      // closed e.new#21 as range 30
      do {
        // </0 & DoTokenChain:1*11/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/32 )/12 (/15 e.Tokens#1/34 )/16 (/17 # TkOpenBlock/25 t.Pos#2/26 )/18 >/1
        context[32] = context[28];
        context[33] = context[29];
        context[34] = context[30];
        context[35] = context[31];
        if( ! refalrts::ident_term( identifiers[ident_TkOpenBlock], context[25] ) )
          continue;
        // closed e.Collected#1 as range 32
        // closed e.Tokens#1 as range 34
        //DEBUG: t.ErrorList#1: 7
        //DEBUG: t.Pos#2: 26
        //DEBUG: s.Mode#1: 5
        //DEBUG: s.Kind#1: 6
        //DEBUG: e.Collected#1: 32
        //DEBUG: e.Tokens#1: 34
        //5: s.Mode#1
        //6: s.Kind#1
        //7: t.ErrorList#1
        //26: t.Pos#2
        //32: e.Collected#1
        //34: e.Tokens#1
        //39: s.Kind#1

        refalrts::reset_allocator(vm);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::alloc_open_call(vm, context[36]);
        refalrts::alloc_name(vm, context[38], functions[efunc_gen_DoTokenChain_B1D11S12C1]);
        refalrts::copy_stvar(vm, context[39], context[6]);
        refalrts::alloc_close_call(vm, context[37]);
        refalrts::push_stack( vm, context[37] );
        refalrts::push_stack( vm, context[36] );
        res = refalrts::splice_elem( res, context[37] );
        res = refalrts::splice_stvar( res, context[39] );
        res = refalrts::splice_elem( res, context[38] );
        res = refalrts::splice_elem( res, context[36] );
        refalrts::use( res );
        refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
        if (rec_res != refalrts::cSuccess)
          return rec_res;
        refalrts::this_is_generated_function(vm);
        do {
          // </36 & DoTokenChain:1*11$12?1/40 # Result/41 >/37
          context[38] = 0;
          context[39] = 0;
          context[40] = refalrts::call_left( context[38], context[39], context[36], context[37] );
          context[41] = refalrts::ident_left( identifiers[ident_Result], context[38], context[39] );
          if( ! context[41] )
            continue;
          if( ! refalrts::empty_seq( context[38], context[39] ) )
            continue;
          //DEBUG: t.ErrorList#1: 7
          //DEBUG: t.Pos#2: 26
          //DEBUG: s.Mode#1: 5
          //DEBUG: s.Kind#1: 6
          //DEBUG: e.Collected#1: 32
          //DEBUG: e.Tokens#1: 34

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} s.Kind#1/6 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain:1$12=2/4 AsIs: s.Mode#1/5 } Tile{ AsIs: (/11 AsIs: e.Collected#1/32 AsIs: )/12 } t.Pos#2/26/42 Tile{ AsIs: (/15 AsIs: e.Tokens#1/34 AsIs: )/16 HalfReuse: </17 HalfReuse: & ClassicError/25 } Tile{ AsIs: t.ErrorList#1/7 } s.Mode#1/5/44 Tile{ AsIs: t.Pos#2/26 }"Do you forged \':\' before bl"/45 Tile{ HalfReuse: 'o'/18 HalfReuse: 'c'/36 HalfReuse: 'k'/40 HalfReuse: '?'/41 AsIs: >/37 AsIs: >/1 ]] }
          refalrts::copy_evar(vm, context[42], context[43], context[26], context[27]);
          refalrts::copy_stvar(vm, context[44], context[5]);
          refalrts::alloc_chars(vm, context[45], context[46], "Do you forged \':\' before bl", 27);
          refalrts::update_name(context[4], functions[efunc_gen_DoTokenChain_B1S12A2]);
          refalrts::reinit_open_call(context[17]);
          refalrts::reinit_name(context[25], functions[efunc_ClassicError]);
          refalrts::reinit_char(context[18], 'o');
          refalrts::reinit_char(context[36], 'c');
          refalrts::reinit_char(context[40], 'k');
          refalrts::reinit_char(context[41], '?');
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[37] );
          refalrts::push_stack( vm, context[17] );
          refalrts::link_brackets( context[15], context[16] );
          refalrts::link_brackets( context[11], context[12] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[18];
          res = refalrts::splice_evar( res, context[45], context[46] );
          res = refalrts::splice_evar( res, context[26], context[27] );
          res = refalrts::splice_evar( res, context[44], context[44] );
          res = refalrts::splice_evar( res, context[7], context[8] );
          res = refalrts::splice_evar( res, context[15], context[25] );
          res = refalrts::splice_evar( res, context[42], context[43] );
          res = refalrts::splice_evar( res, context[11], context[12] );
          refalrts::splice_to_freelist_open( vm, context[5], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        refalrts::splice_to_freelist(vm, context[36], context[37]);
        continue;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & DoTokenChain:1*11/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/32 )/12 (/15 e.Tokens#1/34 )/16 (/17 # TkRedefinition/25 t.Pos#2/26 )/18 >/1
        context[32] = context[28];
        context[33] = context[29];
        context[34] = context[30];
        context[35] = context[31];
        if( ! refalrts::ident_term( identifiers[ident_TkRedefinition], context[25] ) )
          continue;
        // closed e.Collected#1 as range 32
        // closed e.Tokens#1 as range 34
        //DEBUG: t.ErrorList#1: 7
        //DEBUG: t.Pos#2: 26
        //DEBUG: s.Mode#1: 5
        //DEBUG: s.Kind#1: 6
        //DEBUG: e.Collected#1: 32
        //DEBUG: e.Tokens#1: 34

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 } Tile{ HalfReuse: </15 } & DoTokenChain-AddRedefinition/36 s.Kind#1/6/37 </38 & ClassicError/39 Tile{ AsIs: t.ErrorList#1/7 } Tile{ HalfReuse: s.Mode1 #5/25 AsIs: t.Pos#2/26 HalfReuse: 'V'/18 } Tile{ HalfReuse: 'a'/16 HalfReuse: 'r'/17 }"iable redefinition is available in extended mode"/40 >/42 Tile{ AsIs: (/11 AsIs: e.Collected#1/32 AsIs: )/12 } t.Pos#2/26/43 >/45 Tile{ AsIs: e.Tokens#1/34 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_name(vm, context[36], functions[efunc_DoTokenChainm_AddRedefinition]);
        refalrts::copy_stvar(vm, context[37], context[6]);
        refalrts::alloc_open_call(vm, context[38]);
        refalrts::alloc_name(vm, context[39], functions[efunc_ClassicError]);
        refalrts::alloc_chars(vm, context[40], context[41], "iable redefinition is available in extended mode", 48);
        refalrts::alloc_close_call(vm, context[42]);
        refalrts::copy_evar(vm, context[43], context[44], context[26], context[27]);
        refalrts::alloc_close_call(vm, context[45]);
        refalrts::update_name(context[4], functions[efunc_DoTokenChain]);
        refalrts::reinit_open_call(context[15]);
        refalrts::reinit_svar( context[25], context[5] );
        refalrts::reinit_char(context[18], 'V');
        refalrts::reinit_char(context[16], 'a');
        refalrts::reinit_char(context[17], 'r');
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[45] );
        refalrts::push_stack( vm, context[15] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::push_stack( vm, context[42] );
        refalrts::push_stack( vm, context[38] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[34], context[35] );
        res = refalrts::splice_evar( res, context[43], context[45] );
        res = refalrts::splice_evar( res, context[11], context[12] );
        res = refalrts::splice_evar( res, context[40], context[42] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[25], context[18] );
        res = refalrts::splice_evar( res, context[7], context[8] );
        res = refalrts::splice_evar( res, context[36], context[39] );
        res = refalrts::splice_evar( res, context[15], context[15] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoTokenChain:1*11/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/32 )/12 (/15 e.Tokens#1/34 )/16 (/17 # TkScopeId/25 t.Pos#2/26 )/18 >/1
      context[32] = context[28];
      context[33] = context[29];
      context[34] = context[30];
      context[35] = context[31];
      if( ! refalrts::ident_term( identifiers[ident_TkScopeId], context[25] ) )
        continue;
      // closed e.Collected#1 as range 32
      // closed e.Tokens#1 as range 34
      //DEBUG: t.ErrorList#1: 7
      //DEBUG: t.Pos#2: 26
      //DEBUG: s.Mode#1: 5
      //DEBUG: s.Kind#1: 6
      //DEBUG: e.Collected#1: 32
      //DEBUG: e.Tokens#1: 34

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 } </36 & ClassicError/37 Tile{ AsIs: t.ErrorList#1/7 } s.Mode#1/5/38 Tile{ AsIs: t.Pos#2/26 HalfReuse: '$'/18 }"SCOPEID is not supported in classic REFAL-5"/39 >/41 Tile{ AsIs: (/11 AsIs: e.Collected#1/32 HalfReuse: (/12 HalfReuse: # Symbol/15 } # Number/42 # Cookie1/43 Tile{ AsIs: )/16 AsIs: (/17 Reuse: # Symbol/25 } # Number/44 # Cookie2/45 )/46 )/47 Tile{ AsIs: e.Tokens#1/34 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[36]);
      refalrts::alloc_name(vm, context[37], functions[efunc_ClassicError]);
      refalrts::copy_stvar(vm, context[38], context[5]);
      refalrts::alloc_chars(vm, context[39], context[40], "SCOPEID is not supported in classic REFAL-5", 43);
      refalrts::alloc_close_call(vm, context[41]);
      refalrts::alloc_ident(vm, context[42], identifiers[ident_Number]);
      refalrts::alloc_ident(vm, context[43], identifiers[ident_Cookie1]);
      refalrts::alloc_ident(vm, context[44], identifiers[ident_Number]);
      refalrts::alloc_ident(vm, context[45], identifiers[ident_Cookie2]);
      refalrts::alloc_close_bracket(vm, context[46]);
      refalrts::alloc_close_bracket(vm, context[47]);
      refalrts::update_name(context[4], functions[efunc_DoTokenChain]);
      refalrts::reinit_char(context[18], '$');
      refalrts::reinit_open_bracket(context[12]);
      refalrts::reinit_ident(context[15], identifiers[ident_Symbol]);
      refalrts::update_ident(context[25], identifiers[ident_Symbol]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[11], context[47] );
      refalrts::link_brackets( context[17], context[46] );
      refalrts::link_brackets( context[12], context[16] );
      refalrts::push_stack( vm, context[41] );
      refalrts::push_stack( vm, context[36] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[34], context[35] );
      res = refalrts::splice_evar( res, context[44], context[47] );
      res = refalrts::splice_evar( res, context[16], context[25] );
      res = refalrts::splice_evar( res, context[42], context[43] );
      res = refalrts::splice_evar( res, context[11], context[15] );
      res = refalrts::splice_evar( res, context[39], context[41] );
      res = refalrts::splice_evar( res, context[26], context[18] );
      res = refalrts::splice_evar( res, context[38], context[38] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_evar( res, context[36], context[37] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoTokenChain:1*11/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/28 )/12 (/15 e.Tokens#1/30 )/16 (/17 # TkError/25 t.Pos#2/26 e.Message#2/32 )/18 >/1
    context[28] = context[19];
    context[29] = context[20];
    context[30] = context[21];
    context[31] = context[22];
    context[32] = context[23];
    context[33] = context[24];
    if( ! refalrts::ident_term( identifiers[ident_TkError], context[25] ) )
      continue;
    // closed e.Collected#1 as range 28
    // closed e.Tokens#1 as range 30
    // closed e.Message#2 as range 32
    //DEBUG: t.ErrorList#1: 7
    //DEBUG: t.Pos#2: 26
    //DEBUG: s.Mode#1: 5
    //DEBUG: s.Kind#1: 6
    //DEBUG: e.Collected#1: 28
    //DEBUG: e.Tokens#1: 30
    //DEBUG: e.Message#2: 32

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 } Tile{ HalfReuse: </16 } Tile{ HalfReuse: & UnexpectedToken/15 } Tile{ AsIs: t.ErrorList#1/7 } Tile{ AsIs: (/17 AsIs: # TkError/25 AsIs: t.Pos#2/26 AsIs: e.Message#2/32 AsIs: )/18 AsIs: >/1 } Tile{ AsIs: (/11 AsIs: e.Collected#1/28 AsIs: )/12 } Tile{ AsIs: e.Tokens#1/30 } >/34 Tile{ ]] }
    refalrts::alloc_close_call(vm, context[34]);
    refalrts::update_name(context[4], functions[efunc_DoTokenChain]);
    refalrts::reinit_open_call(context[16]);
    refalrts::reinit_name(context[15], functions[efunc_UnexpectedToken]);
    refalrts::push_stack( vm, context[34] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[16] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[34], context[34] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[17], context[1] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoTokenChain:1*11/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/9 )/12 (/15 e.Tokens#1/13 )/16 t.OtherToken#2/17 >/1
  // closed e.Collected#1 as range 9
  // closed e.Tokens#1 as range 13
  //DEBUG: t.ErrorList#1: 7
  //DEBUG: t.OtherToken#2: 17
  //DEBUG: s.Mode#1: 5
  //DEBUG: s.Kind#1: 6
  //DEBUG: e.Collected#1: 9
  //DEBUG: e.Tokens#1: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DoTokenChain:1*11/4 s.Mode#1/5 s.Kind#1/6 {REMOVED TILE} (/15 {REMOVED TILE} )/16 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/7 AsIs: (/11 AsIs: e.Collected#1/9 AsIs: )/12 } Tile{ AsIs: t.OtherToken#2/17 } Tile{ AsIs: e.Tokens#1/13 } Tile{ ]] }
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoTokenChain_B1D11("DoTokenChain:1*11", COOKIE1_, COOKIE2_, func_gen_DoTokenChain_B1D11);


static refalrts::FnResult func_gen_DoTokenChain_B1S11A1Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & DoTokenChain:1$11=1@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoTokenChain:1$11=1@1/4 s.new#1/5 (/8 e.new#2/6 )/9 e.new#3/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  // closed e.new#2 as range 6
  // closed e.new#3 as range 2
  do {
    // </0 & DoTokenChain:1$11=1@1/4 s.Kind0#1/5 (/8 e.Collected0#1/10 )/9 t.ErrorList#3/14 (/18 e.Term#3/16 )/19 e.Tokens#3/12 >/1
    context[10] = context[6];
    context[11] = context[7];
    context[12] = context[2];
    context[13] = context[3];
    // closed e.Collected0#1 as range 10
    context[15] = refalrts::tvar_left( context[14], context[12], context[13] );
    if( ! context[15] )
      continue;
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_left( context[16], context[17], context[12], context[13] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    // closed e.Term#3 as range 16
    // closed e.Tokens#3 as range 12
    //DEBUG: s.Kind0#1: 5
    //DEBUG: e.Collected0#1: 10
    //DEBUG: t.ErrorList#3: 14
    //DEBUG: e.Term#3: 16
    //DEBUG: e.Tokens#3: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Kind0#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain/4 } Tile{ HalfReuse: # Classic/8 } Tile{ HalfReuse: s.Kind01 #5/9 AsIs: t.ErrorList#3/14 AsIs: (/18 } Tile{ AsIs: e.Collected0#1/10 } Tile{ AsIs: e.Term#3/16 } Tile{ AsIs: )/19 AsIs: e.Tokens#3/12 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_DoTokenChain]);
    refalrts::reinit_ident(context[8], identifiers[ident_Classic]);
    refalrts::reinit_svar( context[9], context[5] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[18], context[19] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[19];
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[9], context[18] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoTokenChain:1$11=1@1/4 s.Kind0#1/5 (/8 e.Collected0#1/6 )/9 e.dyn#0/2 >/1
  // closed e.Collected0#1 as range 6
  // closed e.dyn#0 as range 2
  //DEBUG: s.Kind0#1: 5
  //DEBUG: e.Collected0#1: 6
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </10 Tile{ HalfReuse: & DoTokenChain:1$11=1@0/0 HalfReuse: # Classic/4 AsIs: s.Kind0#1/5 AsIs: (/8 AsIs: e.Collected0#1/6 AsIs: )/9 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::reinit_name(context[0], functions[efunc_gen_DoTokenChain_B1S11A1Z0]);
  refalrts::reinit_ident(context[4], identifiers[ident_Classic]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[10] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[10], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoTokenChain_B1S11A1Z1("DoTokenChain:1$11=1@1", COOKIE1_, COOKIE2_, func_gen_DoTokenChain_B1S11A1Z1);


static refalrts::FnResult func_gen_DoTokenChain_B1S11A1Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & DoTokenChain:1$11=1@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoTokenChain:1$11=1@2/4 s.new#1/5 (/8 e.new#2/6 )/9 e.new#3/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  // closed e.new#2 as range 6
  // closed e.new#3 as range 2
  do {
    // </0 & DoTokenChain:1$11=1@2/4 s.Kind0#1/5 (/8 e.Collected0#1/10 )/9 t.ErrorList#3/14 (/18 e.Term#3/16 )/19 e.Tokens#3/12 >/1
    context[10] = context[6];
    context[11] = context[7];
    context[12] = context[2];
    context[13] = context[3];
    // closed e.Collected0#1 as range 10
    context[15] = refalrts::tvar_left( context[14], context[12], context[13] );
    if( ! context[15] )
      continue;
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_left( context[16], context[17], context[12], context[13] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    // closed e.Term#3 as range 16
    // closed e.Tokens#3 as range 12
    //DEBUG: s.Kind0#1: 5
    //DEBUG: e.Collected0#1: 10
    //DEBUG: t.ErrorList#3: 14
    //DEBUG: e.Term#3: 16
    //DEBUG: e.Tokens#3: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Kind0#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain/4 } Tile{ HalfReuse: # Extended/8 } Tile{ HalfReuse: s.Kind01 #5/9 AsIs: t.ErrorList#3/14 AsIs: (/18 } Tile{ AsIs: e.Collected0#1/10 } Tile{ AsIs: e.Term#3/16 } Tile{ AsIs: )/19 AsIs: e.Tokens#3/12 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_DoTokenChain]);
    refalrts::reinit_ident(context[8], identifiers[ident_Extended]);
    refalrts::reinit_svar( context[9], context[5] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[18], context[19] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[19];
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[9], context[18] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoTokenChain:1$11=1@2/4 s.Kind0#1/5 (/8 e.Collected0#1/6 )/9 e.dyn#0/2 >/1
  // closed e.Collected0#1 as range 6
  // closed e.dyn#0 as range 2
  //DEBUG: s.Kind0#1: 5
  //DEBUG: e.Collected0#1: 6
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </10 Tile{ HalfReuse: & DoTokenChain:1$11=1@0/0 HalfReuse: # Extended/4 AsIs: s.Kind0#1/5 AsIs: (/8 AsIs: e.Collected0#1/6 AsIs: )/9 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::reinit_name(context[0], functions[efunc_gen_DoTokenChain_B1S11A1Z0]);
  refalrts::reinit_ident(context[4], identifiers[ident_Extended]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[10] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[10], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoTokenChain_B1S11A1Z2("DoTokenChain:1$11=1@2", COOKIE1_, COOKIE2_, func_gen_DoTokenChain_B1S11A1Z2);


//End of file
