// This file automatically generated from 'Engine.ref'
// Don't edit! Edit 'Engine.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_804678715_817106268

enum efunc {
  efunc_gen_Mu_C1 = 0,
  efunc_Mu = 1,
  efunc_u_u_Stepm_Start = 2,
  efunc_u_u_Mum_Aux = 3,
  efunc_u_u_Stepm_End = 4,
  efunc_gen_u_u_Mum_Aux_S13B1 = 5,
  efunc_u_u_FindMuPtr = 6,
  efunc_Add = 7,
  efunc_Div = 8,
  efunc_Mod = 9,
  efunc_Mul = 10,
  efunc_Residue = 11,
  efunc_Sub = 12,
  efunc_Type = 13,
  efunc_Up = 14,
  efunc_Evm_met = 15,
  efunc_gen_Residue_C1 = 16,
  efunc_gen_CompileFile_B1 = 17,
  efunc_BackEnd = 18,
  efunc_gen_CompileFile_A1 = 19,
  efunc_ELm_Destroy = 20,
  efunc_CompileFile = 21,
  efunc_FrontEnd = 22,
  efunc_gen_FrontEnd_A3 = 23,
  efunc_CheckProgram = 24,
  efunc_gen_FrontEnd_A2 = 25,
  efunc_GlueErrorListsAndASTs = 26,
  efunc_gen_FrontEnd_A1 = 27,
  efunc_ResolveIncludes = 28,
  efunc_LoadAST = 29,
  efunc_gen_PreludeIncludeLine_B1 = 30,
  efunc_PreludeIncludeLine = 31,
  efunc_Configm_GetPrelude = 32,
  efunc_gen_LoadAST_S1A3 = 33,
  efunc_gen_LoadAST_S1A2 = 34,
  efunc_R5m_Parse = 35,
  efunc_ELm_Create = 36,
  efunc_gen_LoadAST_S1A1 = 37,
  efunc_R5m_Scan = 38,
  efunc_gen_LoadAST_S2A2 = 39,
  efunc_SRm_ParseProgram = 40,
  efunc_gen_LoadAST_S2A1 = 41,
  efunc_SRm_LexFolding = 42,
  efunc_gen_LoadAST_S3B1S1B1 = 43,
  efunc_ELm_AddErrorAt = 44,
  efunc_gen_LoadAST_S3B1S1A1 = 45,
  efunc_RemoveFile = 46,
  efunc_gen_LoadAST_S3B1 = 47,
  efunc_Symb = 48,
  efunc_gen_LoadAST_S3A3 = 49,
  efunc_System = 50,
  efunc_ExistFile = 51,
  efunc_gen_LoadAST_S3A2 = 52,
  efunc_gen_LoadAST_S3A1 = 53,
  efunc_Configm_GetR5Mode = 54,
  efunc_SRm_LoadSource = 55,
  efunc_gen_ResolveIncludes_S3L1 = 56,
  efunc_ResolveIncludesm_CheckAlias = 57,
  efunc_Map = 58,
  efunc_UnBracket = 59,
  efunc_FindInclude = 60,
  efunc_Configm_GetSearchFolders = 61,
  efunc_ResolveIncludesm_CheckValid = 62,
  efunc_ResolveIncludesm_CheckEqualAST = 63,
  efunc_gen_GlueErrorListsAndASTs_L1 = 64,
  efunc_PatchASTSrcPos = 65,
  efunc_ELm_Concat = 66,
  efunc_MapReduce = 67,
  efunc_gen_PatchASTSrcPos_A1 = 68,
  efunc_PatchASTSrcPosm_Item = 69,
  efunc_gen_PatchASTSrcPos_A1L1 = 70,
  efunc_gen_PatchASTSrcPosm_Item_S5C1 = 71,
  efunc_PatchASTSrcPosm_Body = 72,
  efunc_OneOf = 73,
  efunc_PatchASTSrcPosm_Expr = 74,
  efunc_PatchASTSrcPosm_Sentence = 75,
  efunc_gen_PatchASTSrcPosm_Sentence_A1 = 76,
  efunc_PatchASTSrcPosm_Blocks = 77,
  efunc_PatchASTSrcPosm_Chain = 78,
  efunc_gen_PatchASTSrcPosm_Sentence_A1L1 = 79,
  efunc_gen_PatchASTSrcPosm_Chain_L1 = 80,
  efunc_gen_PatchASTSrcPosm_Blocks_L1 = 81,
  efunc_gen_PatchASTSrcPosm_Expr_L1 = 82,
  efunc_gen_BackEnd_B1 = 83,
  efunc_BackEndm_RASLModule = 84,
  efunc_BackEndm_NativeModule = 85,
  efunc_gen_BackEnd_A11 = 86,
  efunc_LowLevelRASL = 87,
  efunc_gen_BackEnd_A10 = 88,
  efunc_Logm_HighLevelRASL = 89,
  efunc_gen_BackEnd_A9 = 90,
  efunc_HighLevelRASL = 91,
  efunc_gen_BackEnd_A8 = 92,
  efunc_Logm_AST = 93,
  efunc_gen_BackEnd_A8B1 = 94,
  efunc_OptTree = 95,
  efunc_OptTreem_CleanupMarkup = 96,
  efunc_gen_BackEnd_A7 = 97,
  efunc_Configm_GetOptTree = 98,
  efunc_gen_BackEnd_A6 = 99,
  efunc_gen_BackEnd_A5 = 100,
  efunc_Desugar = 101,
  efunc_gen_BackEnd_A4 = 102,
  efunc_Configm_GetGenMode = 103,
  efunc_gen_BackEnd_A3 = 104,
  efunc_Configm_GetConditionsMode = 105,
  efunc_gen_BackEnd_A2 = 106,
  efunc_Configm_GetOptResult = 107,
  efunc_gen_BackEnd_A1 = 108,
  efunc_Configm_GetOptPattern = 109,
  efunc_Configm_GetDebugMode = 110,
  efunc_gen_BackEndm_RASLModule_B1 = 111,
  efunc_SaveBytes = 112,
  efunc_GenProgramm_RASL = 113,
  efunc_GenProgramm_Native = 114,
  efunc_SaveFile = 115,
  efunc_gen_GrammarCheck_B1 = 116,
  efunc_gen_GrammarCheck_A1 = 117,
  efunc_GrammarCheck = 118,
};


enum ident {
  ident_k43_ = 0,
  ident_k47_ = 1,
  ident_k37_ = 2,
  ident_k42_ = 3,
  ident_k63_ = 4,
  ident_m_ = 5,
  ident_ELm_NoErrors = 6,
  ident_ELm_HasErrors = 7,
  ident_Fails = 8,
  ident_Include = 9,
  ident_True = 10,
  ident_False = 11,
  ident_R5 = 12,
  ident_FileRowCol = 13,
  ident_SR = 14,
  ident_RSL = 15,
  ident_Success = 16,
  ident_NoPos = 17,
  ident_FileLine = 18,
  ident_RowCol = 19,
  ident_Function = 20,
  ident_Ident = 21,
  ident_NativeBlock = 22,
  ident_Enum = 23,
  ident_Swap = 24,
  ident_Declaration = 25,
  ident_Entry = 26,
  ident_Spec = 27,
  ident_Sentences = 28,
  ident_NativeBody = 29,
  ident_TkVariable = 30,
  ident_TkNewVariable = 31,
  ident_Name = 32,
  ident_Symbol = 33,
  ident_Brackets = 34,
  ident_ADTm_Brackets = 35,
  ident_CallBrackets = 36,
  ident_Closure = 37,
  ident_NoNative = 38,
  ident_OptTree = 39,
  ident_NoOpt = 40,
};


static refalrts::FnResult func_Mu(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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
  if( ! refalrts::alloc_name( vm, context[9], functions[efunc_gen_Mu_C1] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[11], functions[efunc_u_u_Stepm_Start] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[14], functions[efunc_u_u_Mum_Aux] ) )
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
    refalrts::update_name( context[4], functions[efunc_u_u_Stepm_End] );
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

static refalrts::NativeReference nat_ref_Mu("Mu", 804678715U, 817106268U, func_Mu);


static refalrts::FnResult func_gen_u_u_Mum_Aux_S13B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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
    if( ! refalrts::alloc_number( vm, context[9], 817106268UL ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], functions[efunc_u_u_FindMuPtr] );
    refalrts::reinit_number( context[5], 804678715UL );
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
  refalrts::update_name( context[4], functions[efunc_u_u_FindMuPtr] );
  refalrts::reinit_number( context[5], 804678715UL );
  refalrts::reinit_number( context[7], 817106268UL );
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

static refalrts::NativeReference nat_ref_gen_u_u_Mum_Aux_S13B1("__Mu-Aux$13:1", 804678715U, 817106268U, func_gen_u_u_Mum_Aux_S13B1);


static refalrts::FnResult func_u_u_Mum_Aux(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Add/1 ]] }
      refalrts::reinit_name( context[1], functions[efunc_Add] );
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
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Div/1 ]] }
      refalrts::reinit_name( context[1], functions[efunc_Div] );
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
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Mod/1 ]] }
      refalrts::reinit_name( context[1], functions[efunc_Mod] );
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
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Mul/1 ]] }
      refalrts::reinit_name( context[1], functions[efunc_Mul] );
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
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Residue/1 ]] }
      refalrts::reinit_name( context[1], functions[efunc_Residue] );
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
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Sub/1 ]] }
      refalrts::reinit_name( context[1], functions[efunc_Sub] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 # +/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_k43_], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # +/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Add/1 ]] }
      refalrts::reinit_name( context[1], functions[efunc_Add] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 # //5 >/1
      if( ! refalrts::ident_term( identifiers[ident_k47_], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # //5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Div/1 ]] }
      refalrts::reinit_name( context[1], functions[efunc_Div] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 # %/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_k37_], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # %/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Mod/1 ]] }
      refalrts::reinit_name( context[1], functions[efunc_Mod] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 # */5 >/1
      if( ! refalrts::ident_term( identifiers[ident_k42_], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # */5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Mul/1 ]] }
      refalrts::reinit_name( context[1], functions[efunc_Mul] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 # ?/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_k63_], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # ?/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Residue/1 ]] }
      refalrts::reinit_name( context[1], functions[efunc_Residue] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & __Mu-Aux/4 # -/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_m_], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # -/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: & Sub/1 ]] }
    refalrts::reinit_name( context[1], functions[efunc_Sub] );
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
  if( ! refalrts::alloc_name( vm, context[8], functions[efunc_gen_u_u_Mum_Aux_S13B1] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[9] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], functions[efunc_Type] );
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

static refalrts::NativeReference nat_ref_u_u_Mum_Aux("__Mu-Aux", 804678715U, 817106268U, func_u_u_Mum_Aux);


static refalrts::FnResult func_Residue(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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
  if( ! refalrts::alloc_name( vm, context[9], functions[efunc_gen_Residue_C1] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[11], functions[efunc_u_u_Stepm_Start] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[14], functions[efunc_u_u_Mum_Aux] ) )
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
    refalrts::update_name( context[4], functions[efunc_u_u_Stepm_End] );
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

static refalrts::NativeReference nat_ref_Residue("Residue", 804678715U, 817106268U, func_Residue);


static refalrts::FnResult func_gen_CompileFile_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
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
    // </0 & CompileFile:1/4 t.Config#1/5 (/9 e.SrcName#1/7 )/10 (/13 e.OutputName#1/11 )/14 (/17 e.AST#2/15 )/18 # EL-NoErrors/19 >/1
    if( ! refalrts::ident_term( identifiers[ident_ELm_NoErrors], context[19] ) )
      continue;
    // closed e.SrcName#1 as range 7
    // closed e.OutputName#1 as range 11
    // closed e.AST#2 as range 15
    //DEBUG: t.Config#1: 5
    //DEBUG: e.SrcName#1: 7
    //DEBUG: e.OutputName#1: 11
    //DEBUG: e.AST#2: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/17 {REMOVED TILE} )/18 # EL-NoErrors/19 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & BackEnd/4 AsIs: t.Config#1/5 AsIs: (/9 AsIs: e.SrcName#1/7 AsIs: )/10 AsIs: (/13 AsIs: e.OutputName#1/11 AsIs: )/14 } Tile{ AsIs: e.AST#2/15 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], functions[efunc_BackEnd] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[15], context[16] );
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
  refalrts::reinit_ident( context[1], identifiers[ident_Fails] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CompileFile_B1("CompileFile:1", 804678715U, 817106268U, func_gen_CompileFile_B1);


static refalrts::FnResult func_gen_CompileFile_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </17 Tile{ HalfReuse: [*]/0 Reuse: & CompileFile:1/4 AsIs: t.Config#1/5 AsIs: (/9 AsIs: e.SrcName#1/7 AsIs: )/10 AsIs: (/13 AsIs: e.OutputName#1/11 AsIs: )/14 } (/18 Tile{ AsIs: e.AST#2/2 } )/19 {*}/20 </21 & EL-Destroy/22 Tile{ AsIs: t.ErrorList#2/15 } >/23 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[20], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[22], functions[efunc_ELm_Destroy] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[23] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], functions[efunc_gen_CompileFile_B1] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[21] );
  refalrts::link_brackets( context[18], context[19] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[19], context[22] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[0], context[14] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  refalrts::use( res );
  refalrts::wrap_closure( context[20] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CompileFile_A1("CompileFile=1", 804678715U, 817106268U, func_gen_CompileFile_A1);


static refalrts::FnResult func_CompileFile(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
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
  //RESULT: Tile{ [[ } </17 Tile{ HalfReuse: [*]/0 Reuse: & CompileFile=1/4 AsIs: t.Config#1/10 AsIs: (/14 } Tile{ AsIs: e.SrcName#1/12 } )/18 Tile{ HalfReuse: (/15 AsIs: e.OutputName#1/2 HalfReuse: )/9 HalfReuse: {*}/8 HalfReuse: </7 HalfReuse: & FrontEnd/6 } t.Config#1/10/19 Tile{ AsIs: s.Dialect#1/16 } e.SrcName#1/12/21 Tile{ HalfReuse: >/5 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[18] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(vm, context[19], context[20], context[10], context[11]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(vm, context[21], context[22], context[12], context[13]))
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], functions[efunc_gen_CompileFile_A1] );
  refalrts::reinit_open_bracket( context[15] );
  refalrts::reinit_close_bracket( context[9] );
  refalrts::reinit_unwrapped_closure( context[8], context[0] );
  refalrts::reinit_open_call( context[7] );
  refalrts::reinit_name( context[6], functions[efunc_FrontEnd] );
  refalrts::reinit_close_call( context[5] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[7] );
  refalrts::link_brackets( context[15], context[9] );
  refalrts::link_brackets( context[14], context[18] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[5];
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[15], context[6] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[0], context[14] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  refalrts::use( res );
  refalrts::wrap_closure( context[8] );
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
  if (! refalrts::copy_evar(vm, context[7], context[8], context[2], context[3]))
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], functions[efunc_CheckProgram] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FrontEnd_A3("FrontEnd=3", 804678715U, 817106268U, func_gen_FrontEnd_A3);


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
  if( ! refalrts::alloc_open_call( vm, context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[10], functions[efunc_gen_FrontEnd_A3] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[11] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], functions[efunc_GlueErrorListsAndASTs] );
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

static refalrts::NativeReference nat_ref_gen_FrontEnd_A2("FrontEnd=2", 804678715U, 817106268U, func_gen_FrontEnd_A2);


static refalrts::FnResult func_gen_FrontEnd_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </14 Tile{ HalfReuse: [*]/0 Reuse: & FrontEnd=2/4 AsIs: (/7 AsIs: e.SrcName#1/5 AsIs: )/8 } {*}/15 </16 & ResolveIncludes/17 Tile{ AsIs: t.Config#1/9 } (/18 )/19 (/20 Tile{ AsIs: t.ErrorList#2/12 } Tile{ AsIs: s.Dialect#1/11 } (/21 (/22 e.SrcName#1/5/23 )/25 (/26 e.SrcName#1/5/27 )/29 )/30 (/31 )/32 Tile{ AsIs: e.FirstAST#2/2 } )/33 >/34 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[15], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[17], functions[efunc_ResolveIncludes] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[22] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(vm, context[23], context[24], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[26] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(vm, context[27], context[28], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[31] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[32] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[33] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[34] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], functions[efunc_gen_FrontEnd_A2] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[34] );
  refalrts::push_stack( vm, context[16] );
  refalrts::link_brackets( context[20], context[33] );
  refalrts::link_brackets( context[31], context[32] );
  refalrts::link_brackets( context[21], context[30] );
  refalrts::link_brackets( context[26], context[29] );
  refalrts::link_brackets( context[22], context[25] );
  refalrts::link_brackets( context[18], context[19] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[33], context[34] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[21], context[32] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[18], context[20] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[15], context[17] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  refalrts::use( res );
  refalrts::wrap_closure( context[15] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FrontEnd_A1("FrontEnd=1", 804678715U, 817106268U, func_gen_FrontEnd_A1);


static refalrts::FnResult func_FrontEnd(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
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
  //RESULT: Tile{ [[ } </8 [*]/9 & FrontEnd=1/10 (/11 e.SrcName#1/2/12 )/14 t.Config#1/5/15 s.Dialect#1/7/17 {*}/18 Tile{ AsIs: </0 Reuse: & LoadAST/4 AsIs: t.Config#1/5 AsIs: s.Dialect#1/7 AsIs: e.SrcName#1/2 AsIs: >/1 } >/19 Tile{ ]] }
  if( ! refalrts::alloc_open_call( vm, context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_closure_head( vm, context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[10], functions[efunc_gen_FrontEnd_A1] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[11] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(vm, context[12], context[13], context[2], context[3]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[14] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(vm, context[15], context[16], context[5], context[6]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(vm, context[17], context[7]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[18], context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[19] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], functions[efunc_LoadAST] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[8], context[18] );
  refalrts::use( res );
  refalrts::wrap_closure( context[18] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FrontEnd("FrontEnd", 804678715U, 817106268U, func_FrontEnd);


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
  if( ! refalrts::alloc_open_bracket( vm, context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_ident( context[0], identifiers[ident_Include] );
  refalrts::reinit_number( context[4], 1UL );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[5], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PreludeIncludeLine_B1("PreludeIncludeLine:1", 804678715U, 817106268U, func_gen_PreludeIncludeLine_B1);


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
  if( ! refalrts::alloc_open_call( vm, context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[8], functions[efunc_gen_PreludeIncludeLine_B1] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[9] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], functions[efunc_Configm_GetPrelude] );
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

static refalrts::NativeReference nat_ref_PreludeIncludeLine("PreludeIncludeLine", 804678715U, 817106268U, func_PreludeIncludeLine);


static refalrts::FnResult func_gen_LoadAST_S1A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & LoadAST$1=3/4 t.Config#1/5 t.ErrorList#4/7 e.AST#4/2 >/1
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
  // closed e.AST#4 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: t.ErrorList#4: 7
  //DEBUG: e.AST#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#4/7 } Tile{ AsIs: </0 Reuse: & PreludeIncludeLine/4 AsIs: t.Config#1/5 } Tile{ AsIs: >/1 } Tile{ AsIs: e.AST#4/2 } Tile{ ]] }
  refalrts::update_name( context[4], functions[efunc_PreludeIncludeLine] );
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

static refalrts::NativeReference nat_ref_gen_LoadAST_S1A3("LoadAST$1=3", 804678715U, 817106268U, func_gen_LoadAST_S1A3);


static refalrts::FnResult func_gen_LoadAST_S1A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & LoadAST$1=3/12 Tile{ AsIs: t.Config#1/5 } {*}/13 </14 & R5-Parse/15 </16 Tile{ HalfReuse: & EL-Create/9 AsIs: e.SrcName#1/7 HalfReuse: >/10 AsIs: s.Mode#2/11 AsIs: e.Tokens#3/2 AsIs: >/1 } >/17 Tile{ ]] }
  if( ! refalrts::alloc_name( vm, context[12], functions[efunc_gen_LoadAST_S1A3] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[13], context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[15], functions[efunc_R5m_Parse] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[17] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[4] );
  refalrts::reinit_name( context[9], functions[efunc_ELm_Create] );
  refalrts::reinit_close_call( context[10] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[9], context[1] );
  res = refalrts::splice_evar( res, context[13], context[16] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  refalrts::use( res );
  refalrts::wrap_closure( context[13] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LoadAST_S1A2("LoadAST$1=2", 804678715U, 817106268U, func_gen_LoadAST_S1A2);


static refalrts::FnResult func_gen_LoadAST_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </12 Tile{ HalfReuse: [*]/0 Reuse: & LoadAST$1=2/4 AsIs: t.Config#1/5 AsIs: (/9 AsIs: e.SrcName#1/7 AsIs: )/10 AsIs: s.Mode#2/11 HalfReuse: {*}/1 } </13 & R5-Scan/14 s.Mode#2/11/15 e.SrcName#1/7/16 >/18 >/19 Tile{ ]] }
  if( ! refalrts::alloc_open_call( vm, context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[14], functions[efunc_R5m_Scan] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(vm, context[15], context[11]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(vm, context[16], context[17], context[7], context[8]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[19] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], functions[efunc_gen_LoadAST_S1A2] );
  refalrts::reinit_unwrapped_closure( context[1], context[0] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[19] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  refalrts::use( res );
  refalrts::wrap_closure( context[1] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LoadAST_S1A1("LoadAST$1=1", 804678715U, 817106268U, func_gen_LoadAST_S1A1);


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
  if( ! refalrts::alloc_open_call( vm, context[9] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], functions[efunc_SRm_ParseProgram] );
  refalrts::reinit_open_call( context[4] );
  refalrts::reinit_name( context[7], functions[efunc_ELm_Create] );
  refalrts::reinit_close_call( context[8] );
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

static refalrts::NativeReference nat_ref_gen_LoadAST_S2A2("LoadAST$2=2", 804678715U, 817106268U, func_gen_LoadAST_S2A2);


static refalrts::FnResult func_gen_LoadAST_S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & LoadAST$2=1/4 (/7 e.SrcName#1/5 )/8 e.SrcText#2/2 >/1
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
  // closed e.SrcText#2 as range 2
  //DEBUG: e.SrcName#1: 5
  //DEBUG: e.SrcText#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 Tile{ HalfReuse: [*]/0 Reuse: & LoadAST$2=2/4 AsIs: (/7 AsIs: e.SrcName#1/5 AsIs: )/8 } {*}/10 </11 & SR-LexFolding/12 Tile{ AsIs: e.SrcText#2/2 } >/13 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[10], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[12], functions[efunc_SRm_LexFolding] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[13] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], functions[efunc_gen_LoadAST_S2A2] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[10], context[12] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  refalrts::wrap_closure( context[10] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LoadAST_S2A1("LoadAST$2=1", 804678715U, 817106268U, func_gen_LoadAST_S2A1);


static refalrts::FnResult func_gen_LoadAST_S3B1S1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
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
    // </0 & LoadAST$3:1$1:1/4 t.ErrorList#6/9 (/13 e.AST#6/11 )/14 t.ErrorPos#4/15 (/19 e.DecompiledName#3/17 )/20 # True/21 (/7 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_True], context[21] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.AST#6 as range 11
    // closed e.DecompiledName#3 as range 17
    //DEBUG: t.ErrorList#6: 9
    //DEBUG: t.ErrorPos#4: 15
    //DEBUG: e.AST#6: 11
    //DEBUG: e.DecompiledName#3: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & LoadAST$3:1$1:1/4 {REMOVED TILE} (/13 {REMOVED TILE} )/14 t.ErrorPos#4/15 (/19 e.DecompiledName#3/17 )/20 # True/21 (/7 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#6/9 } Tile{ AsIs: e.AST#6/11 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
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
  if( ! refalrts::alloc_chars( vm, context[22], context[23], "t remove file ", 14 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], functions[efunc_ELm_AddErrorAt] );
  refalrts::reinit_char( context[19], 'C' );
  refalrts::reinit_char( context[14], 'a' );
  refalrts::reinit_char( context[13], 'n' );
  refalrts::reinit_char( context[20], '\'' );
  refalrts::reinit_char( context[21], ' ' );
  refalrts::reinit_char( context[7], '(' );
  refalrts::reinit_char( context[8], ')' );
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

static refalrts::NativeReference nat_ref_gen_LoadAST_S3B1S1B1("LoadAST$3:1$1:1", 804678715U, 817106268U, func_gen_LoadAST_S3B1S1B1);


static refalrts::FnResult func_gen_LoadAST_S3B1S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
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
  //RESULT: Tile{ [[ AsIs: </0 } [*]/13 & LoadAST$3:1$1:1/14 Tile{ AsIs: t.ErrorList#6/11 } (/15 Tile{ AsIs: e.AST#6/2 } Tile{ HalfReuse: )/4 AsIs: t.ErrorPos#4/5 AsIs: (/9 AsIs: e.DecompiledName#3/7 AsIs: )/10 } {*}/16 </17 & RemoveFile/18 e.DecompiledName#3/7/19 >/21 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_closure_head( vm, context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[14], functions[efunc_gen_LoadAST_S3B1S1B1] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[16], context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[18], functions[efunc_RemoveFile] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(vm, context[19], context[20], context[7], context[8]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[21] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_close_bracket( context[4] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[17] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::link_brackets( context[15], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[16], context[21] );
  res = refalrts::splice_evar( res, context[4], context[10] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::use( res );
  refalrts::wrap_closure( context[16] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LoadAST_S3B1S1A1("LoadAST$3:1$1=1", 804678715U, 817106268U, func_gen_LoadAST_S3B1S1A1);


static refalrts::FnResult func_gen_LoadAST_S3B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
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
    // </0 & LoadAST$3:1/4 t.new#6/5 (/9 e.new#7/7 )/10 t.new#8/11 0/16 s.new#9/13 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = refalrts::number_left( 0UL, context[14], context[15] );
    if( ! context[16] )
      continue;
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;
    // closed e.new#7 as range 7
    do {
      // </0 & LoadAST$3:1/4 t.ErrorPos#4/5 (/9 e.DecompiledName#3/7 )/10 t.Config#1/11 0/16 # True/13 >/1
      if( ! refalrts::ident_term( identifiers[ident_True], context[13] ) )
        continue;
      // closed e.DecompiledName#3 as range 7
      //DEBUG: t.ErrorPos#4: 5
      //DEBUG: t.Config#1: 11
      //DEBUG: e.DecompiledName#3: 7

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </17 Tile{ HalfReuse: [*]/0 Reuse: & LoadAST$3:1$1=1/4 AsIs: t.ErrorPos#4/5 AsIs: (/9 AsIs: e.DecompiledName#3/7 AsIs: )/10 } {*}/18 </19 & LoadAST/20 Tile{ AsIs: t.Config#1/11 HalfReuse: # R5/16 } e.DecompiledName#3/7/21 Tile{ HalfReuse: >/13 AsIs: >/1 ]] }
      if( ! refalrts::alloc_open_call( vm, context[17] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_unwrapped_closure( vm, context[18], context[0] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( vm, context[19] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( vm, context[20], functions[efunc_LoadAST] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(vm, context[21], context[22], context[7], context[8]))
        return refalrts::cNoMemory;
      refalrts::reinit_closure_head( context[0] );
      refalrts::update_name( context[4], functions[efunc_gen_LoadAST_S3B1S1A1] );
      refalrts::reinit_ident( context[16], identifiers[ident_R5] );
      refalrts::reinit_close_call( context[13] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[17] );
      refalrts::push_stack( vm, context[13] );
      refalrts::push_stack( vm, context[19] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[13];
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[11], context[16] );
      res = refalrts::splice_evar( res, context[18], context[20] );
      res = refalrts::splice_evar( res, context[0], context[10] );
      res = refalrts::splice_evar( res, context[17], context[17] );
      refalrts::use( res );
      refalrts::wrap_closure( context[18] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & LoadAST$3:1/4 t.ErrorPos#4/5 (/9 e.DecompiledName#3/7 )/10 t.Config#1/11 0/16 # False/13 >/1
    if( ! refalrts::ident_term( identifiers[ident_False], context[13] ) )
      continue;
    // closed e.DecompiledName#3 as range 7
    //DEBUG: t.ErrorPos#4: 5
    //DEBUG: t.Config#1: 11
    //DEBUG: e.DecompiledName#3: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.Config#1/11 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 } </17 Tile{ HalfReuse: & EL-Create/10 } >/18 Tile{ AsIs: t.ErrorPos#4/5 HalfReuse: 'R'/9 } 'S'/19 Tile{ HalfReuse: 'L'/16 HalfReuse: ' '/13 }"decompiler can\'t create "/20 Tile{ AsIs: e.DecompiledName#3/7 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( vm, context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( vm, context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( vm, context[19], 'S' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( vm, context[20], context[21], "decompiler can\'t create ", 24 ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], functions[efunc_ELm_AddErrorAt] );
    refalrts::reinit_name( context[10], functions[efunc_ELm_Create] );
    refalrts::reinit_char( context[9], 'R' );
    refalrts::reinit_char( context[16], 'L' );
    refalrts::reinit_char( context[13], ' ' );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[18] );
    refalrts::push_stack( vm, context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[16], context[13] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[5], context[9] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[17], context[17] );
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
  if( ! refalrts::alloc_open_call( vm, context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[15], functions[efunc_ELm_Create] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[16], context[17], "SL decompiler failed with retcode ", 34 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[19], functions[efunc_Symb] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[20] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], functions[efunc_ELm_AddErrorAt] );
  refalrts::reinit_close_call( context[10] );
  refalrts::reinit_char( context[9], 'R' );
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

static refalrts::NativeReference nat_ref_gen_LoadAST_S3B1("LoadAST$3:1", 804678715U, 817106268U, func_gen_LoadAST_S3B1);


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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } Tile{ HalfReuse: & LoadAST$3:1/14 AsIs: t.ErrorPos#4/15 } Tile{ AsIs: (/7 AsIs: e.DecompiledName#3/5 AsIs: )/8 AsIs: t.Config#1/9 HalfReuse: {*}/13 } </17 & System/18"rsl-decompiler "/19 Tile{ AsIs: e.SrcName#1/11 } >/21 </22 & ExistFile/23 e.DecompiledName#3/5/24 >/26 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[18], functions[efunc_System] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[19], context[20], "rsl-decompiler ", 15 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[23], functions[efunc_ExistFile] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(vm, context[24], context[25], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[26] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[4] );
  refalrts::reinit_name( context[14], functions[efunc_gen_LoadAST_S3B1] );
  refalrts::reinit_unwrapped_closure( context[13], context[4] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[26] );
  refalrts::push_stack( vm, context[22] );
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[17] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[21], context[26] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[17], context[20] );
  res = refalrts::splice_evar( res, context[7], context[13] );
  res = refalrts::splice_evar( res, context[14], context[16] );
  refalrts::use( res );
  refalrts::wrap_closure( context[13] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LoadAST_S3A3("LoadAST$3=3", 804678715U, 817106268U, func_gen_LoadAST_S3A3);


static refalrts::FnResult func_gen_LoadAST_S3A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 } [*]/11 & LoadAST$3=3/12 (/13 e.DecompiledName#3/2/14 Tile{ HalfReuse: )/4 AsIs: t.Config#1/5 AsIs: (/9 AsIs: e.SrcName#1/7 AsIs: )/10 } {*}/16 (/17 # FileRowCol/18 (/19 1/20 1/21 )/22 Tile{ AsIs: e.DecompiledName#3/2 } )/23 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_closure_head( vm, context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[12], functions[efunc_gen_LoadAST_S3A3] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[13] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(vm, context[14], context[15], context[2], context[3]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[16], context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[18], identifiers[ident_FileRowCol] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( vm, context[20], 1UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( vm, context[21], 1UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[23] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_close_bracket( context[4] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[17], context[23] );
  refalrts::link_brackets( context[19], context[22] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::link_brackets( context[13], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[16], context[22] );
  res = refalrts::splice_evar( res, context[4], context[10] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[11], context[13] );
  refalrts::use( res );
  refalrts::wrap_closure( context[16] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LoadAST_S3A2("LoadAST$3=2", 804678715U, 817106268U, func_gen_LoadAST_S3A2);


static refalrts::FnResult func_gen_LoadAST_S3A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </15 Tile{ HalfReuse: [*]/0 Reuse: & LoadAST$3=2/4 AsIs: t.Config#1/9 AsIs: (/13 AsIs: e.SrcName#1/11 AsIs: )/14 } {*}/16 Tile{ AsIs: e.BaseName#2/2 }"-decompiled"/17 Tile{ AsIs: '.'/8 AsIs: 'r'/7 Reuse: 'e'/6 Reuse: 'f'/5 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[16], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[17], context[18], "-decompiled", 11 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], functions[efunc_gen_LoadAST_S3A2] );
  refalrts::update_char( context[6], 'e' );
  refalrts::update_char( context[5], 'f' );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[15] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[0], context[14] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  refalrts::use( res );
  refalrts::wrap_closure( context[16] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LoadAST_S3A1("LoadAST$3=1", 804678715U, 817106268U, func_gen_LoadAST_S3A1);


static refalrts::FnResult func_LoadAST(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
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
    // </0 & LoadAST/4 t.Config#1/5 # R5/7 e.SrcName#1/2 >/1
    if( ! refalrts::ident_term( identifiers[ident_R5], context[7] ) )
      continue;
    // closed e.SrcName#1 as range 2
    //DEBUG: t.Config#1: 5
    //DEBUG: e.SrcName#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </8 Tile{ HalfReuse: [*]/0 Reuse: & LoadAST$1=1/4 AsIs: t.Config#1/5 HalfReuse: (/7 AsIs: e.SrcName#1/2 HalfReuse: )/1 } {*}/9 </10 & Config-GetR5Mode/11 t.Config#1/5/12 >/14 >/15 Tile{ ]] }
    if( ! refalrts::alloc_open_call( vm, context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_unwrapped_closure( vm, context[9], context[0] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( vm, context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( vm, context[11], functions[efunc_Configm_GetR5Mode] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(vm, context[12], context[13], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( vm, context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( vm, context[15] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_closure_head( context[0] );
    refalrts::update_name( context[4], functions[efunc_gen_LoadAST_S1A1] );
    refalrts::reinit_open_bracket( context[7] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[10] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[9], context[15] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    refalrts::use( res );
    refalrts::wrap_closure( context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & LoadAST/4 t.Config#1/5 # SR/7 e.SrcName#1/2 >/1
    if( ! refalrts::ident_term( identifiers[ident_SR], context[7] ) )
      continue;
    // closed e.SrcName#1 as range 2
    //DEBUG: t.Config#1: 5
    //DEBUG: e.SrcName#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} t.Config#1/5 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & LoadAST$2=1/8 (/9 e.SrcName#1/2/10 )/12 {*}/13 </14 Tile{ HalfReuse: & SR-LoadSource/7 AsIs: e.SrcName#1/2 AsIs: >/1 } >/15 Tile{ ]] }
    if( ! refalrts::alloc_name( vm, context[8], functions[efunc_gen_LoadAST_S2A1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( vm, context[9] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(vm, context[10], context[11], context[2], context[3]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( vm, context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_unwrapped_closure( vm, context[13], context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( vm, context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( vm, context[15] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_closure_head( context[4] );
    refalrts::reinit_name( context[7], functions[efunc_SRm_LoadSource] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[14] );
    refalrts::link_brackets( context[9], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    res = refalrts::splice_evar( res, context[8], context[14] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    refalrts::wrap_closure( context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & LoadAST/4 t.Config#1/5 # RSL/7 e.SrcName#1/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_RSL], context[7] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.SrcName#1 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: e.SrcName#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </8 Tile{ HalfReuse: [*]/0 Reuse: & LoadAST$3=1/4 AsIs: t.Config#1/5 HalfReuse: (/7 AsIs: e.SrcName#1/2 HalfReuse: )/1 } {*}/9 e.SrcName#1/2/10 >/12 Tile{ ]] }
  if( ! refalrts::alloc_open_call( vm, context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[9], context[0] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(vm, context[10], context[11], context[2], context[3]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[12] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], functions[efunc_gen_LoadAST_S3A1] );
  refalrts::reinit_open_bracket( context[7] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[8] );
  refalrts::link_brackets( context[7], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[12] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  refalrts::use( res );
  refalrts::wrap_closure( context[9] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_LoadAST("LoadAST", 804678715U, 817106268U, func_LoadAST);


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
  refalrts::reinit_close_bracket( context[1] );
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

static refalrts::NativeReference nat_ref_gen_ResolveIncludes_S3L1("ResolveIncludes$3\\1", 804678715U, 817106268U, func_gen_ResolveIncludes_S3L1);


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
          if( ! refalrts::alloc_open_call( vm, context[57] ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_name( vm, context[58], functions[efunc_ELm_AddErrorAt] ) )
            return refalrts::cNoMemory;
          if (! refalrts::copy_evar(vm, context[59], context[60], context[55], context[56]))
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_chars( vm, context[61], context[62], "Include file \"", 14 ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_chars( vm, context[63], context[64], "\" is not found", 14 ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_close_call( vm, context[65] ) )
            return refalrts::cNoMemory;
          if (! refalrts::copy_evar(vm, context[66], context[67], context[53], context[54]))
            return refalrts::cNoMemory;
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
    // </0 & ResolveIncludes/4 t.Config#1/5 (/9 e.BadIncludes#1/7 )/10 e.Units-B#1/13 (/19 t.ErrorList#1/21 s.Dialect#1/23 (/26 e.Aliases#1/24 )/27 (/30 e.ScannedAST#1/28 )/31 e.AST-B#1/32 (/38 # Include/40 t.SrcPos#1/41 e.IncludeName#1/36 )/39 e.AST-E#1/34 )/20 e.Units-E#1/15 >/1
    context[11] = context[2];
    context[12] = context[3];
    // closed e.BadIncludes#1 as range 7
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[15] = context[11];
      context[16] = context[12];
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_left( context[17], context[18], context[15], context[16] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      // closed e.Units-E#1 as range 15
      context[22] = refalrts::tvar_left( context[21], context[17], context[18] );
      if( ! context[22] )
        continue;
      if( ! refalrts::svar_left( context[23], context[17], context[18] ) )
        continue;
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[17], context[18] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      context[28] = 0;
      context[29] = 0;
      context[30] = refalrts::brackets_left( context[28], context[29], context[17], context[18] );
      if( ! context[30] )
        continue;
      refalrts::bracket_pointers(context[30], context[31]);
      // closed e.Aliases#1 as range 24
      // closed e.ScannedAST#1 as range 28
      context[32] = 0;
      context[33] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[34] = context[17];
        context[35] = context[18];
        context[36] = 0;
        context[37] = 0;
        context[38] = refalrts::brackets_left( context[36], context[37], context[34], context[35] );
        if( ! context[38] )
          continue;
        refalrts::bracket_pointers(context[38], context[39]);
        context[40] = refalrts::ident_left( identifiers[ident_Include], context[36], context[37] );
        if( ! context[40] )
          continue;
        // closed e.AST-E#1 as range 34
        context[42] = refalrts::tvar_left( context[41], context[36], context[37] );
        if( ! context[42] )
          continue;
        // closed e.IncludeName#1 as range 36
        //DEBUG: t.Config#1: 5
        //DEBUG: e.BadIncludes#1: 7
        //DEBUG: e.Units-B#1: 13
        //DEBUG: e.Units-E#1: 15
        //DEBUG: t.ErrorList#1: 21
        //DEBUG: s.Dialect#1: 23
        //DEBUG: e.Aliases#1: 24
        //DEBUG: e.ScannedAST#1: 28
        //DEBUG: e.AST-B#1: 32
        //DEBUG: e.AST-E#1: 34
        //DEBUG: t.SrcPos#1: 41
        //DEBUG: e.IncludeName#1: 36

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & ResolveIncludes-CheckAlias/4 AsIs: t.Config#1/5 AsIs: (/9 AsIs: e.BadIncludes#1/7 AsIs: )/10 } (/43 Tile{ AsIs: e.Units-B#1/13 } Tile{ AsIs: )/31 } (/44 Tile{ AsIs: (/19 AsIs: t.ErrorList#1/21 AsIs: s.Dialect#1/23 AsIs: (/26 AsIs: e.Aliases#1/24 AsIs: )/27 AsIs: (/30 } Tile{ AsIs: e.ScannedAST#1/28 } Tile{ AsIs: e.AST-B#1/32 } Tile{ AsIs: (/38 AsIs: # Include/40 AsIs: t.SrcPos#1/41 AsIs: e.IncludeName#1/36 AsIs: )/39 } Tile{ AsIs: )/20 } Tile{ AsIs: e.AST-E#1/34 } )/45 )/46 (/47 Tile{ AsIs: e.Units-E#1/15 } )/48 (/49 e.IncludeName#1/36/50 )/52 Tile{ AsIs: >/1 ]] }
        if( ! refalrts::alloc_open_bracket( vm, context[43] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( vm, context[44] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( vm, context[45] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( vm, context[46] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( vm, context[47] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( vm, context[48] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( vm, context[49] ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_evar(vm, context[50], context[51], context[36], context[37]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( vm, context[52] ) )
          return refalrts::cNoMemory;
        refalrts::update_name( context[4], functions[efunc_ResolveIncludesm_CheckAlias] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[49], context[52] );
        refalrts::link_brackets( context[47], context[48] );
        refalrts::link_brackets( context[44], context[46] );
        refalrts::link_brackets( context[19], context[45] );
        refalrts::link_brackets( context[30], context[20] );
        refalrts::link_brackets( context[38], context[39] );
        refalrts::link_brackets( context[26], context[27] );
        refalrts::link_brackets( context[43], context[31] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[48], context[52] );
        res = refalrts::splice_evar( res, context[15], context[16] );
        res = refalrts::splice_evar( res, context[45], context[47] );
        res = refalrts::splice_evar( res, context[34], context[35] );
        res = refalrts::splice_evar( res, context[20], context[20] );
        res = refalrts::splice_evar( res, context[38], context[39] );
        res = refalrts::splice_evar( res, context[32], context[33] );
        res = refalrts::splice_evar( res, context[28], context[29] );
        res = refalrts::splice_evar( res, context[19], context[30] );
        res = refalrts::splice_evar( res, context[44], context[44] );
        res = refalrts::splice_evar( res, context[31], context[31] );
        res = refalrts::splice_evar( res, context[13], context[14] );
        res = refalrts::splice_evar( res, context[43], context[43] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[32], context[33], context[17], context[18] ) );
    } while ( refalrts::open_evar_advance( context[13], context[14], context[11], context[12] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ResolveIncludes/4 t.Config#1/5 (/9 e.BadIncludes#1/7 )/10 e.Units#1/2 >/1
  // closed e.BadIncludes#1 as range 7
  // closed e.Units#1 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: e.BadIncludes#1: 7
  //DEBUG: e.Units#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} t.Config#1/5 (/9 e.BadIncludes#1/7 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 } Tile{ HalfReuse: & ResolveIncludes$3\1/10 AsIs: e.Units#1/2 AsIs: >/1 ]] }
  refalrts::update_name( context[4], functions[efunc_Map] );
  refalrts::reinit_name( context[10], functions[efunc_gen_ResolveIncludes_S3L1] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[10];
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ResolveIncludes("ResolveIncludes", 804678715U, 817106268U, func_ResolveIncludes);


static refalrts::FnResult func_ResolveIncludesm_CheckAlias(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 56 elems
  refalrts::Iter context[56];
  refalrts::zeros( context, 56 );
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
    // </0 & ResolveIncludes-CheckAlias/4 t.Config#1/9 (/13 e.BadIncludes#1/11 )/14 e.Groups-B#1/17 (/23 e.Units-B#1/25 (/31 t.ErrorList#1/33 s.Dialect#1/35 (/38 e.Aliases-B#1/44 (/50 e.IncludeName#1/52 )/51 e.Aliases-E#1/46 )/39 (/42 e.ScannedAST#1/40 )/43 e.NotScannedAST#1/29 )/32 e.Units-E#1/27 )/24 e.Groups-E#1/19 (/7 e.IncludeName#1/5 )/8 >/1
    context[15] = context[2];
    context[16] = context[3];
    // closed e.BadIncludes#1 as range 11
    // closed e.IncludeName#1 as range 5
    context[17] = 0;
    context[18] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[19] = context[15];
      context[20] = context[16];
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[19], context[20] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      // closed e.Groups-E#1 as range 19
      context[25] = 0;
      context[26] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[27] = context[21];
        context[28] = context[22];
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
        // closed e.ScannedAST#1 as range 40
        // closed e.NotScannedAST#1 as range 29
        context[44] = 0;
        context[45] = 0;
        refalrts::start_e_loop(vm);
        do {
          context[46] = context[36];
          context[47] = context[37];
          context[48] = 0;
          context[49] = 0;
          context[50] = refalrts::brackets_left( context[48], context[49], context[46], context[47] );
          if( ! context[50] )
            continue;
          refalrts::bracket_pointers(context[50], context[51]);
          if( ! refalrts::repeated_evar_left( vm, context[52], context[53], context[5], context[6], context[48], context[49] ) )
            continue;
          if( ! refalrts::empty_seq( context[48], context[49] ) )
            continue;
          // closed e.Aliases-E#1 as range 46
          //DEBUG: t.Config#1: 9
          //DEBUG: e.BadIncludes#1: 11
          //DEBUG: e.IncludeName#1: 5
          //DEBUG: e.Groups-B#1: 17
          //DEBUG: e.Groups-E#1: 19
          //DEBUG: e.Units-B#1: 25
          //DEBUG: e.Units-E#1: 27
          //DEBUG: t.ErrorList#1: 33
          //DEBUG: s.Dialect#1: 35
          //DEBUG: e.ScannedAST#1: 40
          //DEBUG: e.NotScannedAST#1: 29
          //DEBUG: e.Aliases-B#1: 44
          //DEBUG: e.Aliases-E#1: 46

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.IncludeName#1/5 {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & ResolveIncludes/4 AsIs: t.Config#1/9 AsIs: (/13 } Tile{ AsIs: e.BadIncludes#1/11 } Tile{ AsIs: )/8 } </54 & Map/55 Tile{ HalfReuse: & UnBracket/14 AsIs: e.Groups-B#1/17 AsIs: (/23 AsIs: e.Units-B#1/25 AsIs: (/31 AsIs: t.ErrorList#1/33 AsIs: s.Dialect#1/35 AsIs: (/38 AsIs: e.Aliases-B#1/44 AsIs: (/50 AsIs: e.IncludeName#1/52 AsIs: )/51 AsIs: e.Aliases-E#1/46 AsIs: )/39 AsIs: (/42 AsIs: e.ScannedAST#1/40 AsIs: )/43 AsIs: e.NotScannedAST#1/29 AsIs: )/32 AsIs: e.Units-E#1/27 AsIs: )/24 AsIs: e.Groups-E#1/19 HalfReuse: >/7 } Tile{ AsIs: >/1 ]] }
          if( ! refalrts::alloc_open_call( vm, context[54] ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_name( vm, context[55], functions[efunc_Map] ) )
            return refalrts::cNoMemory;
          refalrts::update_name( context[4], functions[efunc_ResolveIncludes] );
          refalrts::reinit_name( context[14], functions[efunc_UnBracket] );
          refalrts::reinit_close_call( context[7] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[7] );
          refalrts::push_stack( vm, context[54] );
          refalrts::link_brackets( context[23], context[24] );
          refalrts::link_brackets( context[31], context[32] );
          refalrts::link_brackets( context[42], context[43] );
          refalrts::link_brackets( context[38], context[39] );
          refalrts::link_brackets( context[50], context[51] );
          refalrts::link_brackets( context[13], context[8] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[14], context[7] );
          res = refalrts::splice_evar( res, context[54], context[55] );
          res = refalrts::splice_evar( res, context[8], context[8] );
          res = refalrts::splice_evar( res, context[11], context[12] );
          refalrts::splice_to_freelist_open( vm, context[13], res );
          return refalrts::cSuccess;
        } while ( refalrts::open_evar_advance( context[44], context[45], context[36], context[37] ) );
      } while ( refalrts::open_evar_advance( context[25], context[26], context[21], context[22] ) );
    } while ( refalrts::open_evar_advance( context[17], context[18], context[15], context[16] ) );
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
  if( ! refalrts::alloc_name( vm, context[29], functions[efunc_FindInclude] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[31] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[32], functions[efunc_Configm_GetSearchFolders] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(vm, context[33], context[34], context[9], context[10]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[35] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[36] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(vm, context[37], context[38], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[39] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[40] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], functions[efunc_ResolveIncludesm_CheckValid] );
  refalrts::reinit_open_call( context[1] );
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

static refalrts::NativeReference nat_ref_ResolveIncludesm_CheckAlias("ResolveIncludes-CheckAlias", 804678715U, 817106268U, func_ResolveIncludesm_CheckAlias);


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
    // </0 & ResolveIncludes-CheckValid/4 t.Config#1/5 (/9 e.BadIncludes#1/7 )/10 (/13 e.Units-B#1/11 )/14 (/17 t.CheckedUnit#1/28 )/18 (/21 e.Units-E#1/19 )/22 (/25 e.IncludeName#1/23 )/26 # Success/27 s.Dialect#1/32 e.FullPath#1/30 >/1
    context[30] = context[2];
    context[31] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Success], context[27] ) )
      continue;
    // closed e.BadIncludes#1 as range 7
    // closed e.Units-B#1 as range 11
    // closed e.Units-E#1 as range 19
    // closed e.IncludeName#1 as range 23
    if( ! refalrts::svar_left( context[32], context[30], context[31] ) )
      continue;
    // closed e.FullPath#1 as range 30
    //DEBUG: t.Config#1: 5
    //DEBUG: t.CheckedUnit#1: 28
    //DEBUG: e.BadIncludes#1: 7
    //DEBUG: e.Units-B#1: 11
    //DEBUG: e.Units-E#1: 19
    //DEBUG: e.IncludeName#1: 23
    //DEBUG: s.Dialect#1: 32
    //DEBUG: e.FullPath#1: 30

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ResolveIncludes-CheckEqualAST/4 AsIs: t.Config#1/5 AsIs: (/9 AsIs: e.BadIncludes#1/7 AsIs: )/10 AsIs: (/13 AsIs: e.Units-B#1/11 AsIs: )/14 AsIs: (/17 AsIs: t.CheckedUnit#1/28 AsIs: )/18 AsIs: (/21 AsIs: e.Units-E#1/19 AsIs: )/22 HalfReuse: s.Dialect1 #32/25 } (/33 Tile{ AsIs: e.IncludeName#1/23 } )/34 (/35 e.FullPath#1/30/36 Tile{ AsIs: )/26 HalfReuse: (/27 } </38 & LoadAST/39 t.Config#1/5/40 Tile{ AsIs: s.Dialect#1/32 AsIs: e.FullPath#1/30 AsIs: >/1 } )/42 >/43 Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( vm, context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( vm, context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( vm, context[35] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(vm, context[36], context[37], context[30], context[31]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( vm, context[38] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( vm, context[39], functions[efunc_LoadAST] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(vm, context[40], context[41], context[5], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( vm, context[42] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( vm, context[43] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], functions[efunc_ResolveIncludesm_CheckEqualAST] );
    refalrts::reinit_svar( context[25], context[32] );
    refalrts::reinit_open_bracket( context[27] );
    refalrts::push_stack( vm, context[43] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[27], context[42] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[38] );
    refalrts::link_brackets( context[35], context[26] );
    refalrts::link_brackets( context[33], context[34] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[42], context[43] );
    res = refalrts::splice_evar( res, context[32], context[1] );
    res = refalrts::splice_evar( res, context[38], context[41] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[33], context[33] );
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
  if (! refalrts::copy_evar(vm, context[52], context[53], context[48], context[49]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(vm, context[54], context[55], context[50], context[51]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[56], context[57], "Inc", 3 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[58], context[59], "ude file", 8 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[60], context[61], "s not found", 11 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[62] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[63] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], functions[efunc_ResolveIncludes] );
  refalrts::reinit_open_bracket( context[10] );
  refalrts::reinit_close_bracket( context[13] );
  refalrts::reinit_open_bracket( context[14] );
  refalrts::reinit_open_call( context[17] );
  refalrts::reinit_name( context[28], functions[efunc_ELm_AddErrorAt] );
  refalrts::reinit_char( context[21], 'l' );
  refalrts::reinit_char( context[22], ' ' );
  refalrts::reinit_char( context[25], '\"' );
  refalrts::reinit_char( context[26], '\"' );
  refalrts::reinit_char( context[27], ' ' );
  refalrts::reinit_char( context[1], 'i' );
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

static refalrts::NativeReference nat_ref_ResolveIncludesm_CheckValid("ResolveIncludes-CheckValid", 804678715U, 817106268U, func_ResolveIncludesm_CheckValid);


static refalrts::FnResult func_ResolveIncludesm_CheckEqualAST(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 67 elems
  refalrts::Iter context[67];
  refalrts::zeros( context, 67 );
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
    // </0 & ResolveIncludes-CheckEqualAST/4 t.Config#1/17 (/21 e.BadIncludes#1/19 )/22 e.Groups-B#1/30 (/38 e.Units-B#1/40 (/48 t.ErrorList#1/50 s.Dialect#1/52 (/55 e.Aliases#1/53 )/56 (/59 e.ScannedAST#1/57 )/60 e.NotScannedAST#1/46 )/49 e.Units-E#1/42 )/39 e.Groups-E#1/32 s.Dialect#1/25 (/15 e.IncludeName#1/13 )/16 (/11 e.FullPath#1/9 )/12 (/7 t.NewErrorList#1/23 e.ScannedAST#1/61 e.NotScannedAST#1/63 )/8 >/1
    context[26] = context[2];
    context[27] = context[3];
    context[28] = context[5];
    context[29] = context[6];
    // closed e.BadIncludes#1 as range 19
    // closed e.IncludeName#1 as range 13
    // closed e.FullPath#1 as range 9
    context[30] = 0;
    context[31] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[32] = context[26];
      context[33] = context[27];
      context[34] = context[28];
      context[35] = context[29];
      context[36] = 0;
      context[37] = 0;
      context[38] = refalrts::brackets_left( context[36], context[37], context[32], context[33] );
      if( ! context[38] )
        continue;
      refalrts::bracket_pointers(context[38], context[39]);
      // closed e.Groups-E#1 as range 32
      context[40] = 0;
      context[41] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[42] = context[36];
        context[43] = context[37];
        context[44] = context[34];
        context[45] = context[35];
        context[46] = 0;
        context[47] = 0;
        context[48] = refalrts::brackets_left( context[46], context[47], context[42], context[43] );
        if( ! context[48] )
          continue;
        refalrts::bracket_pointers(context[48], context[49]);
        // closed e.Units-E#1 as range 42
        context[51] = refalrts::tvar_left( context[50], context[46], context[47] );
        if( ! context[51] )
          continue;
        if( ! refalrts::repeated_stvar_left( vm, context[52], context[25], context[46], context[47] ) )
          continue;
        context[53] = 0;
        context[54] = 0;
        context[55] = refalrts::brackets_left( context[53], context[54], context[46], context[47] );
        if( ! context[55] )
          continue;
        refalrts::bracket_pointers(context[55], context[56]);
        context[57] = 0;
        context[58] = 0;
        context[59] = refalrts::brackets_left( context[57], context[58], context[46], context[47] );
        if( ! context[59] )
          continue;
        refalrts::bracket_pointers(context[59], context[60]);
        // closed e.Aliases#1 as range 53
        // closed e.ScannedAST#1 as range 57
        if( ! refalrts::repeated_evar_left( vm, context[61], context[62], context[57], context[58], context[44], context[45] ) )
          continue;
        // closed e.NotScannedAST#1 as range 46
        if( ! refalrts::repeated_evar_left( vm, context[63], context[64], context[46], context[47], context[44], context[45] ) )
          continue;
        if( ! refalrts::empty_seq( context[44], context[45] ) )
          continue;
        //DEBUG: t.Config#1: 17
        //DEBUG: t.NewErrorList#1: 23
        //DEBUG: s.Dialect#1: 25
        //DEBUG: e.BadIncludes#1: 19
        //DEBUG: e.IncludeName#1: 13
        //DEBUG: e.FullPath#1: 9
        //DEBUG: e.Groups-B#1: 30
        //DEBUG: e.Groups-E#1: 32
        //DEBUG: e.Units-B#1: 40
        //DEBUG: e.Units-E#1: 42
        //DEBUG: t.ErrorList#1: 50
        //DEBUG: e.Aliases#1: 53
        //DEBUG: e.ScannedAST#1: 57
        //DEBUG: e.NotScannedAST#1: 46

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Dialect#1/25 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.NewErrorList#1/23 e.ScannedAST#1/61 e.NotScannedAST#1/63 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & ResolveIncludes/4 AsIs: t.Config#1/17 AsIs: (/21 } Tile{ AsIs: e.BadIncludes#1/19 } Tile{ HalfReuse: )/15 } </65 & Map/66 Tile{ HalfReuse: & UnBracket/22 AsIs: e.Groups-B#1/30 AsIs: (/38 AsIs: e.Units-B#1/40 AsIs: (/48 AsIs: t.ErrorList#1/50 AsIs: s.Dialect#1/52 AsIs: (/55 AsIs: e.Aliases#1/53 HalfReuse: (/56 } Tile{ AsIs: e.IncludeName#1/13 } Tile{ AsIs: )/16 AsIs: (/11 AsIs: e.FullPath#1/9 AsIs: )/12 HalfReuse: )/7 } Tile{ AsIs: (/59 AsIs: e.ScannedAST#1/57 AsIs: )/60 AsIs: e.NotScannedAST#1/46 AsIs: )/49 AsIs: e.Units-E#1/42 AsIs: )/39 } Tile{ AsIs: e.Groups-E#1/32 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
        if( ! refalrts::alloc_open_call( vm, context[65] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( vm, context[66], functions[efunc_Map] ) )
          return refalrts::cNoMemory;
        refalrts::update_name( context[4], functions[efunc_ResolveIncludes] );
        refalrts::reinit_close_bracket( context[15] );
        refalrts::reinit_name( context[22], functions[efunc_UnBracket] );
        refalrts::reinit_open_bracket( context[56] );
        refalrts::reinit_close_bracket( context[7] );
        refalrts::reinit_close_call( context[8] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[8] );
        refalrts::push_stack( vm, context[65] );
        refalrts::link_brackets( context[38], context[39] );
        refalrts::link_brackets( context[48], context[49] );
        refalrts::link_brackets( context[59], context[60] );
        refalrts::link_brackets( context[55], context[7] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[56], context[16] );
        refalrts::link_brackets( context[21], context[15] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[32], context[33] );
        res = refalrts::splice_evar( res, context[59], context[39] );
        res = refalrts::splice_evar( res, context[16], context[7] );
        res = refalrts::splice_evar( res, context[13], context[14] );
        res = refalrts::splice_evar( res, context[22], context[56] );
        res = refalrts::splice_evar( res, context[65], context[66] );
        res = refalrts::splice_evar( res, context[15], context[15] );
        res = refalrts::splice_evar( res, context[19], context[20] );
        refalrts::splice_to_freelist_open( vm, context[21], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[40], context[41], context[36], context[37] ) );
    } while ( refalrts::open_evar_advance( context[30], context[31], context[26], context[27] ) );
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
  refalrts::update_name( context[4], functions[efunc_ResolveIncludes] );
  refalrts::reinit_svar( context[33], context[25] );
  refalrts::reinit_close_bracket( context[7] );
  refalrts::reinit_open_bracket( context[37] );
  refalrts::reinit_close_bracket( context[32] );
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

static refalrts::NativeReference nat_ref_ResolveIncludesm_CheckEqualAST("ResolveIncludes-CheckEqualAST", 804678715U, 817106268U, func_ResolveIncludesm_CheckEqualAST);


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
  if( ! refalrts::alloc_name( vm, context[17], functions[efunc_PatchASTSrcPos] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], functions[efunc_ELm_Concat] );
  refalrts::reinit_open_call( context[7] );
  refalrts::reinit_close_call( context[8] );
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

static refalrts::NativeReference nat_ref_gen_GlueErrorListsAndASTs_L1("GlueErrorListsAndASTs\\1", 804678715U, 817106268U, func_gen_GlueErrorListsAndASTs_L1);


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
  //RESULT: Tile{ [[ } </9 & MapReduce/10 Tile{ HalfReuse: & GlueErrorListsAndASTs\1/0 HalfReuse: </4 HalfReuse: & EL-Create/7 AsIs: e.SrcName#1/5 HalfReuse: >/8 AsIs: e.Units#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[10], functions[efunc_MapReduce] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], functions[efunc_gen_GlueErrorListsAndASTs_L1] );
  refalrts::reinit_open_call( context[4] );
  refalrts::reinit_name( context[7], functions[efunc_ELm_Create] );
  refalrts::reinit_close_call( context[8] );
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

static refalrts::NativeReference nat_ref_GlueErrorListsAndASTs("GlueErrorListsAndASTs", 804678715U, 817106268U, func_GlueErrorListsAndASTs);


static refalrts::FnResult func_gen_PatchASTSrcPos_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 AsIs: (/7 } Tile{ HalfReuse: & PatchASTSrcPos-Item/8 AsIs: s.FnPatch#2/9 } )/10 Tile{ AsIs: e.AST#1/5 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_close_bracket( vm, context[10] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], functions[efunc_Map] );
  refalrts::reinit_name( context[8], functions[efunc_PatchASTSrcPosm_Item] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PatchASTSrcPos_A1("PatchASTSrcPos=1", 804678715U, 817106268U, func_gen_PatchASTSrcPos_A1);


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
    // </0 & PatchASTSrcPos=1\1/4 (/7 e.new#3/5 )/8 s.new#4/9 >/1
    if( ! refalrts::svar_term( context[9], context[9] ) )
      continue;
    // closed e.new#3 as range 5
    do {
      // </0 & PatchASTSrcPos=1\1/4 (/7 e.FileName#1/5 )/8 # NoPos/9 >/1
      if( ! refalrts::ident_term( identifiers[ident_NoPos], context[9] ) )
        continue;
      // closed e.FileName#1 as range 5
      //DEBUG: e.FileName#1: 5

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & PatchASTSrcPos=1\1/4 (/7 e.FileName#1/5 )/8 # NoPos/9 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # NoPos/1 ]] }
      refalrts::reinit_ident( context[1], identifiers[ident_NoPos] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & PatchASTSrcPos=1\1/4 (/7 e.FileName#1/5 )/8 s.LnNum#2/9 >/1
    // closed e.FileName#1 as range 5
    //DEBUG: s.LnNum#2: 9
    //DEBUG: e.FileName#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.LnNum#2/9 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # FileLine/4 HalfReuse: s.LnNum2 #9/7 AsIs: e.FileName#1/5 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], identifiers[ident_FileLine] );
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
  refalrts::reinit_open_bracket( context[8] );
  refalrts::reinit_ident( context[9], identifiers[ident_FileRowCol] );
  refalrts::reinit_open_bracket( context[13] );
  refalrts::reinit_close_bracket( context[1] );
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

static refalrts::NativeReference nat_ref_gen_PatchASTSrcPos_A1L1("PatchASTSrcPos=1\\1", 804678715U, 817106268U, func_gen_PatchASTSrcPos_A1L1);


static refalrts::FnResult func_PatchASTSrcPos(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
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
  //RESULT: Tile{ [[ } </9 [*]/10 & PatchASTSrcPos=1/11 (/12 Tile{ AsIs: e.AST#1/2 } )/13 {*}/14 Tile{ HalfReuse: [*]/0 Reuse: & PatchASTSrcPos=1\1/4 AsIs: (/7 AsIs: e.FileName#1/5 AsIs: )/8 } {*}/15 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_closure_head( vm, context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[11], functions[efunc_gen_PatchASTSrcPos_A1] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[14], context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[15], context[0] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], functions[efunc_gen_PatchASTSrcPos_A1L1] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[12] );
  refalrts::use( res );
  refalrts::wrap_closure( context[14] );
  refalrts::wrap_closure( context[15] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PatchASTSrcPos("PatchASTSrcPos", 804678715U, 817106268U, func_PatchASTSrcPos);


static refalrts::FnResult func_PatchASTSrcPosm_Item(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
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
    if( ! refalrts::alloc_open_call( vm, context[20] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(vm, context[21], context[9]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( vm, context[22] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], functions[efunc_PatchASTSrcPosm_Body] );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_close_bracket( context[1] );
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
    // </0 & PatchASTSrcPos-Item/4 s.FnPatch#1/9 (/7 # Ident/10 t.SrcPos#1/11 e.Name#1/5 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_Ident], context[10] ) )
      continue;
    // closed e.Name#1 as range 5
    //DEBUG: t.SrcPos#1: 11
    //DEBUG: s.FnPatch#1: 9
    //DEBUG: e.Name#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Ident/10 } Tile{ HalfReuse: </4 AsIs: s.FnPatch#1/9 } Tile{ AsIs: t.SrcPos#1/11 } Tile{ HalfReuse: >/8 } Tile{ AsIs: e.Name#1/5 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[4], context[9] );
    res = refalrts::splice_evar( res, context[7], context[10] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & PatchASTSrcPos-Item/4 s.FnPatch#1/9 (/7 # NativeBlock/10 t.SrcPos#1/11 e.Name#1/5 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_NativeBlock], context[10] ) )
      continue;
    // closed e.Name#1 as range 5
    //DEBUG: t.SrcPos#1: 11
    //DEBUG: s.FnPatch#1: 9
    //DEBUG: e.Name#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # NativeBlock/10 } Tile{ HalfReuse: </4 AsIs: s.FnPatch#1/9 } Tile{ AsIs: t.SrcPos#1/11 } Tile{ HalfReuse: >/8 } Tile{ AsIs: e.Name#1/5 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[4], context[9] );
    res = refalrts::splice_evar( res, context[7], context[10] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & PatchASTSrcPos-Item/4 s.FnPatch#1/9 (/7 # Include/10 t.SrcPos#1/11 e.IncludeName#1/5 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_Include], context[10] ) )
      continue;
    // closed e.IncludeName#1 as range 5
    //DEBUG: t.SrcPos#1: 11
    //DEBUG: s.FnPatch#1: 9
    //DEBUG: e.IncludeName#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & PatchASTSrcPos-Item/4 s.FnPatch#1/9 (/7 # Include/10 t.SrcPos#1/11 e.IncludeName#1/5 )/8 >/1 {REMOVED TILE}
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
    // </0 & PatchASTSrcPos-Item/4 s.FnPatch#1/9 (/7 s.EnumSwapDeclEntry#1/10 t.SrcPos#1/11 s.ScopeClass#1/13 e.Name#1/5 )/8 >/1
    if( ! refalrts::svar_term( context[13], context[13] ) )
      continue;
    // closed e.Name#1 as range 5
    //DEBUG: t.SrcPos#1: 11
    //DEBUG: s.ScopeClass#1: 13
    //DEBUG: s.FnPatch#1: 9
    //DEBUG: s.EnumSwapDeclEntry#1: 10
    //DEBUG: e.Name#1: 5
    //5: e.Name#1
    //9: s.FnPatch#1
    //10: s.EnumSwapDeclEntry#1
    //11: t.SrcPos#1
    //13: s.ScopeClass#1
    //20: s.EnumSwapDeclEntry#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    if( ! refalrts::alloc_open_call( vm, context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( vm, context[17], functions[efunc_gen_PatchASTSrcPosm_Item_S5C1] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( vm, context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( vm, context[19], functions[efunc_OneOf] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(vm, context[20], context[10]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( vm, context[21], identifiers[ident_Enum] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( vm, context[22], identifiers[ident_Swap] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( vm, context[23], identifiers[ident_Declaration] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( vm, context[24], identifiers[ident_Entry] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( vm, context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( vm, context[16] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[15] );
    res = refalrts::splice_elem( res, context[16] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[18] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_stvar( res, context[20] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[15] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </15 & PatchASTSrcPos-Item$5?1/19 # True/20 >/16
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::call_left( context[17], context[18], context[15], context[16] );
      context[20] = refalrts::ident_left( identifiers[ident_True], context[17], context[18] );
      if( ! context[20] )
        continue;
      if( ! refalrts::empty_seq( context[17], context[18] ) )
        continue;
      //DEBUG: t.SrcPos#1: 11
      //DEBUG: s.ScopeClass#1: 13
      //DEBUG: s.FnPatch#1: 9
      //DEBUG: s.EnumSwapDeclEntry#1: 10
      //DEBUG: e.Name#1: 5

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & PatchASTSrcPos-Item/4 s.FnPatch#1/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # True/20 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.EnumSwapDeclEntry#1/10 } Tile{ AsIs: </15 HalfReuse: s.FnPatch1 #9/19 } Tile{ AsIs: t.SrcPos#1/11 } Tile{ AsIs: >/16 } Tile{ AsIs: s.ScopeClass#1/13 AsIs: e.Name#1/5 AsIs: )/8 } Tile{ ]] }
      refalrts::reinit_svar( context[19], context[9] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::push_stack( vm, context[16] );
      refalrts::push_stack( vm, context[15] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[13], context[8] );
      res = refalrts::splice_evar( res, context[16], context[16] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[15], context[19] );
      res = refalrts::splice_evar( res, context[7], context[10] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[15], context[16]);
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
  if( ! refalrts::alloc_open_call( vm, context[17] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(vm, context[18], context[9]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[19] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], functions[efunc_PatchASTSrcPosm_Expr] );
  refalrts::reinit_close_call( context[8] );
  refalrts::reinit_close_bracket( context[1] );
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

static refalrts::NativeReference nat_ref_PatchASTSrcPosm_Item("PatchASTSrcPos-Item", 804678715U, 817106268U, func_PatchASTSrcPosm_Item);


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
    // </0 & PatchASTSrcPos-Body/4 s.FnPatch#1/5 # Sentences/6 e.Sentences#1/2 >/1
    if( ! refalrts::ident_term( identifiers[ident_Sentences], context[6] ) )
      continue;
    // closed e.Sentences#1 as range 2
    //DEBUG: s.FnPatch#1: 5
    //DEBUG: e.Sentences#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } # Sentences/7 </8 & Map/9 Tile{ HalfReuse: (/0 Reuse: & PatchASTSrcPos-Sentence/4 AsIs: s.FnPatch#1/5 HalfReuse: )/6 AsIs: e.Sentences#1/2 AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( vm, context[7], identifiers[ident_Sentences] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( vm, context[8] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( vm, context[9], functions[efunc_Map] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::update_name( context[4], functions[efunc_PatchASTSrcPosm_Sentence] );
    refalrts::reinit_close_bracket( context[6] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[8] );
    refalrts::link_brackets( context[0], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[7], context[9] );
    refalrts::use( res );
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
  refalrts::reinit_ident( context[0], identifiers[ident_NativeBody] );
  refalrts::reinit_open_call( context[4] );
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

static refalrts::NativeReference nat_ref_PatchASTSrcPosm_Body("PatchASTSrcPos-Body", 804678715U, 817106268U, func_PatchASTSrcPosm_Body);


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
  if (! refalrts::copy_stvar(vm, context[23], context[22]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[29], functions[efunc_PatchASTSrcPosm_Blocks] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(vm, context[30], context[9]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[31] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[32] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_open_call( context[7] );
  refalrts::reinit_name( context[8], functions[efunc_PatchASTSrcPosm_Chain] );
  refalrts::reinit_svar( context[12], context[22] );
  refalrts::reinit_close_call( context[13] );
  refalrts::reinit_open_call( context[21] );
  refalrts::reinit_close_bracket( context[1] );
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

static refalrts::NativeReference nat_ref_gen_PatchASTSrcPosm_Sentence_A1("PatchASTSrcPos-Sentence=1", 804678715U, 817106268U, func_gen_PatchASTSrcPosm_Sentence_A1);


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
  refalrts::update_name( context[4], functions[efunc_PatchASTSrcPosm_Expr] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PatchASTSrcPosm_Sentence_A1L1("PatchASTSrcPos-Sentence=1\\1", 804678715U, 817106268U, func_gen_PatchASTSrcPosm_Sentence_A1L1);


static refalrts::FnResult func_PatchASTSrcPosm_Sentence(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
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
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } Tile{ HalfReuse: & PatchASTSrcPos-Sentence=1/7 AsIs: (/11 AsIs: e.Pattern#1/9 AsIs: )/12 } Tile{ AsIs: s.FnPatch#1/21 } (/22 Tile{ AsIs: e.ConditionsAndAssigns#1/5 } )/23 Tile{ AsIs: (/19 AsIs: e.Result#1/17 AsIs: )/20 AsIs: (/15 AsIs: e.Blocks#1/13 AsIs: )/16 HalfReuse: {*}/8 HalfReuse: [*]/1 } & PatchASTSrcPos-Sentence=1\1/24 s.FnPatch#1/21/25 {*}/26 >/27 Tile{ ]] }
  if( ! refalrts::alloc_open_bracket( vm, context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[24], functions[efunc_gen_PatchASTSrcPosm_Sentence_A1L1] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(vm, context[25], context[21]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[26], context[1] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[27] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[4] );
  refalrts::reinit_name( context[7], functions[efunc_gen_PatchASTSrcPosm_Sentence_A1] );
  refalrts::reinit_unwrapped_closure( context[8], context[4] );
  refalrts::reinit_closure_head( context[1] );
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[22], context[23] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[24], context[27] );
  res = refalrts::splice_evar( res, context[19], context[1] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::use( res );
  refalrts::wrap_closure( context[8] );
  refalrts::wrap_closure( context[26] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PatchASTSrcPosm_Sentence("PatchASTSrcPos-Sentence", 804678715U, 817106268U, func_PatchASTSrcPosm_Sentence);


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
  if( ! refalrts::alloc_open_call( vm, context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[28] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], functions[efunc_PatchASTSrcPosm_Blocks] );
  refalrts::reinit_open_call( context[16] );
  refalrts::reinit_svar( context[11], context[21] );
  refalrts::reinit_close_call( context[12] );
  refalrts::reinit_close_bracket( context[1] );
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

static refalrts::NativeReference nat_ref_gen_PatchASTSrcPosm_Chain_L1("PatchASTSrcPos-Chain\\1", 804678715U, 817106268U, func_gen_PatchASTSrcPosm_Chain_L1);


static refalrts::FnResult func_PatchASTSrcPosm_Chain(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 } [*]/7 & PatchASTSrcPos-Chain\1/8 Tile{ AsIs: s.FnPatchExpr#1/6 } Tile{ AsIs: s.FnPatch#1/5 } {*}/9 Tile{ AsIs: e.ConditionsAndAssigns#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_closure_head( vm, context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[8], functions[efunc_gen_PatchASTSrcPosm_Chain_L1] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[9], context[7] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], functions[efunc_Map] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[6], context[6] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::wrap_closure( context[9] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PatchASTSrcPosm_Chain("PatchASTSrcPos-Chain", 804678715U, 817106268U, func_PatchASTSrcPosm_Chain);


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
  if( ! refalrts::alloc_name( vm, context[10], functions[efunc_PatchASTSrcPosm_Body] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_open_call( context[4] );
  refalrts::reinit_svar( context[7], context[9] );
  refalrts::reinit_close_call( context[8] );
  refalrts::reinit_close_bracket( context[1] );
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

static refalrts::NativeReference nat_ref_gen_PatchASTSrcPosm_Blocks_L1("PatchASTSrcPos-Blocks\\1", 804678715U, 817106268U, func_gen_PatchASTSrcPosm_Blocks_L1);


static refalrts::FnResult func_PatchASTSrcPosm_Blocks(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 } [*]/6 & PatchASTSrcPos-Blocks\1/7 Tile{ AsIs: s.FnPatch#1/5 } {*}/8 Tile{ AsIs: e.Blocks#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_closure_head( vm, context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[7], functions[efunc_gen_PatchASTSrcPosm_Blocks_L1] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[8], context[6] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], functions[efunc_Map] );
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

static refalrts::NativeReference nat_ref_PatchASTSrcPosm_Blocks("PatchASTSrcPos-Blocks", 804678715U, 817106268U, func_PatchASTSrcPosm_Blocks);


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
        // </0 & PatchASTSrcPos-Expr\1/4 s.new#11/5 (/6 s.new#12/10 t.new#13/13 s.new#14/15 e.new#15/11 )/7 >/1
        if( ! refalrts::svar_term( context[15], context[15] ) )
          continue;
        // closed e.new#15 as range 11
        do {
          // </0 & PatchASTSrcPos-Expr\1/4 s.FnPatch#1/5 (/6 # TkVariable/10 t.SrcPos#2/13 s.Mode#2/15 e.Index#2/11 )/7 >/1
          if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[10] ) )
            continue;
          // closed e.Index#2 as range 11
          //DEBUG: t.SrcPos#2: 13
          //DEBUG: s.FnPatch#1: 5
          //DEBUG: s.Mode#2: 15
          //DEBUG: e.Index#2: 11

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/6 AsIs: # TkVariable/10 } Tile{ HalfReuse: </4 AsIs: s.FnPatch#1/5 } Tile{ AsIs: t.SrcPos#2/13 } Tile{ AsIs: >/1 } Tile{ AsIs: s.Mode#2/15 AsIs: e.Index#2/11 AsIs: )/7 } Tile{ ]] }
          refalrts::reinit_open_call( context[4] );
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

        // </0 & PatchASTSrcPos-Expr\1/4 s.FnPatch#1/5 (/6 # TkNewVariable/10 t.SrcPos#2/13 s.Mode#2/15 e.Index#2/11 )/7 >/1
        if( ! refalrts::ident_term( identifiers[ident_TkNewVariable], context[10] ) )
          continue;
        // closed e.Index#2 as range 11
        //DEBUG: t.SrcPos#2: 13
        //DEBUG: s.FnPatch#1: 5
        //DEBUG: s.Mode#2: 15
        //DEBUG: e.Index#2: 11

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/6 AsIs: # TkNewVariable/10 } Tile{ HalfReuse: </4 AsIs: s.FnPatch#1/5 } Tile{ AsIs: t.SrcPos#2/13 } Tile{ AsIs: >/1 } Tile{ AsIs: s.Mode#2/15 AsIs: e.Index#2/11 AsIs: )/7 } Tile{ ]] }
        refalrts::reinit_open_call( context[4] );
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

      // </0 & PatchASTSrcPos-Expr\1/4 s.FnPatch#1/5 (/6 # Symbol/10 # Name/13 t.SrcPos#2/15 e.Name#2/11 )/7 >/1
      if( ! refalrts::ident_term( identifiers[ident_Name], context[13] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_Symbol], context[10] ) )
        continue;
      // closed e.Name#2 as range 11
      //DEBUG: t.SrcPos#2: 15
      //DEBUG: s.FnPatch#1: 5
      //DEBUG: e.Name#2: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/6 AsIs: # Symbol/10 AsIs: # Name/13 } Tile{ HalfReuse: </4 AsIs: s.FnPatch#1/5 } Tile{ AsIs: t.SrcPos#2/15 } Tile{ HalfReuse: >/7 } Tile{ AsIs: e.Name#2/11 } Tile{ HalfReuse: )/1 ]] }
      refalrts::reinit_open_call( context[4] );
      refalrts::reinit_close_call( context[7] );
      refalrts::reinit_close_bracket( context[1] );
      refalrts::link_brackets( context[6], context[1] );
      refalrts::push_stack( vm, context[7] );
      refalrts::push_stack( vm, context[4] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[4], context[5] );
      res = refalrts::splice_evar( res, context[6], context[13] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & PatchASTSrcPos-Expr\1/4 s.FnPatch#1/5 (/6 # Brackets/10 e.InBrackets#2/8 )/7 >/1
      if( ! refalrts::ident_term( identifiers[ident_Brackets], context[10] ) )
        continue;
      // closed e.InBrackets#2 as range 8
      //DEBUG: s.FnPatch#1: 5
      //DEBUG: e.InBrackets#2: 8

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.FnPatch#1/5 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Brackets/4 } </11 Tile{ HalfReuse: & PatchASTSrcPos-Expr/6 HalfReuse: s.FnPatch1 #5/10 AsIs: e.InBrackets#2/8 HalfReuse: >/7 HalfReuse: )/1 ]] }
      if( ! refalrts::alloc_open_call( vm, context[11] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[0] );
      refalrts::reinit_ident( context[4], identifiers[ident_Brackets] );
      refalrts::reinit_name( context[6], functions[efunc_PatchASTSrcPosm_Expr] );
      refalrts::reinit_svar( context[10], context[5] );
      refalrts::reinit_close_call( context[7] );
      refalrts::reinit_close_bracket( context[1] );
      refalrts::link_brackets( context[0], context[1] );
      refalrts::push_stack( vm, context[7] );
      refalrts::push_stack( vm, context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[6];
      res = refalrts::splice_evar( res, context[11], context[11] );
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
      if( ! refalrts::alloc_open_call( vm, context[19] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(vm, context[20], context[5]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( vm, context[21] ) )
        return refalrts::cNoMemory;
      refalrts::update_name( context[4], functions[efunc_PatchASTSrcPosm_Expr] );
      refalrts::reinit_close_call( context[7] );
      refalrts::reinit_close_bracket( context[1] );
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
      // </0 & PatchASTSrcPos-Expr\1/4 s.FnPatch#1/5 (/6 # CallBrackets/10 e.InBrackets#2/8 )/7 >/1
      if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[10] ) )
        continue;
      // closed e.InBrackets#2 as range 8
      //DEBUG: s.FnPatch#1: 5
      //DEBUG: e.InBrackets#2: 8

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.FnPatch#1/5 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CallBrackets/4 } </11 Tile{ HalfReuse: & PatchASTSrcPos-Expr/6 HalfReuse: s.FnPatch1 #5/10 AsIs: e.InBrackets#2/8 HalfReuse: >/7 HalfReuse: )/1 ]] }
      if( ! refalrts::alloc_open_call( vm, context[11] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[0] );
      refalrts::reinit_ident( context[4], identifiers[ident_CallBrackets] );
      refalrts::reinit_name( context[6], functions[efunc_PatchASTSrcPosm_Expr] );
      refalrts::reinit_svar( context[10], context[5] );
      refalrts::reinit_close_call( context[7] );
      refalrts::reinit_close_bracket( context[1] );
      refalrts::link_brackets( context[0], context[1] );
      refalrts::push_stack( vm, context[7] );
      refalrts::push_stack( vm, context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[6];
      res = refalrts::splice_evar( res, context[11], context[11] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & PatchASTSrcPos-Expr\1/4 s.FnPatch#1/5 (/6 # Closure/10 e.Sentences#2/8 )/7 >/1
    if( ! refalrts::ident_term( identifiers[ident_Closure], context[10] ) )
      continue;
    // closed e.Sentences#2 as range 8
    //DEBUG: s.FnPatch#1: 5
    //DEBUG: e.Sentences#2: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.FnPatch#1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Closure/4 } </11 Tile{ HalfReuse: & PatchASTSrcPos-Body/6 HalfReuse: s.FnPatch1 #5/10 AsIs: e.Sentences#2/8 HalfReuse: >/7 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_call( vm, context[11] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], identifiers[ident_Closure] );
    refalrts::reinit_name( context[6], functions[efunc_PatchASTSrcPosm_Body] );
    refalrts::reinit_svar( context[10], context[5] );
    refalrts::reinit_close_call( context[7] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    res = refalrts::splice_evar( res, context[11], context[11] );
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

static refalrts::NativeReference nat_ref_gen_PatchASTSrcPosm_Expr_L1("PatchASTSrcPos-Expr\\1", 804678715U, 817106268U, func_gen_PatchASTSrcPosm_Expr_L1);


static refalrts::FnResult func_PatchASTSrcPosm_Expr(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 } [*]/6 & PatchASTSrcPos-Expr\1/7 Tile{ AsIs: s.FnPatch#1/5 } {*}/8 Tile{ AsIs: e.Expression#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_closure_head( vm, context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[7], functions[efunc_gen_PatchASTSrcPosm_Expr_L1] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[8], context[6] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], functions[efunc_Map] );
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

static refalrts::NativeReference nat_ref_PatchASTSrcPosm_Expr("PatchASTSrcPos-Expr", 804678715U, 817106268U, func_PatchASTSrcPosm_Expr);


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
    // </0 & BackEnd:1/4 (/7 e.OutputName#1/5 )/8 (/11 e.SrcName#1/9 )/12 t.RASLModule#13/13 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.OutputName#1 as range 5
    // closed e.SrcName#1 as range 9
    //DEBUG: t.RASLModule#13: 13
    //DEBUG: e.OutputName#1: 5
    //DEBUG: e.SrcName#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.SrcName#1/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & BackEnd-RASLModule/4 } Tile{ AsIs: t.RASLModule#13/13 } Tile{ AsIs: e.OutputName#1/5 } Tile{ HalfReuse: '.'/12 } Tile{ HalfReuse: 'r'/8 HalfReuse: 'a'/11 } Tile{ HalfReuse: 's'/7 } 'l'/15 >/16 Tile{ HalfReuse: # NoNative/1 ]] }
    if( ! refalrts::alloc_char( vm, context[15], 'l' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( vm, context[16] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], functions[efunc_BackEndm_RASLModule] );
    refalrts::reinit_char( context[12], '.' );
    refalrts::reinit_char( context[8], 'r' );
    refalrts::reinit_char( context[11], 'a' );
    refalrts::reinit_char( context[7], 's' );
    refalrts::reinit_ident( context[1], identifiers[ident_NoNative] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[8], context[11] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & BackEnd:1/4 (/7 e.OutputName#1/5 )/8 (/11 e.SrcName#1/9 )/12 t.RASLModule#13/15 t.NativeModule#13/13 >/1
  // closed e.OutputName#1 as range 5
  // closed e.SrcName#1 as range 9
  context[16] = refalrts::tvar_left( context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.NativeModule#13: 13
  //DEBUG: e.OutputName#1: 5
  //DEBUG: e.SrcName#1: 9
  //DEBUG: t.RASLModule#13: 15

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & BackEnd-RASLModule/4 } Tile{ AsIs: t.RASLModule#13/15 } Tile{ AsIs: e.OutputName#1/5 } Tile{ HalfReuse: '.'/7 } 'r'/17 Tile{ HalfReuse: 'a'/8 }"sl"/18 >/20 </21 & BackEnd-NativeModule/22 Tile{ AsIs: t.NativeModule#13/13 } Tile{ AsIs: (/11 AsIs: e.SrcName#1/9 AsIs: )/12 } e.OutputName#1/5/23".cpp"/25 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_char( vm, context[17], 'r' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[18], context[19], "sl", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[22], functions[efunc_BackEndm_NativeModule] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(vm, context[23], context[24], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[25], context[26], ".cpp", 4 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], functions[efunc_BackEndm_RASLModule] );
  refalrts::reinit_char( context[7], '.' );
  refalrts::reinit_char( context[8], 'a' );
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

static refalrts::NativeReference nat_ref_gen_BackEnd_B1("BackEnd:1", 804678715U, 817106268U, func_gen_BackEnd_B1);


static refalrts::FnResult func_gen_BackEnd_A11(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </15 Tile{ HalfReuse: [*]/0 Reuse: & BackEnd:1/4 AsIs: (/7 AsIs: e.OutputName#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.SrcName#1/9 AsIs: )/12 } {*}/16 </17 & LowLevelRASL/18 Tile{ AsIs: s.GenMode#6/13 AsIs: s.DebugInfo#2/14 } (/19 e.SrcName#1/9/20 )/22 Tile{ AsIs: e.HighLevelRASL#12/2 } >/23 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[16], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[18], functions[efunc_LowLevelRASL] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[19] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(vm, context[20], context[21], context[9], context[10]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[23] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], functions[efunc_gen_BackEnd_B1] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[17] );
  refalrts::link_brackets( context[19], context[22] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[19], context[22] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[16], context[18] );
  res = refalrts::splice_evar( res, context[0], context[12] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  refalrts::use( res );
  refalrts::wrap_closure( context[16] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_BackEnd_A11("BackEnd=11", 804678715U, 817106268U, func_gen_BackEnd_A11);


static refalrts::FnResult func_gen_BackEnd_A10(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & BackEnd=10/4 (/7 e.OutputName#1/5 )/8 (/11 e.SrcName#1/9 )/12 s.GenMode#6/13 s.DebugInfo#2/14 e.HighLevelRASL#11/2 >/1
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
  // closed e.HighLevelRASL#11 as range 2
  //DEBUG: e.OutputName#1: 5
  //DEBUG: e.SrcName#1: 9
  //DEBUG: s.GenMode#6: 13
  //DEBUG: s.DebugInfo#2: 14
  //DEBUG: e.HighLevelRASL#11: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </15 Tile{ HalfReuse: [*]/0 Reuse: & BackEnd=11/4 AsIs: (/7 AsIs: e.OutputName#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.SrcName#1/9 AsIs: )/12 AsIs: s.GenMode#6/13 AsIs: s.DebugInfo#2/14 } {*}/16 </17 & Log-HighLevelRASL/18 (/19 e.SrcName#1/9/20 )/22 Tile{ AsIs: e.HighLevelRASL#11/2 } >/23 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[16], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[18], functions[efunc_Logm_HighLevelRASL] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[19] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(vm, context[20], context[21], context[9], context[10]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[23] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], functions[efunc_gen_BackEnd_A11] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[17] );
  refalrts::link_brackets( context[19], context[22] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[16], context[22] );
  res = refalrts::splice_evar( res, context[0], context[14] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  refalrts::use( res );
  refalrts::wrap_closure( context[16] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_BackEnd_A10("BackEnd=10", 804678715U, 817106268U, func_gen_BackEnd_A10);


static refalrts::FnResult func_gen_BackEnd_A9(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </17 Tile{ HalfReuse: [*]/0 Reuse: & BackEnd=10/4 AsIs: (/7 AsIs: e.OutputName#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.SrcName#1/9 AsIs: )/12 AsIs: s.GenMode#6/13 AsIs: s.DebugInfo#2/14 } {*}/18 </19 & HighLevelRASL/20 Tile{ AsIs: s.OptPattern#3/15 AsIs: s.OptResult#4/16 AsIs: e.AST#10/2 AsIs: >/1 } >/21 Tile{ ]] }
  if( ! refalrts::alloc_open_call( vm, context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[18], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[20], functions[efunc_HighLevelRASL] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[21] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], functions[efunc_gen_BackEnd_A10] );
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[19] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[15], context[1] );
  res = refalrts::splice_evar( res, context[18], context[20] );
  res = refalrts::splice_evar( res, context[0], context[14] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  refalrts::use( res );
  refalrts::wrap_closure( context[18] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_BackEnd_A9("BackEnd=9", 804678715U, 817106268U, func_gen_BackEnd_A9);


static refalrts::FnResult func_gen_BackEnd_A8(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & BackEnd=8/4 (/7 e.OutputName#1/5 )/8 (/11 e.SrcName#1/9 )/12 s.GenMode#6/13 s.DebugInfo#2/14 s.OptPattern#3/15 s.OptResult#4/16 e.AST#9/2 >/1
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
  // closed e.AST#9 as range 2
  //DEBUG: e.OutputName#1: 5
  //DEBUG: e.SrcName#1: 9
  //DEBUG: s.GenMode#6: 13
  //DEBUG: s.DebugInfo#2: 14
  //DEBUG: s.OptPattern#3: 15
  //DEBUG: s.OptResult#4: 16
  //DEBUG: e.AST#9: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </17 Tile{ HalfReuse: [*]/0 Reuse: & BackEnd=9/4 AsIs: (/7 AsIs: e.OutputName#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.SrcName#1/9 AsIs: )/12 AsIs: s.GenMode#6/13 AsIs: s.DebugInfo#2/14 AsIs: s.OptPattern#3/15 AsIs: s.OptResult#4/16 } {*}/18 </19 & Log-AST/20 (/21 e.SrcName#1/9/22" (after tree optimization)"/24 )/26 Tile{ AsIs: e.AST#9/2 } >/27 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[18], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[20], functions[efunc_Logm_AST] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[21] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(vm, context[22], context[23], context[9], context[10]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[24], context[25], " (after tree optimization)", 26 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[27] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], functions[efunc_gen_BackEnd_A9] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[17] );
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
  res = refalrts::splice_evar( res, context[18], context[26] );
  res = refalrts::splice_evar( res, context[0], context[16] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  refalrts::use( res );
  refalrts::wrap_closure( context[18] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_BackEnd_A8("BackEnd=8", 804678715U, 817106268U, func_gen_BackEnd_A8);


static refalrts::FnResult func_gen_BackEnd_A8B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & BackEnd=8:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & BackEnd=8:1/4 t.new#1/5 (/9 e.new#2/7 )/10 s.new#3/11 >/1
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
    // </0 & BackEnd=8:1/4 t.Config#1/5 (/9 e.AST#8/7 )/10 # OptTree/11 >/1
    if( ! refalrts::ident_term( identifiers[ident_OptTree], context[11] ) )
      continue;
    // closed e.AST#8 as range 7
    //DEBUG: t.Config#1: 5
    //DEBUG: e.AST#8: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/9 {REMOVED TILE} )/10 # OptTree/11 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & OptTree/4 AsIs: t.Config#1/5 } Tile{ AsIs: e.AST#8/7 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], functions[efunc_OptTree] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( vm, context[6], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & BackEnd=8:1/4 t.Config#1/5 (/9 e.AST#8/7 )/10 # NoOpt/11 >/1
  if( ! refalrts::ident_term( identifiers[ident_NoOpt], context[11] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#8 as range 7
  //DEBUG: t.Config#1: 5
  //DEBUG: e.AST#8: 7

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} t.Config#1/5 (/9 {REMOVED TILE} )/10 # NoOpt/11 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & OptTree-CleanupMarkup/4 } Tile{ AsIs: e.AST#8/7 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], functions[efunc_OptTreem_CleanupMarkup] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_BackEnd_A8B1("BackEnd=8:1", 804678715U, 817106268U, func_gen_BackEnd_A8B1);


static refalrts::FnResult func_gen_BackEnd_A7(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </19 Tile{ HalfReuse: [*]/0 Reuse: & BackEnd=8/4 AsIs: (/7 AsIs: e.OutputName#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.SrcName#1/9 AsIs: )/12 AsIs: s.GenMode#6/13 AsIs: s.DebugInfo#2/14 AsIs: s.OptPattern#3/15 AsIs: s.OptResult#4/16 } {*}/20 </21 [*]/22 & BackEnd=8:1/23 Tile{ AsIs: t.Config#1/17 } (/24 Tile{ AsIs: e.AST#8/2 } )/25 {*}/26 </27 & Config-GetOptTree/28 t.Config#1/17/29 >/31 >/32 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[20], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_closure_head( vm, context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[23], functions[efunc_gen_BackEnd_A8B1] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[26], context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[28], functions[efunc_Configm_GetOptTree] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(vm, context[29], context[30], context[17], context[18]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[31] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[32] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], functions[efunc_gen_BackEnd_A8] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[32] );
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[31] );
  refalrts::push_stack( vm, context[27] );
  refalrts::link_brackets( context[24], context[25] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[25], context[32] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[20], context[23] );
  res = refalrts::splice_evar( res, context[0], context[16] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  refalrts::use( res );
  refalrts::wrap_closure( context[20] );
  refalrts::wrap_closure( context[26] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_BackEnd_A7("BackEnd=7", 804678715U, 817106268U, func_gen_BackEnd_A7);


static refalrts::FnResult func_gen_BackEnd_A6(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & BackEnd=6/4 (/7 e.OutputName#1/5 )/8 (/11 e.SrcName#1/9 )/12 s.GenMode#6/13 s.DebugInfo#2/14 s.OptPattern#3/15 s.OptResult#4/16 t.Config#1/17 e.AST#7/2 >/1
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
  // closed e.AST#7 as range 2
  //DEBUG: e.OutputName#1: 5
  //DEBUG: e.SrcName#1: 9
  //DEBUG: s.GenMode#6: 13
  //DEBUG: s.DebugInfo#2: 14
  //DEBUG: s.OptPattern#3: 15
  //DEBUG: s.OptResult#4: 16
  //DEBUG: t.Config#1: 17
  //DEBUG: e.AST#7: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </19 Tile{ HalfReuse: [*]/0 Reuse: & BackEnd=7/4 AsIs: (/7 AsIs: e.OutputName#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.SrcName#1/9 AsIs: )/12 AsIs: s.GenMode#6/13 AsIs: s.DebugInfo#2/14 AsIs: s.OptPattern#3/15 AsIs: s.OptResult#4/16 AsIs: t.Config#1/17 } {*}/20 </21 & Log-AST/22 (/23 e.SrcName#1/9/24" (after desugar)"/26 )/28 Tile{ AsIs: e.AST#7/2 } >/29 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[20], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[22], functions[efunc_Logm_AST] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[23] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(vm, context[24], context[25], context[9], context[10]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[26], context[27], " (after desugar)", 16 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[29] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], functions[efunc_gen_BackEnd_A7] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[29] );
  refalrts::push_stack( vm, context[21] );
  refalrts::link_brackets( context[23], context[28] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[29], context[29] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[20], context[28] );
  res = refalrts::splice_evar( res, context[0], context[18] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  refalrts::use( res );
  refalrts::wrap_closure( context[20] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_BackEnd_A6("BackEnd=6", 804678715U, 817106268U, func_gen_BackEnd_A6);


static refalrts::FnResult func_gen_BackEnd_A5(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </23 } Tile{ HalfReuse: [*]/0 Reuse: & BackEnd=6/4 AsIs: (/7 AsIs: e.OutputName#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.SrcName#1/9 AsIs: )/12 } Tile{ AsIs: s.GenMode#6/24 } Tile{ AsIs: s.DebugInfo#2/13 AsIs: s.OptPattern#3/14 AsIs: s.OptResult#4/15 AsIs: t.Config#1/16 } Tile{ HalfReuse: {*}/22 } </25 & Desugar/26 Tile{ AsIs: s.MarkupContext#2/18 AsIs: s.ConditionsMode#5/19 } Tile{ AsIs: e.AST#1/20 } >/27 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[26], functions[efunc_Desugar] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[27] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_call( context[23] );
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], functions[efunc_gen_BackEnd_A6] );
  refalrts::reinit_unwrapped_closure( context[22], context[0] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[25] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[27], context[27] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[13], context[17] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  res = refalrts::splice_evar( res, context[0], context[12] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  refalrts::use( res );
  refalrts::wrap_closure( context[22] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_BackEnd_A5("BackEnd=5", 804678715U, 817106268U, func_gen_BackEnd_A5);


static refalrts::FnResult func_gen_BackEnd_A4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.ConditionsMode#5/23 {REMOVED TILE}
  //RESULT: Tile{ [[ } </24 Tile{ HalfReuse: [*]/0 Reuse: & BackEnd=5/4 AsIs: (/7 AsIs: e.OutputName#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.SrcName#1/9 AsIs: )/12 AsIs: s.DebugInfo#2/13 AsIs: s.OptPattern#3/14 AsIs: s.OptResult#4/15 AsIs: t.Config#1/16 AsIs: s.MarkupContext#2/18 HalfReuse: s.ConditionsMode5 #23/21 } (/25 Tile{ AsIs: e.AST#1/19 } Tile{ AsIs: )/22 } {*}/26 </27 & Config-GetGenMode/28 t.Config#1/16/29 >/31 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[26], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[28], functions[efunc_Configm_GetGenMode] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(vm, context[29], context[30], context[16], context[17]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[31] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], functions[efunc_gen_BackEnd_A5] );
  refalrts::reinit_svar( context[21], context[23] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[24] );
  refalrts::push_stack( vm, context[31] );
  refalrts::push_stack( vm, context[27] );
  refalrts::link_brackets( context[25], context[22] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[26], context[31] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[0], context[21] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  refalrts::wrap_closure( context[26] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_BackEnd_A4("BackEnd=4", 804678715U, 817106268U, func_gen_BackEnd_A4);


static refalrts::FnResult func_gen_BackEnd_A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </23 Tile{ HalfReuse: [*]/0 Reuse: & BackEnd=4/4 AsIs: (/7 AsIs: e.OutputName#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.SrcName#1/9 AsIs: )/12 AsIs: s.DebugInfo#2/13 AsIs: s.OptPattern#3/14 } Tile{ AsIs: s.OptResult#4/22 } Tile{ AsIs: t.Config#1/15 AsIs: s.MarkupContext#2/17 AsIs: (/20 AsIs: e.AST#1/18 AsIs: )/21 } {*}/24 </25 & Config-GetConditionsMode/26 t.Config#1/15/27 >/29 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[24], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[26], functions[efunc_Configm_GetConditionsMode] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(vm, context[27], context[28], context[15], context[16]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[29] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], functions[efunc_gen_BackEnd_A4] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[29] );
  refalrts::push_stack( vm, context[25] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[24], context[29] );
  res = refalrts::splice_evar( res, context[15], context[21] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[0], context[14] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  refalrts::use( res );
  refalrts::wrap_closure( context[24] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_BackEnd_A3("BackEnd=3", 804678715U, 817106268U, func_gen_BackEnd_A3);


static refalrts::FnResult func_gen_BackEnd_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </22 Tile{ HalfReuse: [*]/0 Reuse: & BackEnd=3/4 AsIs: (/7 AsIs: e.OutputName#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.SrcName#1/9 AsIs: )/12 AsIs: s.DebugInfo#2/13 } Tile{ AsIs: s.OptPattern#3/21 } Tile{ AsIs: t.Config#1/14 AsIs: s.MarkupContext#2/16 AsIs: (/19 AsIs: e.AST#1/17 AsIs: )/20 } {*}/23 </24 & Config-GetOptResult/25 t.Config#1/14/26 >/28 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[23], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[25], functions[efunc_Configm_GetOptResult] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(vm, context[26], context[27], context[14], context[15]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[28] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], functions[efunc_gen_BackEnd_A3] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[22] );
  refalrts::push_stack( vm, context[28] );
  refalrts::push_stack( vm, context[24] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[23], context[28] );
  res = refalrts::splice_evar( res, context[14], context[20] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[0], context[13] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  refalrts::use( res );
  refalrts::wrap_closure( context[23] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_BackEnd_A2("BackEnd=2", 804678715U, 817106268U, func_gen_BackEnd_A2);


static refalrts::FnResult func_gen_BackEnd_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </21 Tile{ HalfReuse: [*]/0 Reuse: & BackEnd=2/4 AsIs: (/7 AsIs: e.OutputName#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.SrcName#1/9 AsIs: )/12 } Tile{ AsIs: s.DebugInfo#2/20 } Tile{ AsIs: t.Config#1/13 } Tile{ AsIs: s.MarkupContext#2/19 } Tile{ AsIs: (/17 AsIs: e.AST#1/15 AsIs: )/18 } {*}/22 </23 & Config-GetOptPattern/24 t.Config#1/13/25 >/27 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[22], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[24], functions[efunc_Configm_GetOptPattern] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(vm, context[25], context[26], context[13], context[14]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[27] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], functions[efunc_gen_BackEnd_A2] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[23] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[22], context[27] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[0], context[12] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  refalrts::use( res );
  refalrts::wrap_closure( context[22] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_BackEnd_A1("BackEnd=1", 804678715U, 817106268U, func_gen_BackEnd_A1);


static refalrts::FnResult func_BackEnd(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
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
  //RESULT: Tile{ [[ } </15 [*]/16 Tile{ HalfReuse: & BackEnd=1/10 AsIs: (/13 AsIs: e.OutputName#1/11 AsIs: )/14 } (/17 Tile{ AsIs: e.SrcName#1/7 } )/18 t.Config#1/5/19 (/21 Tile{ AsIs: e.AST#1/2 } )/22 {*}/23 Tile{ AsIs: </0 Reuse: & Config-GetDebugMode/4 AsIs: t.Config#1/5 HalfReuse: >/9 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_closure_head( vm, context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[18] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(vm, context[19], context[20], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[23], context[16] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[10], functions[efunc_gen_BackEnd_A1] );
  refalrts::update_name( context[4], functions[efunc_Configm_GetDebugMode] );
  refalrts::reinit_close_call( context[9] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[21], context[22] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[18], context[21] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[10], context[14] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::use( res );
  refalrts::wrap_closure( context[23] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_BackEnd("BackEnd", 804678715U, 817106268U, func_BackEnd);


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
  if( ! refalrts::alloc_ident( vm, context[9], identifiers[ident_Success] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(vm, context[10], context[11], context[5], context[6]))
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], functions[efunc_SaveBytes] );
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

static refalrts::NativeReference nat_ref_gen_BackEndm_RASLModule_B1("BackEnd-RASLModule:1", 804678715U, 817106268U, func_gen_BackEndm_RASLModule_B1);


static refalrts::FnResult func_BackEndm_RASLModule(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
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
  //RESULT: Tile{ [[ } </7 [*]/8 & BackEnd-RASLModule:1/9 (/10 Tile{ AsIs: e.OutputName#1/2 } )/11 {*}/12 Tile{ AsIs: </0 Reuse: & GenProgram-RASL/4 AsIs: t.RASLModule#1/5 } >/13 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_closure_head( vm, context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[9], functions[efunc_gen_BackEndm_RASLModule_B1] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[12], context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[13] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], functions[efunc_GenProgramm_RASL] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[10] );
  refalrts::use( res );
  refalrts::wrap_closure( context[12] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_BackEndm_RASLModule("BackEnd-RASLModule", 804678715U, 817106268U, func_BackEndm_RASLModule);


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
  if( ! refalrts::alloc_open_bracket( vm, context[11] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(vm, context[12], context[13], context[2], context[3]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[16], functions[efunc_GenProgramm_Native] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[21] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(vm, context[22], context[23], context[2], context[3]))
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], functions[efunc_SaveFile] );
  refalrts::reinit_close_bracket( context[1] );
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

static refalrts::NativeReference nat_ref_BackEndm_NativeModule("BackEnd-NativeModule", 804678715U, 817106268U, func_BackEndm_NativeModule);


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
    refalrts::reinit_ident( context[1], identifiers[ident_Success] );
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
  refalrts::reinit_ident( context[1], identifiers[ident_Fails] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GrammarCheck_B1("GrammarCheck:1", 804678715U, 817106268U, func_gen_GrammarCheck_B1);


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
  if( ! refalrts::alloc_open_call( vm, context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[8], functions[efunc_ELm_Destroy] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[9] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], functions[efunc_gen_GrammarCheck_B1] );
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

static refalrts::NativeReference nat_ref_gen_GrammarCheck_A1("GrammarCheck=1", 804678715U, 817106268U, func_gen_GrammarCheck_A1);


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
  if( ! refalrts::alloc_open_call( vm, context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[9], functions[efunc_gen_GrammarCheck_A1] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[10] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], functions[efunc_LoadAST] );
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


//End of file
