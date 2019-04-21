// This file automatically generated from 'R5-Lexer.ref'
// Don't edit! Edit 'R5-Lexer.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_4212599994_3244736276

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
  efunc_DoScan = 14,
  efunc_Skipm_UTFm_8m_Bom = 15,
  efunc_LoadFile = 16,
  efunc_CheckClassicTokens = 17,
  efunc_gen_CheckClassicTokens_S4C1B1S2C1 = 18,
  efunc_AllDigits = 19,
  efunc_gen_CheckClassicTokens_S4C1 = 20,
  efunc_gen_CheckClassicTokens_S4C1B1 = 21,
  efunc_gen_AllDigits_S1C1 = 22,
  efunc_Inc = 23,
  efunc_IncCol = 24,
  efunc_IncLine = 25,
  efunc_gen_DoScan_S6C1 = 26,
  efunc_IsVarType = 27,
  efunc_DoScanm_Var = 28,
  efunc_gen_DoScan_S7C1 = 29,
  efunc_IsStartIdent = 30,
  efunc_DoScanm_Ident = 31,
  efunc_gen_DoScan_S8C1 = 32,
  efunc_IsPunctuation = 33,
  efunc_gen_DoScan_S14C1 = 34,
  efunc_gen_DoScan_S15C1 = 35,
  efunc_DoScanm_Keyword = 36,
  efunc_DoScanm_Chars = 37,
  efunc_DoScanm_CComment = 38,
  efunc_DoScanm_Compound = 39,
  efunc_gen_DoScan_S20C1 = 40,
  efunc_gen_DoScan_S22C1 = 41,
  efunc_DoScanm_Number = 42,
  efunc_DoScanm_NativeCode = 43,
  efunc_gen_DoScan_S24C1 = 44,
  efunc_gen_DoScan_S26C1 = 45,
  efunc_ScanEscape = 46,
  efunc_gen_IsStartIdent_S2C1 = 47,
  efunc_gen_IsPunctuation_S1C1 = 48,
  efunc_DoScanm_BuildKeyword = 49,
  efunc_gen_DoScanm_BuildKeyword_S1C1 = 50,
  efunc_gen_DoScanm_BuildKeyword_S2C1 = 51,
  efunc_EasterEgg = 52,
  efunc_gen_DoScanm_Number_S1C1 = 53,
  efunc_gen_DoScanm_Number_S1B1 = 54,
  efunc_Numb = 55,
  efunc_gen_DoScanm_Var_S1C1 = 56,
  efunc_IsIdentTail = 57,
  efunc_gen_IsIdentTail_S3B1 = 58,
  efunc_DoScanm_DoNativeCode = 59,
  efunc_gen_DoScanm_Ident_S1C1 = 60,
  efunc_DoScanm_Charsm_Escape = 61,
  efunc_gen_SimpleEscapedChar_B1 = 62,
  efunc_gen_ScanEscape_S1C1 = 63,
  efunc_SimpleEscapedChar = 64,
  efunc_gen_ScanEscape_S2C1 = 65,
  efunc_HexDigit = 66,
  efunc_gen_ScanEscape_S2C2 = 67,
  efunc_Chr = 68,
  efunc_gen_DoScanm_Charsm_Escape_C1 = 69,
  efunc_DoHexDigit = 70,
  efunc_gen_HexDigit_B1 = 71,
  efunc_MakeCompound = 72,
  efunc_DoScanm_Compoundm_HandleEscape = 73,
  efunc_gen_DoScanm_Compoundm_HandleEscape_S1C1 = 74,
  efunc_gen_DoScanm_Compoundm_HandleEscape_S2C1 = 75,
  efunc_gen_DoScanm_Compoundm_HandleEscape_S2C2 = 76,
};


enum ident {
  ident_k43_ = 0,
  ident_k47_ = 1,
  ident_k37_ = 2,
  ident_k42_ = 3,
  ident_k63_ = 4,
  ident_m_ = 5,
  ident_RowCol = 6,
  ident_True = 7,
  ident_TkError = 8,
  ident_TkRefal5Mode = 9,
  ident_Extended = 10,
  ident_Classic = 11,
  ident_TkName = 12,
  ident_TkVariable = 13,
  ident_False = 14,
  ident_Len = 15,
  ident_TkEOF = 16,
  ident_TkOpenCall = 17,
  ident_TkOpenADT = 18,
  ident_UnnamedADT = 19,
  ident_TkOpenBracket = 20,
  ident_TkCloseBracket = 21,
  ident_TkSemicolon = 22,
  ident_TkAssign = 23,
  ident_TkCloseCall = 24,
  ident_TkOpenBlock = 25,
  ident_TkCloseBlock = 26,
  ident_TkComma = 27,
  ident_TkColon = 28,
  ident_TkRedefinition = 29,
  ident_TkCloseADT = 30,
  ident_TkAmpersand = 31,
  ident_TkExtern = 32,
  ident_TkEntry = 33,
  ident_TkEnum = 34,
  ident_TkEEnum = 35,
  ident_TkSwap = 36,
  ident_TkESwap = 37,
  ident_TkInclude = 38,
  ident_TkScopeId = 39,
  ident_TkLabel = 40,
  ident_TkChar = 41,
  ident_TkMacroDigit = 42,
  ident_TkNativeCode = 43,
  ident_TkWarning = 44,
  ident_TkCompound = 45,
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

static refalrts::NativeReference nat_ref_Mu("Mu", 4212599994U, 3244736276U, func_Mu);


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
    refalrts::alloc_number(vm, context[9], 3244736276UL);
    refalrts::update_name(context[4], functions[efunc_u_u_FindMuPtr]);
    refalrts::reinit_number(context[5], 4212599994UL);
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
  refalrts::reinit_number(context[5], 4212599994UL);
  refalrts::reinit_number(context[7], 3244736276UL);
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

static refalrts::NativeReference nat_ref_gen_u_u_Mum_Aux_S13B1("__Mu-Aux$13:1", 4212599994U, 3244736276U, func_gen_u_u_Mum_Aux_S13B1);


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

static refalrts::NativeReference nat_ref_u_u_Mum_Aux("__Mu-Aux", 4212599994U, 3244736276U, func_u_u_Mum_Aux);


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

static refalrts::NativeReference nat_ref_Residue("Residue", 4212599994U, 3244736276U, func_Residue);


static refalrts::FnResult func_R5m_Scan(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & R5-Scan/4 s.Mode#1/5 e.FileName#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#1 as range 2
  //DEBUG: s.Mode#1: 5
  //DEBUG: e.FileName#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckClassicTokens/4 AsIs: s.Mode#1/5 } </6 & DoScan/7 (/8 # RowCol/9 1/10 1/11 )/12 </13 & Skip-UTF-8-Bom/14 </15 & LoadFile/16 Tile{ AsIs: e.FileName#1/2 } >/17 >/18 >/19 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_DoScan]);
  refalrts::alloc_open_bracket(vm, context[8]);
  refalrts::alloc_ident(vm, context[9], identifiers[ident_RowCol]);
  refalrts::alloc_number(vm, context[10], 1UL);
  refalrts::alloc_number(vm, context[11], 1UL);
  refalrts::alloc_close_bracket(vm, context[12]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_Skipm_UTFm_8m_Bom]);
  refalrts::alloc_open_call(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_LoadFile]);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::alloc_close_call(vm, context[19]);
  refalrts::update_name(context[4], functions[efunc_CheckClassicTokens]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[15] );
  refalrts::link_brackets( context[8], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[17], context[19] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[6], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_R5m_Scan("R5-Scan", 0U, 0U, func_R5m_Scan);


static refalrts::FnResult func_Skipm_UTFm_8m_Bom(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & Skip-UTF-8-Bom/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Skip-UTF-8-Bom/4 (/9 '\357'/11 '\273'/12 '\277'/13 e.Line#1/7 )/10 e.Lines#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::char_left( '\357', context[7], context[8] );
    if( ! context[11] )
      continue;
    context[12] = refalrts::char_left( '\273', context[7], context[8] );
    if( ! context[12] )
      continue;
    context[13] = refalrts::char_left( '\277', context[7], context[8] );
    if( ! context[13] )
      continue;
    // closed e.Line#1 as range 7
    // closed e.Lines#1 as range 5
    //DEBUG: e.Line#1: 7
    //DEBUG: e.Lines#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Skip-UTF-8-Bom/4 (/9 '\357'/11 '\273'/12 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/13 AsIs: e.Line#1/7 AsIs: )/10 } Tile{ AsIs: e.Lines#1/5 } Tile{ ]] }
    refalrts::reinit_open_bracket(context[13]);
    refalrts::link_brackets( context[13], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[13], context[10] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Skip-UTF-8-Bom/4 e.Lines#1/2 >/1
  // closed e.Lines#1 as range 2
  //DEBUG: e.Lines#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Skip-UTF-8-Bom/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Lines#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Skipm_UTFm_8m_Bom("Skip-UTF-8-Bom", 4212599994U, 3244736276U, func_Skipm_UTFm_8m_Bom);


static refalrts::FnResult func_gen_CheckClassicTokens_S4C1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & CheckClassicTokens$4?1:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CheckClassicTokens$4?1:1/4 t.new#1/5 s.new#2/7 s.new#3/8 s.new#4/9 e.new#5/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#5 as range 2
  do {
    // </0 & CheckClassicTokens$4?1:1/4 t.Pos#1/5 s.Mode#1/7 'L'/8 s.Case#2/9 e.Index#2/2 >/1
    if( ! refalrts::char_term( 'L', context[8] ) )
      continue;
    // closed e.Index#2 as range 2
    //DEBUG: t.Pos#1: 5
    //DEBUG: s.Mode#1: 7
    //DEBUG: s.Case#2: 9
    //DEBUG: e.Index#2: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CheckClassicTokens$4?1:1/4 t.Pos#1/5 s.Mode#1/7 'L'/8 s.Case#2/9 e.Index#2/2 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CheckClassicTokens$4?1:1/4 t.Pos#1/5 s.Mode#1/7 'D'/8 '0'/9 e.Index#2/2 >/1
    if( ! refalrts::char_term( 'D', context[8] ) )
      continue;
    if( ! refalrts::char_term( '0', context[9] ) )
      continue;
    // closed e.Index#2 as range 2
    //DEBUG: t.Pos#1: 5
    //DEBUG: s.Mode#1: 7
    //DEBUG: e.Index#2: 2
    //2: e.Index#2
    //5: t.Pos#1
    //7: s.Mode#1
    //15: e.Index#2

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[12], functions[efunc_gen_CheckClassicTokens_S4C1B1S2C1]);
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_AllDigits]);
    refalrts::copy_evar(vm, context[15], context[16], context[2], context[3]);
    refalrts::alloc_close_call(vm, context[17]);
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[10] );
    res = refalrts::splice_elem( res, context[11] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[13] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[10] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </10 & CheckClassicTokens$4?1:1$2?1/14 # True/15 >/11
      context[12] = 0;
      context[13] = 0;
      context[14] = refalrts::call_left( context[12], context[13], context[10], context[11] );
      context[15] = refalrts::ident_left( identifiers[ident_True], context[12], context[13] );
      if( ! context[15] )
        continue;
      if( ! refalrts::empty_seq( context[12], context[13] ) )
        continue;
      //DEBUG: t.Pos#1: 5
      //DEBUG: s.Mode#1: 7
      //DEBUG: e.Index#2: 2

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & CheckClassicTokens$4?1:1/4 t.Pos#1/5 s.Mode#1/7 'D'/8 '0'/9 e.Index#2/2 </10 & CheckClassicTokens$4?1:1$2?1/14 # True/15 >/11 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[10], context[11]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CheckClassicTokens$4?1:1/4 t.Pos#1/5 s.Mode#1/7 s.Type#2/8 s.SubType#2/9 e.Index#2/2 >/1
  // closed e.Index#2 as range 2
  //DEBUG: t.Pos#1: 5
  //DEBUG: s.Mode#1: 7
  //DEBUG: s.Type#2: 8
  //DEBUG: s.SubType#2: 9
  //DEBUG: e.Index#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.Type#2/8 s.SubType#2/9 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkError/4 AsIs: t.Pos#1/5 }"Bad variable index \""/10 Tile{ AsIs: s.Mode#1/7 } '.'/12 Tile{ AsIs: e.Index#2/2 } '\"'/13 Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_chars(vm, context[10], context[11], "Bad variable index \"", 20);
  refalrts::alloc_char(vm, context[12], '.');
  refalrts::alloc_char(vm, context[13], '\"');
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_TkError]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::splice_to_freelist_open( vm, context[6], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CheckClassicTokens_S4C1B1("CheckClassicTokens$4?1:1", 4212599994U, 3244736276U, func_gen_CheckClassicTokens_S4C1B1);


static refalrts::FnResult func_CheckClassicTokens(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  // </0 & CheckClassicTokens/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CheckClassicTokens/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & CheckClassicTokens/4 s.new#3/5 t.new#4/8 e.new#5/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[9] = refalrts::tvar_left( context[8], context[6], context[7] );
    if( ! context[9] )
      continue;
    // closed e.new#5 as range 6
    do {
      // </0 & CheckClassicTokens/4 s.Mode#1/5 (/8 # TkRefal5Mode/12 t.Pos#1/13 s.NewMode#1/15 )/9 e.Tokens#1/6 >/1
      context[10] = 0;
      context[11] = 0;
      if( ! refalrts::brackets_term( context[10], context[11], context[8] ) )
        continue;
      context[12] = refalrts::ident_left( identifiers[ident_TkRefal5Mode], context[10], context[11] );
      if( ! context[12] )
        continue;
      // closed e.Tokens#1 as range 6
      context[14] = refalrts::tvar_left( context[13], context[10], context[11] );
      if( ! context[14] )
        continue;
      if( ! refalrts::svar_left( context[15], context[10], context[11] ) )
        continue;
      if( ! refalrts::empty_seq( context[10], context[11] ) )
        continue;
      //DEBUG: s.Mode#1: 5
      //DEBUG: e.Tokens#1: 6
      //DEBUG: t.Pos#1: 13
      //DEBUG: s.NewMode#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.Mode#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/8 AsIs: # TkRefal5Mode/12 AsIs: t.Pos#1/13 AsIs: s.NewMode#1/15 AsIs: )/9 } Tile{ AsIs: </0 AsIs: & CheckClassicTokens/4 } s.NewMode#1/15/16 Tile{ AsIs: e.Tokens#1/6 } Tile{ AsIs: >/1 ]] }
      refalrts::copy_stvar(vm, context[16], context[15]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[9] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[6], context[7] );
      res = refalrts::splice_evar( res, context[16], context[16] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[8], context[9] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & CheckClassicTokens/4 # Extended/5 t.NextToken#1/8 e.Tokens#1/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_Extended], context[5] ) )
        continue;
      // closed e.Tokens#1 as range 6
      //DEBUG: t.NextToken#1: 8
      //DEBUG: e.Tokens#1: 6

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.NextToken#1/8 } Tile{ AsIs: </0 AsIs: & CheckClassicTokens/4 AsIs: # Extended/5 } Tile{ AsIs: e.Tokens#1/6 } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[6], context[7] );
      res = refalrts::splice_evar( res, context[0], context[5] );
      res = refalrts::splice_evar( res, context[8], context[9] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & CheckClassicTokens/4 # Classic/5 t.new#6/8 e.new#7/6 >/1
    if( ! refalrts::ident_term( identifiers[ident_Classic], context[5] ) )
      continue;
    // closed e.new#7 as range 6
    do {
      // </0 & CheckClassicTokens/4 # Classic/5 (/8 s.new#8/12 t.new#9/13 s.new#10/15 e.new#11/10 )/9 e.new#12/6 >/1
      context[10] = 0;
      context[11] = 0;
      if( ! refalrts::brackets_term( context[10], context[11], context[8] ) )
        continue;
      // closed e.new#12 as range 6
      if( ! refalrts::svar_left( context[12], context[10], context[11] ) )
        continue;
      context[14] = refalrts::tvar_left( context[13], context[10], context[11] );
      if( ! context[14] )
        continue;
      if( ! refalrts::svar_left( context[15], context[10], context[11] ) )
        continue;
      // closed e.new#11 as range 10
      do {
        // </0 & CheckClassicTokens/4 # Classic/5 (/8 # TkName/12 t.Pos#1/13 '_'/15 e.Name#1/10 )/9 e.Tokens#1/6 >/1
        if( ! refalrts::char_term( '_', context[15] ) )
          continue;
        if( ! refalrts::ident_term( identifiers[ident_TkName], context[12] ) )
          continue;
        // closed e.Name#1 as range 10
        // closed e.Tokens#1 as range 6
        //DEBUG: t.Pos#1: 13
        //DEBUG: e.Name#1: 10
        //DEBUG: e.Tokens#1: 6

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 } # TkError/16 t.Pos#1/13/17"Illegal identifier \"_"/19 e.Name#1/10/21 Tile{ HalfReuse: '\"'/4 HalfReuse: )/5 AsIs: (/8 AsIs: # TkName/12 AsIs: t.Pos#1/13 AsIs: '_'/15 AsIs: e.Name#1/10 AsIs: )/9 } </23 & CheckClassicTokens/24 # Classic/25 Tile{ AsIs: e.Tokens#1/6 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_ident(vm, context[16], identifiers[ident_TkError]);
        refalrts::copy_evar(vm, context[17], context[18], context[13], context[14]);
        refalrts::alloc_chars(vm, context[19], context[20], "Illegal identifier \"_", 21);
        refalrts::copy_evar(vm, context[21], context[22], context[10], context[11]);
        refalrts::alloc_open_call(vm, context[23]);
        refalrts::alloc_name(vm, context[24], functions[efunc_CheckClassicTokens]);
        refalrts::alloc_ident(vm, context[25], identifiers[ident_Classic]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_char(context[4], '\"');
        refalrts::reinit_close_bracket(context[5]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[23] );
        refalrts::link_brackets( context[8], context[9] );
        refalrts::link_brackets( context[0], context[5] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[6], context[7] );
        res = refalrts::splice_evar( res, context[23], context[25] );
        res = refalrts::splice_evar( res, context[4], context[9] );
        res = refalrts::splice_evar( res, context[21], context[22] );
        res = refalrts::splice_evar( res, context[16], context[20] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & CheckClassicTokens/4 # Classic/5 (/8 # TkVariable/12 t.Pos#1/13 s.Mode#1/15 e.Index#1/10 )/9 e.Tokens#1/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[12] ) )
        continue;
      // closed e.Index#1 as range 10
      // closed e.Tokens#1 as range 6
      //DEBUG: t.Pos#1: 13
      //DEBUG: s.Mode#1: 15
      //DEBUG: e.Index#1: 10
      //DEBUG: e.Tokens#1: 6
      //6: e.Tokens#1
      //10: e.Index#1
      //13: t.Pos#1
      //15: s.Mode#1
      //22: t.Pos#1
      //23: s.Mode#1
      //27: e.Index#1

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[16]);
      refalrts::alloc_name(vm, context[18], functions[efunc_gen_CheckClassicTokens_S4C1]);
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::alloc_closure_head(vm, context[20]);
      refalrts::alloc_name(vm, context[21], functions[efunc_gen_CheckClassicTokens_S4C1B1]);
      refalrts::copy_stvar(vm, context[22], context[13]);
      refalrts::copy_stvar(vm, context[23], context[15]);
      refalrts::alloc_unwrapped_closure(vm, context[24], context[20]);
      refalrts::alloc_open_call(vm, context[25]);
      refalrts::alloc_name(vm, context[26], functions[efunc_Type]);
      refalrts::copy_evar(vm, context[27], context[28], context[10], context[11]);
      refalrts::alloc_close_call(vm, context[29]);
      refalrts::alloc_close_call(vm, context[30]);
      refalrts::alloc_close_call(vm, context[17]);
      refalrts::push_stack( vm, context[17] );
      refalrts::push_stack( vm, context[16] );
      res = refalrts::splice_elem( res, context[17] );
      refalrts::push_stack( vm, context[30] );
      refalrts::push_stack( vm, context[19] );
      res = refalrts::splice_elem( res, context[30] );
      refalrts::push_stack( vm, context[29] );
      refalrts::push_stack( vm, context[25] );
      res = refalrts::splice_elem( res, context[29] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_elem( res, context[26] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_stvar( res, context[23] );
      res = refalrts::splice_stvar( res, context[22] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_elem( res, context[16] );
      refalrts::wrap_closure( context[24] );
      refalrts::use( res );
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function(vm);
      do {
        // </16 & CheckClassicTokens$4?1/20 e.MaybeError#2/18 >/17
        context[18] = 0;
        context[19] = 0;
        context[20] = refalrts::call_left( context[18], context[19], context[16], context[17] );
        // closed e.MaybeError#2 as range 18
        //DEBUG: t.Pos#1: 13
        //DEBUG: s.Mode#1: 15
        //DEBUG: e.Index#1: 10
        //DEBUG: e.Tokens#1: 6
        //DEBUG: e.MaybeError#2: 18

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} </16 & CheckClassicTokens$4?1/20 {REMOVED TILE} >/17 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: e.MaybeError#2/18 } Tile{ AsIs: (/8 AsIs: # TkVariable/12 AsIs: t.Pos#1/13 AsIs: s.Mode#1/15 AsIs: e.Index#1/10 AsIs: )/9 } Tile{ AsIs: </0 AsIs: & CheckClassicTokens/4 AsIs: # Classic/5 } Tile{ AsIs: e.Tokens#1/6 } Tile{ AsIs: >/1 ]] }
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[8], context[9] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[6], context[7] );
        res = refalrts::splice_evar( res, context[0], context[5] );
        res = refalrts::splice_evar( res, context[8], context[9] );
        res = refalrts::splice_evar( res, context[18], context[19] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[16], context[17]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & CheckClassicTokens/4 # Classic/5 t.NextToken#1/8 e.Tokens#1/6 >/1
    // closed e.Tokens#1 as range 6
    //DEBUG: t.NextToken#1: 8
    //DEBUG: e.Tokens#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.NextToken#1/8 } Tile{ AsIs: </0 AsIs: & CheckClassicTokens/4 AsIs: # Classic/5 } Tile{ AsIs: e.Tokens#1/6 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[0], context[5] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CheckClassicTokens/4 s.Mode#1/5 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Mode#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CheckClassicTokens/4 s.Mode#1/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckClassicTokens("CheckClassicTokens", 4212599994U, 3244736276U, func_CheckClassicTokens);


static refalrts::FnResult func_AllDigits(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & AllDigits/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & AllDigits/4 e.String#1/2 >/1
    // closed e.String#1 as range 2
    //DEBUG: e.String#1: 2
    //2: e.String#1
    //10: e.String#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[5]);
    refalrts::alloc_name(vm, context[7], functions[efunc_gen_AllDigits_S1C1]);
    refalrts::alloc_open_call(vm, context[8]);
    refalrts::alloc_name(vm, context[9], functions[efunc_Type]);
    refalrts::copy_evar(vm, context[10], context[11], context[2], context[3]);
    refalrts::alloc_close_call(vm, context[12]);
    refalrts::alloc_close_call(vm, context[6]);
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[5] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[8] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_elem( res, context[5] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </5 & AllDigits$1?1/9 'D'/10 '0'/11 s.Digit#2/12 e.Tail#2/7 >/6
      context[7] = 0;
      context[8] = 0;
      context[9] = refalrts::call_left( context[7], context[8], context[5], context[6] );
      context[10] = refalrts::char_left( 'D', context[7], context[8] );
      if( ! context[10] )
        continue;
      context[11] = refalrts::char_left( '0', context[7], context[8] );
      if( ! context[11] )
        continue;
      if( ! refalrts::svar_left( context[12], context[7], context[8] ) )
        continue;
      // closed e.Tail#2 as range 7
      //DEBUG: e.String#1: 2
      //DEBUG: s.Digit#2: 12
      //DEBUG: e.Tail#2: 7

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} e.String#1/2 </5 & AllDigits$1?1/9 'D'/10 '0'/11 s.Digit#2/12 {REMOVED TILE} >/6 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & AllDigits/4 } Tile{ AsIs: e.Tail#2/7 } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[5], context[6]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & AllDigits/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & AllDigits/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_True]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AllDigits/4 e.BadString#1/2 >/1
  // closed e.BadString#1 as range 2
  //DEBUG: e.BadString#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & AllDigits/4 e.BadString#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_False]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_AllDigits("AllDigits", 4212599994U, 3244736276U, func_AllDigits);


static refalrts::FnResult func_IncLine(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & IncLine/4 (/7 # RowCol/9 s.Line#1/10 s.Col#1/11 )/8 >/1
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
  context[9] = refalrts::ident_left( identifiers[ident_RowCol], context[5], context[6] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Line#1: 10
  //DEBUG: s.Col#1: 11

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Col#1/11 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # RowCol/4 HalfReuse: </7 HalfReuse: & Inc/9 AsIs: s.Line#1/10 } >/12 Tile{ HalfReuse: 1/8 HalfReuse: )/1 ]] }
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_RowCol]);
  refalrts::reinit_open_call(context[7]);
  refalrts::reinit_name(context[9], functions[efunc_Inc]);
  refalrts::reinit_number(context[8], 1UL);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[12], context[12] );
  refalrts::splice_to_freelist_open( vm, context[10], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_IncLine("IncLine", 4212599994U, 3244736276U, func_IncLine);


static refalrts::FnResult func_IncCol(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & IncCol/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & IncCol/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & IncCol/4 (/5 # RowCol/9 s.Line#1/10 s.Col#1/11 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left( identifiers[ident_RowCol], context[7], context[8] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[7], context[8] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[7], context[8] ) )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    //DEBUG: s.Line#1: 10
    //DEBUG: s.Col#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # RowCol/9 AsIs: s.Line#1/10 } Tile{ AsIs: </0 Reuse: & Inc/4 } Tile{ AsIs: s.Col#1/11 HalfReuse: >/6 HalfReuse: )/1 ]] }
    refalrts::update_name(context[4], functions[efunc_Inc]);
    refalrts::reinit_close_call(context[6]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[5], context[1] );
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[11];
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[5], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & IncCol/4 t.new#3/5 # Len/7 e.new#4/2 >/1
  context[7] = refalrts::ident_left( identifiers[ident_Len], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 2
  do {
    // </0 & IncCol/4 t.Pos#1/5 # Len/7 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //DEBUG: t.Pos#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & IncCol/4 {REMOVED TILE} # Len/7 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Pos#1/5 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & IncCol/4 t.Pos#1/5 # Len/7 s.First#1/8 e.String#1/2 >/1
  if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.String#1 as range 2
  //DEBUG: t.Pos#1: 5
  //DEBUG: s.First#1: 8
  //DEBUG: e.String#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.First#1/8 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & IncCol/10 Tile{ AsIs: </0 AsIs: & IncCol/4 AsIs: t.Pos#1/5 HalfReuse: >/7 } # Len/11 Tile{ AsIs: e.String#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_IncCol]);
  refalrts::alloc_ident(vm, context[11], identifiers[ident_Len]);
  refalrts::reinit_close_call(context[7]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_IncCol("IncCol", 4212599994U, 3244736276U, func_IncCol);


static refalrts::FnResult func_DoScan(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 42 elems
  refalrts::Iter context[42];
  refalrts::zeros( context, 42 );
  // </0 & DoScan/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoScan/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & DoScan/4 t.Pos#1/5 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //DEBUG: t.Pos#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkEOF/4 AsIs: t.Pos#1/5 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_TkEOF]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[0], context[1] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoScan/4 t.new#3/5 (/9 e.new#4/7 )/10 e.new#5/2 >/1
  context[7] = 0;
  context[8] = 0;
  context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[9], context[10]);
  // closed e.new#4 as range 7
  // closed e.new#5 as range 2
  do {
    // </0 & DoScan/4 t.new#6/5 (/9 s.new#7/13 e.new#8/11 )/10 e.new#9/2 >/1
    context[11] = context[7];
    context[12] = context[8];
    // closed e.new#9 as range 2
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    // closed e.new#8 as range 11
    do {
      // </0 & DoScan/4 t.Pos#1/5 (/9 ' '/13 e.Line#1/11 )/10 e.Lines#1/2 >/1
      if( ! refalrts::char_term( ' ', context[13] ) )
        continue;
      // closed e.Line#1 as range 11
      // closed e.Lines#1 as range 2
      //DEBUG: t.Pos#1: 5
      //DEBUG: e.Line#1: 11
      //DEBUG: e.Lines#1: 2

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </14 & DoScan/15 Tile{ AsIs: </0 Reuse: & IncCol/4 AsIs: t.Pos#1/5 HalfReuse: >/9 HalfReuse: (/13 AsIs: e.Line#1/11 AsIs: )/10 AsIs: e.Lines#1/2 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[14]);
      refalrts::alloc_name(vm, context[15], functions[efunc_DoScan]);
      refalrts::update_name(context[4], functions[efunc_IncCol]);
      refalrts::reinit_close_call(context[9]);
      refalrts::reinit_open_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[14] );
      refalrts::link_brackets( context[13], context[10] );
      refalrts::push_stack( vm, context[9] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[0];
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoScan/4 t.Pos#1/5 (/9 '\t'/13 e.Line#1/11 )/10 e.Lines#1/2 >/1
      if( ! refalrts::char_term( '\t', context[13] ) )
        continue;
      // closed e.Line#1 as range 11
      // closed e.Lines#1 as range 2
      //DEBUG: t.Pos#1: 5
      //DEBUG: e.Line#1: 11
      //DEBUG: e.Lines#1: 2

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </14 & DoScan/15 Tile{ AsIs: </0 Reuse: & IncCol/4 AsIs: t.Pos#1/5 HalfReuse: >/9 HalfReuse: (/13 AsIs: e.Line#1/11 AsIs: )/10 AsIs: e.Lines#1/2 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[14]);
      refalrts::alloc_name(vm, context[15], functions[efunc_DoScan]);
      refalrts::update_name(context[4], functions[efunc_IncCol]);
      refalrts::reinit_close_call(context[9]);
      refalrts::reinit_open_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[14] );
      refalrts::link_brackets( context[13], context[10] );
      refalrts::push_stack( vm, context[9] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[0];
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoScan/4 t.Pos#1/5 (/9 '\r'/13 e.Line#1/11 )/10 e.Lines#1/2 >/1
    if( ! refalrts::char_term( '\r', context[13] ) )
      continue;
    // closed e.Line#1 as range 11
    // closed e.Lines#1 as range 2
    //DEBUG: t.Pos#1: 5
    //DEBUG: e.Line#1: 11
    //DEBUG: e.Lines#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </14 & DoScan/15 Tile{ AsIs: </0 Reuse: & IncCol/4 AsIs: t.Pos#1/5 HalfReuse: >/9 HalfReuse: (/13 AsIs: e.Line#1/11 AsIs: )/10 AsIs: e.Lines#1/2 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_DoScan]);
    refalrts::update_name(context[4], functions[efunc_IncCol]);
    refalrts::reinit_close_call(context[9]);
    refalrts::reinit_open_bracket(context[13]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[14] );
    refalrts::link_brackets( context[13], context[10] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoScan/4 t.Pos#1/5 (/9 )/10 e.Lines#1/2 >/1
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    // closed e.Lines#1 as range 2
    //DEBUG: t.Pos#1: 5
    //DEBUG: e.Lines#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoScan/4 } </11 Tile{ HalfReuse: & IncLine/9 } Tile{ AsIs: t.Pos#1/5 } Tile{ HalfReuse: >/10 AsIs: e.Lines#1/2 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[11]);
    refalrts::reinit_name(context[9], functions[efunc_IncLine]);
    refalrts::reinit_close_call(context[10]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoScan/4 t.new#6/5 (/9 s.new#7/11 e.new#8/7 )/10 e.new#9/2 >/1
  // closed e.new#9 as range 2
  if( ! refalrts::svar_left( context[11], context[7], context[8] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#8 as range 7
  do {
    // </0 & DoScan/4 t.Pos#1/5 (/9 s.Var#1/11 '.'/14 e.Line#1/12 )/10 e.Lines#1/2 >/1
    context[12] = context[7];
    context[13] = context[8];
    context[14] = refalrts::char_left( '.', context[12], context[13] );
    if( ! context[14] )
      continue;
    // closed e.Line#1 as range 12
    // closed e.Lines#1 as range 2
    //DEBUG: t.Pos#1: 5
    //DEBUG: s.Var#1: 11
    //DEBUG: e.Line#1: 12
    //DEBUG: e.Lines#1: 2
    //2: e.Lines#1
    //5: t.Pos#1
    //11: s.Var#1
    //12: e.Line#1
    //20: s.Var#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_name(vm, context[17], functions[efunc_gen_DoScan_S6C1]);
    refalrts::alloc_open_call(vm, context[18]);
    refalrts::alloc_name(vm, context[19], functions[efunc_IsVarType]);
    refalrts::copy_stvar(vm, context[20], context[11]);
    refalrts::alloc_close_call(vm, context[21]);
    refalrts::alloc_close_call(vm, context[16]);
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[15] );
    res = refalrts::splice_elem( res, context[16] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[18] );
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
      // </15 & DoScan$6?1/19 # True/20 >/16
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::call_left( context[17], context[18], context[15], context[16] );
      context[20] = refalrts::ident_left( identifiers[ident_True], context[17], context[18] );
      if( ! context[20] )
        continue;
      if( ! refalrts::empty_seq( context[17], context[18] ) )
        continue;
      //DEBUG: t.Pos#1: 5
      //DEBUG: s.Var#1: 11
      //DEBUG: e.Line#1: 12
      //DEBUG: e.Lines#1: 2

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} & DoScan$6?1/19 # True/20 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoScan-Var/4 AsIs: t.Pos#1/5 AsIs: (/9 AsIs: s.Var#1/11 AsIs: '.'/14 } Tile{ HalfReuse: )/16 HalfReuse: (/1 } Tile{ AsIs: e.Line#1/12 } Tile{ AsIs: )/10 AsIs: e.Lines#1/2 HalfReuse: >/15 } Tile{ ]] }
      refalrts::update_name(context[4], functions[efunc_DoScanm_Var]);
      refalrts::reinit_close_bracket(context[16]);
      refalrts::reinit_open_bracket(context[1]);
      refalrts::reinit_close_call(context[15]);
      refalrts::push_stack( vm, context[15] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[1], context[10] );
      refalrts::link_brackets( context[9], context[16] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[10], context[15] );
      res = refalrts::splice_evar( res, context[12], context[13] );
      res = refalrts::splice_evar( res, context[16], context[1] );
      refalrts::splice_to_freelist_open( vm, context[14], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[15], context[16]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoScan/4 t.Pos#1/5 (/9 s.StartIdent#1/11 e.Line#1/7 )/10 e.Lines#1/2 >/1
    // closed e.Line#1 as range 7
    // closed e.Lines#1 as range 2
    //DEBUG: t.Pos#1: 5
    //DEBUG: s.StartIdent#1: 11
    //DEBUG: e.Line#1: 7
    //DEBUG: e.Lines#1: 2
    //2: e.Lines#1
    //5: t.Pos#1
    //7: e.Line#1
    //11: s.StartIdent#1
    //17: s.StartIdent#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[14], functions[efunc_gen_DoScan_S7C1]);
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_name(vm, context[16], functions[efunc_IsStartIdent]);
    refalrts::copy_stvar(vm, context[17], context[11]);
    refalrts::alloc_close_call(vm, context[18]);
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[12] );
    res = refalrts::splice_elem( res, context[13] );
    refalrts::push_stack( vm, context[18] );
    refalrts::push_stack( vm, context[15] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_stvar( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[12] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </12 & DoScan$7?1/16 # True/17 >/13
      context[14] = 0;
      context[15] = 0;
      context[16] = refalrts::call_left( context[14], context[15], context[12], context[13] );
      context[17] = refalrts::ident_left( identifiers[ident_True], context[14], context[15] );
      if( ! context[17] )
        continue;
      if( ! refalrts::empty_seq( context[14], context[15] ) )
        continue;
      //DEBUG: t.Pos#1: 5
      //DEBUG: s.StartIdent#1: 11
      //DEBUG: e.Line#1: 7
      //DEBUG: e.Lines#1: 2

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} & DoScan$7?1/16 # True/17 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoScan-Ident/4 AsIs: t.Pos#1/5 AsIs: (/9 AsIs: s.StartIdent#1/11 } Tile{ HalfReuse: )/13 HalfReuse: (/1 } Tile{ AsIs: e.Line#1/7 } Tile{ AsIs: )/10 AsIs: e.Lines#1/2 HalfReuse: >/12 } Tile{ ]] }
      refalrts::update_name(context[4], functions[efunc_DoScanm_Ident]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::reinit_open_bracket(context[1]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[1], context[10] );
      refalrts::link_brackets( context[9], context[13] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[10], context[12] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_evar( res, context[13], context[1] );
      refalrts::splice_to_freelist_open( vm, context[11], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[12], context[13]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoScan/4 t.Pos#1/5 (/9 s.Punctuation#1/11 e.Line#1/7 )/10 e.Lines#1/2 >/1
    // closed e.Line#1 as range 7
    // closed e.Lines#1 as range 2
    //DEBUG: t.Pos#1: 5
    //DEBUG: s.Punctuation#1: 11
    //DEBUG: e.Line#1: 7
    //DEBUG: e.Lines#1: 2
    //2: e.Lines#1
    //5: t.Pos#1
    //7: e.Line#1
    //11: s.Punctuation#1
    //17: s.Punctuation#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[14], functions[efunc_gen_DoScan_S8C1]);
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_name(vm, context[16], functions[efunc_IsPunctuation]);
    refalrts::copy_stvar(vm, context[17], context[11]);
    refalrts::alloc_close_call(vm, context[18]);
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[12] );
    res = refalrts::splice_elem( res, context[13] );
    refalrts::push_stack( vm, context[18] );
    refalrts::push_stack( vm, context[15] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_stvar( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[12] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </12 & DoScan$8?1/16 s.TokType#2/17 >/13
      context[14] = 0;
      context[15] = 0;
      context[16] = refalrts::call_left( context[14], context[15], context[12], context[13] );
      if( ! refalrts::svar_left( context[17], context[14], context[15] ) )
        continue;
      if( ! refalrts::empty_seq( context[14], context[15] ) )
        continue;
      //DEBUG: t.Pos#1: 5
      //DEBUG: s.Punctuation#1: 11
      //DEBUG: e.Line#1: 7
      //DEBUG: e.Lines#1: 2
      //DEBUG: s.TokType#2: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Punctuation#1/11 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.TokType#2/17 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: s.TokType2 #17/4 AsIs: t.Pos#1/5 HalfReuse: )/9 } </18 Tile{ Reuse: & DoScan/16 } </19 & IncCol/20 t.Pos#1/5/21 Tile{ AsIs: >/13 HalfReuse: (/1 } Tile{ AsIs: e.Line#1/7 } Tile{ AsIs: )/10 AsIs: e.Lines#1/2 HalfReuse: >/12 } Tile{ ]] }
      refalrts::alloc_open_call(vm, context[18]);
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::alloc_name(vm, context[20], functions[efunc_IncCol]);
      refalrts::copy_evar(vm, context[21], context[22], context[5], context[6]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_svar( context[4], context[17] );
      refalrts::reinit_close_bracket(context[9]);
      refalrts::update_name(context[16], functions[efunc_DoScan]);
      refalrts::reinit_open_bracket(context[1]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[18] );
      refalrts::link_brackets( context[1], context[10] );
      refalrts::push_stack( vm, context[13] );
      refalrts::push_stack( vm, context[19] );
      refalrts::link_brackets( context[0], context[9] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[10], context[12] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_evar( res, context[13], context[1] );
      res = refalrts::splice_evar( res, context[19], context[22] );
      res = refalrts::splice_evar( res, context[16], context[16] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      refalrts::splice_to_freelist_open( vm, context[9], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[12], context[13]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoScan/4 (/5 # RowCol/14 s.new#10/16 1/15 )/6 (/9 '*'/11 e.new#11/7 )/10 e.new#12/2 >/1
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_term( context[12], context[13], context[5] ) )
      continue;
    if( ! refalrts::char_term( '*', context[11] ) )
      continue;
    context[14] = refalrts::ident_left( identifiers[ident_RowCol], context[12], context[13] );
    if( ! context[14] )
      continue;
    context[15] = refalrts::number_right( 1UL, context[12], context[13] );
    if( ! context[15] )
      continue;
    // closed e.new#11 as range 7
    // closed e.new#12 as range 2
    if( ! refalrts::svar_left( context[16], context[12], context[13] ) )
      continue;
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;
    do {
      // </0 & DoScan/4 (/5 # RowCol/14 s.new#13/16 1/15 )/6 (/9 '*'/11 '$'/19 e.new#14/17 s.new#15/26 s.new#16/25 s.new#17/24 s.new#18/23 s.new#19/22 s.new#20/21 s.new#21/20 )/10 e.new#22/2 >/1
      context[17] = context[7];
      context[18] = context[8];
      context[19] = refalrts::char_left( '$', context[17], context[18] );
      if( ! context[19] )
        continue;
      // closed e.new#22 as range 2
      if( ! refalrts::svar_right( context[20], context[17], context[18] ) )
        continue;
      if( ! refalrts::svar_right( context[21], context[17], context[18] ) )
        continue;
      if( ! refalrts::svar_right( context[22], context[17], context[18] ) )
        continue;
      if( ! refalrts::svar_right( context[23], context[17], context[18] ) )
        continue;
      if( ! refalrts::svar_right( context[24], context[17], context[18] ) )
        continue;
      if( ! refalrts::svar_right( context[25], context[17], context[18] ) )
        continue;
      if( ! refalrts::svar_right( context[26], context[17], context[18] ) )
        continue;
      // closed e.new#14 as range 17
      do {
        // </0 & DoScan/4 (/5 # RowCol/14 s.Line#1/16 1/15 )/6 (/9 '*'/11 '$'/19 'C'/26 'L'/25 'A'/24 'S'/23 'S'/22 'I'/21 'C'/20 )/10 e.Lines#1/2 >/1
        if( ! refalrts::char_term( 'C', context[26] ) )
          continue;
        if( ! refalrts::char_term( 'L', context[25] ) )
          continue;
        if( ! refalrts::char_term( 'A', context[24] ) )
          continue;
        if( ! refalrts::char_term( 'S', context[23] ) )
          continue;
        if( ! refalrts::char_term( 'S', context[22] ) )
          continue;
        if( ! refalrts::char_term( 'I', context[21] ) )
          continue;
        if( ! refalrts::char_term( 'C', context[20] ) )
          continue;
        if( ! refalrts::empty_seq( context[17], context[18] ) )
          continue;
        // closed e.Lines#1 as range 2
        //DEBUG: s.Line#1: 16
        //DEBUG: e.Lines#1: 2

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkRefal5Mode/4 AsIs: (/5 AsIs: # RowCol/14 AsIs: s.Line#1/16 AsIs: 1/15 AsIs: )/6 HalfReuse: # Classic/9 HalfReuse: )/11 HalfReuse: </19 HalfReuse: & DoScan/26 HalfReuse: (/25 HalfReuse: # RowCol/24 HalfReuse: </23 HalfReuse: & Inc/22 HalfReuse: s.Line1 #16/21 HalfReuse: >/20 HalfReuse: 1/10 } )/27 Tile{ AsIs: e.Lines#1/2 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_close_bracket(vm, context[27]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_ident(context[4], identifiers[ident_TkRefal5Mode]);
        refalrts::reinit_ident(context[9], identifiers[ident_Classic]);
        refalrts::reinit_close_bracket(context[11]);
        refalrts::reinit_open_call(context[19]);
        refalrts::reinit_name(context[26], functions[efunc_DoScan]);
        refalrts::reinit_open_bracket(context[25]);
        refalrts::reinit_ident(context[24], identifiers[ident_RowCol]);
        refalrts::reinit_open_call(context[23]);
        refalrts::reinit_name(context[22], functions[efunc_Inc]);
        refalrts::reinit_svar( context[21], context[16] );
        refalrts::reinit_close_call(context[20]);
        refalrts::reinit_number(context[10], 1UL);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[19] );
        refalrts::link_brackets( context[25], context[27] );
        refalrts::push_stack( vm, context[20] );
        refalrts::push_stack( vm, context[23] );
        refalrts::link_brackets( context[0], context[11] );
        refalrts::link_brackets( context[5], context[6] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[2], context[3] );
        res = refalrts::splice_evar( res, context[27], context[27] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoScan/4 (/5 # RowCol/14 s.new#23/16 1/15 )/6 (/9 '*'/11 '$'/19 e.new#31/27 s.new#32/29 s.new#30/26 s.new#29/25 s.new#28/24 s.new#27/23 s.new#26/22 s.new#25/21 s.new#24/20 )/10 e.new#33/2 >/1
      context[27] = context[17];
      context[28] = context[18];
      // closed e.new#33 as range 2
      if( ! refalrts::svar_right( context[29], context[27], context[28] ) )
        continue;
      // closed e.new#31 as range 27
      do {
        // </0 & DoScan/4 (/5 # RowCol/14 s.new#34/16 1/15 )/6 (/9 '*'/11 '$'/19 s.new#42/29 s.new#41/26 s.new#40/25 s.new#39/24 s.new#38/23 s.new#37/22 s.new#36/21 s.new#35/20 )/10 e.new#43/2 >/1
        if( ! refalrts::empty_seq( context[27], context[28] ) )
          continue;
        // closed e.new#43 as range 2
        do {
          // </0 & DoScan/4 (/5 # RowCol/14 s.Line#1/16 1/15 )/6 (/9 '*'/11 '$'/19 'E'/29 'X'/26 'T'/25 'E'/24 'N'/23 'D'/22 'E'/21 'D'/20 )/10 e.Lines#1/2 >/1
          if( ! refalrts::char_term( 'E', context[29] ) )
            continue;
          if( ! refalrts::char_term( 'X', context[26] ) )
            continue;
          if( ! refalrts::char_term( 'T', context[25] ) )
            continue;
          if( ! refalrts::char_term( 'E', context[24] ) )
            continue;
          if( ! refalrts::char_term( 'N', context[23] ) )
            continue;
          if( ! refalrts::char_term( 'D', context[22] ) )
            continue;
          if( ! refalrts::char_term( 'E', context[21] ) )
            continue;
          if( ! refalrts::char_term( 'D', context[20] ) )
            continue;
          // closed e.Lines#1 as range 2
          //DEBUG: s.Line#1: 16
          //DEBUG: e.Lines#1: 2

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkRefal5Mode/4 AsIs: (/5 AsIs: # RowCol/14 AsIs: s.Line#1/16 AsIs: 1/15 AsIs: )/6 HalfReuse: # Extended/9 HalfReuse: )/11 HalfReuse: </19 HalfReuse: & DoScan/29 HalfReuse: (/26 HalfReuse: # RowCol/25 HalfReuse: </24 HalfReuse: & Inc/23 HalfReuse: s.Line1 #16/22 HalfReuse: >/21 HalfReuse: 1/20 AsIs: )/10 AsIs: e.Lines#1/2 AsIs: >/1 ]] }
          refalrts::reinit_open_bracket(context[0]);
          refalrts::reinit_ident(context[4], identifiers[ident_TkRefal5Mode]);
          refalrts::reinit_ident(context[9], identifiers[ident_Extended]);
          refalrts::reinit_close_bracket(context[11]);
          refalrts::reinit_open_call(context[19]);
          refalrts::reinit_name(context[29], functions[efunc_DoScan]);
          refalrts::reinit_open_bracket(context[26]);
          refalrts::reinit_ident(context[25], identifiers[ident_RowCol]);
          refalrts::reinit_open_call(context[24]);
          refalrts::reinit_name(context[23], functions[efunc_Inc]);
          refalrts::reinit_svar( context[22], context[16] );
          refalrts::reinit_close_call(context[21]);
          refalrts::reinit_number(context[20], 1UL);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[19] );
          refalrts::link_brackets( context[26], context[10] );
          refalrts::push_stack( vm, context[21] );
          refalrts::push_stack( vm, context[24] );
          refalrts::link_brackets( context[0], context[11] );
          refalrts::link_brackets( context[5], context[6] );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & DoScan/4 (/5 # RowCol/14 s.Line#1/16 1/15 )/6 (/9 '*'/11 '$'/19 'C'/29 'L'/26 'A'/25 'S'/24 'S'/23 'I'/22 'C'/21 ';'/20 )/10 e.Lines#1/2 >/1
        if( ! refalrts::char_term( 'C', context[29] ) )
          continue;
        if( ! refalrts::char_term( 'L', context[26] ) )
          continue;
        if( ! refalrts::char_term( 'A', context[25] ) )
          continue;
        if( ! refalrts::char_term( 'S', context[24] ) )
          continue;
        if( ! refalrts::char_term( 'S', context[23] ) )
          continue;
        if( ! refalrts::char_term( 'I', context[22] ) )
          continue;
        if( ! refalrts::char_term( 'C', context[21] ) )
          continue;
        if( ! refalrts::char_term( ';', context[20] ) )
          continue;
        // closed e.Lines#1 as range 2
        //DEBUG: s.Line#1: 16
        //DEBUG: e.Lines#1: 2

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkRefal5Mode/4 AsIs: (/5 AsIs: # RowCol/14 AsIs: s.Line#1/16 AsIs: 1/15 AsIs: )/6 HalfReuse: # Classic/9 HalfReuse: )/11 HalfReuse: </19 HalfReuse: & DoScan/29 HalfReuse: (/26 HalfReuse: # RowCol/25 HalfReuse: </24 HalfReuse: & Inc/23 HalfReuse: s.Line1 #16/22 HalfReuse: >/21 HalfReuse: 1/20 AsIs: )/10 AsIs: e.Lines#1/2 AsIs: >/1 ]] }
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_ident(context[4], identifiers[ident_TkRefal5Mode]);
        refalrts::reinit_ident(context[9], identifiers[ident_Classic]);
        refalrts::reinit_close_bracket(context[11]);
        refalrts::reinit_open_call(context[19]);
        refalrts::reinit_name(context[29], functions[efunc_DoScan]);
        refalrts::reinit_open_bracket(context[26]);
        refalrts::reinit_ident(context[25], identifiers[ident_RowCol]);
        refalrts::reinit_open_call(context[24]);
        refalrts::reinit_name(context[23], functions[efunc_Inc]);
        refalrts::reinit_svar( context[22], context[16] );
        refalrts::reinit_close_call(context[21]);
        refalrts::reinit_number(context[20], 1UL);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[19] );
        refalrts::link_brackets( context[26], context[10] );
        refalrts::push_stack( vm, context[21] );
        refalrts::push_stack( vm, context[24] );
        refalrts::link_brackets( context[0], context[11] );
        refalrts::link_brackets( context[5], context[6] );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoScan/4 (/5 # RowCol/14 s.Line#1/16 1/15 )/6 (/9 '*'/11 '$'/19 'E'/32 'X'/29 'T'/26 'E'/25 'N'/24 'D'/23 'E'/22 'D'/21 ';'/20 )/10 e.Lines#1/2 >/1
      context[30] = context[27];
      context[31] = context[28];
      if( ! refalrts::char_term( 'X', context[29] ) )
        continue;
      if( ! refalrts::char_term( 'T', context[26] ) )
        continue;
      if( ! refalrts::char_term( 'E', context[25] ) )
        continue;
      if( ! refalrts::char_term( 'N', context[24] ) )
        continue;
      if( ! refalrts::char_term( 'D', context[23] ) )
        continue;
      if( ! refalrts::char_term( 'E', context[22] ) )
        continue;
      if( ! refalrts::char_term( 'D', context[21] ) )
        continue;
      if( ! refalrts::char_term( ';', context[20] ) )
        continue;
      context[32] = refalrts::char_left( 'E', context[30], context[31] );
      if( ! context[32] )
        continue;
      if( ! refalrts::empty_seq( context[30], context[31] ) )
        continue;
      // closed e.Lines#1 as range 2
      //DEBUG: s.Line#1: 16
      //DEBUG: e.Lines#1: 2

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} )/10 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkRefal5Mode/4 AsIs: (/5 AsIs: # RowCol/14 AsIs: s.Line#1/16 AsIs: 1/15 AsIs: )/6 HalfReuse: # Extended/9 HalfReuse: )/11 HalfReuse: </19 HalfReuse: & DoScan/32 HalfReuse: (/29 HalfReuse: # RowCol/26 HalfReuse: </25 HalfReuse: & Inc/24 HalfReuse: s.Line1 #16/23 HalfReuse: >/22 HalfReuse: 1/21 HalfReuse: )/20 } Tile{ AsIs: e.Lines#1/2 } Tile{ AsIs: >/1 ]] }
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TkRefal5Mode]);
      refalrts::reinit_ident(context[9], identifiers[ident_Extended]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::reinit_open_call(context[19]);
      refalrts::reinit_name(context[32], functions[efunc_DoScan]);
      refalrts::reinit_open_bracket(context[29]);
      refalrts::reinit_ident(context[26], identifiers[ident_RowCol]);
      refalrts::reinit_open_call(context[25]);
      refalrts::reinit_name(context[24], functions[efunc_Inc]);
      refalrts::reinit_svar( context[23], context[16] );
      refalrts::reinit_close_call(context[22]);
      refalrts::reinit_number(context[21], 1UL);
      refalrts::reinit_close_bracket(context[20]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[19] );
      refalrts::link_brackets( context[29], context[20] );
      refalrts::push_stack( vm, context[22] );
      refalrts::push_stack( vm, context[25] );
      refalrts::link_brackets( context[0], context[11] );
      refalrts::link_brackets( context[5], context[6] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[2], context[3] );
      refalrts::splice_to_freelist_open( vm, context[20], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoScan/4 (/5 # RowCol/14 s.Line#1/16 1/15 )/6 (/9 '*'/11 e.Comment#1/7 )/10 e.Lines#1/2 >/1
    // closed e.Comment#1 as range 7
    // closed e.Lines#1 as range 2
    //DEBUG: s.Line#1: 16
    //DEBUG: e.Comment#1: 7
    //DEBUG: e.Lines#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Comment#1/7 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoScan/4 AsIs: (/5 AsIs: # RowCol/14 } Tile{ HalfReuse: </9 HalfReuse: & Inc/11 } Tile{ AsIs: s.Line#1/16 HalfReuse: >/15 HalfReuse: 1/6 } Tile{ AsIs: )/10 AsIs: e.Lines#1/2 AsIs: >/1 ]] }
    refalrts::reinit_open_call(context[9]);
    refalrts::reinit_name(context[11], functions[efunc_Inc]);
    refalrts::reinit_close_call(context[15]);
    refalrts::reinit_number(context[6], 1UL);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[5], context[10] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[16], context[6] );
    res = refalrts::splice_evar( res, context[9], context[11] );
    refalrts::splice_to_freelist_open( vm, context[14], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoScan/4 t.new#10/5 (/9 '<'/11 s.new#11/14 e.new#12/12 )/10 e.new#13/2 >/1
    context[12] = context[7];
    context[13] = context[8];
    if( ! refalrts::char_term( '<', context[11] ) )
      continue;
    // closed e.new#13 as range 2
    if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
      continue;
    // closed e.new#12 as range 12
    do {
      // </0 & DoScan/4 t.Pos#1/5 (/9 '<'/11 s.Var#1/14 '.'/17 e.Line#1/15 )/10 e.Lines#1/2 >/1
      context[15] = context[12];
      context[16] = context[13];
      context[17] = refalrts::char_left( '.', context[15], context[16] );
      if( ! context[17] )
        continue;
      // closed e.Line#1 as range 15
      // closed e.Lines#1 as range 2
      //DEBUG: t.Pos#1: 5
      //DEBUG: s.Var#1: 14
      //DEBUG: e.Line#1: 15
      //DEBUG: e.Lines#1: 2
      //2: e.Lines#1
      //5: t.Pos#1
      //14: s.Var#1
      //15: e.Line#1
      //23: s.Var#1

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[18]);
      refalrts::alloc_name(vm, context[20], functions[efunc_gen_DoScan_S14C1]);
      refalrts::alloc_open_call(vm, context[21]);
      refalrts::alloc_name(vm, context[22], functions[efunc_IsVarType]);
      refalrts::copy_stvar(vm, context[23], context[14]);
      refalrts::alloc_close_call(vm, context[24]);
      refalrts::alloc_close_call(vm, context[19]);
      refalrts::push_stack( vm, context[19] );
      refalrts::push_stack( vm, context[18] );
      res = refalrts::splice_elem( res, context[19] );
      refalrts::push_stack( vm, context[24] );
      refalrts::push_stack( vm, context[21] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_stvar( res, context[23] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_elem( res, context[18] );
      refalrts::use( res );
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function(vm);
      do {
        // </18 & DoScan$14?1/22 # True/23 >/19
        context[20] = 0;
        context[21] = 0;
        context[22] = refalrts::call_left( context[20], context[21], context[18], context[19] );
        context[23] = refalrts::ident_left( identifiers[ident_True], context[20], context[21] );
        if( ! context[23] )
          continue;
        if( ! refalrts::empty_seq( context[20], context[21] ) )
          continue;
        //DEBUG: t.Pos#1: 5
        //DEBUG: s.Var#1: 14
        //DEBUG: e.Line#1: 15
        //DEBUG: e.Lines#1: 2

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } (/24 Tile{ HalfReuse: # TkOpenCall/22 } t.Pos#1/5/25 Tile{ HalfReuse: )/23 HalfReuse: </19 HalfReuse: & DoScan/1 } Tile{ AsIs: </0 Reuse: & IncCol/4 AsIs: t.Pos#1/5 HalfReuse: >/9 HalfReuse: (/11 AsIs: s.Var#1/14 AsIs: '.'/17 AsIs: e.Line#1/15 AsIs: )/10 AsIs: e.Lines#1/2 HalfReuse: >/18 } Tile{ ]] }
        refalrts::alloc_open_bracket(vm, context[24]);
        refalrts::copy_evar(vm, context[25], context[26], context[5], context[6]);
        refalrts::reinit_ident(context[22], identifiers[ident_TkOpenCall]);
        refalrts::reinit_close_bracket(context[23]);
        refalrts::reinit_open_call(context[19]);
        refalrts::reinit_name(context[1], functions[efunc_DoScan]);
        refalrts::update_name(context[4], functions[efunc_IncCol]);
        refalrts::reinit_close_call(context[9]);
        refalrts::reinit_open_bracket(context[11]);
        refalrts::reinit_close_call(context[18]);
        refalrts::push_stack( vm, context[18] );
        refalrts::push_stack( vm, context[19] );
        refalrts::link_brackets( context[11], context[10] );
        refalrts::push_stack( vm, context[9] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[24], context[23] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[0], context[18] );
        res = refalrts::splice_evar( res, context[23], context[1] );
        res = refalrts::splice_evar( res, context[25], context[26] );
        res = refalrts::splice_evar( res, context[22], context[22] );
        res = refalrts::splice_evar( res, context[24], context[24] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[18], context[19]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoScan/4 t.Pos#1/5 (/9 '<'/11 s.StartIdent#1/14 e.Line#1/12 )/10 e.Lines#1/2 >/1
    // closed e.Line#1 as range 12
    // closed e.Lines#1 as range 2
    //DEBUG: t.Pos#1: 5
    //DEBUG: s.StartIdent#1: 14
    //DEBUG: e.Line#1: 12
    //DEBUG: e.Lines#1: 2
    //2: e.Lines#1
    //5: t.Pos#1
    //12: e.Line#1
    //14: s.StartIdent#1
    //20: s.StartIdent#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_name(vm, context[17], functions[efunc_gen_DoScan_S15C1]);
    refalrts::alloc_open_call(vm, context[18]);
    refalrts::alloc_name(vm, context[19], functions[efunc_IsStartIdent]);
    refalrts::copy_stvar(vm, context[20], context[14]);
    refalrts::alloc_close_call(vm, context[21]);
    refalrts::alloc_close_call(vm, context[16]);
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[15] );
    res = refalrts::splice_elem( res, context[16] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[18] );
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
      // </15 & DoScan$15?1/19 # True/20 >/16
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::call_left( context[17], context[18], context[15], context[16] );
      context[20] = refalrts::ident_left( identifiers[ident_True], context[17], context[18] );
      if( ! context[20] )
        continue;
      if( ! refalrts::empty_seq( context[17], context[18] ) )
        continue;
      //DEBUG: t.Pos#1: 5
      //DEBUG: s.StartIdent#1: 14
      //DEBUG: e.Line#1: 12
      //DEBUG: e.Lines#1: 2

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} & DoScan$15?1/19 # True/20 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoScan-Ident/4 AsIs: t.Pos#1/5 AsIs: (/9 AsIs: '<'/11 AsIs: s.StartIdent#1/14 } Tile{ HalfReuse: )/16 HalfReuse: (/1 } Tile{ AsIs: e.Line#1/12 } Tile{ AsIs: )/10 AsIs: e.Lines#1/2 HalfReuse: >/15 } Tile{ ]] }
      refalrts::update_name(context[4], functions[efunc_DoScanm_Ident]);
      refalrts::reinit_close_bracket(context[16]);
      refalrts::reinit_open_bracket(context[1]);
      refalrts::reinit_close_call(context[15]);
      refalrts::push_stack( vm, context[15] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[1], context[10] );
      refalrts::link_brackets( context[9], context[16] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[10], context[15] );
      res = refalrts::splice_evar( res, context[12], context[13] );
      res = refalrts::splice_evar( res, context[16], context[1] );
      refalrts::splice_to_freelist_open( vm, context[14], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[15], context[16]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoScan/4 t.Pos#1/5 (/9 '$'/11 e.Line#1/7 )/10 e.Lines#1/2 >/1
    if( ! refalrts::char_term( '$', context[11] ) )
      continue;
    // closed e.Line#1 as range 7
    // closed e.Lines#1 as range 2
    //DEBUG: t.Pos#1: 5
    //DEBUG: e.Line#1: 7
    //DEBUG: e.Lines#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/9 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoScan-Keyword/4 AsIs: t.Pos#1/5 } Tile{ HalfReuse: (/11 AsIs: e.Line#1/7 AsIs: )/10 AsIs: e.Lines#1/2 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_DoScanm_Keyword]);
    refalrts::reinit_open_bracket(context[11]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[11], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[11];
    refalrts::splice_to_freelist_open( vm, context[6], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoScan/4 t.Pos#1/5 (/9 '\''/11 e.Line#1/7 )/10 e.Lines#1/2 >/1
    if( ! refalrts::char_term( '\'', context[11] ) )
      continue;
    // closed e.Line#1 as range 7
    // closed e.Lines#1 as range 2
    //DEBUG: t.Pos#1: 5
    //DEBUG: e.Line#1: 7
    //DEBUG: e.Lines#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </12 & DoScan-Chars/13 Tile{ AsIs: </0 Reuse: & IncCol/4 AsIs: t.Pos#1/5 HalfReuse: >/9 HalfReuse: (/11 AsIs: e.Line#1/7 AsIs: )/10 AsIs: e.Lines#1/2 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_DoScanm_Chars]);
    refalrts::update_name(context[4], functions[efunc_IncCol]);
    refalrts::reinit_close_call(context[9]);
    refalrts::reinit_open_bracket(context[11]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[12] );
    refalrts::link_brackets( context[11], context[10] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoScan/4 t.Pos#1/5 (/9 '/'/11 '*'/14 e.Line#1/12 )/10 e.Lines#1/2 >/1
    context[12] = context[7];
    context[13] = context[8];
    if( ! refalrts::char_term( '/', context[11] ) )
      continue;
    context[14] = refalrts::char_left( '*', context[12], context[13] );
    if( ! context[14] )
      continue;
    // closed e.Line#1 as range 12
    // closed e.Lines#1 as range 2
    //DEBUG: t.Pos#1: 5
    //DEBUG: e.Line#1: 12
    //DEBUG: e.Lines#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoScan-CComment/4 AsIs: t.Pos#1/5 AsIs: (/9 AsIs: '/'/11 AsIs: '*'/14 } )/15 (/16 Tile{ AsIs: e.Line#1/12 } Tile{ AsIs: )/10 AsIs: e.Lines#1/2 AsIs: >/1 ]] }
    refalrts::alloc_close_bracket(vm, context[15]);
    refalrts::alloc_open_bracket(vm, context[16]);
    refalrts::update_name(context[4], functions[efunc_DoScanm_CComment]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[16], context[10] );
    refalrts::link_brackets( context[9], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoScan/4 t.Pos#1/5 (/9 '\"'/11 e.Line#1/7 )/10 e.Lines#1/2 >/1
    if( ! refalrts::char_term( '\"', context[11] ) )
      continue;
    // closed e.Line#1 as range 7
    // closed e.Lines#1 as range 2
    //DEBUG: t.Pos#1: 5
    //DEBUG: e.Line#1: 7
    //DEBUG: e.Lines#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoScan-Compound/4 AsIs: t.Pos#1/5 } </12 & IncCol/13 t.Pos#1/5/14 >/16 (/17 Tile{ HalfReuse: )/9 HalfReuse: (/11 AsIs: e.Line#1/7 AsIs: )/10 AsIs: e.Lines#1/2 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_IncCol]);
    refalrts::copy_evar(vm, context[14], context[15], context[5], context[6]);
    refalrts::alloc_close_call(vm, context[16]);
    refalrts::alloc_open_bracket(vm, context[17]);
    refalrts::update_name(context[4], functions[efunc_DoScanm_Compound]);
    refalrts::reinit_close_bracket(context[9]);
    refalrts::reinit_open_bracket(context[11]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[11], context[10] );
    refalrts::link_brackets( context[17], context[9] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    res = refalrts::splice_evar( res, context[12], context[17] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoScan/4 t.new#10/5 (/9 '['/11 e.new#11/7 )/10 e.new#12/2 >/1
    if( ! refalrts::char_term( '[', context[11] ) )
      continue;
    // closed e.new#11 as range 7
    // closed e.new#12 as range 2
    do {
      // </0 & DoScan/4 t.Pos#1/5 (/9 '['/11 s.StartIdent#1/14 e.Line#1/12 )/10 e.Lines#1/2 >/1
      context[12] = context[7];
      context[13] = context[8];
      // closed e.Lines#1 as range 2
      if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
        continue;
      // closed e.Line#1 as range 12
      //DEBUG: t.Pos#1: 5
      //DEBUG: e.Lines#1: 2
      //DEBUG: s.StartIdent#1: 14
      //DEBUG: e.Line#1: 12
      //2: e.Lines#1
      //5: t.Pos#1
      //12: e.Line#1
      //14: s.StartIdent#1
      //20: s.StartIdent#1

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[15]);
      refalrts::alloc_name(vm, context[17], functions[efunc_gen_DoScan_S20C1]);
      refalrts::alloc_open_call(vm, context[18]);
      refalrts::alloc_name(vm, context[19], functions[efunc_Type]);
      refalrts::copy_stvar(vm, context[20], context[14]);
      refalrts::alloc_close_call(vm, context[21]);
      refalrts::alloc_close_call(vm, context[16]);
      refalrts::push_stack( vm, context[16] );
      refalrts::push_stack( vm, context[15] );
      res = refalrts::splice_elem( res, context[16] );
      refalrts::push_stack( vm, context[21] );
      refalrts::push_stack( vm, context[18] );
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
        // </15 & DoScan$20?1/19 'L'/20 s.Case#2/22 s.StartIdent#1/21 >/16
        context[17] = 0;
        context[18] = 0;
        context[19] = refalrts::call_left( context[17], context[18], context[15], context[16] );
        context[20] = refalrts::char_left( 'L', context[17], context[18] );
        if( ! context[20] )
          continue;
        if( ! refalrts::repeated_stvar_right( vm, context[21], context[14], context[17], context[18] ) )
          continue;
        if( ! refalrts::svar_left( context[22], context[17], context[18] ) )
          continue;
        if( ! refalrts::empty_seq( context[17], context[18] ) )
          continue;
        //DEBUG: t.Pos#1: 5
        //DEBUG: e.Lines#1: 2
        //DEBUG: s.StartIdent#1: 14
        //DEBUG: e.Line#1: 12
        //DEBUG: s.Case#2: 22

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Case#2/22 s.StartIdent#1/21 >/16 >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoScan-Ident/4 AsIs: t.Pos#1/5 AsIs: (/9 AsIs: '['/11 AsIs: s.StartIdent#1/14 } Tile{ HalfReuse: )/19 HalfReuse: (/20 } Tile{ AsIs: e.Line#1/12 } Tile{ AsIs: )/10 AsIs: e.Lines#1/2 HalfReuse: >/15 } Tile{ ]] }
        refalrts::update_name(context[4], functions[efunc_DoScanm_Ident]);
        refalrts::reinit_close_bracket(context[19]);
        refalrts::reinit_open_bracket(context[20]);
        refalrts::reinit_close_call(context[15]);
        refalrts::push_stack( vm, context[15] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[20], context[10] );
        refalrts::link_brackets( context[9], context[19] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[10], context[15] );
        res = refalrts::splice_evar( res, context[12], context[13] );
        res = refalrts::splice_evar( res, context[19], context[20] );
        refalrts::splice_to_freelist_open( vm, context[14], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[15], context[16]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoScan/4 t.Pos#1/5 (/9 '['/11 e.Line#1/7 )/10 e.Lines#1/2 >/1
    // closed e.Line#1 as range 7
    // closed e.Lines#1 as range 2
    //DEBUG: t.Pos#1: 5
    //DEBUG: e.Line#1: 7
    //DEBUG: e.Lines#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/12 # TkOpenADT/13 t.Pos#1/5/14 # UnnamedADT/16 )/17 (/18 # TkError/19 t.Pos#1/5/20"Expected function name after \'[\'"/22 )/24 </25 & DoScan/26 Tile{ AsIs: </0 Reuse: & IncCol/4 AsIs: t.Pos#1/5 HalfReuse: >/9 HalfReuse: (/11 AsIs: e.Line#1/7 AsIs: )/10 AsIs: e.Lines#1/2 AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[12]);
    refalrts::alloc_ident(vm, context[13], identifiers[ident_TkOpenADT]);
    refalrts::copy_evar(vm, context[14], context[15], context[5], context[6]);
    refalrts::alloc_ident(vm, context[16], identifiers[ident_UnnamedADT]);
    refalrts::alloc_close_bracket(vm, context[17]);
    refalrts::alloc_open_bracket(vm, context[18]);
    refalrts::alloc_ident(vm, context[19], identifiers[ident_TkError]);
    refalrts::copy_evar(vm, context[20], context[21], context[5], context[6]);
    refalrts::alloc_chars(vm, context[22], context[23], "Expected function name after \'[\'", 32);
    refalrts::alloc_close_bracket(vm, context[24]);
    refalrts::alloc_open_call(vm, context[25]);
    refalrts::alloc_name(vm, context[26], functions[efunc_DoScan]);
    refalrts::update_name(context[4], functions[efunc_IncCol]);
    refalrts::reinit_close_call(context[9]);
    refalrts::reinit_open_bracket(context[11]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[25] );
    refalrts::link_brackets( context[11], context[10] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[18], context[24] );
    refalrts::link_brackets( context[12], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[12], context[26] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoScan/4 t.Pos#1/5 (/9 s.Digit#1/11 e.Line#1/7 )/10 e.Lines#1/2 >/1
    // closed e.Line#1 as range 7
    // closed e.Lines#1 as range 2
    //DEBUG: t.Pos#1: 5
    //DEBUG: s.Digit#1: 11
    //DEBUG: e.Line#1: 7
    //DEBUG: e.Lines#1: 2
    //2: e.Lines#1
    //5: t.Pos#1
    //7: e.Line#1
    //11: s.Digit#1
    //17: s.Digit#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[14], functions[efunc_gen_DoScan_S22C1]);
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_name(vm, context[16], functions[efunc_Type]);
    refalrts::copy_stvar(vm, context[17], context[11]);
    refalrts::alloc_close_call(vm, context[18]);
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[12] );
    res = refalrts::splice_elem( res, context[13] );
    refalrts::push_stack( vm, context[18] );
    refalrts::push_stack( vm, context[15] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_stvar( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[12] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </12 & DoScan$22?1/16 'D'/17 '0'/18 s.Digit#1/19 >/13
      context[14] = 0;
      context[15] = 0;
      context[16] = refalrts::call_left( context[14], context[15], context[12], context[13] );
      context[17] = refalrts::char_left( 'D', context[14], context[15] );
      if( ! context[17] )
        continue;
      context[18] = refalrts::char_left( '0', context[14], context[15] );
      if( ! context[18] )
        continue;
      if( ! refalrts::repeated_stvar_left( vm, context[19], context[11], context[14], context[15] ) )
        continue;
      if( ! refalrts::empty_seq( context[14], context[15] ) )
        continue;
      //DEBUG: t.Pos#1: 5
      //DEBUG: s.Digit#1: 11
      //DEBUG: e.Line#1: 7
      //DEBUG: e.Lines#1: 2

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} & DoScan$22?1/16 'D'/17 '0'/18 s.Digit#1/19 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoScan-Number/4 AsIs: t.Pos#1/5 AsIs: (/9 AsIs: s.Digit#1/11 } Tile{ HalfReuse: )/13 HalfReuse: (/1 } Tile{ AsIs: e.Line#1/7 } Tile{ AsIs: )/10 AsIs: e.Lines#1/2 HalfReuse: >/12 } Tile{ ]] }
      refalrts::update_name(context[4], functions[efunc_DoScanm_Number]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::reinit_open_bracket(context[1]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[1], context[10] );
      refalrts::link_brackets( context[9], context[13] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[10], context[12] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_evar( res, context[13], context[1] );
      refalrts::splice_to_freelist_open( vm, context[11], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[12], context[13]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoScan/4 t.new#10/5 (/9 s.new#11/11 s.new#12/14 e.new#13/12 )/10 e.new#14/2 >/1
    context[12] = context[7];
    context[13] = context[8];
    // closed e.new#14 as range 2
    if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
      continue;
    // closed e.new#13 as range 12
    do {
      // </0 & DoScan/4 (/5 # RowCol/17 s.Line#1/19 1/18 )/6 (/9 '%'/11 '%'/14 )/10 e.Lines#1/2 >/1
      context[15] = 0;
      context[16] = 0;
      if( ! refalrts::brackets_term( context[15], context[16], context[5] ) )
        continue;
      if( ! refalrts::char_term( '%', context[11] ) )
        continue;
      if( ! refalrts::char_term( '%', context[14] ) )
        continue;
      context[17] = refalrts::ident_left( identifiers[ident_RowCol], context[15], context[16] );
      if( ! context[17] )
        continue;
      context[18] = refalrts::number_right( 1UL, context[15], context[16] );
      if( ! context[18] )
        continue;
      if( ! refalrts::empty_seq( context[12], context[13] ) )
        continue;
      // closed e.Lines#1 as range 2
      if( ! refalrts::svar_left( context[19], context[15], context[16] ) )
        continue;
      if( ! refalrts::empty_seq( context[15], context[16] ) )
        continue;
      //DEBUG: e.Lines#1: 2
      //DEBUG: s.Line#1: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Line#1/19 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoScan-NativeCode/4 AsIs: (/5 AsIs: # RowCol/17 } Tile{ HalfReuse: </18 HalfReuse: & Inc/6 HalfReuse: s.Line1 #19/9 HalfReuse: >/11 HalfReuse: 1/14 AsIs: )/10 AsIs: e.Lines#1/2 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_DoScanm_NativeCode]);
      refalrts::reinit_open_call(context[18]);
      refalrts::reinit_name(context[6], functions[efunc_Inc]);
      refalrts::reinit_svar( context[9], context[19] );
      refalrts::reinit_close_call(context[11]);
      refalrts::reinit_number(context[14], 1UL);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[5], context[10] );
      refalrts::push_stack( vm, context[11] );
      refalrts::push_stack( vm, context[18] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[18];
      refalrts::splice_to_freelist_open( vm, context[17], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoScan/4 t.Pos#1/5 (/9 '<'/11 s.SugarName#1/14 e.Line#1/12 )/10 e.Lines#1/2 >/1
    if( ! refalrts::char_term( '<', context[11] ) )
      continue;
    // closed e.Line#1 as range 12
    // closed e.Lines#1 as range 2
    //DEBUG: t.Pos#1: 5
    //DEBUG: s.SugarName#1: 14
    //DEBUG: e.Line#1: 12
    //DEBUG: e.Lines#1: 2
    //2: e.Lines#1
    //5: t.Pos#1
    //12: e.Line#1
    //14: s.SugarName#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_name(vm, context[17], functions[efunc_gen_DoScan_S24C1]);
    refalrts::alloc_open_bracket(vm, context[18]);
    refalrts::alloc_chars(vm, context[19], context[20], "+Add", 4);
    refalrts::alloc_close_bracket(vm, context[21]);
    refalrts::alloc_open_bracket(vm, context[22]);
    refalrts::alloc_chars(vm, context[23], context[24], "-Sub", 4);
    refalrts::alloc_close_bracket(vm, context[25]);
    refalrts::alloc_open_bracket(vm, context[26]);
    refalrts::alloc_chars(vm, context[27], context[28], "*Mul", 4);
    refalrts::alloc_close_bracket(vm, context[29]);
    refalrts::alloc_open_bracket(vm, context[30]);
    refalrts::alloc_chars(vm, context[31], context[32], "/Div", 4);
    refalrts::alloc_close_bracket(vm, context[33]);
    refalrts::alloc_open_bracket(vm, context[34]);
    refalrts::alloc_chars(vm, context[35], context[36], "%Mod", 4);
    refalrts::alloc_close_bracket(vm, context[37]);
    refalrts::alloc_open_bracket(vm, context[38]);
    refalrts::alloc_chars(vm, context[39], context[40], "?Residue", 8);
    refalrts::alloc_close_bracket(vm, context[41]);
    refalrts::alloc_close_call(vm, context[16]);
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[15] );
    res = refalrts::splice_elem( res, context[16] );
    refalrts::link_brackets( context[38], context[41] );
    res = refalrts::splice_elem( res, context[41] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_elem( res, context[38] );
    refalrts::link_brackets( context[34], context[37] );
    res = refalrts::splice_elem( res, context[37] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_elem( res, context[34] );
    refalrts::link_brackets( context[30], context[33] );
    res = refalrts::splice_elem( res, context[33] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_elem( res, context[30] );
    refalrts::link_brackets( context[26], context[29] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_elem( res, context[26] );
    refalrts::link_brackets( context[22], context[25] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_elem( res, context[22] );
    refalrts::link_brackets( context[18], context[21] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[15] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </15 & DoScan$24?1/19 e.SugarNames-B#2/20 (/26 s.SugarName#1/28 e.RealName#2/24 )/27 e.SugarNames-E#2/22 >/16
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::call_left( context[17], context[18], context[15], context[16] );
      context[20] = 0;
      context[21] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[22] = context[17];
        context[23] = context[18];
        context[24] = 0;
        context[25] = 0;
        context[26] = refalrts::brackets_left( context[24], context[25], context[22], context[23] );
        if( ! context[26] )
          continue;
        refalrts::bracket_pointers(context[26], context[27]);
        if( ! refalrts::repeated_stvar_left( vm, context[28], context[14], context[24], context[25] ) )
          continue;
        // closed e.RealName#2 as range 24
        // closed e.SugarNames-E#2 as range 22
        //DEBUG: t.Pos#1: 5
        //DEBUG: s.SugarName#1: 14
        //DEBUG: e.Line#1: 12
        //DEBUG: e.Lines#1: 2
        //DEBUG: e.SugarNames-B#2: 20
        //DEBUG: e.RealName#2: 24
        //DEBUG: e.SugarNames-E#2: 22

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.SugarNames-B#2/20 {REMOVED TILE} s.SugarName#1/28 {REMOVED TILE} {REMOVED TILE} e.SugarNames-E#2/22 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/26 } # TkOpenCall/29 t.Pos#1/5/30 Tile{ AsIs: e.RealName#2/24 } Tile{ AsIs: )/27 } </32 Tile{ Reuse: & DoScan/19 } Tile{ AsIs: </0 Reuse: & IncCol/4 AsIs: t.Pos#1/5 HalfReuse: # Len/9 AsIs: '<'/11 AsIs: s.SugarName#1/14 } Tile{ AsIs: >/16 HalfReuse: (/1 } Tile{ AsIs: e.Line#1/12 } Tile{ AsIs: )/10 AsIs: e.Lines#1/2 HalfReuse: >/15 } Tile{ ]] }
        refalrts::alloc_ident(vm, context[29], identifiers[ident_TkOpenCall]);
        refalrts::copy_evar(vm, context[30], context[31], context[5], context[6]);
        refalrts::alloc_open_call(vm, context[32]);
        refalrts::update_name(context[19], functions[efunc_DoScan]);
        refalrts::update_name(context[4], functions[efunc_IncCol]);
        refalrts::reinit_ident(context[9], identifiers[ident_Len]);
        refalrts::reinit_open_bracket(context[1]);
        refalrts::reinit_close_call(context[15]);
        refalrts::push_stack( vm, context[15] );
        refalrts::push_stack( vm, context[32] );
        refalrts::link_brackets( context[1], context[10] );
        refalrts::push_stack( vm, context[16] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[26], context[27] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[10], context[15] );
        res = refalrts::splice_evar( res, context[12], context[13] );
        res = refalrts::splice_evar( res, context[16], context[1] );
        res = refalrts::splice_evar( res, context[0], context[14] );
        res = refalrts::splice_evar( res, context[19], context[19] );
        res = refalrts::splice_evar( res, context[32], context[32] );
        res = refalrts::splice_evar( res, context[27], context[27] );
        res = refalrts::splice_evar( res, context[24], context[25] );
        res = refalrts::splice_evar( res, context[29], context[31] );
        res = refalrts::splice_evar( res, context[26], context[26] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[20], context[21], context[17], context[18] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[15], context[16]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoScan/4 t.Pos#1/5 (/9 '<'/11 e.Line#1/7 )/10 e.Lines#1/2 >/1
    if( ! refalrts::char_term( '<', context[11] ) )
      continue;
    // closed e.Line#1 as range 7
    // closed e.Lines#1 as range 2
    //DEBUG: t.Pos#1: 5
    //DEBUG: e.Line#1: 7
    //DEBUG: e.Lines#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/12 # TkOpenCall/13 t.Pos#1/5/14 )/16 </17 & DoScan/18 Tile{ AsIs: </0 Reuse: & IncCol/4 AsIs: t.Pos#1/5 HalfReuse: >/9 HalfReuse: (/11 AsIs: e.Line#1/7 AsIs: )/10 AsIs: e.Lines#1/2 AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[12]);
    refalrts::alloc_ident(vm, context[13], identifiers[ident_TkOpenCall]);
    refalrts::copy_evar(vm, context[14], context[15], context[5], context[6]);
    refalrts::alloc_close_bracket(vm, context[16]);
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[18], functions[efunc_DoScan]);
    refalrts::update_name(context[4], functions[efunc_IncCol]);
    refalrts::reinit_close_call(context[9]);
    refalrts::reinit_open_bracket(context[11]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[17] );
    refalrts::link_brackets( context[11], context[10] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[12], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[12], context[18] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoScan/4 t.Pos#1/5 (/9 '\\'/11 e.LineWithEscapes#1/7 )/10 e.Lines#1/2 >/1
    if( ! refalrts::char_term( '\\', context[11] ) )
      continue;
    // closed e.LineWithEscapes#1 as range 7
    // closed e.Lines#1 as range 2
    //DEBUG: t.Pos#1: 5
    //DEBUG: e.LineWithEscapes#1: 7
    //DEBUG: e.Lines#1: 2
    //2: e.Lines#1
    //5: t.Pos#1
    //7: e.LineWithEscapes#1
    //17: t.Pos#1
    //18: e.LineWithEscapes#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[14], functions[efunc_gen_DoScan_S26C1]);
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_name(vm, context[16], functions[efunc_ScanEscape]);
    refalrts::copy_stvar(vm, context[17], context[5]);
    refalrts::copy_evar(vm, context[18], context[19], context[7], context[8]);
    refalrts::alloc_close_call(vm, context[20]);
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[12] );
    res = refalrts::splice_elem( res, context[13] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[15] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_stvar( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[12] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </12 & DoScan$26?1/16 t.ScannedToken#2/17 t.Pos1#2/19 e.RestOfLine#2/14 >/13
      context[14] = 0;
      context[15] = 0;
      context[16] = refalrts::call_left( context[14], context[15], context[12], context[13] );
      context[18] = refalrts::tvar_left( context[17], context[14], context[15] );
      if( ! context[18] )
        continue;
      context[20] = refalrts::tvar_left( context[19], context[14], context[15] );
      if( ! context[20] )
        continue;
      // closed e.RestOfLine#2 as range 14
      //DEBUG: t.Pos#1: 5
      //DEBUG: e.LineWithEscapes#1: 7
      //DEBUG: e.Lines#1: 2
      //DEBUG: t.ScannedToken#2: 17
      //DEBUG: t.Pos1#2: 19
      //DEBUG: e.RestOfLine#2: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} t.Pos#1/5 {REMOVED TILE} '\\'/11 e.LineWithEscapes#1/7 {REMOVED TILE} & DoScan$26?1/16 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/13 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.ScannedToken#2/17 } Tile{ AsIs: </0 AsIs: & DoScan/4 } Tile{ AsIs: t.Pos1#2/19 } Tile{ AsIs: (/9 } Tile{ AsIs: e.RestOfLine#2/14 } Tile{ AsIs: )/10 AsIs: e.Lines#1/2 HalfReuse: >/12 } Tile{ ]] }
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[10], context[12] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[9], context[9] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[12], context[13]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoScan/4 t.Pos#1/5 (/9 s.Other#1/11 e.Line#1/7 )/10 e.Lines#1/2 >/1
  // closed e.Line#1 as range 7
  // closed e.Lines#1 as range 2
  //DEBUG: t.Pos#1: 5
  //DEBUG: s.Other#1: 11
  //DEBUG: e.Line#1: 7
  //DEBUG: e.Lines#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/12 # TkError/13 t.Pos#1/5/14"Bad character \'"/16 Tile{ AsIs: s.Other#1/11 } '\''/18 )/19 </20 & DoScan/21 Tile{ AsIs: </0 Reuse: & IncCol/4 AsIs: t.Pos#1/5 HalfReuse: >/9 } (/22 Tile{ AsIs: e.Line#1/7 } Tile{ AsIs: )/10 AsIs: e.Lines#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_ident(vm, context[13], identifiers[ident_TkError]);
  refalrts::copy_evar(vm, context[14], context[15], context[5], context[6]);
  refalrts::alloc_chars(vm, context[16], context[17], "Bad character \'", 15);
  refalrts::alloc_char(vm, context[18], '\'');
  refalrts::alloc_close_bracket(vm, context[19]);
  refalrts::alloc_open_call(vm, context[20]);
  refalrts::alloc_name(vm, context[21], functions[efunc_DoScan]);
  refalrts::alloc_open_bracket(vm, context[22]);
  refalrts::update_name(context[4], functions[efunc_IncCol]);
  refalrts::reinit_close_call(context[9]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[20] );
  refalrts::link_brackets( context[22], context[10] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[12], context[19] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[10];
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[18], context[21] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[12], context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoScan("DoScan", 4212599994U, 3244736276U, func_DoScan);


static refalrts::FnResult func_IsStartIdent(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & IsStartIdent/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & IsStartIdent/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & IsStartIdent/4 '_'/5 >/1
    if( ! refalrts::char_term( '_', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & IsStartIdent/4 '_'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_True]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & IsStartIdent/4 s.StartIdent#1/5 >/1
    //DEBUG: s.StartIdent#1: 5
    //5: s.StartIdent#1
    //11: s.StartIdent#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[6]);
    refalrts::alloc_name(vm, context[8], functions[efunc_gen_IsStartIdent_S2C1]);
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::alloc_name(vm, context[10], functions[efunc_Type]);
    refalrts::copy_stvar(vm, context[11], context[5]);
    refalrts::alloc_close_call(vm, context[12]);
    refalrts::alloc_close_call(vm, context[7]);
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[6] );
    res = refalrts::splice_elem( res, context[7] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[9] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_stvar( res, context[11] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </6 & IsStartIdent$2?1/10 'L'/11 s.Case#2/13 s.StartIdent#1/12 >/7
      context[8] = 0;
      context[9] = 0;
      context[10] = refalrts::call_left( context[8], context[9], context[6], context[7] );
      context[11] = refalrts::char_left( 'L', context[8], context[9] );
      if( ! context[11] )
        continue;
      if( ! refalrts::repeated_stvar_right( vm, context[12], context[5], context[8], context[9] ) )
        continue;
      if( ! refalrts::svar_left( context[13], context[8], context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[8], context[9] ) )
        continue;
      //DEBUG: s.StartIdent#1: 5
      //DEBUG: s.Case#2: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & IsStartIdent/4 s.StartIdent#1/5 </6 & IsStartIdent$2?1/10 'L'/11 s.Case#2/13 s.StartIdent#1/12 >/7 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_True]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[6], context[7]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & IsStartIdent/4 s.Other#1/5 >/1
  //DEBUG: s.Other#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & IsStartIdent/4 s.Other#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_False]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_IsStartIdent("IsStartIdent", 4212599994U, 3244736276U, func_IsStartIdent);


static refalrts::FnResult func_IsVarType(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & IsVarType/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & IsVarType/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & IsVarType/4 's'/5 >/1
    if( ! refalrts::char_term( 's', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & IsVarType/4 's'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_True]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & IsVarType/4 't'/5 >/1
    if( ! refalrts::char_term( 't', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & IsVarType/4 't'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_True]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & IsVarType/4 'e'/5 >/1
    if( ! refalrts::char_term( 'e', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & IsVarType/4 'e'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_True]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & IsVarType/4 s.Other#1/5 >/1
  //DEBUG: s.Other#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & IsVarType/4 s.Other#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_False]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_IsVarType("IsVarType", 4212599994U, 3244736276U, func_IsVarType);


static refalrts::FnResult func_IsPunctuation(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 57 elems
  refalrts::Iter context[57];
  refalrts::zeros( context, 57 );
  // </0 & IsPunctuation/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & IsPunctuation/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & IsPunctuation/4 s.Punct#1/5 >/1
    //DEBUG: s.Punct#1: 5
    //5: s.Punct#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[6]);
    refalrts::alloc_name(vm, context[8], functions[efunc_gen_IsPunctuation_S1C1]);
    refalrts::alloc_open_bracket(vm, context[9]);
    refalrts::alloc_char(vm, context[10], '(');
    refalrts::alloc_ident(vm, context[11], identifiers[ident_TkOpenBracket]);
    refalrts::alloc_close_bracket(vm, context[12]);
    refalrts::alloc_open_bracket(vm, context[13]);
    refalrts::alloc_char(vm, context[14], ')');
    refalrts::alloc_ident(vm, context[15], identifiers[ident_TkCloseBracket]);
    refalrts::alloc_close_bracket(vm, context[16]);
    refalrts::alloc_open_bracket(vm, context[17]);
    refalrts::alloc_char(vm, context[18], ';');
    refalrts::alloc_ident(vm, context[19], identifiers[ident_TkSemicolon]);
    refalrts::alloc_close_bracket(vm, context[20]);
    refalrts::alloc_open_bracket(vm, context[21]);
    refalrts::alloc_char(vm, context[22], '=');
    refalrts::alloc_ident(vm, context[23], identifiers[ident_TkAssign]);
    refalrts::alloc_close_bracket(vm, context[24]);
    refalrts::alloc_open_bracket(vm, context[25]);
    refalrts::alloc_char(vm, context[26], '>');
    refalrts::alloc_ident(vm, context[27], identifiers[ident_TkCloseCall]);
    refalrts::alloc_close_bracket(vm, context[28]);
    refalrts::alloc_open_bracket(vm, context[29]);
    refalrts::alloc_char(vm, context[30], '{');
    refalrts::alloc_ident(vm, context[31], identifiers[ident_TkOpenBlock]);
    refalrts::alloc_close_bracket(vm, context[32]);
    refalrts::alloc_open_bracket(vm, context[33]);
    refalrts::alloc_char(vm, context[34], '}');
    refalrts::alloc_ident(vm, context[35], identifiers[ident_TkCloseBlock]);
    refalrts::alloc_close_bracket(vm, context[36]);
    refalrts::alloc_open_bracket(vm, context[37]);
    refalrts::alloc_char(vm, context[38], ',');
    refalrts::alloc_ident(vm, context[39], identifiers[ident_TkComma]);
    refalrts::alloc_close_bracket(vm, context[40]);
    refalrts::alloc_open_bracket(vm, context[41]);
    refalrts::alloc_char(vm, context[42], ':');
    refalrts::alloc_ident(vm, context[43], identifiers[ident_TkColon]);
    refalrts::alloc_close_bracket(vm, context[44]);
    refalrts::alloc_open_bracket(vm, context[45]);
    refalrts::alloc_char(vm, context[46], '^');
    refalrts::alloc_ident(vm, context[47], identifiers[ident_TkRedefinition]);
    refalrts::alloc_close_bracket(vm, context[48]);
    refalrts::alloc_open_bracket(vm, context[49]);
    refalrts::alloc_char(vm, context[50], ']');
    refalrts::alloc_ident(vm, context[51], identifiers[ident_TkCloseADT]);
    refalrts::alloc_close_bracket(vm, context[52]);
    refalrts::alloc_open_bracket(vm, context[53]);
    refalrts::alloc_char(vm, context[54], '&');
    refalrts::alloc_ident(vm, context[55], identifiers[ident_TkAmpersand]);
    refalrts::alloc_close_bracket(vm, context[56]);
    refalrts::alloc_close_call(vm, context[7]);
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[6] );
    res = refalrts::splice_elem( res, context[7] );
    refalrts::link_brackets( context[53], context[56] );
    res = refalrts::splice_elem( res, context[56] );
    res = refalrts::splice_elem( res, context[55] );
    res = refalrts::splice_elem( res, context[54] );
    res = refalrts::splice_elem( res, context[53] );
    refalrts::link_brackets( context[49], context[52] );
    res = refalrts::splice_elem( res, context[52] );
    res = refalrts::splice_elem( res, context[51] );
    res = refalrts::splice_elem( res, context[50] );
    res = refalrts::splice_elem( res, context[49] );
    refalrts::link_brackets( context[45], context[48] );
    res = refalrts::splice_elem( res, context[48] );
    res = refalrts::splice_elem( res, context[47] );
    res = refalrts::splice_elem( res, context[46] );
    res = refalrts::splice_elem( res, context[45] );
    refalrts::link_brackets( context[41], context[44] );
    res = refalrts::splice_elem( res, context[44] );
    res = refalrts::splice_elem( res, context[43] );
    res = refalrts::splice_elem( res, context[42] );
    res = refalrts::splice_elem( res, context[41] );
    refalrts::link_brackets( context[37], context[40] );
    res = refalrts::splice_elem( res, context[40] );
    res = refalrts::splice_elem( res, context[39] );
    res = refalrts::splice_elem( res, context[38] );
    res = refalrts::splice_elem( res, context[37] );
    refalrts::link_brackets( context[33], context[36] );
    res = refalrts::splice_elem( res, context[36] );
    res = refalrts::splice_elem( res, context[35] );
    res = refalrts::splice_elem( res, context[34] );
    res = refalrts::splice_elem( res, context[33] );
    refalrts::link_brackets( context[29], context[32] );
    res = refalrts::splice_elem( res, context[32] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_elem( res, context[29] );
    refalrts::link_brackets( context[25], context[28] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_elem( res, context[25] );
    refalrts::link_brackets( context[21], context[24] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::link_brackets( context[17], context[20] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    refalrts::link_brackets( context[13], context[16] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    refalrts::link_brackets( context[9], context[12] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </6 & IsPunctuation$1?1/10 e.Types-B#2/11 (/17 s.Punct#1/19 s.TokType#2/20 )/18 e.Types-E#2/13 >/7
      context[8] = 0;
      context[9] = 0;
      context[10] = refalrts::call_left( context[8], context[9], context[6], context[7] );
      context[11] = 0;
      context[12] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[13] = context[8];
        context[14] = context[9];
        context[15] = 0;
        context[16] = 0;
        context[17] = refalrts::brackets_left( context[15], context[16], context[13], context[14] );
        if( ! context[17] )
          continue;
        refalrts::bracket_pointers(context[17], context[18]);
        if( ! refalrts::repeated_stvar_left( vm, context[19], context[5], context[15], context[16] ) )
          continue;
        // closed e.Types-E#2 as range 13
        if( ! refalrts::svar_left( context[20], context[15], context[16] ) )
          continue;
        if( ! refalrts::empty_seq( context[15], context[16] ) )
          continue;
        //DEBUG: s.Punct#1: 5
        //DEBUG: e.Types-B#2: 11
        //DEBUG: e.Types-E#2: 13
        //DEBUG: s.TokType#2: 20

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & IsPunctuation/4 s.Punct#1/5 </6 & IsPunctuation$1?1/10 e.Types-B#2/11 (/17 s.Punct#1/19 s.TokType#2/20 )/18 e.Types-E#2/13 >/7 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: s.TokType2 #20/1 ]] }
        refalrts::reinit_svar( context[1], context[20] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[11], context[12], context[8], context[9] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[6], context[7]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & IsPunctuation/4 s.Other#1/5 >/1
  //DEBUG: s.Other#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & IsPunctuation/4 s.Other#1/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_IsPunctuation("IsPunctuation", 4212599994U, 3244736276U, func_IsPunctuation);


static refalrts::FnResult func_DoScanm_Keyword(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & DoScan-Keyword/4 t.Pos#1/5 (/9 e.Line#1/7 )/10 e.Lines#1/2 >/1
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
  // closed e.Line#1 as range 7
  // closed e.Lines#1 as range 2
  //DEBUG: t.Pos#1: 5
  //DEBUG: e.Line#1: 7
  //DEBUG: e.Lines#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoScan-BuildKeyword/4 AsIs: t.Pos#1/5 } (/11 '$'/12 )/13 Tile{ AsIs: (/9 AsIs: e.Line#1/7 AsIs: )/10 AsIs: e.Lines#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_char(vm, context[12], '$');
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_DoScanm_BuildKeyword]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::link_brackets( context[11], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[9];
  res = refalrts::splice_evar( res, context[11], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoScanm_Keyword("DoScan-Keyword", 4212599994U, 3244736276U, func_DoScanm_Keyword);


static refalrts::FnResult func_DoScanm_BuildKeyword(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 73 elems
  refalrts::Iter context[73];
  refalrts::zeros( context, 73 );
  // </0 & DoScan-BuildKeyword/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoScan-BuildKeyword/4 t.new#1/5 (/9 e.new#2/7 )/10 (/13 e.new#3/11 )/14 e.new#4/2 >/1
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
    // </0 & DoScan-BuildKeyword/4 t.Pos#1/5 (/9 e.KeywordChars#1/7 )/10 (/13 s.Next#1/17 e.Line#1/15 )/14 e.Lines#1/2 >/1
    context[15] = context[11];
    context[16] = context[12];
    // closed e.KeywordChars#1 as range 7
    // closed e.Lines#1 as range 2
    if( ! refalrts::svar_left( context[17], context[15], context[16] ) )
      continue;
    // closed e.Line#1 as range 15
    //DEBUG: t.Pos#1: 5
    //DEBUG: e.KeywordChars#1: 7
    //DEBUG: e.Lines#1: 2
    //DEBUG: s.Next#1: 17
    //DEBUG: e.Line#1: 15
    //2: e.Lines#1
    //5: t.Pos#1
    //7: e.KeywordChars#1
    //15: e.Line#1
    //17: s.Next#1
    //23: s.Next#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[18]);
    refalrts::alloc_name(vm, context[20], functions[efunc_gen_DoScanm_BuildKeyword_S1C1]);
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_Type]);
    refalrts::copy_stvar(vm, context[23], context[17]);
    refalrts::alloc_close_call(vm, context[24]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[18] );
    res = refalrts::splice_elem( res, context[19] );
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[21] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_stvar( res, context[23] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[18] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </18 & DoScan-BuildKeyword$1?1/22 'L'/23 s.SubType#2/25 s.Next#1/24 >/19
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::call_left( context[20], context[21], context[18], context[19] );
      context[23] = refalrts::char_left( 'L', context[20], context[21] );
      if( ! context[23] )
        continue;
      if( ! refalrts::repeated_stvar_right( vm, context[24], context[17], context[20], context[21] ) )
        continue;
      if( ! refalrts::svar_left( context[25], context[20], context[21] ) )
        continue;
      if( ! refalrts::empty_seq( context[20], context[21] ) )
        continue;
      //DEBUG: t.Pos#1: 5
      //DEBUG: e.KeywordChars#1: 7
      //DEBUG: e.Lines#1: 2
      //DEBUG: s.Next#1: 17
      //DEBUG: e.Line#1: 15
      //DEBUG: s.SubType#2: 25

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Next#1/17 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} 'L'/23 s.SubType#2/25 s.Next#1/24 >/19 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoScan-BuildKeyword/4 AsIs: t.Pos#1/5 AsIs: (/9 AsIs: e.KeywordChars#1/7 HalfReuse: s.Next1 #24/10 HalfReuse: )/13 } Tile{ HalfReuse: (/22 } Tile{ AsIs: e.Line#1/15 } Tile{ AsIs: )/14 AsIs: e.Lines#1/2 HalfReuse: >/18 } Tile{ ]] }
      refalrts::reinit_svar( context[10], context[24] );
      refalrts::reinit_close_bracket(context[13]);
      refalrts::reinit_open_bracket(context[22]);
      refalrts::reinit_close_call(context[18]);
      refalrts::push_stack( vm, context[18] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[22], context[14] );
      refalrts::link_brackets( context[9], context[13] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[14], context[18] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[22], context[22] );
      refalrts::splice_to_freelist_open( vm, context[13], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[18], context[19]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoScan-BuildKeyword/4 t.Pos#1/5 (/9 e.KeywordChars#1/7 )/10 (/13 e.Line#1/11 )/14 e.Lines#1/2 >/1
    // closed e.KeywordChars#1 as range 7
    // closed e.Line#1 as range 11
    // closed e.Lines#1 as range 2
    //DEBUG: t.Pos#1: 5
    //DEBUG: e.KeywordChars#1: 7
    //DEBUG: e.Line#1: 11
    //DEBUG: e.Lines#1: 2
    //2: e.Lines#1
    //5: t.Pos#1
    //7: e.KeywordChars#1
    //11: e.Line#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_name(vm, context[17], functions[efunc_gen_DoScanm_BuildKeyword_S2C1]);
    refalrts::alloc_open_bracket(vm, context[18]);
    refalrts::alloc_ident(vm, context[19], identifiers[ident_TkExtern]);
    refalrts::alloc_chars(vm, context[20], context[21], "$EXTERN", 7);
    refalrts::alloc_close_bracket(vm, context[22]);
    refalrts::alloc_open_bracket(vm, context[23]);
    refalrts::alloc_ident(vm, context[24], identifiers[ident_TkExtern]);
    refalrts::alloc_chars(vm, context[25], context[26], "$EXTRN", 6);
    refalrts::alloc_close_bracket(vm, context[27]);
    refalrts::alloc_open_bracket(vm, context[28]);
    refalrts::alloc_ident(vm, context[29], identifiers[ident_TkExtern]);
    refalrts::alloc_chars(vm, context[30], context[31], "$EXTERNAL", 9);
    refalrts::alloc_close_bracket(vm, context[32]);
    refalrts::alloc_open_bracket(vm, context[33]);
    refalrts::alloc_ident(vm, context[34], identifiers[ident_TkEntry]);
    refalrts::alloc_chars(vm, context[35], context[36], "$ENTRY", 6);
    refalrts::alloc_close_bracket(vm, context[37]);
    refalrts::alloc_open_bracket(vm, context[38]);
    refalrts::alloc_ident(vm, context[39], identifiers[ident_TkEnum]);
    refalrts::alloc_chars(vm, context[40], context[41], "$ENUM", 5);
    refalrts::alloc_close_bracket(vm, context[42]);
    refalrts::alloc_open_bracket(vm, context[43]);
    refalrts::alloc_ident(vm, context[44], identifiers[ident_TkEEnum]);
    refalrts::alloc_chars(vm, context[45], context[46], "$EENUM", 6);
    refalrts::alloc_close_bracket(vm, context[47]);
    refalrts::alloc_open_bracket(vm, context[48]);
    refalrts::alloc_ident(vm, context[49], identifiers[ident_TkSwap]);
    refalrts::alloc_chars(vm, context[50], context[51], "$SWAP", 5);
    refalrts::alloc_close_bracket(vm, context[52]);
    refalrts::alloc_open_bracket(vm, context[53]);
    refalrts::alloc_ident(vm, context[54], identifiers[ident_TkESwap]);
    refalrts::alloc_chars(vm, context[55], context[56], "$ESWAP", 6);
    refalrts::alloc_close_bracket(vm, context[57]);
    refalrts::alloc_open_bracket(vm, context[58]);
    refalrts::alloc_ident(vm, context[59], identifiers[ident_TkInclude]);
    refalrts::alloc_chars(vm, context[60], context[61], "$INCLUDE", 8);
    refalrts::alloc_close_bracket(vm, context[62]);
    refalrts::alloc_open_bracket(vm, context[63]);
    refalrts::alloc_ident(vm, context[64], identifiers[ident_TkScopeId]);
    refalrts::alloc_chars(vm, context[65], context[66], "$SCOPEID", 8);
    refalrts::alloc_close_bracket(vm, context[67]);
    refalrts::alloc_open_bracket(vm, context[68]);
    refalrts::alloc_ident(vm, context[69], identifiers[ident_TkLabel]);
    refalrts::alloc_chars(vm, context[70], context[71], "$LABEL", 6);
    refalrts::alloc_close_bracket(vm, context[72]);
    refalrts::alloc_close_call(vm, context[16]);
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[15] );
    res = refalrts::splice_elem( res, context[16] );
    refalrts::link_brackets( context[68], context[72] );
    res = refalrts::splice_elem( res, context[72] );
    res = refalrts::splice_evar( res, context[70], context[71] );
    res = refalrts::splice_elem( res, context[69] );
    res = refalrts::splice_elem( res, context[68] );
    refalrts::link_brackets( context[63], context[67] );
    res = refalrts::splice_elem( res, context[67] );
    res = refalrts::splice_evar( res, context[65], context[66] );
    res = refalrts::splice_elem( res, context[64] );
    res = refalrts::splice_elem( res, context[63] );
    refalrts::link_brackets( context[58], context[62] );
    res = refalrts::splice_elem( res, context[62] );
    res = refalrts::splice_evar( res, context[60], context[61] );
    res = refalrts::splice_elem( res, context[59] );
    res = refalrts::splice_elem( res, context[58] );
    refalrts::link_brackets( context[53], context[57] );
    res = refalrts::splice_elem( res, context[57] );
    res = refalrts::splice_evar( res, context[55], context[56] );
    res = refalrts::splice_elem( res, context[54] );
    res = refalrts::splice_elem( res, context[53] );
    refalrts::link_brackets( context[48], context[52] );
    res = refalrts::splice_elem( res, context[52] );
    res = refalrts::splice_evar( res, context[50], context[51] );
    res = refalrts::splice_elem( res, context[49] );
    res = refalrts::splice_elem( res, context[48] );
    refalrts::link_brackets( context[43], context[47] );
    res = refalrts::splice_elem( res, context[47] );
    res = refalrts::splice_evar( res, context[45], context[46] );
    res = refalrts::splice_elem( res, context[44] );
    res = refalrts::splice_elem( res, context[43] );
    refalrts::link_brackets( context[38], context[42] );
    res = refalrts::splice_elem( res, context[42] );
    res = refalrts::splice_evar( res, context[40], context[41] );
    res = refalrts::splice_elem( res, context[39] );
    res = refalrts::splice_elem( res, context[38] );
    refalrts::link_brackets( context[33], context[37] );
    res = refalrts::splice_elem( res, context[37] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_elem( res, context[34] );
    res = refalrts::splice_elem( res, context[33] );
    refalrts::link_brackets( context[28], context[32] );
    res = refalrts::splice_elem( res, context[32] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_elem( res, context[28] );
    refalrts::link_brackets( context[23], context[27] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_elem( res, context[23] );
    refalrts::link_brackets( context[18], context[22] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[20], context[21] );
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
      // </15 & DoScan-BuildKeyword$2?1/19 e.Keywords-B#2/20 (/26 s.Tag#2/30 e.KeywordChars#1/28 )/27 e.Keywords-E#2/22 >/16
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::call_left( context[17], context[18], context[15], context[16] );
      context[20] = 0;
      context[21] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[22] = context[17];
        context[23] = context[18];
        context[24] = 0;
        context[25] = 0;
        context[26] = refalrts::brackets_left( context[24], context[25], context[22], context[23] );
        if( ! context[26] )
          continue;
        refalrts::bracket_pointers(context[26], context[27]);
        if( ! refalrts::repeated_evar_right( vm, context[28], context[29], context[7], context[8], context[24], context[25] ) )
          continue;
        // closed e.Keywords-E#2 as range 22
        if( ! refalrts::svar_left( context[30], context[24], context[25] ) )
          continue;
        if( ! refalrts::empty_seq( context[24], context[25] ) )
          continue;
        //DEBUG: t.Pos#1: 5
        //DEBUG: e.KeywordChars#1: 7
        //DEBUG: e.Line#1: 11
        //DEBUG: e.Lines#1: 2
        //DEBUG: e.Keywords-B#2: 20
        //DEBUG: e.Keywords-E#2: 22
        //DEBUG: s.Tag#2: 30

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} & DoScan-BuildKeyword$2?1/19 e.Keywords-B#2/20 {REMOVED TILE} e.KeywordChars#1/28 {REMOVED TILE} e.Keywords-E#2/22 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/26 AsIs: s.Tag#2/30 } t.Pos#1/5/31 Tile{ AsIs: )/27 } Tile{ HalfReuse: </16 HalfReuse: & DoScan/1 } Tile{ AsIs: </0 Reuse: & IncCol/4 AsIs: t.Pos#1/5 HalfReuse: # Len/9 AsIs: e.KeywordChars#1/7 HalfReuse: >/10 AsIs: (/13 AsIs: e.Line#1/11 AsIs: )/14 AsIs: e.Lines#1/2 HalfReuse: >/15 } Tile{ ]] }
        refalrts::copy_evar(vm, context[31], context[32], context[5], context[6]);
        refalrts::reinit_open_call(context[16]);
        refalrts::reinit_name(context[1], functions[efunc_DoScan]);
        refalrts::update_name(context[4], functions[efunc_IncCol]);
        refalrts::reinit_ident(context[9], identifiers[ident_Len]);
        refalrts::reinit_close_call(context[10]);
        refalrts::reinit_close_call(context[15]);
        refalrts::push_stack( vm, context[15] );
        refalrts::push_stack( vm, context[16] );
        refalrts::link_brackets( context[13], context[14] );
        refalrts::push_stack( vm, context[10] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[26], context[27] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[0], context[15] );
        res = refalrts::splice_evar( res, context[16], context[1] );
        res = refalrts::splice_evar( res, context[27], context[27] );
        res = refalrts::splice_evar( res, context[31], context[32] );
        res = refalrts::splice_evar( res, context[26], context[30] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[20], context[21], context[17], context[18] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[15], context[16]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoScan-BuildKeyword/4 t.Pos#1/5 (/9 '$'/17 'E'/18 'A'/19 'S'/20 'T'/21 'E'/22 'R'/23 'E'/24 'G'/25 'G'/26 )/10 (/13 e.Line#1/11 )/14 e.Lines#1/2 >/1
    context[15] = context[7];
    context[16] = context[8];
    context[17] = refalrts::char_left( '$', context[15], context[16] );
    if( ! context[17] )
      continue;
    context[18] = refalrts::char_left( 'E', context[15], context[16] );
    if( ! context[18] )
      continue;
    context[19] = refalrts::char_left( 'A', context[15], context[16] );
    if( ! context[19] )
      continue;
    context[20] = refalrts::char_left( 'S', context[15], context[16] );
    if( ! context[20] )
      continue;
    context[21] = refalrts::char_left( 'T', context[15], context[16] );
    if( ! context[21] )
      continue;
    context[22] = refalrts::char_left( 'E', context[15], context[16] );
    if( ! context[22] )
      continue;
    context[23] = refalrts::char_left( 'R', context[15], context[16] );
    if( ! context[23] )
      continue;
    context[24] = refalrts::char_left( 'E', context[15], context[16] );
    if( ! context[24] )
      continue;
    context[25] = refalrts::char_left( 'G', context[15], context[16] );
    if( ! context[25] )
      continue;
    context[26] = refalrts::char_left( 'G', context[15], context[16] );
    if( ! context[26] )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    // closed e.Line#1 as range 11
    // closed e.Lines#1 as range 2
    //DEBUG: t.Pos#1: 5
    //DEBUG: e.Line#1: 11
    //DEBUG: e.Lines#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </27 & EasterEgg/28 t.Pos#1/5/29"Preved-oriented programming"/31 >/33 </34 & DoScan/35 Tile{ AsIs: </0 Reuse: & IncCol/4 AsIs: t.Pos#1/5 HalfReuse: # Len/9 AsIs: '$'/17 AsIs: 'E'/18 AsIs: 'A'/19 AsIs: 'S'/20 AsIs: 'T'/21 AsIs: 'E'/22 AsIs: 'R'/23 AsIs: 'E'/24 AsIs: 'G'/25 AsIs: 'G'/26 HalfReuse: >/10 AsIs: (/13 AsIs: e.Line#1/11 AsIs: )/14 AsIs: e.Lines#1/2 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[27]);
    refalrts::alloc_name(vm, context[28], functions[efunc_EasterEgg]);
    refalrts::copy_evar(vm, context[29], context[30], context[5], context[6]);
    refalrts::alloc_chars(vm, context[31], context[32], "Preved-oriented programming", 27);
    refalrts::alloc_close_call(vm, context[33]);
    refalrts::alloc_open_call(vm, context[34]);
    refalrts::alloc_name(vm, context[35], functions[efunc_DoScan]);
    refalrts::update_name(context[4], functions[efunc_IncCol]);
    refalrts::reinit_ident(context[9], identifiers[ident_Len]);
    refalrts::reinit_close_call(context[10]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[34] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[33] );
    refalrts::push_stack( vm, context[27] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[27], context[35] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoScan-BuildKeyword/4 t.Pos#1/5 (/9 e.KeywordChars#1/7 )/10 (/13 e.Line#1/11 )/14 e.Lines#1/2 >/1
  // closed e.KeywordChars#1 as range 7
  // closed e.Line#1 as range 11
  // closed e.Lines#1 as range 2
  //DEBUG: t.Pos#1: 5
  //DEBUG: e.KeywordChars#1: 7
  //DEBUG: e.Line#1: 11
  //DEBUG: e.Lines#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/15 # TkError/16 t.Pos#1/5/17"Bad keyword \'"/19 e.KeywordChars#1/7/21 '\''/23 )/24 </25 & DoScan/26 Tile{ AsIs: </0 Reuse: & IncCol/4 AsIs: t.Pos#1/5 HalfReuse: # Len/9 AsIs: e.KeywordChars#1/7 HalfReuse: >/10 AsIs: (/13 AsIs: e.Line#1/11 AsIs: )/14 AsIs: e.Lines#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::alloc_ident(vm, context[16], identifiers[ident_TkError]);
  refalrts::copy_evar(vm, context[17], context[18], context[5], context[6]);
  refalrts::alloc_chars(vm, context[19], context[20], "Bad keyword \'", 13);
  refalrts::copy_evar(vm, context[21], context[22], context[7], context[8]);
  refalrts::alloc_char(vm, context[23], '\'');
  refalrts::alloc_close_bracket(vm, context[24]);
  refalrts::alloc_open_call(vm, context[25]);
  refalrts::alloc_name(vm, context[26], functions[efunc_DoScan]);
  refalrts::update_name(context[4], functions[efunc_IncCol]);
  refalrts::reinit_ident(context[9], identifiers[ident_Len]);
  refalrts::reinit_close_call(context[10]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[25] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[15], context[24] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[15], context[26] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoScanm_BuildKeyword("DoScan-BuildKeyword", 4212599994U, 3244736276U, func_DoScanm_BuildKeyword);


static refalrts::FnResult func_EasterEgg(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & EasterEgg/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & EasterEgg/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & EasterEgg/4 t.Pos#1/5 s.Char#1/9 e.Text#1/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    // closed e.Text#1 as range 7
    //DEBUG: t.Pos#1: 5
    //DEBUG: s.Char#1: 9
    //DEBUG: e.Text#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkChar/4 AsIs: t.Pos#1/5 AsIs: s.Char#1/9 } )/10 </11 & EasterEgg/12 t.Pos#1/5/13 Tile{ AsIs: e.Text#1/7 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_bracket(vm, context[10]);
    refalrts::alloc_open_call(vm, context[11]);
    refalrts::alloc_name(vm, context[12], functions[efunc_EasterEgg]);
    refalrts::copy_evar(vm, context[13], context[14], context[5], context[6]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_TkChar]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[11] );
    refalrts::link_brackets( context[0], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[10], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & EasterEgg/4 t.Pos#1/5 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Pos#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & EasterEgg/4 t.Pos#1/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_EasterEgg("EasterEgg", 4212599994U, 3244736276U, func_EasterEgg);


static refalrts::FnResult func_gen_DoScanm_Number_S1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & DoScan-Number$1:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoScan-Number$1:1/4 t.new#1/5 (/9 e.new#2/7 )/10 s.new#3/11 (/14 e.new#4/12 )/15 (/18 e.new#5/16 )/19 e.new#6/2 >/1
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
  // closed e.new#4 as range 12
  // closed e.new#5 as range 16
  // closed e.new#6 as range 2
  do {
    // </0 & DoScan-Number$1:1/4 t.Pos#1/5 (/9 e.Number#1/7 )/10 s.Next#1/11 (/14 e.Line#1/12 )/15 (/18 e.Lines#1/16 )/19 s.Macrodigit#3/22 >/1
    context[20] = context[2];
    context[21] = context[3];
    // closed e.Number#1 as range 7
    // closed e.Line#1 as range 12
    // closed e.Lines#1 as range 16
    if( ! refalrts::svar_left( context[22], context[20], context[21] ) )
      continue;
    if( ! refalrts::empty_seq( context[20], context[21] ) )
      continue;
    //DEBUG: t.Pos#1: 5
    //DEBUG: s.Next#1: 11
    //DEBUG: e.Number#1: 7
    //DEBUG: e.Line#1: 12
    //DEBUG: e.Lines#1: 16
    //DEBUG: s.Macrodigit#3: 22

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Next#1/11 {REMOVED TILE} (/18 {REMOVED TILE} {REMOVED TILE} s.Macrodigit#3/22 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoScan-Number/4 AsIs: t.Pos#1/5 AsIs: (/9 AsIs: e.Number#1/7 HalfReuse: s.Next1 #11/10 } Tile{ AsIs: )/19 } Tile{ AsIs: (/14 AsIs: e.Line#1/12 AsIs: )/15 } Tile{ AsIs: e.Lines#1/16 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_DoScanm_Number]);
    refalrts::reinit_svar( context[10], context[11] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::link_brackets( context[9], context[19] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    refalrts::splice_to_freelist_open( vm, context[10], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoScan-Number$1:1/4 t.Pos#1/5 (/9 e.Number#1/7 )/10 s.Next#1/11 (/14 e.Line#1/12 )/15 (/18 e.Lines#1/16 )/19 e.MacrodigitChain#3/2 >/1
  // closed e.Number#1 as range 7
  // closed e.Line#1 as range 12
  // closed e.Lines#1 as range 16
  // closed e.MacrodigitChain#3 as range 2
  //DEBUG: t.Pos#1: 5
  //DEBUG: s.Next#1: 11
  //DEBUG: e.Number#1: 7
  //DEBUG: e.Line#1: 12
  //DEBUG: e.Lines#1: 16
  //DEBUG: e.MacrodigitChain#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.MacrodigitChain#3/2 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/18 } # TkError/20 t.Pos#1/5/21"Very big numeric literal: "/23 e.Number#1/7/25 Tile{ AsIs: s.Next#1/11 } Tile{ AsIs: )/19 } </27 & DoScan/28 Tile{ AsIs: </0 Reuse: & IncCol/4 AsIs: t.Pos#1/5 HalfReuse: # Len/9 AsIs: e.Number#1/7 HalfReuse: s.Next1 #11/10 } >/29 Tile{ AsIs: (/14 AsIs: e.Line#1/12 AsIs: )/15 } Tile{ AsIs: e.Lines#1/16 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_ident(vm, context[20], identifiers[ident_TkError]);
  refalrts::copy_evar(vm, context[21], context[22], context[5], context[6]);
  refalrts::alloc_chars(vm, context[23], context[24], "Very big numeric literal: ", 26);
  refalrts::copy_evar(vm, context[25], context[26], context[7], context[8]);
  refalrts::alloc_open_call(vm, context[27]);
  refalrts::alloc_name(vm, context[28], functions[efunc_DoScan]);
  refalrts::alloc_close_call(vm, context[29]);
  refalrts::update_name(context[4], functions[efunc_IncCol]);
  refalrts::reinit_ident(context[9], identifiers[ident_Len]);
  refalrts::reinit_svar( context[10], context[11] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[27] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::push_stack( vm, context[29] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[18], context[19] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[29], context[29] );
  res = refalrts::splice_evar( res, context[0], context[10] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[20], context[24] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoScanm_Number_S1B1("DoScan-Number$1:1", 4212599994U, 3244736276U, func_gen_DoScanm_Number_S1B1);


static refalrts::FnResult func_DoScanm_Number(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  // </0 & DoScan-Number/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoScan-Number/4 t.new#1/5 (/9 e.new#2/7 )/10 (/13 e.new#3/11 )/14 e.new#4/2 >/1
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
    // </0 & DoScan-Number/4 t.Pos#1/5 (/9 e.Number#1/7 )/10 (/13 s.Next#1/17 e.Line#1/15 )/14 e.Lines#1/2 >/1
    context[15] = context[11];
    context[16] = context[12];
    // closed e.Number#1 as range 7
    // closed e.Lines#1 as range 2
    if( ! refalrts::svar_left( context[17], context[15], context[16] ) )
      continue;
    // closed e.Line#1 as range 15
    //DEBUG: t.Pos#1: 5
    //DEBUG: e.Number#1: 7
    //DEBUG: e.Lines#1: 2
    //DEBUG: s.Next#1: 17
    //DEBUG: e.Line#1: 15
    //2: e.Lines#1
    //5: t.Pos#1
    //7: e.Number#1
    //15: e.Line#1
    //17: s.Next#1
    //23: s.Next#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[18]);
    refalrts::alloc_name(vm, context[20], functions[efunc_gen_DoScanm_Number_S1C1]);
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_Type]);
    refalrts::copy_stvar(vm, context[23], context[17]);
    refalrts::alloc_close_call(vm, context[24]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[18] );
    res = refalrts::splice_elem( res, context[19] );
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[21] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_stvar( res, context[23] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[18] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </18 & DoScan-Number$1?1/22 'D'/23 '0'/24 s.Next#1/25 >/19
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::call_left( context[20], context[21], context[18], context[19] );
      context[23] = refalrts::char_left( 'D', context[20], context[21] );
      if( ! context[23] )
        continue;
      context[24] = refalrts::char_left( '0', context[20], context[21] );
      if( ! context[24] )
        continue;
      if( ! refalrts::repeated_stvar_left( vm, context[25], context[17], context[20], context[21] ) )
        continue;
      if( ! refalrts::empty_seq( context[20], context[21] ) )
        continue;
      //DEBUG: t.Pos#1: 5
      //DEBUG: e.Number#1: 7
      //DEBUG: e.Lines#1: 2
      //DEBUG: s.Next#1: 17
      //DEBUG: e.Line#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.Next#1/17 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </26 Tile{ HalfReuse: [*]/0 Reuse: & DoScan-Number$1:1/4 AsIs: t.Pos#1/5 AsIs: (/9 AsIs: e.Number#1/7 AsIs: )/10 HalfReuse: s.Next1 #25/13 } (/27 Tile{ AsIs: e.Line#1/15 } )/28 Tile{ HalfReuse: (/14 AsIs: e.Lines#1/2 HalfReuse: )/18 HalfReuse: {*}/22 HalfReuse: </23 HalfReuse: & Numb/24 } e.Number#1/7/29 Tile{ AsIs: s.Next#1/25 AsIs: >/19 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[26]);
      refalrts::alloc_open_bracket(vm, context[27]);
      refalrts::alloc_close_bracket(vm, context[28]);
      refalrts::copy_evar(vm, context[29], context[30], context[7], context[8]);
      refalrts::reinit_closure_head(context[0]);
      refalrts::update_name(context[4], functions[efunc_gen_DoScanm_Number_S1B1]);
      refalrts::reinit_svar( context[13], context[25] );
      refalrts::reinit_open_bracket(context[14]);
      refalrts::reinit_close_bracket(context[18]);
      refalrts::reinit_unwrapped_closure(context[22], context[0]);
      refalrts::reinit_open_call(context[23]);
      refalrts::reinit_name(context[24], functions[efunc_Numb]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[26] );
      refalrts::push_stack( vm, context[19] );
      refalrts::push_stack( vm, context[23] );
      refalrts::link_brackets( context[14], context[18] );
      refalrts::link_brackets( context[27], context[28] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[25];
      res = refalrts::splice_evar( res, context[29], context[30] );
      res = refalrts::splice_evar( res, context[14], context[24] );
      res = refalrts::splice_evar( res, context[28], context[28] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[27], context[27] );
      res = refalrts::splice_evar( res, context[0], context[13] );
      res = refalrts::splice_evar( res, context[26], context[26] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      refalrts::wrap_closure( context[22] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[18], context[19]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoScan-Number/4 t.Pos#1/5 (/9 e.Number#1/7 )/10 (/13 e.Line#1/11 )/14 e.Lines#1/2 >/1
  // closed e.Number#1 as range 7
  // closed e.Line#1 as range 11
  // closed e.Lines#1 as range 2
  //DEBUG: t.Pos#1: 5
  //DEBUG: e.Number#1: 7
  //DEBUG: e.Line#1: 11
  //DEBUG: e.Lines#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/15 # TkMacroDigit/16 t.Pos#1/5/17 </19 & Numb/20 e.Number#1/7/21 >/23 )/24 </25 & DoScan/26 Tile{ AsIs: </0 Reuse: & IncCol/4 AsIs: t.Pos#1/5 HalfReuse: # Len/9 AsIs: e.Number#1/7 HalfReuse: >/10 AsIs: (/13 AsIs: e.Line#1/11 AsIs: )/14 AsIs: e.Lines#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::alloc_ident(vm, context[16], identifiers[ident_TkMacroDigit]);
  refalrts::copy_evar(vm, context[17], context[18], context[5], context[6]);
  refalrts::alloc_open_call(vm, context[19]);
  refalrts::alloc_name(vm, context[20], functions[efunc_Numb]);
  refalrts::copy_evar(vm, context[21], context[22], context[7], context[8]);
  refalrts::alloc_close_call(vm, context[23]);
  refalrts::alloc_close_bracket(vm, context[24]);
  refalrts::alloc_open_call(vm, context[25]);
  refalrts::alloc_name(vm, context[26], functions[efunc_DoScan]);
  refalrts::update_name(context[4], functions[efunc_IncCol]);
  refalrts::reinit_ident(context[9], identifiers[ident_Len]);
  refalrts::reinit_close_call(context[10]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[25] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[15], context[24] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[19] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[15], context[26] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoScanm_Number("DoScan-Number", 4212599994U, 3244736276U, func_DoScanm_Number);


static refalrts::FnResult func_DoScanm_Var(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & DoScan-Var/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoScan-Var/4 t.new#1/5 (/9 e.new#2/7 )/10 (/13 e.new#3/11 )/14 e.new#4/2 >/1
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
    // </0 & DoScan-Var/4 t.Pos#1/5 (/9 e.Variable#1/7 )/10 (/13 s.Next#1/17 e.Line#1/15 )/14 e.Lines#1/2 >/1
    context[15] = context[11];
    context[16] = context[12];
    // closed e.Variable#1 as range 7
    // closed e.Lines#1 as range 2
    if( ! refalrts::svar_left( context[17], context[15], context[16] ) )
      continue;
    // closed e.Line#1 as range 15
    //DEBUG: t.Pos#1: 5
    //DEBUG: e.Variable#1: 7
    //DEBUG: e.Lines#1: 2
    //DEBUG: s.Next#1: 17
    //DEBUG: e.Line#1: 15
    //2: e.Lines#1
    //5: t.Pos#1
    //7: e.Variable#1
    //15: e.Line#1
    //17: s.Next#1
    //23: s.Next#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[18]);
    refalrts::alloc_name(vm, context[20], functions[efunc_gen_DoScanm_Var_S1C1]);
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_IsIdentTail]);
    refalrts::copy_stvar(vm, context[23], context[17]);
    refalrts::alloc_close_call(vm, context[24]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[18] );
    res = refalrts::splice_elem( res, context[19] );
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[21] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_stvar( res, context[23] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[18] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </18 & DoScan-Var$1?1/22 # True/23 >/19
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::call_left( context[20], context[21], context[18], context[19] );
      context[23] = refalrts::ident_left( identifiers[ident_True], context[20], context[21] );
      if( ! context[23] )
        continue;
      if( ! refalrts::empty_seq( context[20], context[21] ) )
        continue;
      //DEBUG: t.Pos#1: 5
      //DEBUG: e.Variable#1: 7
      //DEBUG: e.Lines#1: 2
      //DEBUG: s.Next#1: 17
      //DEBUG: e.Line#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Next#1/17 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # True/23 >/19 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoScan-Var/4 AsIs: t.Pos#1/5 AsIs: (/9 AsIs: e.Variable#1/7 HalfReuse: s.Next1 #17/10 HalfReuse: )/13 } Tile{ HalfReuse: (/22 } Tile{ AsIs: e.Line#1/15 } Tile{ AsIs: )/14 AsIs: e.Lines#1/2 HalfReuse: >/18 } Tile{ ]] }
      refalrts::reinit_svar( context[10], context[17] );
      refalrts::reinit_close_bracket(context[13]);
      refalrts::reinit_open_bracket(context[22]);
      refalrts::reinit_close_call(context[18]);
      refalrts::push_stack( vm, context[18] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[22], context[14] );
      refalrts::link_brackets( context[9], context[13] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[14], context[18] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[22], context[22] );
      refalrts::splice_to_freelist_open( vm, context[13], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[18], context[19]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoScan-Var/4 t.Pos#1/5 (/9 s.Type#1/15 '.'/16 e.Index#1/7 )/10 (/13 e.Line#1/11 )/14 e.Lines#1/2 >/1
  // closed e.Line#1 as range 11
  // closed e.Lines#1 as range 2
  if( ! refalrts::svar_left( context[15], context[7], context[8] ) )
    return refalrts::cRecognitionImpossible;
  context[16] = refalrts::char_left( '.', context[7], context[8] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  // closed e.Index#1 as range 7
  //DEBUG: t.Pos#1: 5
  //DEBUG: e.Line#1: 11
  //DEBUG: e.Lines#1: 2
  //DEBUG: s.Type#1: 15
  //DEBUG: e.Index#1: 7

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/17 # TkVariable/18 t.Pos#1/5/19 s.Type#1/15/21 e.Index#1/7/22 )/24 </25 & DoScan/26 Tile{ AsIs: </0 Reuse: & IncCol/4 AsIs: t.Pos#1/5 HalfReuse: # Len/9 AsIs: s.Type#1/15 AsIs: '.'/16 AsIs: e.Index#1/7 HalfReuse: >/10 AsIs: (/13 AsIs: e.Line#1/11 AsIs: )/14 AsIs: e.Lines#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::alloc_ident(vm, context[18], identifiers[ident_TkVariable]);
  refalrts::copy_evar(vm, context[19], context[20], context[5], context[6]);
  refalrts::copy_stvar(vm, context[21], context[15]);
  refalrts::copy_evar(vm, context[22], context[23], context[7], context[8]);
  refalrts::alloc_close_bracket(vm, context[24]);
  refalrts::alloc_open_call(vm, context[25]);
  refalrts::alloc_name(vm, context[26], functions[efunc_DoScan]);
  refalrts::update_name(context[4], functions[efunc_IncCol]);
  refalrts::reinit_ident(context[9], identifiers[ident_Len]);
  refalrts::reinit_close_call(context[10]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[25] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[17], context[24] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[17], context[26] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoScanm_Var("DoScan-Var", 4212599994U, 3244736276U, func_DoScanm_Var);


static refalrts::FnResult func_gen_IsIdentTail_S3B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & IsIdentTail$3:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & IsIdentTail$3:1/4 s.new#1/7 s.new#2/8 s.new#3/9 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_left( context[7], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    do {
      // </0 & IsIdentTail$3:1/4 'D'/7 '0'/8 s.Other#2/9 >/1
      if( ! refalrts::char_term( 'D', context[7] ) )
        continue;
      if( ! refalrts::char_term( '0', context[8] ) )
        continue;
      //DEBUG: s.Other#2: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & IsIdentTail$3:1/4 'D'/7 '0'/8 s.Other#2/9 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_True]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & IsIdentTail$3:1/4 'L'/7 s.Case#2/8 s.Other#2/9 >/1
    if( ! refalrts::char_term( 'L', context[7] ) )
      continue;
    //DEBUG: s.Case#2: 8
    //DEBUG: s.Other#2: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & IsIdentTail$3:1/4 'L'/7 s.Case#2/8 s.Other#2/9 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_True]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & IsIdentTail$3:1/4 e.OtherType#2/2 >/1
  // closed e.OtherType#2 as range 2
  //DEBUG: e.OtherType#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & IsIdentTail$3:1/4 e.OtherType#2/2 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_False]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_IsIdentTail_S3B1("IsIdentTail$3:1", 4212599994U, 3244736276U, func_gen_IsIdentTail_S3B1);


static refalrts::FnResult func_IsIdentTail(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & IsIdentTail/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & IsIdentTail/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & IsIdentTail/4 '-'/5 >/1
    if( ! refalrts::char_term( '-', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & IsIdentTail/4 '-'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_True]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & IsIdentTail/4 '_'/5 >/1
    if( ! refalrts::char_term( '_', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & IsIdentTail/4 '_'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_True]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & IsIdentTail/4 s.Other#1/5 >/1
  //DEBUG: s.Other#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </6 & IsIdentTail$3:1/7 Tile{ AsIs: </0 Reuse: & Type/4 AsIs: s.Other#1/5 AsIs: >/1 } >/8 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_IsIdentTail_S3B1]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::update_name(context[4], functions[efunc_Type]);
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_IsIdentTail("IsIdentTail", 4212599994U, 3244736276U, func_IsIdentTail);


static refalrts::FnResult func_DoScanm_CComment(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & DoScan-CComment/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoScan-CComment/4 t.new#1/5 (/9 e.new#2/7 )/10 e.new#3/2 >/1
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
    // </0 & DoScan-CComment/4 t.new#4/5 (/9 e.new#5/7 )/10 (/15 e.new#6/13 )/16 e.new#7/11 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[11], context[12] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    // closed e.new#5 as range 7
    // closed e.new#6 as range 13
    // closed e.new#7 as range 11
    do {
      // </0 & DoScan-CComment/4 t.new#8/5 (/9 e.new#9/7 )/10 (/15 s.new#10/19 e.new#11/17 )/16 e.new#12/11 >/1
      context[17] = context[13];
      context[18] = context[14];
      // closed e.new#9 as range 7
      // closed e.new#12 as range 11
      if( ! refalrts::svar_left( context[19], context[17], context[18] ) )
        continue;
      // closed e.new#11 as range 17
      do {
        // </0 & DoScan-CComment/4 t.Pos#1/5 (/9 e.Comment#1/7 )/10 (/15 '*'/19 '/'/22 e.Line#1/20 )/16 e.Lines#1/11 >/1
        context[20] = context[17];
        context[21] = context[18];
        if( ! refalrts::char_term( '*', context[19] ) )
          continue;
        context[22] = refalrts::char_left( '/', context[20], context[21] );
        if( ! context[22] )
          continue;
        // closed e.Comment#1 as range 7
        // closed e.Line#1 as range 20
        // closed e.Lines#1 as range 11
        //DEBUG: t.Pos#1: 5
        //DEBUG: e.Comment#1: 7
        //DEBUG: e.Line#1: 20
        //DEBUG: e.Lines#1: 11

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } </23 & DoScan/24 Tile{ AsIs: </0 Reuse: & IncCol/4 AsIs: t.Pos#1/5 HalfReuse: # Len/9 AsIs: e.Comment#1/7 HalfReuse: '*'/10 HalfReuse: '/'/15 HalfReuse: >/19 HalfReuse: (/22 AsIs: e.Line#1/20 AsIs: )/16 AsIs: e.Lines#1/11 AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[23]);
        refalrts::alloc_name(vm, context[24], functions[efunc_DoScan]);
        refalrts::update_name(context[4], functions[efunc_IncCol]);
        refalrts::reinit_ident(context[9], identifiers[ident_Len]);
        refalrts::reinit_char(context[10], '*');
        refalrts::reinit_char(context[15], '/');
        refalrts::reinit_close_call(context[19]);
        refalrts::reinit_open_bracket(context[22]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[23] );
        refalrts::link_brackets( context[22], context[16] );
        refalrts::push_stack( vm, context[19] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[0];
        res = refalrts::splice_evar( res, context[23], context[24] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoScan-CComment/4 t.Pos#1/5 (/9 e.Comment#1/7 )/10 (/15 s.Char#1/19 e.Line#1/17 )/16 e.Lines#1/11 >/1
      // closed e.Comment#1 as range 7
      // closed e.Line#1 as range 17
      // closed e.Lines#1 as range 11
      //DEBUG: t.Pos#1: 5
      //DEBUG: s.Char#1: 19
      //DEBUG: e.Comment#1: 7
      //DEBUG: e.Line#1: 17
      //DEBUG: e.Lines#1: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Char#1/19 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoScan-CComment/4 AsIs: t.Pos#1/5 AsIs: (/9 AsIs: e.Comment#1/7 HalfReuse: s.Char1 #19/10 HalfReuse: )/15 } (/20 Tile{ AsIs: e.Line#1/17 } Tile{ AsIs: )/16 AsIs: e.Lines#1/11 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[20]);
      refalrts::reinit_svar( context[10], context[19] );
      refalrts::reinit_close_bracket(context[15]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[20], context[16] );
      refalrts::link_brackets( context[9], context[15] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[16];
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[20], context[20] );
      refalrts::splice_to_freelist_open( vm, context[15], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoScan-CComment/4 t.Pos#1/5 (/9 e.Comment#1/7 )/10 (/15 )/16 e.Lines#1/11 >/1
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    // closed e.Comment#1 as range 7
    // closed e.Lines#1 as range 11
    //DEBUG: t.Pos#1: 5
    //DEBUG: e.Comment#1: 7
    //DEBUG: e.Lines#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Comment#1/7 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoScan-CComment/4 } </17 Tile{ HalfReuse: & IncLine/9 } Tile{ AsIs: t.Pos#1/5 } Tile{ HalfReuse: >/10 AsIs: (/15 AsIs: )/16 AsIs: e.Lines#1/11 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::reinit_name(context[9], functions[efunc_IncLine]);
    refalrts::reinit_close_call(context[10]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoScan-CComment/4 t.Pos#1/5 (/9 e.Comment#1/7 )/10 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Comment#1 as range 7
  //DEBUG: t.Pos#1: 5
  //DEBUG: e.Comment#1: 7

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/11 # TkError/12 t.Pos#1/5/13"Unexpected EOF, unclosed comment"/15 )/17 (/18 # TkEOF/19 Tile{ AsIs: </0 Reuse: & IncCol/4 AsIs: t.Pos#1/5 HalfReuse: # Len/9 AsIs: e.Comment#1/7 HalfReuse: >/10 HalfReuse: )/1 ]] }
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_ident(vm, context[12], identifiers[ident_TkError]);
  refalrts::copy_evar(vm, context[13], context[14], context[5], context[6]);
  refalrts::alloc_chars(vm, context[15], context[16], "Unexpected EOF, unclosed comment", 32);
  refalrts::alloc_close_bracket(vm, context[17]);
  refalrts::alloc_open_bracket(vm, context[18]);
  refalrts::alloc_ident(vm, context[19], identifiers[ident_TkEOF]);
  refalrts::update_name(context[4], functions[efunc_IncCol]);
  refalrts::reinit_ident(context[9], identifiers[ident_Len]);
  refalrts::reinit_close_call(context[10]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[18], context[1] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[17] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[11], context[19] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoScanm_CComment("DoScan-CComment", 4212599994U, 3244736276U, func_DoScanm_CComment);


static refalrts::FnResult func_DoScanm_NativeCode(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & DoScan-NativeCode/4 t.Pos#1/5 e.Lines#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Lines#1 as range 2
  //DEBUG: t.Pos#1: 5
  //DEBUG: e.Lines#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoScan-DoNativeCode/4 AsIs: t.Pos#1/5 } t.Pos#1/5/7 (/9 )/10 Tile{ AsIs: e.Lines#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::copy_evar(vm, context[7], context[8], context[5], context[6]);
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_close_bracket(vm, context[10]);
  refalrts::update_name(context[4], functions[efunc_DoScanm_DoNativeCode]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoScanm_NativeCode("DoScan-NativeCode", 4212599994U, 3244736276U, func_DoScanm_NativeCode);


static refalrts::FnResult func_DoScanm_DoNativeCode(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & DoScan-DoNativeCode/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoScan-DoNativeCode/4 t.new#1/5 t.new#2/7 (/11 e.new#3/9 )/12 e.new#4/2 >/1
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
    // </0 & DoScan-DoNativeCode/4 t.StartPos#1/5 t.Pos#1/7 (/11 e.Collected#1/9 )/12 (/17 '%'/19 '%'/20 )/18 e.Lines#1/13 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[13], context[14] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    context[19] = refalrts::char_left( '%', context[15], context[16] );
    if( ! context[19] )
      continue;
    context[20] = refalrts::char_left( '%', context[15], context[16] );
    if( ! context[20] )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    // closed e.Collected#1 as range 9
    // closed e.Lines#1 as range 13
    //DEBUG: t.StartPos#1: 5
    //DEBUG: t.Pos#1: 7
    //DEBUG: e.Collected#1: 9
    //DEBUG: e.Lines#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkNativeCode/4 AsIs: t.StartPos#1/5 } Tile{ AsIs: e.Collected#1/9 } Tile{ AsIs: )/12 HalfReuse: </17 HalfReuse: & DoScan/19 HalfReuse: </20 } Tile{ HalfReuse: & IncLine/11 } Tile{ AsIs: t.Pos#1/7 } Tile{ HalfReuse: >/18 AsIs: e.Lines#1/13 AsIs: >/1 ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_TkNativeCode]);
    refalrts::reinit_open_call(context[17]);
    refalrts::reinit_name(context[19], functions[efunc_DoScan]);
    refalrts::reinit_open_call(context[20]);
    refalrts::reinit_name(context[11], functions[efunc_IncLine]);
    refalrts::reinit_close_call(context[18]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[18] );
    refalrts::push_stack( vm, context[20] );
    refalrts::link_brackets( context[0], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[18];
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[12], context[20] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoScan-DoNativeCode/4 t.StartPos#1/5 t.Pos#1/7 (/11 e.Collected#1/9 )/12 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Collected#1 as range 9
    //DEBUG: t.StartPos#1: 5
    //DEBUG: t.Pos#1: 7
    //DEBUG: e.Collected#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkNativeCode/4 AsIs: t.StartPos#1/5 } Tile{ AsIs: e.Collected#1/9 } Tile{ AsIs: )/12 HalfReuse: (/1 } # TkError/13 Tile{ AsIs: t.Pos#1/7 HalfReuse: 'U'/11 }"nexpected EOF, unclosed native code insertion"/14 )/16 (/17 # TkEOF/18 t.Pos#1/7/19 )/21 Tile{ ]] }
    refalrts::alloc_ident(vm, context[13], identifiers[ident_TkError]);
    refalrts::alloc_chars(vm, context[14], context[15], "nexpected EOF, unclosed native code insertion", 45);
    refalrts::alloc_close_bracket(vm, context[16]);
    refalrts::alloc_open_bracket(vm, context[17]);
    refalrts::alloc_ident(vm, context[18], identifiers[ident_TkEOF]);
    refalrts::copy_evar(vm, context[19], context[20], context[7], context[8]);
    refalrts::alloc_close_bracket(vm, context[21]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_TkNativeCode]);
    refalrts::reinit_open_bracket(context[1]);
    refalrts::reinit_char(context[11], 'U');
    refalrts::link_brackets( context[17], context[21] );
    refalrts::link_brackets( context[1], context[16] );
    refalrts::link_brackets( context[0], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[21] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[12], context[1] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoScan-DoNativeCode/4 t.StartPos#1/5 t.Pos#1/7 (/11 e.Collected#1/9 )/12 (/15 e.NextLine#1/13 )/16 e.Lines#1/2 >/1
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.Collected#1 as range 9
  // closed e.NextLine#1 as range 13
  // closed e.Lines#1 as range 2
  //DEBUG: t.StartPos#1: 5
  //DEBUG: t.Pos#1: 7
  //DEBUG: e.Collected#1: 9
  //DEBUG: e.NextLine#1: 13
  //DEBUG: e.Lines#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoScan-DoNativeCode/4 AsIs: t.StartPos#1/5 } </17 Tile{ HalfReuse: & IncLine/15 } Tile{ AsIs: t.Pos#1/7 } >/18 Tile{ AsIs: (/11 AsIs: e.Collected#1/9 HalfReuse: (/12 } Tile{ AsIs: e.NextLine#1/13 } )/19 Tile{ AsIs: )/16 AsIs: e.Lines#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[17]);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::alloc_close_bracket(vm, context[19]);
  refalrts::reinit_name(context[15], functions[efunc_IncLine]);
  refalrts::reinit_open_bracket(context[12]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[16] );
  refalrts::link_brackets( context[12], context[19] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[17] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[16];
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoScanm_DoNativeCode("DoScan-DoNativeCode", 4212599994U, 3244736276U, func_DoScanm_DoNativeCode);


static refalrts::FnResult func_DoScanm_Ident(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & DoScan-Ident/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoScan-Ident/4 t.new#1/5 (/9 e.new#2/7 )/10 (/13 e.new#3/11 )/14 e.new#4/2 >/1
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
    // </0 & DoScan-Ident/4 t.Pos#1/5 (/9 e.Ident#1/7 )/10 (/13 s.Next#1/17 e.Line#1/15 )/14 e.Lines#1/2 >/1
    context[15] = context[11];
    context[16] = context[12];
    // closed e.Ident#1 as range 7
    // closed e.Lines#1 as range 2
    if( ! refalrts::svar_left( context[17], context[15], context[16] ) )
      continue;
    // closed e.Line#1 as range 15
    //DEBUG: t.Pos#1: 5
    //DEBUG: e.Ident#1: 7
    //DEBUG: e.Lines#1: 2
    //DEBUG: s.Next#1: 17
    //DEBUG: e.Line#1: 15
    //2: e.Lines#1
    //5: t.Pos#1
    //7: e.Ident#1
    //15: e.Line#1
    //17: s.Next#1
    //23: s.Next#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[18]);
    refalrts::alloc_name(vm, context[20], functions[efunc_gen_DoScanm_Ident_S1C1]);
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_IsIdentTail]);
    refalrts::copy_stvar(vm, context[23], context[17]);
    refalrts::alloc_close_call(vm, context[24]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[18] );
    res = refalrts::splice_elem( res, context[19] );
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[21] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_stvar( res, context[23] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[18] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </18 & DoScan-Ident$1?1/22 # True/23 >/19
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::call_left( context[20], context[21], context[18], context[19] );
      context[23] = refalrts::ident_left( identifiers[ident_True], context[20], context[21] );
      if( ! context[23] )
        continue;
      if( ! refalrts::empty_seq( context[20], context[21] ) )
        continue;
      //DEBUG: t.Pos#1: 5
      //DEBUG: e.Ident#1: 7
      //DEBUG: e.Lines#1: 2
      //DEBUG: s.Next#1: 17
      //DEBUG: e.Line#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Next#1/17 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # True/23 >/19 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoScan-Ident/4 AsIs: t.Pos#1/5 AsIs: (/9 AsIs: e.Ident#1/7 HalfReuse: s.Next1 #17/10 HalfReuse: )/13 } Tile{ HalfReuse: (/22 } Tile{ AsIs: e.Line#1/15 } Tile{ AsIs: )/14 AsIs: e.Lines#1/2 HalfReuse: >/18 } Tile{ ]] }
      refalrts::reinit_svar( context[10], context[17] );
      refalrts::reinit_close_bracket(context[13]);
      refalrts::reinit_open_bracket(context[22]);
      refalrts::reinit_close_call(context[18]);
      refalrts::push_stack( vm, context[18] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[22], context[14] );
      refalrts::link_brackets( context[9], context[13] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[14], context[18] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[22], context[22] );
      refalrts::splice_to_freelist_open( vm, context[13], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[18], context[19]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoScan-Ident/4 t.new#5/5 (/9 s.new#6/17 e.new#7/15 )/10 (/13 e.new#8/11 )/14 e.new#9/2 >/1
    context[15] = context[7];
    context[16] = context[8];
    // closed e.new#8 as range 11
    // closed e.new#9 as range 2
    if( ! refalrts::svar_left( context[17], context[15], context[16] ) )
      continue;
    // closed e.new#7 as range 15
    do {
      // </0 & DoScan-Ident/4 t.Pos#1/5 (/9 '<'/17 e.Ident#1/15 )/10 (/13 e.Line#1/11 )/14 e.Lines#1/2 >/1
      if( ! refalrts::char_term( '<', context[17] ) )
        continue;
      // closed e.Ident#1 as range 15
      // closed e.Line#1 as range 11
      // closed e.Lines#1 as range 2
      //DEBUG: t.Pos#1: 5
      //DEBUG: e.Ident#1: 15
      //DEBUG: e.Line#1: 11
      //DEBUG: e.Lines#1: 2

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/18 # TkOpenCall/19 t.Pos#1/5/20 e.Ident#1/15/22 )/24 </25 & DoScan/26 Tile{ AsIs: </0 Reuse: & IncCol/4 AsIs: t.Pos#1/5 HalfReuse: # Len/9 AsIs: '<'/17 AsIs: e.Ident#1/15 HalfReuse: >/10 AsIs: (/13 AsIs: e.Line#1/11 AsIs: )/14 AsIs: e.Lines#1/2 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[18]);
      refalrts::alloc_ident(vm, context[19], identifiers[ident_TkOpenCall]);
      refalrts::copy_evar(vm, context[20], context[21], context[5], context[6]);
      refalrts::copy_evar(vm, context[22], context[23], context[15], context[16]);
      refalrts::alloc_close_bracket(vm, context[24]);
      refalrts::alloc_open_call(vm, context[25]);
      refalrts::alloc_name(vm, context[26], functions[efunc_DoScan]);
      refalrts::update_name(context[4], functions[efunc_IncCol]);
      refalrts::reinit_ident(context[9], identifiers[ident_Len]);
      refalrts::reinit_close_call(context[10]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[25] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::push_stack( vm, context[10] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[18], context[24] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[0];
      res = refalrts::splice_evar( res, context[18], context[26] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoScan-Ident/4 t.Pos#1/5 (/9 '['/17 e.Ident#1/15 )/10 (/13 e.Line#1/11 )/14 e.Lines#1/2 >/1
    if( ! refalrts::char_term( '[', context[17] ) )
      continue;
    // closed e.Ident#1 as range 15
    // closed e.Line#1 as range 11
    // closed e.Lines#1 as range 2
    //DEBUG: t.Pos#1: 5
    //DEBUG: e.Ident#1: 15
    //DEBUG: e.Line#1: 11
    //DEBUG: e.Lines#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/18 # TkOpenADT/19 t.Pos#1/5/20 e.Ident#1/15/22 )/24 </25 & DoScan/26 Tile{ AsIs: </0 Reuse: & IncCol/4 AsIs: t.Pos#1/5 HalfReuse: # Len/9 AsIs: '['/17 AsIs: e.Ident#1/15 HalfReuse: >/10 AsIs: (/13 AsIs: e.Line#1/11 AsIs: )/14 AsIs: e.Lines#1/2 AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[18]);
    refalrts::alloc_ident(vm, context[19], identifiers[ident_TkOpenADT]);
    refalrts::copy_evar(vm, context[20], context[21], context[5], context[6]);
    refalrts::copy_evar(vm, context[22], context[23], context[15], context[16]);
    refalrts::alloc_close_bracket(vm, context[24]);
    refalrts::alloc_open_call(vm, context[25]);
    refalrts::alloc_name(vm, context[26], functions[efunc_DoScan]);
    refalrts::update_name(context[4], functions[efunc_IncCol]);
    refalrts::reinit_ident(context[9], identifiers[ident_Len]);
    refalrts::reinit_close_call(context[10]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[25] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[18], context[24] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[18], context[26] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoScan-Ident/4 t.Pos#1/5 (/9 e.Ident#1/7 )/10 (/13 e.Line#1/11 )/14 e.Lines#1/2 >/1
  // closed e.Ident#1 as range 7
  // closed e.Line#1 as range 11
  // closed e.Lines#1 as range 2
  //DEBUG: t.Pos#1: 5
  //DEBUG: e.Ident#1: 7
  //DEBUG: e.Line#1: 11
  //DEBUG: e.Lines#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/15 # TkName/16 t.Pos#1/5/17 e.Ident#1/7/19 )/21 </22 & DoScan/23 Tile{ AsIs: </0 Reuse: & IncCol/4 AsIs: t.Pos#1/5 HalfReuse: # Len/9 AsIs: e.Ident#1/7 HalfReuse: >/10 AsIs: (/13 AsIs: e.Line#1/11 AsIs: )/14 AsIs: e.Lines#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::alloc_ident(vm, context[16], identifiers[ident_TkName]);
  refalrts::copy_evar(vm, context[17], context[18], context[5], context[6]);
  refalrts::copy_evar(vm, context[19], context[20], context[7], context[8]);
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::alloc_open_call(vm, context[22]);
  refalrts::alloc_name(vm, context[23], functions[efunc_DoScan]);
  refalrts::update_name(context[4], functions[efunc_IncCol]);
  refalrts::reinit_ident(context[9], identifiers[ident_Len]);
  refalrts::reinit_close_call(context[10]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[22] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[15], context[21] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[15], context[23] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoScanm_Ident("DoScan-Ident", 4212599994U, 3244736276U, func_DoScanm_Ident);


static refalrts::FnResult func_DoScanm_Chars(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & DoScan-Chars/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoScan-Chars/4 t.new#1/5 (/9 e.new#2/7 )/10 e.new#3/2 >/1
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
    // </0 & DoScan-Chars/4 t.new#4/5 (/9 s.new#5/13 e.new#6/11 )/10 e.new#7/2 >/1
    context[11] = context[7];
    context[12] = context[8];
    // closed e.new#7 as range 2
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    // closed e.new#6 as range 11
    do {
      // </0 & DoScan-Chars/4 t.Pos#1/5 (/9 '\\'/13 e.Line#1/11 )/10 e.Lines#1/2 >/1
      if( ! refalrts::char_term( '\\', context[13] ) )
        continue;
      // closed e.Line#1 as range 11
      // closed e.Lines#1 as range 2
      //DEBUG: t.Pos#1: 5
      //DEBUG: e.Line#1: 11
      //DEBUG: e.Lines#1: 2

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/9 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoScan-Chars-Escape/4 AsIs: t.Pos#1/5 } Tile{ HalfReuse: (/13 AsIs: e.Line#1/11 AsIs: )/10 AsIs: e.Lines#1/2 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_DoScanm_Charsm_Escape]);
      refalrts::reinit_open_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[13], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[13];
      refalrts::splice_to_freelist_open( vm, context[6], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoScan-Chars/4 t.Pos#1/5 (/9 '\''/13 e.Line#1/11 )/10 e.Lines#1/2 >/1
      if( ! refalrts::char_term( '\'', context[13] ) )
        continue;
      // closed e.Line#1 as range 11
      // closed e.Lines#1 as range 2
      //DEBUG: t.Pos#1: 5
      //DEBUG: e.Line#1: 11
      //DEBUG: e.Lines#1: 2

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </14 & DoScan/15 Tile{ AsIs: </0 Reuse: & IncCol/4 AsIs: t.Pos#1/5 HalfReuse: >/9 HalfReuse: (/13 AsIs: e.Line#1/11 AsIs: )/10 AsIs: e.Lines#1/2 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[14]);
      refalrts::alloc_name(vm, context[15], functions[efunc_DoScan]);
      refalrts::update_name(context[4], functions[efunc_IncCol]);
      refalrts::reinit_close_call(context[9]);
      refalrts::reinit_open_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[14] );
      refalrts::link_brackets( context[13], context[10] );
      refalrts::push_stack( vm, context[9] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[0];
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoScan-Chars/4 t.Pos#1/5 (/9 s.Char#1/13 e.Line#1/11 )/10 e.Lines#1/2 >/1
    // closed e.Line#1 as range 11
    // closed e.Lines#1 as range 2
    //DEBUG: t.Pos#1: 5
    //DEBUG: s.Char#1: 13
    //DEBUG: e.Line#1: 11
    //DEBUG: e.Lines#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/14 # TkChar/15 t.Pos#1/5/16 Tile{ AsIs: s.Char#1/13 } )/18 </19 & DoScan-Chars/20 Tile{ AsIs: </0 Reuse: & IncCol/4 AsIs: t.Pos#1/5 HalfReuse: >/9 } (/21 Tile{ AsIs: e.Line#1/11 } Tile{ AsIs: )/10 AsIs: e.Lines#1/2 AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[14]);
    refalrts::alloc_ident(vm, context[15], identifiers[ident_TkChar]);
    refalrts::copy_evar(vm, context[16], context[17], context[5], context[6]);
    refalrts::alloc_close_bracket(vm, context[18]);
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_DoScanm_Chars]);
    refalrts::alloc_open_bracket(vm, context[21]);
    refalrts::update_name(context[4], functions[efunc_IncCol]);
    refalrts::reinit_close_call(context[9]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[19] );
    refalrts::link_brackets( context[21], context[10] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[14], context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[21], context[21] );
    res = refalrts::splice_evar( res, context[0], context[9] );
    res = refalrts::splice_evar( res, context[18], context[20] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[14], context[17] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoScan-Chars/4 t.Pos#1/5 (/9 )/10 e.Lines#1/2 >/1
  if( ! refalrts::empty_seq( context[7], context[8] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Lines#1 as range 2
  //DEBUG: t.Pos#1: 5
  //DEBUG: e.Lines#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkError/4 AsIs: t.Pos#1/5 HalfReuse: 'U'/9 HalfReuse: 'n'/10 }"closed \' - single quote"/11 )/13 </14 & DoScan/15 </16 & IncLine/17 t.Pos#1/5/18 >/20 Tile{ AsIs: e.Lines#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[11], context[12], "closed \' - single quote", 23);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_DoScan]);
  refalrts::alloc_open_call(vm, context[16]);
  refalrts::alloc_name(vm, context[17], functions[efunc_IncLine]);
  refalrts::copy_evar(vm, context[18], context[19], context[5], context[6]);
  refalrts::alloc_close_call(vm, context[20]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_TkError]);
  refalrts::reinit_char(context[9], 'U');
  refalrts::reinit_char(context[10], 'n');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[16] );
  refalrts::link_brackets( context[0], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[20] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoScanm_Chars("DoScan-Chars", 4212599994U, 3244736276U, func_DoScanm_Chars);


static refalrts::FnResult func_gen_SimpleEscapedChar_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & SimpleEscapedChar:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & SimpleEscapedChar:1/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & SimpleEscapedChar:1/4 s.Escaped#1/5 e.Escapes-B#2/8 (/14 s.Escaped#1/16 s.Char#2/17 )/15 e.Escapes-E#2/10 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[8] = 0;
    context[9] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[10] = context[6];
      context[11] = context[7];
      context[12] = 0;
      context[13] = 0;
      context[14] = refalrts::brackets_left( context[12], context[13], context[10], context[11] );
      if( ! context[14] )
        continue;
      refalrts::bracket_pointers(context[14], context[15]);
      if( ! refalrts::repeated_stvar_left( vm, context[16], context[5], context[12], context[13] ) )
        continue;
      // closed e.Escapes-E#2 as range 10
      if( ! refalrts::svar_left( context[17], context[12], context[13] ) )
        continue;
      if( ! refalrts::empty_seq( context[12], context[13] ) )
        continue;
      //DEBUG: s.Escaped#1: 5
      //DEBUG: e.Escapes-B#2: 8
      //DEBUG: e.Escapes-E#2: 10
      //DEBUG: s.Char#2: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & SimpleEscapedChar:1/4 s.Escaped#1/5 e.Escapes-B#2/8 (/14 s.Escaped#1/16 s.Char#2/17 )/15 e.Escapes-E#2/10 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Char2 #17/1 ]] }
      refalrts::reinit_svar( context[1], context[17] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[8], context[9], context[6], context[7] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SimpleEscapedChar:1/4 s.Escaped#1/5 e.Escapes#2/2 >/1
  // closed e.Escapes#2 as range 2
  //DEBUG: s.Escaped#1: 5
  //DEBUG: e.Escapes#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & SimpleEscapedChar:1/4 s.Escaped#1/5 e.Escapes#2/2 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SimpleEscapedChar_B1("SimpleEscapedChar:1", 4212599994U, 3244736276U, func_gen_SimpleEscapedChar_B1);


static refalrts::FnResult func_SimpleEscapedChar(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 48 elems
  refalrts::Iter context[48];
  refalrts::zeros( context, 48 );
  // </0 & SimpleEscapedChar/4 s.Escaped#1/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Escaped#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & SimpleEscapedChar:1/6 Tile{ AsIs: s.Escaped#1/5 } {*}/7 (/8"\'\'"/9 )/11 (/12"\"\""/13 )/15 (/16"\\\\"/17 )/19 (/20"n\n"/21 )/23 (/24"r\r"/25 )/27 (/28"t\t"/29 )/31 (/32"(("/33 )/35 (/36"))"/37 )/39 (/40"<<"/41 )/43 (/44">>"/45 )/47 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_SimpleEscapedChar_B1]);
  refalrts::alloc_unwrapped_closure(vm, context[7], context[4]);
  refalrts::alloc_open_bracket(vm, context[8]);
  refalrts::alloc_chars(vm, context[9], context[10], "\'\'", 2);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_chars(vm, context[13], context[14], "\"\"", 2);
  refalrts::alloc_close_bracket(vm, context[15]);
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::alloc_chars(vm, context[17], context[18], "\\\\", 2);
  refalrts::alloc_close_bracket(vm, context[19]);
  refalrts::alloc_open_bracket(vm, context[20]);
  refalrts::alloc_chars(vm, context[21], context[22], "n\n", 2);
  refalrts::alloc_close_bracket(vm, context[23]);
  refalrts::alloc_open_bracket(vm, context[24]);
  refalrts::alloc_chars(vm, context[25], context[26], "r\r", 2);
  refalrts::alloc_close_bracket(vm, context[27]);
  refalrts::alloc_open_bracket(vm, context[28]);
  refalrts::alloc_chars(vm, context[29], context[30], "t\t", 2);
  refalrts::alloc_close_bracket(vm, context[31]);
  refalrts::alloc_open_bracket(vm, context[32]);
  refalrts::alloc_chars(vm, context[33], context[34], "((", 2);
  refalrts::alloc_close_bracket(vm, context[35]);
  refalrts::alloc_open_bracket(vm, context[36]);
  refalrts::alloc_chars(vm, context[37], context[38], "))", 2);
  refalrts::alloc_close_bracket(vm, context[39]);
  refalrts::alloc_open_bracket(vm, context[40]);
  refalrts::alloc_chars(vm, context[41], context[42], "<<", 2);
  refalrts::alloc_close_bracket(vm, context[43]);
  refalrts::alloc_open_bracket(vm, context[44]);
  refalrts::alloc_chars(vm, context[45], context[46], ">>", 2);
  refalrts::alloc_close_bracket(vm, context[47]);
  refalrts::reinit_closure_head(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[44], context[47] );
  refalrts::link_brackets( context[40], context[43] );
  refalrts::link_brackets( context[36], context[39] );
  refalrts::link_brackets( context[32], context[35] );
  refalrts::link_brackets( context[28], context[31] );
  refalrts::link_brackets( context[24], context[27] );
  refalrts::link_brackets( context[20], context[23] );
  refalrts::link_brackets( context[16], context[19] );
  refalrts::link_brackets( context[12], context[15] );
  refalrts::link_brackets( context[8], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[7], context[47] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[6], context[6] );
  refalrts::use( res );
  refalrts::wrap_closure( context[7] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SimpleEscapedChar("SimpleEscapedChar", 4212599994U, 3244736276U, func_SimpleEscapedChar);


static refalrts::FnResult func_ScanEscape(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 38 elems
  refalrts::Iter context[38];
  refalrts::zeros( context, 38 );
  // </0 & ScanEscape/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ScanEscape/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & ScanEscape/4 t.new#3/5 s.new#4/9 e.new#5/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    // closed e.new#5 as range 7
    do {
      // </0 & ScanEscape/4 t.Pos#1/5 s.Escaped#1/9 e.Line#1/7 >/1
      // closed e.Line#1 as range 7
      //DEBUG: t.Pos#1: 5
      //DEBUG: s.Escaped#1: 9
      //DEBUG: e.Line#1: 7
      //5: t.Pos#1
      //7: e.Line#1
      //9: s.Escaped#1
      //15: s.Escaped#1

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[10]);
      refalrts::alloc_name(vm, context[12], functions[efunc_gen_ScanEscape_S1C1]);
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_SimpleEscapedChar]);
      refalrts::copy_stvar(vm, context[15], context[9]);
      refalrts::alloc_close_call(vm, context[16]);
      refalrts::alloc_close_call(vm, context[11]);
      refalrts::push_stack( vm, context[11] );
      refalrts::push_stack( vm, context[10] );
      res = refalrts::splice_elem( res, context[11] );
      refalrts::push_stack( vm, context[16] );
      refalrts::push_stack( vm, context[13] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_stvar( res, context[15] );
      res = refalrts::splice_elem( res, context[14] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_elem( res, context[12] );
      res = refalrts::splice_elem( res, context[10] );
      refalrts::use( res );
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function(vm);
      do {
        // </10 & ScanEscape$1?1/14 s.Char#2/15 >/11
        context[12] = 0;
        context[13] = 0;
        context[14] = refalrts::call_left( context[12], context[13], context[10], context[11] );
        if( ! refalrts::svar_left( context[15], context[12], context[13] ) )
          continue;
        if( ! refalrts::empty_seq( context[12], context[13] ) )
          continue;
        //DEBUG: t.Pos#1: 5
        //DEBUG: s.Escaped#1: 9
        //DEBUG: e.Line#1: 7
        //DEBUG: s.Char#2: 15

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkChar/4 AsIs: t.Pos#1/5 } Tile{ AsIs: s.Char#2/15 HalfReuse: )/11 HalfReuse: </1 } & IncCol/16 t.Pos#1/5/17 Tile{ HalfReuse: # Len/10 HalfReuse: '\\'/14 } Tile{ AsIs: s.Escaped#1/9 } >/19 Tile{ AsIs: e.Line#1/7 } Tile{ ]] }
        refalrts::alloc_name(vm, context[16], functions[efunc_IncCol]);
        refalrts::copy_evar(vm, context[17], context[18], context[5], context[6]);
        refalrts::alloc_close_call(vm, context[19]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_ident(context[4], identifiers[ident_TkChar]);
        refalrts::reinit_close_bracket(context[11]);
        refalrts::reinit_open_call(context[1]);
        refalrts::reinit_ident(context[10], identifiers[ident_Len]);
        refalrts::reinit_char(context[14], '\\');
        refalrts::push_stack( vm, context[19] );
        refalrts::push_stack( vm, context[1] );
        refalrts::link_brackets( context[0], context[11] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[7], context[8] );
        res = refalrts::splice_evar( res, context[19], context[19] );
        res = refalrts::splice_evar( res, context[9], context[9] );
        res = refalrts::splice_evar( res, context[10], context[14] );
        res = refalrts::splice_evar( res, context[16], context[18] );
        res = refalrts::splice_evar( res, context[15], context[1] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[10], context[11]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ScanEscape/4 t.new#6/5 'x'/9 e.new#7/7 >/1
      if( ! refalrts::char_term( 'x', context[9] ) )
        continue;
      // closed e.new#7 as range 7
      do {
        // </0 & ScanEscape/4 t.Pos#1/5 'x'/9 s.Hex1#1/12 s.Hex2#1/13 e.Line#1/10 >/1
        context[10] = context[7];
        context[11] = context[8];
        if( ! refalrts::svar_left( context[12], context[10], context[11] ) )
          continue;
        if( ! refalrts::svar_left( context[13], context[10], context[11] ) )
          continue;
        // closed e.Line#1 as range 10
        //DEBUG: t.Pos#1: 5
        //DEBUG: s.Hex1#1: 12
        //DEBUG: s.Hex2#1: 13
        //DEBUG: e.Line#1: 10
        //5: t.Pos#1
        //10: e.Line#1
        //12: s.Hex1#1
        //13: s.Hex2#1
        //19: s.Hex1#1

        refalrts::reset_allocator(vm);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::alloc_open_call(vm, context[14]);
        refalrts::alloc_name(vm, context[16], functions[efunc_gen_ScanEscape_S2C1]);
        refalrts::alloc_open_call(vm, context[17]);
        refalrts::alloc_name(vm, context[18], functions[efunc_HexDigit]);
        refalrts::copy_stvar(vm, context[19], context[12]);
        refalrts::alloc_close_call(vm, context[20]);
        refalrts::alloc_close_call(vm, context[15]);
        refalrts::push_stack( vm, context[15] );
        refalrts::push_stack( vm, context[14] );
        res = refalrts::splice_elem( res, context[15] );
        refalrts::push_stack( vm, context[20] );
        refalrts::push_stack( vm, context[17] );
        res = refalrts::splice_elem( res, context[20] );
        res = refalrts::splice_stvar( res, context[19] );
        res = refalrts::splice_elem( res, context[18] );
        res = refalrts::splice_elem( res, context[17] );
        res = refalrts::splice_elem( res, context[16] );
        res = refalrts::splice_elem( res, context[14] );
        refalrts::use( res );
        refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
        if (rec_res != refalrts::cSuccess)
          return rec_res;
        refalrts::this_is_generated_function(vm);
        do {
          // </14 & ScanEscape$2?1/18 s.Num1#2/19 >/15
          context[16] = 0;
          context[17] = 0;
          context[18] = refalrts::call_left( context[16], context[17], context[14], context[15] );
          if( ! refalrts::svar_left( context[19], context[16], context[17] ) )
            continue;
          if( ! refalrts::empty_seq( context[16], context[17] ) )
            continue;
          //DEBUG: t.Pos#1: 5
          //DEBUG: s.Hex1#1: 12
          //DEBUG: s.Hex2#1: 13
          //DEBUG: e.Line#1: 10
          //DEBUG: s.Num1#2: 19
          //5: t.Pos#1
          //10: e.Line#1
          //12: s.Hex1#1
          //13: s.Hex2#1
          //19: s.Num1#2
          //25: s.Hex2#1

          refalrts::reset_allocator(vm);
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          refalrts::alloc_open_call(vm, context[20]);
          refalrts::alloc_name(vm, context[22], functions[efunc_gen_ScanEscape_S2C2]);
          refalrts::alloc_open_call(vm, context[23]);
          refalrts::alloc_name(vm, context[24], functions[efunc_HexDigit]);
          refalrts::copy_stvar(vm, context[25], context[13]);
          refalrts::alloc_close_call(vm, context[26]);
          refalrts::alloc_close_call(vm, context[21]);
          refalrts::push_stack( vm, context[21] );
          refalrts::push_stack( vm, context[20] );
          res = refalrts::splice_elem( res, context[21] );
          refalrts::push_stack( vm, context[26] );
          refalrts::push_stack( vm, context[23] );
          res = refalrts::splice_elem( res, context[26] );
          res = refalrts::splice_stvar( res, context[25] );
          res = refalrts::splice_elem( res, context[24] );
          res = refalrts::splice_elem( res, context[23] );
          res = refalrts::splice_elem( res, context[22] );
          res = refalrts::splice_elem( res, context[20] );
          refalrts::use( res );
          refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
          if (rec_res != refalrts::cSuccess)
            return rec_res;
          refalrts::this_is_generated_function(vm);
          do {
            // </20 & ScanEscape$2?2/24 s.Num2#3/25 >/21
            context[22] = 0;
            context[23] = 0;
            context[24] = refalrts::call_left( context[22], context[23], context[20], context[21] );
            if( ! refalrts::svar_left( context[25], context[22], context[23] ) )
              continue;
            if( ! refalrts::empty_seq( context[22], context[23] ) )
              continue;
            //DEBUG: t.Pos#1: 5
            //DEBUG: s.Hex1#1: 12
            //DEBUG: s.Hex2#1: 13
            //DEBUG: e.Line#1: 10
            //DEBUG: s.Num1#2: 19
            //DEBUG: s.Num2#3: 25

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Num1#2/19 {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkChar/4 AsIs: t.Pos#1/5 HalfReuse: </9 } & Chr/26 </27 & Add/28 Tile{ AsIs: </14 Reuse: & Mul/18 } Tile{ HalfReuse: s.Num12 #19/15 HalfReuse: 16/20 HalfReuse: >/24 AsIs: s.Num2#3/25 AsIs: >/21 AsIs: >/1 } )/29 </30 & IncCol/31 t.Pos#1/5/32 # Len/34"\\x"/35 Tile{ AsIs: s.Hex1#1/12 AsIs: s.Hex2#1/13 } >/37 Tile{ AsIs: e.Line#1/10 } Tile{ ]] }
            refalrts::alloc_name(vm, context[26], functions[efunc_Chr]);
            refalrts::alloc_open_call(vm, context[27]);
            refalrts::alloc_name(vm, context[28], functions[efunc_Add]);
            refalrts::alloc_close_bracket(vm, context[29]);
            refalrts::alloc_open_call(vm, context[30]);
            refalrts::alloc_name(vm, context[31], functions[efunc_IncCol]);
            refalrts::copy_evar(vm, context[32], context[33], context[5], context[6]);
            refalrts::alloc_ident(vm, context[34], identifiers[ident_Len]);
            refalrts::alloc_chars(vm, context[35], context[36], "\\x", 2);
            refalrts::alloc_close_call(vm, context[37]);
            refalrts::reinit_open_bracket(context[0]);
            refalrts::reinit_ident(context[4], identifiers[ident_TkChar]);
            refalrts::reinit_open_call(context[9]);
            refalrts::update_name(context[18], functions[efunc_Mul]);
            refalrts::reinit_svar( context[15], context[19] );
            refalrts::reinit_number(context[20], 16UL);
            refalrts::reinit_close_call(context[24]);
            refalrts::push_stack( vm, context[37] );
            refalrts::push_stack( vm, context[30] );
            refalrts::link_brackets( context[0], context[29] );
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[9] );
            refalrts::push_stack( vm, context[21] );
            refalrts::push_stack( vm, context[27] );
            refalrts::push_stack( vm, context[24] );
            refalrts::push_stack( vm, context[14] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = arg_end->next;
            res = refalrts::splice_evar( res, context[10], context[11] );
            res = refalrts::splice_evar( res, context[37], context[37] );
            res = refalrts::splice_evar( res, context[12], context[13] );
            res = refalrts::splice_evar( res, context[29], context[36] );
            res = refalrts::splice_evar( res, context[15], context[1] );
            res = refalrts::splice_evar( res, context[14], context[18] );
            res = refalrts::splice_evar( res, context[26], context[28] );
            refalrts::splice_to_freelist_open( vm, context[9], res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          refalrts::splice_to_freelist(vm, context[20], context[21]);
          continue;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        refalrts::splice_to_freelist(vm, context[14], context[15]);
        continue;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ScanEscape/4 t.Pos#1/5 'x'/9 e.Line#1/7 >/1
      // closed e.Line#1 as range 7
      //DEBUG: t.Pos#1: 5
      //DEBUG: e.Line#1: 7

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkError/4 AsIs: t.Pos#1/5 Reuse: 'A'/9 }"fter \\x must be two hex digits"/10 )/12 </13 & IncCol/14 t.Pos#1/5/15 # Len/17"\\x"/18 Tile{ AsIs: >/1 } Tile{ AsIs: e.Line#1/7 } Tile{ ]] }
      refalrts::alloc_chars(vm, context[10], context[11], "fter \\x must be two hex digits", 30);
      refalrts::alloc_close_bracket(vm, context[12]);
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_IncCol]);
      refalrts::copy_evar(vm, context[15], context[16], context[5], context[6]);
      refalrts::alloc_ident(vm, context[17], identifiers[ident_Len]);
      refalrts::alloc_chars(vm, context[18], context[19], "\\x", 2);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TkError]);
      refalrts::update_char(context[9], 'A');
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::link_brackets( context[0], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[10], context[19] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ScanEscape/4 t.Pos#1/5 s.Other#1/9 e.Line#1/7 >/1
    // closed e.Line#1 as range 7
    //DEBUG: t.Pos#1: 5
    //DEBUG: s.Other#1: 9
    //DEBUG: e.Line#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkError/4 AsIs: t.Pos#1/5 }"Bad escape sequence \\"/10 Tile{ AsIs: s.Other#1/9 } )/12 </13 & IncCol/14 t.Pos#1/5/15 # Len/17 '\\'/18 s.Other#1/9/19 Tile{ AsIs: >/1 } Tile{ AsIs: e.Line#1/7 } Tile{ ]] }
    refalrts::alloc_chars(vm, context[10], context[11], "Bad escape sequence \\", 21);
    refalrts::alloc_close_bracket(vm, context[12]);
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_IncCol]);
    refalrts::copy_evar(vm, context[15], context[16], context[5], context[6]);
    refalrts::alloc_ident(vm, context[17], identifiers[ident_Len]);
    refalrts::alloc_char(vm, context[18], '\\');
    refalrts::copy_stvar(vm, context[19], context[9]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_TkError]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::link_brackets( context[0], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[12], context[19] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ScanEscape/4 t.Pos#1/5 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Pos#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkError/4 AsIs: t.Pos#1/5 HalfReuse: 'U'/1 }"nexpected \\ at end of line"/7 )/9 t.Pos#1/5/10 Tile{ ]] }
  refalrts::alloc_chars(vm, context[7], context[8], "nexpected \\ at end of line", 26);
  refalrts::alloc_close_bracket(vm, context[9]);
  refalrts::copy_evar(vm, context[10], context[11], context[5], context[6]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_TkError]);
  refalrts::reinit_char(context[1], 'U');
  refalrts::link_brackets( context[0], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ScanEscape("ScanEscape", 4212599994U, 3244736276U, func_ScanEscape);


static refalrts::FnResult func_DoScanm_Charsm_Escape(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & DoScan-Chars-Escape/4 t.Pos#1/5 (/9 e.LineWithEscapes#1/7 )/10 e.Lines#1/2 >/1
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
  // closed e.LineWithEscapes#1 as range 7
  // closed e.Lines#1 as range 2
  //DEBUG: t.Pos#1: 5
  //DEBUG: e.LineWithEscapes#1: 7
  //DEBUG: e.Lines#1: 2
  //2: e.Lines#1
  //5: t.Pos#1
  //7: e.LineWithEscapes#1
  //16: t.Pos#1
  //17: e.LineWithEscapes#1

  refalrts::reset_allocator(vm);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_DoScanm_Charsm_Escape_C1]);
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_ScanEscape]);
  refalrts::copy_stvar(vm, context[16], context[5]);
  refalrts::copy_evar(vm, context[17], context[18], context[7], context[8]);
  refalrts::alloc_close_call(vm, context[19]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[11] );
  res = refalrts::splice_elem( res, context[12] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[14] );
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_stvar( res, context[16] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[11] );
  refalrts::use( res );
  refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
  if (rec_res != refalrts::cSuccess)
    return rec_res;
  refalrts::this_is_generated_function(vm);
  do {
    // </11 & DoScan-Chars-Escape?1/15 t.ScannedToken#2/16 t.Pos1#2/18 e.RestOfLine#2/13 >/12
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::call_left( context[13], context[14], context[11], context[12] );
    context[17] = refalrts::tvar_left( context[16], context[13], context[14] );
    if( ! context[17] )
      continue;
    context[19] = refalrts::tvar_left( context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    // closed e.RestOfLine#2 as range 13
    //DEBUG: t.Pos#1: 5
    //DEBUG: e.LineWithEscapes#1: 7
    //DEBUG: e.Lines#1: 2
    //DEBUG: t.ScannedToken#2: 16
    //DEBUG: t.Pos1#2: 18
    //DEBUG: e.RestOfLine#2: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} t.Pos#1/5 {REMOVED TILE} e.LineWithEscapes#1/7 {REMOVED TILE} & DoScan-Chars-Escape?1/15 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/12 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.ScannedToken#2/16 } Tile{ AsIs: </0 Reuse: & DoScan-Chars/4 } Tile{ AsIs: t.Pos1#2/18 } Tile{ AsIs: (/9 } Tile{ AsIs: e.RestOfLine#2/13 } Tile{ AsIs: )/10 AsIs: e.Lines#1/2 HalfReuse: >/11 } Tile{ ]] }
    refalrts::update_name(context[4], functions[efunc_DoScanm_Chars]);
    refalrts::reinit_close_call(context[11]);
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  refalrts::splice_to_freelist(vm, context[11], context[12]);
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_DoScanm_Charsm_Escape("DoScan-Chars-Escape", 4212599994U, 3244736276U, func_DoScanm_Charsm_Escape);


static refalrts::FnResult func_gen_HexDigit_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & HexDigit:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & HexDigit:1/4 e.new#1/2 s.new#2/6 s.new#3/5 >/1
  if( ! refalrts::svar_right( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 2
  do {
    // </0 & HexDigit:1/4 s.new#6/9 s.new#7/10 s.new#5/6 s.new#4/5 >/1
    context[7] = context[2];
    context[8] = context[3];
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[7], context[8] ) )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    do {
      // </0 & HexDigit:1/4 s.Digit#1/9 'D'/10 '0'/6 s.Digit#1/5 >/1
      if( ! refalrts::char_term( 'D', context[10] ) )
        continue;
      if( ! refalrts::char_term( '0', context[6] ) )
        continue;
      if( ! refalrts::repeated_stvar_term( vm, context[5], context[9] ) )
        continue;
      //DEBUG: s.Digit#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} '0'/6 s.Digit#1/5 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Numb/4 AsIs: s.Digit#1/9 HalfReuse: >/10 } Tile{ ]] }
      refalrts::update_name(context[4], functions[efunc_Numb]);
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

    // </0 & HexDigit:1/4 s.new#10/9 'L'/10 s.new#9/6 s.new#8/5 >/1
    if( ! refalrts::char_term( 'L', context[10] ) )
      continue;
    do {
      // </0 & HexDigit:1/4 s.Digit#1/9 'L'/10 'u'/6 s.Digit#1/5 >/1
      if( ! refalrts::char_term( 'u', context[6] ) )
        continue;
      if( ! refalrts::repeated_stvar_term( vm, context[5], context[9] ) )
        continue;
      //DEBUG: s.Digit#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Digit#1/9 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoHexDigit/4 }"ABCDE"/11 Tile{ Reuse: 'F'/10 HalfReuse: 10/6 AsIs: s.Digit#1/5 AsIs: >/1 ]] }
      refalrts::alloc_chars(vm, context[11], context[12], "ABCDE", 5);
      refalrts::update_name(context[4], functions[efunc_DoHexDigit]);
      refalrts::update_char(context[10], 'F');
      refalrts::reinit_number(context[6], 10UL);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[10];
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & HexDigit:1/4 s.Digit#1/9 'L'/10 'l'/6 s.Digit#1/5 >/1
    if( ! refalrts::char_term( 'l', context[6] ) )
      continue;
    if( ! refalrts::repeated_stvar_term( vm, context[5], context[9] ) )
      continue;
    //DEBUG: s.Digit#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Digit#1/9 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoHexDigit/4 }"abcde"/11 Tile{ Reuse: 'f'/10 HalfReuse: 10/6 AsIs: s.Digit#1/5 AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[11], context[12], "abcde", 5);
    refalrts::update_name(context[4], functions[efunc_DoHexDigit]);
    refalrts::update_char(context[10], 'f');
    refalrts::reinit_number(context[6], 10UL);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & HexDigit:1/4 s.Digit#1/6 s.Other#2/5 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Digit#1: 6
  //DEBUG: s.Other#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & HexDigit:1/4 s.Digit#1/6 s.Other#2/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_HexDigit_B1("HexDigit:1", 4212599994U, 3244736276U, func_gen_HexDigit_B1);


static refalrts::FnResult func_HexDigit(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & HexDigit/4 s.Digit#1/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Digit#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </6 [*]/7 & HexDigit:1/8 s.Digit#1/5/9 {*}/10 Tile{ AsIs: </0 Reuse: & Type/4 AsIs: s.Digit#1/5 AsIs: >/1 } >/11 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_closure_head(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_HexDigit_B1]);
  refalrts::copy_stvar(vm, context[9], context[5]);
  refalrts::alloc_unwrapped_closure(vm, context[10], context[7]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_Type]);
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[6], context[10] );
  refalrts::use( res );
  refalrts::wrap_closure( context[10] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_HexDigit("HexDigit", 4212599994U, 3244736276U, func_HexDigit);


static refalrts::FnResult func_DoHexDigit(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & DoHexDigit/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoHexDigit/4 e.new#1/2 s.new#2/6 s.new#3/5 >/1
  if( ! refalrts::svar_right( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 2
  do {
    // </0 & DoHexDigit/4 s.new#6/9 e.new#7/7 s.new#5/6 s.new#4/5 >/1
    context[7] = context[2];
    context[8] = context[3];
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    // closed e.new#7 as range 7
    do {
      // </0 & DoHexDigit/4 s.Digit#1/9 e.Samples#1/7 s.Val#1/6 s.Digit#1/5 >/1
      if( ! refalrts::repeated_stvar_term( vm, context[5], context[9] ) )
        continue;
      // closed e.Samples#1 as range 7
      //DEBUG: s.Digit#1: 9
      //DEBUG: s.Val#1: 6
      //DEBUG: e.Samples#1: 7

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & DoHexDigit/4 s.Digit#1/9 e.Samples#1/7 s.Val#1/6 s.Digit#1/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Val1 #6/1 ]] }
      refalrts::reinit_svar( context[1], context[6] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoHexDigit/4 s.OtherDigit#1/9 e.Samples#1/7 s.Val#1/6 s.Digit#1/5 >/1
    // closed e.Samples#1 as range 7
    //DEBUG: s.OtherDigit#1: 9
    //DEBUG: s.Val#1: 6
    //DEBUG: s.Digit#1: 5
    //DEBUG: e.Samples#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.OtherDigit#1/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoHexDigit/4 } Tile{ AsIs: e.Samples#1/7 } </10 & Inc/11 Tile{ AsIs: s.Val#1/6 } >/12 Tile{ AsIs: s.Digit#1/5 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_Inc]);
    refalrts::alloc_close_call(vm, context[12]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[6], context[6] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoHexDigit/4 s.BadVal#1/6 s.Digit#1/5 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.BadVal#1: 6
  //DEBUG: s.Digit#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DoHexDigit/4 s.BadVal#1/6 s.Digit#1/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoHexDigit("DoHexDigit", 4212599994U, 3244736276U, func_DoHexDigit);


static refalrts::FnResult func_MakeCompound(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & MakeCompound/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & MakeCompound/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & MakeCompound/4 t.Pos#1/5 e.Compound-B#1/9 '\000'/13 e.Compound-E#1/11 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[9] = 0;
    context[10] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[11] = context[7];
      context[12] = context[8];
      context[13] = refalrts::char_left( '\000', context[11], context[12] );
      if( ! context[13] )
        continue;
      // closed e.Compound-E#1 as range 11
      //DEBUG: t.Pos#1: 5
      //DEBUG: e.Compound-B#1: 9
      //DEBUG: e.Compound-E#1: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} e.Compound-E#1/11 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/14 # TkWarning/15 t.Pos#1/5/16 'Z'/18 Tile{ HalfReuse: 'e'/1 }"ro byte in compound symbol"/19 )/21 Tile{ HalfReuse: (/0 HalfReuse: # TkCompound/4 AsIs: t.Pos#1/5 AsIs: e.Compound-B#1/9 HalfReuse: )/13 } Tile{ ]] }
      refalrts::alloc_open_bracket(vm, context[14]);
      refalrts::alloc_ident(vm, context[15], identifiers[ident_TkWarning]);
      refalrts::copy_evar(vm, context[16], context[17], context[5], context[6]);
      refalrts::alloc_char(vm, context[18], 'Z');
      refalrts::alloc_chars(vm, context[19], context[20], "ro byte in compound symbol", 26);
      refalrts::alloc_close_bracket(vm, context[21]);
      refalrts::reinit_char(context[1], 'e');
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TkCompound]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::link_brackets( context[0], context[13] );
      refalrts::link_brackets( context[14], context[21] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[0], context[13] );
      res = refalrts::splice_evar( res, context[19], context[21] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[14], context[18] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[9], context[10], context[7], context[8] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MakeCompound/4 t.Pos#1/5 e.Compound#1/2 >/1
  // closed e.Compound#1 as range 2
  //DEBUG: t.Pos#1: 5
  //DEBUG: e.Compound#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkCompound/4 AsIs: t.Pos#1/5 AsIs: e.Compound#1/2 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_TkCompound]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MakeCompound("MakeCompound", 4212599994U, 3244736276U, func_MakeCompound);


static refalrts::FnResult func_DoScanm_Compound(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & DoScan-Compound/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoScan-Compound/4 t.new#1/5 t.new#2/7 (/11 e.new#3/9 )/12 (/15 e.new#4/13 )/16 e.new#5/2 >/1
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
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.new#3 as range 9
  // closed e.new#4 as range 13
  // closed e.new#5 as range 2
  do {
    // </0 & DoScan-Compound/4 t.new#6/5 t.new#7/7 (/11 e.new#8/9 )/12 (/15 s.new#9/19 e.new#10/17 )/16 e.new#11/2 >/1
    context[17] = context[13];
    context[18] = context[14];
    // closed e.new#8 as range 9
    // closed e.new#11 as range 2
    if( ! refalrts::svar_left( context[19], context[17], context[18] ) )
      continue;
    // closed e.new#10 as range 17
    do {
      // </0 & DoScan-Compound/4 t.StartPos#1/5 t.Pos#1/7 (/11 e.Compound#1/9 )/12 (/15 '\"'/19 e.Line#1/17 )/16 e.Lines#1/2 >/1
      if( ! refalrts::char_term( '\"', context[19] ) )
        continue;
      // closed e.Compound#1 as range 9
      // closed e.Line#1 as range 17
      // closed e.Lines#1 as range 2
      //DEBUG: t.StartPos#1: 5
      //DEBUG: t.Pos#1: 7
      //DEBUG: e.Compound#1: 9
      //DEBUG: e.Line#1: 17
      //DEBUG: e.Lines#1: 2

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & MakeCompound/4 AsIs: t.StartPos#1/5 } Tile{ AsIs: e.Compound#1/9 } Tile{ HalfReuse: >/11 } </20 Tile{ HalfReuse: & DoScan/12 } </21 & IncCol/22 Tile{ AsIs: t.Pos#1/7 } Tile{ HalfReuse: >/15 HalfReuse: (/19 AsIs: e.Line#1/17 AsIs: )/16 AsIs: e.Lines#1/2 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[20]);
      refalrts::alloc_open_call(vm, context[21]);
      refalrts::alloc_name(vm, context[22], functions[efunc_IncCol]);
      refalrts::update_name(context[4], functions[efunc_MakeCompound]);
      refalrts::reinit_close_call(context[11]);
      refalrts::reinit_name(context[12], functions[efunc_DoScan]);
      refalrts::reinit_close_call(context[15]);
      refalrts::reinit_open_bracket(context[19]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[20] );
      refalrts::link_brackets( context[19], context[16] );
      refalrts::push_stack( vm, context[15] );
      refalrts::push_stack( vm, context[21] );
      refalrts::push_stack( vm, context[11] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[15];
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[20], context[20] );
      res = refalrts::splice_evar( res, context[11], context[11] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoScan-Compound/4 t.StartPos#1/5 t.Pos#1/7 (/11 e.Compound#1/9 )/12 (/15 '\\'/19 e.Line#1/17 )/16 e.Lines#1/2 >/1
      if( ! refalrts::char_term( '\\', context[19] ) )
        continue;
      // closed e.Compound#1 as range 9
      // closed e.Line#1 as range 17
      // closed e.Lines#1 as range 2
      //DEBUG: t.StartPos#1: 5
      //DEBUG: t.Pos#1: 7
      //DEBUG: e.Compound#1: 9
      //DEBUG: e.Line#1: 17
      //DEBUG: e.Lines#1: 2

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoScan-Compound-HandleEscape/4 AsIs: t.StartPos#1/5 } </20 & IncCol/21 Tile{ AsIs: t.Pos#1/7 HalfReuse: >/11 } Tile{ HalfReuse: (/12 } Tile{ AsIs: e.Compound#1/9 } Tile{ HalfReuse: )/15 HalfReuse: (/19 AsIs: e.Line#1/17 AsIs: )/16 AsIs: e.Lines#1/2 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[20]);
      refalrts::alloc_name(vm, context[21], functions[efunc_IncCol]);
      refalrts::update_name(context[4], functions[efunc_DoScanm_Compoundm_HandleEscape]);
      refalrts::reinit_close_call(context[11]);
      refalrts::reinit_open_bracket(context[12]);
      refalrts::reinit_close_bracket(context[15]);
      refalrts::reinit_open_bracket(context[19]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[19], context[16] );
      refalrts::link_brackets( context[12], context[15] );
      refalrts::push_stack( vm, context[11] );
      refalrts::push_stack( vm, context[20] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[15];
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[7], context[11] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoScan-Compound/4 t.StartPos#1/5 t.Pos#1/7 (/11 e.Compound#1/9 )/12 (/15 s.Char#1/19 e.Line#1/17 )/16 e.Lines#1/2 >/1
    // closed e.Compound#1 as range 9
    // closed e.Line#1 as range 17
    // closed e.Lines#1 as range 2
    //DEBUG: t.StartPos#1: 5
    //DEBUG: t.Pos#1: 7
    //DEBUG: s.Char#1: 19
    //DEBUG: e.Compound#1: 9
    //DEBUG: e.Line#1: 17
    //DEBUG: e.Lines#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Char#1/19 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoScan-Compound/4 AsIs: t.StartPos#1/5 } </20 & IncCol/21 Tile{ AsIs: t.Pos#1/7 } >/22 Tile{ AsIs: (/11 AsIs: e.Compound#1/9 HalfReuse: s.Char1 #19/12 HalfReuse: )/15 } (/23 Tile{ AsIs: e.Line#1/17 } Tile{ AsIs: )/16 AsIs: e.Lines#1/2 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[20]);
    refalrts::alloc_name(vm, context[21], functions[efunc_IncCol]);
    refalrts::alloc_close_call(vm, context[22]);
    refalrts::alloc_open_bracket(vm, context[23]);
    refalrts::reinit_svar( context[12], context[19] );
    refalrts::reinit_close_bracket(context[15]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[23], context[16] );
    refalrts::link_brackets( context[11], context[15] );
    refalrts::push_stack( vm, context[22] );
    refalrts::push_stack( vm, context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[16];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    res = refalrts::splice_evar( res, context[11], context[15] );
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    refalrts::splice_to_freelist_open( vm, context[6], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoScan-Compound/4 t.StartPos#1/5 t.Pos#1/7 (/11 e.Compound#1/9 )/12 (/15 )/16 e.Lines#1/2 >/1
  if( ! refalrts::empty_seq( context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Compound#1 as range 9
  // closed e.Lines#1 as range 2
  //DEBUG: t.StartPos#1: 5
  //DEBUG: t.Pos#1: 7
  //DEBUG: e.Compound#1: 9
  //DEBUG: e.Lines#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} t.StartPos#1/5 {REMOVED TILE} e.Compound#1/9 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkError/4 } Tile{ AsIs: t.Pos#1/7 HalfReuse: 'U'/11 }"nclosed \" - double quote"/17 Tile{ AsIs: )/12 HalfReuse: </15 } & DoScan/19 </20 & IncLine/21 t.Pos#1/7/22 Tile{ HalfReuse: >/16 AsIs: e.Lines#1/2 AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[17], context[18], "nclosed \" - double quote", 24);
  refalrts::alloc_name(vm, context[19], functions[efunc_DoScan]);
  refalrts::alloc_open_call(vm, context[20]);
  refalrts::alloc_name(vm, context[21], functions[efunc_IncLine]);
  refalrts::copy_evar(vm, context[22], context[23], context[7], context[8]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_TkError]);
  refalrts::reinit_char(context[11], 'U');
  refalrts::reinit_open_call(context[15]);
  refalrts::reinit_close_call(context[16]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[20] );
  refalrts::link_brackets( context[0], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[16];
  res = refalrts::splice_evar( res, context[19], context[23] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[7], context[11] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoScanm_Compound("DoScan-Compound", 4212599994U, 3244736276U, func_DoScanm_Compound);


static refalrts::FnResult func_DoScanm_Compoundm_HandleEscape(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 45 elems
  refalrts::Iter context[45];
  refalrts::zeros( context, 45 );
  // </0 & DoScan-Compound-HandleEscape/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoScan-Compound-HandleEscape/4 t.new#1/5 t.new#2/7 (/11 e.new#3/9 )/12 (/15 e.new#4/13 )/16 e.new#5/2 >/1
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
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.new#3 as range 9
  // closed e.new#4 as range 13
  // closed e.new#5 as range 2
  do {
    // </0 & DoScan-Compound-HandleEscape/4 t.new#6/5 t.new#7/7 (/11 e.new#8/9 )/12 (/15 s.new#9/19 e.new#10/17 )/16 e.new#11/2 >/1
    context[17] = context[13];
    context[18] = context[14];
    // closed e.new#8 as range 9
    // closed e.new#11 as range 2
    if( ! refalrts::svar_left( context[19], context[17], context[18] ) )
      continue;
    // closed e.new#10 as range 17
    do {
      // </0 & DoScan-Compound-HandleEscape/4 t.StartPos#1/5 t.Pos#1/7 (/11 e.Compound#1/9 )/12 (/15 s.Escaped#1/19 e.Line#1/17 )/16 e.Lines#1/2 >/1
      // closed e.Compound#1 as range 9
      // closed e.Line#1 as range 17
      // closed e.Lines#1 as range 2
      //DEBUG: t.StartPos#1: 5
      //DEBUG: t.Pos#1: 7
      //DEBUG: s.Escaped#1: 19
      //DEBUG: e.Compound#1: 9
      //DEBUG: e.Line#1: 17
      //DEBUG: e.Lines#1: 2
      //2: e.Lines#1
      //5: t.StartPos#1
      //7: t.Pos#1
      //9: e.Compound#1
      //17: e.Line#1
      //19: s.Escaped#1
      //25: s.Escaped#1

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[20]);
      refalrts::alloc_name(vm, context[22], functions[efunc_gen_DoScanm_Compoundm_HandleEscape_S1C1]);
      refalrts::alloc_open_call(vm, context[23]);
      refalrts::alloc_name(vm, context[24], functions[efunc_SimpleEscapedChar]);
      refalrts::copy_stvar(vm, context[25], context[19]);
      refalrts::alloc_close_call(vm, context[26]);
      refalrts::alloc_close_call(vm, context[21]);
      refalrts::push_stack( vm, context[21] );
      refalrts::push_stack( vm, context[20] );
      res = refalrts::splice_elem( res, context[21] );
      refalrts::push_stack( vm, context[26] );
      refalrts::push_stack( vm, context[23] );
      res = refalrts::splice_elem( res, context[26] );
      res = refalrts::splice_stvar( res, context[25] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_elem( res, context[20] );
      refalrts::use( res );
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function(vm);
      do {
        // </20 & DoScan-Compound-HandleEscape$1?1/24 s.Char#2/25 >/21
        context[22] = 0;
        context[23] = 0;
        context[24] = refalrts::call_left( context[22], context[23], context[20], context[21] );
        if( ! refalrts::svar_left( context[25], context[22], context[23] ) )
          continue;
        if( ! refalrts::empty_seq( context[22], context[23] ) )
          continue;
        //DEBUG: t.StartPos#1: 5
        //DEBUG: t.Pos#1: 7
        //DEBUG: s.Escaped#1: 19
        //DEBUG: e.Compound#1: 9
        //DEBUG: e.Line#1: 17
        //DEBUG: e.Lines#1: 2
        //DEBUG: s.Char#2: 25

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Escaped#1/19 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Char#2/25 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoScan-Compound/4 AsIs: t.StartPos#1/5 } Tile{ HalfReuse: </1 } Tile{ Reuse: & IncCol/24 } Tile{ AsIs: t.Pos#1/7 } Tile{ AsIs: >/21 } Tile{ AsIs: (/11 AsIs: e.Compound#1/9 HalfReuse: s.Char2 #25/12 HalfReuse: )/15 } (/26 Tile{ AsIs: e.Line#1/17 } Tile{ AsIs: )/16 AsIs: e.Lines#1/2 HalfReuse: >/20 } Tile{ ]] }
        refalrts::alloc_open_bracket(vm, context[26]);
        refalrts::update_name(context[4], functions[efunc_DoScanm_Compound]);
        refalrts::reinit_open_call(context[1]);
        refalrts::update_name(context[24], functions[efunc_IncCol]);
        refalrts::reinit_svar( context[12], context[25] );
        refalrts::reinit_close_bracket(context[15]);
        refalrts::reinit_close_call(context[20]);
        refalrts::push_stack( vm, context[20] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[26], context[16] );
        refalrts::link_brackets( context[11], context[15] );
        refalrts::push_stack( vm, context[21] );
        refalrts::push_stack( vm, context[1] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[16], context[20] );
        res = refalrts::splice_evar( res, context[17], context[18] );
        res = refalrts::splice_evar( res, context[26], context[26] );
        res = refalrts::splice_evar( res, context[11], context[15] );
        res = refalrts::splice_evar( res, context[21], context[21] );
        res = refalrts::splice_evar( res, context[7], context[8] );
        res = refalrts::splice_evar( res, context[24], context[24] );
        res = refalrts::splice_evar( res, context[1], context[1] );
        refalrts::splice_to_freelist_open( vm, context[6], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[20], context[21]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoScan-Compound-HandleEscape/4 t.new#12/5 t.new#13/7 (/11 e.new#14/9 )/12 (/15 'x'/19 e.new#15/17 )/16 e.new#16/2 >/1
      if( ! refalrts::char_term( 'x', context[19] ) )
        continue;
      // closed e.new#14 as range 9
      // closed e.new#15 as range 17
      // closed e.new#16 as range 2
      do {
        // </0 & DoScan-Compound-HandleEscape/4 t.StartPos#1/5 t.Pos#1/7 (/11 e.Compound#1/9 )/12 (/15 'x'/19 s.Hex1#1/22 s.Hex2#1/23 e.Line#1/20 )/16 e.Lines#1/2 >/1
        context[20] = context[17];
        context[21] = context[18];
        // closed e.Compound#1 as range 9
        // closed e.Lines#1 as range 2
        if( ! refalrts::svar_left( context[22], context[20], context[21] ) )
          continue;
        if( ! refalrts::svar_left( context[23], context[20], context[21] ) )
          continue;
        // closed e.Line#1 as range 20
        //DEBUG: t.StartPos#1: 5
        //DEBUG: t.Pos#1: 7
        //DEBUG: e.Compound#1: 9
        //DEBUG: e.Lines#1: 2
        //DEBUG: s.Hex1#1: 22
        //DEBUG: s.Hex2#1: 23
        //DEBUG: e.Line#1: 20
        //2: e.Lines#1
        //5: t.StartPos#1
        //7: t.Pos#1
        //9: e.Compound#1
        //20: e.Line#1
        //22: s.Hex1#1
        //23: s.Hex2#1
        //29: s.Hex1#1

        refalrts::reset_allocator(vm);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::alloc_open_call(vm, context[24]);
        refalrts::alloc_name(vm, context[26], functions[efunc_gen_DoScanm_Compoundm_HandleEscape_S2C1]);
        refalrts::alloc_open_call(vm, context[27]);
        refalrts::alloc_name(vm, context[28], functions[efunc_HexDigit]);
        refalrts::copy_stvar(vm, context[29], context[22]);
        refalrts::alloc_close_call(vm, context[30]);
        refalrts::alloc_close_call(vm, context[25]);
        refalrts::push_stack( vm, context[25] );
        refalrts::push_stack( vm, context[24] );
        res = refalrts::splice_elem( res, context[25] );
        refalrts::push_stack( vm, context[30] );
        refalrts::push_stack( vm, context[27] );
        res = refalrts::splice_elem( res, context[30] );
        res = refalrts::splice_stvar( res, context[29] );
        res = refalrts::splice_elem( res, context[28] );
        res = refalrts::splice_elem( res, context[27] );
        res = refalrts::splice_elem( res, context[26] );
        res = refalrts::splice_elem( res, context[24] );
        refalrts::use( res );
        refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
        if (rec_res != refalrts::cSuccess)
          return rec_res;
        refalrts::this_is_generated_function(vm);
        do {
          // </24 & DoScan-Compound-HandleEscape$2?1/28 s.Num1#2/29 >/25
          context[26] = 0;
          context[27] = 0;
          context[28] = refalrts::call_left( context[26], context[27], context[24], context[25] );
          if( ! refalrts::svar_left( context[29], context[26], context[27] ) )
            continue;
          if( ! refalrts::empty_seq( context[26], context[27] ) )
            continue;
          //DEBUG: t.StartPos#1: 5
          //DEBUG: t.Pos#1: 7
          //DEBUG: e.Compound#1: 9
          //DEBUG: e.Lines#1: 2
          //DEBUG: s.Hex1#1: 22
          //DEBUG: s.Hex2#1: 23
          //DEBUG: e.Line#1: 20
          //DEBUG: s.Num1#2: 29
          //2: e.Lines#1
          //5: t.StartPos#1
          //7: t.Pos#1
          //9: e.Compound#1
          //20: e.Line#1
          //22: s.Hex1#1
          //23: s.Hex2#1
          //29: s.Num1#2
          //35: s.Hex2#1

          refalrts::reset_allocator(vm);
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          refalrts::alloc_open_call(vm, context[30]);
          refalrts::alloc_name(vm, context[32], functions[efunc_gen_DoScanm_Compoundm_HandleEscape_S2C2]);
          refalrts::alloc_open_call(vm, context[33]);
          refalrts::alloc_name(vm, context[34], functions[efunc_HexDigit]);
          refalrts::copy_stvar(vm, context[35], context[23]);
          refalrts::alloc_close_call(vm, context[36]);
          refalrts::alloc_close_call(vm, context[31]);
          refalrts::push_stack( vm, context[31] );
          refalrts::push_stack( vm, context[30] );
          res = refalrts::splice_elem( res, context[31] );
          refalrts::push_stack( vm, context[36] );
          refalrts::push_stack( vm, context[33] );
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
            // </30 & DoScan-Compound-HandleEscape$2?2/34 s.Num2#3/35 >/31
            context[32] = 0;
            context[33] = 0;
            context[34] = refalrts::call_left( context[32], context[33], context[30], context[31] );
            if( ! refalrts::svar_left( context[35], context[32], context[33] ) )
              continue;
            if( ! refalrts::empty_seq( context[32], context[33] ) )
              continue;
            //DEBUG: t.StartPos#1: 5
            //DEBUG: t.Pos#1: 7
            //DEBUG: e.Compound#1: 9
            //DEBUG: e.Lines#1: 2
            //DEBUG: s.Hex1#1: 22
            //DEBUG: s.Hex2#1: 23
            //DEBUG: e.Line#1: 20
            //DEBUG: s.Num1#2: 29
            //DEBUG: s.Num2#3: 35

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Num1#2/29 {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoScan-Compound/4 AsIs: t.StartPos#1/5 } </36 & IncCol/37 Tile{ AsIs: t.Pos#1/7 } Tile{ HalfReuse: # Len/15 AsIs: 'x'/19 AsIs: s.Hex1#1/22 AsIs: s.Hex2#1/23 } >/38 Tile{ AsIs: (/11 AsIs: e.Compound#1/9 HalfReuse: </12 } Tile{ Reuse: & Chr/28 } </39 & Add/40 </41 & Mul/42 Tile{ HalfReuse: s.Num12 #29/25 HalfReuse: 16/30 HalfReuse: >/34 AsIs: s.Num2#3/35 AsIs: >/31 AsIs: >/1 } )/43 (/44 Tile{ AsIs: e.Line#1/20 } Tile{ AsIs: )/16 AsIs: e.Lines#1/2 HalfReuse: >/24 } Tile{ ]] }
            refalrts::alloc_open_call(vm, context[36]);
            refalrts::alloc_name(vm, context[37], functions[efunc_IncCol]);
            refalrts::alloc_close_call(vm, context[38]);
            refalrts::alloc_open_call(vm, context[39]);
            refalrts::alloc_name(vm, context[40], functions[efunc_Add]);
            refalrts::alloc_open_call(vm, context[41]);
            refalrts::alloc_name(vm, context[42], functions[efunc_Mul]);
            refalrts::alloc_close_bracket(vm, context[43]);
            refalrts::alloc_open_bracket(vm, context[44]);
            refalrts::update_name(context[4], functions[efunc_DoScanm_Compound]);
            refalrts::reinit_ident(context[15], identifiers[ident_Len]);
            refalrts::reinit_open_call(context[12]);
            refalrts::update_name(context[28], functions[efunc_Chr]);
            refalrts::reinit_svar( context[25], context[29] );
            refalrts::reinit_number(context[30], 16UL);
            refalrts::reinit_close_call(context[34]);
            refalrts::reinit_close_call(context[24]);
            refalrts::push_stack( vm, context[24] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[44], context[16] );
            refalrts::link_brackets( context[11], context[43] );
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[12] );
            refalrts::push_stack( vm, context[31] );
            refalrts::push_stack( vm, context[39] );
            refalrts::push_stack( vm, context[34] );
            refalrts::push_stack( vm, context[41] );
            refalrts::push_stack( vm, context[38] );
            refalrts::push_stack( vm, context[36] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = arg_end->next;
            res = refalrts::splice_evar( res, context[16], context[24] );
            res = refalrts::splice_evar( res, context[20], context[21] );
            res = refalrts::splice_evar( res, context[43], context[44] );
            res = refalrts::splice_evar( res, context[25], context[1] );
            res = refalrts::splice_evar( res, context[39], context[42] );
            res = refalrts::splice_evar( res, context[28], context[28] );
            res = refalrts::splice_evar( res, context[11], context[12] );
            res = refalrts::splice_evar( res, context[38], context[38] );
            res = refalrts::splice_evar( res, context[15], context[23] );
            res = refalrts::splice_evar( res, context[7], context[8] );
            res = refalrts::splice_evar( res, context[36], context[37] );
            refalrts::splice_to_freelist_open( vm, context[6], res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          refalrts::splice_to_freelist(vm, context[30], context[31]);
          continue;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        refalrts::splice_to_freelist(vm, context[24], context[25]);
        continue;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoScan-Compound-HandleEscape/4 t.StartPos#1/5 t.Pos#1/7 (/11 e.Compound#1/9 )/12 (/15 'x'/19 e.Line#1/17 )/16 e.Lines#1/2 >/1
      // closed e.Compound#1 as range 9
      // closed e.Line#1 as range 17
      // closed e.Lines#1 as range 2
      //DEBUG: t.StartPos#1: 5
      //DEBUG: t.Pos#1: 7
      //DEBUG: e.Compound#1: 9
      //DEBUG: e.Line#1: 17
      //DEBUG: e.Lines#1: 2

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/20 # TkError/21 Tile{ AsIs: t.Pos#1/7 HalfReuse: 'A'/11 }"fter \\x must be two hex digits"/22 Tile{ AsIs: )/12 } Tile{ AsIs: </0 Reuse: & DoScan-Compound/4 AsIs: t.StartPos#1/5 } </24 & IncCol/25 t.Pos#1/7/26 >/28 (/29 Tile{ AsIs: e.Compound#1/9 } Tile{ HalfReuse: )/15 HalfReuse: (/19 AsIs: e.Line#1/17 AsIs: )/16 AsIs: e.Lines#1/2 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[20]);
      refalrts::alloc_ident(vm, context[21], identifiers[ident_TkError]);
      refalrts::alloc_chars(vm, context[22], context[23], "fter \\x must be two hex digits", 30);
      refalrts::alloc_open_call(vm, context[24]);
      refalrts::alloc_name(vm, context[25], functions[efunc_IncCol]);
      refalrts::copy_evar(vm, context[26], context[27], context[7], context[8]);
      refalrts::alloc_close_call(vm, context[28]);
      refalrts::alloc_open_bracket(vm, context[29]);
      refalrts::reinit_char(context[11], 'A');
      refalrts::update_name(context[4], functions[efunc_DoScanm_Compound]);
      refalrts::reinit_close_bracket(context[15]);
      refalrts::reinit_open_bracket(context[19]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[19], context[16] );
      refalrts::link_brackets( context[29], context[15] );
      refalrts::push_stack( vm, context[28] );
      refalrts::push_stack( vm, context[24] );
      refalrts::link_brackets( context[20], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[15];
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[24], context[29] );
      res = refalrts::splice_evar( res, context[0], context[6] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[7], context[11] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoScan-Compound-HandleEscape/4 t.StartPos#1/5 t.Pos#1/7 (/11 e.Compound#1/9 )/12 (/15 s.Other#1/19 e.Line#1/17 )/16 e.Lines#1/2 >/1
    // closed e.Compound#1 as range 9
    // closed e.Line#1 as range 17
    // closed e.Lines#1 as range 2
    //DEBUG: t.StartPos#1: 5
    //DEBUG: t.Pos#1: 7
    //DEBUG: s.Other#1: 19
    //DEBUG: e.Compound#1: 9
    //DEBUG: e.Line#1: 17
    //DEBUG: e.Lines#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/20 # TkError/21 Tile{ AsIs: t.Pos#1/7 }"Bad escape sequence \\"/22 Tile{ AsIs: s.Other#1/19 } )/24 Tile{ AsIs: </0 Reuse: & DoScan-Compound/4 AsIs: t.StartPos#1/5 } </25 & IncCol/26 t.Pos#1/7/27 >/29 Tile{ AsIs: (/11 AsIs: e.Compound#1/9 AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.Line#1/17 } Tile{ AsIs: )/16 AsIs: e.Lines#1/2 AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[20]);
    refalrts::alloc_ident(vm, context[21], identifiers[ident_TkError]);
    refalrts::alloc_chars(vm, context[22], context[23], "Bad escape sequence \\", 21);
    refalrts::alloc_close_bracket(vm, context[24]);
    refalrts::alloc_open_call(vm, context[25]);
    refalrts::alloc_name(vm, context[26], functions[efunc_IncCol]);
    refalrts::copy_evar(vm, context[27], context[28], context[7], context[8]);
    refalrts::alloc_close_call(vm, context[29]);
    refalrts::update_name(context[4], functions[efunc_DoScanm_Compound]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::push_stack( vm, context[29] );
    refalrts::push_stack( vm, context[25] );
    refalrts::link_brackets( context[20], context[24] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[16];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[11], context[15] );
    res = refalrts::splice_evar( res, context[25], context[29] );
    res = refalrts::splice_evar( res, context[0], context[6] );
    res = refalrts::splice_evar( res, context[24], context[24] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoScan-Compound-HandleEscape/4 t.StartPos#1/5 t.Pos#1/7 (/11 e.Compound#1/9 )/12 (/15 )/16 e.Lines#1/2 >/1
  if( ! refalrts::empty_seq( context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Compound#1 as range 9
  // closed e.Lines#1 as range 2
  //DEBUG: t.StartPos#1: 5
  //DEBUG: t.Pos#1: 7
  //DEBUG: e.Compound#1: 9
  //DEBUG: e.Lines#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/15 } # TkError/17 Tile{ AsIs: t.Pos#1/7 HalfReuse: 'U'/11 }"nexpected \\ at end of compound literal"/18 Tile{ AsIs: )/12 } Tile{ AsIs: </0 Reuse: & MakeCompound/4 AsIs: t.StartPos#1/5 } Tile{ AsIs: e.Compound#1/9 } >/20 </21 & DoScan/22 </23 & IncLine/24 t.Pos#1/7/25 Tile{ HalfReuse: >/16 AsIs: e.Lines#1/2 AsIs: >/1 ]] }
  refalrts::alloc_ident(vm, context[17], identifiers[ident_TkError]);
  refalrts::alloc_chars(vm, context[18], context[19], "nexpected \\ at end of compound literal", 38);
  refalrts::alloc_close_call(vm, context[20]);
  refalrts::alloc_open_call(vm, context[21]);
  refalrts::alloc_name(vm, context[22], functions[efunc_DoScan]);
  refalrts::alloc_open_call(vm, context[23]);
  refalrts::alloc_name(vm, context[24], functions[efunc_IncLine]);
  refalrts::copy_evar(vm, context[25], context[26], context[7], context[8]);
  refalrts::reinit_char(context[11], 'U');
  refalrts::update_name(context[4], functions[efunc_MakeCompound]);
  refalrts::reinit_close_call(context[16]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[15], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[16];
  res = refalrts::splice_evar( res, context[20], context[26] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[7], context[11] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoScanm_Compoundm_HandleEscape("DoScan-Compound-HandleEscape", 4212599994U, 3244736276U, func_DoScanm_Compoundm_HandleEscape);


//End of file
