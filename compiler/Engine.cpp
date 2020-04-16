// This file automatically generated from 'Engine.ref'
// Don't edit! Edit 'Engine.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_1412035008_2071014210
#define COOKIE1_ 1412035008U
#define COOKIE2_ 2071014210U

enum efunc {
  efunc_u_u_Stepm_Drop = 0,
  efunc_u_u_Metau_Mu = 1,
  efunc_d_table = 2,
  efunc_Map = 3,
  efunc_Apply = 4,
  efunc_Reduce = 5,
  efunc_DoMapAccum = 6,
  efunc_DoMapAccumm_Aux = 7,
  efunc_Add = 8,
  efunc_Sub = 9,
  efunc_Fetch = 10,
  efunc_Pipe = 11,
  efunc_gen_Pipe_S2L1 = 12,
  efunc_gen_Pipe_S3L1 = 13,
  efunc_BackEnd = 14,
  efunc_ELm_Destroy = 15,
  efunc_gen_CompileFile_B1 = 16,
  efunc_gen_CompileFile_A1 = 17,
  efunc_FrontEnd = 18,
  efunc_CheckProgram = 19,
  efunc_gen_FrontEnd_A3 = 20,
  efunc_GlueErrorListsAndASTs = 21,
  efunc_ResolveIncludes = 22,
  efunc_gen_FrontEnd_A2 = 23,
  efunc_gen_FrontEnd_A1 = 24,
  efunc_LoadAST = 25,
  efunc_gen_PreludeIncludeLine_B1 = 26,
  efunc_Configm_GetPrelude = 27,
  efunc_Prout = 28,
  efunc_StrFromPos = 29,
  efunc_gen_Map_Z1 = 30,
  efunc_Symb = 31,
  efunc_PreludeIncludeLine = 32,
  efunc_R5m_Parse = 33,
  efunc_gen_LoadAST_S1A4 = 34,
  efunc_ELm_Create = 35,
  efunc_DisplayLexerWarnings = 36,
  efunc_gen_LoadAST_S1A3 = 37,
  efunc_R5m_Scan = 38,
  efunc_gen_LoadAST_S1A2 = 39,
  efunc_SRm_ParseProgram = 40,
  efunc_gen_LoadAST_S2A2 = 41,
  efunc_ELm_AddErrorAt = 42,
  efunc_gen_LoadAST_S3B1S1B1 = 43,
  efunc_RemoveFile = 44,
  efunc_gen_LoadAST_S3B1S1A1 = 45,
  efunc_System = 46,
  efunc_ExistFile = 47,
  efunc_gen_LoadAST_S3B1 = 48,
  efunc_Configm_GetR5Mode = 49,
  efunc_gen_LoadAST_S1A1 = 50,
  efunc_gen_LoadAST_S2A1 = 51,
  efunc_SRm_Scan = 52,
  efunc_gen_LoadAST_S3A1D1 = 53,
  efunc_ResolveIncludesm_CheckAlias = 54,
  efunc_gen_Map_Z2 = 55,
  efunc_gen_Map_Z3 = 56,
  efunc_FindInclude = 57,
  efunc_Configm_GetSearchFolders = 58,
  efunc_ResolveIncludesm_CheckValid = 59,
  efunc_ResolveIncludesm_CheckEqualAST = 60,
  efunc_PatchASTSrcPos = 61,
  efunc_ELm_Concat = 62,
  efunc_MapAccum = 63,
  efunc_gen_GlueErrorListsAndASTs_L1 = 64,
  efunc_gen_Map_Z4 = 65,
  efunc_gen_Map_Z5 = 66,
  efunc_PatchASTSrcPosm_Body = 67,
  efunc_gen_PatchASTSrcPosm_Item_S5C1 = 68,
  efunc_OneOf = 69,
  efunc_PatchASTSrcPosm_Expr = 70,
  efunc_gen_Map_Z6 = 71,
  efunc_PatchASTSrcPosm_Blocks = 72,
  efunc_PatchASTSrcPosm_Chain = 73,
  efunc_gen_PatchASTSrcPosm_Sentence_A1L1 = 74,
  efunc_gen_Map_Z7 = 75,
  efunc_gen_Map_Z8 = 76,
  efunc_gen_Map_Z9 = 77,
  efunc_BackEndm_RASLModule = 78,
  efunc_BackEndm_NativeModule = 79,
  efunc_LowLevelRASL = 80,
  efunc_gen_BackEnd_B1 = 81,
  efunc_Logm_HighLevelRASL = 82,
  efunc_gen_BackEnd_A12 = 83,
  efunc_HighLevelRASL = 84,
  efunc_gen_BackEnd_A11 = 85,
  efunc_Logm_AST = 86,
  efunc_gen_BackEnd_A10 = 87,
  efunc_OptTree = 88,
  efunc_OptTreem_CleanupMarkup = 89,
  efunc_gen_BackEnd_A9B1 = 90,
  efunc_Configm_GetOptTree = 91,
  efunc_gen_BackEnd_A9 = 92,
  efunc_gen_BackEnd_A8 = 93,
  efunc_Desugar = 94,
  efunc_gen_BackEnd_A7 = 95,
  efunc_gen_BackEnd_A6 = 96,
  efunc_CreateMetaFunctions = 97,
  efunc_Configm_GetGenMode = 98,
  efunc_gen_BackEnd_A5 = 99,
  efunc_Configm_GetConditionsMode = 100,
  efunc_gen_BackEnd_A4 = 101,
  efunc_Configm_GetOptResult = 102,
  efunc_gen_BackEnd_A3 = 103,
  efunc_Configm_GetOptPattern = 104,
  efunc_gen_BackEnd_A2 = 105,
  efunc_gen_BackEnd_A1 = 106,
  efunc_Configm_GetDebugMode = 107,
  efunc_SaveBytes = 108,
  efunc_GenProgramm_RASL = 109,
  efunc_gen_BackEndm_RASLModule_B1 = 110,
  efunc_GenProgramm_Native = 111,
  efunc_SaveFile = 112,
  efunc_gen_Map_Z10 = 113,
  efunc_gen_CreateMetaFunctions_S1A2D1 = 114,
  efunc_gen_CreateMetaFunctions_S1A1L1S3C1 = 115,
  efunc_gen_CreateMetaFunctions_S1A1 = 116,
  efunc_gen_MapAccum_Z1 = 117,
  efunc_gen_GrammarCheck_B1 = 118,
  efunc_gen_GrammarCheck_A1 = 119,
  efunc_Mu = 120,
  efunc_Up = 121,
  efunc_Evm_met = 122,
  efunc_Residue = 123,
  efunc_u_u_Metau_Residue = 124,
  efunc_UnBracket = 125,
  efunc_DelAccumulator = 126,
  efunc_Inc = 127,
  efunc_Dec = 128,
  efunc_CompileFile = 129,
  efunc_PatchASTSrcPosm_Item = 130,
  efunc_PatchASTSrcPosm_Sentence = 131,
  efunc_GrammarCheck = 132,
  efunc_gen_DisplayLexerWarnings_L1 = 133,
  efunc_gen_Map_Z0 = 134,
  efunc_gen_ResolveIncludes_S3L1D1 = 135,
  efunc_gen_ResolveIncludes_S3L1 = 136,
  efunc_gen_UnBracket_D1 = 137,
  efunc_gen_PatchASTSrcPos_A1L1 = 138,
  efunc_gen_PatchASTSrcPosm_Chain_L1D1 = 139,
  efunc_gen_PatchASTSrcPosm_Chain_L1 = 140,
  efunc_gen_PatchASTSrcPosm_Blocks_L1D1 = 141,
  efunc_gen_PatchASTSrcPosm_Blocks_L1 = 142,
  efunc_gen_PatchASTSrcPosm_Expr_L1 = 143,
  efunc_gen_CreateMetaFunctions_S1L1D1 = 144,
  efunc_gen_CreateMetaFunctions_S1L1 = 145,
  efunc_gen_DoMapAccum_Z1 = 146,
  efunc_gen_MapAccum_Z0 = 147,
  efunc_gen_CreateMetaFunctions_S1A1L1 = 148,
  efunc_gen_DoMapAccumm_Aux_Z1 = 149,
  efunc_gen_CreateMetaFunctions_S1A1L1D2 = 150,
  efunc_gen_DoMapAccum_Z0 = 151,
  efunc_gen_CreateMetaFunctions_S1A1L1D2S3C1 = 152,
  efunc_gen_DoMapAccumm_Aux_Z0 = 153,
};


enum ident {
  ident_ELm_NoErrors = 0,
  ident_ELm_HasErrors = 1,
  ident_Fails = 2,
  ident_Include = 3,
  ident_TkWarning = 4,
  ident_NoPos = 5,
  ident_RowCol = 6,
  ident_True = 7,
  ident_False = 8,
  ident_R5 = 9,
  ident_FileRowCol = 10,
  ident_SR = 11,
  ident_RSL = 12,
  ident_Success = 13,
  ident_FileLine = 14,
  ident_Function = 15,
  ident_Ident = 16,
  ident_NativeBlock = 17,
  ident_Enum = 18,
  ident_Swap = 19,
  ident_Declaration = 20,
  ident_Entry = 21,
  ident_Inline = 22,
  ident_Drive = 23,
  ident_Meta = 24,
  ident_Spec = 25,
  ident_Sentences = 26,
  ident_NativeBody = 27,
  ident_TkVariable = 28,
  ident_TkNewVariable = 29,
  ident_Name = 30,
  ident_Symbol = 31,
  ident_Brackets = 32,
  ident_ADTm_Brackets = 33,
  ident_CallBrackets = 34,
  ident_Closure = 35,
  ident_NoNative = 36,
  ident_OptTree = 37,
  ident_NoOpt = 38,
  ident_Identifier = 39,
  ident_Metatable = 40,
  ident_GNm_Local = 41,
  ident_GNm_Entry = 42,
  ident_Mu = 43,
  ident_Up = 44,
  ident_Evm_met = 45,
  ident_Residue = 46,
  ident_u_u_Metau_Residue = 47,
  ident_Apply = 48,
  ident_Map = 49,
  ident_Reduce = 50,
  ident_Fetch = 51,
  ident_MapAccum = 52,
  ident_DoMapAccum = 53,
  ident_DoMapAccumm_Aux = 54,
  ident_UnBracket = 55,
  ident_DelAccumulator = 56,
  ident_Inc = 57,
  ident_Dec = 58,
  ident_Pipe = 59,
  ident_CompileFile = 60,
  ident_FrontEnd = 61,
  ident_PreludeIncludeLine = 62,
  ident_DisplayLexerWarnings = 63,
  ident_StrFromPos = 64,
  ident_LoadAST = 65,
  ident_ResolveIncludes = 66,
  ident_ResolveIncludesm_CheckAlias = 67,
  ident_ResolveIncludesm_CheckValid = 68,
  ident_ResolveIncludesm_CheckEqualAST = 69,
  ident_GlueErrorListsAndASTs = 70,
  ident_PatchASTSrcPos = 71,
  ident_PatchASTSrcPosm_Item = 72,
  ident_PatchASTSrcPosm_Body = 73,
  ident_PatchASTSrcPosm_Sentence = 74,
  ident_PatchASTSrcPosm_Chain = 75,
  ident_PatchASTSrcPosm_Blocks = 76,
  ident_PatchASTSrcPosm_Expr = 77,
  ident_BackEnd = 78,
  ident_BackEndm_RASLModule = 79,
  ident_BackEndm_NativeModule = 80,
  ident_CreateMetaFunctions = 81,
  ident_GrammarCheck = 82,
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


static refalrts::FnResult func_Apply(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & Apply/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Apply/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Apply/4 s.Fn#1/5 e.Argument#1/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    if( ! refalrts::svar_term( context[5], context[5] ) )
      continue;
    // closed e.Argument#1 as range 7
    //DEBUG: s.Fn#1: 5
    //DEBUG: e.Argument#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 AsIs: s.Fn#1/5 AsIs: e.Argument#1/7 AsIs: >/1 ]] }
    refalrts::reinit_open_call(context[4]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Apply/4 (/5 t.Closure#1/9 e.Bounded#1/7 )/6 e.Argument#1/2 >/1
  context[7] = 0;
  context[8] = 0;
  if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Argument#1 as range 2
  context[10] = refalrts::tvar_left( context[9], context[7], context[8] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.Bounded#1 as range 7
  //DEBUG: e.Argument#1: 2
  //DEBUG: t.Closure#1: 9
  //DEBUG: e.Bounded#1: 7

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/5 {REMOVED TILE} {REMOVED TILE} )/6 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 AsIs: & Apply/4 } Tile{ AsIs: t.Closure#1/9 } Tile{ AsIs: e.Bounded#1/7 } Tile{ AsIs: e.Argument#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Apply("Apply", COOKIE1_, COOKIE2_, func_Apply);


static refalrts::FnResult func_Map(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & Map/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Map/4 t.Fn#1/5 t.Next#1/9 e.Tail#1/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[10] = refalrts::tvar_left( context[9], context[7], context[8] );
    if( ! context[10] )
      continue;
    // closed e.Tail#1 as range 7
    //DEBUG: t.Fn#1: 5
    //DEBUG: t.Next#1: 9
    //DEBUG: e.Tail#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Apply/4 AsIs: t.Fn#1/5 AsIs: t.Next#1/9 } >/11 </12 & Map/13 t.Fn#1/5/14 Tile{ AsIs: e.Tail#1/7 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_Map]);
    refalrts::copy_evar(vm, context[14], context[15], context[5], context[6]);
    refalrts::update_name(context[4], functions[efunc_Apply]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[11], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map/4 t.Fn#1/5 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Fn#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map/4 t.Fn#1/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Map("Map", COOKIE1_, COOKIE2_, func_Map);


static refalrts::FnResult func_Reduce(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & Reduce/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Reduce/4 t.new#1/5 t.new#2/7 e.new#3/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & Reduce/4 t.Fn#1/5 t.Acc#1/7 t.Next#1/11 e.Tail#1/9 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[12] = refalrts::tvar_left( context[11], context[9], context[10] );
    if( ! context[12] )
      continue;
    // closed e.Tail#1 as range 9
    //DEBUG: t.Fn#1: 5
    //DEBUG: t.Acc#1: 7
    //DEBUG: t.Next#1: 11
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </13 & Reduce/14 t.Fn#1/5/15 Tile{ AsIs: </0 Reuse: & Apply/4 AsIs: t.Fn#1/5 AsIs: t.Acc#1/7 AsIs: t.Next#1/11 } >/17 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_Reduce]);
    refalrts::copy_evar(vm, context[15], context[16], context[5], context[6]);
    refalrts::alloc_close_call(vm, context[17]);
    refalrts::update_name(context[4], functions[efunc_Apply]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[0], context[12] );
    res = refalrts::splice_evar( res, context[13], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Reduce/4 t.Fn#1/5 t.Acc#1/7 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Fn#1: 5
  //DEBUG: t.Acc#1: 7

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Reduce/4 t.Fn#1/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/7 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Reduce("Reduce", COOKIE1_, COOKIE2_, func_Reduce);


static refalrts::FnResult func_Fetch(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & Fetch/4 e.Argument#1/2 t.Function#1/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_right( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Argument#1 as range 2
  //DEBUG: t.Function#1: 5
  //DEBUG: e.Argument#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Apply/4 } Tile{ AsIs: t.Function#1/5 } Tile{ AsIs: e.Argument#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_Apply]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Fetch("Fetch", COOKIE1_, COOKIE2_, func_Fetch);


static refalrts::FnResult func_MapAccum(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & MapAccum/4 t.Fn#1/5 t.Acc#1/7 e.Tail#1/2 >/1
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
  // closed e.Tail#1 as range 2
  //DEBUG: t.Fn#1: 5
  //DEBUG: t.Acc#1: 7
  //DEBUG: e.Tail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum/4 AsIs: t.Fn#1/5 AsIs: t.Acc#1/7 } (/9 )/10 Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_close_bracket(vm, context[10]);
  refalrts::update_name(context[4], functions[efunc_DoMapAccum]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MapAccum("MapAccum", COOKIE1_, COOKIE2_, func_MapAccum);


static refalrts::FnResult func_DoMapAccum(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & DoMapAccum/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum/4 t.new#1/5 t.new#2/7 (/11 e.new#3/9 )/12 e.new#4/2 >/1
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
  // closed e.new#3 as range 9
  // closed e.new#4 as range 2
  do {
    // </0 & DoMapAccum/4 t.Fn#1/5 t.Acc#1/7 (/11 e.Scanned#1/13 )/12 t.Next#1/17 e.Tail#1/15 >/1
    context[13] = context[9];
    context[14] = context[10];
    context[15] = context[2];
    context[16] = context[3];
    // closed e.Scanned#1 as range 13
    context[18] = refalrts::tvar_left( context[17], context[15], context[16] );
    if( ! context[18] )
      continue;
    // closed e.Tail#1 as range 15
    //DEBUG: t.Fn#1: 5
    //DEBUG: t.Acc#1: 7
    //DEBUG: e.Scanned#1: 13
    //DEBUG: t.Next#1: 17
    //DEBUG: e.Tail#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum-Aux/4 AsIs: t.Fn#1/5 } Tile{ AsIs: (/11 AsIs: e.Scanned#1/13 AsIs: )/12 } (/19 </20 & Apply/21 t.Fn#1/5/22 Tile{ AsIs: t.Acc#1/7 } Tile{ AsIs: t.Next#1/17 } >/24 )/25 Tile{ AsIs: e.Tail#1/15 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[19]);
    refalrts::alloc_open_call(vm, context[20]);
    refalrts::alloc_name(vm, context[21], functions[efunc_Apply]);
    refalrts::copy_evar(vm, context[22], context[23], context[5], context[6]);
    refalrts::alloc_close_call(vm, context[24]);
    refalrts::alloc_close_bracket(vm, context[25]);
    refalrts::update_name(context[4], functions[efunc_DoMapAccumm_Aux]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[19], context[25] );
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[20] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[19], context[23] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum/4 t.Fn#1/5 t.Acc#1/7 (/11 e.Scanned#1/9 )/12 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Scanned#1 as range 9
  //DEBUG: t.Fn#1: 5
  //DEBUG: t.Acc#1: 7
  //DEBUG: e.Scanned#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DoMapAccum/4 t.Fn#1/5 {REMOVED TILE} (/11 {REMOVED TILE} )/12 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/7 } Tile{ AsIs: e.Scanned#1/9 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoMapAccum("DoMapAccum", COOKIE1_, COOKIE2_, func_DoMapAccum);


static refalrts::FnResult func_DoMapAccumm_Aux(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & DoMapAccum-Aux/4 t.Fn#1/5 (/9 e.Scanned#1/7 )/10 (/13 t.Acc#1/15 e.StepScanned#1/11 )/14 e.Tail#1/2 >/1
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
  // closed e.Scanned#1 as range 7
  // closed e.Tail#1 as range 2
  context[16] = refalrts::tvar_left( context[15], context[11], context[12] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  // closed e.StepScanned#1 as range 11
  //DEBUG: t.Fn#1: 5
  //DEBUG: e.Scanned#1: 7
  //DEBUG: e.Tail#1: 2
  //DEBUG: t.Acc#1: 15
  //DEBUG: e.StepScanned#1: 11

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/9 {REMOVED TILE} )/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum/4 AsIs: t.Fn#1/5 } Tile{ AsIs: t.Acc#1/15 } Tile{ AsIs: (/13 } Tile{ AsIs: e.Scanned#1/7 } Tile{ AsIs: e.StepScanned#1/11 } Tile{ AsIs: )/14 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_DoMapAccum]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[14];
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::splice_to_freelist_open( vm, context[6], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoMapAccumm_Aux("DoMapAccum-Aux", COOKIE1_, COOKIE2_, func_DoMapAccumm_Aux);


static refalrts::FnResult func_UnBracket(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & UnBracket/4 (/7 e.Expr#1/5 )/8 >/1
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
  // closed e.Expr#1 as range 5
  //DEBUG: e.Expr#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & UnBracket/4 (/7 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Expr#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_UnBracket("UnBracket", COOKIE1_, COOKIE2_, func_UnBracket);


static refalrts::FnResult func_DelAccumulator(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & DelAccumulator/4 t.Acc#1/5 e.Tail#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#1 as range 2
  //DEBUG: t.Acc#1: 5
  //DEBUG: e.Tail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DelAccumulator/4 t.Acc#1/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Tail#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DelAccumulator("DelAccumulator", COOKIE1_, COOKIE2_, func_DelAccumulator);


static refalrts::FnResult func_Inc(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & Inc/4 e.Num#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Num#1 as range 2
  //DEBUG: e.Num#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Add/0 HalfReuse: 1/4 AsIs: e.Num#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_Add]);
  refalrts::reinit_number(context[4], 1UL);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Inc("Inc", COOKIE1_, COOKIE2_, func_Inc);


static refalrts::FnResult func_Dec(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & Dec/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Dec/4 s.Num#1/7 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_left( context[7], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    //DEBUG: s.Num#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Sub/4 AsIs: s.Num#1/7 HalfReuse: 1/1 } >/8 Tile{ ]] }
    refalrts::alloc_close_call(vm, context[8]);
    refalrts::update_name(context[4], functions[efunc_Sub]);
    refalrts::reinit_number(context[1], 1UL);
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Dec/4 e.Num#1/2 >/1
  // closed e.Num#1 as range 2
  //DEBUG: e.Num#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Sub/4 } (/5 Tile{ AsIs: e.Num#1/2 } )/6 1/7 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[5]);
  refalrts::alloc_close_bracket(vm, context[6]);
  refalrts::alloc_number(vm, context[7], 1UL);
  refalrts::update_name(context[4], functions[efunc_Sub]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[5], context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Dec("Dec", COOKIE1_, COOKIE2_, func_Dec);


static refalrts::FnResult func_gen_Pipe_S2L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & Pipe$2\1/4 t.Func#1/5 (/9 e.Funcs#1/7 )/10 e.Arg#2/2 >/1
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
  // closed e.Funcs#1 as range 7
  // closed e.Arg#2 as range 2
  //DEBUG: t.Func#1: 5
  //DEBUG: e.Funcs#1: 7
  //DEBUG: e.Arg#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </11 & Apply/12 Tile{ AsIs: t.Func#1/5 } Tile{ AsIs: e.Arg#2/2 } >/13 </14 Tile{ HalfReuse: & Pipe/9 AsIs: e.Funcs#1/7 HalfReuse: >/10 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_Apply]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::update_name(context[4], functions[efunc_Fetch]);
  refalrts::reinit_name(context[9], functions[efunc_Pipe]);
  refalrts::reinit_close_call(context[10]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Pipe_S2L1("Pipe$2\\1", COOKIE1_, COOKIE2_, func_gen_Pipe_S2L1);


static refalrts::FnResult func_gen_Pipe_S3L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & Pipe$3\1/4 e.Arg#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Arg#2 as range 2
  //DEBUG: e.Arg#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Pipe$3\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Arg#2/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Pipe_S3L1("Pipe$3\\1", COOKIE1_, COOKIE2_, func_gen_Pipe_S3L1);


static refalrts::FnResult func_Pipe(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & Pipe/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Pipe/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Pipe/4 t.Func#1/7 >/1
      if( ! refalrts::empty_seq( context[5], context[6] ) )
        continue;
      //DEBUG: t.Func#1: 7

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & Pipe/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.Func#1/7 } Tile{ ]] }
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Pipe/4 t.Func#1/7 e.Funcs#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Funcs#1 as range 9
    //DEBUG: t.Func#1: 7
    //DEBUG: e.Funcs#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: [*]/0 Reuse: & Pipe$2\1/4 AsIs: t.Func#1/7 } (/11 Tile{ AsIs: e.Funcs#1/9 } )/12 Tile{ HalfReuse: {*}/1 ]] }
    refalrts::alloc_open_bracket(vm, context[11]);
    refalrts::alloc_close_bracket(vm, context[12]);
    refalrts::reinit_closure_head(context[0]);
    refalrts::update_name(context[4], functions[efunc_gen_Pipe_S2L1]);
    refalrts::reinit_unwrapped_closure(context[1], context[0]);
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    refalrts::use( res );
    refalrts::wrap_closure( context[1] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Pipe/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Pipe/4 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: & Pipe$3\1/1 ]] }
  refalrts::reinit_name(context[1], functions[efunc_gen_Pipe_S3L1]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Pipe("Pipe", COOKIE1_, COOKIE2_, func_Pipe);


static refalrts::FnResult func_gen_CompileFile_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & CompileFile:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CompileFile:1/4 t.new#1/5 (/9 e.new#2/7 )/10 (/13 e.new#3/11 )/14 (/17 e.new#4/15 )/18 s.new#5/19 >/1
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
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  // closed e.new#2 as range 7
  // closed e.new#3 as range 11
  // closed e.new#4 as range 15
  if( ! refalrts::svar_left( context[19], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & CompileFile:1/4 t.Config#1/5 (/9 e.SrcName#1/20 )/10 (/13 e.OutputName#1/22 )/14 (/17 e.AST#2/24 )/18 # EL-NoErrors/19 >/1
    context[20] = context[7];
    context[21] = context[8];
    context[22] = context[11];
    context[23] = context[12];
    context[24] = context[15];
    context[25] = context[16];
    if( ! refalrts::ident_term( identifiers[ident_ELm_NoErrors], context[19] ) )
      continue;
    // closed e.SrcName#1 as range 20
    // closed e.OutputName#1 as range 22
    // closed e.AST#2 as range 24
    //DEBUG: t.Config#1: 5
    //DEBUG: e.SrcName#1: 20
    //DEBUG: e.OutputName#1: 22
    //DEBUG: e.AST#2: 24

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/17 {REMOVED TILE} )/18 # EL-NoErrors/19 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & BackEnd/4 AsIs: t.Config#1/5 AsIs: (/9 AsIs: e.SrcName#1/20 AsIs: )/10 AsIs: (/13 AsIs: e.OutputName#1/22 AsIs: )/14 } Tile{ AsIs: e.AST#2/24 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_BackEnd]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[24], context[25] );
    refalrts::splice_to_freelist_open( vm, context[14], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CompileFile:1/4 t.Config#1/5 (/9 e.SrcName#1/7 )/10 (/13 e.OutputName#1/11 )/14 (/17 e.AST#2/15 )/18 # EL-HasErrors/19 >/1
  if( ! refalrts::ident_term( identifiers[ident_ELm_HasErrors], context[19] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.SrcName#1 as range 7
  // closed e.OutputName#1 as range 11
  // closed e.AST#2 as range 15
  //DEBUG: t.Config#1: 5
  //DEBUG: e.SrcName#1: 7
  //DEBUG: e.OutputName#1: 11
  //DEBUG: e.AST#2: 15

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CompileFile:1/4 t.Config#1/5 (/9 e.SrcName#1/7 )/10 (/13 e.OutputName#1/11 )/14 (/17 e.AST#2/15 )/18 # EL-HasErrors/19 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # Fails/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_Fails]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CompileFile_B1("CompileFile:1", COOKIE1_, COOKIE2_, func_gen_CompileFile_B1);


static refalrts::FnResult func_gen_CompileFile_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & CompileFile=1/4 t.Config#1/5 (/9 e.SrcName#1/7 )/10 (/13 e.OutputName#1/11 )/14 t.ErrorList#2/15 e.AST#2/2 >/1
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
  // closed e.SrcName#1 as range 7
  // closed e.OutputName#1 as range 11
  context[16] = refalrts::tvar_left( context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#2 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: e.SrcName#1: 7
  //DEBUG: e.OutputName#1: 11
  //DEBUG: t.ErrorList#2: 15
  //DEBUG: e.AST#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CompileFile:1/4 AsIs: t.Config#1/5 AsIs: (/9 AsIs: e.SrcName#1/7 AsIs: )/10 AsIs: (/13 AsIs: e.OutputName#1/11 AsIs: )/14 } (/17 Tile{ AsIs: e.AST#2/2 } )/18 </19 & EL-Destroy/20 Tile{ AsIs: t.ErrorList#2/15 } >/21 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::alloc_close_bracket(vm, context[18]);
  refalrts::alloc_open_call(vm, context[19]);
  refalrts::alloc_name(vm, context[20], functions[efunc_ELm_Destroy]);
  refalrts::alloc_close_call(vm, context[21]);
  refalrts::update_name(context[4], functions[efunc_gen_CompileFile_B1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[19] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[18], context[20] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CompileFile_A1("CompileFile=1", COOKIE1_, COOKIE2_, func_gen_CompileFile_A1);


static refalrts::FnResult func_CompileFile(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & CompileFile/4 t.Config#1/10 (/14 s.Dialect#1/16 e.SrcName#1/12 )/15 e.OutputName#1/2 '.'/9 'r'/8 'a'/7 's'/6 'l'/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = refalrts::char_right( 'l', context[2], context[3] );
  if( ! context[5] )
    return refalrts::cRecognitionImpossible;
  context[6] = refalrts::char_right( 's', context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::char_right( 'a', context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::char_right( 'r', context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  context[9] = refalrts::char_right( '.', context[2], context[3] );
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
  // closed e.OutputName#1 as range 2
  if( ! refalrts::svar_left( context[16], context[12], context[13] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.SrcName#1 as range 12
  //DEBUG: t.Config#1: 10
  //DEBUG: e.OutputName#1: 2
  //DEBUG: s.Dialect#1: 16
  //DEBUG: e.SrcName#1: 12

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CompileFile=1/4 AsIs: t.Config#1/10 AsIs: (/14 } Tile{ AsIs: e.SrcName#1/12 } Tile{ HalfReuse: )/6 } Tile{ HalfReuse: (/15 AsIs: e.OutputName#1/2 HalfReuse: )/9 HalfReuse: </8 HalfReuse: & FrontEnd/7 } t.Config#1/10/17 Tile{ AsIs: s.Dialect#1/16 } e.SrcName#1/12/19 Tile{ HalfReuse: >/5 AsIs: >/1 ]] }
  refalrts::copy_evar(vm, context[17], context[18], context[10], context[11]);
  refalrts::copy_evar(vm, context[19], context[20], context[12], context[13]);
  refalrts::update_name(context[4], functions[efunc_gen_CompileFile_A1]);
  refalrts::reinit_close_bracket(context[6]);
  refalrts::reinit_open_bracket(context[15]);
  refalrts::reinit_close_bracket(context[9]);
  refalrts::reinit_open_call(context[8]);
  refalrts::reinit_name(context[7], functions[efunc_FrontEnd]);
  refalrts::reinit_close_call(context[5]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[8] );
  refalrts::link_brackets( context[15], context[9] );
  refalrts::link_brackets( context[14], context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[5];
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[15], context[7] );
  res = refalrts::splice_evar( res, context[6], context[6] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CompileFile("CompileFile", 0U, 0U, func_CompileFile);


static refalrts::FnResult func_gen_FrontEnd_A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & FrontEnd=3/4 t.ErrorList#4/5 e.AST#4/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#4 as range 2
  //DEBUG: t.ErrorList#4: 5
  //DEBUG: e.AST#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckProgram/4 AsIs: t.ErrorList#4/5 AsIs: e.AST#4/2 AsIs: >/1 } e.AST#4/2/7 Tile{ ]] }
  refalrts::copy_evar(vm, context[7], context[8], context[2], context[3]);
  refalrts::update_name(context[4], functions[efunc_CheckProgram]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FrontEnd_A3("FrontEnd=3", COOKIE1_, COOKIE2_, func_gen_FrontEnd_A3);


static refalrts::FnResult func_gen_FrontEnd_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & FrontEnd=2/4 (/7 e.SrcName#1/5 )/8 e.IncludeUnits#3/2 >/1
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
  // closed e.SrcName#1 as range 5
  // closed e.IncludeUnits#3 as range 2
  //DEBUG: e.SrcName#1: 5
  //DEBUG: e.IncludeUnits#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & FrontEnd=3/10 Tile{ AsIs: </0 Reuse: & GlueErrorListsAndASTs/4 AsIs: (/7 AsIs: e.SrcName#1/5 AsIs: )/8 AsIs: e.IncludeUnits#3/2 AsIs: >/1 } >/11 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_FrontEnd_A3]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_GlueErrorListsAndASTs]);
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FrontEnd_A2("FrontEnd=2", COOKIE1_, COOKIE2_, func_gen_FrontEnd_A2);


static refalrts::FnResult func_gen_FrontEnd_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  // </0 & FrontEnd=1/4 (/7 e.SrcName#1/5 )/8 t.Config#1/9 s.Dialect#1/11 t.ErrorList#2/12 e.FirstAST#2/2 >/1
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
  // closed e.SrcName#1 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[13] = refalrts::tvar_left( context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  // closed e.FirstAST#2 as range 2
  //DEBUG: e.SrcName#1: 5
  //DEBUG: t.Config#1: 9
  //DEBUG: s.Dialect#1: 11
  //DEBUG: t.ErrorList#2: 12
  //DEBUG: e.FirstAST#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FrontEnd=2/4 AsIs: (/7 AsIs: e.SrcName#1/5 AsIs: )/8 } </14 & ResolveIncludes/15 Tile{ AsIs: t.Config#1/9 } (/16 )/17 (/18 Tile{ AsIs: t.ErrorList#2/12 } Tile{ AsIs: s.Dialect#1/11 } (/19 (/20 e.SrcName#1/5/21 )/23 (/24 e.SrcName#1/5/25 )/27 )/28 (/29 )/30 Tile{ AsIs: e.FirstAST#2/2 } )/31 >/32 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_ResolveIncludes]);
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::alloc_close_bracket(vm, context[17]);
  refalrts::alloc_open_bracket(vm, context[18]);
  refalrts::alloc_open_bracket(vm, context[19]);
  refalrts::alloc_open_bracket(vm, context[20]);
  refalrts::copy_evar(vm, context[21], context[22], context[5], context[6]);
  refalrts::alloc_close_bracket(vm, context[23]);
  refalrts::alloc_open_bracket(vm, context[24]);
  refalrts::copy_evar(vm, context[25], context[26], context[5], context[6]);
  refalrts::alloc_close_bracket(vm, context[27]);
  refalrts::alloc_close_bracket(vm, context[28]);
  refalrts::alloc_open_bracket(vm, context[29]);
  refalrts::alloc_close_bracket(vm, context[30]);
  refalrts::alloc_close_bracket(vm, context[31]);
  refalrts::alloc_close_call(vm, context[32]);
  refalrts::update_name(context[4], functions[efunc_gen_FrontEnd_A2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[32] );
  refalrts::push_stack( vm, context[14] );
  refalrts::link_brackets( context[18], context[31] );
  refalrts::link_brackets( context[29], context[30] );
  refalrts::link_brackets( context[19], context[28] );
  refalrts::link_brackets( context[24], context[27] );
  refalrts::link_brackets( context[20], context[23] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[31], context[32] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[19], context[30] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[16], context[18] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FrontEnd_A1("FrontEnd=1", COOKIE1_, COOKIE2_, func_gen_FrontEnd_A1);


static refalrts::FnResult func_FrontEnd(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & FrontEnd/4 t.Config#1/5 s.Dialect#1/7 e.SrcName#1/2 >/1
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
  // closed e.SrcName#1 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: s.Dialect#1: 7
  //DEBUG: e.SrcName#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </8 & FrontEnd=1/9 (/10 e.SrcName#1/2/11 )/13 t.Config#1/5/14 s.Dialect#1/7/16 Tile{ AsIs: </0 Reuse: & LoadAST/4 AsIs: t.Config#1/5 AsIs: s.Dialect#1/7 AsIs: e.SrcName#1/2 AsIs: >/1 } >/17 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_gen_FrontEnd_A1]);
  refalrts::alloc_open_bracket(vm, context[10]);
  refalrts::copy_evar(vm, context[11], context[12], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::copy_evar(vm, context[14], context[15], context[5], context[6]);
  refalrts::copy_stvar(vm, context[16], context[7]);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::update_name(context[4], functions[efunc_LoadAST]);
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[10], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[8], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FrontEnd("FrontEnd", COOKIE1_, COOKIE2_, func_FrontEnd);


static refalrts::FnResult func_gen_PreludeIncludeLine_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & PreludeIncludeLine:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & PreludeIncludeLine:1/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & PreludeIncludeLine:1/4 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PreludeIncludeLine:1/4 e.Prelude#2/2 >/1
  // closed e.Prelude#2 as range 2
  //DEBUG: e.Prelude#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/5 Tile{ HalfReuse: # Include/0 HalfReuse: 1/4 AsIs: e.Prelude#2/2 HalfReuse: )/1 ]] }
  refalrts::alloc_open_bracket(vm, context[5]);
  refalrts::reinit_ident(context[0], identifiers[ident_Include]);
  refalrts::reinit_number(context[4], 1UL);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[5], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PreludeIncludeLine_B1("PreludeIncludeLine:1", COOKIE1_, COOKIE2_, func_gen_PreludeIncludeLine_B1);


static refalrts::FnResult func_PreludeIncludeLine(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & PreludeIncludeLine/4 t.Config#1/5 >/1
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
  //DEBUG: t.Config#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 & PreludeIncludeLine:1/8 Tile{ AsIs: </0 Reuse: & Config-GetPrelude/4 AsIs: t.Config#1/5 AsIs: >/1 } >/9 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_PreludeIncludeLine_B1]);
  refalrts::alloc_close_call(vm, context[9]);
  refalrts::update_name(context[4], functions[efunc_Configm_GetPrelude]);
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

static refalrts::NativeReference nat_ref_PreludeIncludeLine("PreludeIncludeLine", COOKIE1_, COOKIE2_, func_PreludeIncludeLine);


static refalrts::FnResult func_gen_DisplayLexerWarnings_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & DisplayLexerWarnings\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DisplayLexerWarnings\1/4 (/7 e.new#1/5 )/8 t.new#2/9 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & DisplayLexerWarnings\1/4 (/7 e.FileName#1/11 )/8 (/9 # TkWarning/15 t.Pos#2/16 e.Message#2/13 )/10 >/1
    context[11] = context[5];
    context[12] = context[6];
    context[13] = 0;
    context[14] = 0;
    if( ! refalrts::brackets_term( context[13], context[14], context[9] ) )
      continue;
    context[15] = refalrts::ident_left( identifiers[ident_TkWarning], context[13], context[14] );
    if( ! context[15] )
      continue;
    // closed e.FileName#1 as range 11
    context[17] = refalrts::tvar_left( context[16], context[13], context[14] );
    if( ! context[17] )
      continue;
    // closed e.Message#2 as range 13
    //DEBUG: e.FileName#1: 11
    //DEBUG: t.Pos#2: 16
    //DEBUG: e.Message#2: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & Prout/7 AsIs: e.FileName#1/11 HalfReuse: ':'/8 HalfReuse: </9 HalfReuse: & StrFromPos/15 AsIs: t.Pos#2/16 } Tile{ HalfReuse: >/10 } Tile{ HalfReuse: ':'/0 }"WARNING:"/18 Tile{ AsIs: e.Message#2/13 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[18], context[19], "WARNING:", 8);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[7], functions[efunc_Prout]);
    refalrts::reinit_char(context[8], ':');
    refalrts::reinit_open_call(context[9]);
    refalrts::reinit_name(context[15], functions[efunc_StrFromPos]);
    refalrts::reinit_close_call(context[10]);
    refalrts::reinit_char(context[0], ':');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[4], context[17] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DisplayLexerWarnings\1/4 (/7 e.FileName#1/5 )/8 t.OtherToken#2/9 >/1
  // closed e.FileName#1 as range 5
  //DEBUG: t.OtherToken#2: 9
  //DEBUG: e.FileName#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DisplayLexerWarnings\1/4 (/7 e.FileName#1/5 )/8 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherToken#2/9 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DisplayLexerWarnings_L1("DisplayLexerWarnings\\1", COOKIE1_, COOKIE2_, func_gen_DisplayLexerWarnings_L1);


static refalrts::FnResult func_DisplayLexerWarnings(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & DisplayLexerWarnings/4 (/7 e.FileName#1/5 )/8 e.Tokens#1/2 >/1
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
  // closed e.FileName#1 as range 5
  // closed e.Tokens#1 as range 2
  //DEBUG: e.FileName#1: 5
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & Map@1/7 AsIs: e.FileName#1/5 HalfReuse: (/8 AsIs: e.Tokens#1/2 HalfReuse: )/1 } Tile{ HalfReuse: >/0 } Tile{ ]] }
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_gen_Map_Z1]);
  refalrts::reinit_open_bracket(context[8]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::reinit_close_call(context[0]);
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[4] );
  refalrts::link_brackets( context[8], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[4], context[1] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DisplayLexerWarnings("DisplayLexerWarnings", COOKIE1_, COOKIE2_, func_DisplayLexerWarnings);


static refalrts::FnResult func_StrFromPos(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & StrFromPos/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & StrFromPos/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & StrFromPos/4 s.new#2/5 >/1
    if( ! refalrts::svar_term( context[5], context[5] ) )
      continue;
    do {
      // </0 & StrFromPos/4 # NoPos/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_NoPos], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: '1'/4 HalfReuse: ':'/5 HalfReuse: '1'/1 ]] }
      refalrts::reinit_char(context[4], '1');
      refalrts::reinit_char(context[5], ':');
      refalrts::reinit_char(context[1], '1');
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[4];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & StrFromPos/4 s.Row#1/5 >/1
    //DEBUG: s.Row#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Symb/4 AsIs: s.Row#1/5 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_Symb]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & StrFromPos/4 (/5 # RowCol/9 s.Row#1/10 s.Col#1/11 )/6 >/1
  context[7] = 0;
  context[8] = 0;
  if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
    return refalrts::cRecognitionImpossible;
  context[9] = refalrts::ident_left( identifiers[ident_RowCol], context[7], context[8] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[7], context[8] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[7], context[8] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[7], context[8] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Row#1: 10
  //DEBUG: s.Col#1: 11

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Row#1/10 s.Col#1/11 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Symb/4 HalfReuse: s.Row1 #10/5 HalfReuse: >/9 } ':'/12 </13 & Symb/14 Tile{ HalfReuse: s.Col1 #11/6 AsIs: >/1 ]] }
  refalrts::alloc_char(vm, context[12], ':');
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_Symb]);
  refalrts::update_name(context[4], functions[efunc_Symb]);
  refalrts::reinit_svar( context[5], context[10] );
  refalrts::reinit_close_call(context[9]);
  refalrts::reinit_svar( context[6], context[11] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[6];
  res = refalrts::splice_evar( res, context[12], context[14] );
  refalrts::splice_to_freelist_open( vm, context[9], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_StrFromPos("StrFromPos", COOKIE1_, COOKIE2_, func_StrFromPos);


static refalrts::FnResult func_gen_LoadAST_S1A4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & LoadAST$1=4/4 t.Config#1/5 t.ErrorList#5/7 e.AST#5/2 >/1
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
  // closed e.AST#5 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: t.ErrorList#5: 7
  //DEBUG: e.AST#5: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#5/7 } Tile{ AsIs: </0 Reuse: & PreludeIncludeLine/4 AsIs: t.Config#1/5 } Tile{ AsIs: >/1 } Tile{ AsIs: e.AST#5/2 } Tile{ ]] }
  refalrts::update_name(context[4], functions[efunc_PreludeIncludeLine]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LoadAST_S1A4("LoadAST$1=4", COOKIE1_, COOKIE2_, func_gen_LoadAST_S1A4);


static refalrts::FnResult func_gen_LoadAST_S1A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & LoadAST$1=3/4 t.Config#1/5 (/9 e.SrcName#1/7 )/10 s.Mode#2/11 e.Tokens#4/2 >/1
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
  // closed e.SrcName#1 as range 7
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tokens#4 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: e.SrcName#1: 7
  //DEBUG: s.Mode#2: 11
  //DEBUG: e.Tokens#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & LoadAST$1=4/4 AsIs: t.Config#1/5 } </12 & R5-Parse/13 </14 Tile{ HalfReuse: & EL-Create/9 AsIs: e.SrcName#1/7 HalfReuse: >/10 AsIs: s.Mode#2/11 AsIs: e.Tokens#4/2 AsIs: >/1 } >/15 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_R5m_Parse]);
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::update_name(context[4], functions[efunc_gen_LoadAST_S1A4]);
  refalrts::reinit_name(context[9], functions[efunc_ELm_Create]);
  refalrts::reinit_close_call(context[10]);
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[9], context[1] );
  res = refalrts::splice_evar( res, context[12], context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LoadAST_S1A3("LoadAST$1=3", COOKIE1_, COOKIE2_, func_gen_LoadAST_S1A3);


static refalrts::FnResult func_gen_LoadAST_S1A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & LoadAST$1=2/4 t.Config#1/5 (/9 e.SrcName#1/7 )/10 s.Mode#2/11 e.Tokens#3/2 >/1
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
  // closed e.SrcName#1 as range 7
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tokens#3 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: e.SrcName#1: 7
  //DEBUG: s.Mode#2: 11
  //DEBUG: e.Tokens#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & LoadAST$1=3/4 AsIs: t.Config#1/5 AsIs: (/9 AsIs: e.SrcName#1/7 AsIs: )/10 AsIs: s.Mode#2/11 } </12 & DisplayLexerWarnings/13 (/14 e.SrcName#1/7/15 )/17 Tile{ AsIs: e.Tokens#3/2 } >/18 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_DisplayLexerWarnings]);
  refalrts::alloc_open_bracket(vm, context[14]);
  refalrts::copy_evar(vm, context[15], context[16], context[7], context[8]);
  refalrts::alloc_close_bracket(vm, context[17]);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::update_name(context[4], functions[efunc_gen_LoadAST_S1A3]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[12] );
  refalrts::link_brackets( context[14], context[17] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LoadAST_S1A2("LoadAST$1=2", COOKIE1_, COOKIE2_, func_gen_LoadAST_S1A2);


static refalrts::FnResult func_gen_LoadAST_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & LoadAST$1=1/4 t.Config#1/5 (/9 e.SrcName#1/7 )/10 s.Mode#2/11 >/1
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
  // closed e.SrcName#1 as range 7
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Config#1: 5
  //DEBUG: e.SrcName#1: 7
  //DEBUG: s.Mode#2: 11

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & LoadAST$1=2/4 AsIs: t.Config#1/5 AsIs: (/9 AsIs: e.SrcName#1/7 AsIs: )/10 AsIs: s.Mode#2/11 HalfReuse: </1 } & R5-Scan/12 s.Mode#2/11/13 e.SrcName#1/7/14 >/16 >/17 Tile{ ]] }
  refalrts::alloc_name(vm, context[12], functions[efunc_R5m_Scan]);
  refalrts::copy_stvar(vm, context[13], context[11]);
  refalrts::copy_evar(vm, context[14], context[15], context[7], context[8]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::update_name(context[4], functions[efunc_gen_LoadAST_S1A2]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[1] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[12], context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LoadAST_S1A1("LoadAST$1=1", COOKIE1_, COOKIE2_, func_gen_LoadAST_S1A1);


static refalrts::FnResult func_gen_LoadAST_S2A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & LoadAST$2=2/4 (/7 e.SrcName#1/5 )/8 e.Tokens#3/2 >/1
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
  // closed e.SrcName#1 as range 5
  // closed e.Tokens#3 as range 2
  //DEBUG: e.SrcName#1: 5
  //DEBUG: e.Tokens#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 Tile{ HalfReuse: & SR-ParseProgram/0 HalfReuse: </4 HalfReuse: & EL-Create/7 AsIs: e.SrcName#1/5 HalfReuse: >/8 AsIs: e.Tokens#3/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::reinit_name(context[0], functions[efunc_SRm_ParseProgram]);
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_ELm_Create]);
  refalrts::reinit_close_call(context[8]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LoadAST_S2A2("LoadAST$2=2", COOKIE1_, COOKIE2_, func_gen_LoadAST_S2A2);


static refalrts::FnResult func_gen_LoadAST_S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & LoadAST$2=1/4 (/7 e.SrcName#1/5 )/8 e.Tokens#2/2 >/1
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
  // closed e.SrcName#1 as range 5
  // closed e.Tokens#2 as range 2
  //DEBUG: e.SrcName#1: 5
  //DEBUG: e.Tokens#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & LoadAST$2=2/10 (/11 e.SrcName#1/5/12 )/14 Tile{ AsIs: </0 Reuse: & DisplayLexerWarnings/4 AsIs: (/7 AsIs: e.SrcName#1/5 AsIs: )/8 AsIs: e.Tokens#2/2 AsIs: >/1 } >/15 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_LoadAST_S2A2]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::copy_evar(vm, context[12], context[13], context[5], context[6]);
  refalrts::alloc_close_bracket(vm, context[14]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::update_name(context[4], functions[efunc_DisplayLexerWarnings]);
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[11], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[9], context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LoadAST_S2A1("LoadAST$2=1", COOKIE1_, COOKIE2_, func_gen_LoadAST_S2A1);


static refalrts::FnResult func_gen_LoadAST_S3B1S1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & LoadAST$3:1$1:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & LoadAST$3:1$1:1/4 t.new#1/9 (/13 e.new#2/11 )/14 t.new#3/15 (/19 e.new#4/17 )/20 s.new#5/21 (/7 e.new#6/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#6 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.new#2 as range 11
  context[16] = refalrts::tvar_left( context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  // closed e.new#4 as range 17
  if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & LoadAST$3:1$1:1/4 t.ErrorList#6/9 (/13 e.AST#6/22 )/14 t.ErrorPos#4/15 (/19 e.DecompiledName#3/24 )/20 # True/21 (/7 )/8 >/1
    context[22] = context[11];
    context[23] = context[12];
    context[24] = context[17];
    context[25] = context[18];
    if( ! refalrts::ident_term( identifiers[ident_True], context[21] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.AST#6 as range 22
    // closed e.DecompiledName#3 as range 24
    //DEBUG: t.ErrorList#6: 9
    //DEBUG: t.ErrorPos#4: 15
    //DEBUG: e.AST#6: 22
    //DEBUG: e.DecompiledName#3: 24

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & LoadAST$3:1$1:1/4 {REMOVED TILE} (/13 {REMOVED TILE} )/14 t.ErrorPos#4/15 (/19 e.DecompiledName#3/24 )/20 # True/21 (/7 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#6/9 } Tile{ AsIs: e.AST#6/22 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & LoadAST$3:1$1:1/4 t.ErrorList#6/9 (/13 e.AST#6/11 )/14 t.ErrorPos#4/15 (/19 e.DecompiledName#3/17 )/20 # False/21 (/7 e.Message#7/5 )/8 >/1
  if( ! refalrts::ident_term( identifiers[ident_False], context[21] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#6 as range 11
  // closed e.DecompiledName#3 as range 17
  // closed e.Message#7 as range 5
  //DEBUG: t.ErrorList#6: 9
  //DEBUG: t.ErrorPos#4: 15
  //DEBUG: e.AST#6: 11
  //DEBUG: e.DecompiledName#3: 17
  //DEBUG: e.Message#7: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.AST#6/11 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#6/9 } Tile{ AsIs: t.ErrorPos#4/15 HalfReuse: 'C'/19 } Tile{ HalfReuse: 'a'/14 } Tile{ HalfReuse: 'n'/13 } Tile{ HalfReuse: '\''/20 }"t remove file "/22 Tile{ AsIs: e.DecompiledName#3/17 } Tile{ HalfReuse: ' '/21 HalfReuse: '('/7 AsIs: e.Message#7/5 HalfReuse: ')'/8 AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[22], context[23], "t remove file ", 14);
  refalrts::update_name(context[4], functions[efunc_ELm_AddErrorAt]);
  refalrts::reinit_char(context[19], 'C');
  refalrts::reinit_char(context[14], 'a');
  refalrts::reinit_char(context[13], 'n');
  refalrts::reinit_char(context[20], '\'');
  refalrts::reinit_char(context[21], ' ');
  refalrts::reinit_char(context[7], '(');
  refalrts::reinit_char(context[8], ')');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[21];
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[15], context[19] );
  refalrts::splice_to_freelist_open( vm, context[10], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LoadAST_S3B1S1B1("LoadAST$3:1$1:1", COOKIE1_, COOKIE2_, func_gen_LoadAST_S3B1S1B1);


static refalrts::FnResult func_gen_LoadAST_S3B1S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & LoadAST$3:1$1=1/4 t.ErrorPos#4/5 (/9 e.DecompiledName#3/7 )/10 t.ErrorList#6/11 e.AST#6/2 >/1
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
  // closed e.DecompiledName#3 as range 7
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#6 as range 2
  //DEBUG: t.ErrorPos#4: 5
  //DEBUG: e.DecompiledName#3: 7
  //DEBUG: t.ErrorList#6: 11
  //DEBUG: e.AST#6: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 } & LoadAST$3:1$1:1/13 Tile{ AsIs: t.ErrorList#6/11 } (/14 Tile{ AsIs: e.AST#6/2 } Tile{ HalfReuse: )/4 AsIs: t.ErrorPos#4/5 AsIs: (/9 AsIs: e.DecompiledName#3/7 AsIs: )/10 } </15 & RemoveFile/16 e.DecompiledName#3/7/17 >/19 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_LoadAST_S3B1S1B1]);
  refalrts::alloc_open_bracket(vm, context[14]);
  refalrts::alloc_open_call(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_RemoveFile]);
  refalrts::copy_evar(vm, context[17], context[18], context[7], context[8]);
  refalrts::alloc_close_call(vm, context[19]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[15] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::link_brackets( context[14], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[15], context[19] );
  res = refalrts::splice_evar( res, context[4], context[10] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LoadAST_S3B1S1A1("LoadAST$3:1$1=1", COOKIE1_, COOKIE2_, func_gen_LoadAST_S3B1S1A1);


static refalrts::FnResult func_gen_LoadAST_S3B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & LoadAST$3:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & LoadAST$3:1/4 t.new#1/5 (/9 e.new#2/7 )/10 t.new#3/11 e.new#4/2 s.new#5/13 >/1
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
  if( ! refalrts::svar_right( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 2
  do {
    // </0 & LoadAST$3:1/4 t.new#6/5 (/9 e.new#9/14 )/10 t.new#7/11 0/18 s.new#8/13 >/1
    context[14] = context[7];
    context[15] = context[8];
    context[16] = context[2];
    context[17] = context[3];
    context[18] = refalrts::number_left( 0UL, context[16], context[17] );
    if( ! context[18] )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;
    // closed e.new#9 as range 14
    do {
      // </0 & LoadAST$3:1/4 t.ErrorPos#4/5 (/9 e.DecompiledName#3/19 )/10 t.Config#1/11 0/18 # True/13 >/1
      context[19] = context[14];
      context[20] = context[15];
      if( ! refalrts::ident_term( identifiers[ident_True], context[13] ) )
        continue;
      // closed e.DecompiledName#3 as range 19
      //DEBUG: t.ErrorPos#4: 5
      //DEBUG: t.Config#1: 11
      //DEBUG: e.DecompiledName#3: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & LoadAST$3:1$1=1/4 AsIs: t.ErrorPos#4/5 AsIs: (/9 AsIs: e.DecompiledName#3/19 AsIs: )/10 } </21 & LoadAST/22 Tile{ AsIs: t.Config#1/11 HalfReuse: # R5/18 } e.DecompiledName#3/19/23 Tile{ HalfReuse: >/13 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[21]);
      refalrts::alloc_name(vm, context[22], functions[efunc_LoadAST]);
      refalrts::copy_evar(vm, context[23], context[24], context[19], context[20]);
      refalrts::update_name(context[4], functions[efunc_gen_LoadAST_S3B1S1A1]);
      refalrts::reinit_ident(context[18], identifiers[ident_R5]);
      refalrts::reinit_close_call(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[13] );
      refalrts::push_stack( vm, context[21] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[13];
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[11], context[18] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & LoadAST$3:1/4 t.ErrorPos#4/5 (/9 e.DecompiledName#3/19 )/10 t.Config#1/11 0/18 # False/13 >/1
    context[19] = context[14];
    context[20] = context[15];
    if( ! refalrts::ident_term( identifiers[ident_False], context[13] ) )
      continue;
    // closed e.DecompiledName#3 as range 19
    //DEBUG: t.ErrorPos#4: 5
    //DEBUG: t.Config#1: 11
    //DEBUG: e.DecompiledName#3: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.Config#1/11 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 } </21 Tile{ HalfReuse: & EL-Create/10 } >/22 Tile{ AsIs: t.ErrorPos#4/5 HalfReuse: 'R'/9 } 'S'/23 Tile{ HalfReuse: 'L'/18 HalfReuse: ' '/13 }"decompiler can\'t create "/24 Tile{ AsIs: e.DecompiledName#3/19 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_close_call(vm, context[22]);
    refalrts::alloc_char(vm, context[23], 'S');
    refalrts::alloc_chars(vm, context[24], context[25], "decompiler can\'t create ", 24);
    refalrts::update_name(context[4], functions[efunc_ELm_AddErrorAt]);
    refalrts::reinit_name(context[10], functions[efunc_ELm_Create]);
    refalrts::reinit_char(context[9], 'R');
    refalrts::reinit_char(context[18], 'L');
    refalrts::reinit_char(context[13], ' ');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[22] );
    refalrts::push_stack( vm, context[21] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[18], context[13] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    res = refalrts::splice_evar( res, context[5], context[9] );
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[21], context[21] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & LoadAST$3:1/4 t.ErrorPos#4/5 (/9 e.DecompiledName#3/7 )/10 t.Config#1/11 e.RetCode#5/2 s.Bool#5/13 >/1
  // closed e.DecompiledName#3 as range 7
  // closed e.RetCode#5 as range 2
  //DEBUG: t.ErrorPos#4: 5
  //DEBUG: t.Config#1: 11
  //DEBUG: s.Bool#5: 13
  //DEBUG: e.DecompiledName#3: 7
  //DEBUG: e.RetCode#5: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.DecompiledName#3/7 {REMOVED TILE} t.Config#1/11 {REMOVED TILE} s.Bool#5/13 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 } </14 & EL-Create/15 Tile{ HalfReuse: >/10 } Tile{ AsIs: t.ErrorPos#4/5 HalfReuse: 'R'/9 }"SL decompiler failed with retcode "/16 </18 & Symb/19 Tile{ AsIs: e.RetCode#5/2 } >/20 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_ELm_Create]);
  refalrts::alloc_chars(vm, context[16], context[17], "SL decompiler failed with retcode ", 34);
  refalrts::alloc_open_call(vm, context[18]);
  refalrts::alloc_name(vm, context[19], functions[efunc_Symb]);
  refalrts::alloc_close_call(vm, context[20]);
  refalrts::update_name(context[4], functions[efunc_ELm_AddErrorAt]);
  refalrts::reinit_close_call(context[10]);
  refalrts::reinit_char(context[9], 'R');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[16], context[19] );
  res = refalrts::splice_evar( res, context[5], context[9] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LoadAST_S3B1("LoadAST$3:1", COOKIE1_, COOKIE2_, func_gen_LoadAST_S3B1);


static refalrts::FnResult func_gen_LoadAST_S3A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & LoadAST$3=3/4 (/7 e.DecompiledName#3/5 )/8 t.Config#1/9 (/13 e.SrcName#1/11 )/14 t.ErrorPos#4/15 >/1
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
  // closed e.DecompiledName#3 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.SrcName#1 as range 11
  context[16] = refalrts::tvar_left( context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.DecompiledName#3: 5
  //DEBUG: t.Config#1: 9
  //DEBUG: e.SrcName#1: 11
  //DEBUG: t.ErrorPos#4: 15

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & LoadAST$3:1/4 } Tile{ AsIs: t.ErrorPos#4/15 } Tile{ AsIs: (/7 AsIs: e.DecompiledName#3/5 AsIs: )/8 AsIs: t.Config#1/9 HalfReuse: </13 } & System/17 'r'/18 Tile{ HalfReuse: 'l'/14 }"-rsl-decompiler "/19 Tile{ AsIs: e.SrcName#1/11 } >/21 </22 & ExistFile/23 e.DecompiledName#3/5/24 >/26 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[17], functions[efunc_System]);
  refalrts::alloc_char(vm, context[18], 'r');
  refalrts::alloc_chars(vm, context[19], context[20], "-rsl-decompiler ", 16);
  refalrts::alloc_close_call(vm, context[21]);
  refalrts::alloc_open_call(vm, context[22]);
  refalrts::alloc_name(vm, context[23], functions[efunc_ExistFile]);
  refalrts::copy_evar(vm, context[24], context[25], context[5], context[6]);
  refalrts::alloc_close_call(vm, context[26]);
  refalrts::update_name(context[4], functions[efunc_gen_LoadAST_S3B1]);
  refalrts::reinit_open_call(context[13]);
  refalrts::reinit_char(context[14], 'l');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[26] );
  refalrts::push_stack( vm, context[22] );
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[21], context[26] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[7], context[13] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LoadAST_S3A3("LoadAST$3=3", COOKIE1_, COOKIE2_, func_gen_LoadAST_S3A3);


static refalrts::FnResult func_gen_LoadAST_S3A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & LoadAST$3=2/4 t.Config#1/5 (/9 e.SrcName#1/7 )/10 e.DecompiledName#3/2 >/1
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
  // closed e.SrcName#1 as range 7
  // closed e.DecompiledName#3 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: e.SrcName#1: 7
  //DEBUG: e.DecompiledName#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & LoadAST$3:1/4 } (/11 # FileRowCol/12 (/13 1/14 1/15 Tile{ AsIs: )/10 AsIs: e.DecompiledName#3/2 HalfReuse: )/1 } (/16 e.DecompiledName#3/2/17 )/19 Tile{ AsIs: t.Config#1/5 HalfReuse: </9 } & System/20"rl-rsl-decompiler "/21 Tile{ AsIs: e.SrcName#1/7 } >/23 </24 & ExistFile/25 e.DecompiledName#3/2/26 >/28 >/29 Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_ident(vm, context[12], identifiers[ident_FileRowCol]);
  refalrts::alloc_open_bracket(vm, context[13]);
  refalrts::alloc_number(vm, context[14], 1UL);
  refalrts::alloc_number(vm, context[15], 1UL);
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::copy_evar(vm, context[17], context[18], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[19]);
  refalrts::alloc_name(vm, context[20], functions[efunc_System]);
  refalrts::alloc_chars(vm, context[21], context[22], "rl-rsl-decompiler ", 18);
  refalrts::alloc_close_call(vm, context[23]);
  refalrts::alloc_open_call(vm, context[24]);
  refalrts::alloc_name(vm, context[25], functions[efunc_ExistFile]);
  refalrts::copy_evar(vm, context[26], context[27], context[2], context[3]);
  refalrts::alloc_close_call(vm, context[28]);
  refalrts::alloc_close_call(vm, context[29]);
  refalrts::update_name(context[4], functions[efunc_gen_LoadAST_S3B1]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::reinit_open_call(context[9]);
  refalrts::push_stack( vm, context[29] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[28] );
  refalrts::push_stack( vm, context[24] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[16], context[19] );
  refalrts::link_brackets( context[11], context[1] );
  refalrts::link_brackets( context[13], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[23], context[29] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[20], context[22] );
  res = refalrts::splice_evar( res, context[5], context[9] );
  res = refalrts::splice_evar( res, context[16], context[19] );
  res = refalrts::splice_evar( res, context[10], context[1] );
  res = refalrts::splice_evar( res, context[11], context[15] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LoadAST_S3A2("LoadAST$3=2", COOKIE1_, COOKIE2_, func_gen_LoadAST_S3A2);


static refalrts::FnResult func_gen_LoadAST_S3A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
  // </0 & LoadAST$3=1/4 t.Config#1/9 (/13 e.SrcName#1/11 )/14 e.BaseName#2/2 '.'/8 'r'/7 's'/6 'l'/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = refalrts::char_right( 'l', context[2], context[3] );
  if( ! context[5] )
    return refalrts::cRecognitionImpossible;
  context[6] = refalrts::char_right( 's', context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::char_right( 'r', context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::char_right( '.', context[2], context[3] );
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
  // closed e.SrcName#1 as range 11
  // closed e.BaseName#2 as range 2
  //DEBUG: t.Config#1: 9
  //DEBUG: e.SrcName#1: 11
  //DEBUG: e.BaseName#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & LoadAST$3:1/4 } (/15 # FileRowCol/16 (/17 1/18 1/19 Tile{ AsIs: )/14 AsIs: e.BaseName#2/2 Reuse: '-'/8 Reuse: 'd'/7 Reuse: 'e'/6 Reuse: 'c'/5 HalfReuse: 'o'/1 }"mpiled.ref"/20 )/22 (/23 e.BaseName#2/2/24"-decompiled.ref"/26 )/28 Tile{ AsIs: t.Config#1/9 HalfReuse: </13 } & System/29"rl-rsl-decompiler "/30 Tile{ AsIs: e.SrcName#1/11 } >/32 </33 & ExistFile/34 e.BaseName#2/2/35"-decompiled.ref"/37 >/39 >/40 Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::alloc_ident(vm, context[16], identifiers[ident_FileRowCol]);
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::alloc_number(vm, context[18], 1UL);
  refalrts::alloc_number(vm, context[19], 1UL);
  refalrts::alloc_chars(vm, context[20], context[21], "mpiled.ref", 10);
  refalrts::alloc_close_bracket(vm, context[22]);
  refalrts::alloc_open_bracket(vm, context[23]);
  refalrts::copy_evar(vm, context[24], context[25], context[2], context[3]);
  refalrts::alloc_chars(vm, context[26], context[27], "-decompiled.ref", 15);
  refalrts::alloc_close_bracket(vm, context[28]);
  refalrts::alloc_name(vm, context[29], functions[efunc_System]);
  refalrts::alloc_chars(vm, context[30], context[31], "rl-rsl-decompiler ", 18);
  refalrts::alloc_close_call(vm, context[32]);
  refalrts::alloc_open_call(vm, context[33]);
  refalrts::alloc_name(vm, context[34], functions[efunc_ExistFile]);
  refalrts::copy_evar(vm, context[35], context[36], context[2], context[3]);
  refalrts::alloc_chars(vm, context[37], context[38], "-decompiled.ref", 15);
  refalrts::alloc_close_call(vm, context[39]);
  refalrts::alloc_close_call(vm, context[40]);
  refalrts::update_name(context[4], functions[efunc_gen_LoadAST_S3B1]);
  refalrts::update_char(context[8], '-');
  refalrts::update_char(context[7], 'd');
  refalrts::update_char(context[6], 'e');
  refalrts::update_char(context[5], 'c');
  refalrts::reinit_char(context[1], 'o');
  refalrts::reinit_open_call(context[13]);
  refalrts::push_stack( vm, context[40] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[39] );
  refalrts::push_stack( vm, context[33] );
  refalrts::push_stack( vm, context[32] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[23], context[28] );
  refalrts::link_brackets( context[15], context[22] );
  refalrts::link_brackets( context[17], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[32], context[40] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[29], context[31] );
  res = refalrts::splice_evar( res, context[9], context[13] );
  res = refalrts::splice_evar( res, context[20], context[28] );
  res = refalrts::splice_evar( res, context[14], context[1] );
  res = refalrts::splice_evar( res, context[15], context[19] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LoadAST_S3A1("LoadAST$3=1", COOKIE1_, COOKIE2_, func_gen_LoadAST_S3A1);


static refalrts::FnResult func_LoadAST(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 43 elems
  refalrts::Iter context[43];
  refalrts::zeros( context, 43 );
  // </0 & LoadAST/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & LoadAST/4 t.new#1/5 s.new#2/7 e.new#3/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & LoadAST/4 t.Config#1/5 # R5/7 e.SrcName#1/8 >/1
    context[8] = context[2];
    context[9] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_R5], context[7] ) )
      continue;
    // closed e.SrcName#1 as range 8
    //DEBUG: t.Config#1: 5
    //DEBUG: e.SrcName#1: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & LoadAST$1=1/4 AsIs: t.Config#1/5 HalfReuse: (/7 AsIs: e.SrcName#1/8 HalfReuse: )/1 } </10 & Config-GetR5Mode/11 t.Config#1/5/12 >/14 >/15 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_Configm_GetR5Mode]);
    refalrts::copy_evar(vm, context[12], context[13], context[5], context[6]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::alloc_close_call(vm, context[15]);
    refalrts::update_name(context[4], functions[efunc_gen_LoadAST_S1A1]);
    refalrts::reinit_open_bracket(context[7]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[10] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & LoadAST/4 t.Config#1/5 # SR/7 e.SrcName#1/8 >/1
    context[8] = context[2];
    context[9] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_SR], context[7] ) )
      continue;
    // closed e.SrcName#1 as range 8
    //DEBUG: t.Config#1: 5
    //DEBUG: e.SrcName#1: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} t.Config#1/5 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & LoadAST$2=1/4 } (/10 e.SrcName#1/8/11 )/13 </14 Tile{ HalfReuse: & SR-Scan/7 AsIs: e.SrcName#1/8 AsIs: >/1 } >/15 Tile{ ]] }
    refalrts::alloc_open_bracket(vm, context[10]);
    refalrts::copy_evar(vm, context[11], context[12], context[8], context[9]);
    refalrts::alloc_close_bracket(vm, context[13]);
    refalrts::alloc_open_call(vm, context[14]);
    refalrts::alloc_close_call(vm, context[15]);
    refalrts::update_name(context[4], functions[efunc_gen_LoadAST_S2A1]);
    refalrts::reinit_name(context[7], functions[efunc_SRm_Scan]);
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[14] );
    refalrts::link_brackets( context[10], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    res = refalrts::splice_evar( res, context[10], context[14] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & LoadAST/4 t.new#4/5 # RSL/7 e.new#5/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_RSL], context[7] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#5 as range 2
  do {
    // </0 & LoadAST/4 t.Config#1/5 # RSL/7 e.2#0/8 '.'/13 'r'/12 's'/11 'l'/10 >/1
    context[8] = context[2];
    context[9] = context[3];
    context[10] = refalrts::char_right( 'l', context[8], context[9] );
    if( ! context[10] )
      continue;
    context[11] = refalrts::char_right( 's', context[8], context[9] );
    if( ! context[11] )
      continue;
    context[12] = refalrts::char_right( 'r', context[8], context[9] );
    if( ! context[12] )
      continue;
    context[13] = refalrts::char_right( '.', context[8], context[9] );
    if( ! context[13] )
      continue;
    // closed e.2#0 as range 8
    //DEBUG: t.Config#1: 5
    //DEBUG: e.2#0: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & LoadAST$3:1/4 } (/14 # FileRowCol/15 (/16 1/17 1/18 )/19 e.2#0/8/20"-decompiled.ref"/22 )/24 (/25 e.2#0/8/26"-decompiled.ref"/28 )/30 Tile{ AsIs: t.Config#1/5 } </31 & System/32"rl-rsl-decompiler"/33 Tile{ HalfReuse: ' '/7 AsIs: e.2#0/8 AsIs: '.'/13 AsIs: 'r'/12 AsIs: 's'/11 AsIs: 'l'/10 AsIs: >/1 } </35 & ExistFile/36 e.2#0/8/37"-decompiled.ref"/39 >/41 >/42 Tile{ ]] }
    refalrts::alloc_open_bracket(vm, context[14]);
    refalrts::alloc_ident(vm, context[15], identifiers[ident_FileRowCol]);
    refalrts::alloc_open_bracket(vm, context[16]);
    refalrts::alloc_number(vm, context[17], 1UL);
    refalrts::alloc_number(vm, context[18], 1UL);
    refalrts::alloc_close_bracket(vm, context[19]);
    refalrts::copy_evar(vm, context[20], context[21], context[8], context[9]);
    refalrts::alloc_chars(vm, context[22], context[23], "-decompiled.ref", 15);
    refalrts::alloc_close_bracket(vm, context[24]);
    refalrts::alloc_open_bracket(vm, context[25]);
    refalrts::copy_evar(vm, context[26], context[27], context[8], context[9]);
    refalrts::alloc_chars(vm, context[28], context[29], "-decompiled.ref", 15);
    refalrts::alloc_close_bracket(vm, context[30]);
    refalrts::alloc_open_call(vm, context[31]);
    refalrts::alloc_name(vm, context[32], functions[efunc_System]);
    refalrts::alloc_chars(vm, context[33], context[34], "rl-rsl-decompiler", 17);
    refalrts::alloc_open_call(vm, context[35]);
    refalrts::alloc_name(vm, context[36], functions[efunc_ExistFile]);
    refalrts::copy_evar(vm, context[37], context[38], context[8], context[9]);
    refalrts::alloc_chars(vm, context[39], context[40], "-decompiled.ref", 15);
    refalrts::alloc_close_call(vm, context[41]);
    refalrts::alloc_close_call(vm, context[42]);
    refalrts::update_name(context[4], functions[efunc_gen_LoadAST_S3B1]);
    refalrts::reinit_char(context[7], ' ');
    refalrts::push_stack( vm, context[42] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[41] );
    refalrts::push_stack( vm, context[35] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[31] );
    refalrts::link_brackets( context[25], context[30] );
    refalrts::link_brackets( context[14], context[24] );
    refalrts::link_brackets( context[16], context[19] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[35], context[42] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    res = refalrts::splice_evar( res, context[31], context[34] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[14], context[30] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & LoadAST/4 t.Config#1/5 # RSL/7 e.SrcName#1/2 >/1
  // closed e.SrcName#1 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: e.SrcName#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & LoadAST$3=1*1/4 AsIs: t.Config#1/5 HalfReuse: (/7 AsIs: e.SrcName#1/2 HalfReuse: )/1 } e.SrcName#1/2/8 >/10 Tile{ ]] }
  refalrts::copy_evar(vm, context[8], context[9], context[2], context[3]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::update_name(context[4], functions[efunc_gen_LoadAST_S3A1D1]);
  refalrts::reinit_open_bracket(context[7]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_LoadAST("LoadAST", COOKIE1_, COOKIE2_, func_LoadAST);


static refalrts::FnResult func_gen_ResolveIncludes_S3L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & ResolveIncludes$3\1/4 (/7 t.ErrorList#2/9 s.Dialect#2/11 (/14 (/18 e.Name#2/16 )/19 (/22 e.FullPath#2/20 )/23 e.Aliases#2/12 )/15 (/26 e.ScannedAST#2/24 )/27 e.NotScannedAST#2/5 )/8 >/1
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
  context[10] = refalrts::tvar_left( context[9], context[5], context[6] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  context[12] = 0;
  context[13] = 0;
  context[14] = refalrts::brackets_left( context[12], context[13], context[5], context[6] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[14], context[15]);
  context[16] = 0;
  context[17] = 0;
  context[18] = refalrts::brackets_left( context[16], context[17], context[12], context[13] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[18], context[19]);
  context[20] = 0;
  context[21] = 0;
  context[22] = refalrts::brackets_left( context[20], context[21], context[12], context[13] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[22], context[23]);
  context[24] = 0;
  context[25] = 0;
  context[26] = refalrts::brackets_left( context[24], context[25], context[5], context[6] );
  if( ! context[26] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[26], context[27]);
  // closed e.Name#2 as range 16
  // closed e.FullPath#2 as range 20
  // closed e.Aliases#2 as range 12
  // closed e.ScannedAST#2 as range 24
  // closed e.NotScannedAST#2 as range 5
  //DEBUG: t.ErrorList#2: 9
  //DEBUG: s.Dialect#2: 11
  //DEBUG: e.Name#2: 16
  //DEBUG: e.FullPath#2: 20
  //DEBUG: e.Aliases#2: 12
  //DEBUG: e.ScannedAST#2: 24
  //DEBUG: e.NotScannedAST#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ResolveIncludes$3\1/4 {REMOVED TILE} s.Dialect#2/11 (/14 (/18 e.Name#2/16 )/19 {REMOVED TILE} e.Aliases#2/12 )/15 (/26 {REMOVED TILE} )/27 {REMOVED TILE} )/8 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: t.ErrorList#2/9 } Tile{ AsIs: (/22 AsIs: e.FullPath#2/20 AsIs: )/23 } Tile{ AsIs: e.ScannedAST#2/24 } Tile{ AsIs: e.NotScannedAST#2/5 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[7], context[1] );
  refalrts::link_brackets( context[22], context[23] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[24], context[25] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[7], context[10] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ResolveIncludes_S3L1("ResolveIncludes$3\\1", COOKIE1_, COOKIE2_, func_gen_ResolveIncludes_S3L1);


static refalrts::FnResult func_ResolveIncludes(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 68 elems
  refalrts::Iter context[68];
  refalrts::zeros( context, 68 );
  // </0 & ResolveIncludes/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ResolveIncludes/4 t.new#1/5 (/9 e.new#2/7 )/10 e.new#3/2 >/1
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
    // </0 & ResolveIncludes/4 t.Config#1/5 (/9 e.BadIncludes-B#1/15 (/23 e.IncludeName#1/21 )/24 e.BadIncludes-E#1/17 )/10 e.Units-B#1/25 (/31 t.ErrorList#1/33 s.Dialect#1/35 (/38 e.Aliases#1/36 )/39 (/42 e.ScannedAST#1/40 )/43 e.AST-B#1/44 (/50 # Include/52 t.SrcPos#1/55 e.IncludeName#1/53 )/51 e.AST-E#1/46 )/32 e.Units-E#1/27 >/1
    context[11] = context[7];
    context[12] = context[8];
    context[13] = context[2];
    context[14] = context[3];
    context[15] = 0;
    context[16] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[17] = context[11];
      context[18] = context[12];
      context[19] = context[13];
      context[20] = context[14];
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[17], context[18] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      // closed e.IncludeName#1 as range 21
      // closed e.BadIncludes-E#1 as range 17
      context[25] = 0;
      context[26] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[27] = context[19];
        context[28] = context[20];
        context[29] = 0;
        context[30] = 0;
        context[31] = refalrts::brackets_left( context[29], context[30], context[27], context[28] );
        if( ! context[31] )
          continue;
        refalrts::bracket_pointers(context[31], context[32]);
        // closed e.Units-E#1 as range 27
        context[34] = refalrts::tvar_left( context[33], context[29], context[30] );
        if( ! context[34] )
          continue;
        if( ! refalrts::svar_left( context[35], context[29], context[30] ) )
          continue;
        context[36] = 0;
        context[37] = 0;
        context[38] = refalrts::brackets_left( context[36], context[37], context[29], context[30] );
        if( ! context[38] )
          continue;
        refalrts::bracket_pointers(context[38], context[39]);
        context[40] = 0;
        context[41] = 0;
        context[42] = refalrts::brackets_left( context[40], context[41], context[29], context[30] );
        if( ! context[42] )
          continue;
        refalrts::bracket_pointers(context[42], context[43]);
        // closed e.Aliases#1 as range 36
        // closed e.ScannedAST#1 as range 40
        context[44] = 0;
        context[45] = 0;
        refalrts::start_e_loop(vm);
        do {
          context[46] = context[29];
          context[47] = context[30];
          context[48] = 0;
          context[49] = 0;
          context[50] = refalrts::brackets_left( context[48], context[49], context[46], context[47] );
          if( ! context[50] )
            continue;
          refalrts::bracket_pointers(context[50], context[51]);
          context[52] = refalrts::ident_left( identifiers[ident_Include], context[48], context[49] );
          if( ! context[52] )
            continue;
          if( ! refalrts::repeated_evar_right( vm, context[53], context[54], context[21], context[22], context[48], context[49] ) )
            continue;
          // closed e.AST-E#1 as range 46
          context[56] = refalrts::tvar_left( context[55], context[48], context[49] );
          if( ! context[56] )
            continue;
          if( ! refalrts::empty_seq( context[48], context[49] ) )
            continue;
          //DEBUG: t.Config#1: 5
          //DEBUG: e.BadIncludes-B#1: 15
          //DEBUG: e.IncludeName#1: 21
          //DEBUG: e.BadIncludes-E#1: 17
          //DEBUG: e.Units-B#1: 25
          //DEBUG: e.Units-E#1: 27
          //DEBUG: t.ErrorList#1: 33
          //DEBUG: s.Dialect#1: 35
          //DEBUG: e.Aliases#1: 36
          //DEBUG: e.ScannedAST#1: 40
          //DEBUG: e.AST-B#1: 44
          //DEBUG: e.AST-E#1: 46
          //DEBUG: t.SrcPos#1: 55

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & ResolveIncludes/4 AsIs: t.Config#1/5 AsIs: (/9 AsIs: e.BadIncludes-B#1/15 AsIs: (/23 AsIs: e.IncludeName#1/21 AsIs: )/24 AsIs: e.BadIncludes-E#1/17 AsIs: )/10 AsIs: e.Units-B#1/25 AsIs: (/31 } </57 & EL-AddErrorAt/58 Tile{ AsIs: t.ErrorList#1/33 } t.SrcPos#1/55/59"Include file \""/61 Tile{ AsIs: e.IncludeName#1/53 }"\" is not found"/63 >/65 Tile{ AsIs: s.Dialect#1/35 AsIs: (/38 AsIs: e.Aliases#1/36 AsIs: )/39 AsIs: (/42 } Tile{ AsIs: e.ScannedAST#1/40 } Tile{ AsIs: e.AST-B#1/44 } Tile{ AsIs: (/50 AsIs: # Include/52 AsIs: t.SrcPos#1/55 } e.IncludeName#1/53/66 Tile{ AsIs: )/43 } Tile{ AsIs: )/51 AsIs: e.AST-E#1/46 AsIs: )/32 AsIs: e.Units-E#1/27 AsIs: >/1 ]] }
          refalrts::alloc_open_call(vm, context[57]);
          refalrts::alloc_name(vm, context[58], functions[efunc_ELm_AddErrorAt]);
          refalrts::copy_evar(vm, context[59], context[60], context[55], context[56]);
          refalrts::alloc_chars(vm, context[61], context[62], "Include file \"", 14);
          refalrts::alloc_chars(vm, context[63], context[64], "\" is not found", 14);
          refalrts::alloc_close_call(vm, context[65]);
          refalrts::copy_evar(vm, context[66], context[67], context[53], context[54]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[31], context[32] );
          refalrts::link_brackets( context[42], context[51] );
          refalrts::link_brackets( context[50], context[43] );
          refalrts::link_brackets( context[38], context[39] );
          refalrts::push_stack( vm, context[65] );
          refalrts::push_stack( vm, context[57] );
          refalrts::link_brackets( context[9], context[10] );
          refalrts::link_brackets( context[23], context[24] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[51];
          res = refalrts::splice_evar( res, context[43], context[43] );
          res = refalrts::splice_evar( res, context[66], context[67] );
          res = refalrts::splice_evar( res, context[50], context[56] );
          res = refalrts::splice_evar( res, context[44], context[45] );
          res = refalrts::splice_evar( res, context[40], context[41] );
          res = refalrts::splice_evar( res, context[35], context[42] );
          res = refalrts::splice_evar( res, context[63], context[65] );
          res = refalrts::splice_evar( res, context[53], context[54] );
          res = refalrts::splice_evar( res, context[59], context[62] );
          res = refalrts::splice_evar( res, context[33], context[34] );
          res = refalrts::splice_evar( res, context[57], context[58] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( refalrts::open_evar_advance( context[44], context[45], context[29], context[30] ) );
      } while ( refalrts::open_evar_advance( context[25], context[26], context[19], context[20] ) );
    } while ( refalrts::open_evar_advance( context[15], context[16], context[11], context[12] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ResolveIncludes/4 t.Config#1/5 (/9 e.BadIncludes#1/11 )/10 e.Units-B#1/15 (/21 t.ErrorList#1/23 s.Dialect#1/25 (/28 e.Aliases#1/26 )/29 (/32 e.ScannedAST#1/30 )/33 e.AST-B#1/34 (/40 # Include/42 t.SrcPos#1/43 e.IncludeName#1/38 )/41 e.AST-E#1/36 )/22 e.Units-E#1/17 >/1
    context[11] = context[7];
    context[12] = context[8];
    context[13] = context[2];
    context[14] = context[3];
    // closed e.BadIncludes#1 as range 11
    context[15] = 0;
    context[16] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[17] = context[13];
      context[18] = context[14];
      context[19] = 0;
      context[20] = 0;
      context[21] = refalrts::brackets_left( context[19], context[20], context[17], context[18] );
      if( ! context[21] )
        continue;
      refalrts::bracket_pointers(context[21], context[22]);
      // closed e.Units-E#1 as range 17
      context[24] = refalrts::tvar_left( context[23], context[19], context[20] );
      if( ! context[24] )
        continue;
      if( ! refalrts::svar_left( context[25], context[19], context[20] ) )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[19], context[20] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = 0;
      context[31] = 0;
      context[32] = refalrts::brackets_left( context[30], context[31], context[19], context[20] );
      if( ! context[32] )
        continue;
      refalrts::bracket_pointers(context[32], context[33]);
      // closed e.Aliases#1 as range 26
      // closed e.ScannedAST#1 as range 30
      context[34] = 0;
      context[35] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[36] = context[19];
        context[37] = context[20];
        context[38] = 0;
        context[39] = 0;
        context[40] = refalrts::brackets_left( context[38], context[39], context[36], context[37] );
        if( ! context[40] )
          continue;
        refalrts::bracket_pointers(context[40], context[41]);
        context[42] = refalrts::ident_left( identifiers[ident_Include], context[38], context[39] );
        if( ! context[42] )
          continue;
        // closed e.AST-E#1 as range 36
        context[44] = refalrts::tvar_left( context[43], context[38], context[39] );
        if( ! context[44] )
          continue;
        // closed e.IncludeName#1 as range 38
        //DEBUG: t.Config#1: 5
        //DEBUG: e.BadIncludes#1: 11
        //DEBUG: e.Units-B#1: 15
        //DEBUG: e.Units-E#1: 17
        //DEBUG: t.ErrorList#1: 23
        //DEBUG: s.Dialect#1: 25
        //DEBUG: e.Aliases#1: 26
        //DEBUG: e.ScannedAST#1: 30
        //DEBUG: e.AST-B#1: 34
        //DEBUG: e.AST-E#1: 36
        //DEBUG: t.SrcPos#1: 43
        //DEBUG: e.IncludeName#1: 38

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & ResolveIncludes-CheckAlias/4 AsIs: t.Config#1/5 AsIs: (/9 AsIs: e.BadIncludes#1/11 AsIs: )/10 } (/45 Tile{ AsIs: e.Units-B#1/15 } Tile{ AsIs: )/33 } (/46 Tile{ AsIs: (/21 AsIs: t.ErrorList#1/23 AsIs: s.Dialect#1/25 AsIs: (/28 AsIs: e.Aliases#1/26 AsIs: )/29 AsIs: (/32 } Tile{ AsIs: e.ScannedAST#1/30 } Tile{ AsIs: e.AST-B#1/34 } Tile{ AsIs: (/40 AsIs: # Include/42 AsIs: t.SrcPos#1/43 AsIs: e.IncludeName#1/38 AsIs: )/41 } Tile{ AsIs: )/22 } Tile{ AsIs: e.AST-E#1/36 } )/47 )/48 (/49 Tile{ AsIs: e.Units-E#1/17 } )/50 (/51 e.IncludeName#1/38/52 )/54 Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[45]);
        refalrts::alloc_open_bracket(vm, context[46]);
        refalrts::alloc_close_bracket(vm, context[47]);
        refalrts::alloc_close_bracket(vm, context[48]);
        refalrts::alloc_open_bracket(vm, context[49]);
        refalrts::alloc_close_bracket(vm, context[50]);
        refalrts::alloc_open_bracket(vm, context[51]);
        refalrts::copy_evar(vm, context[52], context[53], context[38], context[39]);
        refalrts::alloc_close_bracket(vm, context[54]);
        refalrts::update_name(context[4], functions[efunc_ResolveIncludesm_CheckAlias]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[51], context[54] );
        refalrts::link_brackets( context[49], context[50] );
        refalrts::link_brackets( context[46], context[48] );
        refalrts::link_brackets( context[21], context[47] );
        refalrts::link_brackets( context[32], context[22] );
        refalrts::link_brackets( context[40], context[41] );
        refalrts::link_brackets( context[28], context[29] );
        refalrts::link_brackets( context[45], context[33] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[50], context[54] );
        res = refalrts::splice_evar( res, context[17], context[18] );
        res = refalrts::splice_evar( res, context[47], context[49] );
        res = refalrts::splice_evar( res, context[36], context[37] );
        res = refalrts::splice_evar( res, context[22], context[22] );
        res = refalrts::splice_evar( res, context[40], context[41] );
        res = refalrts::splice_evar( res, context[34], context[35] );
        res = refalrts::splice_evar( res, context[30], context[31] );
        res = refalrts::splice_evar( res, context[21], context[32] );
        res = refalrts::splice_evar( res, context[46], context[46] );
        res = refalrts::splice_evar( res, context[33], context[33] );
        res = refalrts::splice_evar( res, context[15], context[16] );
        res = refalrts::splice_evar( res, context[45], context[45] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[34], context[35], context[19], context[20] ) );
    } while ( refalrts::open_evar_advance( context[15], context[16], context[13], context[14] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ResolveIncludes/4 t.Config#1/5 (/9 e.BadIncludes#1/7 )/10 e.Units#1/2 >/1
  // closed e.BadIncludes#1 as range 7
  // closed e.Units#1 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: e.BadIncludes#1: 7
  //DEBUG: e.Units#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} & ResolveIncludes/4 t.Config#1/5 (/9 e.BadIncludes#1/7 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & Map@2/10 AsIs: e.Units#1/2 AsIs: >/1 ]] }
  refalrts::reinit_name(context[10], functions[efunc_gen_Map_Z2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[10];
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ResolveIncludes("ResolveIncludes", COOKIE1_, COOKIE2_, func_ResolveIncludes);


static refalrts::FnResult func_ResolveIncludesm_CheckAlias(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 59 elems
  refalrts::Iter context[59];
  refalrts::zeros( context, 59 );
  // </0 & ResolveIncludes-CheckAlias/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ResolveIncludes-CheckAlias/4 t.new#1/9 (/13 e.new#2/11 )/14 e.new#3/2 (/7 e.new#4/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#4 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.new#2 as range 11
  // closed e.new#3 as range 2
  do {
    // </0 & ResolveIncludes-CheckAlias/4 t.Config#1/9 (/13 e.BadIncludes#1/15 )/14 e.Groups-B#1/21 (/27 e.Units-B#1/29 (/35 t.ErrorList#1/37 s.Dialect#1/39 (/42 e.Aliases-B#1/48 (/54 e.IncludeName#1/56 )/55 e.Aliases-E#1/50 )/43 (/46 e.ScannedAST#1/44 )/47 e.NotScannedAST#1/33 )/36 e.Units-E#1/31 )/28 e.Groups-E#1/23 (/7 e.IncludeName#1/19 )/8 >/1
    context[15] = context[11];
    context[16] = context[12];
    context[17] = context[2];
    context[18] = context[3];
    context[19] = context[5];
    context[20] = context[6];
    // closed e.BadIncludes#1 as range 15
    // closed e.IncludeName#1 as range 19
    context[21] = 0;
    context[22] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[23] = context[17];
      context[24] = context[18];
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[23], context[24] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      // closed e.Groups-E#1 as range 23
      context[29] = 0;
      context[30] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[31] = context[25];
        context[32] = context[26];
        context[33] = 0;
        context[34] = 0;
        context[35] = refalrts::brackets_left( context[33], context[34], context[31], context[32] );
        if( ! context[35] )
          continue;
        refalrts::bracket_pointers(context[35], context[36]);
        // closed e.Units-E#1 as range 31
        context[38] = refalrts::tvar_left( context[37], context[33], context[34] );
        if( ! context[38] )
          continue;
        if( ! refalrts::svar_left( context[39], context[33], context[34] ) )
          continue;
        context[40] = 0;
        context[41] = 0;
        context[42] = refalrts::brackets_left( context[40], context[41], context[33], context[34] );
        if( ! context[42] )
          continue;
        refalrts::bracket_pointers(context[42], context[43]);
        context[44] = 0;
        context[45] = 0;
        context[46] = refalrts::brackets_left( context[44], context[45], context[33], context[34] );
        if( ! context[46] )
          continue;
        refalrts::bracket_pointers(context[46], context[47]);
        // closed e.ScannedAST#1 as range 44
        // closed e.NotScannedAST#1 as range 33
        context[48] = 0;
        context[49] = 0;
        refalrts::start_e_loop(vm);
        do {
          context[50] = context[40];
          context[51] = context[41];
          context[52] = 0;
          context[53] = 0;
          context[54] = refalrts::brackets_left( context[52], context[53], context[50], context[51] );
          if( ! context[54] )
            continue;
          refalrts::bracket_pointers(context[54], context[55]);
          if( ! refalrts::repeated_evar_left( vm, context[56], context[57], context[19], context[20], context[52], context[53] ) )
            continue;
          if( ! refalrts::empty_seq( context[52], context[53] ) )
            continue;
          // closed e.Aliases-E#1 as range 50
          //DEBUG: t.Config#1: 9
          //DEBUG: e.BadIncludes#1: 15
          //DEBUG: e.IncludeName#1: 19
          //DEBUG: e.Groups-B#1: 21
          //DEBUG: e.Groups-E#1: 23
          //DEBUG: e.Units-B#1: 29
          //DEBUG: e.Units-E#1: 31
          //DEBUG: t.ErrorList#1: 37
          //DEBUG: s.Dialect#1: 39
          //DEBUG: e.ScannedAST#1: 44
          //DEBUG: e.NotScannedAST#1: 33
          //DEBUG: e.Aliases-B#1: 48
          //DEBUG: e.Aliases-E#1: 50

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.IncludeName#1/19 {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & ResolveIncludes/4 AsIs: t.Config#1/9 AsIs: (/13 } Tile{ AsIs: e.BadIncludes#1/15 } Tile{ AsIs: )/8 } </58 Tile{ HalfReuse: & Map@3/14 AsIs: e.Groups-B#1/21 AsIs: (/27 AsIs: e.Units-B#1/29 AsIs: (/35 AsIs: t.ErrorList#1/37 AsIs: s.Dialect#1/39 AsIs: (/42 AsIs: e.Aliases-B#1/48 AsIs: (/54 AsIs: e.IncludeName#1/56 AsIs: )/55 AsIs: e.Aliases-E#1/50 AsIs: )/43 AsIs: (/46 AsIs: e.ScannedAST#1/44 AsIs: )/47 AsIs: e.NotScannedAST#1/33 AsIs: )/36 AsIs: e.Units-E#1/31 AsIs: )/28 AsIs: e.Groups-E#1/23 HalfReuse: >/7 } Tile{ AsIs: >/1 ]] }
          refalrts::alloc_open_call(vm, context[58]);
          refalrts::update_name(context[4], functions[efunc_ResolveIncludes]);
          refalrts::reinit_name(context[14], functions[efunc_gen_Map_Z3]);
          refalrts::reinit_close_call(context[7]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[7] );
          refalrts::push_stack( vm, context[58] );
          refalrts::link_brackets( context[27], context[28] );
          refalrts::link_brackets( context[35], context[36] );
          refalrts::link_brackets( context[46], context[47] );
          refalrts::link_brackets( context[42], context[43] );
          refalrts::link_brackets( context[54], context[55] );
          refalrts::link_brackets( context[13], context[8] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[14], context[7] );
          res = refalrts::splice_evar( res, context[58], context[58] );
          res = refalrts::splice_evar( res, context[8], context[8] );
          res = refalrts::splice_evar( res, context[15], context[16] );
          refalrts::splice_to_freelist_open( vm, context[13], res );
          return refalrts::cSuccess;
        } while ( refalrts::open_evar_advance( context[48], context[49], context[40], context[41] ) );
      } while ( refalrts::open_evar_advance( context[29], context[30], context[25], context[26] ) );
    } while ( refalrts::open_evar_advance( context[21], context[22], context[17], context[18] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ResolveIncludes-CheckAlias/4 t.Config#1/9 (/13 e.BadIncludes#1/11 )/14 (/17 e.Units-B#1/15 )/18 (/21 t.CheckedUnit#1/27 )/22 (/25 e.Units-E#1/23 )/26 (/7 e.IncludeName#1/5 )/8 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.BadIncludes#1 as range 11
  // closed e.Units-B#1 as range 15
  // closed e.Units-E#1 as range 23
  // closed e.IncludeName#1 as range 5
  context[28] = refalrts::tvar_left( context[27], context[19], context[20] );
  if( ! context[28] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[19], context[20] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Config#1: 9
  //DEBUG: e.BadIncludes#1: 11
  //DEBUG: e.Units-B#1: 15
  //DEBUG: e.Units-E#1: 23
  //DEBUG: e.IncludeName#1: 5
  //DEBUG: t.CheckedUnit#1: 27

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ResolveIncludes-CheckValid/4 AsIs: t.Config#1/9 AsIs: (/13 AsIs: e.BadIncludes#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.Units-B#1/15 AsIs: )/18 AsIs: (/21 AsIs: t.CheckedUnit#1/27 AsIs: )/22 AsIs: (/25 AsIs: e.Units-E#1/23 AsIs: )/26 AsIs: (/7 AsIs: e.IncludeName#1/5 AsIs: )/8 HalfReuse: </1 } & FindInclude/29 (/30 </31 & Config-GetSearchFolders/32 t.Config#1/9/33 >/35 )/36 e.IncludeName#1/5/37 >/39 >/40 Tile{ ]] }
  refalrts::alloc_name(vm, context[29], functions[efunc_FindInclude]);
  refalrts::alloc_open_bracket(vm, context[30]);
  refalrts::alloc_open_call(vm, context[31]);
  refalrts::alloc_name(vm, context[32], functions[efunc_Configm_GetSearchFolders]);
  refalrts::copy_evar(vm, context[33], context[34], context[9], context[10]);
  refalrts::alloc_close_call(vm, context[35]);
  refalrts::alloc_close_bracket(vm, context[36]);
  refalrts::copy_evar(vm, context[37], context[38], context[5], context[6]);
  refalrts::alloc_close_call(vm, context[39]);
  refalrts::alloc_close_call(vm, context[40]);
  refalrts::update_name(context[4], functions[efunc_ResolveIncludesm_CheckValid]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[40] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[39] );
  refalrts::push_stack( vm, context[1] );
  refalrts::link_brackets( context[30], context[36] );
  refalrts::push_stack( vm, context[35] );
  refalrts::push_stack( vm, context[31] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[25], context[26] );
  refalrts::link_brackets( context[21], context[22] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[29], context[40] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ResolveIncludesm_CheckAlias("ResolveIncludes-CheckAlias", COOKIE1_, COOKIE2_, func_ResolveIncludesm_CheckAlias);


static refalrts::FnResult func_ResolveIncludesm_CheckValid(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 64 elems
  refalrts::Iter context[64];
  refalrts::zeros( context, 64 );
  // </0 & ResolveIncludes-CheckValid/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ResolveIncludes-CheckValid/4 t.new#1/5 (/9 e.new#2/7 )/10 (/13 e.new#3/11 )/14 (/17 t.new#4/28 )/18 (/21 e.new#5/19 )/22 (/25 e.new#6/23 )/26 s.new#7/27 e.new#8/2 >/1
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
  // closed e.new#2 as range 7
  // closed e.new#3 as range 11
  // closed e.new#5 as range 19
  // closed e.new#6 as range 23
  if( ! refalrts::svar_left( context[27], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#8 as range 2
  context[29] = refalrts::tvar_left( context[28], context[15], context[16] );
  if( ! context[29] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[15], context[16] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ResolveIncludes-CheckValid/4 t.Config#1/5 (/9 e.BadIncludes#1/30 )/10 (/13 e.Units-B#1/32 )/14 (/17 t.CheckedUnit#1/28 )/18 (/21 e.Units-E#1/34 )/22 (/25 e.IncludeName#1/36 )/26 # Success/27 s.Dialect#1/40 e.FullPath#1/38 >/1
    context[30] = context[7];
    context[31] = context[8];
    context[32] = context[11];
    context[33] = context[12];
    context[34] = context[19];
    context[35] = context[20];
    context[36] = context[23];
    context[37] = context[24];
    context[38] = context[2];
    context[39] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Success], context[27] ) )
      continue;
    // closed e.BadIncludes#1 as range 30
    // closed e.Units-B#1 as range 32
    // closed e.Units-E#1 as range 34
    // closed e.IncludeName#1 as range 36
    if( ! refalrts::svar_left( context[40], context[38], context[39] ) )
      continue;
    // closed e.FullPath#1 as range 38
    //DEBUG: t.Config#1: 5
    //DEBUG: t.CheckedUnit#1: 28
    //DEBUG: e.BadIncludes#1: 30
    //DEBUG: e.Units-B#1: 32
    //DEBUG: e.Units-E#1: 34
    //DEBUG: e.IncludeName#1: 36
    //DEBUG: s.Dialect#1: 40
    //DEBUG: e.FullPath#1: 38

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ResolveIncludes-CheckEqualAST/4 AsIs: t.Config#1/5 AsIs: (/9 AsIs: e.BadIncludes#1/30 AsIs: )/10 AsIs: (/13 AsIs: e.Units-B#1/32 AsIs: )/14 AsIs: (/17 AsIs: t.CheckedUnit#1/28 AsIs: )/18 AsIs: (/21 AsIs: e.Units-E#1/34 AsIs: )/22 HalfReuse: s.Dialect1 #40/25 } (/41 Tile{ AsIs: e.IncludeName#1/36 } )/42 (/43 e.FullPath#1/38/44 Tile{ AsIs: )/26 HalfReuse: (/27 } </46 & LoadAST/47 t.Config#1/5/48 Tile{ AsIs: s.Dialect#1/40 AsIs: e.FullPath#1/38 AsIs: >/1 } )/50 >/51 Tile{ ]] }
    refalrts::alloc_open_bracket(vm, context[41]);
    refalrts::alloc_close_bracket(vm, context[42]);
    refalrts::alloc_open_bracket(vm, context[43]);
    refalrts::copy_evar(vm, context[44], context[45], context[38], context[39]);
    refalrts::alloc_open_call(vm, context[46]);
    refalrts::alloc_name(vm, context[47], functions[efunc_LoadAST]);
    refalrts::copy_evar(vm, context[48], context[49], context[5], context[6]);
    refalrts::alloc_close_bracket(vm, context[50]);
    refalrts::alloc_close_call(vm, context[51]);
    refalrts::update_name(context[4], functions[efunc_ResolveIncludesm_CheckEqualAST]);
    refalrts::reinit_svar( context[25], context[40] );
    refalrts::reinit_open_bracket(context[27]);
    refalrts::push_stack( vm, context[51] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[27], context[50] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[46] );
    refalrts::link_brackets( context[43], context[26] );
    refalrts::link_brackets( context[41], context[42] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[50], context[51] );
    res = refalrts::splice_evar( res, context[40], context[1] );
    res = refalrts::splice_evar( res, context[46], context[49] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[44], context[45] );
    res = refalrts::splice_evar( res, context[42], context[43] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    res = refalrts::splice_evar( res, context[41], context[41] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ResolveIncludes-CheckValid/4 t.Config#1/5 (/9 e.BadIncludes#1/7 )/10 (/13 e.Units-B#1/11 )/14 (/17 (/28 t.ErrorList#1/32 s.Dialect#1/34 (/37 e.Aliases#1/35 )/38 (/41 e.ScannedAST#1/39 (/45 # Include/47 t.SrcPos#1/50 e.IncludeName#1/48 )/46 )/42 e.NotScannedAST#1/30 )/29 )/18 (/21 e.Units-E#1/19 )/22 (/25 e.IncludeName#1/23 )/26 # Fails/27 >/1
  context[30] = 0;
  context[31] = 0;
  if( ! refalrts::brackets_term( context[30], context[31], context[28] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::ident_term( identifiers[ident_Fails], context[27] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.BadIncludes#1 as range 7
  // closed e.Units-B#1 as range 11
  // closed e.Units-E#1 as range 19
  // closed e.IncludeName#1 as range 23
  context[33] = refalrts::tvar_left( context[32], context[30], context[31] );
  if( ! context[33] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[34], context[30], context[31] ) )
    return refalrts::cRecognitionImpossible;
  context[35] = 0;
  context[36] = 0;
  context[37] = refalrts::brackets_left( context[35], context[36], context[30], context[31] );
  if( ! context[37] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[37], context[38]);
  context[39] = 0;
  context[40] = 0;
  context[41] = refalrts::brackets_left( context[39], context[40], context[30], context[31] );
  if( ! context[41] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[41], context[42]);
  context[43] = 0;
  context[44] = 0;
  context[45] = refalrts::brackets_right( context[43], context[44], context[39], context[40] );
  if( ! context[45] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[45], context[46]);
  context[47] = refalrts::ident_left( identifiers[ident_Include], context[43], context[44] );
  if( ! context[47] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::repeated_evar_right( vm, context[48], context[49], context[23], context[24], context[43], context[44] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Aliases#1 as range 35
  // closed e.ScannedAST#1 as range 39
  // closed e.NotScannedAST#1 as range 30
  context[51] = refalrts::tvar_left( context[50], context[43], context[44] );
  if( ! context[51] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[43], context[44] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Config#1: 5
  //DEBUG: e.BadIncludes#1: 7
  //DEBUG: e.Units-B#1: 11
  //DEBUG: e.Units-E#1: 19
  //DEBUG: e.IncludeName#1: 23
  //DEBUG: t.ErrorList#1: 32
  //DEBUG: s.Dialect#1: 34
  //DEBUG: e.Aliases#1: 35
  //DEBUG: e.ScannedAST#1: 39
  //DEBUG: e.NotScannedAST#1: 30
  //DEBUG: t.SrcPos#1: 50

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ResolveIncludes/4 AsIs: t.Config#1/5 AsIs: (/9 AsIs: e.BadIncludes#1/7 HalfReuse: (/10 } e.IncludeName#1/48/52 Tile{ AsIs: )/18 } Tile{ HalfReuse: )/13 AsIs: e.Units-B#1/11 HalfReuse: (/14 HalfReuse: </17 HalfReuse: & EL-AddErrorAt/28 AsIs: t.ErrorList#1/32 } t.SrcPos#1/50/54"Inc"/56 Tile{ HalfReuse: 'l'/21 }"ude file"/58 Tile{ HalfReuse: ' '/22 HalfReuse: '\"'/25 AsIs: e.IncludeName#1/23 HalfReuse: '\"'/26 HalfReuse: ' '/27 HalfReuse: 'i'/1 }"s not found"/60 >/62 Tile{ AsIs: s.Dialect#1/34 AsIs: (/37 AsIs: e.Aliases#1/35 AsIs: )/38 AsIs: (/41 AsIs: e.ScannedAST#1/39 AsIs: (/45 AsIs: # Include/47 AsIs: t.SrcPos#1/50 AsIs: e.IncludeName#1/48 AsIs: )/46 AsIs: )/42 AsIs: e.NotScannedAST#1/30 AsIs: )/29 } Tile{ AsIs: e.Units-E#1/19 } >/63 Tile{ ]] }
  refalrts::copy_evar(vm, context[52], context[53], context[48], context[49]);
  refalrts::copy_evar(vm, context[54], context[55], context[50], context[51]);
  refalrts::alloc_chars(vm, context[56], context[57], "Inc", 3);
  refalrts::alloc_chars(vm, context[58], context[59], "ude file", 8);
  refalrts::alloc_chars(vm, context[60], context[61], "s not found", 11);
  refalrts::alloc_close_call(vm, context[62]);
  refalrts::alloc_close_call(vm, context[63]);
  refalrts::update_name(context[4], functions[efunc_ResolveIncludes]);
  refalrts::reinit_open_bracket(context[10]);
  refalrts::reinit_close_bracket(context[13]);
  refalrts::reinit_open_bracket(context[14]);
  refalrts::reinit_open_call(context[17]);
  refalrts::reinit_name(context[28], functions[efunc_ELm_AddErrorAt]);
  refalrts::reinit_char(context[21], 'l');
  refalrts::reinit_char(context[22], ' ');
  refalrts::reinit_char(context[25], '\"');
  refalrts::reinit_char(context[26], '\"');
  refalrts::reinit_char(context[27], ' ');
  refalrts::reinit_char(context[1], 'i');
  refalrts::push_stack( vm, context[63] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[14], context[29] );
  refalrts::link_brackets( context[41], context[42] );
  refalrts::link_brackets( context[45], context[46] );
  refalrts::link_brackets( context[37], context[38] );
  refalrts::push_stack( vm, context[62] );
  refalrts::push_stack( vm, context[17] );
  refalrts::link_brackets( context[9], context[13] );
  refalrts::link_brackets( context[10], context[18] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[63], context[63] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[34], context[29] );
  res = refalrts::splice_evar( res, context[60], context[62] );
  res = refalrts::splice_evar( res, context[22], context[1] );
  res = refalrts::splice_evar( res, context[58], context[59] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[54], context[57] );
  res = refalrts::splice_evar( res, context[13], context[33] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[52], context[53] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ResolveIncludesm_CheckValid("ResolveIncludes-CheckValid", COOKIE1_, COOKIE2_, func_ResolveIncludesm_CheckValid);


static refalrts::FnResult func_ResolveIncludesm_CheckEqualAST(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 72 elems
  refalrts::Iter context[72];
  refalrts::zeros( context, 72 );
  // </0 & ResolveIncludes-CheckEqualAST/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ResolveIncludes-CheckEqualAST/4 t.new#1/17 (/21 e.new#2/19 )/22 e.new#3/2 s.new#4/25 (/15 e.new#5/13 )/16 (/11 e.new#6/9 )/12 (/7 t.new#7/23 e.new#8/5 )/8 >/1
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
  // closed e.new#5 as range 13
  // closed e.new#6 as range 9
  context[18] = refalrts::tvar_left( context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  context[19] = 0;
  context[20] = 0;
  context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[21], context[22]);
  // closed e.new#2 as range 19
  context[24] = refalrts::tvar_left( context[23], context[5], context[6] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#8 as range 5
  if( ! refalrts::svar_right( context[25], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & ResolveIncludes-CheckEqualAST/4 t.Config#1/17 (/21 e.BadIncludes#1/26 )/22 e.Groups-B#1/36 (/44 e.Units-B#1/46 (/54 t.ErrorList#1/56 s.Dialect#1/58 (/61 e.Aliases#1/59 )/62 (/65 e.ScannedAST#1/63 )/66 e.NotScannedAST#1/52 )/55 e.Units-E#1/48 )/45 e.Groups-E#1/38 s.Dialect#1/25 (/15 e.IncludeName#1/30 )/16 (/11 e.FullPath#1/32 )/12 (/7 t.NewErrorList#1/23 e.ScannedAST#1/67 e.NotScannedAST#1/69 )/8 >/1
    context[26] = context[19];
    context[27] = context[20];
    context[28] = context[2];
    context[29] = context[3];
    context[30] = context[13];
    context[31] = context[14];
    context[32] = context[9];
    context[33] = context[10];
    context[34] = context[5];
    context[35] = context[6];
    // closed e.BadIncludes#1 as range 26
    // closed e.IncludeName#1 as range 30
    // closed e.FullPath#1 as range 32
    context[36] = 0;
    context[37] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[38] = context[28];
      context[39] = context[29];
      context[40] = context[34];
      context[41] = context[35];
      context[42] = 0;
      context[43] = 0;
      context[44] = refalrts::brackets_left( context[42], context[43], context[38], context[39] );
      if( ! context[44] )
        continue;
      refalrts::bracket_pointers(context[44], context[45]);
      // closed e.Groups-E#1 as range 38
      context[46] = 0;
      context[47] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[48] = context[42];
        context[49] = context[43];
        context[50] = context[40];
        context[51] = context[41];
        context[52] = 0;
        context[53] = 0;
        context[54] = refalrts::brackets_left( context[52], context[53], context[48], context[49] );
        if( ! context[54] )
          continue;
        refalrts::bracket_pointers(context[54], context[55]);
        // closed e.Units-E#1 as range 48
        context[57] = refalrts::tvar_left( context[56], context[52], context[53] );
        if( ! context[57] )
          continue;
        if( ! refalrts::repeated_stvar_left( vm, context[58], context[25], context[52], context[53] ) )
          continue;
        context[59] = 0;
        context[60] = 0;
        context[61] = refalrts::brackets_left( context[59], context[60], context[52], context[53] );
        if( ! context[61] )
          continue;
        refalrts::bracket_pointers(context[61], context[62]);
        context[63] = 0;
        context[64] = 0;
        context[65] = refalrts::brackets_left( context[63], context[64], context[52], context[53] );
        if( ! context[65] )
          continue;
        refalrts::bracket_pointers(context[65], context[66]);
        // closed e.Aliases#1 as range 59
        // closed e.ScannedAST#1 as range 63
        if( ! refalrts::repeated_evar_left( vm, context[67], context[68], context[63], context[64], context[50], context[51] ) )
          continue;
        // closed e.NotScannedAST#1 as range 52
        if( ! refalrts::repeated_evar_left( vm, context[69], context[70], context[52], context[53], context[50], context[51] ) )
          continue;
        if( ! refalrts::empty_seq( context[50], context[51] ) )
          continue;
        //DEBUG: t.Config#1: 17
        //DEBUG: t.NewErrorList#1: 23
        //DEBUG: s.Dialect#1: 25
        //DEBUG: e.BadIncludes#1: 26
        //DEBUG: e.IncludeName#1: 30
        //DEBUG: e.FullPath#1: 32
        //DEBUG: e.Groups-B#1: 36
        //DEBUG: e.Groups-E#1: 38
        //DEBUG: e.Units-B#1: 46
        //DEBUG: e.Units-E#1: 48
        //DEBUG: t.ErrorList#1: 56
        //DEBUG: e.Aliases#1: 59
        //DEBUG: e.ScannedAST#1: 63
        //DEBUG: e.NotScannedAST#1: 52

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Dialect#1/25 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.NewErrorList#1/23 e.ScannedAST#1/67 e.NotScannedAST#1/69 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & ResolveIncludes/4 AsIs: t.Config#1/17 AsIs: (/21 } Tile{ AsIs: e.BadIncludes#1/26 } )/71 Tile{ HalfReuse: </15 } Tile{ HalfReuse: & Map@3/22 AsIs: e.Groups-B#1/36 AsIs: (/44 AsIs: e.Units-B#1/46 AsIs: (/54 AsIs: t.ErrorList#1/56 AsIs: s.Dialect#1/58 AsIs: (/61 AsIs: e.Aliases#1/59 HalfReuse: (/62 } Tile{ AsIs: e.IncludeName#1/30 } Tile{ AsIs: )/16 AsIs: (/11 AsIs: e.FullPath#1/32 AsIs: )/12 HalfReuse: )/7 } Tile{ AsIs: (/65 AsIs: e.ScannedAST#1/63 AsIs: )/66 AsIs: e.NotScannedAST#1/52 AsIs: )/55 AsIs: e.Units-E#1/48 AsIs: )/45 } Tile{ AsIs: e.Groups-E#1/38 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
        refalrts::alloc_close_bracket(vm, context[71]);
        refalrts::update_name(context[4], functions[efunc_ResolveIncludes]);
        refalrts::reinit_open_call(context[15]);
        refalrts::reinit_name(context[22], functions[efunc_gen_Map_Z3]);
        refalrts::reinit_open_bracket(context[62]);
        refalrts::reinit_close_bracket(context[7]);
        refalrts::reinit_close_call(context[8]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[8] );
        refalrts::push_stack( vm, context[15] );
        refalrts::link_brackets( context[44], context[45] );
        refalrts::link_brackets( context[54], context[55] );
        refalrts::link_brackets( context[65], context[66] );
        refalrts::link_brackets( context[61], context[7] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[62], context[16] );
        refalrts::link_brackets( context[21], context[71] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[38], context[39] );
        res = refalrts::splice_evar( res, context[65], context[45] );
        res = refalrts::splice_evar( res, context[16], context[7] );
        res = refalrts::splice_evar( res, context[30], context[31] );
        res = refalrts::splice_evar( res, context[22], context[62] );
        res = refalrts::splice_evar( res, context[15], context[15] );
        res = refalrts::splice_evar( res, context[71], context[71] );
        res = refalrts::splice_evar( res, context[26], context[27] );
        refalrts::splice_to_freelist_open( vm, context[21], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[46], context[47], context[42], context[43] ) );
    } while ( refalrts::open_evar_advance( context[36], context[37], context[28], context[29] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ResolveIncludes-CheckEqualAST/4 t.Config#1/17 (/21 e.BadIncludes#1/19 )/22 (/28 e.Units-B#1/26 )/29 (/32 t.CheckedUnit#1/38 )/33 (/36 e.Units-E#1/34 )/37 s.Dialect#1/25 (/15 e.IncludeName#1/13 )/16 (/11 e.FullPath#1/9 )/12 (/7 t.ErrorList#1/23 e.AST#1/5 )/8 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.BadIncludes#1 as range 19
  // closed e.Units-B#1 as range 26
  // closed e.Units-E#1 as range 34
  // closed e.IncludeName#1 as range 13
  // closed e.FullPath#1 as range 9
  // closed e.AST#1 as range 5
  context[39] = refalrts::tvar_left( context[38], context[30], context[31] );
  if( ! context[39] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[30], context[31] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Config#1: 17
  //DEBUG: t.ErrorList#1: 23
  //DEBUG: s.Dialect#1: 25
  //DEBUG: e.BadIncludes#1: 19
  //DEBUG: e.Units-B#1: 26
  //DEBUG: e.Units-E#1: 34
  //DEBUG: e.IncludeName#1: 13
  //DEBUG: e.FullPath#1: 9
  //DEBUG: e.AST#1: 5
  //DEBUG: t.CheckedUnit#1: 38

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/29 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Dialect#1/25 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ResolveIncludes/4 AsIs: t.Config#1/17 AsIs: (/21 AsIs: e.BadIncludes#1/19 AsIs: )/22 } Tile{ AsIs: e.Units-B#1/26 } Tile{ AsIs: (/28 } Tile{ AsIs: t.ErrorList#1/23 } Tile{ HalfReuse: s.Dialect1 #25/33 AsIs: (/36 } Tile{ AsIs: (/15 AsIs: e.IncludeName#1/13 AsIs: )/16 AsIs: (/11 AsIs: e.FullPath#1/9 AsIs: )/12 HalfReuse: )/7 } Tile{ HalfReuse: (/37 } Tile{ AsIs: )/8 } Tile{ AsIs: e.AST#1/5 } Tile{ HalfReuse: )/32 AsIs: t.CheckedUnit#1/38 } Tile{ AsIs: e.Units-E#1/34 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_ResolveIncludes]);
  refalrts::reinit_svar( context[33], context[25] );
  refalrts::reinit_close_bracket(context[7]);
  refalrts::reinit_open_bracket(context[37]);
  refalrts::reinit_close_bracket(context[32]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[28], context[32] );
  refalrts::link_brackets( context[37], context[8] );
  refalrts::link_brackets( context[36], context[7] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[21], context[22] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[34], context[35] );
  res = refalrts::splice_evar( res, context[32], context[39] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[37], context[37] );
  res = refalrts::splice_evar( res, context[15], context[7] );
  res = refalrts::splice_evar( res, context[33], context[36] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[28], context[28] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  refalrts::splice_to_freelist_open( vm, context[22], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ResolveIncludesm_CheckEqualAST("ResolveIncludes-CheckEqualAST", COOKIE1_, COOKIE2_, func_ResolveIncludesm_CheckEqualAST);


static refalrts::FnResult func_gen_GlueErrorListsAndASTs_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & GlueErrorListsAndASTs\1/4 t.CommonErrorList#2/9 (/7 t.ErrorList#2/11 (/15 e.UnitName#2/13 )/16 e.AST#2/5 )/8 >/1
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
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[12] = refalrts::tvar_left( context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[5], context[6] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.UnitName#2 as range 13
  // closed e.AST#2 as range 5
  //DEBUG: t.CommonErrorList#2: 9
  //DEBUG: t.ErrorList#2: 11
  //DEBUG: e.UnitName#2: 13
  //DEBUG: e.AST#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-Concat/4 AsIs: t.CommonErrorList#2/9 } Tile{ AsIs: t.ErrorList#2/11 } Tile{ AsIs: >/1 } Tile{ HalfReuse: </7 } & PatchASTSrcPos/17 Tile{ AsIs: (/15 AsIs: e.UnitName#2/13 AsIs: )/16 AsIs: e.AST#2/5 HalfReuse: >/8 } Tile{ ]] }
  refalrts::alloc_name(vm, context[17], functions[efunc_PatchASTSrcPos]);
  refalrts::update_name(context[4], functions[efunc_ELm_Concat]);
  refalrts::reinit_open_call(context[7]);
  refalrts::reinit_close_call(context[8]);
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[7] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[15], context[8] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GlueErrorListsAndASTs_L1("GlueErrorListsAndASTs\\1", COOKIE1_, COOKIE2_, func_gen_GlueErrorListsAndASTs_L1);


static refalrts::FnResult func_GlueErrorListsAndASTs(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & GlueErrorListsAndASTs/4 (/7 e.SrcName#1/5 )/8 e.Units#1/2 >/1
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
  // closed e.SrcName#1 as range 5
  // closed e.Units#1 as range 2
  //DEBUG: e.SrcName#1: 5
  //DEBUG: e.Units#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & MapAccum/10 Tile{ HalfReuse: & GlueErrorListsAndASTs\1/0 HalfReuse: </4 HalfReuse: & EL-Create/7 AsIs: e.SrcName#1/5 HalfReuse: >/8 AsIs: e.Units#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_MapAccum]);
  refalrts::reinit_name(context[0], functions[efunc_gen_GlueErrorListsAndASTs_L1]);
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_ELm_Create]);
  refalrts::reinit_close_call(context[8]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GlueErrorListsAndASTs("GlueErrorListsAndASTs", COOKIE1_, COOKIE2_, func_GlueErrorListsAndASTs);


static refalrts::FnResult func_gen_PatchASTSrcPos_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & PatchASTSrcPos=1/4 (/7 e.AST#1/5 )/8 s.FnPatch#2/9 >/1
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
  // closed e.AST#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.AST#1: 5
  //DEBUG: s.FnPatch#2: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.FnPatch#2/9 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@4/4 HalfReuse: s.FnPatch2 #9/7 AsIs: e.AST#1/5 HalfReuse: >/8 } Tile{ ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z4]);
  refalrts::reinit_svar( context[7], context[9] );
  refalrts::reinit_close_call(context[8]);
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, context[8], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PatchASTSrcPos_A1("PatchASTSrcPos=1", COOKIE1_, COOKIE2_, func_gen_PatchASTSrcPos_A1);


static refalrts::FnResult func_gen_PatchASTSrcPos_A1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & PatchASTSrcPos=1\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & PatchASTSrcPos=1\1/4 (/7 e.new#1/5 )/8 t.new#2/9 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & PatchASTSrcPos=1\1/4 (/7 e.new#4/11 )/8 s.new#3/9 >/1
    context[11] = context[5];
    context[12] = context[6];
    if( ! refalrts::svar_term( context[9], context[9] ) )
      continue;
    // closed e.new#4 as range 11
    do {
      // </0 & PatchASTSrcPos=1\1/4 (/7 e.FileName#1/13 )/8 # NoPos/9 >/1
      context[13] = context[11];
      context[14] = context[12];
      if( ! refalrts::ident_term( identifiers[ident_NoPos], context[9] ) )
        continue;
      // closed e.FileName#1 as range 13
      //DEBUG: e.FileName#1: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & PatchASTSrcPos=1\1/4 (/7 e.FileName#1/13 )/8 # NoPos/9 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # NoPos/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_NoPos]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & PatchASTSrcPos=1\1/4 (/7 e.FileName#1/13 )/8 s.LnNum#2/9 >/1
    context[13] = context[11];
    context[14] = context[12];
    // closed e.FileName#1 as range 13
    //DEBUG: s.LnNum#2: 9
    //DEBUG: e.FileName#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.LnNum#2/9 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # FileLine/4 HalfReuse: s.LnNum2 #9/7 AsIs: e.FileName#1/13 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_FileLine]);
    refalrts::reinit_svar( context[7], context[9] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, context[8], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PatchASTSrcPos=1\1/4 (/7 e.FileName#1/5 )/8 (/9 # RowCol/13 s.Row#2/14 s.Col#2/15 )/10 >/1
  context[11] = 0;
  context[12] = 0;
  if( ! refalrts::brackets_term( context[11], context[12], context[9] ) )
    return refalrts::cRecognitionImpossible;
  context[13] = refalrts::ident_left( identifiers[ident_RowCol], context[11], context[12] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#1 as range 5
  if( ! refalrts::svar_left( context[14], context[11], context[12] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[15], context[11], context[12] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[11], context[12] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.FileName#1: 5
  //DEBUG: s.Row#2: 14
  //DEBUG: s.Col#2: 15

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & PatchASTSrcPos=1\1/4 (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/8 HalfReuse: # FileRowCol/9 HalfReuse: (/13 AsIs: s.Row#2/14 AsIs: s.Col#2/15 AsIs: )/10 } Tile{ AsIs: e.FileName#1/5 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[8]);
  refalrts::reinit_ident(context[9], identifiers[ident_FileRowCol]);
  refalrts::reinit_open_bracket(context[13]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[8], context[1] );
  refalrts::link_brackets( context[13], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[10] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PatchASTSrcPos_A1L1("PatchASTSrcPos=1\\1", COOKIE1_, COOKIE2_, func_gen_PatchASTSrcPos_A1L1);


static refalrts::FnResult func_PatchASTSrcPos(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & PatchASTSrcPos/4 (/7 e.FileName#1/5 )/8 e.AST#1/2 >/1
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
  // closed e.FileName#1 as range 5
  // closed e.AST#1 as range 2
  //DEBUG: e.FileName#1: 5
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & Map@5/7 AsIs: e.FileName#1/5 HalfReuse: (/8 AsIs: e.AST#1/2 HalfReuse: )/1 } Tile{ HalfReuse: >/0 } Tile{ ]] }
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_gen_Map_Z5]);
  refalrts::reinit_open_bracket(context[8]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::reinit_close_call(context[0]);
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[4] );
  refalrts::link_brackets( context[8], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[4], context[1] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PatchASTSrcPos("PatchASTSrcPos", COOKIE1_, COOKIE2_, func_PatchASTSrcPos);


static refalrts::FnResult func_PatchASTSrcPosm_Item(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  // </0 & PatchASTSrcPos-Item/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & PatchASTSrcPos-Item/4 s.new#1/9 (/7 s.new#2/10 t.new#3/11 e.new#4/5 )/8 >/1
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
  context[12] = refalrts::tvar_left( context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 5
  do {
    // </0 & PatchASTSrcPos-Item/4 s.FnPatch#1/9 (/7 # Function/10 t.SrcPos#1/11 s.ScopeClass#1/15 (/18 e.Name#1/16 )/19 e.Body#1/13 )/8 >/1
    context[13] = context[5];
    context[14] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_Function], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[13], context[14] ) )
      continue;
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_left( context[16], context[17], context[13], context[14] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    // closed e.Name#1 as range 16
    // closed e.Body#1 as range 13
    //DEBUG: t.SrcPos#1: 11
    //DEBUG: s.FnPatch#1: 9
    //DEBUG: s.ScopeClass#1: 15
    //DEBUG: e.Name#1: 16
    //DEBUG: e.Body#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Function/10 } </20 s.FnPatch#1/9/21 Tile{ AsIs: t.SrcPos#1/11 } >/22 Tile{ AsIs: s.ScopeClass#1/15 AsIs: (/18 AsIs: e.Name#1/16 AsIs: )/19 } Tile{ AsIs: </0 Reuse: & PatchASTSrcPos-Body/4 AsIs: s.FnPatch#1/9 } Tile{ AsIs: e.Body#1/13 } Tile{ HalfReuse: >/8 HalfReuse: )/1 ]] }
    refalrts::alloc_open_call(vm, context[20]);
    refalrts::copy_stvar(vm, context[21], context[9]);
    refalrts::alloc_close_call(vm, context[22]);
    refalrts::update_name(context[4], functions[efunc_PatchASTSrcPosm_Body]);
    refalrts::reinit_close_call(context[8]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[7], context[1] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[18], context[19] );
    refalrts::push_stack( vm, context[22] );
    refalrts::push_stack( vm, context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[0], context[9] );
    res = refalrts::splice_evar( res, context[15], context[19] );
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[7], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & PatchASTSrcPos-Item/4 s.FnPatch#1/9 (/7 # Ident/10 t.SrcPos#1/11 e.Name#1/13 )/8 >/1
    context[13] = context[5];
    context[14] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_Ident], context[10] ) )
      continue;
    // closed e.Name#1 as range 13
    //DEBUG: t.SrcPos#1: 11
    //DEBUG: s.FnPatch#1: 9
    //DEBUG: e.Name#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Ident/10 } Tile{ HalfReuse: </4 AsIs: s.FnPatch#1/9 } Tile{ AsIs: t.SrcPos#1/11 } Tile{ HalfReuse: >/8 } Tile{ AsIs: e.Name#1/13 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_close_call(context[8]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[7], context[1] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[4], context[9] );
    res = refalrts::splice_evar( res, context[7], context[10] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & PatchASTSrcPos-Item/4 s.FnPatch#1/9 (/7 # NativeBlock/10 t.SrcPos#1/11 e.Name#1/13 )/8 >/1
    context[13] = context[5];
    context[14] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_NativeBlock], context[10] ) )
      continue;
    // closed e.Name#1 as range 13
    //DEBUG: t.SrcPos#1: 11
    //DEBUG: s.FnPatch#1: 9
    //DEBUG: e.Name#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # NativeBlock/10 } Tile{ HalfReuse: </4 AsIs: s.FnPatch#1/9 } Tile{ AsIs: t.SrcPos#1/11 } Tile{ HalfReuse: >/8 } Tile{ AsIs: e.Name#1/13 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_close_call(context[8]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[7], context[1] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[4], context[9] );
    res = refalrts::splice_evar( res, context[7], context[10] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & PatchASTSrcPos-Item/4 s.FnPatch#1/9 (/7 # Include/10 t.SrcPos#1/11 e.IncludeName#1/13 )/8 >/1
    context[13] = context[5];
    context[14] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_Include], context[10] ) )
      continue;
    // closed e.IncludeName#1 as range 13
    //DEBUG: t.SrcPos#1: 11
    //DEBUG: s.FnPatch#1: 9
    //DEBUG: e.IncludeName#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & PatchASTSrcPos-Item/4 s.FnPatch#1/9 (/7 # Include/10 t.SrcPos#1/11 e.IncludeName#1/13 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PatchASTSrcPos-Item/4 s.new#5/9 (/7 s.new#6/10 t.new#7/11 t.new#8/13 e.new#9/5 )/8 >/1
  context[14] = refalrts::tvar_left( context[13], context[5], context[6] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#9 as range 5
  do {
    // </0 & PatchASTSrcPos-Item/4 s.FnPatch#1/9 (/7 s.Label#1/10 t.SrcPos#1/11 s.ScopeClass#1/13 e.Name#1/15 )/8 >/1
    context[15] = context[5];
    context[16] = context[6];
    if( ! refalrts::svar_term( context[13], context[13] ) )
      continue;
    // closed e.Name#1 as range 15
    //DEBUG: t.SrcPos#1: 11
    //DEBUG: s.ScopeClass#1: 13
    //DEBUG: s.FnPatch#1: 9
    //DEBUG: s.Label#1: 10
    //DEBUG: e.Name#1: 15
    //9: s.FnPatch#1
    //10: s.Label#1
    //11: t.SrcPos#1
    //13: s.ScopeClass#1
    //15: e.Name#1
    //22: s.Label#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[19], functions[efunc_gen_PatchASTSrcPosm_Item_S5C1]);
    refalrts::alloc_open_call(vm, context[20]);
    refalrts::alloc_name(vm, context[21], functions[efunc_OneOf]);
    refalrts::copy_stvar(vm, context[22], context[10]);
    refalrts::alloc_ident(vm, context[23], identifiers[ident_Enum]);
    refalrts::alloc_ident(vm, context[24], identifiers[ident_Swap]);
    refalrts::alloc_ident(vm, context[25], identifiers[ident_Declaration]);
    refalrts::alloc_ident(vm, context[26], identifiers[ident_Entry]);
    refalrts::alloc_ident(vm, context[27], identifiers[ident_Inline]);
    refalrts::alloc_ident(vm, context[28], identifiers[ident_Drive]);
    refalrts::alloc_ident(vm, context[29], identifiers[ident_Meta]);
    refalrts::alloc_close_call(vm, context[30]);
    refalrts::alloc_close_call(vm, context[18]);
    refalrts::push_stack( vm, context[18] );
    refalrts::push_stack( vm, context[17] );
    res = refalrts::splice_elem( res, context[18] );
    refalrts::push_stack( vm, context[30] );
    refalrts::push_stack( vm, context[20] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_stvar( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[17] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </17 & PatchASTSrcPos-Item$5?1/21 # True/22 >/18
      context[19] = 0;
      context[20] = 0;
      context[21] = refalrts::call_left( context[19], context[20], context[17], context[18] );
      context[22] = refalrts::ident_left( identifiers[ident_True], context[19], context[20] );
      if( ! context[22] )
        continue;
      if( ! refalrts::empty_seq( context[19], context[20] ) )
        continue;
      //DEBUG: t.SrcPos#1: 11
      //DEBUG: s.ScopeClass#1: 13
      //DEBUG: s.FnPatch#1: 9
      //DEBUG: s.Label#1: 10
      //DEBUG: e.Name#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & PatchASTSrcPos-Item/4 s.FnPatch#1/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # True/22 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Label#1/10 } Tile{ AsIs: </17 HalfReuse: s.FnPatch1 #9/21 } Tile{ AsIs: t.SrcPos#1/11 } Tile{ AsIs: >/18 } Tile{ AsIs: s.ScopeClass#1/13 AsIs: e.Name#1/15 AsIs: )/8 } Tile{ ]] }
      refalrts::reinit_svar( context[21], context[9] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::push_stack( vm, context[18] );
      refalrts::push_stack( vm, context[17] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[13], context[8] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[17], context[21] );
      res = refalrts::splice_evar( res, context[7], context[10] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[17], context[18]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PatchASTSrcPos-Item/4 s.FnPatch#1/9 (/7 # Spec/10 t.SrcPos#1/11 (/13 e.Name#1/15 )/14 e.Pattern#1/5 )/8 >/1
  context[15] = 0;
  context[16] = 0;
  if( ! refalrts::brackets_term( context[15], context[16], context[13] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::ident_term( identifiers[ident_Spec], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 15
  // closed e.Pattern#1 as range 5
  //DEBUG: t.SrcPos#1: 11
  //DEBUG: s.FnPatch#1: 9
  //DEBUG: e.Name#1: 15
  //DEBUG: e.Pattern#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Spec/10 } </17 s.FnPatch#1/9/18 Tile{ AsIs: t.SrcPos#1/11 } >/19 Tile{ AsIs: (/13 AsIs: e.Name#1/15 AsIs: )/14 } Tile{ AsIs: </0 Reuse: & PatchASTSrcPos-Expr/4 AsIs: s.FnPatch#1/9 } Tile{ AsIs: e.Pattern#1/5 } Tile{ HalfReuse: >/8 HalfReuse: )/1 ]] }
  refalrts::alloc_open_call(vm, context[17]);
  refalrts::copy_stvar(vm, context[18], context[9]);
  refalrts::alloc_close_call(vm, context[19]);
  refalrts::update_name(context[4], functions[efunc_PatchASTSrcPosm_Expr]);
  refalrts::reinit_close_call(context[8]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[7], context[1] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[17] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[7], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PatchASTSrcPosm_Item("PatchASTSrcPos-Item", COOKIE1_, COOKIE2_, func_PatchASTSrcPosm_Item);


static refalrts::FnResult func_PatchASTSrcPosm_Body(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & PatchASTSrcPos-Body/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & PatchASTSrcPos-Body/4 s.new#1/5 s.new#2/6 e.new#3/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & PatchASTSrcPos-Body/4 s.FnPatch#1/5 # Sentences/6 e.Sentences#1/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Sentences], context[6] ) )
      continue;
    // closed e.Sentences#1 as range 7
    //DEBUG: s.FnPatch#1: 5
    //DEBUG: e.Sentences#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.FnPatch#1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: # Sentences/0 HalfReuse: </4 } & Map@6/9 Tile{ HalfReuse: s.FnPatch1 #5/6 AsIs: e.Sentences#1/7 AsIs: >/1 ]] }
    refalrts::alloc_name(vm, context[9], functions[efunc_gen_Map_Z6]);
    refalrts::reinit_ident(context[0], identifiers[ident_Sentences]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_svar( context[6], context[5] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    res = refalrts::splice_evar( res, context[9], context[9] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PatchASTSrcPos-Body/4 s.FnPatch#1/5 # NativeBody/6 t.SrcPos#1/7 e.Code#1/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_NativeBody], context[6] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  // closed e.Code#1 as range 2
  //DEBUG: s.FnPatch#1: 5
  //DEBUG: t.SrcPos#1: 7
  //DEBUG: e.Code#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} # NativeBody/6 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: # NativeBody/0 HalfReuse: </4 AsIs: s.FnPatch#1/5 } Tile{ AsIs: t.SrcPos#1/7 } Tile{ AsIs: >/1 } Tile{ AsIs: e.Code#1/2 } Tile{ ]] }
  refalrts::reinit_ident(context[0], identifiers[ident_NativeBody]);
  refalrts::reinit_open_call(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, context[5], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PatchASTSrcPosm_Body("PatchASTSrcPos-Body", COOKIE1_, COOKIE2_, func_PatchASTSrcPosm_Body);


static refalrts::FnResult func_gen_PatchASTSrcPosm_Sentence_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  // </0 & PatchASTSrcPos-Sentence=1/4 (/7 e.Pattern#1/5 )/8 s.FnPatch#1/9 (/12 e.ConditionsAndAssigns#1/10 )/13 (/16 e.Result#1/14 )/17 (/20 e.Blocks#1/18 )/21 s.FnPatchExpr#2/22 >/1
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
  // closed e.Pattern#1 as range 5
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
  // closed e.ConditionsAndAssigns#1 as range 10
  // closed e.Result#1 as range 14
  // closed e.Blocks#1 as range 18
  if( ! refalrts::svar_left( context[22], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Pattern#1: 5
  //DEBUG: s.FnPatch#1: 9
  //DEBUG: e.ConditionsAndAssigns#1: 10
  //DEBUG: e.Result#1: 14
  //DEBUG: e.Blocks#1: 18
  //DEBUG: s.FnPatchExpr#2: 22

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 HalfReuse: </7 } s.FnPatchExpr#2/22/23 Tile{ AsIs: e.Pattern#1/5 } >/24 )/25 </26 Tile{ HalfReuse: & PatchASTSrcPos-Chain/8 AsIs: s.FnPatch#1/9 HalfReuse: s.FnPatchExpr2 #22/12 AsIs: e.ConditionsAndAssigns#1/10 HalfReuse: >/13 AsIs: (/16 } Tile{ HalfReuse: </21 AsIs: s.FnPatchExpr#2/22 } Tile{ AsIs: e.Result#1/14 } >/27 Tile{ AsIs: )/17 AsIs: (/20 } </28 & PatchASTSrcPos-Blocks/29 s.FnPatch#1/9/30 Tile{ AsIs: e.Blocks#1/18 } >/31 )/32 Tile{ HalfReuse: )/1 ]] }
  refalrts::copy_stvar(vm, context[23], context[22]);
  refalrts::alloc_close_call(vm, context[24]);
  refalrts::alloc_close_bracket(vm, context[25]);
  refalrts::alloc_open_call(vm, context[26]);
  refalrts::alloc_close_call(vm, context[27]);
  refalrts::alloc_open_call(vm, context[28]);
  refalrts::alloc_name(vm, context[29], functions[efunc_PatchASTSrcPosm_Blocks]);
  refalrts::copy_stvar(vm, context[30], context[9]);
  refalrts::alloc_close_call(vm, context[31]);
  refalrts::alloc_close_bracket(vm, context[32]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_open_call(context[7]);
  refalrts::reinit_name(context[8], functions[efunc_PatchASTSrcPosm_Chain]);
  refalrts::reinit_svar( context[12], context[22] );
  refalrts::reinit_close_call(context[13]);
  refalrts::reinit_open_call(context[21]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[20], context[32] );
  refalrts::push_stack( vm, context[31] );
  refalrts::push_stack( vm, context[28] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[26] );
  refalrts::link_brackets( context[4], context[25] );
  refalrts::push_stack( vm, context[24] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[31], context[32] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[28], context[30] );
  res = refalrts::splice_evar( res, context[17], context[20] );
  res = refalrts::splice_evar( res, context[27], context[27] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[8], context[16] );
  res = refalrts::splice_evar( res, context[24], context[26] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PatchASTSrcPosm_Sentence_A1("PatchASTSrcPos-Sentence=1", COOKIE1_, COOKIE2_, func_gen_PatchASTSrcPosm_Sentence_A1);


static refalrts::FnResult func_gen_PatchASTSrcPosm_Sentence_A1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & PatchASTSrcPos-Sentence=1\1/4 s.FnPatch#1/5 e.Expr#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Expr#2 as range 2
  //DEBUG: s.FnPatch#1: 5
  //DEBUG: e.Expr#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PatchASTSrcPos-Expr/4 AsIs: s.FnPatch#1/5 AsIs: e.Expr#2/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_PatchASTSrcPosm_Expr]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PatchASTSrcPosm_Sentence_A1L1("PatchASTSrcPos-Sentence=1\\1", COOKIE1_, COOKIE2_, func_gen_PatchASTSrcPosm_Sentence_A1L1);


static refalrts::FnResult func_PatchASTSrcPosm_Sentence(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 38 elems
  refalrts::Iter context[38];
  refalrts::zeros( context, 38 );
  // </0 & PatchASTSrcPos-Sentence/4 s.FnPatch#1/21 (/7 (/11 e.Pattern#1/9 )/12 e.ConditionsAndAssigns#1/5 (/19 e.Result#1/17 )/20 (/15 e.Blocks#1/13 )/16 )/8 >/1
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
  // closed e.Pattern#1 as range 9
  // closed e.ConditionsAndAssigns#1 as range 5
  // closed e.Result#1 as range 17
  // closed e.Blocks#1 as range 13
  if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Pattern#1: 9
  //DEBUG: e.ConditionsAndAssigns#1: 5
  //DEBUG: e.Result#1: 17
  //DEBUG: e.Blocks#1: 13
  //DEBUG: s.FnPatch#1: 21

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/22 (/23 </24 & PatchASTSrcPos-Expr/25 s.FnPatch#1/21/26 Tile{ AsIs: e.Pattern#1/9 } >/27 )/28 Tile{ AsIs: </0 Reuse: & PatchASTSrcPos-Chain/4 AsIs: s.FnPatch#1/21 HalfReuse: [*]/7 HalfReuse: & PatchASTSrcPos-Sentence=1\1/11 } s.FnPatch#1/21/29 Tile{ HalfReuse: {*}/12 AsIs: e.ConditionsAndAssigns#1/5 HalfReuse: >/19 } (/30 </31 & PatchASTSrcPos-Expr/32 s.FnPatch#1/21/33 Tile{ AsIs: e.Result#1/17 } >/34 )/35 (/36 </37 Tile{ HalfReuse: & PatchASTSrcPos-Blocks/20 HalfReuse: s.FnPatch1 #21/15 AsIs: e.Blocks#1/13 HalfReuse: >/16 AsIs: )/8 HalfReuse: )/1 ]] }
  refalrts::alloc_open_bracket(vm, context[22]);
  refalrts::alloc_open_bracket(vm, context[23]);
  refalrts::alloc_open_call(vm, context[24]);
  refalrts::alloc_name(vm, context[25], functions[efunc_PatchASTSrcPosm_Expr]);
  refalrts::copy_stvar(vm, context[26], context[21]);
  refalrts::alloc_close_call(vm, context[27]);
  refalrts::alloc_close_bracket(vm, context[28]);
  refalrts::copy_stvar(vm, context[29], context[21]);
  refalrts::alloc_open_bracket(vm, context[30]);
  refalrts::alloc_open_call(vm, context[31]);
  refalrts::alloc_name(vm, context[32], functions[efunc_PatchASTSrcPosm_Expr]);
  refalrts::copy_stvar(vm, context[33], context[21]);
  refalrts::alloc_close_call(vm, context[34]);
  refalrts::alloc_close_bracket(vm, context[35]);
  refalrts::alloc_open_bracket(vm, context[36]);
  refalrts::alloc_open_call(vm, context[37]);
  refalrts::update_name(context[4], functions[efunc_PatchASTSrcPosm_Chain]);
  refalrts::reinit_closure_head(context[7]);
  refalrts::reinit_name(context[11], functions[efunc_gen_PatchASTSrcPosm_Sentence_A1L1]);
  refalrts::reinit_unwrapped_closure(context[12], context[7]);
  refalrts::reinit_close_call(context[19]);
  refalrts::reinit_name(context[20], functions[efunc_PatchASTSrcPosm_Blocks]);
  refalrts::reinit_svar( context[15], context[21] );
  refalrts::reinit_close_call(context[16]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[22], context[1] );
  refalrts::link_brackets( context[36], context[8] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[37] );
  refalrts::link_brackets( context[30], context[35] );
  refalrts::push_stack( vm, context[34] );
  refalrts::push_stack( vm, context[31] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[23], context[28] );
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[24] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[20];
  res = refalrts::splice_evar( res, context[34], context[37] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[30], context[33] );
  res = refalrts::splice_evar( res, context[12], context[19] );
  res = refalrts::splice_evar( res, context[29], context[29] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[22], context[26] );
  refalrts::use( res );
  refalrts::wrap_closure( context[12] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PatchASTSrcPosm_Sentence("PatchASTSrcPos-Sentence", COOKIE1_, COOKIE2_, func_PatchASTSrcPosm_Sentence);


static refalrts::FnResult func_gen_PatchASTSrcPosm_Chain_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & PatchASTSrcPos-Chain\1/4 s.FnPatchExpr#1/21 s.FnPatch#1/22 (/7 s.ChainType#2/23 (/19 e.Result#2/17 )/20 (/15 e.Blocks#2/13 )/16 (/11 e.Pattern#2/9 )/12 )/8 >/1
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
  // closed e.Result#2 as range 17
  // closed e.Blocks#2 as range 13
  // closed e.Pattern#2 as range 9
  if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[22], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[23], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Result#2: 17
  //DEBUG: e.Blocks#2: 13
  //DEBUG: e.Pattern#2: 9
  //DEBUG: s.FnPatchExpr#1: 21
  //DEBUG: s.FnPatch#1: 22
  //DEBUG: s.ChainType#2: 23

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.ChainType#2/23 AsIs: (/19 } </24 Tile{ AsIs: s.FnPatchExpr#1/21 } Tile{ AsIs: e.Result#2/17 } >/25 Tile{ AsIs: )/20 AsIs: (/15 } Tile{ AsIs: </0 Reuse: & PatchASTSrcPos-Blocks/4 } Tile{ AsIs: s.FnPatch#1/22 } Tile{ AsIs: e.Blocks#2/13 } >/26 )/27 (/28 Tile{ HalfReuse: </16 HalfReuse: s.FnPatchExpr1 #21/11 AsIs: e.Pattern#2/9 HalfReuse: >/12 AsIs: )/8 HalfReuse: )/1 ]] }
  refalrts::alloc_open_call(vm, context[24]);
  refalrts::alloc_close_call(vm, context[25]);
  refalrts::alloc_close_call(vm, context[26]);
  refalrts::alloc_close_bracket(vm, context[27]);
  refalrts::alloc_open_bracket(vm, context[28]);
  refalrts::update_name(context[4], functions[efunc_PatchASTSrcPosm_Blocks]);
  refalrts::reinit_open_call(context[16]);
  refalrts::reinit_svar( context[11], context[21] );
  refalrts::reinit_close_call(context[12]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[7], context[1] );
  refalrts::link_brackets( context[28], context[8] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[16] );
  refalrts::link_brackets( context[15], context[27] );
  refalrts::push_stack( vm, context[26] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[24] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[16];
  res = refalrts::splice_evar( res, context[26], context[28] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[20], context[15] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  res = refalrts::splice_evar( res, context[7], context[19] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PatchASTSrcPosm_Chain_L1("PatchASTSrcPos-Chain\\1", COOKIE1_, COOKIE2_, func_gen_PatchASTSrcPosm_Chain_L1);


static refalrts::FnResult func_PatchASTSrcPosm_Chain(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & PatchASTSrcPos-Chain/4 s.FnPatch#1/5 s.FnPatchExpr#1/6 e.ConditionsAndAssigns#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ConditionsAndAssigns#1 as range 2
  //DEBUG: s.FnPatch#1: 5
  //DEBUG: s.FnPatchExpr#1: 6
  //DEBUG: e.ConditionsAndAssigns#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@7/4 } Tile{ AsIs: s.FnPatchExpr#1/6 } Tile{ AsIs: s.FnPatch#1/5 } Tile{ AsIs: e.ConditionsAndAssigns#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z7]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[6], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PatchASTSrcPosm_Chain("PatchASTSrcPos-Chain", COOKIE1_, COOKIE2_, func_PatchASTSrcPosm_Chain);


static refalrts::FnResult func_gen_PatchASTSrcPosm_Blocks_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & PatchASTSrcPos-Blocks\1/4 s.FnPatch#1/9 (/7 e.Body#2/5 )/8 >/1
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
  // closed e.Body#2 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Body#2: 5
  //DEBUG: s.FnPatch#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.FnPatch#1/9 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 } & PatchASTSrcPos-Body/10 Tile{ HalfReuse: s.FnPatch1 #9/7 AsIs: e.Body#2/5 HalfReuse: >/8 HalfReuse: )/1 ]] }
  refalrts::alloc_name(vm, context[10], functions[efunc_PatchASTSrcPosm_Body]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_svar( context[7], context[9] );
  refalrts::reinit_close_call(context[8]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[7];
  res = refalrts::splice_evar( res, context[10], context[10] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PatchASTSrcPosm_Blocks_L1("PatchASTSrcPos-Blocks\\1", COOKIE1_, COOKIE2_, func_gen_PatchASTSrcPosm_Blocks_L1);


static refalrts::FnResult func_PatchASTSrcPosm_Blocks(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & PatchASTSrcPos-Blocks/4 s.FnPatch#1/5 e.Blocks#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Blocks#1 as range 2
  //DEBUG: s.FnPatch#1: 5
  //DEBUG: e.Blocks#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@8/4 AsIs: s.FnPatch#1/5 AsIs: e.Blocks#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z8]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PatchASTSrcPosm_Blocks("PatchASTSrcPos-Blocks", COOKIE1_, COOKIE2_, func_PatchASTSrcPosm_Blocks);


static refalrts::FnResult func_gen_PatchASTSrcPosm_Expr_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & PatchASTSrcPos-Expr\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & PatchASTSrcPos-Expr\1/4 s.new#1/5 t.new#2/6 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::tvar_left( context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & PatchASTSrcPos-Expr\1/4 s.new#3/5 (/6 s.new#4/10 e.new#5/8 )/7 >/1
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_term( context[8], context[9], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[8], context[9] ) )
      continue;
    // closed e.new#5 as range 8
    do {
      // </0 & PatchASTSrcPos-Expr\1/4 s.new#6/5 (/6 s.new#7/10 t.new#8/13 t.new#9/15 e.new#10/11 )/7 >/1
      context[11] = context[8];
      context[12] = context[9];
      context[14] = refalrts::tvar_left( context[13], context[11], context[12] );
      if( ! context[14] )
        continue;
      context[16] = refalrts::tvar_left( context[15], context[11], context[12] );
      if( ! context[16] )
        continue;
      // closed e.new#10 as range 11
      do {
        // </0 & PatchASTSrcPos-Expr\1/4 s.new#11/5 (/6 s.new#12/10 t.new#13/13 s.new#14/15 e.new#15/17 )/7 >/1
        context[17] = context[11];
        context[18] = context[12];
        if( ! refalrts::svar_term( context[15], context[15] ) )
          continue;
        // closed e.new#15 as range 17
        do {
          // </0 & PatchASTSrcPos-Expr\1/4 s.FnPatch#1/5 (/6 # TkVariable/10 t.SrcPos#2/13 s.Mode#2/15 e.Index#2/19 )/7 >/1
          context[19] = context[17];
          context[20] = context[18];
          if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[10] ) )
            continue;
          // closed e.Index#2 as range 19
          //DEBUG: t.SrcPos#2: 13
          //DEBUG: s.FnPatch#1: 5
          //DEBUG: s.Mode#2: 15
          //DEBUG: e.Index#2: 19

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/6 AsIs: # TkVariable/10 } Tile{ HalfReuse: </4 AsIs: s.FnPatch#1/5 } Tile{ AsIs: t.SrcPos#2/13 } Tile{ AsIs: >/1 } Tile{ AsIs: s.Mode#2/15 AsIs: e.Index#2/19 AsIs: )/7 } Tile{ ]] }
          refalrts::reinit_open_call(context[4]);
          refalrts::link_brackets( context[6], context[7] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[4] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[15], context[7] );
          res = refalrts::splice_evar( res, context[1], context[1] );
          res = refalrts::splice_evar( res, context[13], context[14] );
          res = refalrts::splice_evar( res, context[4], context[5] );
          res = refalrts::splice_evar( res, context[6], context[10] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & PatchASTSrcPos-Expr\1/4 s.FnPatch#1/5 (/6 # TkNewVariable/10 t.SrcPos#2/13 s.Mode#2/15 e.Index#2/19 )/7 >/1
        context[19] = context[17];
        context[20] = context[18];
        if( ! refalrts::ident_term( identifiers[ident_TkNewVariable], context[10] ) )
          continue;
        // closed e.Index#2 as range 19
        //DEBUG: t.SrcPos#2: 13
        //DEBUG: s.FnPatch#1: 5
        //DEBUG: s.Mode#2: 15
        //DEBUG: e.Index#2: 19

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/6 AsIs: # TkNewVariable/10 } Tile{ HalfReuse: </4 AsIs: s.FnPatch#1/5 } Tile{ AsIs: t.SrcPos#2/13 } Tile{ AsIs: >/1 } Tile{ AsIs: s.Mode#2/15 AsIs: e.Index#2/19 AsIs: )/7 } Tile{ ]] }
        refalrts::reinit_open_call(context[4]);
        refalrts::link_brackets( context[6], context[7] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[4] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[15], context[7] );
        res = refalrts::splice_evar( res, context[1], context[1] );
        res = refalrts::splice_evar( res, context[13], context[14] );
        res = refalrts::splice_evar( res, context[4], context[5] );
        res = refalrts::splice_evar( res, context[6], context[10] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & PatchASTSrcPos-Expr\1/4 s.FnPatch#1/5 (/6 # Symbol/10 # Name/13 t.SrcPos#2/15 e.Name#2/17 )/7 >/1
      context[17] = context[11];
      context[18] = context[12];
      if( ! refalrts::ident_term( identifiers[ident_Name], context[13] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_Symbol], context[10] ) )
        continue;
      // closed e.Name#2 as range 17
      //DEBUG: t.SrcPos#2: 15
      //DEBUG: s.FnPatch#1: 5
      //DEBUG: e.Name#2: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/6 AsIs: # Symbol/10 AsIs: # Name/13 } Tile{ HalfReuse: </4 AsIs: s.FnPatch#1/5 } Tile{ AsIs: t.SrcPos#2/15 } Tile{ HalfReuse: >/7 } Tile{ AsIs: e.Name#2/17 } Tile{ HalfReuse: )/1 ]] }
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_close_call(context[7]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[6], context[1] );
      refalrts::push_stack( vm, context[7] );
      refalrts::push_stack( vm, context[4] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[4], context[5] );
      res = refalrts::splice_evar( res, context[6], context[13] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & PatchASTSrcPos-Expr\1/4 s.FnPatch#1/5 (/6 # Brackets/10 e.InBrackets#2/11 )/7 >/1
      context[11] = context[8];
      context[12] = context[9];
      if( ! refalrts::ident_term( identifiers[ident_Brackets], context[10] ) )
        continue;
      // closed e.InBrackets#2 as range 11
      //DEBUG: s.FnPatch#1: 5
      //DEBUG: e.InBrackets#2: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.FnPatch#1/5 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Brackets/4 } </13 Tile{ HalfReuse: & PatchASTSrcPos-Expr/6 HalfReuse: s.FnPatch1 #5/10 AsIs: e.InBrackets#2/11 HalfReuse: >/7 HalfReuse: )/1 ]] }
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_Brackets]);
      refalrts::reinit_name(context[6], functions[efunc_PatchASTSrcPosm_Expr]);
      refalrts::reinit_svar( context[10], context[5] );
      refalrts::reinit_close_call(context[7]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[0], context[1] );
      refalrts::push_stack( vm, context[7] );
      refalrts::push_stack( vm, context[13] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[6];
      res = refalrts::splice_evar( res, context[13], context[13] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & PatchASTSrcPos-Expr\1/4 s.FnPatch#1/5 (/6 # ADT-Brackets/10 t.SrcPos#2/13 (/17 e.Name#2/15 )/18 e.InBrackets#2/11 )/7 >/1
      context[11] = context[8];
      context[12] = context[9];
      if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[10] ) )
        continue;
      context[14] = refalrts::tvar_left( context[13], context[11], context[12] );
      if( ! context[14] )
        continue;
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::brackets_left( context[15], context[16], context[11], context[12] );
      if( ! context[17] )
        continue;
      refalrts::bracket_pointers(context[17], context[18]);
      // closed e.Name#2 as range 15
      // closed e.InBrackets#2 as range 11
      //DEBUG: s.FnPatch#1: 5
      //DEBUG: t.SrcPos#2: 13
      //DEBUG: e.Name#2: 15
      //DEBUG: e.InBrackets#2: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/6 AsIs: # ADT-Brackets/10 } </19 s.FnPatch#1/5/20 Tile{ AsIs: t.SrcPos#2/13 } >/21 Tile{ AsIs: (/17 AsIs: e.Name#2/15 AsIs: )/18 } Tile{ AsIs: </0 Reuse: & PatchASTSrcPos-Expr/4 AsIs: s.FnPatch#1/5 } Tile{ AsIs: e.InBrackets#2/11 } Tile{ HalfReuse: >/7 HalfReuse: )/1 ]] }
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::copy_stvar(vm, context[20], context[5]);
      refalrts::alloc_close_call(vm, context[21]);
      refalrts::update_name(context[4], functions[efunc_PatchASTSrcPosm_Expr]);
      refalrts::reinit_close_call(context[7]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[6], context[1] );
      refalrts::push_stack( vm, context[7] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[17], context[18] );
      refalrts::push_stack( vm, context[21] );
      refalrts::push_stack( vm, context[19] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[7];
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[0], context[5] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[21], context[21] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[6], context[10] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & PatchASTSrcPos-Expr\1/4 s.FnPatch#1/5 (/6 # CallBrackets/10 e.InBrackets#2/11 )/7 >/1
      context[11] = context[8];
      context[12] = context[9];
      if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[10] ) )
        continue;
      // closed e.InBrackets#2 as range 11
      //DEBUG: s.FnPatch#1: 5
      //DEBUG: e.InBrackets#2: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.FnPatch#1/5 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CallBrackets/4 } </13 Tile{ HalfReuse: & PatchASTSrcPos-Expr/6 HalfReuse: s.FnPatch1 #5/10 AsIs: e.InBrackets#2/11 HalfReuse: >/7 HalfReuse: )/1 ]] }
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_CallBrackets]);
      refalrts::reinit_name(context[6], functions[efunc_PatchASTSrcPosm_Expr]);
      refalrts::reinit_svar( context[10], context[5] );
      refalrts::reinit_close_call(context[7]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[0], context[1] );
      refalrts::push_stack( vm, context[7] );
      refalrts::push_stack( vm, context[13] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[6];
      res = refalrts::splice_evar( res, context[13], context[13] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & PatchASTSrcPos-Expr\1/4 s.FnPatch#1/5 (/6 # Closure/10 e.Sentences#2/11 )/7 >/1
    context[11] = context[8];
    context[12] = context[9];
    if( ! refalrts::ident_term( identifiers[ident_Closure], context[10] ) )
      continue;
    // closed e.Sentences#2 as range 11
    //DEBUG: s.FnPatch#1: 5
    //DEBUG: e.Sentences#2: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.FnPatch#1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Closure/4 } </13 Tile{ HalfReuse: & PatchASTSrcPos-Body/6 HalfReuse: s.FnPatch1 #5/10 AsIs: e.Sentences#2/11 HalfReuse: >/7 HalfReuse: )/1 ]] }
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_Closure]);
    refalrts::reinit_name(context[6], functions[efunc_PatchASTSrcPosm_Body]);
    refalrts::reinit_svar( context[10], context[5] );
    refalrts::reinit_close_call(context[7]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[0], context[1] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    res = refalrts::splice_evar( res, context[13], context[13] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PatchASTSrcPos-Expr\1/4 s.FnPatch#1/5 t.OtherTerm#2/6 >/1
  //DEBUG: t.OtherTerm#2: 6
  //DEBUG: s.FnPatch#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & PatchASTSrcPos-Expr\1/4 s.FnPatch#1/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherTerm#2/6 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PatchASTSrcPosm_Expr_L1("PatchASTSrcPos-Expr\\1", COOKIE1_, COOKIE2_, func_gen_PatchASTSrcPosm_Expr_L1);


static refalrts::FnResult func_PatchASTSrcPosm_Expr(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & PatchASTSrcPos-Expr/4 s.FnPatch#1/5 e.Expression#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Expression#1 as range 2
  //DEBUG: s.FnPatch#1: 5
  //DEBUG: e.Expression#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@9/4 AsIs: s.FnPatch#1/5 AsIs: e.Expression#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z9]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PatchASTSrcPosm_Expr("PatchASTSrcPos-Expr", COOKIE1_, COOKIE2_, func_PatchASTSrcPosm_Expr);


static refalrts::FnResult func_gen_BackEnd_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & BackEnd:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & BackEnd:1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 e.new#3/2 t.new#4/13 >/1
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
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  context[14] = refalrts::tvar_right( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & BackEnd:1/4 (/7 e.OutputName#1/15 )/8 (/11 e.SrcName#1/17 )/12 t.RASLModule#14/13 >/1
    context[15] = context[5];
    context[16] = context[6];
    context[17] = context[9];
    context[18] = context[10];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.OutputName#1 as range 15
    // closed e.SrcName#1 as range 17
    //DEBUG: t.RASLModule#14: 13
    //DEBUG: e.OutputName#1: 15
    //DEBUG: e.SrcName#1: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.SrcName#1/17 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & BackEnd-RASLModule/4 } Tile{ AsIs: t.RASLModule#14/13 } Tile{ AsIs: e.OutputName#1/15 } Tile{ HalfReuse: '.'/12 } Tile{ HalfReuse: 'r'/8 HalfReuse: 'a'/11 } Tile{ HalfReuse: 's'/7 } 'l'/19 >/20 Tile{ HalfReuse: # NoNative/1 ]] }
    refalrts::alloc_char(vm, context[19], 'l');
    refalrts::alloc_close_call(vm, context[20]);
    refalrts::update_name(context[4], functions[efunc_BackEndm_RASLModule]);
    refalrts::reinit_char(context[12], '.');
    refalrts::reinit_char(context[8], 'r');
    refalrts::reinit_char(context[11], 'a');
    refalrts::reinit_char(context[7], 's');
    refalrts::reinit_ident(context[1], identifiers[ident_NoNative]);
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[8], context[11] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & BackEnd:1/4 (/7 e.OutputName#1/5 )/8 (/11 e.SrcName#1/9 )/12 t.RASLModule#14/15 t.NativeModule#14/13 >/1
  // closed e.OutputName#1 as range 5
  // closed e.SrcName#1 as range 9
  context[16] = refalrts::tvar_left( context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.NativeModule#14: 13
  //DEBUG: e.OutputName#1: 5
  //DEBUG: e.SrcName#1: 9
  //DEBUG: t.RASLModule#14: 15

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & BackEnd-RASLModule/4 } Tile{ AsIs: t.RASLModule#14/15 } Tile{ AsIs: e.OutputName#1/5 } Tile{ HalfReuse: '.'/7 } 'r'/17 Tile{ HalfReuse: 'a'/8 }"sl"/18 >/20 </21 & BackEnd-NativeModule/22 Tile{ AsIs: t.NativeModule#14/13 } Tile{ AsIs: (/11 AsIs: e.SrcName#1/9 AsIs: )/12 } e.OutputName#1/5/23".cpp"/25 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_char(vm, context[17], 'r');
  refalrts::alloc_chars(vm, context[18], context[19], "sl", 2);
  refalrts::alloc_close_call(vm, context[20]);
  refalrts::alloc_open_call(vm, context[21]);
  refalrts::alloc_name(vm, context[22], functions[efunc_BackEndm_NativeModule]);
  refalrts::copy_evar(vm, context[23], context[24], context[5], context[6]);
  refalrts::alloc_chars(vm, context[25], context[26], ".cpp", 4);
  refalrts::update_name(context[4], functions[efunc_BackEndm_RASLModule]);
  refalrts::reinit_char(context[7], '.');
  refalrts::reinit_char(context[8], 'a');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[21] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[18], context[22] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_BackEnd_B1("BackEnd:1", COOKIE1_, COOKIE2_, func_gen_BackEnd_B1);


static refalrts::FnResult func_gen_BackEnd_A12(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & BackEnd=12/4 (/7 e.OutputName#1/5 )/8 (/11 e.SrcName#1/9 )/12 s.GenMode#6/13 s.DebugInfo#2/14 e.HighLevelRASL#13/2 >/1
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
  // closed e.OutputName#1 as range 5
  // closed e.SrcName#1 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.HighLevelRASL#13 as range 2
  //DEBUG: e.OutputName#1: 5
  //DEBUG: e.SrcName#1: 9
  //DEBUG: s.GenMode#6: 13
  //DEBUG: s.DebugInfo#2: 14
  //DEBUG: e.HighLevelRASL#13: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & BackEnd:1/4 AsIs: (/7 AsIs: e.OutputName#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.SrcName#1/9 AsIs: )/12 } </15 & LowLevelRASL/16 Tile{ AsIs: s.GenMode#6/13 AsIs: s.DebugInfo#2/14 } (/17 e.SrcName#1/9/18 )/20 Tile{ AsIs: e.HighLevelRASL#13/2 } >/21 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_LowLevelRASL]);
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::copy_evar(vm, context[18], context[19], context[9], context[10]);
  refalrts::alloc_close_bracket(vm, context[20]);
  refalrts::alloc_close_call(vm, context[21]);
  refalrts::update_name(context[4], functions[efunc_gen_BackEnd_B1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[15] );
  refalrts::link_brackets( context[17], context[20] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[17], context[20] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_BackEnd_A12("BackEnd=12", COOKIE1_, COOKIE2_, func_gen_BackEnd_A12);


static refalrts::FnResult func_gen_BackEnd_A11(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & BackEnd=11/4 (/7 e.OutputName#1/5 )/8 (/11 e.SrcName#1/9 )/12 s.GenMode#6/13 s.DebugInfo#2/14 e.HighLevelRASL#12/2 >/1
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
  // closed e.OutputName#1 as range 5
  // closed e.SrcName#1 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.HighLevelRASL#12 as range 2
  //DEBUG: e.OutputName#1: 5
  //DEBUG: e.SrcName#1: 9
  //DEBUG: s.GenMode#6: 13
  //DEBUG: s.DebugInfo#2: 14
  //DEBUG: e.HighLevelRASL#12: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & BackEnd=12/4 AsIs: (/7 AsIs: e.OutputName#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.SrcName#1/9 AsIs: )/12 AsIs: s.GenMode#6/13 AsIs: s.DebugInfo#2/14 } </15 & Log-HighLevelRASL/16 (/17 e.SrcName#1/9/18 )/20 Tile{ AsIs: e.HighLevelRASL#12/2 } >/21 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_Logm_HighLevelRASL]);
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::copy_evar(vm, context[18], context[19], context[9], context[10]);
  refalrts::alloc_close_bracket(vm, context[20]);
  refalrts::alloc_close_call(vm, context[21]);
  refalrts::update_name(context[4], functions[efunc_gen_BackEnd_A12]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[15] );
  refalrts::link_brackets( context[17], context[20] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[15], context[20] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_BackEnd_A11("BackEnd=11", COOKIE1_, COOKIE2_, func_gen_BackEnd_A11);


static refalrts::FnResult func_gen_BackEnd_A10(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & BackEnd=10/4 (/7 e.OutputName#1/5 )/8 (/11 e.SrcName#1/9 )/12 s.GenMode#6/13 s.DebugInfo#2/14 s.OptPattern#3/15 s.OptResult#4/16 e.AST#11/2 >/1
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
  // closed e.OutputName#1 as range 5
  // closed e.SrcName#1 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[16], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#11 as range 2
  //DEBUG: e.OutputName#1: 5
  //DEBUG: e.SrcName#1: 9
  //DEBUG: s.GenMode#6: 13
  //DEBUG: s.DebugInfo#2: 14
  //DEBUG: s.OptPattern#3: 15
  //DEBUG: s.OptResult#4: 16
  //DEBUG: e.AST#11: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & BackEnd=11/4 AsIs: (/7 AsIs: e.OutputName#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.SrcName#1/9 AsIs: )/12 AsIs: s.GenMode#6/13 AsIs: s.DebugInfo#2/14 } </17 & HighLevelRASL/18 Tile{ AsIs: s.OptPattern#3/15 AsIs: s.OptResult#4/16 AsIs: e.AST#11/2 AsIs: >/1 } >/19 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[17]);
  refalrts::alloc_name(vm, context[18], functions[efunc_HighLevelRASL]);
  refalrts::alloc_close_call(vm, context[19]);
  refalrts::update_name(context[4], functions[efunc_gen_BackEnd_A11]);
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[17] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[15], context[1] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_BackEnd_A10("BackEnd=10", COOKIE1_, COOKIE2_, func_gen_BackEnd_A10);


static refalrts::FnResult func_gen_BackEnd_A9(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & BackEnd=9/4 (/7 e.OutputName#1/5 )/8 (/11 e.SrcName#1/9 )/12 s.GenMode#6/13 s.DebugInfo#2/14 s.OptPattern#3/15 s.OptResult#4/16 e.AST#10/2 >/1
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
  // closed e.OutputName#1 as range 5
  // closed e.SrcName#1 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[16], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#10 as range 2
  //DEBUG: e.OutputName#1: 5
  //DEBUG: e.SrcName#1: 9
  //DEBUG: s.GenMode#6: 13
  //DEBUG: s.DebugInfo#2: 14
  //DEBUG: s.OptPattern#3: 15
  //DEBUG: s.OptResult#4: 16
  //DEBUG: e.AST#10: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & BackEnd=10/4 AsIs: (/7 AsIs: e.OutputName#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.SrcName#1/9 AsIs: )/12 AsIs: s.GenMode#6/13 AsIs: s.DebugInfo#2/14 AsIs: s.OptPattern#3/15 AsIs: s.OptResult#4/16 } </17 & Log-AST/18 (/19 e.SrcName#1/9/20" (after tree optimization)"/22 )/24 Tile{ AsIs: e.AST#10/2 } >/25 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[17]);
  refalrts::alloc_name(vm, context[18], functions[efunc_Logm_AST]);
  refalrts::alloc_open_bracket(vm, context[19]);
  refalrts::copy_evar(vm, context[20], context[21], context[9], context[10]);
  refalrts::alloc_chars(vm, context[22], context[23], " (after tree optimization)", 26);
  refalrts::alloc_close_bracket(vm, context[24]);
  refalrts::alloc_close_call(vm, context[25]);
  refalrts::update_name(context[4], functions[efunc_gen_BackEnd_A10]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[17] );
  refalrts::link_brackets( context[19], context[24] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[17], context[24] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_BackEnd_A9("BackEnd=9", COOKIE1_, COOKIE2_, func_gen_BackEnd_A9);


static refalrts::FnResult func_gen_BackEnd_A9B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & BackEnd=9:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & BackEnd=9:1/4 t.new#1/5 (/9 e.new#2/7 )/10 s.new#3/11 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & BackEnd=9:1/4 t.Config#1/5 (/9 e.AST#9/12 )/10 # OptTree/11 >/1
    context[12] = context[7];
    context[13] = context[8];
    if( ! refalrts::ident_term( identifiers[ident_OptTree], context[11] ) )
      continue;
    // closed e.AST#9 as range 12
    //DEBUG: t.Config#1: 5
    //DEBUG: e.AST#9: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/9 {REMOVED TILE} )/10 # OptTree/11 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & OptTree/4 AsIs: t.Config#1/5 } Tile{ AsIs: e.AST#9/12 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_OptTree]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::splice_to_freelist_open( vm, context[6], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & BackEnd=9:1/4 t.Config#1/5 (/9 e.AST#9/7 )/10 # NoOpt/11 >/1
  if( ! refalrts::ident_term( identifiers[ident_NoOpt], context[11] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#9 as range 7
  //DEBUG: t.Config#1: 5
  //DEBUG: e.AST#9: 7

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} t.Config#1/5 (/9 {REMOVED TILE} )/10 # NoOpt/11 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & OptTree-CleanupMarkup/4 } Tile{ AsIs: e.AST#9/7 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_OptTreem_CleanupMarkup]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_BackEnd_A9B1("BackEnd=9:1", COOKIE1_, COOKIE2_, func_gen_BackEnd_A9B1);


static refalrts::FnResult func_gen_BackEnd_A8(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & BackEnd=8/4 (/7 e.OutputName#1/5 )/8 (/11 e.SrcName#1/9 )/12 s.GenMode#6/13 s.DebugInfo#2/14 s.OptPattern#3/15 s.OptResult#4/16 t.Config#1/17 e.AST#9/2 >/1
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
  // closed e.OutputName#1 as range 5
  // closed e.SrcName#1 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[16], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[18] = refalrts::tvar_left( context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#9 as range 2
  //DEBUG: e.OutputName#1: 5
  //DEBUG: e.SrcName#1: 9
  //DEBUG: s.GenMode#6: 13
  //DEBUG: s.DebugInfo#2: 14
  //DEBUG: s.OptPattern#3: 15
  //DEBUG: s.OptResult#4: 16
  //DEBUG: t.Config#1: 17
  //DEBUG: e.AST#9: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & BackEnd=9/4 AsIs: (/7 AsIs: e.OutputName#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.SrcName#1/9 AsIs: )/12 AsIs: s.GenMode#6/13 AsIs: s.DebugInfo#2/14 AsIs: s.OptPattern#3/15 AsIs: s.OptResult#4/16 } </19 & BackEnd=9:1/20 t.Config#1/17/21 (/23 Tile{ AsIs: e.AST#9/2 } )/24 </25 & Config-GetOptTree/26 Tile{ AsIs: t.Config#1/17 } >/27 >/28 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[19]);
  refalrts::alloc_name(vm, context[20], functions[efunc_gen_BackEnd_A9B1]);
  refalrts::copy_evar(vm, context[21], context[22], context[17], context[18]);
  refalrts::alloc_open_bracket(vm, context[23]);
  refalrts::alloc_close_bracket(vm, context[24]);
  refalrts::alloc_open_call(vm, context[25]);
  refalrts::alloc_name(vm, context[26], functions[efunc_Configm_GetOptTree]);
  refalrts::alloc_close_call(vm, context[27]);
  refalrts::alloc_close_call(vm, context[28]);
  refalrts::update_name(context[4], functions[efunc_gen_BackEnd_A9]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[28] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[25] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[24], context[26] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[19], context[23] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_BackEnd_A8("BackEnd=8", COOKIE1_, COOKIE2_, func_gen_BackEnd_A8);


static refalrts::FnResult func_gen_BackEnd_A7(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & BackEnd=7/4 (/7 e.OutputName#1/5 )/8 (/11 e.SrcName#1/9 )/12 s.GenMode#6/13 s.DebugInfo#2/14 s.OptPattern#3/15 s.OptResult#4/16 t.Config#1/17 e.AST#8/2 >/1
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
  // closed e.OutputName#1 as range 5
  // closed e.SrcName#1 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[16], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[18] = refalrts::tvar_left( context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#8 as range 2
  //DEBUG: e.OutputName#1: 5
  //DEBUG: e.SrcName#1: 9
  //DEBUG: s.GenMode#6: 13
  //DEBUG: s.DebugInfo#2: 14
  //DEBUG: s.OptPattern#3: 15
  //DEBUG: s.OptResult#4: 16
  //DEBUG: t.Config#1: 17
  //DEBUG: e.AST#8: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & BackEnd=8/4 AsIs: (/7 AsIs: e.OutputName#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.SrcName#1/9 AsIs: )/12 AsIs: s.GenMode#6/13 AsIs: s.DebugInfo#2/14 AsIs: s.OptPattern#3/15 AsIs: s.OptResult#4/16 AsIs: t.Config#1/17 } </19 & Log-AST/20 (/21 e.SrcName#1/9/22" (after desugar)"/24 )/26 Tile{ AsIs: e.AST#8/2 } >/27 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[19]);
  refalrts::alloc_name(vm, context[20], functions[efunc_Logm_AST]);
  refalrts::alloc_open_bracket(vm, context[21]);
  refalrts::copy_evar(vm, context[22], context[23], context[9], context[10]);
  refalrts::alloc_chars(vm, context[24], context[25], " (after desugar)", 16);
  refalrts::alloc_close_bracket(vm, context[26]);
  refalrts::alloc_close_call(vm, context[27]);
  refalrts::update_name(context[4], functions[efunc_gen_BackEnd_A8]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[19] );
  refalrts::link_brackets( context[21], context[26] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[27], context[27] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[19], context[26] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_BackEnd_A7("BackEnd=7", COOKIE1_, COOKIE2_, func_gen_BackEnd_A7);


static refalrts::FnResult func_gen_BackEnd_A6(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & BackEnd=6/4 (/7 e.OutputName#1/5 )/8 (/11 e.SrcName#1/9 )/12 s.GenMode#6/13 s.DebugInfo#2/14 s.OptPattern#3/15 s.OptResult#4/16 t.Config#1/17 s.MarkupContext#2/19 s.ConditionsMode#5/20 e.AST#7/2 >/1
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
  // closed e.OutputName#1 as range 5
  // closed e.SrcName#1 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[16], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[18] = refalrts::tvar_left( context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[19], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[20], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#7 as range 2
  //DEBUG: e.OutputName#1: 5
  //DEBUG: e.SrcName#1: 9
  //DEBUG: s.GenMode#6: 13
  //DEBUG: s.DebugInfo#2: 14
  //DEBUG: s.OptPattern#3: 15
  //DEBUG: s.OptResult#4: 16
  //DEBUG: t.Config#1: 17
  //DEBUG: s.MarkupContext#2: 19
  //DEBUG: s.ConditionsMode#5: 20
  //DEBUG: e.AST#7: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & BackEnd=7/4 AsIs: (/7 AsIs: e.OutputName#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.SrcName#1/9 AsIs: )/12 AsIs: s.GenMode#6/13 AsIs: s.DebugInfo#2/14 AsIs: s.OptPattern#3/15 AsIs: s.OptResult#4/16 AsIs: t.Config#1/17 } </21 & Desugar/22 Tile{ AsIs: s.MarkupContext#2/19 AsIs: s.ConditionsMode#5/20 AsIs: e.AST#7/2 AsIs: >/1 } >/23 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[21]);
  refalrts::alloc_name(vm, context[22], functions[efunc_Desugar]);
  refalrts::alloc_close_call(vm, context[23]);
  refalrts::update_name(context[4], functions[efunc_gen_BackEnd_A7]);
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[21] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[19], context[1] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_BackEnd_A6("BackEnd=6", COOKIE1_, COOKIE2_, func_gen_BackEnd_A6);


static refalrts::FnResult func_gen_BackEnd_A5(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & BackEnd=5/4 (/7 e.OutputName#1/5 )/8 (/11 e.SrcName#1/9 )/12 s.DebugInfo#2/13 s.OptPattern#3/14 s.OptResult#4/15 t.Config#1/16 s.MarkupContext#2/18 s.ConditionsMode#5/19 (/22 e.AST#1/20 )/23 s.GenMode#6/24 >/1
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
  // closed e.OutputName#1 as range 5
  // closed e.SrcName#1 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[17] = refalrts::tvar_left( context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[18], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[19], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[20] = 0;
  context[21] = 0;
  context[22] = refalrts::brackets_left( context[20], context[21], context[2], context[3] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[22], context[23]);
  // closed e.AST#1 as range 20
  if( ! refalrts::svar_left( context[24], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.OutputName#1: 5
  //DEBUG: e.SrcName#1: 9
  //DEBUG: s.DebugInfo#2: 13
  //DEBUG: s.OptPattern#3: 14
  //DEBUG: s.OptResult#4: 15
  //DEBUG: t.Config#1: 16
  //DEBUG: s.MarkupContext#2: 18
  //DEBUG: s.ConditionsMode#5: 19
  //DEBUG: e.AST#1: 20
  //DEBUG: s.GenMode#6: 24

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & BackEnd=6/4 AsIs: (/7 AsIs: e.OutputName#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.SrcName#1/9 AsIs: )/12 } Tile{ AsIs: s.GenMode#6/24 } Tile{ AsIs: s.DebugInfo#2/13 AsIs: s.OptPattern#3/14 AsIs: s.OptResult#4/15 AsIs: t.Config#1/16 AsIs: s.MarkupContext#2/18 AsIs: s.ConditionsMode#5/19 HalfReuse: </22 } Tile{ HalfReuse: & CreateMetaFunctions/23 } Tile{ AsIs: e.AST#1/20 } >/25 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_call(vm, context[25]);
  refalrts::update_name(context[4], functions[efunc_gen_BackEnd_A6]);
  refalrts::reinit_open_call(context[22]);
  refalrts::reinit_name(context[23], functions[efunc_CreateMetaFunctions]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[22] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[13], context[22] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_BackEnd_A5("BackEnd=5", COOKIE1_, COOKIE2_, func_gen_BackEnd_A5);


static refalrts::FnResult func_gen_BackEnd_A4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & BackEnd=4/4 (/7 e.OutputName#1/5 )/8 (/11 e.SrcName#1/9 )/12 s.DebugInfo#2/13 s.OptPattern#3/14 s.OptResult#4/15 t.Config#1/16 s.MarkupContext#2/18 (/21 e.AST#1/19 )/22 s.ConditionsMode#5/23 >/1
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
  // closed e.OutputName#1 as range 5
  // closed e.SrcName#1 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[17] = refalrts::tvar_left( context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[18], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[19] = 0;
  context[20] = 0;
  context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[21], context[22]);
  // closed e.AST#1 as range 19
  if( ! refalrts::svar_left( context[23], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.OutputName#1: 5
  //DEBUG: e.SrcName#1: 9
  //DEBUG: s.DebugInfo#2: 13
  //DEBUG: s.OptPattern#3: 14
  //DEBUG: s.OptResult#4: 15
  //DEBUG: t.Config#1: 16
  //DEBUG: s.MarkupContext#2: 18
  //DEBUG: e.AST#1: 19
  //DEBUG: s.ConditionsMode#5: 23

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.ConditionsMode#5/23 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & BackEnd=5/4 AsIs: (/7 AsIs: e.OutputName#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.SrcName#1/9 AsIs: )/12 AsIs: s.DebugInfo#2/13 AsIs: s.OptPattern#3/14 AsIs: s.OptResult#4/15 AsIs: t.Config#1/16 AsIs: s.MarkupContext#2/18 HalfReuse: s.ConditionsMode5 #23/21 } (/24 Tile{ AsIs: e.AST#1/19 } Tile{ AsIs: )/22 } </25 & Config-GetGenMode/26 t.Config#1/16/27 >/29 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[24]);
  refalrts::alloc_open_call(vm, context[25]);
  refalrts::alloc_name(vm, context[26], functions[efunc_Configm_GetGenMode]);
  refalrts::copy_evar(vm, context[27], context[28], context[16], context[17]);
  refalrts::alloc_close_call(vm, context[29]);
  refalrts::update_name(context[4], functions[efunc_gen_BackEnd_A5]);
  refalrts::reinit_svar( context[21], context[23] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[29] );
  refalrts::push_stack( vm, context[25] );
  refalrts::link_brackets( context[24], context[22] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[25], context[29] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  refalrts::splice_to_freelist_open( vm, context[21], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_BackEnd_A4("BackEnd=4", COOKIE1_, COOKIE2_, func_gen_BackEnd_A4);


static refalrts::FnResult func_gen_BackEnd_A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & BackEnd=3/4 (/7 e.OutputName#1/5 )/8 (/11 e.SrcName#1/9 )/12 s.DebugInfo#2/13 s.OptPattern#3/14 t.Config#1/15 s.MarkupContext#2/17 (/20 e.AST#1/18 )/21 s.OptResult#4/22 >/1
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
  // closed e.OutputName#1 as range 5
  // closed e.SrcName#1 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
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
  // closed e.AST#1 as range 18
  if( ! refalrts::svar_left( context[22], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.OutputName#1: 5
  //DEBUG: e.SrcName#1: 9
  //DEBUG: s.DebugInfo#2: 13
  //DEBUG: s.OptPattern#3: 14
  //DEBUG: t.Config#1: 15
  //DEBUG: s.MarkupContext#2: 17
  //DEBUG: e.AST#1: 18
  //DEBUG: s.OptResult#4: 22

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & BackEnd=4/4 AsIs: (/7 AsIs: e.OutputName#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.SrcName#1/9 AsIs: )/12 AsIs: s.DebugInfo#2/13 AsIs: s.OptPattern#3/14 } Tile{ AsIs: s.OptResult#4/22 } Tile{ AsIs: t.Config#1/15 AsIs: s.MarkupContext#2/17 AsIs: (/20 AsIs: e.AST#1/18 AsIs: )/21 } </23 & Config-GetConditionsMode/24 t.Config#1/15/25 >/27 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[23]);
  refalrts::alloc_name(vm, context[24], functions[efunc_Configm_GetConditionsMode]);
  refalrts::copy_evar(vm, context[25], context[26], context[15], context[16]);
  refalrts::alloc_close_call(vm, context[27]);
  refalrts::update_name(context[4], functions[efunc_gen_BackEnd_A4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[23] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[23], context[27] );
  res = refalrts::splice_evar( res, context[15], context[21] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_BackEnd_A3("BackEnd=3", COOKIE1_, COOKIE2_, func_gen_BackEnd_A3);


static refalrts::FnResult func_gen_BackEnd_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & BackEnd=2/4 (/7 e.OutputName#1/5 )/8 (/11 e.SrcName#1/9 )/12 s.DebugInfo#2/13 t.Config#1/14 s.MarkupContext#2/16 (/19 e.AST#1/17 )/20 s.OptPattern#3/21 >/1
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
  // closed e.OutputName#1 as range 5
  // closed e.SrcName#1 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[15] = refalrts::tvar_left( context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[16], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  // closed e.AST#1 as range 17
  if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.OutputName#1: 5
  //DEBUG: e.SrcName#1: 9
  //DEBUG: s.DebugInfo#2: 13
  //DEBUG: t.Config#1: 14
  //DEBUG: s.MarkupContext#2: 16
  //DEBUG: e.AST#1: 17
  //DEBUG: s.OptPattern#3: 21

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & BackEnd=3/4 AsIs: (/7 AsIs: e.OutputName#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.SrcName#1/9 AsIs: )/12 AsIs: s.DebugInfo#2/13 } Tile{ AsIs: s.OptPattern#3/21 } Tile{ AsIs: t.Config#1/14 AsIs: s.MarkupContext#2/16 AsIs: (/19 AsIs: e.AST#1/17 AsIs: )/20 } </22 & Config-GetOptResult/23 t.Config#1/14/24 >/26 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[22]);
  refalrts::alloc_name(vm, context[23], functions[efunc_Configm_GetOptResult]);
  refalrts::copy_evar(vm, context[24], context[25], context[14], context[15]);
  refalrts::alloc_close_call(vm, context[26]);
  refalrts::update_name(context[4], functions[efunc_gen_BackEnd_A3]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[26] );
  refalrts::push_stack( vm, context[22] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[22], context[26] );
  res = refalrts::splice_evar( res, context[14], context[20] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_BackEnd_A2("BackEnd=2", COOKIE1_, COOKIE2_, func_gen_BackEnd_A2);


static refalrts::FnResult func_gen_BackEnd_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & BackEnd=1/4 (/7 e.OutputName#1/5 )/8 (/11 e.SrcName#1/9 )/12 t.Config#1/13 (/17 e.AST#1/15 )/18 s.MarkupContext#2/19 s.DebugInfo#2/20 >/1
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
  // closed e.OutputName#1 as range 5
  // closed e.SrcName#1 as range 9
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  // closed e.AST#1 as range 15
  if( ! refalrts::svar_left( context[19], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[20], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.OutputName#1: 5
  //DEBUG: e.SrcName#1: 9
  //DEBUG: t.Config#1: 13
  //DEBUG: e.AST#1: 15
  //DEBUG: s.MarkupContext#2: 19
  //DEBUG: s.DebugInfo#2: 20

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & BackEnd=2/4 AsIs: (/7 AsIs: e.OutputName#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.SrcName#1/9 AsIs: )/12 } Tile{ AsIs: s.DebugInfo#2/20 } Tile{ AsIs: t.Config#1/13 } Tile{ AsIs: s.MarkupContext#2/19 } Tile{ AsIs: (/17 AsIs: e.AST#1/15 AsIs: )/18 } </21 & Config-GetOptPattern/22 t.Config#1/13/23 >/25 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[21]);
  refalrts::alloc_name(vm, context[22], functions[efunc_Configm_GetOptPattern]);
  refalrts::copy_evar(vm, context[23], context[24], context[13], context[14]);
  refalrts::alloc_close_call(vm, context[25]);
  refalrts::update_name(context[4], functions[efunc_gen_BackEnd_A2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[21] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[21], context[25] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_BackEnd_A1("BackEnd=1", COOKIE1_, COOKIE2_, func_gen_BackEnd_A1);


static refalrts::FnResult func_BackEnd(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & BackEnd/4 t.Config#1/5 (/9 e.SrcName#1/7 )/10 (/13 e.OutputName#1/11 )/14 e.AST#1/2 >/1
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
  // closed e.SrcName#1 as range 7
  // closed e.OutputName#1 as range 11
  // closed e.AST#1 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: e.SrcName#1: 7
  //DEBUG: e.OutputName#1: 11
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </15 Tile{ HalfReuse: & BackEnd=1/10 AsIs: (/13 AsIs: e.OutputName#1/11 AsIs: )/14 } (/16 Tile{ AsIs: e.SrcName#1/7 } )/17 t.Config#1/5/18 (/20 Tile{ AsIs: e.AST#1/2 } )/21 Tile{ AsIs: </0 Reuse: & Config-GetDebugMode/4 AsIs: t.Config#1/5 HalfReuse: >/9 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[15]);
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::alloc_close_bracket(vm, context[17]);
  refalrts::copy_evar(vm, context[18], context[19], context[5], context[6]);
  refalrts::alloc_open_bracket(vm, context[20]);
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::reinit_name(context[10], functions[efunc_gen_BackEnd_A1]);
  refalrts::update_name(context[4], functions[efunc_Configm_GetDebugMode]);
  refalrts::reinit_close_call(context[9]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[17], context[20] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[10], context[14] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_BackEnd("BackEnd", COOKIE1_, COOKIE2_, func_BackEnd);


static refalrts::FnResult func_gen_BackEndm_RASLModule_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & BackEnd-RASLModule:1/4 (/7 e.OutputName#1/5 )/8 e.ByteStream#2/2 >/1
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
  // closed e.OutputName#1 as range 5
  // closed e.ByteStream#2 as range 2
  //DEBUG: e.OutputName#1: 5
  //DEBUG: e.ByteStream#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & SaveBytes/4 AsIs: (/7 AsIs: e.OutputName#1/5 AsIs: )/8 AsIs: e.ByteStream#2/2 AsIs: >/1 } # Success/9 e.OutputName#1/5/10 Tile{ ]] }
  refalrts::alloc_ident(vm, context[9], identifiers[ident_Success]);
  refalrts::copy_evar(vm, context[10], context[11], context[5], context[6]);
  refalrts::update_name(context[4], functions[efunc_SaveBytes]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_BackEndm_RASLModule_B1("BackEnd-RASLModule:1", COOKIE1_, COOKIE2_, func_gen_BackEndm_RASLModule_B1);


static refalrts::FnResult func_BackEndm_RASLModule(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & BackEnd-RASLModule/4 t.RASLModule#1/5 e.OutputName#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.OutputName#1 as range 2
  //DEBUG: t.RASLModule#1: 5
  //DEBUG: e.OutputName#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & BackEnd-RASLModule:1/4 } (/7 Tile{ AsIs: e.OutputName#1/2 } )/8 </9 & GenProgram-RASL/10 Tile{ AsIs: t.RASLModule#1/5 } >/11 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_close_bracket(vm, context[8]);
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_GenProgramm_RASL]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_gen_BackEndm_RASLModule_B1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[10] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_BackEndm_RASLModule("BackEnd-RASLModule", COOKIE1_, COOKIE2_, func_BackEndm_RASLModule);


static refalrts::FnResult func_BackEndm_NativeModule(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & BackEnd-NativeModule/4 t.NativeModule#1/5 (/9 e.SrcName#1/7 )/10 e.OutputName#1/2 >/1
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
  // closed e.SrcName#1 as range 7
  // closed e.OutputName#1 as range 2
  //DEBUG: t.NativeModule#1: 5
  //DEBUG: e.SrcName#1: 7
  //DEBUG: e.OutputName#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & SaveFile/4 } (/11 e.OutputName#1/2/12 )/14 </15 & GenProgram-Native/16 Tile{ AsIs: (/9 AsIs: e.SrcName#1/7 AsIs: )/10 } (/17 Tile{ AsIs: e.OutputName#1/2 } )/18 Tile{ AsIs: t.NativeModule#1/5 } >/19 >/20 (/21 e.OutputName#1/2/22 Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::copy_evar(vm, context[12], context[13], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[14]);
  refalrts::alloc_open_call(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_GenProgramm_Native]);
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::alloc_close_bracket(vm, context[18]);
  refalrts::alloc_close_call(vm, context[19]);
  refalrts::alloc_close_call(vm, context[20]);
  refalrts::alloc_open_bracket(vm, context[21]);
  refalrts::copy_evar(vm, context[22], context[23], context[2], context[3]);
  refalrts::update_name(context[4], functions[efunc_SaveFile]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[21], context[1] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[15] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::link_brackets( context[11], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[19], context[21] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[11], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_BackEndm_NativeModule("BackEnd-NativeModule", COOKIE1_, COOKIE2_, func_BackEndm_NativeModule);


static refalrts::FnResult func_gen_CreateMetaFunctions_S1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & CreateMetaFunctions$1\1/4 t.MetaSrcPos#3/9 (/7 e.Name#4/5 )/8 >/1
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
  // closed e.Name#4 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Name#4: 5
  //DEBUG: t.MetaSrcPos#3: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 } # Symbol/11 Tile{ HalfReuse: # Identifier/7 AsIs: e.Name#4/5 AsIs: )/8 HalfReuse: (/1 } # Symbol/12 # Name/13 Tile{ AsIs: t.MetaSrcPos#3/9 } e.Name#4/5/14 )/16 )/17 Tile{ ]] }
  refalrts::alloc_ident(vm, context[11], identifiers[ident_Symbol]);
  refalrts::alloc_ident(vm, context[12], identifiers[ident_Symbol]);
  refalrts::alloc_ident(vm, context[13], identifiers[ident_Name]);
  refalrts::copy_evar(vm, context[14], context[15], context[5], context[6]);
  refalrts::alloc_close_bracket(vm, context[16]);
  refalrts::alloc_close_bracket(vm, context[17]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_ident(context[7], identifiers[ident_Identifier]);
  refalrts::reinit_open_bracket(context[1]);
  refalrts::link_brackets( context[0], context[17] );
  refalrts::link_brackets( context[1], context[16] );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[7], context[1] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CreateMetaFunctions_S1L1("CreateMetaFunctions$1\\1", COOKIE1_, COOKIE2_, func_gen_CreateMetaFunctions_S1L1);


static refalrts::FnResult func_gen_CreateMetaFunctions_S1A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & CreateMetaFunctions$1=2/4 (/7 e.AST#2/5 )/8 (/11 e.FunctionNames#2/9 )/12 t.MetaSrcPos#3/13 s._ScopeClass#3/15 e._Name#3/2 >/1
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
  // closed e.AST#2 as range 5
  // closed e.FunctionNames#2 as range 9
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e._Name#3 as range 2
  //DEBUG: e.AST#2: 5
  //DEBUG: e.FunctionNames#2: 9
  //DEBUG: t.MetaSrcPos#3: 13
  //DEBUG: s._ScopeClass#3: 15
  //DEBUG: e._Name#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s._ScopeClass#3/15 e._Name#3/2 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.AST#2/5 } Tile{ AsIs: (/7 } Tile{ HalfReuse: # Function/12 AsIs: t.MetaSrcPos#3/13 } Tile{ HalfReuse: # GN-Local/8 AsIs: (/11 }"$table"/16 )/18 # Metatable/19 Tile{ AsIs: </0 Reuse: & Map@10/4 } t.MetaSrcPos#3/13/20 Tile{ AsIs: e.FunctionNames#2/9 } >/22 Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_chars(vm, context[16], context[17], "$table", 6);
  refalrts::alloc_close_bracket(vm, context[18]);
  refalrts::alloc_ident(vm, context[19], identifiers[ident_Metatable]);
  refalrts::copy_evar(vm, context[20], context[21], context[13], context[14]);
  refalrts::alloc_close_call(vm, context[22]);
  refalrts::reinit_ident(context[12], identifiers[ident_Function]);
  refalrts::reinit_ident(context[8], identifiers[ident_GNm_Local]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z10]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[7], context[1] );
  refalrts::push_stack( vm, context[22] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[18] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[16], context[19] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[12], context[14] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CreateMetaFunctions_S1A2("CreateMetaFunctions$1=2", COOKIE1_, COOKIE2_, func_gen_CreateMetaFunctions_S1A2);


static refalrts::FnResult func_gen_CreateMetaFunctions_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & CreateMetaFunctions$1=1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CreateMetaFunctions$1=1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 e.new#3/2 >/1
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
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  // closed e.new#3 as range 2
  do {
    // </0 & CreateMetaFunctions$1=1/4 (/7 t.#0/19 s._ScopeClass#3/21 e.0#0/13 )/8 (/11 e.FunctionNames#2/15 )/12 e.AST#2/17 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[2];
    context[18] = context[3];
    // closed e.FunctionNames#2 as range 15
    // closed e.AST#2 as range 17
    context[20] = refalrts::tvar_left( context[19], context[13], context[14] );
    if( ! context[20] )
      continue;
    if( ! refalrts::svar_left( context[21], context[13], context[14] ) )
      continue;
    // closed e.0#0 as range 13
    //DEBUG: e.FunctionNames#2: 15
    //DEBUG: e.AST#2: 17
    //DEBUG: t.#0: 19
    //DEBUG: s._ScopeClass#3: 21
    //DEBUG: e.0#0: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} s._ScopeClass#3/21 e.0#0/13 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.AST#2/17 } (/22 # Function/23 t.#0/19/24 Tile{ HalfReuse: # GN-Local/8 AsIs: (/11 }"$table"/26 Tile{ AsIs: )/12 } Tile{ HalfReuse: # Metatable/0 HalfReuse: </4 HalfReuse: & Map@10/7 AsIs: t.#0/19 } Tile{ AsIs: e.FunctionNames#2/15 } >/28 Tile{ HalfReuse: )/1 ]] }
    refalrts::alloc_open_bracket(vm, context[22]);
    refalrts::alloc_ident(vm, context[23], identifiers[ident_Function]);
    refalrts::copy_evar(vm, context[24], context[25], context[19], context[20]);
    refalrts::alloc_chars(vm, context[26], context[27], "$table", 6);
    refalrts::alloc_close_call(vm, context[28]);
    refalrts::reinit_ident(context[8], identifiers[ident_GNm_Local]);
    refalrts::reinit_ident(context[0], identifiers[ident_Metatable]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[7], functions[efunc_gen_Map_Z10]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[22], context[1] );
    refalrts::push_stack( vm, context[28] );
    refalrts::push_stack( vm, context[4] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[28], context[28] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[0], context[20] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[8], context[11] );
    res = refalrts::splice_evar( res, context[22], context[25] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CreateMetaFunctions$1=1/4 (/7 e.MetaInfo#1/5 )/8 (/11 e.FunctionNames#2/9 )/12 e.AST#2/2 >/1
  // closed e.MetaInfo#1 as range 5
  // closed e.FunctionNames#2 as range 9
  // closed e.AST#2 as range 2
  //DEBUG: e.MetaInfo#1: 5
  //DEBUG: e.FunctionNames#2: 9
  //DEBUG: e.AST#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CreateMetaFunctions$1=2*1/4 AsIs: (/7 } Tile{ AsIs: e.AST#2/2 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.FunctionNames#2/9 AsIs: )/12 } Tile{ AsIs: e.MetaInfo#1/5 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_CreateMetaFunctions_S1A2D1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CreateMetaFunctions_S1A1("CreateMetaFunctions$1=1", COOKIE1_, COOKIE2_, func_gen_CreateMetaFunctions_S1A1);


static refalrts::FnResult func_gen_CreateMetaFunctions_S1A1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 107 elems
  refalrts::Iter context[107];
  refalrts::zeros( context, 107 );
  // </0 & CreateMetaFunctions$1=1\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CreateMetaFunctions$1=1\1/4 (/7 e.new#1/5 )/8 t.new#2/9 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & CreateMetaFunctions$1=1\1/4 (/7 e.new#7/11 )/8 (/9 s.new#3/15 t.new#4/16 s.new#5/18 e.new#6/13 )/10 >/1
    context[11] = context[5];
    context[12] = context[6];
    context[13] = 0;
    context[14] = 0;
    if( ! refalrts::brackets_term( context[13], context[14], context[9] ) )
      continue;
    // closed e.new#7 as range 11
    if( ! refalrts::svar_left( context[15], context[13], context[14] ) )
      continue;
    context[17] = refalrts::tvar_left( context[16], context[13], context[14] );
    if( ! context[17] )
      continue;
    if( ! refalrts::svar_left( context[18], context[13], context[14] ) )
      continue;
    // closed e.new#6 as range 13
    do {
      // </0 & CreateMetaFunctions$1=1\1/4 (/7 e.FunctionNames#2/19 )/8 (/9 # Meta/15 t.SrcPos#2/16 s.ScopeClass#2/18 e.Name#2/21 )/10 >/1
      context[19] = context[11];
      context[20] = context[12];
      context[21] = context[13];
      context[22] = context[14];
      if( ! refalrts::ident_term( identifiers[ident_Meta], context[15] ) )
        continue;
      // closed e.FunctionNames#2 as range 19
      // closed e.Name#2 as range 21
      //DEBUG: t.SrcPos#2: 16
      //DEBUG: s.ScopeClass#2: 18
      //DEBUG: e.FunctionNames#2: 19
      //DEBUG: e.Name#2: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/23 Tile{ AsIs: e.FunctionNames#2/19 } (/24 e.Name#2/21/25 Tile{ HalfReuse: )/0 HalfReuse: )/4 AsIs: (/7 } # Declaration/27 t.SrcPos#2/16/28 # GN-Entry/30"__Meta_"/31 e.Name#2/21/33 )/35 (/36 # Declaration/37 t.SrcPos#2/16/38 # GN-Entry/40"__Step-Drop"/41 Tile{ AsIs: )/8 AsIs: (/9 Reuse: # Inline/15 AsIs: t.SrcPos#2/16 AsIs: s.ScopeClass#2/18 AsIs: e.Name#2/21 AsIs: )/10 HalfReuse: (/1 } # Function/43 t.SrcPos#2/16/44 s.ScopeClass#2/18/46 (/47 e.Name#2/21/48 )/50 # Sentences/51 (/52 (/53 (/54 # TkVariable/55 t.SrcPos#2/16/56"eArg"/58 )/60 )/61 (/62 (/63 # CallBrackets/64 (/65 # Symbol/66 # Name/67 t.SrcPos#2/16/68"__Step-Drop"/70 )/72 )/73 (/74 # CallBrackets/75 (/76 # Symbol/77 # Name/78 t.SrcPos#2/16/79"__Meta_"/81 e.Name#2/21/83 )/85 (/86 # TkVariable/87 t.SrcPos#2/16/88"eArg"/90 )/92 (/93 # Symbol/94 # Name/95 t.SrcPos#2/16/96"$table"/98 )/100 )/101 )/102 (/103 )/104 )/105 )/106 Tile{ ]] }
      refalrts::alloc_open_bracket(vm, context[23]);
      refalrts::alloc_open_bracket(vm, context[24]);
      refalrts::copy_evar(vm, context[25], context[26], context[21], context[22]);
      refalrts::alloc_ident(vm, context[27], identifiers[ident_Declaration]);
      refalrts::copy_evar(vm, context[28], context[29], context[16], context[17]);
      refalrts::alloc_ident(vm, context[30], identifiers[ident_GNm_Entry]);
      refalrts::alloc_chars(vm, context[31], context[32], "__Meta_", 7);
      refalrts::copy_evar(vm, context[33], context[34], context[21], context[22]);
      refalrts::alloc_close_bracket(vm, context[35]);
      refalrts::alloc_open_bracket(vm, context[36]);
      refalrts::alloc_ident(vm, context[37], identifiers[ident_Declaration]);
      refalrts::copy_evar(vm, context[38], context[39], context[16], context[17]);
      refalrts::alloc_ident(vm, context[40], identifiers[ident_GNm_Entry]);
      refalrts::alloc_chars(vm, context[41], context[42], "__Step-Drop", 11);
      refalrts::alloc_ident(vm, context[43], identifiers[ident_Function]);
      refalrts::copy_evar(vm, context[44], context[45], context[16], context[17]);
      refalrts::copy_stvar(vm, context[46], context[18]);
      refalrts::alloc_open_bracket(vm, context[47]);
      refalrts::copy_evar(vm, context[48], context[49], context[21], context[22]);
      refalrts::alloc_close_bracket(vm, context[50]);
      refalrts::alloc_ident(vm, context[51], identifiers[ident_Sentences]);
      refalrts::alloc_open_bracket(vm, context[52]);
      refalrts::alloc_open_bracket(vm, context[53]);
      refalrts::alloc_open_bracket(vm, context[54]);
      refalrts::alloc_ident(vm, context[55], identifiers[ident_TkVariable]);
      refalrts::copy_evar(vm, context[56], context[57], context[16], context[17]);
      refalrts::alloc_chars(vm, context[58], context[59], "eArg", 4);
      refalrts::alloc_close_bracket(vm, context[60]);
      refalrts::alloc_close_bracket(vm, context[61]);
      refalrts::alloc_open_bracket(vm, context[62]);
      refalrts::alloc_open_bracket(vm, context[63]);
      refalrts::alloc_ident(vm, context[64], identifiers[ident_CallBrackets]);
      refalrts::alloc_open_bracket(vm, context[65]);
      refalrts::alloc_ident(vm, context[66], identifiers[ident_Symbol]);
      refalrts::alloc_ident(vm, context[67], identifiers[ident_Name]);
      refalrts::copy_evar(vm, context[68], context[69], context[16], context[17]);
      refalrts::alloc_chars(vm, context[70], context[71], "__Step-Drop", 11);
      refalrts::alloc_close_bracket(vm, context[72]);
      refalrts::alloc_close_bracket(vm, context[73]);
      refalrts::alloc_open_bracket(vm, context[74]);
      refalrts::alloc_ident(vm, context[75], identifiers[ident_CallBrackets]);
      refalrts::alloc_open_bracket(vm, context[76]);
      refalrts::alloc_ident(vm, context[77], identifiers[ident_Symbol]);
      refalrts::alloc_ident(vm, context[78], identifiers[ident_Name]);
      refalrts::copy_evar(vm, context[79], context[80], context[16], context[17]);
      refalrts::alloc_chars(vm, context[81], context[82], "__Meta_", 7);
      refalrts::copy_evar(vm, context[83], context[84], context[21], context[22]);
      refalrts::alloc_close_bracket(vm, context[85]);
      refalrts::alloc_open_bracket(vm, context[86]);
      refalrts::alloc_ident(vm, context[87], identifiers[ident_TkVariable]);
      refalrts::copy_evar(vm, context[88], context[89], context[16], context[17]);
      refalrts::alloc_chars(vm, context[90], context[91], "eArg", 4);
      refalrts::alloc_close_bracket(vm, context[92]);
      refalrts::alloc_open_bracket(vm, context[93]);
      refalrts::alloc_ident(vm, context[94], identifiers[ident_Symbol]);
      refalrts::alloc_ident(vm, context[95], identifiers[ident_Name]);
      refalrts::copy_evar(vm, context[96], context[97], context[16], context[17]);
      refalrts::alloc_chars(vm, context[98], context[99], "$table", 6);
      refalrts::alloc_close_bracket(vm, context[100]);
      refalrts::alloc_close_bracket(vm, context[101]);
      refalrts::alloc_close_bracket(vm, context[102]);
      refalrts::alloc_open_bracket(vm, context[103]);
      refalrts::alloc_close_bracket(vm, context[104]);
      refalrts::alloc_close_bracket(vm, context[105]);
      refalrts::alloc_close_bracket(vm, context[106]);
      refalrts::reinit_close_bracket(context[0]);
      refalrts::reinit_close_bracket(context[4]);
      refalrts::update_ident(context[15], identifiers[ident_Inline]);
      refalrts::reinit_open_bracket(context[1]);
      refalrts::link_brackets( context[1], context[106] );
      refalrts::link_brackets( context[52], context[105] );
      refalrts::link_brackets( context[103], context[104] );
      refalrts::link_brackets( context[62], context[102] );
      refalrts::link_brackets( context[74], context[101] );
      refalrts::link_brackets( context[93], context[100] );
      refalrts::link_brackets( context[86], context[92] );
      refalrts::link_brackets( context[76], context[85] );
      refalrts::link_brackets( context[63], context[73] );
      refalrts::link_brackets( context[65], context[72] );
      refalrts::link_brackets( context[53], context[61] );
      refalrts::link_brackets( context[54], context[60] );
      refalrts::link_brackets( context[47], context[50] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::link_brackets( context[36], context[8] );
      refalrts::link_brackets( context[7], context[35] );
      refalrts::link_brackets( context[23], context[4] );
      refalrts::link_brackets( context[24], context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[43], context[106] );
      res = refalrts::splice_evar( res, context[8], context[1] );
      res = refalrts::splice_evar( res, context[27], context[42] );
      res = refalrts::splice_evar( res, context[0], context[7] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_evar( res, context[24], context[24] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[23], context[23] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & CreateMetaFunctions$1=1\1/4 (/7 e.FunctionNames#2/19 )/8 (/9 # Function/15 t.SrcPos#2/16 s.ScopeClass#2/18 (/25 e.Name#2/23 )/26 e.Body#2/21 )/10 >/1
      context[19] = context[11];
      context[20] = context[12];
      context[21] = context[13];
      context[22] = context[14];
      if( ! refalrts::ident_term( identifiers[ident_Function], context[15] ) )
        continue;
      context[23] = 0;
      context[24] = 0;
      context[25] = refalrts::brackets_left( context[23], context[24], context[21], context[22] );
      if( ! context[25] )
        continue;
      refalrts::bracket_pointers(context[25], context[26]);
      // closed e.FunctionNames#2 as range 19
      // closed e.Name#2 as range 23
      // closed e.Body#2 as range 21
      //DEBUG: t.SrcPos#2: 16
      //DEBUG: s.ScopeClass#2: 18
      //DEBUG: e.FunctionNames#2: 19
      //DEBUG: e.Name#2: 23
      //DEBUG: e.Body#2: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} & CreateMetaFunctions$1=1\1/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.FunctionNames#2/19 } Tile{ AsIs: (/7 } e.Name#2/23/27 Tile{ HalfReuse: )/1 } Tile{ AsIs: )/8 AsIs: (/9 AsIs: # Function/15 AsIs: t.SrcPos#2/16 AsIs: s.ScopeClass#2/18 AsIs: (/25 AsIs: e.Name#2/23 AsIs: )/26 AsIs: e.Body#2/21 AsIs: )/10 } Tile{ ]] }
      refalrts::copy_evar(vm, context[27], context[28], context[23], context[24]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[9], context[10] );
      refalrts::link_brackets( context[25], context[26] );
      refalrts::link_brackets( context[0], context[8] );
      refalrts::link_brackets( context[7], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[8], context[10] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::splice_to_freelist_open( vm, context[0], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & CreateMetaFunctions$1=1\1/4 (/7 e.FunctionNames#2/19 )/8 (/9 s.Definition#2/15 t.SrcPos#2/16 s.ScopeClass#2/18 e.Name#2/21 )/10 >/1
    context[19] = context[11];
    context[20] = context[12];
    context[21] = context[13];
    context[22] = context[14];
    // closed e.FunctionNames#2 as range 19
    // closed e.Name#2 as range 21
    //DEBUG: t.SrcPos#2: 16
    //DEBUG: s.Definition#2: 15
    //DEBUG: s.ScopeClass#2: 18
    //DEBUG: e.FunctionNames#2: 19
    //DEBUG: e.Name#2: 21
    //15: s.Definition#2
    //16: t.SrcPos#2
    //18: s.ScopeClass#2
    //19: e.FunctionNames#2
    //21: e.Name#2
    //28: s.Definition#2

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_name(vm, context[25], functions[efunc_gen_CreateMetaFunctions_S1A1L1S3C1]);
    refalrts::alloc_open_call(vm, context[26]);
    refalrts::alloc_name(vm, context[27], functions[efunc_OneOf]);
    refalrts::copy_stvar(vm, context[28], context[15]);
    refalrts::alloc_ident(vm, context[29], identifiers[ident_Swap]);
    refalrts::alloc_ident(vm, context[30], identifiers[ident_Enum]);
    refalrts::alloc_close_call(vm, context[31]);
    refalrts::alloc_close_call(vm, context[24]);
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[23] );
    res = refalrts::splice_elem( res, context[24] );
    refalrts::push_stack( vm, context[31] );
    refalrts::push_stack( vm, context[26] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_stvar( res, context[28] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_elem( res, context[23] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </23 & CreateMetaFunctions$1=1\1$3?1/27 # True/28 >/24
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::call_left( context[25], context[26], context[23], context[24] );
      context[28] = refalrts::ident_left( identifiers[ident_True], context[25], context[26] );
      if( ! context[28] )
        continue;
      if( ! refalrts::empty_seq( context[25], context[26] ) )
        continue;
      //DEBUG: t.SrcPos#2: 16
      //DEBUG: s.Definition#2: 15
      //DEBUG: s.ScopeClass#2: 18
      //DEBUG: e.FunctionNames#2: 19
      //DEBUG: e.Name#2: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} & CreateMetaFunctions$1=1\1/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} </23 & CreateMetaFunctions$1=1\1$3?1/27 # True/28 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.FunctionNames#2/19 } Tile{ AsIs: (/7 } e.Name#2/21/29 Tile{ HalfReuse: )/24 } Tile{ AsIs: )/8 AsIs: (/9 AsIs: s.Definition#2/15 AsIs: t.SrcPos#2/16 AsIs: s.ScopeClass#2/18 AsIs: e.Name#2/21 AsIs: )/10 } Tile{ ]] }
      refalrts::copy_evar(vm, context[29], context[30], context[21], context[22]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_close_bracket(context[24]);
      refalrts::link_brackets( context[9], context[10] );
      refalrts::link_brackets( context[0], context[8] );
      refalrts::link_brackets( context[7], context[24] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[8], context[10] );
      res = refalrts::splice_evar( res, context[24], context[24] );
      res = refalrts::splice_evar( res, context[29], context[30] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::splice_to_freelist_open( vm, context[0], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[23], context[24]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CreateMetaFunctions$1=1\1/4 (/7 e.FunctionNames#2/5 )/8 t.OtherItem#2/9 >/1
  // closed e.FunctionNames#2 as range 5
  //DEBUG: t.OtherItem#2: 9
  //DEBUG: e.FunctionNames#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CreateMetaFunctions$1=1\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.FunctionNames#2/5 AsIs: )/8 AsIs: t.OtherItem#2/9 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[10] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CreateMetaFunctions_S1A1L1("CreateMetaFunctions$1=1\\1", COOKIE1_, COOKIE2_, func_gen_CreateMetaFunctions_S1A1L1);


static refalrts::FnResult func_CreateMetaFunctions(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & CreateMetaFunctions/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & CreateMetaFunctions/4 e.AST-B#1/7 (/13 # Meta/15 e.MetaInfo#1/11 )/14 e.AST-E#1/9 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::brackets_left( context[11], context[12], context[9], context[10] );
      if( ! context[13] )
        continue;
      refalrts::bracket_pointers(context[13], context[14]);
      context[15] = refalrts::ident_left( identifiers[ident_Meta], context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.MetaInfo#1 as range 11
      // closed e.AST-E#1 as range 9
      //DEBUG: e.AST-B#1: 7
      //DEBUG: e.MetaInfo#1: 11
      //DEBUG: e.AST-E#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </16 & CreateMetaFunctions$1=1/17 (/18 e.MetaInfo#1/11/19 )/21 </22 & MapAccum@1/23 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: e.AST-B#1/7 AsIs: (/13 AsIs: # Meta/15 AsIs: e.MetaInfo#1/11 AsIs: )/14 AsIs: e.AST-E#1/9 AsIs: >/1 } >/24 Tile{ ]] }
      refalrts::alloc_open_call(vm, context[16]);
      refalrts::alloc_name(vm, context[17], functions[efunc_gen_CreateMetaFunctions_S1A1]);
      refalrts::alloc_open_bracket(vm, context[18]);
      refalrts::copy_evar(vm, context[19], context[20], context[11], context[12]);
      refalrts::alloc_close_bracket(vm, context[21]);
      refalrts::alloc_open_call(vm, context[22]);
      refalrts::alloc_name(vm, context[23], functions[efunc_gen_MapAccum_Z1]);
      refalrts::alloc_close_call(vm, context[24]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_close_bracket(context[4]);
      refalrts::push_stack( vm, context[24] );
      refalrts::push_stack( vm, context[16] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[22] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::link_brackets( context[0], context[4] );
      refalrts::link_brackets( context[18], context[21] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[24], context[24] );
      res = refalrts::splice_evar( res, context[0], context[1] );
      res = refalrts::splice_evar( res, context[16], context[23] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CreateMetaFunctions/4 e.AST#1/2 >/1
  // closed e.AST#1 as range 2
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CreateMetaFunctions/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.AST#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CreateMetaFunctions("CreateMetaFunctions", COOKIE1_, COOKIE2_, func_CreateMetaFunctions);


static refalrts::FnResult func_gen_GrammarCheck_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & GrammarCheck:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & GrammarCheck:1/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & GrammarCheck:1/4 # EL-NoErrors/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_ELm_NoErrors], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & GrammarCheck:1/4 # EL-NoErrors/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_Success]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GrammarCheck:1/4 # EL-HasErrors/5 >/1
  if( ! refalrts::ident_term( identifiers[ident_ELm_HasErrors], context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & GrammarCheck:1/4 # EL-HasErrors/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # Fails/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_Fails]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GrammarCheck_B1("GrammarCheck:1", COOKIE1_, COOKIE2_, func_gen_GrammarCheck_B1);


static refalrts::FnResult func_gen_GrammarCheck_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & GrammarCheck=1/4 t.ErrorList#2/5 e.AST#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#2 as range 2
  //DEBUG: t.ErrorList#2: 5
  //DEBUG: e.AST#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.AST#2/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GrammarCheck:1/4 } </7 & EL-Destroy/8 Tile{ AsIs: t.ErrorList#2/5 } >/9 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_ELm_Destroy]);
  refalrts::alloc_close_call(vm, context[9]);
  refalrts::update_name(context[4], functions[efunc_gen_GrammarCheck_B1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GrammarCheck_A1("GrammarCheck=1", COOKIE1_, COOKIE2_, func_gen_GrammarCheck_A1);


static refalrts::FnResult func_GrammarCheck(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & GrammarCheck/4 t.Config#1/5 s.Dialect#1/7 e.SrcName#1/2 >/1
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
  // closed e.SrcName#1 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: s.Dialect#1: 7
  //DEBUG: e.SrcName#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </8 & GrammarCheck=1/9 Tile{ AsIs: </0 Reuse: & LoadAST/4 AsIs: t.Config#1/5 AsIs: s.Dialect#1/7 AsIs: e.SrcName#1/2 AsIs: >/1 } >/10 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_gen_GrammarCheck_A1]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::update_name(context[4], functions[efunc_LoadAST]);
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GrammarCheck("GrammarCheck", 0U, 0U, func_GrammarCheck);


static refalrts::FnResult func_gen_Map_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  // </0 & Map@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@1/4 e.new#1/2 (/7 e.new#2/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 2
  // closed e.new#2 as range 5
  do {
    // </0 & Map@1/4 e.new#3/9 (/7 t.new#4/13 e.new#5/11 )/8 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[11] = context[5];
    context[12] = context[6];
    // closed e.new#3 as range 9
    context[14] = refalrts::tvar_left( context[13], context[11], context[12] );
    if( ! context[14] )
      continue;
    // closed e.new#5 as range 11
    do {
      // </0 & Map@1/4 e.FileName#1/15 (/7 (/13 # TkWarning/21 t.0#0/22 e.1#0/19 )/14 e.Tail#1/17 )/8 >/1
      context[15] = context[9];
      context[16] = context[10];
      context[17] = context[11];
      context[18] = context[12];
      context[19] = 0;
      context[20] = 0;
      if( ! refalrts::brackets_term( context[19], context[20], context[13] ) )
        continue;
      context[21] = refalrts::ident_left( identifiers[ident_TkWarning], context[19], context[20] );
      if( ! context[21] )
        continue;
      // closed e.FileName#1 as range 15
      // closed e.Tail#1 as range 17
      context[23] = refalrts::tvar_left( context[22], context[19], context[20] );
      if( ! context[23] )
        continue;
      // closed e.1#0 as range 19
      //DEBUG: e.FileName#1: 15
      //DEBUG: e.Tail#1: 17
      //DEBUG: t.0#0: 22
      //DEBUG: e.1#0: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Prout/4 AsIs: e.FileName#1/15 HalfReuse: ':'/7 HalfReuse: </13 HalfReuse: & StrFromPos/21 AsIs: t.0#0/22 } >/24":WARNING:"/25 Tile{ AsIs: e.1#0/19 } >/27 </28 & Map@1/29 e.FileName#1/15/30 Tile{ HalfReuse: (/14 AsIs: e.Tail#1/17 AsIs: )/8 AsIs: >/1 ]] }
      refalrts::alloc_close_call(vm, context[24]);
      refalrts::alloc_chars(vm, context[25], context[26], ":WARNING:", 9);
      refalrts::alloc_close_call(vm, context[27]);
      refalrts::alloc_open_call(vm, context[28]);
      refalrts::alloc_name(vm, context[29], functions[efunc_gen_Map_Z1]);
      refalrts::copy_evar(vm, context[30], context[31], context[15], context[16]);
      refalrts::update_name(context[4], functions[efunc_Prout]);
      refalrts::reinit_char(context[7], ':');
      refalrts::reinit_open_call(context[13]);
      refalrts::reinit_name(context[21], functions[efunc_StrFromPos]);
      refalrts::reinit_open_bracket(context[14]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[28] );
      refalrts::link_brackets( context[14], context[8] );
      refalrts::push_stack( vm, context[27] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[24] );
      refalrts::push_stack( vm, context[13] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[14];
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[27], context[29] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[24], context[26] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@1/4 e.FileName#1/15 (/7 t.Next#1/13 e.Tail#1/17 )/8 >/1
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[11];
    context[18] = context[12];
    // closed e.FileName#1 as range 15
    // closed e.Tail#1 as range 17
    //DEBUG: t.Next#1: 13
    //DEBUG: e.FileName#1: 15
    //DEBUG: e.Tail#1: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Next#1/13 } Tile{ AsIs: </0 AsIs: & Map@1/4 AsIs: e.FileName#1/15 AsIs: (/7 } Tile{ AsIs: e.Tail#1/17 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@1/4 e.FileName#1/9 (/7 )/8 >/1
    context[9] = context[2];
    context[10] = context[3];
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.FileName#1 as range 9
    //DEBUG: e.FileName#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@1/4 e.FileName#1/9 (/7 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@1/4 e.FileName#1/2 (/7 e.items#0/5 )/8 >/1
  // closed e.FileName#1 as range 2
  // closed e.items#0 as range 5
  //DEBUG: e.FileName#1: 2
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@0/4 } [*]/9 & DisplayLexerWarnings\1/10 Tile{ AsIs: (/7 } Tile{ AsIs: e.FileName#1/2 } Tile{ AsIs: )/8 } {*}/11 Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_closure_head(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_DisplayLexerWarnings_L1]);
  refalrts::alloc_unwrapped_closure(vm, context[11], context[9]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  refalrts::wrap_closure( context[11] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z1("Map@1", COOKIE1_, COOKIE2_, func_gen_Map_Z1);


static refalrts::FnResult func_gen_Map_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  // </0 & Map@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@2/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Map@2/4 (/7 t.#0/13 s.Dialect#2/15 (/18 (/22 e.7#0/20 )/23 (/26 e.9#0/24 )/27 e.8#0/16 )/19 (/30 e.5#0/28 )/31 e.4#0/11 )/8 e.Tail#1/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      // closed e.Tail#1 as range 9
      context[14] = refalrts::tvar_left( context[13], context[11], context[12] );
      if( ! context[14] )
        continue;
      if( ! refalrts::svar_left( context[15], context[11], context[12] ) )
        continue;
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[11], context[12] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::brackets_left( context[20], context[21], context[16], context[17] );
      if( ! context[22] )
        continue;
      refalrts::bracket_pointers(context[22], context[23]);
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[16], context[17] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      context[28] = 0;
      context[29] = 0;
      context[30] = refalrts::brackets_left( context[28], context[29], context[11], context[12] );
      if( ! context[30] )
        continue;
      refalrts::bracket_pointers(context[30], context[31]);
      // closed e.7#0 as range 20
      // closed e.9#0 as range 24
      // closed e.8#0 as range 16
      // closed e.5#0 as range 28
      // closed e.4#0 as range 11
      //DEBUG: e.Tail#1: 9
      //DEBUG: t.#0: 13
      //DEBUG: s.Dialect#2: 15
      //DEBUG: e.7#0: 20
      //DEBUG: e.9#0: 24
      //DEBUG: e.8#0: 16
      //DEBUG: e.5#0: 28
      //DEBUG: e.4#0: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & Map@2/4 {REMOVED TILE} s.Dialect#2/15 (/18 (/22 e.7#0/20 )/23 {REMOVED TILE} e.8#0/16 {REMOVED TILE} {REMOVED TILE} )/31 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: t.#0/13 } Tile{ AsIs: (/26 AsIs: e.9#0/24 AsIs: )/27 } Tile{ AsIs: e.5#0/28 } Tile{ AsIs: e.4#0/11 } Tile{ AsIs: )/19 HalfReuse: </30 } Tile{ HalfReuse: & Map@2/8 AsIs: e.Tail#1/9 AsIs: >/1 ]] }
      refalrts::reinit_open_call(context[30]);
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z2]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[30] );
      refalrts::link_brackets( context[7], context[19] );
      refalrts::link_brackets( context[26], context[27] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[19], context[30] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[7], context[14] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@2/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ResolveIncludes$3\1*1/4 AsIs: t.Next#1/7 } >/11 </12 & Map@2/13 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z2]);
    refalrts::update_name(context[4], functions[efunc_gen_ResolveIncludes_S3L1D1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[11], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@2/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@2/4 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@2/4 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & ResolveIncludes$3\1/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_ResolveIncludes_S3L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z2("Map@2", COOKIE1_, COOKIE2_, func_gen_Map_Z2);


static refalrts::FnResult func_gen_Map_Z3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & Map@3/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@3/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Map@3/4 (/7 e.#0/11 )/8 e.Tail#1/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      // closed e.#0 as range 11
      // closed e.Tail#1 as range 9
      //DEBUG: e.#0: 11
      //DEBUG: e.Tail#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} & Map@3/4 (/7 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.#0/11 } Tile{ AsIs: </0 } Tile{ HalfReuse: & Map@3/8 AsIs: e.Tail#1/9 AsIs: >/1 ]] }
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z3]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[0], context[0] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@3/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnBracket*1/4 AsIs: t.Next#1/7 } >/11 </12 & Map@3/13 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z3]);
    refalrts::update_name(context[4], functions[efunc_gen_UnBracket_D1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[11], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@3/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@3/4 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@3/4 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & UnBracket/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_UnBracket]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z3("Map@3", COOKIE1_, COOKIE2_, func_gen_Map_Z3);


static refalrts::FnResult func_gen_Map_Z4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & Map@4/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@4/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Map@4/4 s.FnPatch#2/5 t.Next#1/8 e.Tail#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[9] = refalrts::tvar_left( context[8], context[6], context[7] );
    if( ! context[9] )
      continue;
    // closed e.Tail#1 as range 6
    //DEBUG: s.FnPatch#2: 5
    //DEBUG: t.Next#1: 8
    //DEBUG: e.Tail#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & PatchASTSrcPos-Item/4 AsIs: s.FnPatch#2/5 AsIs: t.Next#1/8 } >/10 </11 & Map@4/12 s.FnPatch#2/5/13 Tile{ AsIs: e.Tail#1/6 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[10]);
    refalrts::alloc_open_call(vm, context[11]);
    refalrts::alloc_name(vm, context[12], functions[efunc_gen_Map_Z4]);
    refalrts::copy_stvar(vm, context[13], context[5]);
    refalrts::update_name(context[4], functions[efunc_PatchASTSrcPosm_Item]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[10], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@4/4 s.FnPatch#2/5 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //DEBUG: s.FnPatch#2: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@4/4 s.FnPatch#2/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@4/4 s.FnPatch#2/5 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: s.FnPatch#2: 5
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@0/4 } (/6 & PatchASTSrcPos-Item/7 Tile{ AsIs: s.FnPatch#2/5 } )/8 Tile{ AsIs: e.items#0/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_PatchASTSrcPosm_Item]);
  refalrts::alloc_close_bracket(vm, context[8]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[6], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z4("Map@4", COOKIE1_, COOKIE2_, func_gen_Map_Z4);


static refalrts::FnResult func_gen_Map_Z5(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & Map@5/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@5/4 e.new#1/2 (/7 e.new#2/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 2
  // closed e.new#2 as range 5
  do {
    // </0 & Map@5/4 e.FileName#1/9 (/7 t.Next#1/13 e.Tail#1/11 )/8 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[11] = context[5];
    context[12] = context[6];
    // closed e.FileName#1 as range 9
    context[14] = refalrts::tvar_left( context[13], context[11], context[12] );
    if( ! context[14] )
      continue;
    // closed e.Tail#1 as range 11
    //DEBUG: e.FileName#1: 9
    //DEBUG: t.Next#1: 13
    //DEBUG: e.Tail#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </15 & PatchASTSrcPos-Item/16 [*]/17 & PatchASTSrcPos=1\1/18 (/19 e.FileName#1/9/20 )/22 {*}/23 Tile{ AsIs: t.Next#1/13 } >/24 Tile{ AsIs: </0 AsIs: & Map@5/4 AsIs: e.FileName#1/9 AsIs: (/7 } Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_name(vm, context[16], functions[efunc_PatchASTSrcPosm_Item]);
    refalrts::alloc_closure_head(vm, context[17]);
    refalrts::alloc_name(vm, context[18], functions[efunc_gen_PatchASTSrcPos_A1L1]);
    refalrts::alloc_open_bracket(vm, context[19]);
    refalrts::copy_evar(vm, context[20], context[21], context[9], context[10]);
    refalrts::alloc_close_bracket(vm, context[22]);
    refalrts::alloc_unwrapped_closure(vm, context[23], context[17]);
    refalrts::alloc_close_call(vm, context[24]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[15] );
    refalrts::link_brackets( context[19], context[22] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[24], context[24] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[15], context[23] );
    refalrts::use( res );
    refalrts::wrap_closure( context[23] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@5/4 e.FileName#1/9 (/7 )/8 >/1
    context[9] = context[2];
    context[10] = context[3];
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.FileName#1 as range 9
    //DEBUG: e.FileName#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@5/4 e.FileName#1/9 (/7 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@5/4 e.FileName#1/2 (/7 e.items#0/5 )/8 >/1
  // closed e.FileName#1 as range 2
  // closed e.items#0 as range 5
  //DEBUG: e.FileName#1: 2
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@0/4 } (/9 & PatchASTSrcPos-Item/10 [*]/11 & PatchASTSrcPos=1\1/12 Tile{ AsIs: (/7 } Tile{ AsIs: e.FileName#1/2 } )/13 {*}/14 Tile{ AsIs: )/8 } Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_PatchASTSrcPosm_Item]);
  refalrts::alloc_closure_head(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_gen_PatchASTSrcPos_A1L1]);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::alloc_unwrapped_closure(vm, context[14], context[11]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[9], context[8] );
  refalrts::link_brackets( context[7], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[9], context[12] );
  refalrts::use( res );
  refalrts::wrap_closure( context[14] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z5("Map@5", COOKIE1_, COOKIE2_, func_gen_Map_Z5);


static refalrts::FnResult func_gen_Map_Z6(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & Map@6/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@6/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Map@6/4 s.FnPatch#1/5 t.Next#1/8 e.Tail#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[9] = refalrts::tvar_left( context[8], context[6], context[7] );
    if( ! context[9] )
      continue;
    // closed e.Tail#1 as range 6
    //DEBUG: s.FnPatch#1: 5
    //DEBUG: t.Next#1: 8
    //DEBUG: e.Tail#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & PatchASTSrcPos-Sentence/4 AsIs: s.FnPatch#1/5 AsIs: t.Next#1/8 } >/10 </11 & Map@6/12 s.FnPatch#1/5/13 Tile{ AsIs: e.Tail#1/6 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[10]);
    refalrts::alloc_open_call(vm, context[11]);
    refalrts::alloc_name(vm, context[12], functions[efunc_gen_Map_Z6]);
    refalrts::copy_stvar(vm, context[13], context[5]);
    refalrts::update_name(context[4], functions[efunc_PatchASTSrcPosm_Sentence]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[10], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@6/4 s.FnPatch#1/5 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //DEBUG: s.FnPatch#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@6/4 s.FnPatch#1/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@6/4 s.FnPatch#1/5 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: s.FnPatch#1: 5
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@0/4 } (/6 & PatchASTSrcPos-Sentence/7 Tile{ AsIs: s.FnPatch#1/5 } )/8 Tile{ AsIs: e.items#0/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_PatchASTSrcPosm_Sentence]);
  refalrts::alloc_close_bracket(vm, context[8]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[6], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z6("Map@6", COOKIE1_, COOKIE2_, func_gen_Map_Z6);


static refalrts::FnResult func_gen_Map_Z7(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 38 elems
  refalrts::Iter context[38];
  refalrts::zeros( context, 38 );
  // </0 & Map@7/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@7/4 s.new#1/5 s.new#2/6 e.new#3/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & Map@7/4 s.new#4/5 s.new#5/6 t.new#6/9 e.new#7/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[10] = refalrts::tvar_left( context[9], context[7], context[8] );
    if( ! context[10] )
      continue;
    // closed e.new#7 as range 7
    do {
      // </0 & Map@7/4 s.FnPatchExpr#1/5 s.FnPatch#1/6 (/9 s.ChainType#2/27 (/25 e.2#0/23 )/26 (/21 e.4#0/19 )/22 (/17 e.6#0/15 )/18 )/10 e.Tail#1/11 >/1
      context[11] = context[7];
      context[12] = context[8];
      context[13] = 0;
      context[14] = 0;
      if( ! refalrts::brackets_term( context[13], context[14], context[9] ) )
        continue;
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::brackets_right( context[15], context[16], context[13], context[14] );
      if( ! context[17] )
        continue;
      refalrts::bracket_pointers(context[17], context[18]);
      context[19] = 0;
      context[20] = 0;
      context[21] = refalrts::brackets_right( context[19], context[20], context[13], context[14] );
      if( ! context[21] )
        continue;
      refalrts::bracket_pointers(context[21], context[22]);
      context[23] = 0;
      context[24] = 0;
      context[25] = refalrts::brackets_right( context[23], context[24], context[13], context[14] );
      if( ! context[25] )
        continue;
      refalrts::bracket_pointers(context[25], context[26]);
      // closed e.2#0 as range 23
      // closed e.4#0 as range 19
      // closed e.6#0 as range 15
      // closed e.Tail#1 as range 11
      if( ! refalrts::svar_left( context[27], context[13], context[14] ) )
        continue;
      if( ! refalrts::empty_seq( context[13], context[14] ) )
        continue;
      //DEBUG: s.FnPatchExpr#1: 5
      //DEBUG: s.FnPatch#1: 6
      //DEBUG: e.2#0: 23
      //DEBUG: e.4#0: 19
      //DEBUG: e.6#0: 15
      //DEBUG: e.Tail#1: 11
      //DEBUG: s.ChainType#2: 27

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: s.ChainType#2/27 AsIs: (/25 } </28 s.FnPatchExpr#1/5/29 Tile{ AsIs: e.2#0/23 } >/30 Tile{ AsIs: )/26 AsIs: (/21 } </31 & PatchASTSrcPos-Blocks/32 s.FnPatch#1/6/33 Tile{ AsIs: e.4#0/19 } >/34 )/35 (/36 Tile{ HalfReuse: </22 HalfReuse: s.FnPatchExpr1 #5/17 AsIs: e.6#0/15 HalfReuse: >/18 AsIs: )/10 } )/37 Tile{ AsIs: </0 AsIs: & Map@7/4 AsIs: s.FnPatchExpr#1/5 AsIs: s.FnPatch#1/6 } Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[28]);
      refalrts::copy_stvar(vm, context[29], context[5]);
      refalrts::alloc_close_call(vm, context[30]);
      refalrts::alloc_open_call(vm, context[31]);
      refalrts::alloc_name(vm, context[32], functions[efunc_PatchASTSrcPosm_Blocks]);
      refalrts::copy_stvar(vm, context[33], context[6]);
      refalrts::alloc_close_call(vm, context[34]);
      refalrts::alloc_close_bracket(vm, context[35]);
      refalrts::alloc_open_bracket(vm, context[36]);
      refalrts::alloc_close_bracket(vm, context[37]);
      refalrts::reinit_open_call(context[22]);
      refalrts::reinit_svar( context[17], context[5] );
      refalrts::reinit_close_call(context[18]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[37] );
      refalrts::link_brackets( context[36], context[10] );
      refalrts::push_stack( vm, context[18] );
      refalrts::push_stack( vm, context[22] );
      refalrts::link_brackets( context[21], context[35] );
      refalrts::push_stack( vm, context[34] );
      refalrts::push_stack( vm, context[31] );
      refalrts::link_brackets( context[25], context[26] );
      refalrts::push_stack( vm, context[30] );
      refalrts::push_stack( vm, context[28] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[0], context[6] );
      res = refalrts::splice_evar( res, context[37], context[37] );
      res = refalrts::splice_evar( res, context[22], context[10] );
      res = refalrts::splice_evar( res, context[34], context[36] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[31], context[33] );
      res = refalrts::splice_evar( res, context[26], context[21] );
      res = refalrts::splice_evar( res, context[30], context[30] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_evar( res, context[9], context[25] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@7/4 s.FnPatchExpr#1/5 s.FnPatch#1/6 t.Next#1/9 e.Tail#1/11 >/1
    context[11] = context[7];
    context[12] = context[8];
    // closed e.Tail#1 as range 11
    //DEBUG: t.Next#1: 9
    //DEBUG: s.FnPatchExpr#1: 5
    //DEBUG: s.FnPatch#1: 6
    //DEBUG: e.Tail#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & PatchASTSrcPos-Chain\1*1/4 AsIs: s.FnPatchExpr#1/5 AsIs: s.FnPatch#1/6 AsIs: t.Next#1/9 } >/13 </14 & Map@7/15 s.FnPatchExpr#1/5/16 s.FnPatch#1/6/17 Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::alloc_open_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_Map_Z7]);
    refalrts::copy_stvar(vm, context[16], context[5]);
    refalrts::copy_stvar(vm, context[17], context[6]);
    refalrts::update_name(context[4], functions[efunc_gen_PatchASTSrcPosm_Chain_L1D1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[13], context[17] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@7/4 s.FnPatchExpr#1/5 s.FnPatch#1/6 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //DEBUG: s.FnPatchExpr#1: 5
    //DEBUG: s.FnPatch#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@7/4 s.FnPatchExpr#1/5 s.FnPatch#1/6 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@7/4 s.FnPatchExpr#1/5 s.FnPatch#1/6 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: s.FnPatchExpr#1: 5
  //DEBUG: s.FnPatch#1: 6
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 & Map@0/8 Tile{ HalfReuse: [*]/0 Reuse: & PatchASTSrcPos-Chain\1/4 AsIs: s.FnPatchExpr#1/5 AsIs: s.FnPatch#1/6 } {*}/9 Tile{ AsIs: e.items#0/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_Map_Z0]);
  refalrts::alloc_unwrapped_closure(vm, context[9], context[0]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_PatchASTSrcPosm_Chain_L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::wrap_closure( context[9] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z7("Map@7", COOKIE1_, COOKIE2_, func_gen_Map_Z7);


static refalrts::FnResult func_gen_Map_Z8(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & Map@8/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@8/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Map@8/4 s.new#3/5 t.new#4/8 e.new#5/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[9] = refalrts::tvar_left( context[8], context[6], context[7] );
    if( ! context[9] )
      continue;
    // closed e.new#5 as range 6
    do {
      // </0 & Map@8/4 s.FnPatch#1/5 (/8 e.#0/12 )/9 e.Tail#1/10 >/1
      context[10] = context[6];
      context[11] = context[7];
      context[12] = 0;
      context[13] = 0;
      if( ! refalrts::brackets_term( context[12], context[13], context[8] ) )
        continue;
      // closed e.#0 as range 12
      // closed e.Tail#1 as range 10
      //DEBUG: s.FnPatch#1: 5
      //DEBUG: e.#0: 12
      //DEBUG: e.Tail#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/8 } Tile{ AsIs: </0 Reuse: & PatchASTSrcPos-Body/4 AsIs: s.FnPatch#1/5 } Tile{ AsIs: e.#0/12 } >/14 )/15 </16 & Map@8/17 Tile{ HalfReuse: s.FnPatch1 #5/9 AsIs: e.Tail#1/10 AsIs: >/1 ]] }
      refalrts::alloc_close_call(vm, context[14]);
      refalrts::alloc_close_bracket(vm, context[15]);
      refalrts::alloc_open_call(vm, context[16]);
      refalrts::alloc_name(vm, context[17], functions[efunc_gen_Map_Z8]);
      refalrts::update_name(context[4], functions[efunc_PatchASTSrcPosm_Body]);
      refalrts::reinit_svar( context[9], context[5] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[16] );
      refalrts::link_brackets( context[8], context[15] );
      refalrts::push_stack( vm, context[14] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[9];
      res = refalrts::splice_evar( res, context[14], context[17] );
      res = refalrts::splice_evar( res, context[12], context[13] );
      res = refalrts::splice_evar( res, context[0], context[5] );
      res = refalrts::splice_evar( res, context[8], context[8] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@8/4 s.FnPatch#1/5 t.Next#1/8 e.Tail#1/10 >/1
    context[10] = context[6];
    context[11] = context[7];
    // closed e.Tail#1 as range 10
    //DEBUG: t.Next#1: 8
    //DEBUG: s.FnPatch#1: 5
    //DEBUG: e.Tail#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & PatchASTSrcPos-Blocks\1*1/4 AsIs: s.FnPatch#1/5 AsIs: t.Next#1/8 } >/12 </13 & Map@8/14 s.FnPatch#1/5/15 Tile{ AsIs: e.Tail#1/10 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[12]);
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_gen_Map_Z8]);
    refalrts::copy_stvar(vm, context[15], context[5]);
    refalrts::update_name(context[4], functions[efunc_gen_PatchASTSrcPosm_Blocks_L1D1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[12], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@8/4 s.FnPatch#1/5 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //DEBUG: s.FnPatch#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@8/4 s.FnPatch#1/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@8/4 s.FnPatch#1/5 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: s.FnPatch#1: 5
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@0/4 } [*]/6 & PatchASTSrcPos-Blocks\1/7 Tile{ AsIs: s.FnPatch#1/5 } {*}/8 Tile{ AsIs: e.items#0/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_closure_head(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_PatchASTSrcPosm_Blocks_L1]);
  refalrts::alloc_unwrapped_closure(vm, context[8], context[6]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
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

static refalrts::NativeReference nat_ref_gen_Map_Z8("Map@8", COOKIE1_, COOKIE2_, func_gen_Map_Z8);


static refalrts::FnResult func_gen_Map_Z9(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
  // </0 & Map@9/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@9/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Map@9/4 s.new#3/5 t.new#4/8 e.new#5/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[9] = refalrts::tvar_left( context[8], context[6], context[7] );
    if( ! context[9] )
      continue;
    // closed e.new#5 as range 6
    do {
      // </0 & Map@9/4 s.new#6/5 (/8 s.new#7/14 e.new#8/12 )/9 e.new#9/10 >/1
      context[10] = context[6];
      context[11] = context[7];
      context[12] = 0;
      context[13] = 0;
      if( ! refalrts::brackets_term( context[12], context[13], context[8] ) )
        continue;
      // closed e.new#9 as range 10
      if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
        continue;
      // closed e.new#8 as range 12
      do {
        // </0 & Map@9/4 s.new#10/5 (/8 s.new#11/14 t.new#12/19 t.new#13/21 e.new#14/15 )/9 e.new#15/17 >/1
        context[15] = context[12];
        context[16] = context[13];
        context[17] = context[10];
        context[18] = context[11];
        // closed e.new#15 as range 17
        context[20] = refalrts::tvar_left( context[19], context[15], context[16] );
        if( ! context[20] )
          continue;
        context[22] = refalrts::tvar_left( context[21], context[15], context[16] );
        if( ! context[22] )
          continue;
        // closed e.new#14 as range 15
        do {
          // </0 & Map@9/4 s.new#16/5 (/8 s.new#17/14 t.new#18/19 s.new#19/21 e.new#20/23 )/9 e.new#21/25 >/1
          context[23] = context[15];
          context[24] = context[16];
          context[25] = context[17];
          context[26] = context[18];
          if( ! refalrts::svar_term( context[21], context[21] ) )
            continue;
          // closed e.new#20 as range 23
          // closed e.new#21 as range 25
          do {
            // </0 & Map@9/4 s.FnPatch#1/5 (/8 # TkVariable/14 t.0#0/19 s.Mode#2/21 e.2#0/27 )/9 e.Tail#1/29 >/1
            context[27] = context[23];
            context[28] = context[24];
            context[29] = context[25];
            context[30] = context[26];
            if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[14] ) )
              continue;
            // closed e.2#0 as range 27
            // closed e.Tail#1 as range 29
            //DEBUG: t.0#0: 19
            //DEBUG: s.FnPatch#1: 5
            //DEBUG: s.Mode#2: 21
            //DEBUG: e.2#0: 27
            //DEBUG: e.Tail#1: 29

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } Tile{ AsIs: (/8 AsIs: # TkVariable/14 } </31 Tile{ AsIs: s.FnPatch#1/5 } Tile{ AsIs: t.0#0/19 } >/32 Tile{ AsIs: s.Mode#2/21 } Tile{ AsIs: e.2#0/27 } )/33 Tile{ AsIs: </0 AsIs: & Map@9/4 } Tile{ HalfReuse: s.FnPatch1 #5/9 AsIs: e.Tail#1/29 AsIs: >/1 ]] }
            refalrts::alloc_open_call(vm, context[31]);
            refalrts::alloc_close_call(vm, context[32]);
            refalrts::alloc_close_bracket(vm, context[33]);
            refalrts::reinit_svar( context[9], context[5] );
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[8], context[33] );
            refalrts::push_stack( vm, context[32] );
            refalrts::push_stack( vm, context[31] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[9];
            res = refalrts::splice_evar( res, context[0], context[4] );
            res = refalrts::splice_evar( res, context[33], context[33] );
            res = refalrts::splice_evar( res, context[27], context[28] );
            res = refalrts::splice_evar( res, context[21], context[21] );
            res = refalrts::splice_evar( res, context[32], context[32] );
            res = refalrts::splice_evar( res, context[19], context[20] );
            res = refalrts::splice_evar( res, context[5], context[5] );
            res = refalrts::splice_evar( res, context[31], context[31] );
            res = refalrts::splice_evar( res, context[8], context[14] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & Map@9/4 s.FnPatch#1/5 (/8 # TkNewVariable/14 t.0#0/19 s.Mode#2/21 e.2#0/27 )/9 e.Tail#1/29 >/1
          context[27] = context[23];
          context[28] = context[24];
          context[29] = context[25];
          context[30] = context[26];
          if( ! refalrts::ident_term( identifiers[ident_TkNewVariable], context[14] ) )
            continue;
          // closed e.2#0 as range 27
          // closed e.Tail#1 as range 29
          //DEBUG: t.0#0: 19
          //DEBUG: s.FnPatch#1: 5
          //DEBUG: s.Mode#2: 21
          //DEBUG: e.2#0: 27
          //DEBUG: e.Tail#1: 29

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/8 AsIs: # TkNewVariable/14 } </31 Tile{ AsIs: s.FnPatch#1/5 } Tile{ AsIs: t.0#0/19 } >/32 Tile{ AsIs: s.Mode#2/21 } Tile{ AsIs: e.2#0/27 } )/33 Tile{ AsIs: </0 AsIs: & Map@9/4 } Tile{ HalfReuse: s.FnPatch1 #5/9 AsIs: e.Tail#1/29 AsIs: >/1 ]] }
          refalrts::alloc_open_call(vm, context[31]);
          refalrts::alloc_close_call(vm, context[32]);
          refalrts::alloc_close_bracket(vm, context[33]);
          refalrts::reinit_svar( context[9], context[5] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[8], context[33] );
          refalrts::push_stack( vm, context[32] );
          refalrts::push_stack( vm, context[31] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[9];
          res = refalrts::splice_evar( res, context[0], context[4] );
          res = refalrts::splice_evar( res, context[33], context[33] );
          res = refalrts::splice_evar( res, context[27], context[28] );
          res = refalrts::splice_evar( res, context[21], context[21] );
          res = refalrts::splice_evar( res, context[32], context[32] );
          res = refalrts::splice_evar( res, context[19], context[20] );
          res = refalrts::splice_evar( res, context[5], context[5] );
          res = refalrts::splice_evar( res, context[31], context[31] );
          res = refalrts::splice_evar( res, context[8], context[14] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Map@9/4 s.FnPatch#1/5 (/8 # Symbol/14 # Name/19 t.1#0/21 e.2#0/23 )/9 e.Tail#1/25 >/1
        context[23] = context[15];
        context[24] = context[16];
        context[25] = context[17];
        context[26] = context[18];
        if( ! refalrts::ident_term( identifiers[ident_Name], context[19] ) )
          continue;
        if( ! refalrts::ident_term( identifiers[ident_Symbol], context[14] ) )
          continue;
        // closed e.2#0 as range 23
        // closed e.Tail#1 as range 25
        //DEBUG: t.1#0: 21
        //DEBUG: s.FnPatch#1: 5
        //DEBUG: e.2#0: 23
        //DEBUG: e.Tail#1: 25

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/8 AsIs: # Symbol/14 AsIs: # Name/19 } </27 Tile{ AsIs: s.FnPatch#1/5 } Tile{ AsIs: t.1#0/21 } >/28 Tile{ AsIs: e.2#0/23 } )/29 Tile{ AsIs: </0 AsIs: & Map@9/4 } Tile{ HalfReuse: s.FnPatch1 #5/9 AsIs: e.Tail#1/25 AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[27]);
        refalrts::alloc_close_call(vm, context[28]);
        refalrts::alloc_close_bracket(vm, context[29]);
        refalrts::reinit_svar( context[9], context[5] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[8], context[29] );
        refalrts::push_stack( vm, context[28] );
        refalrts::push_stack( vm, context[27] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[9];
        res = refalrts::splice_evar( res, context[0], context[4] );
        res = refalrts::splice_evar( res, context[29], context[29] );
        res = refalrts::splice_evar( res, context[23], context[24] );
        res = refalrts::splice_evar( res, context[28], context[28] );
        res = refalrts::splice_evar( res, context[21], context[22] );
        res = refalrts::splice_evar( res, context[5], context[5] );
        res = refalrts::splice_evar( res, context[27], context[27] );
        res = refalrts::splice_evar( res, context[8], context[19] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@9/4 s.FnPatch#1/5 (/8 # Brackets/14 e.0#0/15 )/9 e.Tail#1/17 >/1
        context[15] = context[12];
        context[16] = context[13];
        context[17] = context[10];
        context[18] = context[11];
        if( ! refalrts::ident_term( identifiers[ident_Brackets], context[14] ) )
          continue;
        // closed e.0#0 as range 15
        // closed e.Tail#1 as range 17
        //DEBUG: s.FnPatch#1: 5
        //DEBUG: e.0#0: 15
        //DEBUG: e.Tail#1: 17

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/8 AsIs: # Brackets/14 } Tile{ AsIs: </0 Reuse: & PatchASTSrcPos-Expr/4 AsIs: s.FnPatch#1/5 } Tile{ AsIs: e.0#0/15 } >/19 )/20 </21 & Map@9/22 Tile{ HalfReuse: s.FnPatch1 #5/9 AsIs: e.Tail#1/17 AsIs: >/1 ]] }
        refalrts::alloc_close_call(vm, context[19]);
        refalrts::alloc_close_bracket(vm, context[20]);
        refalrts::alloc_open_call(vm, context[21]);
        refalrts::alloc_name(vm, context[22], functions[efunc_gen_Map_Z9]);
        refalrts::update_name(context[4], functions[efunc_PatchASTSrcPosm_Expr]);
        refalrts::reinit_svar( context[9], context[5] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[21] );
        refalrts::link_brackets( context[8], context[20] );
        refalrts::push_stack( vm, context[19] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[9];
        res = refalrts::splice_evar( res, context[19], context[22] );
        res = refalrts::splice_evar( res, context[15], context[16] );
        res = refalrts::splice_evar( res, context[0], context[5] );
        res = refalrts::splice_evar( res, context[8], context[14] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@9/4 s.FnPatch#1/5 (/8 # ADT-Brackets/14 t.0#0/19 (/23 e.3#0/21 )/24 e.2#0/15 )/9 e.Tail#1/17 >/1
        context[15] = context[12];
        context[16] = context[13];
        context[17] = context[10];
        context[18] = context[11];
        if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[14] ) )
          continue;
        // closed e.Tail#1 as range 17
        context[20] = refalrts::tvar_left( context[19], context[15], context[16] );
        if( ! context[20] )
          continue;
        context[21] = 0;
        context[22] = 0;
        context[23] = refalrts::brackets_left( context[21], context[22], context[15], context[16] );
        if( ! context[23] )
          continue;
        refalrts::bracket_pointers(context[23], context[24]);
        // closed e.3#0 as range 21
        // closed e.2#0 as range 15
        //DEBUG: s.FnPatch#1: 5
        //DEBUG: e.Tail#1: 17
        //DEBUG: t.0#0: 19
        //DEBUG: e.3#0: 21
        //DEBUG: e.2#0: 15

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/8 AsIs: # ADT-Brackets/14 } </25 s.FnPatch#1/5/26 Tile{ AsIs: t.0#0/19 } >/27 Tile{ AsIs: (/23 AsIs: e.3#0/21 AsIs: )/24 } Tile{ AsIs: </0 Reuse: & PatchASTSrcPos-Expr/4 AsIs: s.FnPatch#1/5 } Tile{ AsIs: e.2#0/15 } >/28 )/29 </30 & Map@9/31 Tile{ HalfReuse: s.FnPatch1 #5/9 AsIs: e.Tail#1/17 AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[25]);
        refalrts::copy_stvar(vm, context[26], context[5]);
        refalrts::alloc_close_call(vm, context[27]);
        refalrts::alloc_close_call(vm, context[28]);
        refalrts::alloc_close_bracket(vm, context[29]);
        refalrts::alloc_open_call(vm, context[30]);
        refalrts::alloc_name(vm, context[31], functions[efunc_gen_Map_Z9]);
        refalrts::update_name(context[4], functions[efunc_PatchASTSrcPosm_Expr]);
        refalrts::reinit_svar( context[9], context[5] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[30] );
        refalrts::link_brackets( context[8], context[29] );
        refalrts::push_stack( vm, context[28] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[23], context[24] );
        refalrts::push_stack( vm, context[27] );
        refalrts::push_stack( vm, context[25] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[9];
        res = refalrts::splice_evar( res, context[28], context[31] );
        res = refalrts::splice_evar( res, context[15], context[16] );
        res = refalrts::splice_evar( res, context[0], context[5] );
        res = refalrts::splice_evar( res, context[23], context[24] );
        res = refalrts::splice_evar( res, context[27], context[27] );
        res = refalrts::splice_evar( res, context[19], context[20] );
        res = refalrts::splice_evar( res, context[25], context[26] );
        res = refalrts::splice_evar( res, context[8], context[14] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@9/4 s.FnPatch#1/5 (/8 # CallBrackets/14 e.0#0/15 )/9 e.Tail#1/17 >/1
        context[15] = context[12];
        context[16] = context[13];
        context[17] = context[10];
        context[18] = context[11];
        if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[14] ) )
          continue;
        // closed e.0#0 as range 15
        // closed e.Tail#1 as range 17
        //DEBUG: s.FnPatch#1: 5
        //DEBUG: e.0#0: 15
        //DEBUG: e.Tail#1: 17

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/8 AsIs: # CallBrackets/14 } Tile{ AsIs: </0 Reuse: & PatchASTSrcPos-Expr/4 AsIs: s.FnPatch#1/5 } Tile{ AsIs: e.0#0/15 } >/19 )/20 </21 & Map@9/22 Tile{ HalfReuse: s.FnPatch1 #5/9 AsIs: e.Tail#1/17 AsIs: >/1 ]] }
        refalrts::alloc_close_call(vm, context[19]);
        refalrts::alloc_close_bracket(vm, context[20]);
        refalrts::alloc_open_call(vm, context[21]);
        refalrts::alloc_name(vm, context[22], functions[efunc_gen_Map_Z9]);
        refalrts::update_name(context[4], functions[efunc_PatchASTSrcPosm_Expr]);
        refalrts::reinit_svar( context[9], context[5] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[21] );
        refalrts::link_brackets( context[8], context[20] );
        refalrts::push_stack( vm, context[19] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[9];
        res = refalrts::splice_evar( res, context[19], context[22] );
        res = refalrts::splice_evar( res, context[15], context[16] );
        res = refalrts::splice_evar( res, context[0], context[5] );
        res = refalrts::splice_evar( res, context[8], context[14] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@9/4 s.FnPatch#1/5 (/8 # Closure/14 e.0#0/15 )/9 e.Tail#1/17 >/1
      context[15] = context[12];
      context[16] = context[13];
      context[17] = context[10];
      context[18] = context[11];
      if( ! refalrts::ident_term( identifiers[ident_Closure], context[14] ) )
        continue;
      // closed e.0#0 as range 15
      // closed e.Tail#1 as range 17
      //DEBUG: s.FnPatch#1: 5
      //DEBUG: e.0#0: 15
      //DEBUG: e.Tail#1: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/8 AsIs: # Closure/14 } Tile{ AsIs: </0 Reuse: & PatchASTSrcPos-Body/4 AsIs: s.FnPatch#1/5 } Tile{ AsIs: e.0#0/15 } >/19 )/20 </21 & Map@9/22 Tile{ HalfReuse: s.FnPatch1 #5/9 AsIs: e.Tail#1/17 AsIs: >/1 ]] }
      refalrts::alloc_close_call(vm, context[19]);
      refalrts::alloc_close_bracket(vm, context[20]);
      refalrts::alloc_open_call(vm, context[21]);
      refalrts::alloc_name(vm, context[22], functions[efunc_gen_Map_Z9]);
      refalrts::update_name(context[4], functions[efunc_PatchASTSrcPosm_Body]);
      refalrts::reinit_svar( context[9], context[5] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[21] );
      refalrts::link_brackets( context[8], context[20] );
      refalrts::push_stack( vm, context[19] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[9];
      res = refalrts::splice_evar( res, context[19], context[22] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[0], context[5] );
      res = refalrts::splice_evar( res, context[8], context[14] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@9/4 s.FnPatch#1/5 t.Next#1/8 e.Tail#1/10 >/1
    context[10] = context[6];
    context[11] = context[7];
    // closed e.Tail#1 as range 10
    //DEBUG: t.Next#1: 8
    //DEBUG: s.FnPatch#1: 5
    //DEBUG: e.Tail#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Next#1/8 } Tile{ AsIs: </0 AsIs: & Map@9/4 AsIs: s.FnPatch#1/5 } Tile{ AsIs: e.Tail#1/10 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[0], context[5] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@9/4 s.FnPatch#1/5 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //DEBUG: s.FnPatch#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@9/4 s.FnPatch#1/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@9/4 s.FnPatch#1/5 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: s.FnPatch#1: 5
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@0/4 } [*]/6 & PatchASTSrcPos-Expr\1/7 Tile{ AsIs: s.FnPatch#1/5 } {*}/8 Tile{ AsIs: e.items#0/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_closure_head(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_PatchASTSrcPosm_Expr_L1]);
  refalrts::alloc_unwrapped_closure(vm, context[8], context[6]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
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

static refalrts::NativeReference nat_ref_gen_Map_Z9("Map@9", COOKIE1_, COOKIE2_, func_gen_Map_Z9);


static refalrts::FnResult func_gen_Map_Z10(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & Map@10/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@10/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Map@10/4 t.new#3/5 t.new#4/9 e.new#5/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[10] = refalrts::tvar_left( context[9], context[7], context[8] );
    if( ! context[10] )
      continue;
    // closed e.new#5 as range 7
    do {
      // </0 & Map@10/4 t.MetaSrcPos#3/5 (/9 e.#0/13 )/10 e.Tail#1/11 >/1
      context[11] = context[7];
      context[12] = context[8];
      context[13] = 0;
      context[14] = 0;
      if( ! refalrts::brackets_term( context[13], context[14], context[9] ) )
        continue;
      // closed e.#0 as range 13
      // closed e.Tail#1 as range 11
      //DEBUG: t.MetaSrcPos#3: 5
      //DEBUG: e.#0: 13
      //DEBUG: e.Tail#1: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/15 (/16 # Symbol/17 Tile{ HalfReuse: # Identifier/9 AsIs: e.#0/13 AsIs: )/10 } (/18 # Symbol/19 # Name/20 t.MetaSrcPos#3/5/21 e.#0/13/23 )/25 )/26 Tile{ AsIs: </0 AsIs: & Map@10/4 AsIs: t.MetaSrcPos#3/5 } Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[15]);
      refalrts::alloc_open_bracket(vm, context[16]);
      refalrts::alloc_ident(vm, context[17], identifiers[ident_Symbol]);
      refalrts::alloc_open_bracket(vm, context[18]);
      refalrts::alloc_ident(vm, context[19], identifiers[ident_Symbol]);
      refalrts::alloc_ident(vm, context[20], identifiers[ident_Name]);
      refalrts::copy_evar(vm, context[21], context[22], context[5], context[6]);
      refalrts::copy_evar(vm, context[23], context[24], context[13], context[14]);
      refalrts::alloc_close_bracket(vm, context[25]);
      refalrts::alloc_close_bracket(vm, context[26]);
      refalrts::reinit_ident(context[9], identifiers[ident_Identifier]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[15], context[26] );
      refalrts::link_brackets( context[18], context[25] );
      refalrts::link_brackets( context[16], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[0], context[6] );
      res = refalrts::splice_evar( res, context[18], context[26] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[15], context[17] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@10/4 t.MetaSrcPos#3/5 t.Next#1/9 e.Tail#1/11 >/1
    context[11] = context[7];
    context[12] = context[8];
    // closed e.Tail#1 as range 11
    //DEBUG: t.MetaSrcPos#3: 5
    //DEBUG: t.Next#1: 9
    //DEBUG: e.Tail#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & CreateMetaFunctions$1\1*1/4 AsIs: t.MetaSrcPos#3/5 AsIs: t.Next#1/9 } >/13 </14 & Map@10/15 t.MetaSrcPos#3/5/16 Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::alloc_open_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_Map_Z10]);
    refalrts::copy_evar(vm, context[16], context[17], context[5], context[6]);
    refalrts::update_name(context[4], functions[efunc_gen_CreateMetaFunctions_S1L1D1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[13], context[17] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@10/4 t.MetaSrcPos#3/5 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //DEBUG: t.MetaSrcPos#3: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@10/4 t.MetaSrcPos#3/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@10/4 t.MetaSrcPos#3/5 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: t.MetaSrcPos#3: 5
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@0/4 } [*]/7 & CreateMetaFunctions$1\1/8 Tile{ AsIs: t.MetaSrcPos#3/5 } {*}/9 Tile{ AsIs: e.items#0/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_closure_head(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_CreateMetaFunctions_S1L1]);
  refalrts::alloc_unwrapped_closure(vm, context[9], context[7]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::wrap_closure( context[9] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z10("Map@10", COOKIE1_, COOKIE2_, func_gen_Map_Z10);


static refalrts::FnResult func_gen_MapAccum_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & MapAccum@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & MapAccum@1/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & MapAccum@1/4 t.Acc#1/5 e.Tail#1/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    // closed e.Tail#1 as range 7
    //DEBUG: t.Acc#1: 5
    //DEBUG: e.Tail#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@1/4 AsIs: t.Acc#1/5 } (/9 Tile{ AsIs: e.Tail#1/7 } )/10 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[9]);
    refalrts::alloc_close_bracket(vm, context[10]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MapAccum@1/4 t.accum#0/5 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: t.accum#0: 5
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 Tile{ HalfReuse: & MapAccum@0/0 Reuse: & CreateMetaFunctions$1=1\1/4 AsIs: t.accum#0/5 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::reinit_name(context[0], functions[efunc_gen_MapAccum_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_CreateMetaFunctions_S1A1L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MapAccum_Z1("MapAccum@1", COOKIE1_, COOKIE2_, func_gen_MapAccum_Z1);


static refalrts::FnResult func_gen_DoMapAccum_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 126 elems
  refalrts::Iter context[126];
  refalrts::zeros( context, 126 );
  // </0 & DoMapAccum@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum@1/4 t.new#1/9 e.new#2/2 (/7 e.new#3/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#3 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & DoMapAccum@1/4 t.new#4/9 e.new#5/11 (/7 t.new#6/15 e.new#7/13 )/8 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[13] = context[5];
    context[14] = context[6];
    // closed e.new#5 as range 11
    context[16] = refalrts::tvar_left( context[15], context[13], context[14] );
    if( ! context[16] )
      continue;
    // closed e.new#7 as range 13
    do {
      // </0 & DoMapAccum@1/4 (/9 e.new#8/21 )/10 e.new#9/17 (/7 (/15 s.new#10/25 t.new#11/26 s.new#12/28 e.new#13/23 )/16 e.new#14/19 )/8 >/1
      context[17] = context[11];
      context[18] = context[12];
      context[19] = context[13];
      context[20] = context[14];
      context[21] = 0;
      context[22] = 0;
      if( ! refalrts::brackets_term( context[21], context[22], context[9] ) )
        continue;
      context[23] = 0;
      context[24] = 0;
      if( ! refalrts::brackets_term( context[23], context[24], context[15] ) )
        continue;
      // closed e.new#8 as range 21
      // closed e.new#9 as range 17
      // closed e.new#14 as range 19
      if( ! refalrts::svar_left( context[25], context[23], context[24] ) )
        continue;
      context[27] = refalrts::tvar_left( context[26], context[23], context[24] );
      if( ! context[27] )
        continue;
      if( ! refalrts::svar_left( context[28], context[23], context[24] ) )
        continue;
      // closed e.new#13 as range 23
      do {
        // </0 & DoMapAccum@1/4 (/9 e.#0/29 )/10 e.Scanned#1/31 (/7 (/15 # Meta/25 t.0#0/26 s.ScopeClass#2/28 e.3#0/33 )/16 e.Tail#1/35 )/8 >/1
        context[29] = context[21];
        context[30] = context[22];
        context[31] = context[17];
        context[32] = context[18];
        context[33] = context[23];
        context[34] = context[24];
        context[35] = context[19];
        context[36] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_Meta], context[25] ) )
          continue;
        // closed e.#0 as range 29
        // closed e.Scanned#1 as range 31
        // closed e.3#0 as range 33
        // closed e.Tail#1 as range 35
        //DEBUG: t.0#0: 26
        //DEBUG: s.ScopeClass#2: 28
        //DEBUG: e.#0: 29
        //DEBUG: e.Scanned#1: 31
        //DEBUG: e.3#0: 33
        //DEBUG: e.Tail#1: 35

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 } & DoMapAccum-Aux@1/37 Tile{ AsIs: e.Scanned#1/31 } Tile{ HalfReuse: (/4 AsIs: (/9 AsIs: e.#0/29 HalfReuse: (/10 } e.3#0/33/38 )/40 )/41 (/42 # Declaration/43 t.0#0/26/44 # GN-Entry/46"__Meta_"/47 e.3#0/33/49 )/51 (/52 # Declaration/53 t.0#0/26/54 # GN-Entry/56"__Step-Drop"/57 Tile{ HalfReuse: )/7 AsIs: (/15 Reuse: # Inline/25 AsIs: t.0#0/26 AsIs: s.ScopeClass#2/28 AsIs: e.3#0/33 AsIs: )/16 } (/59 # Function/60 t.0#0/26/61 s.ScopeClass#2/28/63 (/64 e.3#0/33/65 )/67 # Sentences/68 (/69 (/70 (/71 # TkVariable/72 t.0#0/26/73"eArg"/75 )/77 )/78 (/79 (/80 # CallBrackets/81 (/82 # Symbol/83 # Name/84 t.0#0/26/85"__Step-Drop"/87 )/89 )/90 (/91 # CallBrackets/92 (/93 # Symbol/94 # Name/95 t.0#0/26/96"__Meta_"/98 e.3#0/33/100 )/102 (/103 # TkVariable/104 t.0#0/26/105"eArg"/107 )/109 (/110 # Symbol/111 # Name/112 t.0#0/26/113"$table"/115 )/117 )/118 )/119 (/120 )/121 )/122 )/123 )/124 (/125 Tile{ AsIs: e.Tail#1/35 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
        refalrts::alloc_name(vm, context[37], functions[efunc_gen_DoMapAccumm_Aux_Z1]);
        refalrts::copy_evar(vm, context[38], context[39], context[33], context[34]);
        refalrts::alloc_close_bracket(vm, context[40]);
        refalrts::alloc_close_bracket(vm, context[41]);
        refalrts::alloc_open_bracket(vm, context[42]);
        refalrts::alloc_ident(vm, context[43], identifiers[ident_Declaration]);
        refalrts::copy_evar(vm, context[44], context[45], context[26], context[27]);
        refalrts::alloc_ident(vm, context[46], identifiers[ident_GNm_Entry]);
        refalrts::alloc_chars(vm, context[47], context[48], "__Meta_", 7);
        refalrts::copy_evar(vm, context[49], context[50], context[33], context[34]);
        refalrts::alloc_close_bracket(vm, context[51]);
        refalrts::alloc_open_bracket(vm, context[52]);
        refalrts::alloc_ident(vm, context[53], identifiers[ident_Declaration]);
        refalrts::copy_evar(vm, context[54], context[55], context[26], context[27]);
        refalrts::alloc_ident(vm, context[56], identifiers[ident_GNm_Entry]);
        refalrts::alloc_chars(vm, context[57], context[58], "__Step-Drop", 11);
        refalrts::alloc_open_bracket(vm, context[59]);
        refalrts::alloc_ident(vm, context[60], identifiers[ident_Function]);
        refalrts::copy_evar(vm, context[61], context[62], context[26], context[27]);
        refalrts::copy_stvar(vm, context[63], context[28]);
        refalrts::alloc_open_bracket(vm, context[64]);
        refalrts::copy_evar(vm, context[65], context[66], context[33], context[34]);
        refalrts::alloc_close_bracket(vm, context[67]);
        refalrts::alloc_ident(vm, context[68], identifiers[ident_Sentences]);
        refalrts::alloc_open_bracket(vm, context[69]);
        refalrts::alloc_open_bracket(vm, context[70]);
        refalrts::alloc_open_bracket(vm, context[71]);
        refalrts::alloc_ident(vm, context[72], identifiers[ident_TkVariable]);
        refalrts::copy_evar(vm, context[73], context[74], context[26], context[27]);
        refalrts::alloc_chars(vm, context[75], context[76], "eArg", 4);
        refalrts::alloc_close_bracket(vm, context[77]);
        refalrts::alloc_close_bracket(vm, context[78]);
        refalrts::alloc_open_bracket(vm, context[79]);
        refalrts::alloc_open_bracket(vm, context[80]);
        refalrts::alloc_ident(vm, context[81], identifiers[ident_CallBrackets]);
        refalrts::alloc_open_bracket(vm, context[82]);
        refalrts::alloc_ident(vm, context[83], identifiers[ident_Symbol]);
        refalrts::alloc_ident(vm, context[84], identifiers[ident_Name]);
        refalrts::copy_evar(vm, context[85], context[86], context[26], context[27]);
        refalrts::alloc_chars(vm, context[87], context[88], "__Step-Drop", 11);
        refalrts::alloc_close_bracket(vm, context[89]);
        refalrts::alloc_close_bracket(vm, context[90]);
        refalrts::alloc_open_bracket(vm, context[91]);
        refalrts::alloc_ident(vm, context[92], identifiers[ident_CallBrackets]);
        refalrts::alloc_open_bracket(vm, context[93]);
        refalrts::alloc_ident(vm, context[94], identifiers[ident_Symbol]);
        refalrts::alloc_ident(vm, context[95], identifiers[ident_Name]);
        refalrts::copy_evar(vm, context[96], context[97], context[26], context[27]);
        refalrts::alloc_chars(vm, context[98], context[99], "__Meta_", 7);
        refalrts::copy_evar(vm, context[100], context[101], context[33], context[34]);
        refalrts::alloc_close_bracket(vm, context[102]);
        refalrts::alloc_open_bracket(vm, context[103]);
        refalrts::alloc_ident(vm, context[104], identifiers[ident_TkVariable]);
        refalrts::copy_evar(vm, context[105], context[106], context[26], context[27]);
        refalrts::alloc_chars(vm, context[107], context[108], "eArg", 4);
        refalrts::alloc_close_bracket(vm, context[109]);
        refalrts::alloc_open_bracket(vm, context[110]);
        refalrts::alloc_ident(vm, context[111], identifiers[ident_Symbol]);
        refalrts::alloc_ident(vm, context[112], identifiers[ident_Name]);
        refalrts::copy_evar(vm, context[113], context[114], context[26], context[27]);
        refalrts::alloc_chars(vm, context[115], context[116], "$table", 6);
        refalrts::alloc_close_bracket(vm, context[117]);
        refalrts::alloc_close_bracket(vm, context[118]);
        refalrts::alloc_close_bracket(vm, context[119]);
        refalrts::alloc_open_bracket(vm, context[120]);
        refalrts::alloc_close_bracket(vm, context[121]);
        refalrts::alloc_close_bracket(vm, context[122]);
        refalrts::alloc_close_bracket(vm, context[123]);
        refalrts::alloc_close_bracket(vm, context[124]);
        refalrts::alloc_open_bracket(vm, context[125]);
        refalrts::reinit_open_bracket(context[4]);
        refalrts::reinit_open_bracket(context[10]);
        refalrts::reinit_close_bracket(context[7]);
        refalrts::update_ident(context[25], identifiers[ident_Inline]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[125], context[8] );
        refalrts::link_brackets( context[4], context[124] );
        refalrts::link_brackets( context[59], context[123] );
        refalrts::link_brackets( context[69], context[122] );
        refalrts::link_brackets( context[120], context[121] );
        refalrts::link_brackets( context[79], context[119] );
        refalrts::link_brackets( context[91], context[118] );
        refalrts::link_brackets( context[110], context[117] );
        refalrts::link_brackets( context[103], context[109] );
        refalrts::link_brackets( context[93], context[102] );
        refalrts::link_brackets( context[80], context[90] );
        refalrts::link_brackets( context[82], context[89] );
        refalrts::link_brackets( context[70], context[78] );
        refalrts::link_brackets( context[71], context[77] );
        refalrts::link_brackets( context[64], context[67] );
        refalrts::link_brackets( context[15], context[16] );
        refalrts::link_brackets( context[52], context[7] );
        refalrts::link_brackets( context[42], context[51] );
        refalrts::link_brackets( context[9], context[41] );
        refalrts::link_brackets( context[10], context[40] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[35], context[36] );
        res = refalrts::splice_evar( res, context[59], context[125] );
        res = refalrts::splice_evar( res, context[7], context[16] );
        res = refalrts::splice_evar( res, context[40], context[58] );
        res = refalrts::splice_evar( res, context[38], context[39] );
        res = refalrts::splice_evar( res, context[4], context[10] );
        res = refalrts::splice_evar( res, context[31], context[32] );
        res = refalrts::splice_evar( res, context[37], context[37] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoMapAccum@1/4 (/9 e.#0/29 )/10 e.Scanned#1/31 (/7 (/15 # Function/25 t.0#0/26 s.ScopeClass#2/28 (/39 e.5#0/37 )/40 e.4#0/33 )/16 e.Tail#1/35 )/8 >/1
      context[29] = context[21];
      context[30] = context[22];
      context[31] = context[17];
      context[32] = context[18];
      context[33] = context[23];
      context[34] = context[24];
      context[35] = context[19];
      context[36] = context[20];
      if( ! refalrts::ident_term( identifiers[ident_Function], context[25] ) )
        continue;
      context[37] = 0;
      context[38] = 0;
      context[39] = refalrts::brackets_left( context[37], context[38], context[33], context[34] );
      if( ! context[39] )
        continue;
      refalrts::bracket_pointers(context[39], context[40]);
      // closed e.#0 as range 29
      // closed e.Scanned#1 as range 31
      // closed e.5#0 as range 37
      // closed e.4#0 as range 33
      // closed e.Tail#1 as range 35
      //DEBUG: t.0#0: 26
      //DEBUG: s.ScopeClass#2: 28
      //DEBUG: e.#0: 29
      //DEBUG: e.Scanned#1: 31
      //DEBUG: e.5#0: 37
      //DEBUG: e.4#0: 33
      //DEBUG: e.Tail#1: 35

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 } & DoMapAccum-Aux@1/41 Tile{ AsIs: e.Scanned#1/31 } Tile{ HalfReuse: (/4 AsIs: (/9 AsIs: e.#0/29 HalfReuse: (/10 } e.5#0/37/42 )/44 Tile{ HalfReuse: )/7 AsIs: (/15 AsIs: # Function/25 AsIs: t.0#0/26 AsIs: s.ScopeClass#2/28 AsIs: (/39 AsIs: e.5#0/37 AsIs: )/40 AsIs: e.4#0/33 AsIs: )/16 } )/45 (/46 Tile{ AsIs: e.Tail#1/35 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
      refalrts::alloc_name(vm, context[41], functions[efunc_gen_DoMapAccumm_Aux_Z1]);
      refalrts::copy_evar(vm, context[42], context[43], context[37], context[38]);
      refalrts::alloc_close_bracket(vm, context[44]);
      refalrts::alloc_close_bracket(vm, context[45]);
      refalrts::alloc_open_bracket(vm, context[46]);
      refalrts::reinit_open_bracket(context[4]);
      refalrts::reinit_open_bracket(context[10]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[46], context[8] );
      refalrts::link_brackets( context[4], context[45] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[39], context[40] );
      refalrts::link_brackets( context[9], context[7] );
      refalrts::link_brackets( context[10], context[44] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_evar( res, context[45], context[46] );
      res = refalrts::splice_evar( res, context[7], context[16] );
      res = refalrts::splice_evar( res, context[44], context[44] );
      res = refalrts::splice_evar( res, context[42], context[43] );
      res = refalrts::splice_evar( res, context[4], context[10] );
      res = refalrts::splice_evar( res, context[31], context[32] );
      res = refalrts::splice_evar( res, context[41], context[41] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoMapAccum@1/4 t.Acc#1/9 e.Scanned#1/17 (/7 t.Next#1/15 e.Tail#1/19 )/8 >/1
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[13];
    context[20] = context[14];
    // closed e.Scanned#1 as range 17
    // closed e.Tail#1 as range 19
    //DEBUG: t.Acc#1: 9
    //DEBUG: t.Next#1: 15
    //DEBUG: e.Scanned#1: 17
    //DEBUG: e.Tail#1: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </21 & DoMapAccum-Aux@1/22 Tile{ AsIs: e.Scanned#1/17 } Tile{ AsIs: (/7 } Tile{ AsIs: </0 Reuse: & CreateMetaFunctions$1=1\1*2/4 AsIs: t.Acc#1/9 } Tile{ AsIs: t.Next#1/15 } >/23 )/24 (/25 Tile{ AsIs: e.Tail#1/19 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_gen_DoMapAccumm_Aux_Z1]);
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::alloc_close_bracket(vm, context[24]);
    refalrts::alloc_open_bracket(vm, context[25]);
    refalrts::update_name(context[4], functions[efunc_gen_CreateMetaFunctions_S1A1L1D2]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[21] );
    refalrts::link_brackets( context[25], context[8] );
    refalrts::link_brackets( context[7], context[24] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[23], context[25] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoMapAccum@1/4 t.Acc#1/9 e.Scanned#1/11 (/7 )/8 >/1
    context[11] = context[2];
    context[12] = context[3];
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Scanned#1 as range 11
    //DEBUG: t.Acc#1: 9
    //DEBUG: e.Scanned#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoMapAccum@1/4 {REMOVED TILE} {REMOVED TILE} (/7 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/9 } Tile{ AsIs: e.Scanned#1/11 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum@1/4 t.acc#0/9 e.scanned#0/2 (/7 e.items#0/5 )/8 >/1
  // closed e.scanned#0 as range 2
  // closed e.items#0 as range 5
  //DEBUG: t.acc#0: 9
  //DEBUG: e.scanned#0: 2
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@0/4 } & CreateMetaFunctions$1=1\1/11 Tile{ AsIs: t.acc#0/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.scanned#0/2 } Tile{ AsIs: )/8 } Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_CreateMetaFunctions_S1A1L1]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_Z1("DoMapAccum@1", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_Z1);


static refalrts::FnResult func_gen_CreateMetaFunctions_S1A1L1D2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & CreateMetaFunctions$1=1\1*2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CreateMetaFunctions$1=1\1*2/4 (/7 e.new#1/5 )/8 t.new#2/9 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & CreateMetaFunctions$1=1\1*2/4 (/7 e.FunctionNames#2/11 )/8 (/9 s.Definition#2/15 t.SrcPos#2/16 s.ScopeClass#2/18 e.Name#2/13 )/10 >/1
    context[11] = context[5];
    context[12] = context[6];
    context[13] = 0;
    context[14] = 0;
    if( ! refalrts::brackets_term( context[13], context[14], context[9] ) )
      continue;
    // closed e.FunctionNames#2 as range 11
    if( ! refalrts::svar_left( context[15], context[13], context[14] ) )
      continue;
    context[17] = refalrts::tvar_left( context[16], context[13], context[14] );
    if( ! context[17] )
      continue;
    if( ! refalrts::svar_left( context[18], context[13], context[14] ) )
      continue;
    // closed e.Name#2 as range 13
    //DEBUG: e.FunctionNames#2: 11
    //DEBUG: s.Definition#2: 15
    //DEBUG: t.SrcPos#2: 16
    //DEBUG: s.ScopeClass#2: 18
    //DEBUG: e.Name#2: 13
    //11: e.FunctionNames#2
    //13: e.Name#2
    //15: s.Definition#2
    //16: t.SrcPos#2
    //18: s.ScopeClass#2
    //24: s.Definition#2

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[21], functions[efunc_gen_CreateMetaFunctions_S1A1L1D2S3C1]);
    refalrts::alloc_open_call(vm, context[22]);
    refalrts::alloc_name(vm, context[23], functions[efunc_OneOf]);
    refalrts::copy_stvar(vm, context[24], context[15]);
    refalrts::alloc_ident(vm, context[25], identifiers[ident_Swap]);
    refalrts::alloc_ident(vm, context[26], identifiers[ident_Enum]);
    refalrts::alloc_close_call(vm, context[27]);
    refalrts::alloc_close_call(vm, context[20]);
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[19] );
    res = refalrts::splice_elem( res, context[20] );
    refalrts::push_stack( vm, context[27] );
    refalrts::push_stack( vm, context[22] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_stvar( res, context[24] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_elem( res, context[19] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </19 & CreateMetaFunctions$1=1\1*2$3?1/23 # True/24 >/20
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::call_left( context[21], context[22], context[19], context[20] );
      context[24] = refalrts::ident_left( identifiers[ident_True], context[21], context[22] );
      if( ! context[24] )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;
      //DEBUG: e.FunctionNames#2: 11
      //DEBUG: s.Definition#2: 15
      //DEBUG: t.SrcPos#2: 16
      //DEBUG: s.ScopeClass#2: 18
      //DEBUG: e.Name#2: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} & CreateMetaFunctions$1=1\1*2/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} </19 & CreateMetaFunctions$1=1\1*2$3?1/23 # True/24 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.FunctionNames#2/11 } Tile{ AsIs: (/7 } e.Name#2/13/25 Tile{ HalfReuse: )/20 } Tile{ AsIs: )/8 AsIs: (/9 AsIs: s.Definition#2/15 AsIs: t.SrcPos#2/16 AsIs: s.ScopeClass#2/18 AsIs: e.Name#2/13 AsIs: )/10 } Tile{ ]] }
      refalrts::copy_evar(vm, context[25], context[26], context[13], context[14]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_close_bracket(context[20]);
      refalrts::link_brackets( context[9], context[10] );
      refalrts::link_brackets( context[0], context[8] );
      refalrts::link_brackets( context[7], context[20] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[8], context[10] );
      res = refalrts::splice_evar( res, context[20], context[20] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::splice_to_freelist_open( vm, context[0], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[19], context[20]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CreateMetaFunctions$1=1\1*2/4 (/7 e.FunctionNames#2/5 )/8 t.OtherItem#2/9 >/1
  // closed e.FunctionNames#2 as range 5
  //DEBUG: t.OtherItem#2: 9
  //DEBUG: e.FunctionNames#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CreateMetaFunctions$1=1\1*2/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.FunctionNames#2/5 AsIs: )/8 AsIs: t.OtherItem#2/9 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[10] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CreateMetaFunctions_S1A1L1D2("CreateMetaFunctions$1=1\\1*2", COOKIE1_, COOKIE2_, func_gen_CreateMetaFunctions_S1A1L1D2);


static refalrts::FnResult func_gen_DoMapAccumm_Aux_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & DoMapAccum-Aux@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum-Aux@1/4 e.new#1/2 (/11 e.new#2/9 )/12 (/7 e.new#3/5 )/8 >/1
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
  // closed e.new#1 as range 2
  // closed e.new#2 as range 9
  // closed e.new#3 as range 5
  do {
    // </0 & DoMapAccum-Aux@1/4 e.Scanned#1/13 (/11 t.Acc#1/19 e.StepScanned#1/15 )/12 (/7 e.Tail#1/17 )/8 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[5];
    context[18] = context[6];
    // closed e.Scanned#1 as range 13
    // closed e.Tail#1 as range 17
    context[20] = refalrts::tvar_left( context[19], context[15], context[16] );
    if( ! context[20] )
      continue;
    // closed e.StepScanned#1 as range 15
    //DEBUG: e.Scanned#1: 13
    //DEBUG: e.Tail#1: 17
    //DEBUG: t.Acc#1: 19
    //DEBUG: e.StepScanned#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} (/11 {REMOVED TILE} {REMOVED TILE} )/12 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@1/4 } Tile{ AsIs: t.Acc#1/19 } Tile{ AsIs: e.Scanned#1/13 } Tile{ AsIs: e.StepScanned#1/15 } Tile{ AsIs: (/7 AsIs: e.Tail#1/17 AsIs: )/8 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum-Aux@1/4 e.scanned#0/2 (/11 e.acc-and-step-scanned#0/9 )/12 (/7 e.items#0/5 )/8 >/1
  // closed e.scanned#0 as range 2
  // closed e.acc-and-step-scanned#0 as range 9
  // closed e.items#0 as range 5
  //DEBUG: e.scanned#0: 2
  //DEBUG: e.acc-and-step-scanned#0: 9
  //DEBUG: e.items#0: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum-Aux@0/4 } & CreateMetaFunctions$1=1\1/13 Tile{ AsIs: (/7 } Tile{ AsIs: e.scanned#0/2 } Tile{ AsIs: )/8 } Tile{ AsIs: (/11 AsIs: e.acc-and-step-scanned#0/9 AsIs: )/12 } Tile{ AsIs: e.items#0/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_CreateMetaFunctions_S1A1L1]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccumm_Aux_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccumm_Aux_Z1("DoMapAccum-Aux@1", COOKIE1_, COOKIE2_, func_gen_DoMapAccumm_Aux_Z1);


//End of file
