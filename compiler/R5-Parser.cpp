// This file automatically generated from 'R5-Parser.ref'
// Don't edit! Edit 'R5-Parser.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_49629914_2709224338

enum efunc {
  efunc_gen_Mu_C1 = 0,
  efunc_u_u_Stepm_Start = 1,
  efunc_u_u_Mum_Aux = 2,
  efunc_u_u_Stepm_End = 3,
  efunc_u_u_FindMuPtr = 4,
  efunc_Add = 5,
  efunc_Div = 6,
  efunc_Mod = 7,
  efunc_Mul = 8,
  efunc_Residue = 9,
  efunc_Sub = 10,
  efunc_gen_u_u_Mum_Aux_S13B1 = 11,
  efunc_Type = 12,
  efunc_gen_Residue_C1 = 13,
  efunc_Program = 14,
  efunc_DoProgram = 15,
  efunc_gen_DoProgram_S1C1 = 16,
  efunc_gen_DoProgram_S1C2 = 17,
  efunc_OneOf = 18,
  efunc_UnitStartToken = 19,
  efunc_gen_DoProgram_S1A3 = 20,
  efunc_Unit = 21,
  efunc_UnexpectedToken = 22,
  efunc_NameListTags = 23,
  efunc_TokName = 24,
  efunc_ClassicError = 25,
  efunc_NameList = 26,
  efunc_gen_Unit_B1S2C1 = 27,
  efunc_gen_Unit_B1S2B1 = 28,
  efunc_Include = 29,
  efunc_gen_Unit_B1S6C1 = 30,
  efunc_Function = 31,
  efunc_gen_Unit_B1 = 32,
  efunc_Mu = 33,
  efunc_NameListm_DoNames = 34,
  efunc_gen_NameList_S3C1 = 35,
  efunc_ELm_AddErrorAt = 36,
  efunc_gen_NameListm_DoNames_S8C1 = 37,
  efunc_gen_NameListm_DoNames_S8C2 = 38,
  efunc_gen_Include_B1 = 39,
  efunc_gen_Include_A1 = 40,
  efunc_Functionm_AfterBlock = 41,
  efunc_Block = 42,
  efunc_gen_Block_S2A1 = 43,
  efunc_gen_Block_S2A1B1 = 44,
  efunc_Blockm_AfterSentence = 45,
  efunc_Sentence = 46,
  efunc_gen_Blockm_AfterSentence_S1B1S6A1 = 47,
  efunc_gen_Blockm_AfterSentence_S1B1 = 48,
  efunc_SentenceTail = 49,
  efunc_SentencePart = 50,
  efunc_AssignmentError = 51,
  efunc_gen_SentenceTail_S1A3 = 52,
  efunc_gen_SentenceTail_S1A2 = 53,
  efunc_CheckExceedBlocks = 54,
  efunc_gen_SentenceTail_S1A1 = 55,
  efunc_gen_SentenceTail_S2A1 = 56,
  efunc_CheckSentenceEnd = 57,
  efunc_DoCheckExceedBlocks = 58,
  efunc_gen_CheckSentenceEnd_S1A2 = 59,
  efunc_gen_CheckSentenceEnd_S1A1 = 60,
  efunc_CheckMistakenAssign = 61,
  efunc_SentencePartm_AfterPattern = 62,
  efunc_Pattern = 63,
  efunc_gen_SentencePartm_AfterPattern_B1S1C1 = 64,
  efunc_gen_SentencePartm_AfterPattern_B1S1A2 = 65,
  efunc_Result = 66,
  efunc_gen_SentencePartm_AfterPattern_B1S2C1 = 67,
  efunc_gen_SentencePartm_AfterPattern_B1 = 68,
  efunc_Expression = 69,
  efunc_Resultm_Blocks = 70,
  efunc_gen_Resultm_Blocks_S3A1 = 71,
  efunc_Expressionm_CheckBrackets = 72,
  efunc_TokenChain = 73,
  efunc_DoTokenChain = 74,
  efunc_gen_DoTokenChain_B1S6A2B1 = 75,
  efunc_gen_DoTokenChain_B1S6A2 = 76,
  efunc_DoTokenChainm_AfterCall = 77,
  efunc_gen_DoTokenChain_B1S9A3B1 = 78,
  efunc_gen_DoTokenChain_B1S9A3 = 79,
  efunc_gen_DoTokenChain_B1S9A2 = 80,
  efunc_gen_DoTokenChain_B1S11A1B1S2A1B1 = 81,
  efunc_gen_DoTokenChain_B1S11A1B1S2A1 = 82,
  efunc_gen_DoTokenChain_B1S12A3 = 83,
  efunc_gen_DoTokenChain_B1S6A1 = 84,
  efunc_gen_DoTokenChain_B1S7A1 = 85,
  efunc_gen_DoTokenChain_B1S9A1 = 86,
  efunc_gen_DoTokenChain_B1S11A1 = 87,
  efunc_gen_DoTokenChain_B1S11A1B1 = 88,
  efunc_gen_DoTokenChain_B1S12C1 = 89,
  efunc_gen_DoTokenChain_B1S12A2 = 90,
  efunc_DoTokenChainm_AddRedefinition = 91,
  efunc_gen_DoTokenChain_B1 = 92,
  efunc_gen_DoTokenChainm_AfterCall_S4A2 = 93,
  efunc_gen_DoTokenChainm_AfterCall_S4A1 = 94,
  efunc_gen_Expressionm_CheckBrackets_S1A3 = 95,
  efunc_gen_Expressionm_CheckBrackets_S1C1 = 96,
  efunc_gen_Expressionm_CheckBrackets_S1A2 = 97,
};


enum ident {
  ident_k43_ = 0,
  ident_k47_ = 1,
  ident_k37_ = 2,
  ident_k42_ = 3,
  ident_k63_ = 4,
  ident_m_ = 5,
  ident_True = 6,
  ident_TkRefal5Mode = 7,
  ident_TkEOF = 8,
  ident_TkEntry = 9,
  ident_TkName = 10,
  ident_TkSemicolon = 11,
  ident_TkInclude = 12,
  ident_TkNativeCode = 13,
  ident_TkSwap = 14,
  ident_TkESwap = 15,
  ident_TkLabel = 16,
  ident_TkExtern = 17,
  ident_TkEnum = 18,
  ident_TkEEnum = 19,
  ident_False = 20,
  ident_NativeBlock = 21,
  ident_GNm_Entry = 22,
  ident_Declaration = 23,
  ident_GNm_Local = 24,
  ident_Enum = 25,
  ident_Swap = 26,
  ident_Ident = 27,
  ident_TkComma = 28,
  ident_TkOpenBlock = 29,
  ident_TkCompound = 30,
  ident_Include = 31,
  ident_Function = 32,
  ident_NativeBody = 33,
  ident_TkCloseBlock = 34,
  ident_Sentences = 35,
  ident_TkColon = 36,
  ident_Classic = 37,
  ident_Assign = 38,
  ident_Condition = 39,
  ident_TkAssign = 40,
  ident_Pattern = 41,
  ident_Result = 42,
  ident_Brackets = 43,
  ident_TkCloseBracket = 44,
  ident_ADTm_Brackets = 45,
  ident_TkCloseADT = 46,
  ident_Extended = 47,
  ident_Symbol = 48,
  ident_Name = 49,
  ident_Closure = 50,
  ident_Identifier = 51,
  ident_TkMacroDigit = 52,
  ident_Number = 53,
  ident_TkChar = 54,
  ident_Char = 55,
  ident_TkVariable = 56,
  ident_TkOpenBracket = 57,
  ident_TkOpenCall = 58,
  ident_TkOpenADT = 59,
  ident_TkAmpersand = 60,
  ident_TkRedefinition = 61,
  ident_TkScopeId = 62,
  ident_Cookie1 = 63,
  ident_Cookie2 = 64,
  ident_TkError = 65,
  ident_TkCloseCall = 66,
  ident_CallBrackets = 67,
  ident_TkNewVariable = 68,
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
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[9], functions[efunc_gen_Mu_C1]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_u_u_Stepm_Start]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_u_u_Mum_Aux]);
  refalrts::copy_stvar(vm, context[15], context[5]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::alloc_close_call(vm, context[8]);
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
    refalrts::update_name(context[4], functions[efunc_u_u_Stepm_End]);
    refalrts::reinit_close_call(context[7]);
    refalrts::reinit_open_call(context[11]);
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

static refalrts::NativeReference nat_ref_Mu("Mu", 49629914U, 2709224338U, func_Mu);


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
    refalrts::alloc_number(vm, context[9], 2709224338UL);
    refalrts::update_name(context[4], functions[efunc_u_u_FindMuPtr]);
    refalrts::reinit_number(context[5], 49629914UL);
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
  refalrts::update_name(context[4], functions[efunc_u_u_FindMuPtr]);
  refalrts::reinit_number(context[5], 49629914UL);
  refalrts::reinit_number(context[7], 2709224338UL);
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

static refalrts::NativeReference nat_ref_gen_u_u_Mum_Aux_S13B1("__Mu-Aux$13:1", 49629914U, 2709224338U, func_gen_u_u_Mum_Aux_S13B1);


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
      refalrts::reinit_name(context[1], functions[efunc_Add]);
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
      refalrts::reinit_name(context[1], functions[efunc_Div]);
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
      refalrts::reinit_name(context[1], functions[efunc_Mod]);
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
      refalrts::reinit_name(context[1], functions[efunc_Mul]);
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
      refalrts::reinit_name(context[1], functions[efunc_Residue]);
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
      refalrts::reinit_name(context[1], functions[efunc_Sub]);
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
      refalrts::reinit_name(context[1], functions[efunc_Add]);
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
      refalrts::reinit_name(context[1], functions[efunc_Div]);
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
      refalrts::reinit_name(context[1], functions[efunc_Mod]);
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
      refalrts::reinit_name(context[1], functions[efunc_Mul]);
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
      refalrts::reinit_name(context[1], functions[efunc_Residue]);
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
    refalrts::reinit_name(context[1], functions[efunc_Sub]);
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
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_u_u_Mum_Aux_S13B1]);
  refalrts::alloc_close_call(vm, context[9]);
  refalrts::update_name(context[4], functions[efunc_Type]);
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

static refalrts::NativeReference nat_ref_u_u_Mum_Aux("__Mu-Aux", 49629914U, 2709224338U, func_u_u_Mum_Aux);


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
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[9], functions[efunc_gen_Residue_C1]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_u_u_Stepm_Start]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_u_u_Mum_Aux]);
  refalrts::copy_stvar(vm, context[15], context[5]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::alloc_close_call(vm, context[8]);
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
    refalrts::update_name(context[4], functions[efunc_u_u_Stepm_End]);
    refalrts::reinit_close_call(context[7]);
    refalrts::reinit_open_call(context[11]);
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

static refalrts::NativeReference nat_ref_Residue("Residue", 49629914U, 2709224338U, func_Residue);


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

static refalrts::NativeReference nat_ref_Program("Program", 49629914U, 2709224338U, func_Program);


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

static refalrts::NativeReference nat_ref_gen_DoProgram_S1A3("DoProgram$1=3", 49629914U, 2709224338U, func_gen_DoProgram_S1A3);


static refalrts::FnResult func_DoProgram(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 36 elems
  refalrts::Iter context[36];
  refalrts::zeros( context, 36 );
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
    // </0 & DoProgram/4 t.ErrorList#1/5 s.Mode#1/7 (/10 e.Units#1/8 )/11 t.NextToken#1/12 e.Tokens#1/2 >/1
    // closed e.Units#1 as range 8
    // closed e.Tokens#1 as range 2
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: t.NextToken#1: 12
    //DEBUG: s.Mode#1: 7
    //DEBUG: e.Units#1: 8
    //DEBUG: e.Tokens#1: 2
    //2: e.Tokens#1
    //5: t.ErrorList#1
    //7: s.Mode#1
    //8: e.Units#1
    //12: t.NextToken#1
    //17: t.NextToken#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[14]);
    refalrts::alloc_name(vm, context[16], functions[efunc_gen_DoProgram_S1C1]);
    refalrts::copy_stvar(vm, context[17], context[12]);
    refalrts::alloc_close_call(vm, context[15]);
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[14] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_stvar( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </14 & DoProgram$1?1/18 (/21 s.Type#2/23 t.Pos#2/24 e.Value#2/19 )/22 >/15
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::call_left( context[16], context[17], context[14], context[15] );
      context[19] = 0;
      context[20] = 0;
      context[21] = refalrts::brackets_left( context[19], context[20], context[16], context[17] );
      if( ! context[21] )
        continue;
      refalrts::bracket_pointers(context[21], context[22]);
      if( ! refalrts::empty_seq( context[16], context[17] ) )
        continue;
      if( ! refalrts::svar_left( context[23], context[19], context[20] ) )
        continue;
      context[25] = refalrts::tvar_left( context[24], context[19], context[20] );
      if( ! context[25] )
        continue;
      // closed e.Value#2 as range 19
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: t.NextToken#1: 12
      //DEBUG: s.Mode#1: 7
      //DEBUG: e.Units#1: 8
      //DEBUG: e.Tokens#1: 2
      //DEBUG: s.Type#2: 23
      //DEBUG: t.Pos#2: 24
      //DEBUG: e.Value#2: 19
      //2: e.Tokens#1
      //5: t.ErrorList#1
      //7: s.Mode#1
      //8: e.Units#1
      //12: t.NextToken#1
      //19: e.Value#2
      //23: s.Type#2
      //24: t.Pos#2
      //31: s.Type#2

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[26]);
      refalrts::alloc_name(vm, context[28], functions[efunc_gen_DoProgram_S1C2]);
      refalrts::alloc_open_call(vm, context[29]);
      refalrts::alloc_name(vm, context[30], functions[efunc_OneOf]);
      refalrts::copy_stvar(vm, context[31], context[23]);
      refalrts::alloc_open_call(vm, context[32]);
      refalrts::alloc_name(vm, context[33], functions[efunc_UnitStartToken]);
      refalrts::alloc_close_call(vm, context[34]);
      refalrts::alloc_close_call(vm, context[35]);
      refalrts::alloc_close_call(vm, context[27]);
      refalrts::push_stack( vm, context[27] );
      refalrts::push_stack( vm, context[26] );
      res = refalrts::splice_elem( res, context[27] );
      refalrts::push_stack( vm, context[35] );
      refalrts::push_stack( vm, context[29] );
      res = refalrts::splice_elem( res, context[35] );
      refalrts::push_stack( vm, context[34] );
      refalrts::push_stack( vm, context[32] );
      res = refalrts::splice_elem( res, context[34] );
      res = refalrts::splice_elem( res, context[33] );
      res = refalrts::splice_elem( res, context[32] );
      res = refalrts::splice_stvar( res, context[31] );
      res = refalrts::splice_elem( res, context[30] );
      res = refalrts::splice_elem( res, context[29] );
      res = refalrts::splice_elem( res, context[28] );
      res = refalrts::splice_elem( res, context[26] );
      refalrts::use( res );
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function(vm);
      do {
        // </26 & DoProgram$1?2/30 # True/31 >/27
        context[28] = 0;
        context[29] = 0;
        context[30] = refalrts::call_left( context[28], context[29], context[26], context[27] );
        context[31] = refalrts::ident_left( identifiers[ident_True], context[28], context[29] );
        if( ! context[31] )
          continue;
        if( ! refalrts::empty_seq( context[28], context[29] ) )
          continue;
        //DEBUG: t.ErrorList#1: 5
        //DEBUG: t.NextToken#1: 12
        //DEBUG: s.Mode#1: 7
        //DEBUG: e.Units#1: 8
        //DEBUG: e.Tokens#1: 2
        //DEBUG: s.Type#2: 23
        //DEBUG: t.Pos#2: 24
        //DEBUG: e.Value#2: 19

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Type#2/23 t.Pos#2/24 e.Value#2/19 {REMOVED TILE} >/15 </26 & DoProgram$1?2/30 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: </14 HalfReuse: [*]/18 HalfReuse: & DoProgram$1=3/21 } Tile{ AsIs: s.Mode#1/7 AsIs: (/10 AsIs: e.Units#1/8 AsIs: )/11 } Tile{ HalfReuse: {*}/22 } Tile{ AsIs: </0 Reuse: & Unit/4 AsIs: t.ErrorList#1/5 } Tile{ HalfReuse: s.Mode1 #7/31 } Tile{ AsIs: t.NextToken#1/12 } Tile{ AsIs: e.Tokens#1/2 } Tile{ AsIs: >/27 AsIs: >/1 ]] }
        refalrts::reinit_closure_head(context[18]);
        refalrts::reinit_name(context[21], functions[efunc_gen_DoProgram_S1A3]);
        refalrts::reinit_unwrapped_closure(context[22], context[18]);
        refalrts::update_name(context[4], functions[efunc_Unit]);
        refalrts::reinit_svar( context[31], context[7] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[14] );
        refalrts::push_stack( vm, context[27] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[10], context[11] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[27];
        res = refalrts::splice_evar( res, context[2], context[3] );
        res = refalrts::splice_evar( res, context[12], context[13] );
        res = refalrts::splice_evar( res, context[31], context[31] );
        res = refalrts::splice_evar( res, context[0], context[6] );
        res = refalrts::splice_evar( res, context[22], context[22] );
        res = refalrts::splice_evar( res, context[7], context[11] );
        res = refalrts::splice_evar( res, context[14], context[21] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        refalrts::wrap_closure( context[22] );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[26], context[27]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[14], context[15]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoProgram/4 t.new#6/5 s.new#7/7 (/10 e.new#8/8 )/11 (/12 s.new#9/16 e.new#10/14 t.new#11/17 )/13 e.new#12/2 >/1
    context[14] = 0;
    context[15] = 0;
    if( ! refalrts::brackets_term( context[14], context[15], context[12] ) )
      continue;
    // closed e.new#8 as range 8
    // closed e.new#12 as range 2
    if( ! refalrts::svar_left( context[16], context[14], context[15] ) )
      continue;
    context[18] = refalrts::tvar_right( context[17], context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.new#10 as range 14
    do {
      // </0 & DoProgram/4 t.ErrorList#1/5 s.Mode#1/7 (/10 e.Units#1/8 )/11 (/12 # TkRefal5Mode/16 t.Pos#1/21 s.NewMode#1/17 )/13 e.Tokens#1/2 >/1
      context[19] = context[14];
      context[20] = context[15];
      if( ! refalrts::svar_term( context[17], context[17] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_TkRefal5Mode], context[16] ) )
        continue;
      // closed e.Units#1 as range 8
      // closed e.Tokens#1 as range 2
      context[22] = refalrts::tvar_left( context[21], context[19], context[20] );
      if( ! context[22] )
        continue;
      if( ! refalrts::empty_seq( context[19], context[20] ) )
        continue;
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: s.NewMode#1: 17
      //DEBUG: s.Mode#1: 7
      //DEBUG: e.Units#1: 8
      //DEBUG: e.Tokens#1: 2
      //DEBUG: t.Pos#1: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Mode#1/7 (/10 {REMOVED TILE} {REMOVED TILE} # TkRefal5Mode/16 t.Pos#1/21 s.NewMode#1/17 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoProgram/4 AsIs: t.ErrorList#1/5 } Tile{ HalfReuse: s.NewMode1 #17/11 AsIs: (/12 } Tile{ AsIs: e.Units#1/8 } Tile{ AsIs: )/13 AsIs: e.Tokens#1/2 AsIs: >/1 ]] }
      refalrts::reinit_svar( context[11], context[17] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[12], context[13] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[13];
      res = refalrts::splice_evar( res, context[8], context[9] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::splice_to_freelist_open( vm, context[6], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoProgram/4 t.ErrorList#1/5 s.Mode#1/7 (/10 e.Units#1/8 )/11 (/12 # TkEOF/16 t.Pos#1/17 )/13 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkEOF], context[16] ) )
      continue;
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Units#1 as range 8
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: t.Pos#1: 17
    //DEBUG: s.Mode#1: 7
    //DEBUG: e.Units#1: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoProgram/4 {REMOVED TILE} s.Mode#1/7 (/10 {REMOVED TILE} )/11 (/12 # TkEOF/16 t.Pos#1/17 )/13 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: e.Units#1/8 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[9] );
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
  //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoProgram/4 } </14 & UnexpectedToken/15 Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: t.Unexpected#1/12 }"$EXTERN, $ENTRY, function name or special comment"/16 >/18 Tile{ AsIs: s.Mode#1/7 AsIs: (/10 AsIs: e.Units#1/8 AsIs: )/11 } Tile{ AsIs: e.Tokens#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_UnexpectedToken]);
  refalrts::alloc_chars(vm, context[16], context[17], "$EXTERN, $ENTRY, function name or special comment", 49);
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

static refalrts::NativeReference nat_ref_DoProgram("DoProgram", 49629914U, 2709224338U, func_DoProgram);


static refalrts::FnResult func_UnitStartToken(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & NameListTags/4 AsIs: >/1 } # TkEntry/5 # TkName/6 # TkSemicolon/7 # TkInclude/8 # TkNativeCode/9 Tile{ ]] }
  refalrts::alloc_ident(vm, context[5], identifiers[ident_TkEntry]);
  refalrts::alloc_ident(vm, context[6], identifiers[ident_TkName]);
  refalrts::alloc_ident(vm, context[7], identifiers[ident_TkSemicolon]);
  refalrts::alloc_ident(vm, context[8], identifiers[ident_TkInclude]);
  refalrts::alloc_ident(vm, context[9], identifiers[ident_TkNativeCode]);
  refalrts::update_name(context[4], functions[efunc_NameListTags]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_UnitStartToken("UnitStartToken", 49629914U, 2709224338U, func_UnitStartToken);


static refalrts::FnResult func_NameListTags(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
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
  //RESULT: Tile{ [[ HalfReuse: # TkExtern/0 HalfReuse: # TkEnum/4 HalfReuse: # TkEEnum/1 } # TkSwap/5 # TkESwap/6 # TkLabel/7 Tile{ ]] }
  refalrts::alloc_ident(vm, context[5], identifiers[ident_TkSwap]);
  refalrts::alloc_ident(vm, context[6], identifiers[ident_TkESwap]);
  refalrts::alloc_ident(vm, context[7], identifiers[ident_TkLabel]);
  refalrts::reinit_ident(context[0], identifiers[ident_TkExtern]);
  refalrts::reinit_ident(context[4], identifiers[ident_TkEnum]);
  refalrts::reinit_ident(context[1], identifiers[ident_TkEEnum]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_NameListTags("NameListTags", 49629914U, 2709224338U, func_NameListTags);


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

static refalrts::NativeReference nat_ref_OneOf("OneOf", 49629914U, 2709224338U, func_OneOf);


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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ClassicError/4 } Tile{ AsIs: t.ErrorList#4/9 } Tile{ AsIs: s.Mode#1/5 AsIs: t.Pos#2/6 } </15 & TokName/16 Tile{ AsIs: s.Tag#2/8 } Tile{ AsIs: >/1 }" is a extension"/17 >/19 Tile{ AsIs: (/13 AsIs: e.Units#4/11 AsIs: )/14 } Tile{ AsIs: e.Tokens#4/2 } Tile{ ]] }
  refalrts::alloc_open_call(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_TokName]);
  refalrts::alloc_chars(vm, context[17], context[18], " is a extension", 15);
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

static refalrts::NativeReference nat_ref_gen_Unit_B1S2B1("Unit:1$2:1", 49629914U, 2709224338U, func_gen_Unit_B1S2B1);


static refalrts::FnResult func_gen_Unit_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  // </0 & Unit:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Unit:1/4 t.new#1/10 (/14 e.new#2/12 )/15 s.new#3/16 t.new#4/17 (/7 s.new#5/9 t.new#6/19 e.new#7/5 )/8 >/1
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
  // closed e.new#2 as range 12
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
  // closed e.new#7 as range 5
  do {
    // </0 & Unit:1/4 t.new#8/10 (/14 e.new#9/12 )/15 s.new#10/16 t.new#11/17 (/7 s.new#12/9 t.new#13/19 )/8 >/1
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.new#9 as range 12
    do {
      // </0 & Unit:1/4 t.ErrorList#1/10 (/14 e.Tokens#1/12 )/15 s.Mode#1/16 t.NextToken#1/17 (/7 # TkExtern/9 t.Pos#2/19 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_TkExtern], context[9] ) )
        continue;
      // closed e.Tokens#1 as range 12
      //DEBUG: t.ErrorList#1: 10
      //DEBUG: t.NextToken#1: 17
      //DEBUG: t.Pos#2: 19
      //DEBUG: s.Mode#1: 16
      //DEBUG: e.Tokens#1: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Mode#1/16 t.NextToken#1/17 (/7 # TkExtern/9 t.Pos#2/19 )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & NameList/4 AsIs: t.ErrorList#1/10 HalfReuse: # TkExtern/14 AsIs: e.Tokens#1/12 HalfReuse: >/15 } Tile{ ]] }
      refalrts::update_name(context[4], functions[efunc_NameList]);
      refalrts::reinit_ident(context[14], identifiers[ident_TkExtern]);
      refalrts::reinit_close_call(context[15]);
      refalrts::push_stack( vm, context[15] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      refalrts::splice_to_freelist_open( vm, context[15], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Unit:1/4 t.ErrorList#1/10 (/14 e.Tokens#1/12 )/15 s.Mode#1/16 t.NextToken#1/17 (/7 s.Tag#2/9 t.Pos#2/19 )/8 >/1
      // closed e.Tokens#1 as range 12
      //DEBUG: t.ErrorList#1: 10
      //DEBUG: t.NextToken#1: 17
      //DEBUG: t.Pos#2: 19
      //DEBUG: s.Mode#1: 16
      //DEBUG: s.Tag#2: 9
      //DEBUG: e.Tokens#1: 12
      //9: s.Tag#2
      //10: t.ErrorList#1
      //12: e.Tokens#1
      //16: s.Mode#1
      //17: t.NextToken#1
      //19: t.Pos#2
      //26: s.Tag#2

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[21]);
      refalrts::alloc_name(vm, context[23], functions[efunc_gen_Unit_B1S2C1]);
      refalrts::alloc_open_call(vm, context[24]);
      refalrts::alloc_name(vm, context[25], functions[efunc_OneOf]);
      refalrts::copy_stvar(vm, context[26], context[9]);
      refalrts::alloc_open_call(vm, context[27]);
      refalrts::alloc_name(vm, context[28], functions[efunc_NameListTags]);
      refalrts::alloc_close_call(vm, context[29]);
      refalrts::alloc_close_call(vm, context[30]);
      refalrts::alloc_close_call(vm, context[22]);
      refalrts::push_stack( vm, context[22] );
      refalrts::push_stack( vm, context[21] );
      res = refalrts::splice_elem( res, context[22] );
      refalrts::push_stack( vm, context[30] );
      refalrts::push_stack( vm, context[24] );
      res = refalrts::splice_elem( res, context[30] );
      refalrts::push_stack( vm, context[29] );
      refalrts::push_stack( vm, context[27] );
      res = refalrts::splice_elem( res, context[29] );
      res = refalrts::splice_elem( res, context[28] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_stvar( res, context[26] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_elem( res, context[21] );
      refalrts::use( res );
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function(vm);
      do {
        // </21 & Unit:1$2?1/25 # True/26 >/22
        context[23] = 0;
        context[24] = 0;
        context[25] = refalrts::call_left( context[23], context[24], context[21], context[22] );
        context[26] = refalrts::ident_left( identifiers[ident_True], context[23], context[24] );
        if( ! context[26] )
          continue;
        if( ! refalrts::empty_seq( context[23], context[24] ) )
          continue;
        //DEBUG: t.ErrorList#1: 10
        //DEBUG: t.NextToken#1: 17
        //DEBUG: t.Pos#2: 19
        //DEBUG: s.Mode#1: 16
        //DEBUG: s.Tag#2: 9
        //DEBUG: e.Tokens#1: 12

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.Mode#1/16 t.NextToken#1/17 {REMOVED TILE} s.Tag#2/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: </21 HalfReuse: [*]/25 HalfReuse: & Unit:1$2:1/26 HalfReuse: s.Mode1 #16/22 } Tile{ AsIs: t.Pos#2/19 HalfReuse: s.Tag2 #9/8 } Tile{ HalfReuse: {*}/7 } Tile{ AsIs: </0 Reuse: & NameList/4 AsIs: t.ErrorList#1/10 HalfReuse: s.Tag2 #9/14 AsIs: e.Tokens#1/12 HalfReuse: >/15 } Tile{ AsIs: >/1 ]] }
        refalrts::reinit_closure_head(context[25]);
        refalrts::reinit_name(context[26], functions[efunc_gen_Unit_B1S2B1]);
        refalrts::reinit_svar( context[22], context[16] );
        refalrts::reinit_svar( context[8], context[9] );
        refalrts::reinit_unwrapped_closure(context[7], context[25]);
        refalrts::update_name(context[4], functions[efunc_NameList]);
        refalrts::reinit_svar( context[14], context[9] );
        refalrts::reinit_close_call(context[15]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[21] );
        refalrts::push_stack( vm, context[15] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[0], context[15] );
        res = refalrts::splice_evar( res, context[7], context[7] );
        res = refalrts::splice_evar( res, context[19], context[8] );
        res = refalrts::splice_evar( res, context[21], context[22] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        refalrts::wrap_closure( context[7] );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[21], context[22]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Unit:1/4 t.ErrorList#1/10 (/14 e.Tokens#1/12 )/15 s.Mode#1/16 t.NextToken#1/17 (/7 # TkInclude/9 t.Pos#2/19 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkInclude], context[9] ) )
      continue;
    // closed e.Tokens#1 as range 12
    //DEBUG: t.ErrorList#1: 10
    //DEBUG: t.NextToken#1: 17
    //DEBUG: t.Pos#2: 19
    //DEBUG: s.Mode#1: 16
    //DEBUG: e.Tokens#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} )/15 s.Mode#1/16 t.NextToken#1/17 (/7 # TkInclude/9 {REMOVED TILE} )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Include/4 AsIs: t.ErrorList#1/10 HalfReuse: s.Mode1 #16/14 } Tile{ AsIs: t.Pos#2/19 } Tile{ AsIs: e.Tokens#1/12 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_Include]);
    refalrts::reinit_svar( context[14], context[16] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::splice_to_freelist_open( vm, context[14], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Unit:1/4 t.ErrorList#1/10 (/14 e.Tokens#1/12 )/15 s.Mode#1/16 t.NextToken#1/17 (/7 # TkNativeCode/9 t.Pos#2/19 e.Lines#2/5 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkNativeCode], context[9] ) )
      continue;
    // closed e.Tokens#1 as range 12
    // closed e.Lines#2 as range 5
    //DEBUG: t.ErrorList#1: 10
    //DEBUG: t.NextToken#1: 17
    //DEBUG: t.Pos#2: 19
    //DEBUG: s.Mode#1: 16
    //DEBUG: e.Tokens#1: 12
    //DEBUG: e.Lines#2: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Unit:1/4 {REMOVED TILE} {REMOVED TILE} )/15 s.Mode#1/16 t.NextToken#1/17 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/10 AsIs: (/14 } Tile{ AsIs: (/7 Reuse: # NativeBlock/9 AsIs: t.Pos#2/19 AsIs: e.Lines#2/5 AsIs: )/8 HalfReuse: )/1 } Tile{ AsIs: e.Tokens#1/12 } Tile{ ]] }
    refalrts::update_ident(context[9], identifiers[ident_NativeBlock]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[14], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    res = refalrts::splice_evar( res, context[10], context[14] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Unit:1/4 t.ErrorList#1/10 (/14 e.Tokens#1/12 )/15 s.Mode#1/16 t.NextToken#1/17 (/7 # TkSemicolon/9 t.Pos#2/19 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkSemicolon], context[9] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Tokens#1 as range 12
    //DEBUG: t.ErrorList#1: 10
    //DEBUG: t.NextToken#1: 17
    //DEBUG: t.Pos#2: 19
    //DEBUG: s.Mode#1: 16
    //DEBUG: e.Tokens#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Unit:1/4 {REMOVED TILE} {REMOVED TILE} )/15 s.Mode#1/16 t.NextToken#1/17 (/7 # TkSemicolon/9 t.Pos#2/19 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/10 AsIs: (/14 } Tile{ AsIs: )/8 } Tile{ AsIs: e.Tokens#1/12 } Tile{ ]] }
    refalrts::link_brackets( context[14], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[10], context[14] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Unit:1/4 t.ErrorList#1/10 (/14 e.Tokens#1/12 )/15 s.Mode#1/16 t.NextToken#1/17 (/7 s.Type#2/9 t.Pos#2/19 e.Value#2/5 )/8 >/1
  // closed e.Tokens#1 as range 12
  // closed e.Value#2 as range 5
  //DEBUG: t.ErrorList#1: 10
  //DEBUG: t.NextToken#1: 17
  //DEBUG: t.Pos#2: 19
  //DEBUG: s.Mode#1: 16
  //DEBUG: s.Type#2: 9
  //DEBUG: e.Tokens#1: 12
  //DEBUG: e.Value#2: 5
  //5: e.Value#2
  //9: s.Type#2
  //10: t.ErrorList#1
  //12: e.Tokens#1
  //16: s.Mode#1
  //17: t.NextToken#1
  //19: t.Pos#2
  //26: s.Type#2

  refalrts::reset_allocator(vm);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::alloc_open_call(vm, context[21]);
  refalrts::alloc_name(vm, context[23], functions[efunc_gen_Unit_B1S6C1]);
  refalrts::alloc_open_call(vm, context[24]);
  refalrts::alloc_name(vm, context[25], functions[efunc_OneOf]);
  refalrts::copy_stvar(vm, context[26], context[9]);
  refalrts::alloc_ident(vm, context[27], identifiers[ident_TkEntry]);
  refalrts::alloc_ident(vm, context[28], identifiers[ident_TkName]);
  refalrts::alloc_close_call(vm, context[29]);
  refalrts::alloc_close_call(vm, context[22]);
  refalrts::push_stack( vm, context[22] );
  refalrts::push_stack( vm, context[21] );
  res = refalrts::splice_elem( res, context[22] );
  refalrts::push_stack( vm, context[29] );
  refalrts::push_stack( vm, context[24] );
  res = refalrts::splice_elem( res, context[29] );
  res = refalrts::splice_elem( res, context[28] );
  res = refalrts::splice_elem( res, context[27] );
  res = refalrts::splice_stvar( res, context[26] );
  res = refalrts::splice_elem( res, context[25] );
  res = refalrts::splice_elem( res, context[24] );
  res = refalrts::splice_elem( res, context[23] );
  res = refalrts::splice_elem( res, context[21] );
  refalrts::use( res );
  refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
  if (rec_res != refalrts::cSuccess)
    return rec_res;
  refalrts::this_is_generated_function(vm);
  do {
    // </21 & Unit:1$6?1/25 # True/26 >/22
    context[23] = 0;
    context[24] = 0;
    context[25] = refalrts::call_left( context[23], context[24], context[21], context[22] );
    context[26] = refalrts::ident_left( identifiers[ident_True], context[23], context[24] );
    if( ! context[26] )
      continue;
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;
    //DEBUG: t.ErrorList#1: 10
    //DEBUG: t.NextToken#1: 17
    //DEBUG: t.Pos#2: 19
    //DEBUG: s.Mode#1: 16
    //DEBUG: s.Type#2: 9
    //DEBUG: e.Tokens#1: 12
    //DEBUG: e.Value#2: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} )/15 s.Mode#1/16 {REMOVED TILE} (/7 s.Type#2/9 t.Pos#2/19 e.Value#2/5 )/8 </21 & Unit:1$6?1/25 # True/26 >/22 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Function/4 AsIs: t.ErrorList#1/10 HalfReuse: s.Mode1 #16/14 } Tile{ AsIs: t.NextToken#1/17 } Tile{ AsIs: e.Tokens#1/12 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_Function]);
    refalrts::reinit_svar( context[14], context[16] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    refalrts::splice_to_freelist_open( vm, context[14], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  refalrts::splice_to_freelist(vm, context[21], context[22]);
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_gen_Unit_B1("Unit:1", 49629914U, 2709224338U, func_gen_Unit_B1);


static refalrts::FnResult func_Unit(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & Unit:1/10 Tile{ AsIs: t.ErrorList#1/5 } (/11 Tile{ AsIs: e.Tokens#1/2 } )/12 Tile{ AsIs: s.Mode#1/7 AsIs: t.NextToken#1/8 } {*}/13 t.NextToken#1/8/14 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_Unit_B1]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_close_bracket(vm, context[12]);
  refalrts::alloc_unwrapped_closure(vm, context[13], context[4]);
  refalrts::copy_evar(vm, context[14], context[15], context[8], context[9]);
  refalrts::reinit_closure_head(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
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

static refalrts::NativeReference nat_ref_Unit("Unit", 49629914U, 2709224338U, func_Unit);


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
    // </0 & NameList/4 t.new#5/5 s.new#6/7 (/8 s.new#7/12 t.new#8/13 e.new#9/10 )/9 e.new#10/2 >/1
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_term( context[10], context[11], context[8] ) )
      continue;
    // closed e.new#10 as range 2
    if( ! refalrts::svar_left( context[12], context[10], context[11] ) )
      continue;
    context[14] = refalrts::tvar_left( context[13], context[10], context[11] );
    if( ! context[14] )
      continue;
    // closed e.new#9 as range 10
    do {
      // </0 & NameList/4 t.ErrorList#1/5 s.Tag#1/7 (/8 # TkName/12 t.Pos#1/13 e.Name#1/10 )/9 e.Tokens#1/2 >/1
      if( ! refalrts::ident_term( identifiers[ident_TkName], context[12] ) )
        continue;
      // closed e.Name#1 as range 10
      // closed e.Tokens#1 as range 2
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: t.Pos#1: 13
      //DEBUG: s.Tag#1: 7
      //DEBUG: e.Name#1: 10
      //DEBUG: e.Tokens#1: 2

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & NameList-DoNames/4 AsIs: t.ErrorList#1/5 AsIs: s.Tag#1/7 AsIs: (/8 HalfReuse: </12 } & Mu/15 s.Tag#1/7/16 Tile{ AsIs: t.Pos#1/13 } Tile{ AsIs: e.Name#1/10 } >/17 Tile{ AsIs: )/9 AsIs: e.Tokens#1/2 AsIs: >/1 ]] }
      refalrts::alloc_name(vm, context[15], functions[efunc_Mu]);
      refalrts::copy_stvar(vm, context[16], context[7]);
      refalrts::alloc_close_call(vm, context[17]);
      refalrts::update_name(context[4], functions[efunc_NameListm_DoNames]);
      refalrts::reinit_open_call(context[12]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[9] );
      refalrts::push_stack( vm, context[17] );
      refalrts::push_stack( vm, context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[9];
      res = refalrts::splice_evar( res, context[17], context[17] );
      res = refalrts::splice_evar( res, context[10], context[11] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & NameList/4 t.ErrorList#1/5 s.Tag#1/7 (/8 # TkRefal5Mode/12 t.Pos#1/13 s.Mode#1/17 )/9 e.Tokens#1/2 >/1
    context[15] = context[10];
    context[16] = context[11];
    if( ! refalrts::ident_term( identifiers[ident_TkRefal5Mode], context[12] ) )
      continue;
    // closed e.Tokens#1 as range 2
    if( ! refalrts::svar_left( context[17], context[15], context[16] ) )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: t.Pos#1: 13
    //DEBUG: s.Tag#1: 7
    //DEBUG: e.Tokens#1: 2
    //DEBUG: s.Mode#1: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/8 # TkRefal5Mode/12 t.Pos#1/13 s.Mode#1/17 )/9 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & NameList/4 AsIs: t.ErrorList#1/5 AsIs: s.Tag#1/7 } Tile{ AsIs: e.Tokens#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
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

static refalrts::NativeReference nat_ref_NameList("NameList", 49629914U, 2709224338U, func_NameList);


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

static refalrts::NativeReference nat_ref_TkExtern("TkExtern", 49629914U, 2709224338U, func_TkExtern);


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

static refalrts::NativeReference nat_ref_TkEnum("TkEnum", 49629914U, 2709224338U, func_TkEnum);


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

static refalrts::NativeReference nat_ref_TkEEnum("TkEEnum", 49629914U, 2709224338U, func_TkEEnum);


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

static refalrts::NativeReference nat_ref_TkSwap("TkSwap", 49629914U, 2709224338U, func_TkSwap);


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

static refalrts::NativeReference nat_ref_TkESwap("TkESwap", 49629914U, 2709224338U, func_TkESwap);


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

static refalrts::NativeReference nat_ref_TkLabel("TkLabel", 49629914U, 2709224338U, func_TkLabel);


static refalrts::FnResult func_NameListm_DoNames(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
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
    // </0 & NameList-DoNames/4 t.new#6/5 s.new#7/7 (/10 e.new#8/8 )/11 (/12 s.new#9/16 t.new#10/17 e.new#11/14 )/13 e.new#12/2 >/1
    context[14] = 0;
    context[15] = 0;
    if( ! refalrts::brackets_term( context[14], context[15], context[12] ) )
      continue;
    // closed e.new#8 as range 8
    // closed e.new#12 as range 2
    if( ! refalrts::svar_left( context[16], context[14], context[15] ) )
      continue;
    context[18] = refalrts::tvar_left( context[17], context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.new#11 as range 14
    do {
      // </0 & NameList-DoNames/4 t.ErrorList#1/5 s.Tag#1/7 (/10 e.Units#1/8 )/11 (/12 # TkRefal5Mode/16 t.Pos#1/17 s.Mode#1/21 )/13 e.Tokens#1/2 >/1
      context[19] = context[14];
      context[20] = context[15];
      if( ! refalrts::ident_term( identifiers[ident_TkRefal5Mode], context[16] ) )
        continue;
      // closed e.Units#1 as range 8
      // closed e.Tokens#1 as range 2
      if( ! refalrts::svar_left( context[21], context[19], context[20] ) )
        continue;
      if( ! refalrts::empty_seq( context[19], context[20] ) )
        continue;
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: t.Pos#1: 17
      //DEBUG: s.Tag#1: 7
      //DEBUG: e.Units#1: 8
      //DEBUG: e.Tokens#1: 2
      //DEBUG: s.Mode#1: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/12 # TkRefal5Mode/16 t.Pos#1/17 s.Mode#1/21 )/13 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & NameList-DoNames/4 AsIs: t.ErrorList#1/5 AsIs: s.Tag#1/7 AsIs: (/10 AsIs: e.Units#1/8 AsIs: )/11 } Tile{ AsIs: e.Tokens#1/2 } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[10], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[2], context[3] );
      refalrts::splice_to_freelist_open( vm, context[11], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & NameList-DoNames/4 t.new#13/5 s.new#14/7 (/10 e.new#15/8 )/11 (/12 s.new#16/16 t.new#17/17 )/13 e.new#18/2 >/1
      if( ! refalrts::empty_seq( context[14], context[15] ) )
        continue;
      // closed e.new#15 as range 8
      // closed e.new#18 as range 2
      do {
        // </0 & NameList-DoNames/4 t.new#19/5 s.new#20/7 (/10 e.new#21/8 )/11 (/12 # TkComma/16 t.new#22/17 )/13 (/23 s.new#23/25 t.new#24/26 e.new#25/21 )/24 e.new#26/19 >/1
        context[19] = context[2];
        context[20] = context[3];
        if( ! refalrts::ident_term( identifiers[ident_TkComma], context[16] ) )
          continue;
        context[21] = 0;
        context[22] = 0;
        context[23] = refalrts::brackets_left( context[21], context[22], context[19], context[20] );
        if( ! context[23] )
          continue;
        refalrts::bracket_pointers(context[23], context[24]);
        // closed e.new#21 as range 8
        // closed e.new#26 as range 19
        if( ! refalrts::svar_left( context[25], context[21], context[22] ) )
          continue;
        context[27] = refalrts::tvar_left( context[26], context[21], context[22] );
        if( ! context[27] )
          continue;
        // closed e.new#25 as range 21
        do {
          // </0 & NameList-DoNames/4 t.ErrorList#1/5 s.Tag#1/7 (/10 e.Units#1/8 )/11 (/12 # TkComma/16 t.CommaPos#1/17 )/13 (/23 # TkRefal5Mode/25 t.ModePos#1/26 s.Mode#1/30 )/24 e.Tokens#1/19 >/1
          context[28] = context[21];
          context[29] = context[22];
          if( ! refalrts::ident_term( identifiers[ident_TkRefal5Mode], context[25] ) )
            continue;
          // closed e.Units#1 as range 8
          // closed e.Tokens#1 as range 19
          if( ! refalrts::svar_left( context[30], context[28], context[29] ) )
            continue;
          if( ! refalrts::empty_seq( context[28], context[29] ) )
            continue;
          //DEBUG: t.ErrorList#1: 5
          //DEBUG: t.CommaPos#1: 17
          //DEBUG: t.ModePos#1: 26
          //DEBUG: s.Tag#1: 7
          //DEBUG: e.Units#1: 8
          //DEBUG: e.Tokens#1: 19
          //DEBUG: s.Mode#1: 30

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} (/23 # TkRefal5Mode/25 t.ModePos#1/26 s.Mode#1/30 )/24 {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & NameList-DoNames/4 AsIs: t.ErrorList#1/5 AsIs: s.Tag#1/7 AsIs: (/10 AsIs: e.Units#1/8 AsIs: )/11 AsIs: (/12 AsIs: # TkComma/16 AsIs: t.CommaPos#1/17 AsIs: )/13 } Tile{ AsIs: e.Tokens#1/19 } Tile{ AsIs: >/1 ]] }
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[12], context[13] );
          refalrts::link_brackets( context[10], context[11] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[19], context[20] );
          refalrts::splice_to_freelist_open( vm, context[13], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & NameList-DoNames/4 t.ErrorList#1/5 s.Tag#1/7 (/10 e.Units#1/8 )/11 (/12 # TkComma/16 t.CommaPos#1/17 )/13 (/23 # TkName/25 t.NamePos#1/26 e.Name#1/21 )/24 e.Tokens#1/19 >/1
        if( ! refalrts::ident_term( identifiers[ident_TkName], context[25] ) )
          continue;
        // closed e.Units#1 as range 8
        // closed e.Name#1 as range 21
        // closed e.Tokens#1 as range 19
        //DEBUG: t.ErrorList#1: 5
        //DEBUG: t.CommaPos#1: 17
        //DEBUG: t.NamePos#1: 26
        //DEBUG: s.Tag#1: 7
        //DEBUG: e.Units#1: 8
        //DEBUG: e.Name#1: 21
        //DEBUG: e.Tokens#1: 19

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} t.CommaPos#1/17 )/13 (/23 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & NameList-DoNames/4 AsIs: t.ErrorList#1/5 AsIs: s.Tag#1/7 AsIs: (/10 AsIs: e.Units#1/8 HalfReuse: </11 HalfReuse: & Mu/12 HalfReuse: s.Tag1 #7/16 } Tile{ AsIs: t.NamePos#1/26 } Tile{ AsIs: e.Name#1/21 } Tile{ HalfReuse: >/25 } Tile{ AsIs: )/24 AsIs: e.Tokens#1/19 AsIs: >/1 ]] }
        refalrts::reinit_open_call(context[11]);
        refalrts::reinit_name(context[12], functions[efunc_Mu]);
        refalrts::reinit_svar( context[16], context[7] );
        refalrts::reinit_close_call(context[25]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[10], context[24] );
        refalrts::push_stack( vm, context[25] );
        refalrts::push_stack( vm, context[11] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[24];
        res = refalrts::splice_evar( res, context[25], context[25] );
        res = refalrts::splice_evar( res, context[21], context[22] );
        res = refalrts::splice_evar( res, context[26], context[27] );
        refalrts::splice_to_freelist_open( vm, context[16], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & NameList-DoNames/4 t.ErrorList#1/5 s.Tag#1/7 (/10 e.Units#1/8 )/11 (/12 # TkSemicolon/16 t.Pos#1/17 )/13 e.Tokens#1/2 >/1
        if( ! refalrts::ident_term( identifiers[ident_TkSemicolon], context[16] ) )
          continue;
        // closed e.Units#1 as range 8
        // closed e.Tokens#1 as range 2
        //DEBUG: t.ErrorList#1: 5
        //DEBUG: t.Pos#1: 17
        //DEBUG: s.Tag#1: 7
        //DEBUG: e.Units#1: 8
        //DEBUG: e.Tokens#1: 2

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & NameList-DoNames/4 {REMOVED TILE} s.Tag#1/7 {REMOVED TILE} (/12 # TkSemicolon/16 t.Pos#1/17 )/13 {REMOVED TILE} >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: (/10 AsIs: e.Units#1/8 AsIs: )/11 } Tile{ AsIs: e.Tokens#1/2 } Tile{ ]] }
        refalrts::link_brackets( context[10], context[11] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[2], context[3] );
        res = refalrts::splice_evar( res, context[10], context[11] );
        res = refalrts::splice_evar( res, context[5], context[6] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & NameList-DoNames/4 t.ErrorList#1/5 s.Tag#1/7 (/10 e.Units#1/8 )/11 (/12 # TkComma/16 t.Pos#1/17 )/13 e.Tokens#1/2 >/1
      if( ! refalrts::ident_term( identifiers[ident_TkComma], context[16] ) )
        continue;
      // closed e.Units#1 as range 8
      // closed e.Tokens#1 as range 2
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: t.Pos#1: 17
      //DEBUG: s.Tag#1: 7
      //DEBUG: e.Units#1: 8
      //DEBUG: e.Tokens#1: 2

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & NameList-DoNames/4 } </19 & EL-AddErrorAt/20 Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: t.Pos#1/17 } Tile{ HalfReuse: 'e'/11 HalfReuse: 'x'/12 HalfReuse: 'p'/16 }"ected name after comma"/21 >/23 Tile{ AsIs: s.Tag#1/7 AsIs: (/10 } Tile{ AsIs: e.Units#1/8 } Tile{ AsIs: )/13 AsIs: e.Tokens#1/2 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::alloc_name(vm, context[20], functions[efunc_ELm_AddErrorAt]);
      refalrts::alloc_chars(vm, context[21], context[22], "ected name after comma", 22);
      refalrts::alloc_close_call(vm, context[23]);
      refalrts::reinit_char(context[11], 'e');
      refalrts::reinit_char(context[12], 'x');
      refalrts::reinit_char(context[16], 'p');
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[10], context[13] );
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[19] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[13];
      res = refalrts::splice_evar( res, context[8], context[9] );
      res = refalrts::splice_evar( res, context[7], context[10] );
      res = refalrts::splice_evar( res, context[21], context[23] );
      res = refalrts::splice_evar( res, context[11], context[16] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & NameList-DoNames/4 t.new#13/5 s.new#14/7 (/10 e.new#15/8 )/11 (/12 # TkName/16 t.new#16/17 e.new#17/14 )/13 e.new#18/2 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkName], context[16] ) )
      continue;
    // closed e.new#15 as range 8
    // closed e.new#17 as range 14
    // closed e.new#18 as range 2
    do {
      // </0 & NameList-DoNames/4 t.ErrorList#1/5 s.Tag#1/7 (/10 e.Units#1/8 )/11 (/12 # TkName/16 t.NamePos#1/17 e.Name#1/14 )/13 (/23 # TkOpenBlock/25 t.BracketPos#1/26 )/24 e.Tokens#1/19 >/1
      context[19] = context[2];
      context[20] = context[3];
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[19], context[20] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left( identifiers[ident_TkOpenBlock], context[21], context[22] );
      if( ! context[25] )
        continue;
      // closed e.Units#1 as range 8
      // closed e.Name#1 as range 14
      // closed e.Tokens#1 as range 19
      context[27] = refalrts::tvar_left( context[26], context[21], context[22] );
      if( ! context[27] )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: t.NamePos#1: 17
      //DEBUG: s.Tag#1: 7
      //DEBUG: e.Units#1: 8
      //DEBUG: e.Name#1: 14
      //DEBUG: e.Tokens#1: 19
      //DEBUG: t.BracketPos#1: 26

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#1/5 } t.NamePos#1/17/28"missed semicolon after previous "/30 </32 & TokName/33 Tile{ AsIs: s.Tag#1/7 } >/34" declaration"/35 Tile{ AsIs: >/1 } Tile{ AsIs: (/10 AsIs: e.Units#1/8 AsIs: )/11 AsIs: (/12 AsIs: # TkName/16 AsIs: t.NamePos#1/17 AsIs: e.Name#1/14 AsIs: )/13 AsIs: (/23 AsIs: # TkOpenBlock/25 AsIs: t.BracketPos#1/26 AsIs: )/24 } Tile{ AsIs: e.Tokens#1/19 } Tile{ ]] }
      refalrts::copy_evar(vm, context[28], context[29], context[17], context[18]);
      refalrts::alloc_chars(vm, context[30], context[31], "missed semicolon after previous ", 32);
      refalrts::alloc_open_call(vm, context[32]);
      refalrts::alloc_name(vm, context[33], functions[efunc_TokName]);
      refalrts::alloc_close_call(vm, context[34]);
      refalrts::alloc_chars(vm, context[35], context[36], " declaration", 12);
      refalrts::update_name(context[4], functions[efunc_ELm_AddErrorAt]);
      refalrts::link_brackets( context[23], context[24] );
      refalrts::link_brackets( context[12], context[13] );
      refalrts::link_brackets( context[10], context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[34] );
      refalrts::push_stack( vm, context[32] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[10], context[24] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[34], context[36] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[28], context[33] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & NameList-DoNames/4 t.ErrorList#1/5 s.Tag#1/7 (/10 e.Units#1/8 )/11 (/12 # TkName/16 t.Pos#1/17 e.Name#1/14 )/13 e.Tokens#1/2 >/1
    // closed e.Units#1 as range 8
    // closed e.Name#1 as range 14
    // closed e.Tokens#1 as range 2
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: t.Pos#1: 17
    //DEBUG: s.Tag#1: 7
    //DEBUG: e.Units#1: 8
    //DEBUG: e.Name#1: 14
    //DEBUG: e.Tokens#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Name#1/14 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & NameList-DoNames/4 } </19 & EL-AddErrorAt/20 Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: t.Pos#1/17 } Tile{ HalfReuse: 'm'/11 HalfReuse: 'i'/12 HalfReuse: 's'/16 }"sed comma after external name"/21 >/23 Tile{ AsIs: s.Tag#1/7 AsIs: (/10 } Tile{ AsIs: e.Units#1/8 } Tile{ AsIs: )/13 AsIs: e.Tokens#1/2 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_ELm_AddErrorAt]);
    refalrts::alloc_chars(vm, context[21], context[22], "sed comma after external name", 29);
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::reinit_char(context[11], 'm');
    refalrts::reinit_char(context[12], 'i');
    refalrts::reinit_char(context[16], 's');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[10], context[13] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[19] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[13];
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[7], context[10] );
    res = refalrts::splice_evar( res, context[21], context[23] );
    res = refalrts::splice_evar( res, context[11], context[16] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & NameList-DoNames/4 t.ErrorList#1/5 s.Tag#1/7 (/10 e.Units#1/8 )/11 t.NextToken#1/12 e.Tokens#1/2 >/1
    // closed e.Units#1 as range 8
    // closed e.Tokens#1 as range 2
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: t.NextToken#1: 12
    //DEBUG: s.Tag#1: 7
    //DEBUG: e.Units#1: 8
    //DEBUG: e.Tokens#1: 2
    //2: e.Tokens#1
    //5: t.ErrorList#1
    //7: s.Tag#1
    //8: e.Units#1
    //12: t.NextToken#1
    //17: t.NextToken#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[14]);
    refalrts::alloc_name(vm, context[16], functions[efunc_gen_NameListm_DoNames_S8C1]);
    refalrts::copy_stvar(vm, context[17], context[12]);
    refalrts::alloc_close_call(vm, context[15]);
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[14] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_stvar( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </14 & NameList-DoNames$8?1/18 (/21 s.Type#2/23 t.Pos#2/24 e.Value#2/19 )/22 >/15
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::call_left( context[16], context[17], context[14], context[15] );
      context[19] = 0;
      context[20] = 0;
      context[21] = refalrts::brackets_left( context[19], context[20], context[16], context[17] );
      if( ! context[21] )
        continue;
      refalrts::bracket_pointers(context[21], context[22]);
      if( ! refalrts::empty_seq( context[16], context[17] ) )
        continue;
      if( ! refalrts::svar_left( context[23], context[19], context[20] ) )
        continue;
      context[25] = refalrts::tvar_left( context[24], context[19], context[20] );
      if( ! context[25] )
        continue;
      // closed e.Value#2 as range 19
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: t.NextToken#1: 12
      //DEBUG: s.Tag#1: 7
      //DEBUG: e.Units#1: 8
      //DEBUG: e.Tokens#1: 2
      //DEBUG: s.Type#2: 23
      //DEBUG: t.Pos#2: 24
      //DEBUG: e.Value#2: 19
      //2: e.Tokens#1
      //5: t.ErrorList#1
      //7: s.Tag#1
      //8: e.Units#1
      //12: t.NextToken#1
      //19: e.Value#2
      //23: s.Type#2
      //24: t.Pos#2
      //31: s.Type#2

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[26]);
      refalrts::alloc_name(vm, context[28], functions[efunc_gen_NameListm_DoNames_S8C2]);
      refalrts::alloc_open_call(vm, context[29]);
      refalrts::alloc_name(vm, context[30], functions[efunc_OneOf]);
      refalrts::copy_stvar(vm, context[31], context[23]);
      refalrts::alloc_ident(vm, context[32], identifiers[ident_TkExtern]);
      refalrts::alloc_ident(vm, context[33], identifiers[ident_TkEntry]);
      refalrts::alloc_ident(vm, context[34], identifiers[ident_TkEOF]);
      refalrts::alloc_close_call(vm, context[35]);
      refalrts::alloc_close_call(vm, context[27]);
      refalrts::push_stack( vm, context[27] );
      refalrts::push_stack( vm, context[26] );
      res = refalrts::splice_elem( res, context[27] );
      refalrts::push_stack( vm, context[35] );
      refalrts::push_stack( vm, context[29] );
      res = refalrts::splice_elem( res, context[35] );
      res = refalrts::splice_elem( res, context[34] );
      res = refalrts::splice_elem( res, context[33] );
      res = refalrts::splice_elem( res, context[32] );
      res = refalrts::splice_stvar( res, context[31] );
      res = refalrts::splice_elem( res, context[30] );
      res = refalrts::splice_elem( res, context[29] );
      res = refalrts::splice_elem( res, context[28] );
      res = refalrts::splice_elem( res, context[26] );
      refalrts::use( res );
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function(vm);
      do {
        // </26 & NameList-DoNames$8?2/30 # True/31 >/27
        context[28] = 0;
        context[29] = 0;
        context[30] = refalrts::call_left( context[28], context[29], context[26], context[27] );
        context[31] = refalrts::ident_left( identifiers[ident_True], context[28], context[29] );
        if( ! context[31] )
          continue;
        if( ! refalrts::empty_seq( context[28], context[29] ) )
          continue;
        //DEBUG: t.ErrorList#1: 5
        //DEBUG: t.NextToken#1: 12
        //DEBUG: s.Tag#1: 7
        //DEBUG: e.Units#1: 8
        //DEBUG: e.Tokens#1: 2
        //DEBUG: s.Type#2: 23
        //DEBUG: t.Pos#2: 24
        //DEBUG: e.Value#2: 19

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.Tag#1/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Type#2/23 {REMOVED TILE} e.Value#2/19 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#1/5 } Tile{ AsIs: t.Pos#2/24 } Tile{ HalfReuse: 'm'/14 HalfReuse: 'i'/18 HalfReuse: 's'/21 }"sed sem"/32 Tile{ HalfReuse: 'i'/22 HalfReuse: 'c'/15 HalfReuse: 'o'/26 HalfReuse: 'l'/30 HalfReuse: 'o'/31 HalfReuse: 'n'/27 AsIs: >/1 } Tile{ AsIs: (/10 AsIs: e.Units#1/8 AsIs: )/11 AsIs: t.NextToken#1/12 } Tile{ AsIs: e.Tokens#1/2 } Tile{ ]] }
        refalrts::alloc_chars(vm, context[32], context[33], "sed sem", 7);
        refalrts::update_name(context[4], functions[efunc_ELm_AddErrorAt]);
        refalrts::reinit_char(context[14], 'm');
        refalrts::reinit_char(context[18], 'i');
        refalrts::reinit_char(context[21], 's');
        refalrts::reinit_char(context[22], 'i');
        refalrts::reinit_char(context[15], 'c');
        refalrts::reinit_char(context[26], 'o');
        refalrts::reinit_char(context[30], 'l');
        refalrts::reinit_char(context[31], 'o');
        refalrts::reinit_char(context[27], 'n');
        refalrts::link_brackets( context[10], context[11] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[2], context[3] );
        res = refalrts::splice_evar( res, context[10], context[13] );
        res = refalrts::splice_evar( res, context[22], context[1] );
        res = refalrts::splice_evar( res, context[32], context[33] );
        res = refalrts::splice_evar( res, context[14], context[21] );
        res = refalrts::splice_evar( res, context[24], context[25] );
        refalrts::splice_to_freelist_open( vm, context[6], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[26], context[27]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[14], context[15]);
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

static refalrts::NativeReference nat_ref_NameListm_DoNames("NameList-DoNames", 49629914U, 2709224338U, func_NameListm_DoNames);


static refalrts::FnResult func_gen_Include_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
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
    // </0 & Include:1/4 t.new#5/5 (/9 e.new#6/7 )/10 (/11 # TkCompound/17 t.new#7/18 e.new#8/15 )/12 t.new#9/13 >/1
    context[15] = 0;
    context[16] = 0;
    if( ! refalrts::brackets_term( context[15], context[16], context[11] ) )
      continue;
    context[17] = refalrts::ident_left( identifiers[ident_TkCompound], context[15], context[16] );
    if( ! context[17] )
      continue;
    // closed e.new#6 as range 7
    context[19] = refalrts::tvar_left( context[18], context[15], context[16] );
    if( ! context[19] )
      continue;
    // closed e.new#8 as range 15
    do {
      // </0 & Include:1/4 t.ErrorList#2/5 (/9 e.Tokens#1/7 )/10 (/11 # TkCompound/17 t.FilePos#3/18 e.FileName#3/15 )/12 (/13 # TkSemicolon/22 t.SemicolonPos#3/23 )/14 >/1
      context[20] = 0;
      context[21] = 0;
      if( ! refalrts::brackets_term( context[20], context[21], context[13] ) )
        continue;
      context[22] = refalrts::ident_left( identifiers[ident_TkSemicolon], context[20], context[21] );
      if( ! context[22] )
        continue;
      // closed e.Tokens#1 as range 7
      // closed e.FileName#3 as range 15
      context[24] = refalrts::tvar_left( context[23], context[20], context[21] );
      if( ! context[24] )
        continue;
      if( ! refalrts::empty_seq( context[20], context[21] ) )
        continue;
      //DEBUG: t.ErrorList#2: 5
      //DEBUG: t.FilePos#3: 18
      //DEBUG: e.Tokens#1: 7
      //DEBUG: e.FileName#3: 15
      //DEBUG: t.SemicolonPos#3: 23

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & Include:1/4 {REMOVED TILE} (/9 {REMOVED TILE} {REMOVED TILE} # TkSemicolon/22 t.SemicolonPos#3/23 )/14 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#2/5 } Tile{ HalfReuse: (/10 AsIs: (/11 Reuse: # Include/17 AsIs: t.FilePos#3/18 AsIs: e.FileName#3/15 AsIs: )/12 HalfReuse: )/13 } Tile{ AsIs: e.Tokens#1/7 } Tile{ ]] }
      refalrts::reinit_open_bracket(context[10]);
      refalrts::update_ident(context[17], identifiers[ident_Include]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::link_brackets( context[10], context[13] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_evar( res, context[10], context[13] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Include:1/4 t.ErrorList#2/5 (/9 e.Tokens#1/7 )/10 (/11 # TkCompound/17 t.FilePos#3/18 e.FileName#3/15 )/12 t.Unexpected#3/13 >/1
    // closed e.Tokens#1 as range 7
    // closed e.FileName#3 as range 15
    //DEBUG: t.ErrorList#2: 5
    //DEBUG: t.FilePos#3: 18
    //DEBUG: t.Unexpected#3: 13
    //DEBUG: e.Tokens#1: 7
    //DEBUG: e.FileName#3: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 AsIs: t.ErrorList#2/5 } Tile{ AsIs: t.Unexpected#3/13 HalfReuse: '\''/1 }";\'"/20 Tile{ HalfReuse: >/9 } Tile{ HalfReuse: (/10 AsIs: (/11 Reuse: # Include/17 AsIs: t.FilePos#3/18 AsIs: e.FileName#3/15 AsIs: )/12 } )/22 t.Unexpected#3/13/23 Tile{ AsIs: e.Tokens#1/7 } Tile{ ]] }
    refalrts::alloc_chars(vm, context[20], context[21], ";\'", 2);
    refalrts::alloc_close_bracket(vm, context[22]);
    refalrts::copy_evar(vm, context[23], context[24], context[13], context[14]);
    refalrts::update_name(context[4], functions[efunc_UnexpectedToken]);
    refalrts::reinit_char(context[1], '\'');
    refalrts::reinit_close_call(context[9]);
    refalrts::reinit_open_bracket(context[10]);
    refalrts::update_ident(context[17], identifiers[ident_Include]);
    refalrts::link_brackets( context[10], context[22] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[22], context[24] );
    res = refalrts::splice_evar( res, context[10], context[12] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[20], context[21] );
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

static refalrts::NativeReference nat_ref_gen_Include_B1("Include:1", 49629914U, 2709224338U, func_gen_Include_B1);


static refalrts::FnResult func_gen_Include_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & Include:1/15 Tile{ AsIs: t.ErrorList#2/13 } Tile{ AsIs: (/7 AsIs: e.Tokens#1/5 AsIs: )/8 } {*}/16 Tile{ AsIs: t.Token1#1/9 AsIs: t.Token2#1/11 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_Include_B1]);
  refalrts::alloc_unwrapped_closure(vm, context[16], context[4]);
  refalrts::reinit_closure_head(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
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

static refalrts::NativeReference nat_ref_gen_Include_A1("Include=1", 49629914U, 2709224338U, func_gen_Include_A1);


static refalrts::FnResult func_Include(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </14 [*]/15 & Include=1/16 (/17 Tile{ AsIs: e.Tokens#1/2 } )/18 Tile{ AsIs: t.Token1#1/10 AsIs: t.Token2#1/12 } {*}/19 Tile{ AsIs: </0 Reuse: & ClassicError/4 AsIs: t.ErrorList#1/5 AsIs: s.Mode#1/7 AsIs: t.Pos#1/8 }"$INCLUDE is extension"/20 >/22 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::alloc_closure_head(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_gen_Include_A1]);
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::alloc_close_bracket(vm, context[18]);
  refalrts::alloc_unwrapped_closure(vm, context[19], context[15]);
  refalrts::alloc_chars(vm, context[20], context[21], "$INCLUDE is extension", 21);
  refalrts::alloc_close_call(vm, context[22]);
  refalrts::update_name(context[4], functions[efunc_ClassicError]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[22] );
  refalrts::push_stack( vm, context[0] );
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

static refalrts::NativeReference nat_ref_Include("Include", 49629914U, 2709224338U, func_Include);


static refalrts::FnResult func_Function(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
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
    // </0 & Function/4 t.ErrorList#1/5 s.Mode#1/7 (/10 # TkEntry/12 t.EntryPos#1/13 )/11 (/19 # TkName/21 t.NamePos#1/22 e.Name#1/17 )/20 e.Tokens#1/15 >/1
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
    // closed e.Tokens#1 as range 15
    context[23] = refalrts::tvar_left( context[22], context[17], context[18] );
    if( ! context[23] )
      continue;
    // closed e.Name#1 as range 17
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: t.EntryPos#1: 13
    //DEBUG: s.Mode#1: 7
    //DEBUG: e.Tokens#1: 15
    //DEBUG: t.NamePos#1: 22
    //DEBUG: e.Name#1: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.NamePos#1/22 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </10 HalfReuse: & Function-AfterBlock/12 AsIs: t.EntryPos#1/13 HalfReuse: (/11 } Tile{ AsIs: e.Name#1/17 } Tile{ HalfReuse: )/19 Reuse: # GN-Entry/21 } Tile{ AsIs: </0 Reuse: & Block/4 AsIs: t.ErrorList#1/5 AsIs: s.Mode#1/7 } Tile{ AsIs: e.Tokens#1/15 } Tile{ HalfReuse: >/20 } Tile{ AsIs: >/1 ]] }
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
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[19], context[21] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Function/4 t.ErrorList#1/5 s.Mode#1/7 (/10 # TkName/12 t.Pos#1/13 e.Name#1/8 )/11 e.Tokens#1/2 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkName], context[12] ) )
      continue;
    // closed e.Name#1 as range 8
    // closed e.Tokens#1 as range 2
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: t.Pos#1: 13
    //DEBUG: s.Mode#1: 7
    //DEBUG: e.Name#1: 8
    //DEBUG: e.Tokens#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </10 HalfReuse: & Function-AfterBlock/12 AsIs: t.Pos#1/13 } (/15 Tile{ AsIs: e.Name#1/8 } Tile{ AsIs: )/11 } # GN-Local/16 Tile{ AsIs: </0 Reuse: & Block/4 AsIs: t.ErrorList#1/5 AsIs: s.Mode#1/7 } Tile{ AsIs: e.Tokens#1/2 } >/17 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[15]);
    refalrts::alloc_ident(vm, context[16], identifiers[ident_GNm_Local]);
    refalrts::alloc_close_call(vm, context[17]);
    refalrts::reinit_open_call(context[10]);
    refalrts::reinit_name(context[12], functions[efunc_Functionm_AfterBlock]);
    refalrts::update_name(context[4], functions[efunc_Block]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[15], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[10], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Function/4 t.new#7/5 s.new#8/7 (/10 # TkEntry/12 t.new#9/13 )/11 e.new#10/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_TkEntry], context[12] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[8], context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#10 as range 2
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

static refalrts::NativeReference nat_ref_Function("Function", 49629914U, 2709224338U, func_Function);


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

static refalrts::NativeReference nat_ref_Functionm_AfterBlock("Function-AfterBlock", 49629914U, 2709224338U, func_Functionm_AfterBlock);


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

static refalrts::NativeReference nat_ref_gen_Block_S2A1("Block$2=1", 49629914U, 2709224338U, func_gen_Block_S2A1);


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

static refalrts::NativeReference nat_ref_gen_Block_S2A1B1("Block$2=1:1", 49629914U, 2709224338U, func_gen_Block_S2A1B1);


static refalrts::FnResult func_Block(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
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
    // </0 & Block/4 t.new#5/5 s.new#6/7 (/8 s.new#7/12 e.new#8/10 t.new#9/13 )/9 e.new#10/2 >/1
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_term( context[10], context[11], context[8] ) )
      continue;
    // closed e.new#10 as range 2
    if( ! refalrts::svar_left( context[12], context[10], context[11] ) )
      continue;
    context[14] = refalrts::tvar_right( context[13], context[10], context[11] );
    if( ! context[14] )
      continue;
    // closed e.new#8 as range 10
    do {
      // </0 & Block/4 t.new#11/5 s.new#12/7 (/8 # TkOpenBlock/12 t.new#13/13 )/9 e.new#14/2 >/1
      if( ! refalrts::ident_term( identifiers[ident_TkOpenBlock], context[12] ) )
        continue;
      if( ! refalrts::empty_seq( context[10], context[11] ) )
        continue;
      // closed e.new#14 as range 2
      do {
        // </0 & Block/4 t.new#15/5 s.new#16/7 (/8 # TkOpenBlock/12 t.new#17/13 )/9 (/19 s.new#18/21 t.new#19/22 e.new#20/17 )/20 e.new#21/15 >/1
        context[15] = context[2];
        context[16] = context[3];
        context[17] = 0;
        context[18] = 0;
        context[19] = refalrts::brackets_left( context[17], context[18], context[15], context[16] );
        if( ! context[19] )
          continue;
        refalrts::bracket_pointers(context[19], context[20]);
        // closed e.new#21 as range 15
        if( ! refalrts::svar_left( context[21], context[17], context[18] ) )
          continue;
        context[23] = refalrts::tvar_left( context[22], context[17], context[18] );
        if( ! context[23] )
          continue;
        // closed e.new#20 as range 17
        do {
          // </0 & Block/4 t.ErrorList#1/5 s.Mode#1/7 (/8 # TkOpenBlock/12 t.OpenPos#1/13 )/9 (/19 # TkCloseBlock/21 t.ClosePos#1/22 )/20 e.Tokens#1/15 >/1
          if( ! refalrts::ident_term( identifiers[ident_TkCloseBlock], context[21] ) )
            continue;
          if( ! refalrts::empty_seq( context[17], context[18] ) )
            continue;
          // closed e.Tokens#1 as range 15
          //DEBUG: t.ErrorList#1: 5
          //DEBUG: t.OpenPos#1: 13
          //DEBUG: t.ClosePos#1: 22
          //DEBUG: s.Mode#1: 7
          //DEBUG: e.Tokens#1: 15

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.ClosePos#1/22 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & ClassicError/4 AsIs: t.ErrorList#1/5 AsIs: s.Mode#1/7 } Tile{ AsIs: t.OpenPos#1/13 HalfReuse: 'E'/9 HalfReuse: 'm'/19 HalfReuse: 'p'/21 }"ty function block"/24 Tile{ AsIs: >/1 } Tile{ AsIs: (/8 Reuse: # Sentences/12 } Tile{ AsIs: )/20 } Tile{ AsIs: e.Tokens#1/15 } Tile{ ]] }
          refalrts::alloc_chars(vm, context[24], context[25], "ty function block", 17);
          refalrts::update_name(context[4], functions[efunc_ClassicError]);
          refalrts::reinit_char(context[9], 'E');
          refalrts::reinit_char(context[19], 'm');
          refalrts::reinit_char(context[21], 'p');
          refalrts::update_ident(context[12], identifiers[ident_Sentences]);
          refalrts::link_brackets( context[8], context[20] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[15], context[16] );
          res = refalrts::splice_evar( res, context[20], context[20] );
          res = refalrts::splice_evar( res, context[8], context[12] );
          res = refalrts::splice_evar( res, context[1], context[1] );
          res = refalrts::splice_evar( res, context[24], context[25] );
          res = refalrts::splice_evar( res, context[13], context[21] );
          refalrts::splice_to_freelist_open( vm, context[7], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Block/4 t.ErrorList#1/5 s.Mode#1/7 (/8 # TkOpenBlock/12 t.OpenPos#1/13 )/9 (/19 # TkNativeCode/21 t.NativePos#1/22 e.Code#1/17 )/20 t.CloseBlock#1/26 e.Tokens#1/24 >/1
        context[24] = context[15];
        context[25] = context[16];
        if( ! refalrts::ident_term( identifiers[ident_TkNativeCode], context[21] ) )
          continue;
        // closed e.Code#1 as range 17
        context[27] = refalrts::tvar_left( context[26], context[24], context[25] );
        if( ! context[27] )
          continue;
        // closed e.Tokens#1 as range 24
        //DEBUG: t.ErrorList#1: 5
        //DEBUG: t.OpenPos#1: 13
        //DEBUG: t.NativePos#1: 22
        //DEBUG: s.Mode#1: 7
        //DEBUG: e.Code#1: 17
        //DEBUG: t.CloseBlock#1: 26
        //DEBUG: e.Tokens#1: 24

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.Mode#1/7 {REMOVED TILE} {REMOVED TILE} t.OpenPos#1/13 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & Block$2=1/28 Tile{ HalfReuse: s.Mode1 #7/21 AsIs: t.NativePos#1/22 } Tile{ AsIs: (/8 } Tile{ AsIs: e.Code#1/17 } Tile{ AsIs: )/9 AsIs: (/19 } Tile{ AsIs: e.Tokens#1/24 } Tile{ HalfReuse: )/12 } {*}/29 </30 [*]/31 & Block$2=1:1/32 Tile{ AsIs: t.ErrorList#1/5 } Tile{ HalfReuse: {*}/20 AsIs: t.CloseBlock#1/26 } >/33 Tile{ AsIs: >/1 ]] }
        refalrts::alloc_name(vm, context[28], functions[efunc_gen_Block_S2A1]);
        refalrts::alloc_unwrapped_closure(vm, context[29], context[4]);
        refalrts::alloc_open_call(vm, context[30]);
        refalrts::alloc_closure_head(vm, context[31]);
        refalrts::alloc_name(vm, context[32], functions[efunc_gen_Block_S2A1B1]);
        refalrts::alloc_close_call(vm, context[33]);
        refalrts::reinit_closure_head(context[4]);
        refalrts::reinit_svar( context[21], context[7] );
        refalrts::reinit_close_bracket(context[12]);
        refalrts::reinit_unwrapped_closure(context[20], context[31]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[33] );
        refalrts::push_stack( vm, context[30] );
        refalrts::link_brackets( context[19], context[12] );
        refalrts::link_brackets( context[8], context[9] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[33], context[33] );
        res = refalrts::splice_evar( res, context[20], context[27] );
        res = refalrts::splice_evar( res, context[5], context[6] );
        res = refalrts::splice_evar( res, context[29], context[32] );
        res = refalrts::splice_evar( res, context[12], context[12] );
        res = refalrts::splice_evar( res, context[24], context[25] );
        res = refalrts::splice_evar( res, context[9], context[19] );
        res = refalrts::splice_evar( res, context[17], context[18] );
        res = refalrts::splice_evar( res, context[8], context[8] );
        res = refalrts::splice_evar( res, context[21], context[23] );
        res = refalrts::splice_evar( res, context[28], context[28] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
        refalrts::wrap_closure( context[29] );
        refalrts::wrap_closure( context[20] );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Block/4 t.ErrorList#1/5 s.Mode#1/7 (/8 # TkOpenBlock/12 t.Pos#1/13 )/9 e.Tokens#1/2 >/1
      // closed e.Tokens#1 as range 2
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: t.Pos#1: 13
      //DEBUG: s.Mode#1: 7
      //DEBUG: e.Tokens#1: 2

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.Pos#1/13 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </9 } & Block-AfterSentence/15 s.Mode#1/7/16 Tile{ AsIs: (/8 HalfReuse: )/12 } Tile{ AsIs: </0 Reuse: & Sentence/4 AsIs: t.ErrorList#1/5 AsIs: s.Mode#1/7 } Tile{ AsIs: e.Tokens#1/2 } >/17 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_name(vm, context[15], functions[efunc_Blockm_AfterSentence]);
      refalrts::copy_stvar(vm, context[16], context[7]);
      refalrts::alloc_close_call(vm, context[17]);
      refalrts::reinit_open_call(context[9]);
      refalrts::reinit_close_bracket(context[12]);
      refalrts::update_name(context[4], functions[efunc_Sentence]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[9] );
      refalrts::push_stack( vm, context[17] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[17], context[17] );
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_evar( res, context[0], context[7] );
      res = refalrts::splice_evar( res, context[8], context[12] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[9], context[9] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Block/4 t.ErrorList#1/5 s.Mode#1/7 (/8 # TkRefal5Mode/12 t.Pos#1/17 s.NewMode#1/13 )/9 e.Tokens#1/2 >/1
    context[15] = context[10];
    context[16] = context[11];
    if( ! refalrts::svar_term( context[13], context[13] ) )
      continue;
    if( ! refalrts::ident_term( identifiers[ident_TkRefal5Mode], context[12] ) )
      continue;
    // closed e.Tokens#1 as range 2
    context[18] = refalrts::tvar_left( context[17], context[15], context[16] );
    if( ! context[18] )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: s.NewMode#1: 13
    //DEBUG: s.Mode#1: 7
    //DEBUG: e.Tokens#1: 2
    //DEBUG: t.Pos#1: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Mode#1/7 (/8 # TkRefal5Mode/12 t.Pos#1/17 s.NewMode#1/13 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Block/4 AsIs: t.ErrorList#1/5 } Tile{ HalfReuse: s.NewMode1 #13/9 AsIs: e.Tokens#1/2 AsIs: >/1 ]] }
    refalrts::reinit_svar( context[9], context[13] );
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

static refalrts::NativeReference nat_ref_Block("Block", 49629914U, 2709224338U, func_Block);


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

static refalrts::NativeReference nat_ref_gen_Blockm_AfterSentence_S1B1S6A1("Block-AfterSentence$1:1$6=1", 49629914U, 2709224338U, func_gen_Blockm_AfterSentence_S1B1S6A1);


static refalrts::FnResult func_gen_Blockm_AfterSentence_S1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
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
    // </0 & Block-AfterSentence$1:1/4 (/7 e.new#10/5 )/8 t.new#11/9 t.new#12/11 (/15 e.new#13/13 )/16 t.new#14/17 s.new#15/19 t.new#16/20 (/22 s.new#17/28 e.new#18/26 t.new#19/29 )/23 t.new#20/24 >/1
    context[26] = 0;
    context[27] = 0;
    if( ! refalrts::brackets_term( context[26], context[27], context[22] ) )
      continue;
    // closed e.new#10 as range 5
    // closed e.new#13 as range 13
    if( ! refalrts::svar_left( context[28], context[26], context[27] ) )
      continue;
    context[30] = refalrts::tvar_right( context[29], context[26], context[27] );
    if( ! context[30] )
      continue;
    // closed e.new#18 as range 26
    do {
      // </0 & Block-AfterSentence$1:1/4 (/7 e.Sentences#1/5 )/8 t.ErrorList#1/9 t.NextSentence#1/11 (/15 e.Tokens#1/13 )/16 t.Token2#1/17 s.Mode#1/19 t.Token1#1/20 (/22 # TkSemicolon/28 t.SemicolonPos#2/29 )/23 (/24 # TkRefal5Mode/33 t.ModePos#2/34 s.NewMode#2/36 )/25 >/1
      context[31] = 0;
      context[32] = 0;
      if( ! refalrts::brackets_term( context[31], context[32], context[24] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_TkSemicolon], context[28] ) )
        continue;
      context[33] = refalrts::ident_left( identifiers[ident_TkRefal5Mode], context[31], context[32] );
      if( ! context[33] )
        continue;
      if( ! refalrts::empty_seq( context[26], context[27] ) )
        continue;
      // closed e.Sentences#1 as range 5
      // closed e.Tokens#1 as range 13
      context[35] = refalrts::tvar_left( context[34], context[31], context[32] );
      if( ! context[35] )
        continue;
      if( ! refalrts::svar_left( context[36], context[31], context[32] ) )
        continue;
      if( ! refalrts::empty_seq( context[31], context[32] ) )
        continue;
      //DEBUG: t.ErrorList#1: 9
      //DEBUG: t.NextSentence#1: 11
      //DEBUG: t.Token2#1: 17
      //DEBUG: t.Token1#1: 20
      //DEBUG: t.SemicolonPos#2: 29
      //DEBUG: s.Mode#1: 19
      //DEBUG: e.Sentences#1: 5
      //DEBUG: e.Tokens#1: 13
      //DEBUG: t.ModePos#2: 34
      //DEBUG: s.NewMode#2: 36

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/16 t.Token2#1/17 s.Mode#1/19 t.Token1#1/20 {REMOVED TILE} {REMOVED TILE} (/24 # TkRefal5Mode/33 t.ModePos#2/34 s.NewMode#2/36 )/25 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </22 } Tile{ HalfReuse: & Block-AfterSentence/0 HalfReuse: s.NewMode2 #36/4 AsIs: (/7 AsIs: e.Sentences#1/5 AsIs: )/8 AsIs: t.ErrorList#1/9 AsIs: t.NextSentence#1/11 AsIs: (/15 } Tile{ AsIs: # TkSemicolon/28 AsIs: t.SemicolonPos#2/29 AsIs: )/23 } Tile{ AsIs: e.Tokens#1/13 } Tile{ AsIs: >/1 ]] }
      refalrts::reinit_open_call(context[22]);
      refalrts::reinit_name(context[0], functions[efunc_Blockm_AfterSentence]);
      refalrts::reinit_svar( context[4], context[36] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[22] );
      refalrts::link_brackets( context[15], context[23] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[28], context[23] );
      res = refalrts::splice_evar( res, context[0], context[15] );
      res = refalrts::splice_evar( res, context[22], context[22] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Block-AfterSentence$1:1/4 (/7 e.Sentences#1/5 )/8 t.ErrorList#1/9 t.NextSentence#1/11 (/15 e.Tokens#1/13 )/16 t.Token2#1/17 s.Mode#1/19 t.Token1#1/20 (/22 # TkRefal5Mode/28 t.Pos#2/33 s.NewMode#2/29 )/23 t.Token2#2/24 >/1
      context[31] = context[26];
      context[32] = context[27];
      if( ! refalrts::svar_term( context[29], context[29] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_TkRefal5Mode], context[28] ) )
        continue;
      // closed e.Sentences#1 as range 5
      // closed e.Tokens#1 as range 13
      context[34] = refalrts::tvar_left( context[33], context[31], context[32] );
      if( ! context[34] )
        continue;
      if( ! refalrts::empty_seq( context[31], context[32] ) )
        continue;
      //DEBUG: t.ErrorList#1: 9
      //DEBUG: t.NextSentence#1: 11
      //DEBUG: t.Token2#1: 17
      //DEBUG: t.Token1#1: 20
      //DEBUG: t.Token2#2: 24
      //DEBUG: s.NewMode#2: 29
      //DEBUG: s.Mode#1: 19
      //DEBUG: e.Sentences#1: 5
      //DEBUG: e.Tokens#1: 13
      //DEBUG: t.Pos#2: 33

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} (/15 {REMOVED TILE} {REMOVED TILE} t.Token2#1/17 s.Mode#1/19 t.Token1#1/20 (/22 # TkRefal5Mode/28 t.Pos#2/33 s.NewMode#2/29 )/23 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </16 } Tile{ HalfReuse: & Block-AfterSentence/0 HalfReuse: s.NewMode2 #29/4 AsIs: (/7 AsIs: e.Sentences#1/5 AsIs: )/8 AsIs: t.ErrorList#1/9 AsIs: t.NextSentence#1/11 } Tile{ AsIs: t.Token2#2/24 } Tile{ AsIs: e.Tokens#1/13 } Tile{ AsIs: >/1 ]] }
      refalrts::reinit_open_call(context[16]);
      refalrts::reinit_name(context[0], functions[efunc_Blockm_AfterSentence]);
      refalrts::reinit_svar( context[4], context[29] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[16] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      res = refalrts::splice_evar( res, context[0], context[12] );
      res = refalrts::splice_evar( res, context[16], context[16] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Block-AfterSentence$1:1/4 (/7 e.new#21/5 )/8 t.new#22/9 t.new#23/11 (/15 e.new#24/13 )/16 t.new#25/17 s.new#26/19 t.new#27/20 (/22 s.new#28/28 t.new#29/29 )/23 t.new#30/24 >/1
    if( ! refalrts::empty_seq( context[26], context[27] ) )
      continue;
    // closed e.new#21 as range 5
    // closed e.new#24 as range 13
    do {
      // </0 & Block-AfterSentence$1:1/4 (/7 e.Sentences#1/5 )/8 t.ErrorList#1/9 t.NextSentence#1/11 (/15 e.Tokens#1/13 )/16 t.Token2#1/17 s.Mode#1/19 t.Token1#1/20 (/22 # TkSemicolon/28 t.Pos1#2/29 )/23 (/24 # TkCloseBlock/33 t.Pos2#2/34 )/25 >/1
      context[31] = 0;
      context[32] = 0;
      if( ! refalrts::brackets_term( context[31], context[32], context[24] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_TkSemicolon], context[28] ) )
        continue;
      context[33] = refalrts::ident_left( identifiers[ident_TkCloseBlock], context[31], context[32] );
      if( ! context[33] )
        continue;
      // closed e.Sentences#1 as range 5
      // closed e.Tokens#1 as range 13
      context[35] = refalrts::tvar_left( context[34], context[31], context[32] );
      if( ! context[35] )
        continue;
      if( ! refalrts::empty_seq( context[31], context[32] ) )
        continue;
      //DEBUG: t.ErrorList#1: 9
      //DEBUG: t.NextSentence#1: 11
      //DEBUG: t.Token2#1: 17
      //DEBUG: t.Token1#1: 20
      //DEBUG: t.Pos1#2: 29
      //DEBUG: s.Mode#1: 19
      //DEBUG: e.Sentences#1: 5
      //DEBUG: e.Tokens#1: 13
      //DEBUG: t.Pos2#2: 34

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & Block-AfterSentence$1:1/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/16 t.Token2#1/17 s.Mode#1/19 t.Token1#1/20 (/22 # TkSemicolon/28 t.Pos1#2/29 )/23 {REMOVED TILE} t.Pos2#2/34 )/25 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/9 } Tile{ AsIs: (/24 Reuse: # Sentences/33 } Tile{ AsIs: e.Sentences#1/5 } Tile{ AsIs: t.NextSentence#1/11 HalfReuse: )/15 } Tile{ AsIs: e.Tokens#1/13 } Tile{ ]] }
      refalrts::update_ident(context[33], identifiers[ident_Sentences]);
      refalrts::reinit_close_bracket(context[15]);
      refalrts::link_brackets( context[24], context[15] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[11], context[15] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[24], context[33] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Block-AfterSentence$1:1/4 (/7 e.Sentences#1/5 )/8 t.ErrorList#1/9 t.NextSentence#1/11 (/15 e.Tokens#1/13 )/16 t.Token2#1/17 s.Mode#1/19 t.Token1#1/20 (/22 # TkCloseBlock/28 t.Pos#2/29 )/23 t.Token2#1/24 >/1
      if( ! refalrts::repeated_stvar_term( vm, context[24], context[17] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_TkCloseBlock], context[28] ) )
        continue;
      // closed e.Sentences#1 as range 5
      // closed e.Tokens#1 as range 13
      //DEBUG: t.ErrorList#1: 9
      //DEBUG: t.NextSentence#1: 11
      //DEBUG: t.Token2#1: 17
      //DEBUG: t.Token1#1: 20
      //DEBUG: t.Pos#2: 29
      //DEBUG: s.Mode#1: 19
      //DEBUG: e.Sentences#1: 5
      //DEBUG: e.Tokens#1: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & Block-AfterSentence$1:1/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} (/15 {REMOVED TILE} )/16 t.Token2#1/17 s.Mode#1/19 t.Token1#1/20 {REMOVED TILE} t.Pos#2/29 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/9 } Tile{ AsIs: (/22 Reuse: # Sentences/28 } Tile{ AsIs: e.Sentences#1/5 } Tile{ AsIs: t.NextSentence#1/11 } Tile{ AsIs: )/23 AsIs: t.Token2#1/24 } Tile{ AsIs: e.Tokens#1/13 } Tile{ ]] }
      refalrts::update_ident(context[28], identifiers[ident_Sentences]);
      refalrts::link_brackets( context[22], context[23] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[23], context[25] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[22], context[28] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Block-AfterSentence$1:1/4 (/7 e.Sentences#1/5 )/8 t.ErrorList#1/9 t.NextSentence#1/11 (/15 e.Tokens#1/13 )/16 t.Token2#1/17 s.Mode#1/19 t.Token1#1/20 (/22 # TkSemicolon/28 t.Pos#2/29 )/23 t.Token2#1/24 >/1
    if( ! refalrts::repeated_stvar_term( vm, context[24], context[17] ) )
      continue;
    if( ! refalrts::ident_term( identifiers[ident_TkSemicolon], context[28] ) )
      continue;
    // closed e.Sentences#1 as range 5
    // closed e.Tokens#1 as range 13
    //DEBUG: t.ErrorList#1: 9
    //DEBUG: t.NextSentence#1: 11
    //DEBUG: t.Token2#1: 17
    //DEBUG: t.Token1#1: 20
    //DEBUG: t.Pos#2: 29
    //DEBUG: s.Mode#1: 19
    //DEBUG: e.Sentences#1: 5
    //DEBUG: e.Tokens#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.Token2#1/17 s.Mode#1/19 t.Token1#1/20 {REMOVED TILE} {REMOVED TILE} t.Pos#2/29 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Block-AfterSentence/4 HalfReuse: s.Mode1 #19/7 } Tile{ AsIs: (/22 } Tile{ AsIs: e.Sentences#1/5 } Tile{ AsIs: t.NextSentence#1/11 HalfReuse: )/15 } Tile{ HalfReuse: </16 } Tile{ HalfReuse: & Sentence/8 AsIs: t.ErrorList#1/9 } Tile{ HalfReuse: s.Mode1 #19/23 AsIs: t.Token2#1/24 } Tile{ AsIs: e.Tokens#1/13 } Tile{ HalfReuse: >/28 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_Blockm_AfterSentence]);
    refalrts::reinit_svar( context[7], context[19] );
    refalrts::reinit_close_bracket(context[15]);
    refalrts::reinit_open_call(context[16]);
    refalrts::reinit_name(context[8], functions[efunc_Sentence]);
    refalrts::reinit_svar( context[23], context[19] );
    refalrts::reinit_close_call(context[28]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[28] );
    refalrts::push_stack( vm, context[16] );
    refalrts::link_brackets( context[22], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[28], context[28] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[23], context[25] );
    res = refalrts::splice_evar( res, context[8], context[10] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[11], context[15] );
    res = refalrts::splice_evar( res, context[5], context[6] );
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
  //RESULT: Tile{ [[ } </26 [*]/27 Tile{ HalfReuse: & Block-AfterSentence$1:1$6=1/0 HalfReuse: s.Mode1 #19/4 AsIs: (/7 AsIs: e.Sentences#1/5 AsIs: )/8 } Tile{ AsIs: t.NextSentence#1/11 } Tile{ AsIs: t.Token2#1/24 } Tile{ AsIs: (/15 AsIs: e.Tokens#1/13 AsIs: )/16 } {*}/28 </29 & UnexpectedToken/30 Tile{ AsIs: t.ErrorList#1/9 } Tile{ AsIs: t.Token1#1/22 }"\';\' or \'}\', skipped"/31 >/33 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[26]);
  refalrts::alloc_closure_head(vm, context[27]);
  refalrts::alloc_unwrapped_closure(vm, context[28], context[27]);
  refalrts::alloc_open_call(vm, context[29]);
  refalrts::alloc_name(vm, context[30], functions[efunc_UnexpectedToken]);
  refalrts::alloc_chars(vm, context[31], context[32], "\';\' or \'}\', skipped", 19);
  refalrts::alloc_close_call(vm, context[33]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Blockm_AfterSentence_S1B1S6A1]);
  refalrts::reinit_svar( context[4], context[19] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[26] );
  refalrts::push_stack( vm, context[33] );
  refalrts::push_stack( vm, context[29] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[31], context[33] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[28], context[30] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[24], context[25] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  refalrts::wrap_closure( context[28] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Blockm_AfterSentence_S1B1("Block-AfterSentence$1:1", 49629914U, 2709224338U, func_gen_Blockm_AfterSentence_S1B1);


static refalrts::FnResult func_Blockm_AfterSentence(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
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
    // </0 & Block-AfterSentence/4 s.Mode#1/5 (/8 e.Sentences#1/6 )/9 t.ErrorList#1/10 t.NextSentence#1/12 t.Token1#1/14 t.Token2#1/18 e.Tokens#1/16 >/1
    context[16] = context[2];
    context[17] = context[3];
    // closed e.Sentences#1 as range 6
    context[19] = refalrts::tvar_left( context[18], context[16], context[17] );
    if( ! context[19] )
      continue;
    // closed e.Tokens#1 as range 16
    //DEBUG: t.ErrorList#1: 10
    //DEBUG: t.NextSentence#1: 12
    //DEBUG: t.Token1#1: 14
    //DEBUG: s.Mode#1: 5
    //DEBUG: e.Sentences#1: 6
    //DEBUG: t.Token2#1: 18
    //DEBUG: e.Tokens#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & Block-AfterSentence$1:1/20 Tile{ AsIs: (/8 AsIs: e.Sentences#1/6 AsIs: )/9 AsIs: t.ErrorList#1/10 AsIs: t.NextSentence#1/12 } (/21 Tile{ AsIs: e.Tokens#1/16 } )/22 t.Token2#1/18/23 Tile{ AsIs: s.Mode#1/5 } t.Token1#1/14/25 {*}/27 Tile{ AsIs: t.Token1#1/14 AsIs: t.Token2#1/18 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_name(vm, context[20], functions[efunc_gen_Blockm_AfterSentence_S1B1]);
    refalrts::alloc_open_bracket(vm, context[21]);
    refalrts::alloc_close_bracket(vm, context[22]);
    refalrts::copy_evar(vm, context[23], context[24], context[18], context[19]);
    refalrts::copy_evar(vm, context[25], context[26], context[14], context[15]);
    refalrts::alloc_unwrapped_closure(vm, context[27], context[4]);
    refalrts::reinit_closure_head(context[4]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[14], context[19] );
    res = refalrts::splice_evar( res, context[25], context[27] );
    res = refalrts::splice_evar( res, context[5], context[5] );
    res = refalrts::splice_evar( res, context[22], context[24] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[21], context[21] );
    res = refalrts::splice_evar( res, context[8], context[13] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    refalrts::use( res );
    refalrts::wrap_closure( context[27] );
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

static refalrts::NativeReference nat_ref_Blockm_AfterSentence("Block-AfterSentence", 49629914U, 2709224338U, func_Blockm_AfterSentence);


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

static refalrts::NativeReference nat_ref_Sentence("Sentence", 49629914U, 2709224338U, func_Sentence);


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

static refalrts::NativeReference nat_ref_gen_SentenceTail_S1A3("SentenceTail$1=3", 49629914U, 2709224338U, func_gen_SentenceTail_S1A3);


static refalrts::FnResult func_gen_SentenceTail_S1A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </31 Tile{ HalfReuse: [*]/0 Reuse: & SentenceTail$1=3/4 AsIs: t.FirstPattern#1/5 AsIs: s.PartType#1/7 AsIs: t.FirstResult#1/8 } (/32 Tile{ AsIs: e.FirstBlocks#3/2 } )/33 Tile{ AsIs: t.NextPattern#2/10 AsIs: (/14 AsIs: e.ConditionsAndAssignments#2/12 AsIs: )/15 AsIs: t.LastResult#2/16 AsIs: (/20 AsIs: e.LastBlocks#2/18 AsIs: )/21 AsIs: (/24 AsIs: e.Tokens#2/22 AsIs: )/25 } {*}/34 </35 & AssignmentError/36 Tile{ AsIs: t.ErrorList#3/29 } Tile{ AsIs: s.Mode#1/26 } s.PartType#1/7/37 Tile{ AsIs: t.Pos#1/27 } >/38 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[31]);
  refalrts::alloc_open_bracket(vm, context[32]);
  refalrts::alloc_close_bracket(vm, context[33]);
  refalrts::alloc_unwrapped_closure(vm, context[34], context[0]);
  refalrts::alloc_open_call(vm, context[35]);
  refalrts::alloc_name(vm, context[36], functions[efunc_AssignmentError]);
  refalrts::copy_stvar(vm, context[37], context[7]);
  refalrts::alloc_close_call(vm, context[38]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_SentenceTail_S1A3]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[31] );
  refalrts::push_stack( vm, context[38] );
  refalrts::push_stack( vm, context[35] );
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

static refalrts::NativeReference nat_ref_gen_SentenceTail_S1A2("SentenceTail$1=2", 49629914U, 2709224338U, func_gen_SentenceTail_S1A2);


static refalrts::FnResult func_gen_SentenceTail_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </31 Tile{ HalfReuse: [*]/0 Reuse: & SentenceTail$1=2/4 AsIs: t.FirstPattern#1/5 AsIs: s.PartType#1/7 AsIs: t.FirstResult#1/8 } Tile{ AsIs: t.NextPattern#2/27 } (/32 Tile{ AsIs: e.ConditionsAndAssignments#2/19 } )/33 Tile{ AsIs: t.LastResult#2/29 AsIs: (/25 AsIs: e.LastBlocks#2/23 AsIs: )/26 HalfReuse: (/22 AsIs: e.Tokens#2/2 HalfReuse: )/1 } Tile{ AsIs: s.Mode#1/10 AsIs: t.Pos#1/11 HalfReuse: {*}/15 } </34 Tile{ HalfReuse: & CheckExceedBlocks/16 AsIs: t.ErrorList#2/17 HalfReuse: s.Mode1 #10/21 } Tile{ AsIs: e.FirstBlocks#1/13 } >/35 >/36 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[31]);
  refalrts::alloc_open_bracket(vm, context[32]);
  refalrts::alloc_close_bracket(vm, context[33]);
  refalrts::alloc_open_call(vm, context[34]);
  refalrts::alloc_close_call(vm, context[35]);
  refalrts::alloc_close_call(vm, context[36]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_SentenceTail_S1A2]);
  refalrts::reinit_open_bracket(context[22]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::reinit_unwrapped_closure(context[15], context[0]);
  refalrts::reinit_name(context[16], functions[efunc_CheckExceedBlocks]);
  refalrts::reinit_svar( context[21], context[10] );
  refalrts::push_stack( vm, context[36] );
  refalrts::push_stack( vm, context[31] );
  refalrts::push_stack( vm, context[35] );
  refalrts::push_stack( vm, context[34] );
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

static refalrts::NativeReference nat_ref_gen_SentenceTail_S1A1("SentenceTail$1=1", 49629914U, 2709224338U, func_gen_SentenceTail_S1A1);


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

static refalrts::NativeReference nat_ref_gen_SentenceTail_S2A1("SentenceTail$2=1", 49629914U, 2709224338U, func_gen_SentenceTail_S2A1);


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
    // </0 & SentenceTail/4 s.Mode#1/5 t.ErrorList#1/6 t.FirstPattern#1/8 s.PartType#1/10 t.Pos#1/11 t.FirstResult#1/13 (/17 e.FirstBlocks#1/15 )/18 (/23 # TkColon/25 t.ColonPos#1/26 )/24 e.Tokens#1/19 >/1
    context[19] = context[2];
    context[20] = context[3];
    context[21] = 0;
    context[22] = 0;
    context[23] = refalrts::brackets_left( context[21], context[22], context[19], context[20] );
    if( ! context[23] )
      continue;
    refalrts::bracket_pointers(context[23], context[24]);
    context[25] = refalrts::ident_left( identifiers[ident_TkColon], context[21], context[22] );
    if( ! context[25] )
      continue;
    // closed e.FirstBlocks#1 as range 15
    // closed e.Tokens#1 as range 19
    context[27] = refalrts::tvar_left( context[26], context[21], context[22] );
    if( ! context[27] )
      continue;
    if( ! refalrts::empty_seq( context[21], context[22] ) )
      continue;
    //DEBUG: t.ErrorList#1: 6
    //DEBUG: t.FirstPattern#1: 8
    //DEBUG: t.Pos#1: 11
    //DEBUG: t.FirstResult#1: 13
    //DEBUG: s.Mode#1: 5
    //DEBUG: s.PartType#1: 10
    //DEBUG: e.FirstBlocks#1: 15
    //DEBUG: e.Tokens#1: 19
    //DEBUG: t.ColonPos#1: 26

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.ColonPos#1/26 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & SentenceTail$1=1/28 Tile{ AsIs: t.FirstPattern#1/8 AsIs: s.PartType#1/10 } Tile{ AsIs: t.FirstResult#1/13 } Tile{ AsIs: s.Mode#1/5 } Tile{ AsIs: t.Pos#1/11 } Tile{ AsIs: (/17 AsIs: e.FirstBlocks#1/15 AsIs: )/18 HalfReuse: {*}/23 HalfReuse: </25 } & SentenceTail/29 s.Mode#1/5/30 </31 & SentencePart/32 Tile{ AsIs: t.ErrorList#1/6 } Tile{ HalfReuse: s.Mode1 #5/24 AsIs: e.Tokens#1/19 AsIs: >/1 } >/33 >/34 Tile{ ]] }
    refalrts::alloc_name(vm, context[28], functions[efunc_gen_SentenceTail_S1A1]);
    refalrts::alloc_name(vm, context[29], functions[efunc_SentenceTail]);
    refalrts::copy_stvar(vm, context[30], context[5]);
    refalrts::alloc_open_call(vm, context[31]);
    refalrts::alloc_name(vm, context[32], functions[efunc_SentencePart]);
    refalrts::alloc_close_call(vm, context[33]);
    refalrts::alloc_close_call(vm, context[34]);
    refalrts::reinit_closure_head(context[4]);
    refalrts::reinit_unwrapped_closure(context[23], context[4]);
    refalrts::reinit_open_call(context[25]);
    refalrts::reinit_svar( context[24], context[5] );
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
    res = refalrts::splice_evar( res, context[24], context[1] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[29], context[32] );
    res = refalrts::splice_evar( res, context[17], context[25] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[5], context[5] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[8], context[10] );
    res = refalrts::splice_evar( res, context[28], context[28] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    refalrts::wrap_closure( context[23] );
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
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & SentenceTail$2=1/19 Tile{ AsIs: t.Pattern#1/8 } Tile{ AsIs: t.Result#1/13 AsIs: (/17 } Tile{ AsIs: e.Tokens#1/2 } Tile{ AsIs: )/18 } {*}/20 </21 & CheckSentenceEnd/22 Tile{ AsIs: t.ErrorList#1/6 } Tile{ AsIs: s.Mode#1/5 } Tile{ AsIs: s.PartType#1/10 AsIs: t.Pos#1/11 } Tile{ AsIs: e.Blocks#1/15 } >/23 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[19], functions[efunc_gen_SentenceTail_S2A1]);
  refalrts::alloc_unwrapped_closure(vm, context[20], context[4]);
  refalrts::alloc_open_call(vm, context[21]);
  refalrts::alloc_name(vm, context[22], functions[efunc_CheckSentenceEnd]);
  refalrts::alloc_close_call(vm, context[23]);
  refalrts::reinit_closure_head(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[21] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[10], context[12] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[20], context[22] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[17] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  refalrts::use( res );
  refalrts::wrap_closure( context[20] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SentenceTail("SentenceTail", 49629914U, 2709224338U, func_SentenceTail);


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

static refalrts::NativeReference nat_ref_CheckExceedBlocks("CheckExceedBlocks", 49629914U, 2709224338U, func_CheckExceedBlocks);


static refalrts::FnResult func_DoCheckExceedBlocks(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
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
    // </0 & DoCheckExceedBlocks/4 s.Mode#1/5 t.ErrorList#1/6 (/10 e.ScannedBlocks#1/8 )/11 (/16 t.Pos#1/18 e.Body#1/14 )/17 e.RestBlocks#1/12 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    // closed e.ScannedBlocks#1 as range 8
    // closed e.RestBlocks#1 as range 12
    context[19] = refalrts::tvar_left( context[18], context[14], context[15] );
    if( ! context[19] )
      continue;
    // closed e.Body#1 as range 14
    //DEBUG: t.ErrorList#1: 6
    //DEBUG: s.Mode#1: 5
    //DEBUG: e.ScannedBlocks#1: 8
    //DEBUG: e.RestBlocks#1: 12
    //DEBUG: t.Pos#1: 18
    //DEBUG: e.Body#1: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoCheckExceedBlocks/4 AsIs: s.Mode#1/5 } </20 & ClassicError/21 Tile{ AsIs: t.ErrorList#1/6 } Tile{ HalfReuse: s.Mode1 #5/16 AsIs: t.Pos#1/18 }"Exceed block in this position"/22 >/24 Tile{ AsIs: (/10 AsIs: e.ScannedBlocks#1/8 HalfReuse: (/11 } Tile{ AsIs: e.Body#1/14 } )/25 Tile{ AsIs: )/17 AsIs: e.RestBlocks#1/12 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[20]);
    refalrts::alloc_name(vm, context[21], functions[efunc_ClassicError]);
    refalrts::alloc_chars(vm, context[22], context[23], "Exceed block in this position", 29);
    refalrts::alloc_close_call(vm, context[24]);
    refalrts::alloc_close_bracket(vm, context[25]);
    refalrts::reinit_svar( context[16], context[5] );
    refalrts::reinit_open_bracket(context[11]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[10], context[17] );
    refalrts::link_brackets( context[11], context[25] );
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[17];
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[22], context[24] );
    res = refalrts::splice_evar( res, context[16], context[19] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[20], context[21] );
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

static refalrts::NativeReference nat_ref_DoCheckExceedBlocks("DoCheckExceedBlocks", 49629914U, 2709224338U, func_DoCheckExceedBlocks);


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

static refalrts::NativeReference nat_ref_AssignmentError("AssignmentError", 49629914U, 2709224338U, func_AssignmentError);


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

static refalrts::NativeReference nat_ref_gen_CheckSentenceEnd_S1A2("CheckSentenceEnd$1=2", 49629914U, 2709224338U, func_gen_CheckSentenceEnd_S1A2);


static refalrts::FnResult func_gen_CheckSentenceEnd_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.Mode#1/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </16 Tile{ HalfReuse: [*]/0 Reuse: & CheckSentenceEnd$1=2/4 AsIs: (/7 AsIs: e.Body#1/5 AsIs: )/8 } {*}/17 </18 & CheckExceedBlocks/19 Tile{ AsIs: t.ErrorList#2/14 } Tile{ HalfReuse: s.Mode1 #9/12 AsIs: e.ExceedBlocks#1/10 HalfReuse: >/13 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[16]);
  refalrts::alloc_unwrapped_closure(vm, context[17], context[0]);
  refalrts::alloc_open_call(vm, context[18]);
  refalrts::alloc_name(vm, context[19], functions[efunc_CheckExceedBlocks]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_CheckSentenceEnd_S1A2]);
  refalrts::reinit_svar( context[12], context[9] );
  refalrts::reinit_close_call(context[13]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[18] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[17], context[19] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  refalrts::wrap_closure( context[17] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CheckSentenceEnd_S1A1("CheckSentenceEnd$1=1", 49629914U, 2709224338U, func_gen_CheckSentenceEnd_S1A1);


static refalrts::FnResult func_CheckSentenceEnd(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
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
    //RESULT: Tile{ [[ } </19 [*]/20 & CheckSentenceEnd$1=1/21 (/22 Tile{ AsIs: e.Body#1/13 } Tile{ AsIs: )/16 } s.Mode#1/7/23 (/24 Tile{ AsIs: e.ExceedBlocks#1/11 } )/25 {*}/26 Tile{ AsIs: </0 Reuse: & CheckMistakenAssign/4 AsIs: t.ErrorList#1/5 AsIs: s.Mode#1/7 AsIs: s.PartType#1/8 AsIs: t.Pos#1/9 HalfReuse: >/15 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_closure_head(vm, context[20]);
    refalrts::alloc_name(vm, context[21], functions[efunc_gen_CheckSentenceEnd_S1A1]);
    refalrts::alloc_open_bracket(vm, context[22]);
    refalrts::copy_stvar(vm, context[23], context[7]);
    refalrts::alloc_open_bracket(vm, context[24]);
    refalrts::alloc_close_bracket(vm, context[25]);
    refalrts::alloc_unwrapped_closure(vm, context[26], context[20]);
    refalrts::update_name(context[4], functions[efunc_CheckMistakenAssign]);
    refalrts::reinit_close_call(context[15]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[0] );
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
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    refalrts::wrap_closure( context[26] );
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

static refalrts::NativeReference nat_ref_CheckSentenceEnd("CheckSentenceEnd", 49629914U, 2709224338U, func_CheckSentenceEnd);


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

static refalrts::NativeReference nat_ref_CheckMistakenAssign("CheckMistakenAssign", 49629914U, 2709224338U, func_CheckMistakenAssign);


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

static refalrts::NativeReference nat_ref_SentencePart("SentencePart", 49629914U, 2709224338U, func_SentencePart);


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

static refalrts::NativeReference nat_ref_gen_SentencePartm_AfterPattern_B1S1A2("SentencePart-AfterPattern:1$1=2", 49629914U, 2709224338U, func_gen_SentencePartm_AfterPattern_B1S1A2);


static refalrts::FnResult func_gen_SentencePartm_AfterPattern_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 38 elems
  refalrts::Iter context[38];
  refalrts::zeros( context, 38 );
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
    // </0 & SentencePart-AfterPattern:1/4 t.new#9/10 t.new#10/12 s.new#11/14 (/17 e.new#12/15 )/18 t.new#13/19 (/7 s.new#14/9 t.new#15/21 )/8 >/1
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.new#12 as range 15
    do {
      // </0 & SentencePart-AfterPattern:1/4 t.Pattern#1/10 t.ErrorList#1/12 s.Mode#1/14 (/17 e.Tokens#1/15 )/18 t.NextToken#1/19 (/7 s.PartToken#2/9 t.Pos#2/21 )/8 >/1
      // closed e.Tokens#1 as range 15
      //DEBUG: t.Pattern#1: 10
      //DEBUG: t.ErrorList#1: 12
      //DEBUG: t.NextToken#1: 19
      //DEBUG: t.Pos#2: 21
      //DEBUG: s.Mode#1: 14
      //DEBUG: s.PartToken#2: 9
      //DEBUG: e.Tokens#1: 15
      //9: s.PartToken#2
      //10: t.Pattern#1
      //12: t.ErrorList#1
      //14: s.Mode#1
      //15: e.Tokens#1
      //19: t.NextToken#1
      //21: t.Pos#2

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[23]);
      refalrts::alloc_name(vm, context[25], functions[efunc_gen_SentencePartm_AfterPattern_B1S1C1]);
      refalrts::alloc_open_bracket(vm, context[26]);
      refalrts::alloc_ident(vm, context[27], identifiers[ident_TkComma]);
      refalrts::alloc_ident(vm, context[28], identifiers[ident_Condition]);
      refalrts::alloc_close_bracket(vm, context[29]);
      refalrts::alloc_open_bracket(vm, context[30]);
      refalrts::alloc_ident(vm, context[31], identifiers[ident_TkAssign]);
      refalrts::alloc_ident(vm, context[32], identifiers[ident_Assign]);
      refalrts::alloc_close_bracket(vm, context[33]);
      refalrts::alloc_close_call(vm, context[24]);
      refalrts::push_stack( vm, context[24] );
      refalrts::push_stack( vm, context[23] );
      res = refalrts::splice_elem( res, context[24] );
      refalrts::link_brackets( context[30], context[33] );
      res = refalrts::splice_elem( res, context[33] );
      res = refalrts::splice_elem( res, context[32] );
      res = refalrts::splice_elem( res, context[31] );
      res = refalrts::splice_elem( res, context[30] );
      refalrts::link_brackets( context[26], context[29] );
      res = refalrts::splice_elem( res, context[29] );
      res = refalrts::splice_elem( res, context[28] );
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
        // </23 & SentencePart-AfterPattern:1$1?1/27 e.Types-B#3/28 (/34 s.PartToken#2/36 s.PartType#3/37 )/35 e.Types-E#3/30 >/24
        context[25] = 0;
        context[26] = 0;
        context[27] = refalrts::call_left( context[25], context[26], context[23], context[24] );
        context[28] = 0;
        context[29] = 0;
        refalrts::start_e_loop(vm);
        do {
          context[30] = context[25];
          context[31] = context[26];
          context[32] = 0;
          context[33] = 0;
          context[34] = refalrts::brackets_left( context[32], context[33], context[30], context[31] );
          if( ! context[34] )
            continue;
          refalrts::bracket_pointers(context[34], context[35]);
          if( ! refalrts::repeated_stvar_left( vm, context[36], context[9], context[32], context[33] ) )
            continue;
          // closed e.Types-E#3 as range 30
          if( ! refalrts::svar_left( context[37], context[32], context[33] ) )
            continue;
          if( ! refalrts::empty_seq( context[32], context[33] ) )
            continue;
          //DEBUG: t.Pattern#1: 10
          //DEBUG: t.ErrorList#1: 12
          //DEBUG: t.NextToken#1: 19
          //DEBUG: t.Pos#2: 21
          //DEBUG: s.Mode#1: 14
          //DEBUG: s.PartToken#2: 9
          //DEBUG: e.Tokens#1: 15
          //DEBUG: e.Types-B#3: 28
          //DEBUG: e.Types-E#3: 30
          //DEBUG: s.PartType#3: 37

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/17 {REMOVED TILE} )/18 t.NextToken#1/19 {REMOVED TILE} s.PartToken#2/9 {REMOVED TILE} e.Types-B#3/28 (/34 s.PartToken#2/36 {REMOVED TILE} )/35 e.Types-E#3/30 {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } Tile{ HalfReuse: & SentencePart-AfterPattern:1$1=2/7 } Tile{ AsIs: t.Pattern#1/10 } Tile{ AsIs: s.PartType#3/37 } Tile{ AsIs: t.Pos#2/21 HalfReuse: {*}/8 AsIs: </23 Reuse: & Result/27 } Tile{ AsIs: t.ErrorList#1/12 AsIs: s.Mode#1/14 } Tile{ AsIs: e.Tokens#1/15 } Tile{ AsIs: >/24 AsIs: >/1 ]] }
          refalrts::reinit_closure_head(context[4]);
          refalrts::reinit_name(context[7], functions[efunc_gen_SentencePartm_AfterPattern_B1S1A2]);
          refalrts::reinit_unwrapped_closure(context[8], context[4]);
          refalrts::update_name(context[27], functions[efunc_Result]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[24] );
          refalrts::push_stack( vm, context[23] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[24];
          res = refalrts::splice_evar( res, context[15], context[16] );
          res = refalrts::splice_evar( res, context[12], context[14] );
          res = refalrts::splice_evar( res, context[21], context[27] );
          res = refalrts::splice_evar( res, context[37], context[37] );
          res = refalrts::splice_evar( res, context[10], context[11] );
          res = refalrts::splice_evar( res, context[7], context[7] );
          refalrts::splice_to_freelist_open( vm, context[4], res );
          refalrts::wrap_closure( context[8] );
          return refalrts::cSuccess;
        } while ( refalrts::open_evar_advance( context[28], context[29], context[25], context[26] ) );
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[23], context[24]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & SentencePart-AfterPattern:1/4 t.Pattern#1/10 t.ErrorList#1/12 s.Mode#1/14 (/17 e.Tokens#1/15 )/18 t.NextToken#1/19 (/7 s.EndOfPart#2/9 t.Pos#2/21 )/8 >/1
    // closed e.Tokens#1 as range 15
    //DEBUG: t.Pattern#1: 10
    //DEBUG: t.ErrorList#1: 12
    //DEBUG: t.NextToken#1: 19
    //DEBUG: t.Pos#2: 21
    //DEBUG: s.Mode#1: 14
    //DEBUG: s.EndOfPart#2: 9
    //DEBUG: e.Tokens#1: 15
    //9: s.EndOfPart#2
    //10: t.Pattern#1
    //12: t.ErrorList#1
    //14: s.Mode#1
    //15: e.Tokens#1
    //19: t.NextToken#1
    //21: t.Pos#2
    //28: s.EndOfPart#2

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_name(vm, context[25], functions[efunc_gen_SentencePartm_AfterPattern_B1S2C1]);
    refalrts::alloc_open_call(vm, context[26]);
    refalrts::alloc_name(vm, context[27], functions[efunc_OneOf]);
    refalrts::copy_stvar(vm, context[28], context[9]);
    refalrts::alloc_ident(vm, context[29], identifiers[ident_TkColon]);
    refalrts::alloc_ident(vm, context[30], identifiers[ident_TkSemicolon]);
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
      // </23 & SentencePart-AfterPattern:1$2?1/27 # True/28 >/24
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::call_left( context[25], context[26], context[23], context[24] );
      context[28] = refalrts::ident_left( identifiers[ident_True], context[25], context[26] );
      if( ! context[28] )
        continue;
      if( ! refalrts::empty_seq( context[25], context[26] ) )
        continue;
      //DEBUG: t.Pattern#1: 10
      //DEBUG: t.ErrorList#1: 12
      //DEBUG: t.NextToken#1: 19
      //DEBUG: t.Pos#2: 21
      //DEBUG: s.Mode#1: 14
      //DEBUG: s.EndOfPart#2: 9
      //DEBUG: e.Tokens#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Mode#1/14 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.NextToken#1/19 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: </23 Reuse: & SentencePart-AfterPattern/27 HalfReuse: s.Mode1 #14/28 HalfReuse: </24 HalfReuse: & EL-AddErrorAt/1 } Tile{ AsIs: t.ErrorList#1/12 } t.Pos#2/21/29"Missed \',\' or \'="/31 Tile{ HalfReuse: '\''/0 HalfReuse: >/4 AsIs: t.Pattern#1/10 } Tile{ AsIs: (/17 } # TkComma/33 t.Pos#2/21/34 Tile{ AsIs: )/18 } Tile{ AsIs: (/7 AsIs: s.EndOfPart#2/9 AsIs: t.Pos#2/21 AsIs: )/8 } Tile{ AsIs: e.Tokens#1/15 } >/36 Tile{ ]] }
      refalrts::copy_evar(vm, context[29], context[30], context[21], context[22]);
      refalrts::alloc_chars(vm, context[31], context[32], "Missed \',\' or \'=", 16);
      refalrts::alloc_ident(vm, context[33], identifiers[ident_TkComma]);
      refalrts::copy_evar(vm, context[34], context[35], context[21], context[22]);
      refalrts::alloc_close_call(vm, context[36]);
      refalrts::update_name(context[27], functions[efunc_SentencePartm_AfterPattern]);
      refalrts::reinit_svar( context[28], context[14] );
      refalrts::reinit_open_call(context[24]);
      refalrts::reinit_name(context[1], functions[efunc_ELm_AddErrorAt]);
      refalrts::reinit_char(context[0], '\'');
      refalrts::reinit_close_call(context[4]);
      refalrts::push_stack( vm, context[36] );
      refalrts::push_stack( vm, context[23] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[17], context[18] );
      refalrts::push_stack( vm, context[4] );
      refalrts::push_stack( vm, context[24] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[36], context[36] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[33], context[35] );
      res = refalrts::splice_evar( res, context[17], context[17] );
      res = refalrts::splice_evar( res, context[0], context[11] );
      res = refalrts::splice_evar( res, context[29], context[32] );
      res = refalrts::splice_evar( res, context[12], context[13] );
      res = refalrts::splice_evar( res, context[23], context[1] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[23], context[24]);
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

static refalrts::NativeReference nat_ref_gen_SentencePartm_AfterPattern_B1("SentencePart-AfterPattern:1", 49629914U, 2709224338U, func_gen_SentencePartm_AfterPattern_B1);


static refalrts::FnResult func_SentencePartm_AfterPattern(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & SentencePart-AfterPattern:1/12 Tile{ AsIs: t.Pattern#1/8 } Tile{ AsIs: t.ErrorList#1/6 } Tile{ AsIs: s.Mode#1/5 } (/13 Tile{ AsIs: e.Tokens#1/2 } )/14 Tile{ AsIs: t.NextToken#1/10 } {*}/15 t.NextToken#1/10/16 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[12], functions[efunc_gen_SentencePartm_AfterPattern_B1]);
  refalrts::alloc_open_bracket(vm, context[13]);
  refalrts::alloc_close_bracket(vm, context[14]);
  refalrts::alloc_unwrapped_closure(vm, context[15], context[4]);
  refalrts::copy_evar(vm, context[16], context[17], context[10], context[11]);
  refalrts::reinit_closure_head(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
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

static refalrts::NativeReference nat_ref_SentencePartm_AfterPattern("SentencePart-AfterPattern", 49629914U, 2709224338U, func_SentencePartm_AfterPattern);


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

static refalrts::NativeReference nat_ref_Pattern("Pattern", 49629914U, 2709224338U, func_Pattern);


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

static refalrts::NativeReference nat_ref_Result("Result", 49629914U, 2709224338U, func_Result);


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

static refalrts::NativeReference nat_ref_gen_Resultm_Blocks_S3A1("Result-Blocks$3=1", 49629914U, 2709224338U, func_gen_Resultm_Blocks_S3A1);


static refalrts::FnResult func_Resultm_Blocks(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 36 elems
  refalrts::Iter context[36];
  refalrts::zeros( context, 36 );
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
    // </0 & Result-Blocks/4 s.new#6/5 (/8 e.new#7/6 )/9 t.new#8/10 t.new#9/12 (/18 s.new#10/20 e.new#11/16 t.new#12/21 )/19 e.new#13/14 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_left( context[16], context[17], context[14], context[15] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    // closed e.new#7 as range 6
    // closed e.new#13 as range 14
    if( ! refalrts::svar_left( context[20], context[16], context[17] ) )
      continue;
    context[22] = refalrts::tvar_right( context[21], context[16], context[17] );
    if( ! context[22] )
      continue;
    // closed e.new#11 as range 16
    do {
      // </0 & Result-Blocks/4 s.Mode#1/5 (/8 e.Blocks#1/6 )/9 t.ErrorList#1/10 t.Result#1/12 (/18 # TkRefal5Mode/20 t.ModePos#1/25 s.NewMode#1/21 )/19 e.Tokens#1/14 >/1
      context[23] = context[16];
      context[24] = context[17];
      if( ! refalrts::svar_term( context[21], context[21] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_TkRefal5Mode], context[20] ) )
        continue;
      // closed e.Blocks#1 as range 6
      // closed e.Tokens#1 as range 14
      context[26] = refalrts::tvar_left( context[25], context[23], context[24] );
      if( ! context[26] )
        continue;
      if( ! refalrts::empty_seq( context[23], context[24] ) )
        continue;
      //DEBUG: t.ErrorList#1: 10
      //DEBUG: t.Result#1: 12
      //DEBUG: s.NewMode#1: 21
      //DEBUG: s.Mode#1: 5
      //DEBUG: e.Blocks#1: 6
      //DEBUG: e.Tokens#1: 14
      //DEBUG: t.ModePos#1: 25

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Mode#1/5 {REMOVED TILE} (/18 # TkRefal5Mode/20 t.ModePos#1/25 {REMOVED TILE} )/19 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Result-Blocks/4 } Tile{ AsIs: s.NewMode#1/21 } Tile{ AsIs: (/8 AsIs: e.Blocks#1/6 AsIs: )/9 AsIs: t.ErrorList#1/10 AsIs: t.Result#1/12 } Tile{ AsIs: e.Tokens#1/14 } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[9] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[8], context[13] );
      res = refalrts::splice_evar( res, context[21], context[21] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Result-Blocks/4 s.new#14/5 (/8 e.new#15/6 )/9 t.new#16/10 t.new#17/12 (/18 s.new#18/20 t.new#19/21 )/19 e.new#20/14 >/1
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;
    // closed e.new#15 as range 6
    // closed e.new#20 as range 14
    do {
      // </0 & Result-Blocks/4 s.new#21/5 (/8 e.new#22/6 )/9 t.new#23/10 t.new#24/12 (/18 # TkColon/20 t.new#25/21 )/19 (/27 s.new#26/29 e.new#27/25 t.new#28/30 )/28 e.new#29/23 >/1
      context[23] = context[14];
      context[24] = context[15];
      if( ! refalrts::ident_term( identifiers[ident_TkColon], context[20] ) )
        continue;
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[23], context[24] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      // closed e.new#22 as range 6
      // closed e.new#29 as range 23
      if( ! refalrts::svar_left( context[29], context[25], context[26] ) )
        continue;
      context[31] = refalrts::tvar_right( context[30], context[25], context[26] );
      if( ! context[31] )
        continue;
      // closed e.new#27 as range 25
      do {
        // </0 & Result-Blocks/4 s.Mode#1/5 (/8 e.Blocks#1/6 )/9 t.ErrorList#1/10 t.Result#1/12 (/18 # TkColon/20 t.ColonPos#1/21 )/19 (/27 # TkRefal5Mode/29 t.ModePos#1/34 s.NewMode#1/30 )/28 e.Tokens#1/23 >/1
        context[32] = context[25];
        context[33] = context[26];
        if( ! refalrts::svar_term( context[30], context[30] ) )
          continue;
        if( ! refalrts::ident_term( identifiers[ident_TkRefal5Mode], context[29] ) )
          continue;
        // closed e.Blocks#1 as range 6
        // closed e.Tokens#1 as range 23
        context[35] = refalrts::tvar_left( context[34], context[32], context[33] );
        if( ! context[35] )
          continue;
        if( ! refalrts::empty_seq( context[32], context[33] ) )
          continue;
        //DEBUG: t.ErrorList#1: 10
        //DEBUG: t.Result#1: 12
        //DEBUG: t.ColonPos#1: 21
        //DEBUG: s.NewMode#1: 30
        //DEBUG: s.Mode#1: 5
        //DEBUG: e.Blocks#1: 6
        //DEBUG: e.Tokens#1: 23
        //DEBUG: t.ModePos#1: 34

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.Mode#1/5 {REMOVED TILE} (/27 # TkRefal5Mode/29 t.ModePos#1/34 {REMOVED TILE} )/28 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & Result-Blocks/4 } Tile{ AsIs: s.NewMode#1/30 } Tile{ AsIs: (/8 AsIs: e.Blocks#1/6 AsIs: )/9 AsIs: t.ErrorList#1/10 AsIs: t.Result#1/12 AsIs: (/18 AsIs: # TkColon/20 AsIs: t.ColonPos#1/21 AsIs: )/19 } Tile{ AsIs: e.Tokens#1/23 } Tile{ AsIs: >/1 ]] }
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[18], context[19] );
        refalrts::link_brackets( context[8], context[9] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[23], context[24] );
        res = refalrts::splice_evar( res, context[8], context[19] );
        res = refalrts::splice_evar( res, context[30], context[30] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Result-Blocks/4 s.Mode#1/5 (/8 e.Blocks#1/6 )/9 t.ErrorList#1/10 t.Result#1/12 (/18 # TkColon/20 t.ColonPos#1/21 )/19 (/27 # TkOpenBlock/29 t.BlockPos#1/30 )/28 e.Tokens#1/23 >/1
      if( ! refalrts::ident_term( identifiers[ident_TkOpenBlock], context[29] ) )
        continue;
      if( ! refalrts::empty_seq( context[25], context[26] ) )
        continue;
      // closed e.Blocks#1 as range 6
      // closed e.Tokens#1 as range 23
      //DEBUG: t.ErrorList#1: 10
      //DEBUG: t.Result#1: 12
      //DEBUG: t.ColonPos#1: 21
      //DEBUG: t.BlockPos#1: 30
      //DEBUG: s.Mode#1: 5
      //DEBUG: e.Blocks#1: 6
      //DEBUG: e.Tokens#1: 23

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </32 Tile{ HalfReuse: [*]/0 Reuse: & Result-Blocks$3=1/4 AsIs: s.Mode#1/5 AsIs: (/8 AsIs: e.Blocks#1/6 AsIs: )/9 } Tile{ AsIs: t.ColonPos#1/21 } Tile{ AsIs: t.Result#1/12 HalfReuse: {*}/18 HalfReuse: </20 } & Block/33 Tile{ AsIs: t.ErrorList#1/10 } Tile{ HalfReuse: s.Mode1 #5/19 AsIs: (/27 AsIs: # TkOpenBlock/29 AsIs: t.BlockPos#1/30 AsIs: )/28 AsIs: e.Tokens#1/23 AsIs: >/1 } >/34 Tile{ ]] }
      refalrts::alloc_open_call(vm, context[32]);
      refalrts::alloc_name(vm, context[33], functions[efunc_Block]);
      refalrts::alloc_close_call(vm, context[34]);
      refalrts::reinit_closure_head(context[0]);
      refalrts::update_name(context[4], functions[efunc_gen_Resultm_Blocks_S3A1]);
      refalrts::reinit_unwrapped_closure(context[18], context[0]);
      refalrts::reinit_open_call(context[20]);
      refalrts::reinit_svar( context[19], context[5] );
      refalrts::push_stack( vm, context[34] );
      refalrts::push_stack( vm, context[32] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[20] );
      refalrts::link_brackets( context[27], context[28] );
      refalrts::link_brackets( context[8], context[9] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[34], context[34] );
      res = refalrts::splice_evar( res, context[19], context[1] );
      res = refalrts::splice_evar( res, context[10], context[11] );
      res = refalrts::splice_evar( res, context[33], context[33] );
      res = refalrts::splice_evar( res, context[12], context[20] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[0], context[9] );
      res = refalrts::splice_evar( res, context[32], context[32] );
      refalrts::use( res );
      refalrts::wrap_closure( context[18] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Result-Blocks/4 s.Mode#1/5 (/8 e.Blocks#1/6 )/9 t.ErrorList#1/10 t.Result#1/12 (/18 # TkOpenBlock/20 t.BlockPos#1/21 )/19 e.Tokens#1/14 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkOpenBlock], context[20] ) )
      continue;
    // closed e.Blocks#1 as range 6
    // closed e.Tokens#1 as range 14
    //DEBUG: t.ErrorList#1: 10
    //DEBUG: t.Result#1: 12
    //DEBUG: t.BlockPos#1: 21
    //DEBUG: s.Mode#1: 5
    //DEBUG: e.Blocks#1: 6
    //DEBUG: e.Tokens#1: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Result-Blocks/4 AsIs: s.Mode#1/5 AsIs: (/8 AsIs: e.Blocks#1/6 AsIs: )/9 } </23 & EL-AddErrorAt/24 Tile{ AsIs: t.ErrorList#1/10 } t.BlockPos#1/21/25"Missed \':\'"/27 >/29 Tile{ AsIs: t.Result#1/12 } (/30 # TkColon/31 t.BlockPos#1/21/32 )/34 Tile{ AsIs: (/18 AsIs: # TkOpenBlock/20 AsIs: t.BlockPos#1/21 AsIs: )/19 AsIs: e.Tokens#1/14 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_name(vm, context[24], functions[efunc_ELm_AddErrorAt]);
    refalrts::copy_evar(vm, context[25], context[26], context[21], context[22]);
    refalrts::alloc_chars(vm, context[27], context[28], "Missed \':\'", 10);
    refalrts::alloc_close_call(vm, context[29]);
    refalrts::alloc_open_bracket(vm, context[30]);
    refalrts::alloc_ident(vm, context[31], identifiers[ident_TkColon]);
    refalrts::copy_evar(vm, context[32], context[33], context[21], context[22]);
    refalrts::alloc_close_bracket(vm, context[34]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[18], context[19] );
    refalrts::link_brackets( context[30], context[34] );
    refalrts::push_stack( vm, context[29] );
    refalrts::push_stack( vm, context[23] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[18];
    res = refalrts::splice_evar( res, context[30], context[34] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[25], context[29] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[23], context[24] );
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

static refalrts::NativeReference nat_ref_Resultm_Blocks("Result-Blocks", 49629914U, 2709224338U, func_Resultm_Blocks);


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

static refalrts::NativeReference nat_ref_Expression("Expression", 49629914U, 2709224338U, func_Expression);


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

static refalrts::NativeReference nat_ref_TokenChain("TokenChain", 49629914U, 2709224338U, func_TokenChain);


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

static refalrts::NativeReference nat_ref_gen_DoTokenChain_B1S6A2("DoTokenChain:1$6=2", 49629914U, 2709224338U, func_gen_DoTokenChain_B1S6A2);


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
    // </0 & DoTokenChain:1$6=2:1/4 t.ErrorList#3/5 (/9 # TkCloseBracket/11 t.ClosePos#4/12 )/10 e.Tokens#4/2 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkCloseBracket], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    // closed e.Tokens#4 as range 2
    //DEBUG: t.ErrorList#3: 5
    //DEBUG: t.ClosePos#4: 12
    //DEBUG: e.Tokens#4: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoTokenChain:1$6=2:1/4 {REMOVED TILE} (/9 # TkCloseBracket/11 t.ClosePos#4/12 )/10 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#3/5 } Tile{ AsIs: e.Tokens#4/2 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[2], context[3] );
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

static refalrts::NativeReference nat_ref_gen_DoTokenChain_B1S6A2B1("DoTokenChain:1$6=2:1", 49629914U, 2709224338U, func_gen_DoTokenChain_B1S6A2B1);


static refalrts::FnResult func_gen_DoTokenChain_B1S6A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </17 Tile{ HalfReuse: [*]/0 Reuse: & DoTokenChain:1$6=2/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 AsIs: (/9 AsIs: e.Collected#1/7 AsIs: )/10 } Tile{ AsIs: (/15 AsIs: e.BracketTerms#3/13 AsIs: )/16 } {*}/18 </19 [*]/20 & DoTokenChain:1$6=2:1/21 Tile{ AsIs: t.ErrorList#3/11 } {*}/22 Tile{ AsIs: e.Tokens#3/2 } >/23 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[17]);
  refalrts::alloc_unwrapped_closure(vm, context[18], context[0]);
  refalrts::alloc_open_call(vm, context[19]);
  refalrts::alloc_closure_head(vm, context[20]);
  refalrts::alloc_name(vm, context[21], functions[efunc_gen_DoTokenChain_B1S6A2B1]);
  refalrts::alloc_unwrapped_closure(vm, context[22], context[20]);
  refalrts::alloc_close_call(vm, context[23]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_DoTokenChain_B1S6A2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[19] );
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

static refalrts::NativeReference nat_ref_gen_DoTokenChain_B1S6A1("DoTokenChain:1$6=1", 49629914U, 2709224338U, func_gen_DoTokenChain_B1S6A1);


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

static refalrts::NativeReference nat_ref_gen_DoTokenChain_B1S7A1("DoTokenChain:1$7=1", 49629914U, 2709224338U, func_gen_DoTokenChain_B1S7A1);


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

static refalrts::NativeReference nat_ref_gen_DoTokenChain_B1S9A3("DoTokenChain:1$9=3", 49629914U, 2709224338U, func_gen_DoTokenChain_B1S9A3);


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
    // </0 & DoTokenChain:1$9=3:1/4 t.ErrorList#4/5 (/9 # TkCloseADT/11 t.ClosePos#5/12 )/10 e.Tokens#5/2 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkCloseADT], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    // closed e.Tokens#5 as range 2
    //DEBUG: t.ErrorList#4: 5
    //DEBUG: t.ClosePos#5: 12
    //DEBUG: e.Tokens#5: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoTokenChain:1$9=3:1/4 {REMOVED TILE} (/9 # TkCloseADT/11 t.ClosePos#5/12 )/10 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#4/5 } Tile{ AsIs: e.Tokens#5/2 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[2], context[3] );
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

static refalrts::NativeReference nat_ref_gen_DoTokenChain_B1S9A3B1("DoTokenChain:1$9=3:1", 49629914U, 2709224338U, func_gen_DoTokenChain_B1S9A3B1);


static refalrts::FnResult func_gen_DoTokenChain_B1S9A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </23 Tile{ HalfReuse: [*]/0 Reuse: & DoTokenChain:1$9=3/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 AsIs: (/9 AsIs: e.Collected#1/7 AsIs: )/10 AsIs: t.OpenPos#2/11 AsIs: (/15 AsIs: e.FuncName#2/13 AsIs: )/16 } Tile{ AsIs: (/21 AsIs: e.BracketTerms#4/19 AsIs: )/22 } {*}/24 </25 [*]/26 & DoTokenChain:1$9=3:1/27 Tile{ AsIs: t.ErrorList#4/17 } {*}/28 Tile{ AsIs: e.Tokens#4/2 } >/29 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[23]);
  refalrts::alloc_unwrapped_closure(vm, context[24], context[0]);
  refalrts::alloc_open_call(vm, context[25]);
  refalrts::alloc_closure_head(vm, context[26]);
  refalrts::alloc_name(vm, context[27], functions[efunc_gen_DoTokenChain_B1S9A3B1]);
  refalrts::alloc_unwrapped_closure(vm, context[28], context[26]);
  refalrts::alloc_close_call(vm, context[29]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_DoTokenChain_B1S9A3]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[29] );
  refalrts::push_stack( vm, context[25] );
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

static refalrts::NativeReference nat_ref_gen_DoTokenChain_B1S9A2("DoTokenChain:1$9=2", 49629914U, 2709224338U, func_gen_DoTokenChain_B1S9A2);


static refalrts::FnResult func_gen_DoTokenChain_B1S9A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </23 Tile{ HalfReuse: [*]/0 Reuse: & DoTokenChain:1$9=2/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 AsIs: (/9 AsIs: e.Collected#1/7 AsIs: )/10 AsIs: t.OpenPos#2/11 AsIs: (/15 AsIs: e.FuncName#2/13 AsIs: )/16 HalfReuse: {*}/19 } </24 Tile{ HalfReuse: & TokenChain/20 AsIs: t.ErrorList#3/21 } s.Mode#1/5/25 s.Kind#1/6/26 Tile{ AsIs: e.Tokens#1/17 } >/27 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[23]);
  refalrts::alloc_open_call(vm, context[24]);
  refalrts::copy_stvar(vm, context[25], context[5]);
  refalrts::copy_stvar(vm, context[26], context[6]);
  refalrts::alloc_close_call(vm, context[27]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_DoTokenChain_B1S9A2]);
  refalrts::reinit_unwrapped_closure(context[19], context[0]);
  refalrts::reinit_name(context[20], functions[efunc_TokenChain]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[24] );
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

static refalrts::NativeReference nat_ref_gen_DoTokenChain_B1S9A1("DoTokenChain:1$9=1", 49629914U, 2709224338U, func_gen_DoTokenChain_B1S9A1);


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

static refalrts::NativeReference nat_ref_gen_DoTokenChain_B1S11A1("DoTokenChain:1$11=1", 49629914U, 2709224338U, func_gen_DoTokenChain_B1S11A1);


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

static refalrts::NativeReference nat_ref_gen_DoTokenChain_B1S11A1B1S2A1("DoTokenChain:1$11=1:1$2=1", 49629914U, 2709224338U, func_gen_DoTokenChain_B1S11A1B1S2A1);


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

static refalrts::NativeReference nat_ref_gen_DoTokenChain_B1S11A1B1S2A1B1("DoTokenChain:1$11=1:1$2=1:1", 49629914U, 2709224338U, func_gen_DoTokenChain_B1S11A1B1S2A1B1);


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

  // </0 & DoTokenChain:1$11=1:1/4 t.ErrorList#1/5 t.Pos#2/7 s.Mode#3/9 e.Tokens#3/2 >/1
  // closed e.Tokens#3 as range 2
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: t.Pos#2: 7
  //DEBUG: s.Mode#3: 9
  //DEBUG: e.Tokens#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </10 Tile{ HalfReuse: [*]/0 Reuse: & DoTokenChain:1$11=1:1$2=1/4 AsIs: t.ErrorList#1/5 AsIs: t.Pos#2/7 } (/11 Tile{ AsIs: e.Tokens#3/2 } )/12 {*}/13 </14 & DoTokenChain:1$11=1:1$2=1:1/15 Tile{ AsIs: s.Mode#3/9 } >/16 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_close_bracket(vm, context[12]);
  refalrts::alloc_unwrapped_closure(vm, context[13], context[0]);
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_DoTokenChain_B1S11A1B1S2A1B1]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_DoTokenChain_B1S11A1B1S2A1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[14] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  refalrts::use( res );
  refalrts::wrap_closure( context[13] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoTokenChain_B1S11A1B1("DoTokenChain:1$11=1:1", 49629914U, 2709224338U, func_gen_DoTokenChain_B1S11A1B1);


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

static refalrts::NativeReference nat_ref_gen_DoTokenChain_B1S12A3("DoTokenChain:1$12=3", 49629914U, 2709224338U, func_gen_DoTokenChain_B1S12A3);


static refalrts::FnResult func_gen_DoTokenChain_B1S12A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </18 Tile{ HalfReuse: [*]/0 Reuse: & DoTokenChain:1$12=3/4 AsIs: s.Mode#1/5 AsIs: (/8 AsIs: e.Collected#1/6 AsIs: )/9 } {*}/19 </20 & Block/21 Tile{ AsIs: t.ErrorList#4/16 } s.Mode#1/5/22 (/23 # TkOpenBlock/24 Tile{ AsIs: t.Pos#2/10 HalfReuse: )/14 AsIs: e.Tokens#1/12 HalfReuse: >/15 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[18]);
  refalrts::alloc_unwrapped_closure(vm, context[19], context[0]);
  refalrts::alloc_open_call(vm, context[20]);
  refalrts::alloc_name(vm, context[21], functions[efunc_Block]);
  refalrts::copy_stvar(vm, context[22], context[5]);
  refalrts::alloc_open_bracket(vm, context[23]);
  refalrts::alloc_ident(vm, context[24], identifiers[ident_TkOpenBlock]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_DoTokenChain_B1S12A3]);
  refalrts::reinit_close_bracket(context[14]);
  refalrts::reinit_close_call(context[15]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[20] );
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

static refalrts::NativeReference nat_ref_gen_DoTokenChain_B1S12A2("DoTokenChain:1$12=2", 49629914U, 2709224338U, func_gen_DoTokenChain_B1S12A2);


static refalrts::FnResult func_gen_DoTokenChain_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
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
    // </0 & DoTokenChain:1/4 s.new#7/5 s.new#8/6 t.new#9/7 (/11 e.new#10/9 )/12 (/15 e.new#11/13 )/16 (/17 s.new#12/21 t.new#13/22 e.new#14/19 )/18 >/1
    context[19] = 0;
    context[20] = 0;
    if( ! refalrts::brackets_term( context[19], context[20], context[17] ) )
      continue;
    // closed e.new#10 as range 9
    // closed e.new#11 as range 13
    if( ! refalrts::svar_left( context[21], context[19], context[20] ) )
      continue;
    context[23] = refalrts::tvar_left( context[22], context[19], context[20] );
    if( ! context[23] )
      continue;
    // closed e.new#14 as range 19
    do {
      // </0 & DoTokenChain:1/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/9 )/12 (/15 e.Tokens#1/13 )/16 (/17 # TkName/21 t.Pos#2/22 e.Name#2/19 )/18 >/1
      if( ! refalrts::ident_term( identifiers[ident_TkName], context[21] ) )
        continue;
      // closed e.Collected#1 as range 9
      // closed e.Tokens#1 as range 13
      // closed e.Name#2 as range 19
      //DEBUG: t.ErrorList#1: 7
      //DEBUG: t.Pos#2: 22
      //DEBUG: s.Mode#1: 5
      //DEBUG: s.Kind#1: 6
      //DEBUG: e.Collected#1: 9
      //DEBUG: e.Tokens#1: 13
      //DEBUG: e.Name#2: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.Pos#2/22 {REMOVED TILE} )/18 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 AsIs: t.ErrorList#1/7 AsIs: (/11 AsIs: e.Collected#1/9 HalfReuse: (/12 HalfReuse: # Symbol/15 } Tile{ Reuse: # Identifier/21 } Tile{ AsIs: e.Name#2/19 } Tile{ AsIs: )/16 HalfReuse: )/17 } Tile{ AsIs: e.Tokens#1/13 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_DoTokenChain]);
      refalrts::reinit_open_bracket(context[12]);
      refalrts::reinit_ident(context[15], identifiers[ident_Symbol]);
      refalrts::update_ident(context[21], identifiers[ident_Identifier]);
      refalrts::reinit_close_bracket(context[17]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[11], context[17] );
      refalrts::link_brackets( context[12], context[16] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[21], context[21] );
      refalrts::splice_to_freelist_open( vm, context[15], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoTokenChain:1/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/9 )/12 (/15 e.Tokens#1/13 )/16 (/17 # TkCompound/21 t.Pos#2/22 e.Symbols#2/19 )/18 >/1
      if( ! refalrts::ident_term( identifiers[ident_TkCompound], context[21] ) )
        continue;
      // closed e.Collected#1 as range 9
      // closed e.Tokens#1 as range 13
      // closed e.Symbols#2 as range 19
      //DEBUG: t.ErrorList#1: 7
      //DEBUG: t.Pos#2: 22
      //DEBUG: s.Mode#1: 5
      //DEBUG: s.Kind#1: 6
      //DEBUG: e.Collected#1: 9
      //DEBUG: e.Tokens#1: 13
      //DEBUG: e.Symbols#2: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.Pos#2/22 {REMOVED TILE} )/18 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 AsIs: t.ErrorList#1/7 AsIs: (/11 AsIs: e.Collected#1/9 HalfReuse: (/12 HalfReuse: # Symbol/15 } Tile{ Reuse: # Identifier/21 } Tile{ AsIs: e.Symbols#2/19 } Tile{ AsIs: )/16 HalfReuse: )/17 } Tile{ AsIs: e.Tokens#1/13 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_DoTokenChain]);
      refalrts::reinit_open_bracket(context[12]);
      refalrts::reinit_ident(context[15], identifiers[ident_Symbol]);
      refalrts::update_ident(context[21], identifiers[ident_Identifier]);
      refalrts::reinit_close_bracket(context[17]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[11], context[17] );
      refalrts::link_brackets( context[12], context[16] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[21], context[21] );
      refalrts::splice_to_freelist_open( vm, context[15], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoTokenChain:1/4 s.new#15/5 s.new#16/6 t.new#17/7 (/11 e.new#18/9 )/12 (/15 e.new#19/13 )/16 (/17 s.new#20/21 t.new#21/22 s.new#22/26 e.new#23/24 )/18 >/1
      context[24] = context[19];
      context[25] = context[20];
      // closed e.new#18 as range 9
      // closed e.new#19 as range 13
      if( ! refalrts::svar_left( context[26], context[24], context[25] ) )
        continue;
      // closed e.new#23 as range 24
      do {
        // </0 & DoTokenChain:1/4 s.new#24/5 s.new#25/6 t.new#26/7 (/11 e.new#27/9 )/12 (/15 e.new#28/13 )/16 (/17 s.new#29/21 t.new#30/22 s.new#31/26 )/18 >/1
        if( ! refalrts::empty_seq( context[24], context[25] ) )
          continue;
        // closed e.new#27 as range 9
        // closed e.new#28 as range 13
        do {
          // </0 & DoTokenChain:1/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/9 )/12 (/15 e.Tokens#1/13 )/16 (/17 # TkMacroDigit/21 t.Pos#2/22 s.Number#2/26 )/18 >/1
          if( ! refalrts::ident_term( identifiers[ident_TkMacroDigit], context[21] ) )
            continue;
          // closed e.Collected#1 as range 9
          // closed e.Tokens#1 as range 13
          //DEBUG: t.ErrorList#1: 7
          //DEBUG: t.Pos#2: 22
          //DEBUG: s.Mode#1: 5
          //DEBUG: s.Kind#1: 6
          //DEBUG: s.Number#2: 26
          //DEBUG: e.Collected#1: 9
          //DEBUG: e.Tokens#1: 13

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} )/16 {REMOVED TILE} {REMOVED TILE} t.Pos#2/22 {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 AsIs: t.ErrorList#1/7 AsIs: (/11 AsIs: e.Collected#1/9 HalfReuse: (/12 HalfReuse: # Symbol/15 } Tile{ Reuse: # Number/21 } Tile{ AsIs: s.Number#2/26 AsIs: )/18 HalfReuse: )/1 } Tile{ AsIs: e.Tokens#1/13 } Tile{ HalfReuse: >/17 } Tile{ ]] }
          refalrts::update_name(context[4], functions[efunc_DoTokenChain]);
          refalrts::reinit_open_bracket(context[12]);
          refalrts::reinit_ident(context[15], identifiers[ident_Symbol]);
          refalrts::update_ident(context[21], identifiers[ident_Number]);
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
          res = refalrts::splice_evar( res, context[13], context[14] );
          res = refalrts::splice_evar( res, context[26], context[1] );
          res = refalrts::splice_evar( res, context[21], context[21] );
          refalrts::splice_to_freelist_open( vm, context[15], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & DoTokenChain:1/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/9 )/12 (/15 e.Tokens#1/13 )/16 (/17 # TkChar/21 t.Pos#2/22 s.Char#2/26 )/18 >/1
        if( ! refalrts::ident_term( identifiers[ident_TkChar], context[21] ) )
          continue;
        // closed e.Collected#1 as range 9
        // closed e.Tokens#1 as range 13
        //DEBUG: t.ErrorList#1: 7
        //DEBUG: t.Pos#2: 22
        //DEBUG: s.Mode#1: 5
        //DEBUG: s.Kind#1: 6
        //DEBUG: s.Char#2: 26
        //DEBUG: e.Collected#1: 9
        //DEBUG: e.Tokens#1: 13

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} )/16 {REMOVED TILE} {REMOVED TILE} t.Pos#2/22 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 AsIs: t.ErrorList#1/7 AsIs: (/11 AsIs: e.Collected#1/9 HalfReuse: (/12 HalfReuse: # Symbol/15 } Tile{ Reuse: # Char/21 } Tile{ AsIs: s.Char#2/26 AsIs: )/18 HalfReuse: )/1 } Tile{ AsIs: e.Tokens#1/13 } Tile{ HalfReuse: >/17 } Tile{ ]] }
        refalrts::update_name(context[4], functions[efunc_DoTokenChain]);
        refalrts::reinit_open_bracket(context[12]);
        refalrts::reinit_ident(context[15], identifiers[ident_Symbol]);
        refalrts::update_ident(context[21], identifiers[ident_Char]);
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
        res = refalrts::splice_evar( res, context[13], context[14] );
        res = refalrts::splice_evar( res, context[26], context[1] );
        res = refalrts::splice_evar( res, context[21], context[21] );
        refalrts::splice_to_freelist_open( vm, context[15], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoTokenChain:1/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/9 )/12 (/15 e.Tokens#1/13 )/16 (/17 # TkVariable/21 t.Pos#2/22 s.VarType#2/26 e.Index#2/24 )/18 >/1
      if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[21] ) )
        continue;
      // closed e.Collected#1 as range 9
      // closed e.Tokens#1 as range 13
      // closed e.Index#2 as range 24
      //DEBUG: t.ErrorList#1: 7
      //DEBUG: t.Pos#2: 22
      //DEBUG: s.Mode#1: 5
      //DEBUG: s.Kind#1: 6
      //DEBUG: s.VarType#2: 26
      //DEBUG: e.Collected#1: 9
      //DEBUG: e.Tokens#1: 13
      //DEBUG: e.Index#2: 24

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} )/16 {REMOVED TILE} # TkVariable/21 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 AsIs: t.ErrorList#1/7 AsIs: (/11 AsIs: e.Collected#1/9 HalfReuse: (/12 HalfReuse: # TkVariable/15 } Tile{ AsIs: t.Pos#2/22 AsIs: s.VarType#2/26 AsIs: e.Index#2/24 AsIs: )/18 HalfReuse: )/1 } Tile{ AsIs: e.Tokens#1/13 } Tile{ HalfReuse: >/17 } Tile{ ]] }
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
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[22], context[1] );
      refalrts::splice_to_freelist_open( vm, context[15], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoTokenChain:1/4 s.new#15/5 s.new#16/6 t.new#17/7 (/11 e.new#18/9 )/12 (/15 e.new#19/13 )/16 (/17 s.new#20/21 t.new#21/22 )/18 >/1
      if( ! refalrts::empty_seq( context[19], context[20] ) )
        continue;
      // closed e.new#18 as range 9
      // closed e.new#19 as range 13
      do {
        // </0 & DoTokenChain:1/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/9 )/12 (/15 e.Tokens#1/13 )/16 (/17 # TkOpenBracket/21 t.Pos#2/22 )/18 >/1
        if( ! refalrts::ident_term( identifiers[ident_TkOpenBracket], context[21] ) )
          continue;
        // closed e.Collected#1 as range 9
        // closed e.Tokens#1 as range 13
        //DEBUG: t.ErrorList#1: 7
        //DEBUG: t.Pos#2: 22
        //DEBUG: s.Mode#1: 5
        //DEBUG: s.Kind#1: 6
        //DEBUG: e.Collected#1: 9
        //DEBUG: e.Tokens#1: 13

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.Pos#2/22 {REMOVED TILE}
        //RESULT: Tile{ [[ } </24 Tile{ HalfReuse: [*]/0 Reuse: & DoTokenChain:1$6=1/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 } Tile{ AsIs: (/11 AsIs: e.Collected#1/9 AsIs: )/12 HalfReuse: {*}/15 } </25 Tile{ HalfReuse: & TokenChain/16 } Tile{ AsIs: t.ErrorList#1/7 } Tile{ HalfReuse: s.Mode1 #5/17 HalfReuse: s.Kind1 #6/21 } Tile{ AsIs: e.Tokens#1/13 } Tile{ HalfReuse: >/18 AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[24]);
        refalrts::alloc_open_call(vm, context[25]);
        refalrts::reinit_closure_head(context[0]);
        refalrts::update_name(context[4], functions[efunc_gen_DoTokenChain_B1S6A1]);
        refalrts::reinit_unwrapped_closure(context[15], context[0]);
        refalrts::reinit_name(context[16], functions[efunc_TokenChain]);
        refalrts::reinit_svar( context[17], context[5] );
        refalrts::reinit_svar( context[21], context[6] );
        refalrts::reinit_close_call(context[18]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[24] );
        refalrts::push_stack( vm, context[18] );
        refalrts::push_stack( vm, context[25] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[18];
        res = refalrts::splice_evar( res, context[13], context[14] );
        res = refalrts::splice_evar( res, context[17], context[21] );
        res = refalrts::splice_evar( res, context[7], context[8] );
        res = refalrts::splice_evar( res, context[16], context[16] );
        res = refalrts::splice_evar( res, context[25], context[25] );
        res = refalrts::splice_evar( res, context[11], context[15] );
        res = refalrts::splice_evar( res, context[0], context[6] );
        res = refalrts::splice_evar( res, context[24], context[24] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        refalrts::wrap_closure( context[15] );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoTokenChain:1/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/9 )/12 (/15 e.Tokens#1/13 )/16 (/17 # TkOpenCall/21 t.Pos#2/22 )/18 >/1
      if( ! refalrts::ident_term( identifiers[ident_TkOpenCall], context[21] ) )
        continue;
      // closed e.Collected#1 as range 9
      // closed e.Tokens#1 as range 13
      //DEBUG: t.ErrorList#1: 7
      //DEBUG: t.Pos#2: 22
      //DEBUG: s.Mode#1: 5
      //DEBUG: s.Kind#1: 6
      //DEBUG: e.Collected#1: 9
      //DEBUG: e.Tokens#1: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </24 Tile{ HalfReuse: [*]/0 Reuse: & DoTokenChain:1$7=1/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 } Tile{ AsIs: (/11 AsIs: e.Collected#1/9 AsIs: )/12 } Tile{ AsIs: t.Pos#2/22 } Tile{ AsIs: (/15 AsIs: e.Tokens#1/13 AsIs: )/16 HalfReuse: {*}/17 HalfReuse: </21 } & ClassicError/25 Tile{ AsIs: t.ErrorList#1/7 } s.Mode#1/5/26 t.Pos#2/22/27"Identifier expected after \'<\'"/29 Tile{ HalfReuse: >/18 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[24]);
      refalrts::alloc_name(vm, context[25], functions[efunc_ClassicError]);
      refalrts::copy_stvar(vm, context[26], context[5]);
      refalrts::copy_evar(vm, context[27], context[28], context[22], context[23]);
      refalrts::alloc_chars(vm, context[29], context[30], "Identifier expected after \'<\'", 29);
      refalrts::reinit_closure_head(context[0]);
      refalrts::update_name(context[4], functions[efunc_gen_DoTokenChain_B1S7A1]);
      refalrts::reinit_unwrapped_closure(context[17], context[0]);
      refalrts::reinit_open_call(context[21]);
      refalrts::reinit_close_call(context[18]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[24] );
      refalrts::push_stack( vm, context[18] );
      refalrts::push_stack( vm, context[21] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[18];
      res = refalrts::splice_evar( res, context[26], context[30] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_evar( res, context[25], context[25] );
      res = refalrts::splice_evar( res, context[15], context[21] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[0], context[6] );
      res = refalrts::splice_evar( res, context[24], context[24] );
      refalrts::use( res );
      refalrts::wrap_closure( context[17] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoTokenChain:1/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/9 )/12 (/15 e.Tokens#1/13 )/16 (/17 # TkOpenCall/21 t.Pos#2/22 e.FuncName#2/19 )/18 >/1
      if( ! refalrts::ident_term( identifiers[ident_TkOpenCall], context[21] ) )
        continue;
      // closed e.Collected#1 as range 9
      // closed e.Tokens#1 as range 13
      // closed e.FuncName#2 as range 19
      //DEBUG: t.ErrorList#1: 7
      //DEBUG: t.Pos#2: 22
      //DEBUG: s.Mode#1: 5
      //DEBUG: s.Kind#1: 6
      //DEBUG: e.Collected#1: 9
      //DEBUG: e.Tokens#1: 13
      //DEBUG: e.FuncName#2: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain-AfterCall/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 } Tile{ AsIs: (/11 AsIs: e.Collected#1/9 AsIs: )/12 } t.Pos#2/22/24 Tile{ AsIs: (/15 } Tile{ HalfReuse: (/16 HalfReuse: # Symbol/17 Reuse: # Name/21 AsIs: t.Pos#2/22 AsIs: e.FuncName#2/19 AsIs: )/18 HalfReuse: )/1 } </26 & TokenChain/27 Tile{ AsIs: t.ErrorList#1/7 } s.Mode#1/5/28 s.Kind#1/6/29 Tile{ AsIs: e.Tokens#1/13 } >/30 >/31 Tile{ ]] }
      refalrts::copy_evar(vm, context[24], context[25], context[22], context[23]);
      refalrts::alloc_open_call(vm, context[26]);
      refalrts::alloc_name(vm, context[27], functions[efunc_TokenChain]);
      refalrts::copy_stvar(vm, context[28], context[5]);
      refalrts::copy_stvar(vm, context[29], context[6]);
      refalrts::alloc_close_call(vm, context[30]);
      refalrts::alloc_close_call(vm, context[31]);
      refalrts::update_name(context[4], functions[efunc_DoTokenChainm_AfterCall]);
      refalrts::reinit_open_bracket(context[16]);
      refalrts::reinit_ident(context[17], identifiers[ident_Symbol]);
      refalrts::update_ident(context[21], identifiers[ident_Name]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::push_stack( vm, context[31] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[30] );
      refalrts::push_stack( vm, context[26] );
      refalrts::link_brackets( context[15], context[1] );
      refalrts::link_brackets( context[16], context[18] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[16], context[1] );
      res = refalrts::splice_evar( res, context[15], context[15] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoTokenChain:1/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/9 )/12 (/15 e.Tokens#1/13 )/16 (/17 # TkOpenADT/21 t.OpenPos#2/22 e.FuncName#2/19 )/18 >/1
      if( ! refalrts::ident_term( identifiers[ident_TkOpenADT], context[21] ) )
        continue;
      // closed e.Collected#1 as range 9
      // closed e.Tokens#1 as range 13
      // closed e.FuncName#2 as range 19
      //DEBUG: t.ErrorList#1: 7
      //DEBUG: t.OpenPos#2: 22
      //DEBUG: s.Mode#1: 5
      //DEBUG: s.Kind#1: 6
      //DEBUG: e.Collected#1: 9
      //DEBUG: e.Tokens#1: 13
      //DEBUG: e.FuncName#2: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </24 Tile{ HalfReuse: [*]/0 Reuse: & DoTokenChain:1$9=1/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 } (/25 Tile{ AsIs: e.Collected#1/9 } )/26 t.OpenPos#2/22/27 (/29 Tile{ AsIs: e.FuncName#2/19 } Tile{ AsIs: )/12 AsIs: (/15 AsIs: e.Tokens#1/13 AsIs: )/16 HalfReuse: {*}/17 HalfReuse: </21 } & ClassicError/30 Tile{ AsIs: t.ErrorList#1/7 HalfReuse: s.Mode1 #5/11 } Tile{ AsIs: t.OpenPos#2/22 }"Abstract data types is an extension"/31 Tile{ HalfReuse: >/18 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[24]);
      refalrts::alloc_open_bracket(vm, context[25]);
      refalrts::alloc_close_bracket(vm, context[26]);
      refalrts::copy_evar(vm, context[27], context[28], context[22], context[23]);
      refalrts::alloc_open_bracket(vm, context[29]);
      refalrts::alloc_name(vm, context[30], functions[efunc_ClassicError]);
      refalrts::alloc_chars(vm, context[31], context[32], "Abstract data types is an extension", 35);
      refalrts::reinit_closure_head(context[0]);
      refalrts::update_name(context[4], functions[efunc_gen_DoTokenChain_B1S9A1]);
      refalrts::reinit_unwrapped_closure(context[17], context[0]);
      refalrts::reinit_open_call(context[21]);
      refalrts::reinit_svar( context[11], context[5] );
      refalrts::reinit_close_call(context[18]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[24] );
      refalrts::push_stack( vm, context[18] );
      refalrts::push_stack( vm, context[21] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[29], context[12] );
      refalrts::link_brackets( context[25], context[26] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[18];
      res = refalrts::splice_evar( res, context[31], context[32] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[7], context[11] );
      res = refalrts::splice_evar( res, context[30], context[30] );
      res = refalrts::splice_evar( res, context[12], context[21] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[26], context[29] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[25], context[25] );
      res = refalrts::splice_evar( res, context[0], context[6] );
      res = refalrts::splice_evar( res, context[24], context[24] );
      refalrts::use( res );
      refalrts::wrap_closure( context[17] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoTokenChain:1/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/9 )/12 (/15 e.Tokens#1/13 )/16 (/17 # TkRefal5Mode/21 t.Pos#2/22 s.NewMode#2/26 )/18 >/1
      context[24] = context[19];
      context[25] = context[20];
      if( ! refalrts::ident_term( identifiers[ident_TkRefal5Mode], context[21] ) )
        continue;
      // closed e.Collected#1 as range 9
      // closed e.Tokens#1 as range 13
      if( ! refalrts::svar_left( context[26], context[24], context[25] ) )
        continue;
      if( ! refalrts::empty_seq( context[24], context[25] ) )
        continue;
      //DEBUG: t.ErrorList#1: 7
      //DEBUG: t.Pos#2: 22
      //DEBUG: s.Mode#1: 5
      //DEBUG: s.Kind#1: 6
      //DEBUG: e.Collected#1: 9
      //DEBUG: e.Tokens#1: 13
      //DEBUG: s.NewMode#2: 26

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Mode#1/5 {REMOVED TILE} (/15 {REMOVED TILE} )/16 (/17 # TkRefal5Mode/21 t.Pos#2/22 {REMOVED TILE} )/18 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain/4 } Tile{ AsIs: s.NewMode#2/26 } Tile{ AsIs: s.Kind#1/6 AsIs: t.ErrorList#1/7 AsIs: (/11 AsIs: e.Collected#1/9 AsIs: )/12 } Tile{ AsIs: e.Tokens#1/13 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_DoTokenChain]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[6], context[12] );
      res = refalrts::splice_evar( res, context[26], context[26] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoTokenChain:1/4 s.new#15/5 s.new#16/6 t.new#17/7 (/11 e.new#18/9 )/12 (/15 e.new#19/13 )/16 (/17 s.new#20/21 t.new#21/22 )/18 >/1
      if( ! refalrts::empty_seq( context[19], context[20] ) )
        continue;
      // closed e.new#18 as range 9
      // closed e.new#19 as range 13
      do {
        // </0 & DoTokenChain:1/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/9 )/12 (/15 e.Tokens#1/13 )/16 (/17 # TkAmpersand/21 t.Pos#2/22 )/18 >/1
        if( ! refalrts::ident_term( identifiers[ident_TkAmpersand], context[21] ) )
          continue;
        // closed e.Collected#1 as range 9
        // closed e.Tokens#1 as range 13
        //DEBUG: t.ErrorList#1: 7
        //DEBUG: t.Pos#2: 22
        //DEBUG: s.Mode#1: 5
        //DEBUG: s.Kind#1: 6
        //DEBUG: e.Collected#1: 9
        //DEBUG: e.Tokens#1: 13

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } </24 Tile{ HalfReuse: [*]/0 Reuse: & DoTokenChain:1$11=1/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 } Tile{ AsIs: (/11 AsIs: e.Collected#1/9 AsIs: )/12 HalfReuse: {*}/15 } Tile{ HalfReuse: </16 HalfReuse: [*]/17 HalfReuse: & DoTokenChain:1$11=1:1/21 } Tile{ AsIs: t.ErrorList#1/7 } Tile{ AsIs: t.Pos#2/22 } {*}/25 s.Mode#1/5/26 Tile{ AsIs: e.Tokens#1/13 } Tile{ HalfReuse: >/18 AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[24]);
        refalrts::alloc_unwrapped_closure(vm, context[25], context[17]);
        refalrts::copy_stvar(vm, context[26], context[5]);
        refalrts::reinit_closure_head(context[0]);
        refalrts::update_name(context[4], functions[efunc_gen_DoTokenChain_B1S11A1]);
        refalrts::reinit_unwrapped_closure(context[15], context[0]);
        refalrts::reinit_open_call(context[16]);
        refalrts::reinit_closure_head(context[17]);
        refalrts::reinit_name(context[21], functions[efunc_gen_DoTokenChain_B1S11A1B1]);
        refalrts::reinit_close_call(context[18]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[24] );
        refalrts::push_stack( vm, context[18] );
        refalrts::push_stack( vm, context[16] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[18];
        res = refalrts::splice_evar( res, context[13], context[14] );
        res = refalrts::splice_evar( res, context[25], context[26] );
        res = refalrts::splice_evar( res, context[22], context[23] );
        res = refalrts::splice_evar( res, context[7], context[8] );
        res = refalrts::splice_evar( res, context[16], context[21] );
        res = refalrts::splice_evar( res, context[11], context[15] );
        res = refalrts::splice_evar( res, context[0], context[6] );
        res = refalrts::splice_evar( res, context[24], context[24] );
        refalrts::use( res );
        refalrts::wrap_closure( context[15] );
        refalrts::wrap_closure( context[25] );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & DoTokenChain:1/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/9 )/12 (/15 e.Tokens#1/13 )/16 (/17 # TkOpenBlock/21 t.Pos#2/22 )/18 >/1
        if( ! refalrts::ident_term( identifiers[ident_TkOpenBlock], context[21] ) )
          continue;
        // closed e.Collected#1 as range 9
        // closed e.Tokens#1 as range 13
        //DEBUG: t.ErrorList#1: 7
        //DEBUG: t.Pos#2: 22
        //DEBUG: s.Mode#1: 5
        //DEBUG: s.Kind#1: 6
        //DEBUG: e.Collected#1: 9
        //DEBUG: e.Tokens#1: 13
        //5: s.Mode#1
        //6: s.Kind#1
        //7: t.ErrorList#1
        //9: e.Collected#1
        //13: e.Tokens#1
        //22: t.Pos#2
        //27: s.Kind#1

        refalrts::reset_allocator(vm);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::alloc_open_call(vm, context[24]);
        refalrts::alloc_name(vm, context[26], functions[efunc_gen_DoTokenChain_B1S12C1]);
        refalrts::copy_stvar(vm, context[27], context[6]);
        refalrts::alloc_close_call(vm, context[25]);
        refalrts::push_stack( vm, context[25] );
        refalrts::push_stack( vm, context[24] );
        res = refalrts::splice_elem( res, context[25] );
        res = refalrts::splice_stvar( res, context[27] );
        res = refalrts::splice_elem( res, context[26] );
        res = refalrts::splice_elem( res, context[24] );
        refalrts::use( res );
        refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
        if (rec_res != refalrts::cSuccess)
          return rec_res;
        refalrts::this_is_generated_function(vm);
        do {
          // </24 & DoTokenChain:1$12?1/28 # Result/29 >/25
          context[26] = 0;
          context[27] = 0;
          context[28] = refalrts::call_left( context[26], context[27], context[24], context[25] );
          context[29] = refalrts::ident_left( identifiers[ident_Result], context[26], context[27] );
          if( ! context[29] )
            continue;
          if( ! refalrts::empty_seq( context[26], context[27] ) )
            continue;
          //DEBUG: t.ErrorList#1: 7
          //DEBUG: t.Pos#2: 22
          //DEBUG: s.Mode#1: 5
          //DEBUG: s.Kind#1: 6
          //DEBUG: e.Collected#1: 9
          //DEBUG: e.Tokens#1: 13

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} s.Kind#1/6 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & DoTokenChain:1$12=2/30 s.Mode#1/5/31 Tile{ AsIs: (/11 AsIs: e.Collected#1/9 AsIs: )/12 } Tile{ AsIs: t.Pos#2/22 } Tile{ AsIs: (/15 AsIs: e.Tokens#1/13 AsIs: )/16 HalfReuse: {*}/17 HalfReuse: </21 } & ClassicError/32 Tile{ AsIs: t.ErrorList#1/7 } Tile{ AsIs: s.Mode#1/5 } t.Pos#2/22/33"Do you forged \':\' before bl"/35 Tile{ HalfReuse: 'o'/18 HalfReuse: 'c'/24 HalfReuse: 'k'/28 HalfReuse: '?'/29 AsIs: >/25 AsIs: >/1 ]] }
          refalrts::alloc_name(vm, context[30], functions[efunc_gen_DoTokenChain_B1S12A2]);
          refalrts::copy_stvar(vm, context[31], context[5]);
          refalrts::alloc_name(vm, context[32], functions[efunc_ClassicError]);
          refalrts::copy_evar(vm, context[33], context[34], context[22], context[23]);
          refalrts::alloc_chars(vm, context[35], context[36], "Do you forged \':\' before bl", 27);
          refalrts::reinit_closure_head(context[4]);
          refalrts::reinit_unwrapped_closure(context[17], context[4]);
          refalrts::reinit_open_call(context[21]);
          refalrts::reinit_char(context[18], 'o');
          refalrts::reinit_char(context[24], 'c');
          refalrts::reinit_char(context[28], 'k');
          refalrts::reinit_char(context[29], '?');
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[25] );
          refalrts::push_stack( vm, context[21] );
          refalrts::link_brackets( context[15], context[16] );
          refalrts::link_brackets( context[11], context[12] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[18];
          res = refalrts::splice_evar( res, context[33], context[36] );
          res = refalrts::splice_evar( res, context[5], context[5] );
          res = refalrts::splice_evar( res, context[7], context[8] );
          res = refalrts::splice_evar( res, context[32], context[32] );
          res = refalrts::splice_evar( res, context[15], context[21] );
          res = refalrts::splice_evar( res, context[22], context[23] );
          res = refalrts::splice_evar( res, context[11], context[12] );
          res = refalrts::splice_evar( res, context[30], context[31] );
          refalrts::splice_to_freelist_open( vm, context[4], res );
          refalrts::wrap_closure( context[17] );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        refalrts::splice_to_freelist(vm, context[24], context[25]);
        continue;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & DoTokenChain:1/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/9 )/12 (/15 e.Tokens#1/13 )/16 (/17 # TkRedefinition/21 t.Pos#2/22 )/18 >/1
        if( ! refalrts::ident_term( identifiers[ident_TkRedefinition], context[21] ) )
          continue;
        // closed e.Collected#1 as range 9
        // closed e.Tokens#1 as range 13
        //DEBUG: t.ErrorList#1: 7
        //DEBUG: t.Pos#2: 22
        //DEBUG: s.Mode#1: 5
        //DEBUG: s.Kind#1: 6
        //DEBUG: e.Collected#1: 9
        //DEBUG: e.Tokens#1: 13

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 } Tile{ HalfReuse: </15 } & DoTokenChain-AddRedefinition/24 s.Kind#1/6/25 </26 & ClassicError/27 Tile{ AsIs: t.ErrorList#1/7 } Tile{ HalfReuse: s.Mode1 #5/21 AsIs: t.Pos#2/22 HalfReuse: 'V'/18 } Tile{ HalfReuse: 'a'/16 HalfReuse: 'r'/17 }"iable redefinition is available in extended mode"/28 >/30 Tile{ AsIs: (/11 AsIs: e.Collected#1/9 AsIs: )/12 } t.Pos#2/22/31 >/33 Tile{ AsIs: e.Tokens#1/13 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_name(vm, context[24], functions[efunc_DoTokenChainm_AddRedefinition]);
        refalrts::copy_stvar(vm, context[25], context[6]);
        refalrts::alloc_open_call(vm, context[26]);
        refalrts::alloc_name(vm, context[27], functions[efunc_ClassicError]);
        refalrts::alloc_chars(vm, context[28], context[29], "iable redefinition is available in extended mode", 48);
        refalrts::alloc_close_call(vm, context[30]);
        refalrts::copy_evar(vm, context[31], context[32], context[22], context[23]);
        refalrts::alloc_close_call(vm, context[33]);
        refalrts::update_name(context[4], functions[efunc_DoTokenChain]);
        refalrts::reinit_open_call(context[15]);
        refalrts::reinit_svar( context[21], context[5] );
        refalrts::reinit_char(context[18], 'V');
        refalrts::reinit_char(context[16], 'a');
        refalrts::reinit_char(context[17], 'r');
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[33] );
        refalrts::push_stack( vm, context[15] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::push_stack( vm, context[30] );
        refalrts::push_stack( vm, context[26] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[13], context[14] );
        res = refalrts::splice_evar( res, context[31], context[33] );
        res = refalrts::splice_evar( res, context[11], context[12] );
        res = refalrts::splice_evar( res, context[28], context[30] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[21], context[18] );
        res = refalrts::splice_evar( res, context[7], context[8] );
        res = refalrts::splice_evar( res, context[24], context[27] );
        res = refalrts::splice_evar( res, context[15], context[15] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoTokenChain:1/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/9 )/12 (/15 e.Tokens#1/13 )/16 (/17 # TkScopeId/21 t.Pos#2/22 )/18 >/1
      if( ! refalrts::ident_term( identifiers[ident_TkScopeId], context[21] ) )
        continue;
      // closed e.Collected#1 as range 9
      // closed e.Tokens#1 as range 13
      //DEBUG: t.ErrorList#1: 7
      //DEBUG: t.Pos#2: 22
      //DEBUG: s.Mode#1: 5
      //DEBUG: s.Kind#1: 6
      //DEBUG: e.Collected#1: 9
      //DEBUG: e.Tokens#1: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 } </24 & ClassicError/25 Tile{ AsIs: t.ErrorList#1/7 } s.Mode#1/5/26 Tile{ AsIs: t.Pos#2/22 HalfReuse: '$'/18 }"SCOPEID is not supported in classic REFAL-5"/27 >/29 Tile{ AsIs: (/11 AsIs: e.Collected#1/9 HalfReuse: (/12 HalfReuse: # Symbol/15 } # Number/30 # Cookie1/31 Tile{ AsIs: )/16 AsIs: (/17 Reuse: # Symbol/21 } # Number/32 # Cookie2/33 )/34 )/35 Tile{ AsIs: e.Tokens#1/13 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[24]);
      refalrts::alloc_name(vm, context[25], functions[efunc_ClassicError]);
      refalrts::copy_stvar(vm, context[26], context[5]);
      refalrts::alloc_chars(vm, context[27], context[28], "SCOPEID is not supported in classic REFAL-5", 43);
      refalrts::alloc_close_call(vm, context[29]);
      refalrts::alloc_ident(vm, context[30], identifiers[ident_Number]);
      refalrts::alloc_ident(vm, context[31], identifiers[ident_Cookie1]);
      refalrts::alloc_ident(vm, context[32], identifiers[ident_Number]);
      refalrts::alloc_ident(vm, context[33], identifiers[ident_Cookie2]);
      refalrts::alloc_close_bracket(vm, context[34]);
      refalrts::alloc_close_bracket(vm, context[35]);
      refalrts::update_name(context[4], functions[efunc_DoTokenChain]);
      refalrts::reinit_char(context[18], '$');
      refalrts::reinit_open_bracket(context[12]);
      refalrts::reinit_ident(context[15], identifiers[ident_Symbol]);
      refalrts::update_ident(context[21], identifiers[ident_Symbol]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[11], context[35] );
      refalrts::link_brackets( context[17], context[34] );
      refalrts::link_brackets( context[12], context[16] );
      refalrts::push_stack( vm, context[29] );
      refalrts::push_stack( vm, context[24] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[32], context[35] );
      res = refalrts::splice_evar( res, context[16], context[21] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[11], context[15] );
      res = refalrts::splice_evar( res, context[27], context[29] );
      res = refalrts::splice_evar( res, context[22], context[18] );
      res = refalrts::splice_evar( res, context[26], context[26] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoTokenChain:1/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/9 )/12 (/15 e.Tokens#1/13 )/16 (/17 # TkError/21 t.Pos#2/22 e.Message#2/19 )/18 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkError], context[21] ) )
      continue;
    // closed e.Collected#1 as range 9
    // closed e.Tokens#1 as range 13
    // closed e.Message#2 as range 19
    //DEBUG: t.ErrorList#1: 7
    //DEBUG: t.Pos#2: 22
    //DEBUG: s.Mode#1: 5
    //DEBUG: s.Kind#1: 6
    //DEBUG: e.Collected#1: 9
    //DEBUG: e.Tokens#1: 13
    //DEBUG: e.Message#2: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 } Tile{ HalfReuse: </16 } Tile{ HalfReuse: & UnexpectedToken/15 } Tile{ AsIs: t.ErrorList#1/7 } Tile{ AsIs: (/17 AsIs: # TkError/21 AsIs: t.Pos#2/22 AsIs: e.Message#2/19 AsIs: )/18 AsIs: >/1 } Tile{ AsIs: (/11 AsIs: e.Collected#1/9 AsIs: )/12 } Tile{ AsIs: e.Tokens#1/13 } >/24 Tile{ ]] }
    refalrts::alloc_close_call(vm, context[24]);
    refalrts::update_name(context[4], functions[efunc_DoTokenChain]);
    refalrts::reinit_open_call(context[16]);
    refalrts::reinit_name(context[15], functions[efunc_UnexpectedToken]);
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[16] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[24], context[24] );
    res = refalrts::splice_evar( res, context[13], context[14] );
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

static refalrts::NativeReference nat_ref_gen_DoTokenChain_B1("DoTokenChain:1", 49629914U, 2709224338U, func_gen_DoTokenChain_B1);


static refalrts::FnResult func_DoTokenChain(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </15 Tile{ HalfReuse: [*]/0 Reuse: & DoTokenChain:1/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 AsIs: t.ErrorList#1/7 AsIs: (/11 AsIs: e.Collected#1/9 AsIs: )/12 } (/16 Tile{ AsIs: e.Tokens#1/2 } )/17 {*}/18 Tile{ AsIs: t.NextToken#1/13 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[15]);
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::alloc_close_bracket(vm, context[17]);
  refalrts::alloc_unwrapped_closure(vm, context[18], context[0]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_DoTokenChain_B1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[15] );
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

static refalrts::NativeReference nat_ref_DoTokenChain("DoTokenChain", 49629914U, 2709224338U, func_DoTokenChain);


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

static refalrts::NativeReference nat_ref_gen_DoTokenChainm_AfterCall_S4A2("DoTokenChain-AfterCall$4=2", 49629914U, 2709224338U, func_gen_DoTokenChainm_AfterCall_S4A2);


static refalrts::FnResult func_gen_DoTokenChainm_AfterCall_S4A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </31 Tile{ HalfReuse: [*]/0 Reuse: & DoTokenChain-AfterCall$4=2/4 AsIs: s.Mode#1/5 AsIs: (/8 AsIs: e.Collected#1/6 AsIs: )/9 AsIs: (/12 AsIs: e.OptionalFuncName#1/10 AsIs: )/13 AsIs: (/16 AsIs: e.BracketTerms#1/14 AsIs: )/17 AsIs: s.Type#1/18 AsIs: t.Pos#1/19 AsIs: (/23 AsIs: e.Value#1/21 AsIs: )/24 AsIs: (/27 AsIs: e.Tokens#1/25 AsIs: )/28 } {*}/32 </33 & EL-AddErrorAt/34 Tile{ AsIs: t.ErrorList#2/29 } t.Pos#1/19/35"Missed \'>\'"/37 >/39 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[31]);
  refalrts::alloc_unwrapped_closure(vm, context[32], context[0]);
  refalrts::alloc_open_call(vm, context[33]);
  refalrts::alloc_name(vm, context[34], functions[efunc_ELm_AddErrorAt]);
  refalrts::copy_evar(vm, context[35], context[36], context[19], context[20]);
  refalrts::alloc_chars(vm, context[37], context[38], "Missed \'>\'", 10);
  refalrts::alloc_close_call(vm, context[39]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_DoTokenChainm_AfterCall_S4A2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[31] );
  refalrts::push_stack( vm, context[39] );
  refalrts::push_stack( vm, context[33] );
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

static refalrts::NativeReference nat_ref_gen_DoTokenChainm_AfterCall_S4A1("DoTokenChain-AfterCall$4=1", 49629914U, 2709224338U, func_gen_DoTokenChainm_AfterCall_S4A1);


static refalrts::FnResult func_DoTokenChainm_AfterCall(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 40 elems
  refalrts::Iter context[40];
  refalrts::zeros( context, 40 );
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
    // </0 & DoTokenChain-AfterCall/4 s.new#12/5 s.new#13/6 (/9 e.new#14/7 )/10 t.new#15/11 (/15 e.new#16/13 )/16 t.new#17/17 (/21 e.new#18/19 )/22 (/25 # TkCloseCall/27 t.new#19/28 )/26 e.new#20/2 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkCloseCall], context[27] ) )
      continue;
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;
    // closed e.new#14 as range 7
    // closed e.new#16 as range 13
    // closed e.new#18 as range 19
    // closed e.new#20 as range 2
    do {
      // </0 & DoTokenChain-AfterCall/4 s.Mode#1/5 # Result/6 (/9 e.Collected#1/7 )/10 t.CallPos#1/11 (/15 e.OptionalFuncName#1/13 )/16 t.ErrorList#1/17 (/21 e.BracketTerms#1/19 )/22 (/25 # TkCloseCall/27 t.Pos#1/28 )/26 e.Tokens#1/2 >/1
      if( ! refalrts::ident_term( identifiers[ident_Result], context[6] ) )
        continue;
      // closed e.Collected#1 as range 7
      // closed e.OptionalFuncName#1 as range 13
      // closed e.BracketTerms#1 as range 19
      // closed e.Tokens#1 as range 2
      //DEBUG: t.CallPos#1: 11
      //DEBUG: t.ErrorList#1: 17
      //DEBUG: t.Pos#1: 28
      //DEBUG: s.Mode#1: 5
      //DEBUG: e.Collected#1: 7
      //DEBUG: e.OptionalFuncName#1: 13
      //DEBUG: e.BracketTerms#1: 19
      //DEBUG: e.Tokens#1: 2

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} t.CallPos#1/11 (/15 {REMOVED TILE} )/16 {REMOVED TILE} (/21 {REMOVED TILE} {REMOVED TILE} (/25 {REMOVED TILE} t.Pos#1/28 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain/4 AsIs: s.Mode#1/5 AsIs: # Result/6 } Tile{ AsIs: t.ErrorList#1/17 } Tile{ AsIs: (/9 AsIs: e.Collected#1/7 HalfReuse: (/10 } Tile{ Reuse: # CallBrackets/27 } Tile{ AsIs: e.OptionalFuncName#1/13 } Tile{ AsIs: e.BracketTerms#1/19 } Tile{ AsIs: )/22 } Tile{ AsIs: )/26 AsIs: e.Tokens#1/2 AsIs: >/1 ]] }
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
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[27], context[27] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      refalrts::splice_to_freelist_open( vm, context[6], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoTokenChain-AfterCall/4 s.Mode#1/5 # Pattern/6 (/9 e.Collected#1/7 )/10 t.CallPos#1/11 (/15 e.OptionalFuncName#1/13 )/16 t.ErrorList#1/17 (/21 e.BracketTerms#1/19 )/22 (/25 # TkCloseCall/27 t.Pos#1/28 )/26 e.Tokens#1/2 >/1
    if( ! refalrts::ident_term( identifiers[ident_Pattern], context[6] ) )
      continue;
    // closed e.Collected#1 as range 7
    // closed e.OptionalFuncName#1 as range 13
    // closed e.BracketTerms#1 as range 19
    // closed e.Tokens#1 as range 2
    //DEBUG: t.CallPos#1: 11
    //DEBUG: t.ErrorList#1: 17
    //DEBUG: t.Pos#1: 28
    //DEBUG: s.Mode#1: 5
    //DEBUG: e.Collected#1: 7
    //DEBUG: e.OptionalFuncName#1: 13
    //DEBUG: e.BracketTerms#1: 19
    //DEBUG: e.Tokens#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.Pos#1/28 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain/4 AsIs: s.Mode#1/5 AsIs: # Pattern/6 HalfReuse: </9 } Tile{ HalfReuse: & EL-AddErrorAt/16 AsIs: t.ErrorList#1/17 } Tile{ AsIs: t.CallPos#1/11 HalfReuse: 'u'/15 }"ne"/30 Tile{ HalfReuse: 'x'/10 }"pected \'<\' in pattern expression, probably missed \'=\'"/32 >/34 Tile{ AsIs: (/21 } Tile{ AsIs: e.Collected#1/7 } Tile{ AsIs: (/25 Reuse: # Brackets/27 } Tile{ AsIs: e.OptionalFuncName#1/13 } Tile{ AsIs: e.BracketTerms#1/19 } Tile{ AsIs: )/22 } Tile{ AsIs: )/26 AsIs: e.Tokens#1/2 AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[30], context[31], "ne", 2);
    refalrts::alloc_chars(vm, context[32], context[33], "pected \'<\' in pattern expression, probably missed \'=\'", 53);
    refalrts::alloc_close_call(vm, context[34]);
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
    refalrts::push_stack( vm, context[34] );
    refalrts::push_stack( vm, context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[26];
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[25], context[27] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[21], context[21] );
    res = refalrts::splice_evar( res, context[32], context[34] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_evar( res, context[11], context[15] );
    res = refalrts::splice_evar( res, context[16], context[18] );
    refalrts::splice_to_freelist_open( vm, context[9], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoTokenChain-AfterCall/4 s.Mode#1/5 # Result/6 (/9 e.Collected#1/7 )/10 t.CallPos#1/11 (/15 e.OptionalFuncName#1/13 )/16 t.ErrorList#1/17 (/21 e.BracketTerms#1/19 )/22 (/25 s.Type#1/27 t.Pos#1/28 e.Value#1/23 )/26 e.Tokens#1/2 >/1
    if( ! refalrts::ident_term( identifiers[ident_Result], context[6] ) )
      continue;
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
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.CallPos#1/11 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain/4 AsIs: s.Mode#1/5 AsIs: # Result/6 HalfReuse: </9 } Tile{ HalfReuse: & EL-AddErrorAt/16 AsIs: t.ErrorList#1/17 } t.Pos#1/28/30"Missed \'>\'"/32 >/34 Tile{ AsIs: (/21 } Tile{ AsIs: e.Collected#1/7 } Tile{ AsIs: (/15 } # CallBrackets/35 Tile{ AsIs: e.OptionalFuncName#1/13 } Tile{ AsIs: e.BracketTerms#1/19 } Tile{ AsIs: )/10 } Tile{ AsIs: )/22 AsIs: (/25 AsIs: s.Type#1/27 AsIs: t.Pos#1/28 AsIs: e.Value#1/23 AsIs: )/26 AsIs: e.Tokens#1/2 AsIs: >/1 ]] }
    refalrts::copy_evar(vm, context[30], context[31], context[28], context[29]);
    refalrts::alloc_chars(vm, context[32], context[33], "Missed \'>\'", 10);
    refalrts::alloc_close_call(vm, context[34]);
    refalrts::alloc_ident(vm, context[35], identifiers[ident_CallBrackets]);
    refalrts::update_name(context[4], functions[efunc_DoTokenChain]);
    refalrts::reinit_open_call(context[9]);
    refalrts::reinit_name(context[16], functions[efunc_ELm_AddErrorAt]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[25], context[26] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::link_brackets( context[15], context[10] );
    refalrts::push_stack( vm, context[34] );
    refalrts::push_stack( vm, context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[22];
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[35], context[35] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[21], context[21] );
    res = refalrts::splice_evar( res, context[30], context[34] );
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
  //TRASH: {REMOVED TILE} s.Mode#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Type#1/27 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & DoTokenChain-AfterCall$4=1/30 Tile{ HalfReuse: s.Mode1 #5/6 AsIs: (/9 AsIs: e.Collected#1/7 AsIs: )/10 } Tile{ AsIs: (/15 AsIs: e.OptionalFuncName#1/13 AsIs: )/16 } Tile{ AsIs: (/21 AsIs: e.BracketTerms#1/19 AsIs: )/22 HalfReuse: s.Type1 #27/25 } Tile{ AsIs: t.Pos#1/28 } (/31 Tile{ AsIs: e.Value#1/23 } Tile{ AsIs: )/26 } (/32 Tile{ AsIs: e.Tokens#1/2 } )/33 {*}/34 </35 & EL-AddErrorAt/36 Tile{ AsIs: t.ErrorList#1/17 } Tile{ AsIs: t.CallPos#1/11 }"unexpected \'<\' in pattern expression, probably missed \'=\'"/37 >/39 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[30], functions[efunc_gen_DoTokenChainm_AfterCall_S4A1]);
  refalrts::alloc_open_bracket(vm, context[31]);
  refalrts::alloc_open_bracket(vm, context[32]);
  refalrts::alloc_close_bracket(vm, context[33]);
  refalrts::alloc_unwrapped_closure(vm, context[34], context[4]);
  refalrts::alloc_open_call(vm, context[35]);
  refalrts::alloc_name(vm, context[36], functions[efunc_ELm_AddErrorAt]);
  refalrts::alloc_chars(vm, context[37], context[38], "unexpected \'<\' in pattern expression, probably missed \'=\'", 57);
  refalrts::alloc_close_call(vm, context[39]);
  refalrts::reinit_closure_head(context[4]);
  refalrts::reinit_svar( context[6], context[5] );
  refalrts::reinit_svar( context[25], context[27] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[39] );
  refalrts::push_stack( vm, context[35] );
  refalrts::link_brackets( context[32], context[33] );
  refalrts::link_brackets( context[31], context[26] );
  refalrts::link_brackets( context[21], context[22] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[37], context[39] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[33], context[36] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[32], context[32] );
  res = refalrts::splice_evar( res, context[26], context[26] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[31], context[31] );
  res = refalrts::splice_evar( res, context[28], context[29] );
  res = refalrts::splice_evar( res, context[21], context[25] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[6], context[10] );
  res = refalrts::splice_evar( res, context[30], context[30] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  refalrts::wrap_closure( context[34] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoTokenChainm_AfterCall("DoTokenChain-AfterCall", 49629914U, 2709224338U, func_DoTokenChainm_AfterCall);


static refalrts::FnResult func_DoTokenChainm_AddRedefinition(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
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
    // </0 & DoTokenChain-AddRedefinition/4 # Pattern/5 t.new#5/6 (/10 e.new#6/8 )/11 t.new#7/12 >/1
    if( ! refalrts::ident_term( identifiers[ident_Pattern], context[5] ) )
      continue;
    // closed e.new#6 as range 8
    do {
      // </0 & DoTokenChain-AddRedefinition/4 # Pattern/5 t.ErrorList#1/6 (/10 e.Collected#1/14 (/18 # TkVariable/20 t.VarPos#1/21 s.VarType#1/23 e.Index#1/16 )/19 )/11 t.Pos#1/12 >/1
      context[14] = context[8];
      context[15] = context[9];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_right( context[16], context[17], context[14], context[15] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left( identifiers[ident_TkVariable], context[16], context[17] );
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

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & DoTokenChain-AddRedefinition/4 # Pattern/5 {REMOVED TILE} t.Pos#1/12 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/6 AsIs: (/10 AsIs: e.Collected#1/14 AsIs: (/18 Reuse: # TkNewVariable/20 AsIs: t.VarPos#1/21 AsIs: s.VarType#1/23 AsIs: e.Index#1/16 AsIs: )/19 AsIs: )/11 } Tile{ ]] }
      refalrts::update_ident(context[20], identifiers[ident_TkNewVariable]);
      refalrts::link_brackets( context[10], context[11] );
      refalrts::link_brackets( context[18], context[19] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[6], context[11] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoTokenChain-AddRedefinition/4 # Pattern/5 t.ErrorList#1/6 (/10 e.Collected#1/8 )/11 t.Pos#1/12 >/1
    // closed e.Collected#1 as range 8
    //DEBUG: t.ErrorList#1: 6
    //DEBUG: t.Pos#1: 12
    //DEBUG: e.Collected#1: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 } Tile{ AsIs: t.ErrorList#1/6 } Tile{ AsIs: t.Pos#1/12 HalfReuse: 'R'/1 }"ed"/14 Tile{ HalfReuse: 'e'/5 }"finition sign expects variable before"/16 >/18 Tile{ AsIs: (/10 AsIs: e.Collected#1/8 AsIs: )/11 } Tile{ ]] }
    refalrts::alloc_chars(vm, context[14], context[15], "ed", 2);
    refalrts::alloc_chars(vm, context[16], context[17], "finition sign expects variable before", 37);
    refalrts::alloc_close_call(vm, context[18]);
    refalrts::update_name(context[4], functions[efunc_ELm_AddErrorAt]);
    refalrts::reinit_char(context[1], 'R');
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

static refalrts::NativeReference nat_ref_DoTokenChainm_AddRedefinition("DoTokenChain-AddRedefinition", 49629914U, 2709224338U, func_DoTokenChainm_AddRedefinition);


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

static refalrts::NativeReference nat_ref_gen_Expressionm_CheckBrackets_S1A3("Expression-CheckBrackets$1=3", 49629914U, 2709224338U, func_gen_Expressionm_CheckBrackets_S1A3);


static refalrts::FnResult func_gen_Expressionm_CheckBrackets_S1A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </17 Tile{ HalfReuse: [*]/0 Reuse: & Expression-CheckBrackets$1=3/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 AsIs: (/9 AsIs: e.Expression#1/7 AsIs: )/10 HalfReuse: {*}/13 } </18 Tile{ HalfReuse: & TokenChain/14 AsIs: t.ErrorList#3/15 } s.Mode#1/5/19 s.Kind#1/6/20 Tile{ AsIs: e.Tokens#1/11 } >/21 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[17]);
  refalrts::alloc_open_call(vm, context[18]);
  refalrts::copy_stvar(vm, context[19], context[5]);
  refalrts::copy_stvar(vm, context[20], context[6]);
  refalrts::alloc_close_call(vm, context[21]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_Expressionm_CheckBrackets_S1A3]);
  refalrts::reinit_unwrapped_closure(context[13], context[0]);
  refalrts::reinit_name(context[14], functions[efunc_TokenChain]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[18] );
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

static refalrts::NativeReference nat_ref_gen_Expressionm_CheckBrackets_S1A2("Expression-CheckBrackets$1=2", 49629914U, 2709224338U, func_gen_Expressionm_CheckBrackets_S1A2);


static refalrts::FnResult func_Expressionm_CheckBrackets(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 36 elems
  refalrts::Iter context[36];
  refalrts::zeros( context, 36 );
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
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Type#1/19 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </28 Tile{ HalfReuse: [*]/0 Reuse: & Expression-CheckBrackets$1=2/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 } Tile{ AsIs: (/9 AsIs: e.Expression#1/13 AsIs: )/10 AsIs: (/17 } Tile{ AsIs: e.Tokens#1/11 } )/29 {*}/30 </31 & EL-AddErrorAt/32 Tile{ AsIs: t.ErrorList#1/7 } Tile{ AsIs: t.Pos#1/20 HalfReuse: 'u'/18 }"nbalanced "/33 Tile{ AsIs: </22 Reuse: & TokName/26 HalfReuse: s.Type1 #19/27 AsIs: >/23 AsIs: >/1 } >/35 Tile{ ]] }
      refalrts::alloc_open_call(vm, context[28]);
      refalrts::alloc_close_bracket(vm, context[29]);
      refalrts::alloc_unwrapped_closure(vm, context[30], context[0]);
      refalrts::alloc_open_call(vm, context[31]);
      refalrts::alloc_name(vm, context[32], functions[efunc_ELm_AddErrorAt]);
      refalrts::alloc_chars(vm, context[33], context[34], "nbalanced ", 10);
      refalrts::alloc_close_call(vm, context[35]);
      refalrts::reinit_closure_head(context[0]);
      refalrts::update_name(context[4], functions[efunc_gen_Expressionm_CheckBrackets_S1A2]);
      refalrts::reinit_char(context[18], 'u');
      refalrts::update_name(context[26], functions[efunc_TokName]);
      refalrts::reinit_svar( context[27], context[19] );
      refalrts::push_stack( vm, context[35] );
      refalrts::push_stack( vm, context[28] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[31] );
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[22] );
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
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      refalrts::wrap_closure( context[30] );
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

static refalrts::NativeReference nat_ref_Expressionm_CheckBrackets("Expression-CheckBrackets", 49629914U, 2709224338U, func_Expressionm_CheckBrackets);


static refalrts::FnResult func_ClassicError(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
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
    // </0 & ClassicError/4 t.ErrorList#1/5 # Classic/7 t.Pos#1/8 e.Message#1/2 >/1
    if( ! refalrts::ident_term( identifiers[ident_Classic], context[7] ) )
      continue;
    // closed e.Message#1 as range 2
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: t.Pos#1: 8
    //DEBUG: e.Message#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} # Classic/7 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#1/5 } Tile{ AsIs: t.Pos#1/8 AsIs: e.Message#1/2 AsIs: >/1 ]] }
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

static refalrts::NativeReference nat_ref_ClassicError("ClassicError", 49629914U, 2709224338U, func_ClassicError);


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
    // </0 & UnexpectedToken/4 t.ErrorList#1/5 (/9 # TkError/11 t.Pos#1/12 e.Message#1/7 )/10 e.Expected#1/2 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkError], context[11] ) )
      continue;
    // closed e.Message#1 as range 7
    // closed e.Expected#1 as range 2
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: t.Pos#1: 12
    //DEBUG: e.Message#1: 7
    //DEBUG: e.Expected#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/9 # TkError/11 {REMOVED TILE} e.Expected#1/2 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#1/5 } Tile{ AsIs: t.Pos#1/12 AsIs: e.Message#1/7 HalfReuse: >/10 } Tile{ ]] }
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

static refalrts::NativeReference nat_ref_UnexpectedToken("UnexpectedToken", 49629914U, 2709224338U, func_UnexpectedToken);


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

  // </0 & TokName/4 # TkNativeCode/5 >/1
  if( ! refalrts::ident_term( identifiers[ident_TkNativeCode], context[5] ) )
    return refalrts::cRecognitionImpossible;

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
}

static refalrts::NativeReference nat_ref_TokName("TokName", 49629914U, 2709224338U, func_TokName);


//End of file
