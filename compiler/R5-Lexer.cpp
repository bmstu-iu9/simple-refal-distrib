// This file automatically generated from 'R5-Lexer.ref'
// Don't edit! Edit 'R5-Lexer.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_3642589959_3953678940
#define COOKIE1_ 3642589959U
#define COOKIE2_ 3953678940U

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
  efunc_DoScan = 14,
  efunc_Skipm_UTFm_8m_Bom = 15,
  efunc_LoadFile = 16,
  efunc_CheckClassicTokens = 17,
  efunc_gen_CheckClassicTokens_S4C1B1S2C1 = 18,
  efunc_AllDigits = 19,
  efunc_gen_CheckClassicTokens_S4C1 = 20,
  efunc_gen_CheckClassicTokens_S4C1B1 = 21,
  efunc_Type = 22,
  efunc_gen_AllDigits_S1C1 = 23,
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
  efunc_Mul = 69,
  efunc_gen_DoScanm_Charsm_Escape_C1 = 70,
  efunc_DoHexDigit = 71,
  efunc_gen_HexDigit_B1 = 72,
  efunc_MakeCompound = 73,
  efunc_DoScanm_Compoundm_HandleEscape = 74,
  efunc_gen_DoScanm_Compoundm_HandleEscape_S1C1 = 75,
  efunc_gen_DoScanm_Compoundm_HandleEscape_S2C1 = 76,
  efunc_gen_DoScanm_Compoundm_HandleEscape_S2C2 = 77,
  efunc_Mu = 78,
  efunc_Up = 79,
  efunc_Evm_met = 80,
  efunc_Residue = 81,
  efunc_u_u_Metau_Residue = 82,
  efunc_MapAccum = 83,
  efunc_UnBracket = 84,
  efunc_DelAccumulator = 85,
  efunc_Inc = 86,
  efunc_Dec = 87,
  efunc_R5m_Scan = 88,
};


enum ident {
  ident_RowCol = 0,
  ident_True = 1,
  ident_TkError = 2,
  ident_TkRefal5Mode = 3,
  ident_Extended = 4,
  ident_Classic = 5,
  ident_TkName = 6,
  ident_TkVariable = 7,
  ident_False = 8,
  ident_Len = 9,
  ident_TkEOF = 10,
  ident_TkOpenCall = 11,
  ident_TkOpenADT = 12,
  ident_UnnamedADT = 13,
  ident_TkOpenBracket = 14,
  ident_TkCloseBracket = 15,
  ident_TkSemicolon = 16,
  ident_TkAssign = 17,
  ident_TkCloseCall = 18,
  ident_TkOpenBlock = 19,
  ident_TkCloseBlock = 20,
  ident_TkComma = 21,
  ident_TkColon = 22,
  ident_TkRedefinition = 23,
  ident_TkCloseADT = 24,
  ident_TkAmpersand = 25,
  ident_TkExtern = 26,
  ident_TkEntry = 27,
  ident_TkEnum = 28,
  ident_TkEEnum = 29,
  ident_TkSwap = 30,
  ident_TkESwap = 31,
  ident_TkInclude = 32,
  ident_TkScopeId = 33,
  ident_TkLabel = 34,
  ident_TkInline = 35,
  ident_TkDrive = 36,
  ident_TkSpec = 37,
  ident_TkMeta = 38,
  ident_TkChar = 39,
  ident_TkMacroDigit = 40,
  ident_TkNativeCode = 41,
  ident_TkWarning = 42,
  ident_TkCompound = 43,
  ident_Mu = 44,
  ident_Up = 45,
  ident_Evm_met = 46,
  ident_Residue = 47,
  ident_u_u_Metau_Residue = 48,
  ident_Apply = 49,
  ident_Map = 50,
  ident_Reduce = 51,
  ident_Fetch = 52,
  ident_MapAccum = 53,
  ident_DoMapAccum = 54,
  ident_DoMapAccumm_Aux = 55,
  ident_UnBracket = 56,
  ident_DelAccumulator = 57,
  ident_Inc = 58,
  ident_Dec = 59,
  ident_Pipe = 60,
  ident_R5m_Scan = 61,
  ident_Skipm_UTFm_8m_Bom = 62,
  ident_CheckClassicTokens = 63,
  ident_AllDigits = 64,
  ident_IncLine = 65,
  ident_IncCol = 66,
  ident_DoScan = 67,
  ident_IsStartIdent = 68,
  ident_IsVarType = 69,
  ident_IsPunctuation = 70,
  ident_DoScanm_Keyword = 71,
  ident_DoScanm_BuildKeyword = 72,
  ident_EasterEgg = 73,
  ident_DoScanm_Number = 74,
  ident_DoScanm_Var = 75,
  ident_IsIdentTail = 76,
  ident_DoScanm_CComment = 77,
  ident_DoScanm_NativeCode = 78,
  ident_DoScanm_DoNativeCode = 79,
  ident_DoScanm_Ident = 80,
  ident_DoScanm_Chars = 81,
  ident_SimpleEscapedChar = 82,
  ident_ScanEscape = 83,
  ident_DoScanm_Charsm_Escape = 84,
  ident_HexDigit = 85,
  ident_DoHexDigit = 86,
  ident_MakeCompound = 87,
  ident_DoScanm_Compound = 88,
  ident_DoScanm_Compoundm_HandleEscape = 89,
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

static refalrts::NativeReference nat_ref_Skipm_UTFm_8m_Bom("Skip-UTF-8-Bom", COOKIE1_, COOKIE2_, func_Skipm_UTFm_8m_Bom);


static refalrts::FnResult func_gen_CheckClassicTokens_S4C1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
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
    // </0 & CheckClassicTokens$4?1:1/4 t.Pos#1/5 s.Mode#1/7 'L'/8 s.Case#2/9 e.Index#2/10 >/1
    context[10] = context[2];
    context[11] = context[3];
    if( ! refalrts::char_term( 'L', context[8] ) )
      continue;
    // closed e.Index#2 as range 10
    //DEBUG: t.Pos#1: 5
    //DEBUG: s.Mode#1: 7
    //DEBUG: s.Case#2: 9
    //DEBUG: e.Index#2: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CheckClassicTokens$4?1:1/4 t.Pos#1/5 s.Mode#1/7 'L'/8 s.Case#2/9 e.Index#2/10 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CheckClassicTokens$4?1:1/4 t.Pos#1/5 s.Mode#1/7 'D'/8 '0'/9 e.Index#2/10 >/1
    context[10] = context[2];
    context[11] = context[3];
    if( ! refalrts::char_term( 'D', context[8] ) )
      continue;
    if( ! refalrts::char_term( '0', context[9] ) )
      continue;
    // closed e.Index#2 as range 10
    //DEBUG: t.Pos#1: 5
    //DEBUG: s.Mode#1: 7
    //DEBUG: e.Index#2: 10
    //5: t.Pos#1
    //7: s.Mode#1
    //10: e.Index#2
    //17: e.Index#2

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[14], functions[efunc_gen_CheckClassicTokens_S4C1B1S2C1]);
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_name(vm, context[16], functions[efunc_AllDigits]);
    refalrts::copy_evar(vm, context[17], context[18], context[10], context[11]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[12] );
    res = refalrts::splice_elem( res, context[13] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[15] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_evar( res, context[17], context[18] );
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
      // </12 & CheckClassicTokens$4?1:1$2?1/16 # True/17 >/13
      context[14] = 0;
      context[15] = 0;
      context[16] = refalrts::call_left( context[14], context[15], context[12], context[13] );
      context[17] = refalrts::ident_left( identifiers[ident_True], context[14], context[15] );
      if( ! context[17] )
        continue;
      if( ! refalrts::empty_seq( context[14], context[15] ) )
        continue;
      //DEBUG: t.Pos#1: 5
      //DEBUG: s.Mode#1: 7
      //DEBUG: e.Index#2: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & CheckClassicTokens$4?1:1/4 t.Pos#1/5 s.Mode#1/7 'D'/8 '0'/9 e.Index#2/10 </12 & CheckClassicTokens$4?1:1$2?1/16 # True/17 >/13 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[12], context[13]);
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

static refalrts::NativeReference nat_ref_gen_CheckClassicTokens_S4C1B1("CheckClassicTokens$4?1:1", COOKIE1_, COOKIE2_, func_gen_CheckClassicTokens_S4C1B1);


static refalrts::FnResult func_CheckClassicTokens(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
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
      // </0 & CheckClassicTokens/4 s.Mode#1/5 (/8 # TkRefal5Mode/14 t.Pos#1/15 s.NewMode#1/17 )/9 e.Tokens#1/10 >/1
      context[10] = context[6];
      context[11] = context[7];
      context[12] = 0;
      context[13] = 0;
      if( ! refalrts::brackets_term( context[12], context[13], context[8] ) )
        continue;
      context[14] = refalrts::ident_left( identifiers[ident_TkRefal5Mode], context[12], context[13] );
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
      //DEBUG: s.Mode#1: 5
      //DEBUG: e.Tokens#1: 10
      //DEBUG: t.Pos#1: 15
      //DEBUG: s.NewMode#1: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.Mode#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/8 AsIs: # TkRefal5Mode/14 AsIs: t.Pos#1/15 AsIs: s.NewMode#1/17 AsIs: )/9 } Tile{ AsIs: </0 AsIs: & CheckClassicTokens/4 } s.NewMode#1/17/18 Tile{ AsIs: e.Tokens#1/10 } Tile{ AsIs: >/1 ]] }
      refalrts::copy_stvar(vm, context[18], context[17]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[9] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[10], context[11] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[8], context[9] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & CheckClassicTokens/4 # Extended/5 t.NextToken#1/8 e.Tokens#1/10 >/1
      context[10] = context[6];
      context[11] = context[7];
      if( ! refalrts::ident_term( identifiers[ident_Extended], context[5] ) )
        continue;
      // closed e.Tokens#1 as range 10
      //DEBUG: t.NextToken#1: 8
      //DEBUG: e.Tokens#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.NextToken#1/8 } Tile{ AsIs: </0 AsIs: & CheckClassicTokens/4 AsIs: # Extended/5 } Tile{ AsIs: e.Tokens#1/10 } Tile{ AsIs: >/1 ]] }
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

    // </0 & CheckClassicTokens/4 # Classic/5 t.new#6/8 e.new#7/10 >/1
    context[10] = context[6];
    context[11] = context[7];
    if( ! refalrts::ident_term( identifiers[ident_Classic], context[5] ) )
      continue;
    // closed e.new#7 as range 10
    do {
      // </0 & CheckClassicTokens/4 # Classic/5 (/8 s.new#8/16 t.new#9/17 s.new#10/19 e.new#11/14 )/9 e.new#12/12 >/1
      context[12] = context[10];
      context[13] = context[11];
      context[14] = 0;
      context[15] = 0;
      if( ! refalrts::brackets_term( context[14], context[15], context[8] ) )
        continue;
      // closed e.new#12 as range 12
      if( ! refalrts::svar_left( context[16], context[14], context[15] ) )
        continue;
      context[18] = refalrts::tvar_left( context[17], context[14], context[15] );
      if( ! context[18] )
        continue;
      if( ! refalrts::svar_left( context[19], context[14], context[15] ) )
        continue;
      // closed e.new#11 as range 14
      do {
        // </0 & CheckClassicTokens/4 # Classic/5 (/8 # TkName/16 t.Pos#1/17 '_'/19 e.Name#1/20 )/9 e.Tokens#1/22 >/1
        context[20] = context[14];
        context[21] = context[15];
        context[22] = context[12];
        context[23] = context[13];
        if( ! refalrts::char_term( '_', context[19] ) )
          continue;
        if( ! refalrts::ident_term( identifiers[ident_TkName], context[16] ) )
          continue;
        // closed e.Name#1 as range 20
        // closed e.Tokens#1 as range 22
        //DEBUG: t.Pos#1: 17
        //DEBUG: e.Name#1: 20
        //DEBUG: e.Tokens#1: 22

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 } # TkError/24 t.Pos#1/17/25"Illegal identifier \"_"/27 e.Name#1/20/29 Tile{ HalfReuse: '\"'/4 HalfReuse: )/5 AsIs: (/8 AsIs: # TkName/16 AsIs: t.Pos#1/17 AsIs: '_'/19 AsIs: e.Name#1/20 AsIs: )/9 } </31 & CheckClassicTokens/32 # Classic/33 Tile{ AsIs: e.Tokens#1/22 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_ident(vm, context[24], identifiers[ident_TkError]);
        refalrts::copy_evar(vm, context[25], context[26], context[17], context[18]);
        refalrts::alloc_chars(vm, context[27], context[28], "Illegal identifier \"_", 21);
        refalrts::copy_evar(vm, context[29], context[30], context[20], context[21]);
        refalrts::alloc_open_call(vm, context[31]);
        refalrts::alloc_name(vm, context[32], functions[efunc_CheckClassicTokens]);
        refalrts::alloc_ident(vm, context[33], identifiers[ident_Classic]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_char(context[4], '\"');
        refalrts::reinit_close_bracket(context[5]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[31] );
        refalrts::link_brackets( context[8], context[9] );
        refalrts::link_brackets( context[0], context[5] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[22], context[23] );
        res = refalrts::splice_evar( res, context[31], context[33] );
        res = refalrts::splice_evar( res, context[4], context[9] );
        res = refalrts::splice_evar( res, context[29], context[30] );
        res = refalrts::splice_evar( res, context[24], context[28] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & CheckClassicTokens/4 # Classic/5 (/8 # TkVariable/16 t.Pos#1/17 s.Mode#1/19 e.Index#1/20 )/9 e.Tokens#1/22 >/1
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[12];
      context[23] = context[13];
      if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[16] ) )
        continue;
      // closed e.Index#1 as range 20
      // closed e.Tokens#1 as range 22
      //DEBUG: t.Pos#1: 17
      //DEBUG: s.Mode#1: 19
      //DEBUG: e.Index#1: 20
      //DEBUG: e.Tokens#1: 22
      //17: t.Pos#1
      //19: s.Mode#1
      //20: e.Index#1
      //22: e.Tokens#1
      //29: t.Pos#1
      //30: s.Mode#1
      //33: e.Index#1

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[24]);
      refalrts::alloc_name(vm, context[26], functions[efunc_gen_CheckClassicTokens_S4C1]);
      refalrts::alloc_open_call(vm, context[27]);
      refalrts::alloc_name(vm, context[28], functions[efunc_gen_CheckClassicTokens_S4C1B1]);
      refalrts::copy_stvar(vm, context[29], context[17]);
      refalrts::copy_stvar(vm, context[30], context[19]);
      refalrts::alloc_open_call(vm, context[31]);
      refalrts::alloc_name(vm, context[32], functions[efunc_Type]);
      refalrts::copy_evar(vm, context[33], context[34], context[20], context[21]);
      refalrts::alloc_close_call(vm, context[35]);
      refalrts::alloc_close_call(vm, context[36]);
      refalrts::alloc_close_call(vm, context[25]);
      refalrts::push_stack( vm, context[25] );
      refalrts::push_stack( vm, context[24] );
      res = refalrts::splice_elem( res, context[25] );
      refalrts::push_stack( vm, context[36] );
      refalrts::push_stack( vm, context[27] );
      res = refalrts::splice_elem( res, context[36] );
      refalrts::push_stack( vm, context[35] );
      refalrts::push_stack( vm, context[31] );
      res = refalrts::splice_elem( res, context[35] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      res = refalrts::splice_elem( res, context[32] );
      res = refalrts::splice_elem( res, context[31] );
      res = refalrts::splice_stvar( res, context[30] );
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
        // </24 & CheckClassicTokens$4?1/28 e.MaybeError#2/26 >/25
        context[26] = 0;
        context[27] = 0;
        context[28] = refalrts::call_left( context[26], context[27], context[24], context[25] );
        // closed e.MaybeError#2 as range 26
        //DEBUG: t.Pos#1: 17
        //DEBUG: s.Mode#1: 19
        //DEBUG: e.Index#1: 20
        //DEBUG: e.Tokens#1: 22
        //DEBUG: e.MaybeError#2: 26

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} </24 & CheckClassicTokens$4?1/28 {REMOVED TILE} >/25 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: e.MaybeError#2/26 } Tile{ AsIs: (/8 AsIs: # TkVariable/16 AsIs: t.Pos#1/17 AsIs: s.Mode#1/19 AsIs: e.Index#1/20 AsIs: )/9 } Tile{ AsIs: </0 AsIs: & CheckClassicTokens/4 AsIs: # Classic/5 } Tile{ AsIs: e.Tokens#1/22 } Tile{ AsIs: >/1 ]] }
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[8], context[9] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[22], context[23] );
        res = refalrts::splice_evar( res, context[0], context[5] );
        res = refalrts::splice_evar( res, context[8], context[9] );
        res = refalrts::splice_evar( res, context[26], context[27] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[24], context[25]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & CheckClassicTokens/4 # Classic/5 t.NextToken#1/8 e.Tokens#1/12 >/1
    context[12] = context[10];
    context[13] = context[11];
    // closed e.Tokens#1 as range 12
    //DEBUG: t.NextToken#1: 8
    //DEBUG: e.Tokens#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.NextToken#1/8 } Tile{ AsIs: </0 AsIs: & CheckClassicTokens/4 AsIs: # Classic/5 } Tile{ AsIs: e.Tokens#1/12 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[12], context[13] );
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

static refalrts::NativeReference nat_ref_CheckClassicTokens("CheckClassicTokens", COOKIE1_, COOKIE2_, func_CheckClassicTokens);


static refalrts::FnResult func_AllDigits(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & AllDigits/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & AllDigits/4 e.String#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.String#1 as range 5
    //DEBUG: e.String#1: 5
    //5: e.String#1
    //12: e.String#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[9], functions[efunc_gen_AllDigits_S1C1]);
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_Type]);
    refalrts::copy_evar(vm, context[12], context[13], context[5], context[6]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::alloc_close_call(vm, context[8]);
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[7] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[10] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[12], context[13] );
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
      // </7 & AllDigits$1?1/11 'D'/12 '0'/13 s.Digit#2/14 e.Tail#2/9 >/8
      context[9] = 0;
      context[10] = 0;
      context[11] = refalrts::call_left( context[9], context[10], context[7], context[8] );
      context[12] = refalrts::char_left( 'D', context[9], context[10] );
      if( ! context[12] )
        continue;
      context[13] = refalrts::char_left( '0', context[9], context[10] );
      if( ! context[13] )
        continue;
      if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
        continue;
      // closed e.Tail#2 as range 9
      //DEBUG: e.String#1: 5
      //DEBUG: s.Digit#2: 14
      //DEBUG: e.Tail#2: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} e.String#1/5 </7 & AllDigits$1?1/11 'D'/12 '0'/13 s.Digit#2/14 {REMOVED TILE} >/8 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & AllDigits/4 } Tile{ AsIs: e.Tail#2/9 } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[7], context[8]);
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

static refalrts::NativeReference nat_ref_AllDigits("AllDigits", COOKIE1_, COOKIE2_, func_AllDigits);


static refalrts::FnResult func_IncLine(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.Col#1/11 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # RowCol/4 HalfReuse: </7 HalfReuse: & Add/9 } 1/12 Tile{ AsIs: s.Line#1/10 } >/13 Tile{ HalfReuse: 1/8 HalfReuse: )/1 ]] }
  refalrts::alloc_number(vm, context[12], 1UL);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_RowCol]);
  refalrts::reinit_open_call(context[7]);
  refalrts::reinit_name(context[9], functions[efunc_Add]);
  refalrts::reinit_number(context[8], 1UL);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  refalrts::splice_to_freelist_open( vm, context[9], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_IncLine("IncLine", COOKIE1_, COOKIE2_, func_IncLine);


static refalrts::FnResult func_IncCol(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
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
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # RowCol/9 AsIs: s.Line#1/10 } Tile{ AsIs: </0 Reuse: & Add/4 } 1/12 Tile{ AsIs: s.Col#1/11 HalfReuse: >/6 HalfReuse: )/1 ]] }
    refalrts::alloc_number(vm, context[12], 1UL);
    refalrts::update_name(context[4], functions[efunc_Add]);
    refalrts::reinit_close_call(context[6]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[5], context[1] );
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[11];
    res = refalrts::splice_evar( res, context[12], context[12] );
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

static refalrts::NativeReference nat_ref_IncCol("IncCol", COOKIE1_, COOKIE2_, func_IncCol);


static refalrts::FnResult func_DoScan(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 48 elems
  refalrts::Iter context[48];
  refalrts::zeros( context, 48 );
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
    // </0 & DoScan/4 t.new#6/5 (/9 s.new#8/15 e.new#9/11 )/10 e.new#7/13 >/1
    context[11] = context[7];
    context[12] = context[8];
    context[13] = context[2];
    context[14] = context[3];
    // closed e.new#7 as range 13
    if( ! refalrts::svar_left( context[15], context[11], context[12] ) )
      continue;
    // closed e.new#9 as range 11
    do {
      // </0 & DoScan/4 t.Pos#1/5 (/9 ' '/15 e.Line#1/16 )/10 e.Lines#1/18 >/1
      context[16] = context[11];
      context[17] = context[12];
      context[18] = context[13];
      context[19] = context[14];
      if( ! refalrts::char_term( ' ', context[15] ) )
        continue;
      // closed e.Line#1 as range 16
      // closed e.Lines#1 as range 18
      //DEBUG: t.Pos#1: 5
      //DEBUG: e.Line#1: 16
      //DEBUG: e.Lines#1: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </20 & DoScan/21 Tile{ AsIs: </0 Reuse: & IncCol/4 AsIs: t.Pos#1/5 HalfReuse: >/9 HalfReuse: (/15 AsIs: e.Line#1/16 AsIs: )/10 AsIs: e.Lines#1/18 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[20]);
      refalrts::alloc_name(vm, context[21], functions[efunc_DoScan]);
      refalrts::update_name(context[4], functions[efunc_IncCol]);
      refalrts::reinit_close_call(context[9]);
      refalrts::reinit_open_bracket(context[15]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[20] );
      refalrts::link_brackets( context[15], context[10] );
      refalrts::push_stack( vm, context[9] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[0];
      res = refalrts::splice_evar( res, context[20], context[21] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoScan/4 t.Pos#1/5 (/9 '\t'/15 e.Line#1/16 )/10 e.Lines#1/18 >/1
      context[16] = context[11];
      context[17] = context[12];
      context[18] = context[13];
      context[19] = context[14];
      if( ! refalrts::char_term( '\t', context[15] ) )
        continue;
      // closed e.Line#1 as range 16
      // closed e.Lines#1 as range 18
      //DEBUG: t.Pos#1: 5
      //DEBUG: e.Line#1: 16
      //DEBUG: e.Lines#1: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </20 & DoScan/21 Tile{ AsIs: </0 Reuse: & IncCol/4 AsIs: t.Pos#1/5 HalfReuse: >/9 HalfReuse: (/15 AsIs: e.Line#1/16 AsIs: )/10 AsIs: e.Lines#1/18 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[20]);
      refalrts::alloc_name(vm, context[21], functions[efunc_DoScan]);
      refalrts::update_name(context[4], functions[efunc_IncCol]);
      refalrts::reinit_close_call(context[9]);
      refalrts::reinit_open_bracket(context[15]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[20] );
      refalrts::link_brackets( context[15], context[10] );
      refalrts::push_stack( vm, context[9] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[0];
      res = refalrts::splice_evar( res, context[20], context[21] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoScan/4 t.Pos#1/5 (/9 '\r'/15 e.Line#1/16 )/10 e.Lines#1/18 >/1
    context[16] = context[11];
    context[17] = context[12];
    context[18] = context[13];
    context[19] = context[14];
    if( ! refalrts::char_term( '\r', context[15] ) )
      continue;
    // closed e.Line#1 as range 16
    // closed e.Lines#1 as range 18
    //DEBUG: t.Pos#1: 5
    //DEBUG: e.Line#1: 16
    //DEBUG: e.Lines#1: 18

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </20 & DoScan/21 Tile{ AsIs: </0 Reuse: & IncCol/4 AsIs: t.Pos#1/5 HalfReuse: >/9 HalfReuse: (/15 AsIs: e.Line#1/16 AsIs: )/10 AsIs: e.Lines#1/18 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[20]);
    refalrts::alloc_name(vm, context[21], functions[efunc_DoScan]);
    refalrts::update_name(context[4], functions[efunc_IncCol]);
    refalrts::reinit_close_call(context[9]);
    refalrts::reinit_open_bracket(context[15]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[20] );
    refalrts::link_brackets( context[15], context[10] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[20], context[21] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoScan/4 t.Pos#1/5 (/9 )/10 e.Lines#1/11 >/1
    context[11] = context[2];
    context[12] = context[3];
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    // closed e.Lines#1 as range 11
    //DEBUG: t.Pos#1: 5
    //DEBUG: e.Lines#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoScan/4 } </13 Tile{ HalfReuse: & IncLine/9 } Tile{ AsIs: t.Pos#1/5 } Tile{ HalfReuse: >/10 AsIs: e.Lines#1/11 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::reinit_name(context[9], functions[efunc_IncLine]);
    refalrts::reinit_close_call(context[10]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoScan/4 t.new#6/5 (/9 s.new#8/11 e.new#9/7 )/10 e.new#7/2 >/1
  // closed e.new#7 as range 2
  if( ! refalrts::svar_left( context[11], context[7], context[8] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#9 as range 7
  do {
    // </0 & DoScan/4 t.Pos#1/5 (/9 s.Var#1/11 '.'/16 e.Line#1/12 )/10 e.Lines#1/14 >/1
    context[12] = context[7];
    context[13] = context[8];
    context[14] = context[2];
    context[15] = context[3];
    context[16] = refalrts::char_left( '.', context[12], context[13] );
    if( ! context[16] )
      continue;
    // closed e.Line#1 as range 12
    // closed e.Lines#1 as range 14
    //DEBUG: t.Pos#1: 5
    //DEBUG: s.Var#1: 11
    //DEBUG: e.Line#1: 12
    //DEBUG: e.Lines#1: 14
    //5: t.Pos#1
    //11: s.Var#1
    //12: e.Line#1
    //14: e.Lines#1
    //22: s.Var#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[19], functions[efunc_gen_DoScan_S6C1]);
    refalrts::alloc_open_call(vm, context[20]);
    refalrts::alloc_name(vm, context[21], functions[efunc_IsVarType]);
    refalrts::copy_stvar(vm, context[22], context[11]);
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::alloc_close_call(vm, context[18]);
    refalrts::push_stack( vm, context[18] );
    refalrts::push_stack( vm, context[17] );
    res = refalrts::splice_elem( res, context[18] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[20] );
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
      // </17 & DoScan$6?1/21 # True/22 >/18
      context[19] = 0;
      context[20] = 0;
      context[21] = refalrts::call_left( context[19], context[20], context[17], context[18] );
      context[22] = refalrts::ident_left( identifiers[ident_True], context[19], context[20] );
      if( ! context[22] )
        continue;
      if( ! refalrts::empty_seq( context[19], context[20] ) )
        continue;
      //DEBUG: t.Pos#1: 5
      //DEBUG: s.Var#1: 11
      //DEBUG: e.Line#1: 12
      //DEBUG: e.Lines#1: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} & DoScan$6?1/21 # True/22 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoScan-Var/4 AsIs: t.Pos#1/5 AsIs: (/9 AsIs: s.Var#1/11 AsIs: '.'/16 } Tile{ HalfReuse: )/18 HalfReuse: (/1 } Tile{ AsIs: e.Line#1/12 } Tile{ AsIs: )/10 AsIs: e.Lines#1/14 HalfReuse: >/17 } Tile{ ]] }
      refalrts::update_name(context[4], functions[efunc_DoScanm_Var]);
      refalrts::reinit_close_bracket(context[18]);
      refalrts::reinit_open_bracket(context[1]);
      refalrts::reinit_close_call(context[17]);
      refalrts::push_stack( vm, context[17] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[1], context[10] );
      refalrts::link_brackets( context[9], context[18] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[10], context[17] );
      res = refalrts::splice_evar( res, context[12], context[13] );
      res = refalrts::splice_evar( res, context[18], context[1] );
      refalrts::splice_to_freelist_open( vm, context[16], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[17], context[18]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoScan/4 t.Pos#1/5 (/9 s.StartIdent#1/11 e.Line#1/12 )/10 e.Lines#1/14 >/1
    context[12] = context[7];
    context[13] = context[8];
    context[14] = context[2];
    context[15] = context[3];
    // closed e.Line#1 as range 12
    // closed e.Lines#1 as range 14
    //DEBUG: t.Pos#1: 5
    //DEBUG: s.StartIdent#1: 11
    //DEBUG: e.Line#1: 12
    //DEBUG: e.Lines#1: 14
    //5: t.Pos#1
    //11: s.StartIdent#1
    //12: e.Line#1
    //14: e.Lines#1
    //21: s.StartIdent#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[16]);
    refalrts::alloc_name(vm, context[18], functions[efunc_gen_DoScan_S7C1]);
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_IsStartIdent]);
    refalrts::copy_stvar(vm, context[21], context[11]);
    refalrts::alloc_close_call(vm, context[22]);
    refalrts::alloc_close_call(vm, context[17]);
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[16] );
    res = refalrts::splice_elem( res, context[17] );
    refalrts::push_stack( vm, context[22] );
    refalrts::push_stack( vm, context[19] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_stvar( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[16] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </16 & DoScan$7?1/20 # True/21 >/17
      context[18] = 0;
      context[19] = 0;
      context[20] = refalrts::call_left( context[18], context[19], context[16], context[17] );
      context[21] = refalrts::ident_left( identifiers[ident_True], context[18], context[19] );
      if( ! context[21] )
        continue;
      if( ! refalrts::empty_seq( context[18], context[19] ) )
        continue;
      //DEBUG: t.Pos#1: 5
      //DEBUG: s.StartIdent#1: 11
      //DEBUG: e.Line#1: 12
      //DEBUG: e.Lines#1: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} & DoScan$7?1/20 # True/21 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoScan-Ident/4 AsIs: t.Pos#1/5 AsIs: (/9 AsIs: s.StartIdent#1/11 } Tile{ HalfReuse: )/17 HalfReuse: (/1 } Tile{ AsIs: e.Line#1/12 } Tile{ AsIs: )/10 AsIs: e.Lines#1/14 HalfReuse: >/16 } Tile{ ]] }
      refalrts::update_name(context[4], functions[efunc_DoScanm_Ident]);
      refalrts::reinit_close_bracket(context[17]);
      refalrts::reinit_open_bracket(context[1]);
      refalrts::reinit_close_call(context[16]);
      refalrts::push_stack( vm, context[16] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[1], context[10] );
      refalrts::link_brackets( context[9], context[17] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[10], context[16] );
      res = refalrts::splice_evar( res, context[12], context[13] );
      res = refalrts::splice_evar( res, context[17], context[1] );
      refalrts::splice_to_freelist_open( vm, context[11], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[16], context[17]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoScan/4 t.Pos#1/5 (/9 s.Punctuation#1/11 e.Line#1/12 )/10 e.Lines#1/14 >/1
    context[12] = context[7];
    context[13] = context[8];
    context[14] = context[2];
    context[15] = context[3];
    // closed e.Line#1 as range 12
    // closed e.Lines#1 as range 14
    //DEBUG: t.Pos#1: 5
    //DEBUG: s.Punctuation#1: 11
    //DEBUG: e.Line#1: 12
    //DEBUG: e.Lines#1: 14
    //5: t.Pos#1
    //11: s.Punctuation#1
    //12: e.Line#1
    //14: e.Lines#1
    //21: s.Punctuation#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[16]);
    refalrts::alloc_name(vm, context[18], functions[efunc_gen_DoScan_S8C1]);
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_IsPunctuation]);
    refalrts::copy_stvar(vm, context[21], context[11]);
    refalrts::alloc_close_call(vm, context[22]);
    refalrts::alloc_close_call(vm, context[17]);
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[16] );
    res = refalrts::splice_elem( res, context[17] );
    refalrts::push_stack( vm, context[22] );
    refalrts::push_stack( vm, context[19] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_stvar( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[16] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </16 & DoScan$8?1/20 s.TokType#2/21 >/17
      context[18] = 0;
      context[19] = 0;
      context[20] = refalrts::call_left( context[18], context[19], context[16], context[17] );
      if( ! refalrts::svar_left( context[21], context[18], context[19] ) )
        continue;
      if( ! refalrts::empty_seq( context[18], context[19] ) )
        continue;
      //DEBUG: t.Pos#1: 5
      //DEBUG: s.Punctuation#1: 11
      //DEBUG: e.Line#1: 12
      //DEBUG: e.Lines#1: 14
      //DEBUG: s.TokType#2: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Punctuation#1/11 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.TokType#2/21 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: s.TokType2 #21/4 AsIs: t.Pos#1/5 HalfReuse: )/9 } </22 Tile{ Reuse: & DoScan/20 } </23 & IncCol/24 t.Pos#1/5/25 Tile{ AsIs: >/17 HalfReuse: (/1 } Tile{ AsIs: e.Line#1/12 } Tile{ AsIs: )/10 AsIs: e.Lines#1/14 HalfReuse: >/16 } Tile{ ]] }
      refalrts::alloc_open_call(vm, context[22]);
      refalrts::alloc_open_call(vm, context[23]);
      refalrts::alloc_name(vm, context[24], functions[efunc_IncCol]);
      refalrts::copy_evar(vm, context[25], context[26], context[5], context[6]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_svar( context[4], context[21] );
      refalrts::reinit_close_bracket(context[9]);
      refalrts::update_name(context[20], functions[efunc_DoScan]);
      refalrts::reinit_open_bracket(context[1]);
      refalrts::reinit_close_call(context[16]);
      refalrts::push_stack( vm, context[16] );
      refalrts::push_stack( vm, context[22] );
      refalrts::link_brackets( context[1], context[10] );
      refalrts::push_stack( vm, context[17] );
      refalrts::push_stack( vm, context[23] );
      refalrts::link_brackets( context[0], context[9] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[10], context[16] );
      res = refalrts::splice_evar( res, context[12], context[13] );
      res = refalrts::splice_evar( res, context[17], context[1] );
      res = refalrts::splice_evar( res, context[23], context[26] );
      res = refalrts::splice_evar( res, context[20], context[20] );
      res = refalrts::splice_evar( res, context[22], context[22] );
      refalrts::splice_to_freelist_open( vm, context[9], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[16], context[17]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoScan/4 (/5 # RowCol/18 s.new#10/20 1/19 )/6 (/9 '*'/11 e.new#12/12 )/10 e.new#11/14 >/1
    context[12] = context[7];
    context[13] = context[8];
    context[14] = context[2];
    context[15] = context[3];
    context[16] = 0;
    context[17] = 0;
    if( ! refalrts::brackets_term( context[16], context[17], context[5] ) )
      continue;
    if( ! refalrts::char_term( '*', context[11] ) )
      continue;
    context[18] = refalrts::ident_left( identifiers[ident_RowCol], context[16], context[17] );
    if( ! context[18] )
      continue;
    context[19] = refalrts::number_right( 1UL, context[16], context[17] );
    if( ! context[19] )
      continue;
    // closed e.new#12 as range 12
    // closed e.new#11 as range 14
    if( ! refalrts::svar_left( context[20], context[16], context[17] ) )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;
    do {
      // </0 & DoScan/4 (/5 # RowCol/18 s.new#13/20 1/19 )/6 (/9 '*'/11 '$'/25 e.new#15/21 s.new#16/32 s.new#17/31 s.new#18/30 s.new#19/29 s.new#20/28 s.new#21/27 s.new#22/26 )/10 e.new#14/23 >/1
      context[21] = context[12];
      context[22] = context[13];
      context[23] = context[14];
      context[24] = context[15];
      context[25] = refalrts::char_left( '$', context[21], context[22] );
      if( ! context[25] )
        continue;
      // closed e.new#14 as range 23
      if( ! refalrts::svar_right( context[26], context[21], context[22] ) )
        continue;
      if( ! refalrts::svar_right( context[27], context[21], context[22] ) )
        continue;
      if( ! refalrts::svar_right( context[28], context[21], context[22] ) )
        continue;
      if( ! refalrts::svar_right( context[29], context[21], context[22] ) )
        continue;
      if( ! refalrts::svar_right( context[30], context[21], context[22] ) )
        continue;
      if( ! refalrts::svar_right( context[31], context[21], context[22] ) )
        continue;
      if( ! refalrts::svar_right( context[32], context[21], context[22] ) )
        continue;
      // closed e.new#15 as range 21
      do {
        // </0 & DoScan/4 (/5 # RowCol/18 s.Line#1/20 1/19 )/6 (/9 '*'/11 '$'/25 'C'/32 'L'/31 'A'/30 'S'/29 'S'/28 'I'/27 'C'/26 )/10 e.Lines#1/33 >/1
        context[33] = context[23];
        context[34] = context[24];
        if( ! refalrts::char_term( 'C', context[32] ) )
          continue;
        if( ! refalrts::char_term( 'L', context[31] ) )
          continue;
        if( ! refalrts::char_term( 'A', context[30] ) )
          continue;
        if( ! refalrts::char_term( 'S', context[29] ) )
          continue;
        if( ! refalrts::char_term( 'S', context[28] ) )
          continue;
        if( ! refalrts::char_term( 'I', context[27] ) )
          continue;
        if( ! refalrts::char_term( 'C', context[26] ) )
          continue;
        if( ! refalrts::empty_seq( context[21], context[22] ) )
          continue;
        // closed e.Lines#1 as range 33
        //DEBUG: s.Line#1: 20
        //DEBUG: e.Lines#1: 33

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkRefal5Mode/4 AsIs: (/5 AsIs: # RowCol/18 AsIs: s.Line#1/20 AsIs: 1/19 AsIs: )/6 HalfReuse: # Classic/9 HalfReuse: )/11 HalfReuse: </25 HalfReuse: & DoScan/32 HalfReuse: (/31 HalfReuse: # RowCol/30 HalfReuse: </29 HalfReuse: & Add/28 HalfReuse: 1/27 HalfReuse: s.Line1 #20/26 HalfReuse: >/10 } 1/35 )/36 Tile{ AsIs: e.Lines#1/33 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_number(vm, context[35], 1UL);
        refalrts::alloc_close_bracket(vm, context[36]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_ident(context[4], identifiers[ident_TkRefal5Mode]);
        refalrts::reinit_ident(context[9], identifiers[ident_Classic]);
        refalrts::reinit_close_bracket(context[11]);
        refalrts::reinit_open_call(context[25]);
        refalrts::reinit_name(context[32], functions[efunc_DoScan]);
        refalrts::reinit_open_bracket(context[31]);
        refalrts::reinit_ident(context[30], identifiers[ident_RowCol]);
        refalrts::reinit_open_call(context[29]);
        refalrts::reinit_name(context[28], functions[efunc_Add]);
        refalrts::reinit_number(context[27], 1UL);
        refalrts::reinit_svar( context[26], context[20] );
        refalrts::reinit_close_call(context[10]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[25] );
        refalrts::link_brackets( context[31], context[36] );
        refalrts::push_stack( vm, context[10] );
        refalrts::push_stack( vm, context[29] );
        refalrts::link_brackets( context[0], context[11] );
        refalrts::link_brackets( context[5], context[6] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[33], context[34] );
        res = refalrts::splice_evar( res, context[35], context[36] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoScan/4 (/5 # RowCol/18 s.new#23/20 1/19 )/6 (/9 '*'/11 '$'/25 e.new#32/33 s.new#33/37 s.new#31/32 s.new#30/31 s.new#29/30 s.new#28/29 s.new#27/28 s.new#26/27 s.new#25/26 )/10 e.new#24/35 >/1
      context[33] = context[21];
      context[34] = context[22];
      context[35] = context[23];
      context[36] = context[24];
      // closed e.new#24 as range 35
      if( ! refalrts::svar_right( context[37], context[33], context[34] ) )
        continue;
      // closed e.new#32 as range 33
      do {
        // </0 & DoScan/4 (/5 # RowCol/18 s.new#34/20 1/19 )/6 (/9 '*'/11 '$'/25 s.new#43/37 s.new#42/32 s.new#41/31 s.new#40/30 s.new#39/29 s.new#38/28 s.new#37/27 s.new#36/26 )/10 e.new#35/38 >/1
        context[38] = context[35];
        context[39] = context[36];
        if( ! refalrts::empty_seq( context[33], context[34] ) )
          continue;
        // closed e.new#35 as range 38
        do {
          // </0 & DoScan/4 (/5 # RowCol/18 s.Line#1/20 1/19 )/6 (/9 '*'/11 '$'/25 'E'/37 'X'/32 'T'/31 'E'/30 'N'/29 'D'/28 'E'/27 'D'/26 )/10 e.Lines#1/40 >/1
          context[40] = context[38];
          context[41] = context[39];
          if( ! refalrts::char_term( 'E', context[37] ) )
            continue;
          if( ! refalrts::char_term( 'X', context[32] ) )
            continue;
          if( ! refalrts::char_term( 'T', context[31] ) )
            continue;
          if( ! refalrts::char_term( 'E', context[30] ) )
            continue;
          if( ! refalrts::char_term( 'N', context[29] ) )
            continue;
          if( ! refalrts::char_term( 'D', context[28] ) )
            continue;
          if( ! refalrts::char_term( 'E', context[27] ) )
            continue;
          if( ! refalrts::char_term( 'D', context[26] ) )
            continue;
          // closed e.Lines#1 as range 40
          //DEBUG: s.Line#1: 20
          //DEBUG: e.Lines#1: 40

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkRefal5Mode/4 AsIs: (/5 AsIs: # RowCol/18 AsIs: s.Line#1/20 AsIs: 1/19 AsIs: )/6 HalfReuse: # Extended/9 HalfReuse: )/11 HalfReuse: </25 HalfReuse: & DoScan/37 HalfReuse: (/32 HalfReuse: # RowCol/31 HalfReuse: </30 HalfReuse: & Add/29 HalfReuse: 1/28 HalfReuse: s.Line1 #20/27 HalfReuse: >/26 HalfReuse: 1/10 } )/42 Tile{ AsIs: e.Lines#1/40 } Tile{ AsIs: >/1 ]] }
          refalrts::alloc_close_bracket(vm, context[42]);
          refalrts::reinit_open_bracket(context[0]);
          refalrts::reinit_ident(context[4], identifiers[ident_TkRefal5Mode]);
          refalrts::reinit_ident(context[9], identifiers[ident_Extended]);
          refalrts::reinit_close_bracket(context[11]);
          refalrts::reinit_open_call(context[25]);
          refalrts::reinit_name(context[37], functions[efunc_DoScan]);
          refalrts::reinit_open_bracket(context[32]);
          refalrts::reinit_ident(context[31], identifiers[ident_RowCol]);
          refalrts::reinit_open_call(context[30]);
          refalrts::reinit_name(context[29], functions[efunc_Add]);
          refalrts::reinit_number(context[28], 1UL);
          refalrts::reinit_svar( context[27], context[20] );
          refalrts::reinit_close_call(context[26]);
          refalrts::reinit_number(context[10], 1UL);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[25] );
          refalrts::link_brackets( context[32], context[42] );
          refalrts::push_stack( vm, context[26] );
          refalrts::push_stack( vm, context[30] );
          refalrts::link_brackets( context[0], context[11] );
          refalrts::link_brackets( context[5], context[6] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[40], context[41] );
          res = refalrts::splice_evar( res, context[42], context[42] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & DoScan/4 (/5 # RowCol/18 s.Line#1/20 1/19 )/6 (/9 '*'/11 '$'/25 'C'/37 'L'/32 'A'/31 'S'/30 'S'/29 'I'/28 'C'/27 ';'/26 )/10 e.Lines#1/40 >/1
        context[40] = context[38];
        context[41] = context[39];
        if( ! refalrts::char_term( 'C', context[37] ) )
          continue;
        if( ! refalrts::char_term( 'L', context[32] ) )
          continue;
        if( ! refalrts::char_term( 'A', context[31] ) )
          continue;
        if( ! refalrts::char_term( 'S', context[30] ) )
          continue;
        if( ! refalrts::char_term( 'S', context[29] ) )
          continue;
        if( ! refalrts::char_term( 'I', context[28] ) )
          continue;
        if( ! refalrts::char_term( 'C', context[27] ) )
          continue;
        if( ! refalrts::char_term( ';', context[26] ) )
          continue;
        // closed e.Lines#1 as range 40
        //DEBUG: s.Line#1: 20
        //DEBUG: e.Lines#1: 40

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkRefal5Mode/4 AsIs: (/5 AsIs: # RowCol/18 AsIs: s.Line#1/20 AsIs: 1/19 AsIs: )/6 HalfReuse: # Classic/9 HalfReuse: )/11 HalfReuse: </25 HalfReuse: & DoScan/37 HalfReuse: (/32 HalfReuse: # RowCol/31 HalfReuse: </30 HalfReuse: & Add/29 HalfReuse: 1/28 HalfReuse: s.Line1 #20/27 HalfReuse: >/26 HalfReuse: 1/10 } )/42 Tile{ AsIs: e.Lines#1/40 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_close_bracket(vm, context[42]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_ident(context[4], identifiers[ident_TkRefal5Mode]);
        refalrts::reinit_ident(context[9], identifiers[ident_Classic]);
        refalrts::reinit_close_bracket(context[11]);
        refalrts::reinit_open_call(context[25]);
        refalrts::reinit_name(context[37], functions[efunc_DoScan]);
        refalrts::reinit_open_bracket(context[32]);
        refalrts::reinit_ident(context[31], identifiers[ident_RowCol]);
        refalrts::reinit_open_call(context[30]);
        refalrts::reinit_name(context[29], functions[efunc_Add]);
        refalrts::reinit_number(context[28], 1UL);
        refalrts::reinit_svar( context[27], context[20] );
        refalrts::reinit_close_call(context[26]);
        refalrts::reinit_number(context[10], 1UL);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[25] );
        refalrts::link_brackets( context[32], context[42] );
        refalrts::push_stack( vm, context[26] );
        refalrts::push_stack( vm, context[30] );
        refalrts::link_brackets( context[0], context[11] );
        refalrts::link_brackets( context[5], context[6] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[40], context[41] );
        res = refalrts::splice_evar( res, context[42], context[42] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoScan/4 (/5 # RowCol/18 s.Line#1/20 1/19 )/6 (/9 '*'/11 '$'/25 'E'/42 'X'/37 'T'/32 'E'/31 'N'/30 'D'/29 'E'/28 'D'/27 ';'/26 )/10 e.Lines#1/40 >/1
      context[38] = context[33];
      context[39] = context[34];
      context[40] = context[35];
      context[41] = context[36];
      if( ! refalrts::char_term( 'X', context[37] ) )
        continue;
      if( ! refalrts::char_term( 'T', context[32] ) )
        continue;
      if( ! refalrts::char_term( 'E', context[31] ) )
        continue;
      if( ! refalrts::char_term( 'N', context[30] ) )
        continue;
      if( ! refalrts::char_term( 'D', context[29] ) )
        continue;
      if( ! refalrts::char_term( 'E', context[28] ) )
        continue;
      if( ! refalrts::char_term( 'D', context[27] ) )
        continue;
      if( ! refalrts::char_term( ';', context[26] ) )
        continue;
      context[42] = refalrts::char_left( 'E', context[38], context[39] );
      if( ! context[42] )
        continue;
      if( ! refalrts::empty_seq( context[38], context[39] ) )
        continue;
      // closed e.Lines#1 as range 40
      //DEBUG: s.Line#1: 20
      //DEBUG: e.Lines#1: 40

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkRefal5Mode/4 AsIs: (/5 AsIs: # RowCol/18 AsIs: s.Line#1/20 AsIs: 1/19 AsIs: )/6 HalfReuse: # Extended/9 HalfReuse: )/11 HalfReuse: </25 HalfReuse: & DoScan/42 HalfReuse: (/37 HalfReuse: # RowCol/32 HalfReuse: </31 HalfReuse: & Add/30 HalfReuse: 1/29 HalfReuse: s.Line1 #20/28 HalfReuse: >/27 HalfReuse: 1/26 AsIs: )/10 AsIs: e.Lines#1/40 AsIs: >/1 ]] }
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TkRefal5Mode]);
      refalrts::reinit_ident(context[9], identifiers[ident_Extended]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::reinit_open_call(context[25]);
      refalrts::reinit_name(context[42], functions[efunc_DoScan]);
      refalrts::reinit_open_bracket(context[37]);
      refalrts::reinit_ident(context[32], identifiers[ident_RowCol]);
      refalrts::reinit_open_call(context[31]);
      refalrts::reinit_name(context[30], functions[efunc_Add]);
      refalrts::reinit_number(context[29], 1UL);
      refalrts::reinit_svar( context[28], context[20] );
      refalrts::reinit_close_call(context[27]);
      refalrts::reinit_number(context[26], 1UL);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[25] );
      refalrts::link_brackets( context[37], context[10] );
      refalrts::push_stack( vm, context[27] );
      refalrts::push_stack( vm, context[31] );
      refalrts::link_brackets( context[0], context[11] );
      refalrts::link_brackets( context[5], context[6] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoScan/4 (/5 # RowCol/18 s.Line#1/20 1/19 )/6 (/9 '*'/11 e.Comment#1/21 )/10 e.Lines#1/23 >/1
    context[21] = context[12];
    context[22] = context[13];
    context[23] = context[14];
    context[24] = context[15];
    // closed e.Comment#1 as range 21
    // closed e.Lines#1 as range 23
    //DEBUG: s.Line#1: 20
    //DEBUG: e.Comment#1: 21
    //DEBUG: e.Lines#1: 23

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Line#1/20 {REMOVED TILE} e.Comment#1/21 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoScan/4 AsIs: (/5 AsIs: # RowCol/18 } </25 & Add/26 Tile{ AsIs: 1/19 HalfReuse: s.Line1 #20/6 HalfReuse: >/9 HalfReuse: 1/11 } Tile{ AsIs: )/10 AsIs: e.Lines#1/23 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[25]);
    refalrts::alloc_name(vm, context[26], functions[efunc_Add]);
    refalrts::reinit_svar( context[6], context[20] );
    refalrts::reinit_close_call(context[9]);
    refalrts::reinit_number(context[11], 1UL);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[5], context[10] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[25] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[19], context[11] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    refalrts::splice_to_freelist_open( vm, context[18], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoScan/4 t.new#10/5 (/9 '<'/11 s.new#12/16 e.new#13/12 )/10 e.new#11/14 >/1
    context[12] = context[7];
    context[13] = context[8];
    context[14] = context[2];
    context[15] = context[3];
    if( ! refalrts::char_term( '<', context[11] ) )
      continue;
    // closed e.new#11 as range 14
    if( ! refalrts::svar_left( context[16], context[12], context[13] ) )
      continue;
    // closed e.new#13 as range 12
    do {
      // </0 & DoScan/4 t.Pos#1/5 (/9 '<'/11 s.Var#1/16 '.'/21 e.Line#1/17 )/10 e.Lines#1/19 >/1
      context[17] = context[12];
      context[18] = context[13];
      context[19] = context[14];
      context[20] = context[15];
      context[21] = refalrts::char_left( '.', context[17], context[18] );
      if( ! context[21] )
        continue;
      // closed e.Line#1 as range 17
      // closed e.Lines#1 as range 19
      //DEBUG: t.Pos#1: 5
      //DEBUG: s.Var#1: 16
      //DEBUG: e.Line#1: 17
      //DEBUG: e.Lines#1: 19
      //5: t.Pos#1
      //16: s.Var#1
      //17: e.Line#1
      //19: e.Lines#1
      //27: s.Var#1

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[22]);
      refalrts::alloc_name(vm, context[24], functions[efunc_gen_DoScan_S14C1]);
      refalrts::alloc_open_call(vm, context[25]);
      refalrts::alloc_name(vm, context[26], functions[efunc_IsVarType]);
      refalrts::copy_stvar(vm, context[27], context[16]);
      refalrts::alloc_close_call(vm, context[28]);
      refalrts::alloc_close_call(vm, context[23]);
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[22] );
      res = refalrts::splice_elem( res, context[23] );
      refalrts::push_stack( vm, context[28] );
      refalrts::push_stack( vm, context[25] );
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
        // </22 & DoScan$14?1/26 # True/27 >/23
        context[24] = 0;
        context[25] = 0;
        context[26] = refalrts::call_left( context[24], context[25], context[22], context[23] );
        context[27] = refalrts::ident_left( identifiers[ident_True], context[24], context[25] );
        if( ! context[27] )
          continue;
        if( ! refalrts::empty_seq( context[24], context[25] ) )
          continue;
        //DEBUG: t.Pos#1: 5
        //DEBUG: s.Var#1: 16
        //DEBUG: e.Line#1: 17
        //DEBUG: e.Lines#1: 19

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } (/28 Tile{ HalfReuse: # TkOpenCall/26 } t.Pos#1/5/29 Tile{ HalfReuse: )/27 HalfReuse: </23 HalfReuse: & DoScan/1 } Tile{ AsIs: </0 Reuse: & IncCol/4 AsIs: t.Pos#1/5 HalfReuse: >/9 HalfReuse: (/11 AsIs: s.Var#1/16 AsIs: '.'/21 AsIs: e.Line#1/17 AsIs: )/10 AsIs: e.Lines#1/19 HalfReuse: >/22 } Tile{ ]] }
        refalrts::alloc_open_bracket(vm, context[28]);
        refalrts::copy_evar(vm, context[29], context[30], context[5], context[6]);
        refalrts::reinit_ident(context[26], identifiers[ident_TkOpenCall]);
        refalrts::reinit_close_bracket(context[27]);
        refalrts::reinit_open_call(context[23]);
        refalrts::reinit_name(context[1], functions[efunc_DoScan]);
        refalrts::update_name(context[4], functions[efunc_IncCol]);
        refalrts::reinit_close_call(context[9]);
        refalrts::reinit_open_bracket(context[11]);
        refalrts::reinit_close_call(context[22]);
        refalrts::push_stack( vm, context[22] );
        refalrts::push_stack( vm, context[23] );
        refalrts::link_brackets( context[11], context[10] );
        refalrts::push_stack( vm, context[9] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[28], context[27] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[0], context[22] );
        res = refalrts::splice_evar( res, context[27], context[1] );
        res = refalrts::splice_evar( res, context[29], context[30] );
        res = refalrts::splice_evar( res, context[26], context[26] );
        res = refalrts::splice_evar( res, context[28], context[28] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[22], context[23]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoScan/4 t.Pos#1/5 (/9 '<'/11 s.StartIdent#1/16 e.Line#1/17 )/10 e.Lines#1/19 >/1
    context[17] = context[12];
    context[18] = context[13];
    context[19] = context[14];
    context[20] = context[15];
    // closed e.Line#1 as range 17
    // closed e.Lines#1 as range 19
    //DEBUG: t.Pos#1: 5
    //DEBUG: s.StartIdent#1: 16
    //DEBUG: e.Line#1: 17
    //DEBUG: e.Lines#1: 19
    //5: t.Pos#1
    //16: s.StartIdent#1
    //17: e.Line#1
    //19: e.Lines#1
    //26: s.StartIdent#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[23], functions[efunc_gen_DoScan_S15C1]);
    refalrts::alloc_open_call(vm, context[24]);
    refalrts::alloc_name(vm, context[25], functions[efunc_IsStartIdent]);
    refalrts::copy_stvar(vm, context[26], context[16]);
    refalrts::alloc_close_call(vm, context[27]);
    refalrts::alloc_close_call(vm, context[22]);
    refalrts::push_stack( vm, context[22] );
    refalrts::push_stack( vm, context[21] );
    res = refalrts::splice_elem( res, context[22] );
    refalrts::push_stack( vm, context[27] );
    refalrts::push_stack( vm, context[24] );
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
      // </21 & DoScan$15?1/25 # True/26 >/22
      context[23] = 0;
      context[24] = 0;
      context[25] = refalrts::call_left( context[23], context[24], context[21], context[22] );
      context[26] = refalrts::ident_left( identifiers[ident_True], context[23], context[24] );
      if( ! context[26] )
        continue;
      if( ! refalrts::empty_seq( context[23], context[24] ) )
        continue;
      //DEBUG: t.Pos#1: 5
      //DEBUG: s.StartIdent#1: 16
      //DEBUG: e.Line#1: 17
      //DEBUG: e.Lines#1: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} & DoScan$15?1/25 # True/26 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoScan-Ident/4 AsIs: t.Pos#1/5 AsIs: (/9 AsIs: '<'/11 AsIs: s.StartIdent#1/16 } Tile{ HalfReuse: )/22 HalfReuse: (/1 } Tile{ AsIs: e.Line#1/17 } Tile{ AsIs: )/10 AsIs: e.Lines#1/19 HalfReuse: >/21 } Tile{ ]] }
      refalrts::update_name(context[4], functions[efunc_DoScanm_Ident]);
      refalrts::reinit_close_bracket(context[22]);
      refalrts::reinit_open_bracket(context[1]);
      refalrts::reinit_close_call(context[21]);
      refalrts::push_stack( vm, context[21] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[1], context[10] );
      refalrts::link_brackets( context[9], context[22] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[10], context[21] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[22], context[1] );
      refalrts::splice_to_freelist_open( vm, context[16], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[21], context[22]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoScan/4 t.Pos#1/5 (/9 '$'/11 e.Line#1/12 )/10 e.Lines#1/14 >/1
    context[12] = context[7];
    context[13] = context[8];
    context[14] = context[2];
    context[15] = context[3];
    if( ! refalrts::char_term( '$', context[11] ) )
      continue;
    // closed e.Line#1 as range 12
    // closed e.Lines#1 as range 14
    //DEBUG: t.Pos#1: 5
    //DEBUG: e.Line#1: 12
    //DEBUG: e.Lines#1: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/9 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoScan-Keyword/4 AsIs: t.Pos#1/5 } Tile{ HalfReuse: (/11 AsIs: e.Line#1/12 AsIs: )/10 AsIs: e.Lines#1/14 AsIs: >/1 ]] }
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
    // </0 & DoScan/4 t.Pos#1/5 (/9 '\''/11 e.Line#1/12 )/10 e.Lines#1/14 >/1
    context[12] = context[7];
    context[13] = context[8];
    context[14] = context[2];
    context[15] = context[3];
    if( ! refalrts::char_term( '\'', context[11] ) )
      continue;
    // closed e.Line#1 as range 12
    // closed e.Lines#1 as range 14
    //DEBUG: t.Pos#1: 5
    //DEBUG: e.Line#1: 12
    //DEBUG: e.Lines#1: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </16 & DoScan-Chars/17 Tile{ AsIs: </0 Reuse: & IncCol/4 AsIs: t.Pos#1/5 HalfReuse: >/9 HalfReuse: (/11 AsIs: e.Line#1/12 AsIs: )/10 AsIs: e.Lines#1/14 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[16]);
    refalrts::alloc_name(vm, context[17], functions[efunc_DoScanm_Chars]);
    refalrts::update_name(context[4], functions[efunc_IncCol]);
    refalrts::reinit_close_call(context[9]);
    refalrts::reinit_open_bracket(context[11]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[16] );
    refalrts::link_brackets( context[11], context[10] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[16], context[17] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoScan/4 t.Pos#1/5 (/9 '/'/11 '*'/16 e.Line#1/12 )/10 e.Lines#1/14 >/1
    context[12] = context[7];
    context[13] = context[8];
    context[14] = context[2];
    context[15] = context[3];
    if( ! refalrts::char_term( '/', context[11] ) )
      continue;
    context[16] = refalrts::char_left( '*', context[12], context[13] );
    if( ! context[16] )
      continue;
    // closed e.Line#1 as range 12
    // closed e.Lines#1 as range 14
    //DEBUG: t.Pos#1: 5
    //DEBUG: e.Line#1: 12
    //DEBUG: e.Lines#1: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoScan-CComment/4 AsIs: t.Pos#1/5 AsIs: (/9 AsIs: '/'/11 AsIs: '*'/16 } )/17 (/18 Tile{ AsIs: e.Line#1/12 } Tile{ AsIs: )/10 AsIs: e.Lines#1/14 AsIs: >/1 ]] }
    refalrts::alloc_close_bracket(vm, context[17]);
    refalrts::alloc_open_bracket(vm, context[18]);
    refalrts::update_name(context[4], functions[efunc_DoScanm_CComment]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[18], context[10] );
    refalrts::link_brackets( context[9], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoScan/4 t.Pos#1/5 (/9 '\"'/11 e.Line#1/12 )/10 e.Lines#1/14 >/1
    context[12] = context[7];
    context[13] = context[8];
    context[14] = context[2];
    context[15] = context[3];
    if( ! refalrts::char_term( '\"', context[11] ) )
      continue;
    // closed e.Line#1 as range 12
    // closed e.Lines#1 as range 14
    //DEBUG: t.Pos#1: 5
    //DEBUG: e.Line#1: 12
    //DEBUG: e.Lines#1: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoScan-Compound/4 AsIs: t.Pos#1/5 } </16 & IncCol/17 t.Pos#1/5/18 >/20 (/21 Tile{ HalfReuse: )/9 HalfReuse: (/11 AsIs: e.Line#1/12 AsIs: )/10 AsIs: e.Lines#1/14 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[16]);
    refalrts::alloc_name(vm, context[17], functions[efunc_IncCol]);
    refalrts::copy_evar(vm, context[18], context[19], context[5], context[6]);
    refalrts::alloc_close_call(vm, context[20]);
    refalrts::alloc_open_bracket(vm, context[21]);
    refalrts::update_name(context[4], functions[efunc_DoScanm_Compound]);
    refalrts::reinit_close_bracket(context[9]);
    refalrts::reinit_open_bracket(context[11]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[11], context[10] );
    refalrts::link_brackets( context[21], context[9] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    res = refalrts::splice_evar( res, context[16], context[21] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoScan/4 t.new#10/5 (/9 '['/11 e.new#12/12 )/10 e.new#11/14 >/1
    context[12] = context[7];
    context[13] = context[8];
    context[14] = context[2];
    context[15] = context[3];
    if( ! refalrts::char_term( '[', context[11] ) )
      continue;
    // closed e.new#12 as range 12
    // closed e.new#11 as range 14
    do {
      // </0 & DoScan/4 t.Pos#1/5 (/9 '['/11 s.StartIdent#1/20 e.Line#1/16 )/10 e.Lines#1/18 >/1
      context[16] = context[12];
      context[17] = context[13];
      context[18] = context[14];
      context[19] = context[15];
      // closed e.Lines#1 as range 18
      if( ! refalrts::svar_left( context[20], context[16], context[17] ) )
        continue;
      // closed e.Line#1 as range 16
      //DEBUG: t.Pos#1: 5
      //DEBUG: e.Lines#1: 18
      //DEBUG: s.StartIdent#1: 20
      //DEBUG: e.Line#1: 16
      //5: t.Pos#1
      //16: e.Line#1
      //18: e.Lines#1
      //20: s.StartIdent#1
      //26: s.StartIdent#1

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[21]);
      refalrts::alloc_name(vm, context[23], functions[efunc_gen_DoScan_S20C1]);
      refalrts::alloc_open_call(vm, context[24]);
      refalrts::alloc_name(vm, context[25], functions[efunc_Type]);
      refalrts::copy_stvar(vm, context[26], context[20]);
      refalrts::alloc_close_call(vm, context[27]);
      refalrts::alloc_close_call(vm, context[22]);
      refalrts::push_stack( vm, context[22] );
      refalrts::push_stack( vm, context[21] );
      res = refalrts::splice_elem( res, context[22] );
      refalrts::push_stack( vm, context[27] );
      refalrts::push_stack( vm, context[24] );
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
        // </21 & DoScan$20?1/25 'L'/26 s.Case#2/28 s.StartIdent#1/27 >/22
        context[23] = 0;
        context[24] = 0;
        context[25] = refalrts::call_left( context[23], context[24], context[21], context[22] );
        context[26] = refalrts::char_left( 'L', context[23], context[24] );
        if( ! context[26] )
          continue;
        if( ! refalrts::repeated_stvar_right( vm, context[27], context[20], context[23], context[24] ) )
          continue;
        if( ! refalrts::svar_left( context[28], context[23], context[24] ) )
          continue;
        if( ! refalrts::empty_seq( context[23], context[24] ) )
          continue;
        //DEBUG: t.Pos#1: 5
        //DEBUG: e.Lines#1: 18
        //DEBUG: s.StartIdent#1: 20
        //DEBUG: e.Line#1: 16
        //DEBUG: s.Case#2: 28

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Case#2/28 s.StartIdent#1/27 >/22 >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoScan-Ident/4 AsIs: t.Pos#1/5 AsIs: (/9 AsIs: '['/11 AsIs: s.StartIdent#1/20 } Tile{ HalfReuse: )/25 HalfReuse: (/26 } Tile{ AsIs: e.Line#1/16 } Tile{ AsIs: )/10 AsIs: e.Lines#1/18 HalfReuse: >/21 } Tile{ ]] }
        refalrts::update_name(context[4], functions[efunc_DoScanm_Ident]);
        refalrts::reinit_close_bracket(context[25]);
        refalrts::reinit_open_bracket(context[26]);
        refalrts::reinit_close_call(context[21]);
        refalrts::push_stack( vm, context[21] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[26], context[10] );
        refalrts::link_brackets( context[9], context[25] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[10], context[21] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[25], context[26] );
        refalrts::splice_to_freelist_open( vm, context[20], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[21], context[22]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoScan/4 t.Pos#1/5 (/9 '['/11 e.Line#1/16 )/10 e.Lines#1/18 >/1
    context[16] = context[12];
    context[17] = context[13];
    context[18] = context[14];
    context[19] = context[15];
    // closed e.Line#1 as range 16
    // closed e.Lines#1 as range 18
    //DEBUG: t.Pos#1: 5
    //DEBUG: e.Line#1: 16
    //DEBUG: e.Lines#1: 18

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/20 # TkOpenADT/21 t.Pos#1/5/22 # UnnamedADT/24 )/25 (/26 # TkError/27 t.Pos#1/5/28"Expected function name after \'[\'"/30 )/32 </33 & DoScan/34 Tile{ AsIs: </0 Reuse: & IncCol/4 AsIs: t.Pos#1/5 HalfReuse: >/9 HalfReuse: (/11 AsIs: e.Line#1/16 AsIs: )/10 AsIs: e.Lines#1/18 AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[20]);
    refalrts::alloc_ident(vm, context[21], identifiers[ident_TkOpenADT]);
    refalrts::copy_evar(vm, context[22], context[23], context[5], context[6]);
    refalrts::alloc_ident(vm, context[24], identifiers[ident_UnnamedADT]);
    refalrts::alloc_close_bracket(vm, context[25]);
    refalrts::alloc_open_bracket(vm, context[26]);
    refalrts::alloc_ident(vm, context[27], identifiers[ident_TkError]);
    refalrts::copy_evar(vm, context[28], context[29], context[5], context[6]);
    refalrts::alloc_chars(vm, context[30], context[31], "Expected function name after \'[\'", 32);
    refalrts::alloc_close_bracket(vm, context[32]);
    refalrts::alloc_open_call(vm, context[33]);
    refalrts::alloc_name(vm, context[34], functions[efunc_DoScan]);
    refalrts::update_name(context[4], functions[efunc_IncCol]);
    refalrts::reinit_close_call(context[9]);
    refalrts::reinit_open_bracket(context[11]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[33] );
    refalrts::link_brackets( context[11], context[10] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[26], context[32] );
    refalrts::link_brackets( context[20], context[25] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[20], context[34] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoScan/4 t.Pos#1/5 (/9 s.Digit#1/11 e.Line#1/12 )/10 e.Lines#1/14 >/1
    context[12] = context[7];
    context[13] = context[8];
    context[14] = context[2];
    context[15] = context[3];
    // closed e.Line#1 as range 12
    // closed e.Lines#1 as range 14
    //DEBUG: t.Pos#1: 5
    //DEBUG: s.Digit#1: 11
    //DEBUG: e.Line#1: 12
    //DEBUG: e.Lines#1: 14
    //5: t.Pos#1
    //11: s.Digit#1
    //12: e.Line#1
    //14: e.Lines#1
    //21: s.Digit#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[16]);
    refalrts::alloc_name(vm, context[18], functions[efunc_gen_DoScan_S22C1]);
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_Type]);
    refalrts::copy_stvar(vm, context[21], context[11]);
    refalrts::alloc_close_call(vm, context[22]);
    refalrts::alloc_close_call(vm, context[17]);
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[16] );
    res = refalrts::splice_elem( res, context[17] );
    refalrts::push_stack( vm, context[22] );
    refalrts::push_stack( vm, context[19] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_stvar( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[16] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </16 & DoScan$22?1/20 'D'/21 '0'/22 s.Digit#1/23 >/17
      context[18] = 0;
      context[19] = 0;
      context[20] = refalrts::call_left( context[18], context[19], context[16], context[17] );
      context[21] = refalrts::char_left( 'D', context[18], context[19] );
      if( ! context[21] )
        continue;
      context[22] = refalrts::char_left( '0', context[18], context[19] );
      if( ! context[22] )
        continue;
      if( ! refalrts::repeated_stvar_left( vm, context[23], context[11], context[18], context[19] ) )
        continue;
      if( ! refalrts::empty_seq( context[18], context[19] ) )
        continue;
      //DEBUG: t.Pos#1: 5
      //DEBUG: s.Digit#1: 11
      //DEBUG: e.Line#1: 12
      //DEBUG: e.Lines#1: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} & DoScan$22?1/20 'D'/21 '0'/22 s.Digit#1/23 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoScan-Number/4 AsIs: t.Pos#1/5 AsIs: (/9 AsIs: s.Digit#1/11 } Tile{ HalfReuse: )/17 HalfReuse: (/1 } Tile{ AsIs: e.Line#1/12 } Tile{ AsIs: )/10 AsIs: e.Lines#1/14 HalfReuse: >/16 } Tile{ ]] }
      refalrts::update_name(context[4], functions[efunc_DoScanm_Number]);
      refalrts::reinit_close_bracket(context[17]);
      refalrts::reinit_open_bracket(context[1]);
      refalrts::reinit_close_call(context[16]);
      refalrts::push_stack( vm, context[16] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[1], context[10] );
      refalrts::link_brackets( context[9], context[17] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[10], context[16] );
      res = refalrts::splice_evar( res, context[12], context[13] );
      res = refalrts::splice_evar( res, context[17], context[1] );
      refalrts::splice_to_freelist_open( vm, context[11], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[16], context[17]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoScan/4 t.new#10/5 (/9 s.new#12/11 s.new#13/16 e.new#14/12 )/10 e.new#11/14 >/1
    context[12] = context[7];
    context[13] = context[8];
    context[14] = context[2];
    context[15] = context[3];
    // closed e.new#11 as range 14
    if( ! refalrts::svar_left( context[16], context[12], context[13] ) )
      continue;
    // closed e.new#14 as range 12
    do {
      // </0 & DoScan/4 (/5 # RowCol/21 s.Line#1/23 1/22 )/6 (/9 '%'/11 '%'/16 )/10 e.Lines#1/17 >/1
      context[17] = context[14];
      context[18] = context[15];
      context[19] = 0;
      context[20] = 0;
      if( ! refalrts::brackets_term( context[19], context[20], context[5] ) )
        continue;
      if( ! refalrts::char_term( '%', context[11] ) )
        continue;
      if( ! refalrts::char_term( '%', context[16] ) )
        continue;
      context[21] = refalrts::ident_left( identifiers[ident_RowCol], context[19], context[20] );
      if( ! context[21] )
        continue;
      context[22] = refalrts::number_right( 1UL, context[19], context[20] );
      if( ! context[22] )
        continue;
      if( ! refalrts::empty_seq( context[12], context[13] ) )
        continue;
      // closed e.Lines#1 as range 17
      if( ! refalrts::svar_left( context[23], context[19], context[20] ) )
        continue;
      if( ! refalrts::empty_seq( context[19], context[20] ) )
        continue;
      //DEBUG: e.Lines#1: 17
      //DEBUG: s.Line#1: 23

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Line#1/23 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoScan-NativeCode/4 AsIs: (/5 AsIs: # RowCol/21 } </24 Tile{ HalfReuse: & Add/22 HalfReuse: 1/6 HalfReuse: s.Line1 #23/9 HalfReuse: >/11 HalfReuse: 1/16 AsIs: )/10 AsIs: e.Lines#1/17 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[24]);
      refalrts::update_name(context[4], functions[efunc_DoScanm_NativeCode]);
      refalrts::reinit_name(context[22], functions[efunc_Add]);
      refalrts::reinit_number(context[6], 1UL);
      refalrts::reinit_svar( context[9], context[23] );
      refalrts::reinit_close_call(context[11]);
      refalrts::reinit_number(context[16], 1UL);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[5], context[10] );
      refalrts::push_stack( vm, context[11] );
      refalrts::push_stack( vm, context[24] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[22];
      res = refalrts::splice_evar( res, context[24], context[24] );
      refalrts::splice_to_freelist_open( vm, context[21], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoScan/4 t.Pos#1/5 (/9 '<'/11 s.SugarName#1/16 e.Line#1/17 )/10 e.Lines#1/19 >/1
    context[17] = context[12];
    context[18] = context[13];
    context[19] = context[14];
    context[20] = context[15];
    if( ! refalrts::char_term( '<', context[11] ) )
      continue;
    // closed e.Line#1 as range 17
    // closed e.Lines#1 as range 19
    //DEBUG: t.Pos#1: 5
    //DEBUG: s.SugarName#1: 16
    //DEBUG: e.Line#1: 17
    //DEBUG: e.Lines#1: 19
    //5: t.Pos#1
    //16: s.SugarName#1
    //17: e.Line#1
    //19: e.Lines#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[23], functions[efunc_gen_DoScan_S24C1]);
    refalrts::alloc_open_bracket(vm, context[24]);
    refalrts::alloc_chars(vm, context[25], context[26], "+Add", 4);
    refalrts::alloc_close_bracket(vm, context[27]);
    refalrts::alloc_open_bracket(vm, context[28]);
    refalrts::alloc_chars(vm, context[29], context[30], "-Sub", 4);
    refalrts::alloc_close_bracket(vm, context[31]);
    refalrts::alloc_open_bracket(vm, context[32]);
    refalrts::alloc_chars(vm, context[33], context[34], "*Mul", 4);
    refalrts::alloc_close_bracket(vm, context[35]);
    refalrts::alloc_open_bracket(vm, context[36]);
    refalrts::alloc_chars(vm, context[37], context[38], "/Div", 4);
    refalrts::alloc_close_bracket(vm, context[39]);
    refalrts::alloc_open_bracket(vm, context[40]);
    refalrts::alloc_chars(vm, context[41], context[42], "%Mod", 4);
    refalrts::alloc_close_bracket(vm, context[43]);
    refalrts::alloc_open_bracket(vm, context[44]);
    refalrts::alloc_chars(vm, context[45], context[46], "?Residue", 8);
    refalrts::alloc_close_bracket(vm, context[47]);
    refalrts::alloc_close_call(vm, context[22]);
    refalrts::push_stack( vm, context[22] );
    refalrts::push_stack( vm, context[21] );
    res = refalrts::splice_elem( res, context[22] );
    refalrts::link_brackets( context[44], context[47] );
    res = refalrts::splice_elem( res, context[47] );
    res = refalrts::splice_evar( res, context[45], context[46] );
    res = refalrts::splice_elem( res, context[44] );
    refalrts::link_brackets( context[40], context[43] );
    res = refalrts::splice_elem( res, context[43] );
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_elem( res, context[40] );
    refalrts::link_brackets( context[36], context[39] );
    res = refalrts::splice_elem( res, context[39] );
    res = refalrts::splice_evar( res, context[37], context[38] );
    res = refalrts::splice_elem( res, context[36] );
    refalrts::link_brackets( context[32], context[35] );
    res = refalrts::splice_elem( res, context[35] );
    res = refalrts::splice_evar( res, context[33], context[34] );
    res = refalrts::splice_elem( res, context[32] );
    refalrts::link_brackets( context[28], context[31] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_elem( res, context[28] );
    refalrts::link_brackets( context[24], context[27] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </21 & DoScan$24?1/25 e.SugarNames-B#2/26 (/32 s.SugarName#1/34 e.RealName#2/30 )/33 e.SugarNames-E#2/28 >/22
      context[23] = 0;
      context[24] = 0;
      context[25] = refalrts::call_left( context[23], context[24], context[21], context[22] );
      context[26] = 0;
      context[27] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[28] = context[23];
        context[29] = context[24];
        context[30] = 0;
        context[31] = 0;
        context[32] = refalrts::brackets_left( context[30], context[31], context[28], context[29] );
        if( ! context[32] )
          continue;
        refalrts::bracket_pointers(context[32], context[33]);
        if( ! refalrts::repeated_stvar_left( vm, context[34], context[16], context[30], context[31] ) )
          continue;
        // closed e.RealName#2 as range 30
        // closed e.SugarNames-E#2 as range 28
        //DEBUG: t.Pos#1: 5
        //DEBUG: s.SugarName#1: 16
        //DEBUG: e.Line#1: 17
        //DEBUG: e.Lines#1: 19
        //DEBUG: e.SugarNames-B#2: 26
        //DEBUG: e.RealName#2: 30
        //DEBUG: e.SugarNames-E#2: 28

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.SugarNames-B#2/26 {REMOVED TILE} s.SugarName#1/34 {REMOVED TILE} {REMOVED TILE} e.SugarNames-E#2/28 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/32 } # TkOpenCall/35 t.Pos#1/5/36 Tile{ AsIs: e.RealName#2/30 } Tile{ AsIs: )/33 } </38 Tile{ Reuse: & DoScan/25 } Tile{ AsIs: </0 Reuse: & IncCol/4 AsIs: t.Pos#1/5 HalfReuse: # Len/9 AsIs: '<'/11 AsIs: s.SugarName#1/16 } Tile{ AsIs: >/22 HalfReuse: (/1 } Tile{ AsIs: e.Line#1/17 } Tile{ AsIs: )/10 AsIs: e.Lines#1/19 HalfReuse: >/21 } Tile{ ]] }
        refalrts::alloc_ident(vm, context[35], identifiers[ident_TkOpenCall]);
        refalrts::copy_evar(vm, context[36], context[37], context[5], context[6]);
        refalrts::alloc_open_call(vm, context[38]);
        refalrts::update_name(context[25], functions[efunc_DoScan]);
        refalrts::update_name(context[4], functions[efunc_IncCol]);
        refalrts::reinit_ident(context[9], identifiers[ident_Len]);
        refalrts::reinit_open_bracket(context[1]);
        refalrts::reinit_close_call(context[21]);
        refalrts::push_stack( vm, context[21] );
        refalrts::push_stack( vm, context[38] );
        refalrts::link_brackets( context[1], context[10] );
        refalrts::push_stack( vm, context[22] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[32], context[33] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[10], context[21] );
        res = refalrts::splice_evar( res, context[17], context[18] );
        res = refalrts::splice_evar( res, context[22], context[1] );
        res = refalrts::splice_evar( res, context[0], context[16] );
        res = refalrts::splice_evar( res, context[25], context[25] );
        res = refalrts::splice_evar( res, context[38], context[38] );
        res = refalrts::splice_evar( res, context[33], context[33] );
        res = refalrts::splice_evar( res, context[30], context[31] );
        res = refalrts::splice_evar( res, context[35], context[37] );
        res = refalrts::splice_evar( res, context[32], context[32] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[26], context[27], context[23], context[24] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[21], context[22]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoScan/4 t.Pos#1/5 (/9 '<'/11 e.Line#1/12 )/10 e.Lines#1/14 >/1
    context[12] = context[7];
    context[13] = context[8];
    context[14] = context[2];
    context[15] = context[3];
    if( ! refalrts::char_term( '<', context[11] ) )
      continue;
    // closed e.Line#1 as range 12
    // closed e.Lines#1 as range 14
    //DEBUG: t.Pos#1: 5
    //DEBUG: e.Line#1: 12
    //DEBUG: e.Lines#1: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/16 # TkOpenCall/17 t.Pos#1/5/18 )/20 </21 & DoScan/22 Tile{ AsIs: </0 Reuse: & IncCol/4 AsIs: t.Pos#1/5 HalfReuse: >/9 HalfReuse: (/11 AsIs: e.Line#1/12 AsIs: )/10 AsIs: e.Lines#1/14 AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[16]);
    refalrts::alloc_ident(vm, context[17], identifiers[ident_TkOpenCall]);
    refalrts::copy_evar(vm, context[18], context[19], context[5], context[6]);
    refalrts::alloc_close_bracket(vm, context[20]);
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_DoScan]);
    refalrts::update_name(context[4], functions[efunc_IncCol]);
    refalrts::reinit_close_call(context[9]);
    refalrts::reinit_open_bracket(context[11]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[21] );
    refalrts::link_brackets( context[11], context[10] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[16], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[16], context[22] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoScan/4 t.Pos#1/5 (/9 '\\'/11 e.LineWithEscapes#1/12 )/10 e.Lines#1/14 >/1
    context[12] = context[7];
    context[13] = context[8];
    context[14] = context[2];
    context[15] = context[3];
    if( ! refalrts::char_term( '\\', context[11] ) )
      continue;
    // closed e.LineWithEscapes#1 as range 12
    // closed e.Lines#1 as range 14
    //DEBUG: t.Pos#1: 5
    //DEBUG: e.LineWithEscapes#1: 12
    //DEBUG: e.Lines#1: 14
    //5: t.Pos#1
    //12: e.LineWithEscapes#1
    //14: e.Lines#1
    //21: t.Pos#1
    //22: e.LineWithEscapes#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[16]);
    refalrts::alloc_name(vm, context[18], functions[efunc_gen_DoScan_S26C1]);
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_ScanEscape]);
    refalrts::copy_stvar(vm, context[21], context[5]);
    refalrts::copy_evar(vm, context[22], context[23], context[12], context[13]);
    refalrts::alloc_close_call(vm, context[24]);
    refalrts::alloc_close_call(vm, context[17]);
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[16] );
    res = refalrts::splice_elem( res, context[17] );
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[19] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_stvar( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[16] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </16 & DoScan$26?1/20 t.ScannedToken#2/21 t.Pos1#2/23 e.RestOfLine#2/18 >/17
      context[18] = 0;
      context[19] = 0;
      context[20] = refalrts::call_left( context[18], context[19], context[16], context[17] );
      context[22] = refalrts::tvar_left( context[21], context[18], context[19] );
      if( ! context[22] )
        continue;
      context[24] = refalrts::tvar_left( context[23], context[18], context[19] );
      if( ! context[24] )
        continue;
      // closed e.RestOfLine#2 as range 18
      //DEBUG: t.Pos#1: 5
      //DEBUG: e.LineWithEscapes#1: 12
      //DEBUG: e.Lines#1: 14
      //DEBUG: t.ScannedToken#2: 21
      //DEBUG: t.Pos1#2: 23
      //DEBUG: e.RestOfLine#2: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} t.Pos#1/5 {REMOVED TILE} '\\'/11 e.LineWithEscapes#1/12 {REMOVED TILE} & DoScan$26?1/20 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/17 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.ScannedToken#2/21 } Tile{ AsIs: </0 AsIs: & DoScan/4 } Tile{ AsIs: t.Pos1#2/23 } Tile{ AsIs: (/9 } Tile{ AsIs: e.RestOfLine#2/18 } Tile{ AsIs: )/10 AsIs: e.Lines#1/14 HalfReuse: >/16 } Tile{ ]] }
      refalrts::reinit_close_call(context[16]);
      refalrts::push_stack( vm, context[16] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[10], context[16] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[9], context[9] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[16], context[17]);
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

static refalrts::NativeReference nat_ref_DoScan("DoScan", COOKIE1_, COOKIE2_, func_DoScan);


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

static refalrts::NativeReference nat_ref_IsStartIdent("IsStartIdent", COOKIE1_, COOKIE2_, func_IsStartIdent);


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

static refalrts::NativeReference nat_ref_IsVarType("IsVarType", COOKIE1_, COOKIE2_, func_IsVarType);


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

static refalrts::NativeReference nat_ref_IsPunctuation("IsPunctuation", COOKIE1_, COOKIE2_, func_IsPunctuation);


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

static refalrts::NativeReference nat_ref_DoScanm_Keyword("DoScan-Keyword", COOKIE1_, COOKIE2_, func_DoScanm_Keyword);


static refalrts::FnResult func_DoScanm_BuildKeyword(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 99 elems
  refalrts::Iter context[99];
  refalrts::zeros( context, 99 );
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
    // </0 & DoScan-BuildKeyword/4 t.Pos#1/5 (/9 e.KeywordChars#1/15 )/10 (/13 s.Next#1/21 e.Line#1/17 )/14 e.Lines#1/19 >/1
    context[15] = context[7];
    context[16] = context[8];
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[2];
    context[20] = context[3];
    // closed e.KeywordChars#1 as range 15
    // closed e.Lines#1 as range 19
    if( ! refalrts::svar_left( context[21], context[17], context[18] ) )
      continue;
    // closed e.Line#1 as range 17
    //DEBUG: t.Pos#1: 5
    //DEBUG: e.KeywordChars#1: 15
    //DEBUG: e.Lines#1: 19
    //DEBUG: s.Next#1: 21
    //DEBUG: e.Line#1: 17
    //5: t.Pos#1
    //15: e.KeywordChars#1
    //17: e.Line#1
    //19: e.Lines#1
    //21: s.Next#1
    //27: s.Next#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[22]);
    refalrts::alloc_name(vm, context[24], functions[efunc_gen_DoScanm_BuildKeyword_S1C1]);
    refalrts::alloc_open_call(vm, context[25]);
    refalrts::alloc_name(vm, context[26], functions[efunc_Type]);
    refalrts::copy_stvar(vm, context[27], context[21]);
    refalrts::alloc_close_call(vm, context[28]);
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[22] );
    res = refalrts::splice_elem( res, context[23] );
    refalrts::push_stack( vm, context[28] );
    refalrts::push_stack( vm, context[25] );
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
      // </22 & DoScan-BuildKeyword$1?1/26 'L'/27 s.SubType#2/29 s.Next#1/28 >/23
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::call_left( context[24], context[25], context[22], context[23] );
      context[27] = refalrts::char_left( 'L', context[24], context[25] );
      if( ! context[27] )
        continue;
      if( ! refalrts::repeated_stvar_right( vm, context[28], context[21], context[24], context[25] ) )
        continue;
      if( ! refalrts::svar_left( context[29], context[24], context[25] ) )
        continue;
      if( ! refalrts::empty_seq( context[24], context[25] ) )
        continue;
      //DEBUG: t.Pos#1: 5
      //DEBUG: e.KeywordChars#1: 15
      //DEBUG: e.Lines#1: 19
      //DEBUG: s.Next#1: 21
      //DEBUG: e.Line#1: 17
      //DEBUG: s.SubType#2: 29

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Next#1/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} 'L'/27 s.SubType#2/29 s.Next#1/28 >/23 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoScan-BuildKeyword/4 AsIs: t.Pos#1/5 AsIs: (/9 AsIs: e.KeywordChars#1/15 HalfReuse: s.Next1 #28/10 HalfReuse: )/13 } Tile{ HalfReuse: (/26 } Tile{ AsIs: e.Line#1/17 } Tile{ AsIs: )/14 AsIs: e.Lines#1/19 HalfReuse: >/22 } Tile{ ]] }
      refalrts::reinit_svar( context[10], context[28] );
      refalrts::reinit_close_bracket(context[13]);
      refalrts::reinit_open_bracket(context[26]);
      refalrts::reinit_close_call(context[22]);
      refalrts::push_stack( vm, context[22] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[26], context[14] );
      refalrts::link_brackets( context[9], context[13] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[14], context[22] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[26], context[26] );
      refalrts::splice_to_freelist_open( vm, context[13], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[22], context[23]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoScan-BuildKeyword/4 t.Pos#1/5 (/9 e.KeywordChars#1/15 )/10 (/13 e.Line#1/17 )/14 e.Lines#1/19 >/1
    context[15] = context[7];
    context[16] = context[8];
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[2];
    context[20] = context[3];
    // closed e.KeywordChars#1 as range 15
    // closed e.Line#1 as range 17
    // closed e.Lines#1 as range 19
    //DEBUG: t.Pos#1: 5
    //DEBUG: e.KeywordChars#1: 15
    //DEBUG: e.Line#1: 17
    //DEBUG: e.Lines#1: 19
    //5: t.Pos#1
    //15: e.KeywordChars#1
    //17: e.Line#1
    //19: e.Lines#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[23], functions[efunc_gen_DoScanm_BuildKeyword_S2C1]);
    refalrts::alloc_open_bracket(vm, context[24]);
    refalrts::alloc_ident(vm, context[25], identifiers[ident_TkExtern]);
    refalrts::alloc_chars(vm, context[26], context[27], "$EXTERN", 7);
    refalrts::alloc_close_bracket(vm, context[28]);
    refalrts::alloc_open_bracket(vm, context[29]);
    refalrts::alloc_ident(vm, context[30], identifiers[ident_TkExtern]);
    refalrts::alloc_chars(vm, context[31], context[32], "$EXTRN", 6);
    refalrts::alloc_close_bracket(vm, context[33]);
    refalrts::alloc_open_bracket(vm, context[34]);
    refalrts::alloc_ident(vm, context[35], identifiers[ident_TkExtern]);
    refalrts::alloc_chars(vm, context[36], context[37], "$EXTERNAL", 9);
    refalrts::alloc_close_bracket(vm, context[38]);
    refalrts::alloc_open_bracket(vm, context[39]);
    refalrts::alloc_ident(vm, context[40], identifiers[ident_TkEntry]);
    refalrts::alloc_chars(vm, context[41], context[42], "$ENTRY", 6);
    refalrts::alloc_close_bracket(vm, context[43]);
    refalrts::alloc_open_bracket(vm, context[44]);
    refalrts::alloc_ident(vm, context[45], identifiers[ident_TkEnum]);
    refalrts::alloc_chars(vm, context[46], context[47], "$ENUM", 5);
    refalrts::alloc_close_bracket(vm, context[48]);
    refalrts::alloc_open_bracket(vm, context[49]);
    refalrts::alloc_ident(vm, context[50], identifiers[ident_TkEEnum]);
    refalrts::alloc_chars(vm, context[51], context[52], "$EENUM", 6);
    refalrts::alloc_close_bracket(vm, context[53]);
    refalrts::alloc_open_bracket(vm, context[54]);
    refalrts::alloc_ident(vm, context[55], identifiers[ident_TkSwap]);
    refalrts::alloc_chars(vm, context[56], context[57], "$SWAP", 5);
    refalrts::alloc_close_bracket(vm, context[58]);
    refalrts::alloc_open_bracket(vm, context[59]);
    refalrts::alloc_ident(vm, context[60], identifiers[ident_TkESwap]);
    refalrts::alloc_chars(vm, context[61], context[62], "$ESWAP", 6);
    refalrts::alloc_close_bracket(vm, context[63]);
    refalrts::alloc_open_bracket(vm, context[64]);
    refalrts::alloc_ident(vm, context[65], identifiers[ident_TkInclude]);
    refalrts::alloc_chars(vm, context[66], context[67], "$INCLUDE", 8);
    refalrts::alloc_close_bracket(vm, context[68]);
    refalrts::alloc_open_bracket(vm, context[69]);
    refalrts::alloc_ident(vm, context[70], identifiers[ident_TkScopeId]);
    refalrts::alloc_chars(vm, context[71], context[72], "$SCOPEID", 8);
    refalrts::alloc_close_bracket(vm, context[73]);
    refalrts::alloc_open_bracket(vm, context[74]);
    refalrts::alloc_ident(vm, context[75], identifiers[ident_TkLabel]);
    refalrts::alloc_chars(vm, context[76], context[77], "$LABEL", 6);
    refalrts::alloc_close_bracket(vm, context[78]);
    refalrts::alloc_open_bracket(vm, context[79]);
    refalrts::alloc_ident(vm, context[80], identifiers[ident_TkInline]);
    refalrts::alloc_chars(vm, context[81], context[82], "$INLINE", 7);
    refalrts::alloc_close_bracket(vm, context[83]);
    refalrts::alloc_open_bracket(vm, context[84]);
    refalrts::alloc_ident(vm, context[85], identifiers[ident_TkDrive]);
    refalrts::alloc_chars(vm, context[86], context[87], "$DRIVE", 6);
    refalrts::alloc_close_bracket(vm, context[88]);
    refalrts::alloc_open_bracket(vm, context[89]);
    refalrts::alloc_ident(vm, context[90], identifiers[ident_TkSpec]);
    refalrts::alloc_chars(vm, context[91], context[92], "$SPEC", 5);
    refalrts::alloc_close_bracket(vm, context[93]);
    refalrts::alloc_open_bracket(vm, context[94]);
    refalrts::alloc_ident(vm, context[95], identifiers[ident_TkMeta]);
    refalrts::alloc_chars(vm, context[96], context[97], "$META", 5);
    refalrts::alloc_close_bracket(vm, context[98]);
    refalrts::alloc_close_call(vm, context[22]);
    refalrts::push_stack( vm, context[22] );
    refalrts::push_stack( vm, context[21] );
    res = refalrts::splice_elem( res, context[22] );
    refalrts::link_brackets( context[94], context[98] );
    res = refalrts::splice_elem( res, context[98] );
    res = refalrts::splice_evar( res, context[96], context[97] );
    res = refalrts::splice_elem( res, context[95] );
    res = refalrts::splice_elem( res, context[94] );
    refalrts::link_brackets( context[89], context[93] );
    res = refalrts::splice_elem( res, context[93] );
    res = refalrts::splice_evar( res, context[91], context[92] );
    res = refalrts::splice_elem( res, context[90] );
    res = refalrts::splice_elem( res, context[89] );
    refalrts::link_brackets( context[84], context[88] );
    res = refalrts::splice_elem( res, context[88] );
    res = refalrts::splice_evar( res, context[86], context[87] );
    res = refalrts::splice_elem( res, context[85] );
    res = refalrts::splice_elem( res, context[84] );
    refalrts::link_brackets( context[79], context[83] );
    res = refalrts::splice_elem( res, context[83] );
    res = refalrts::splice_evar( res, context[81], context[82] );
    res = refalrts::splice_elem( res, context[80] );
    res = refalrts::splice_elem( res, context[79] );
    refalrts::link_brackets( context[74], context[78] );
    res = refalrts::splice_elem( res, context[78] );
    res = refalrts::splice_evar( res, context[76], context[77] );
    res = refalrts::splice_elem( res, context[75] );
    res = refalrts::splice_elem( res, context[74] );
    refalrts::link_brackets( context[69], context[73] );
    res = refalrts::splice_elem( res, context[73] );
    res = refalrts::splice_evar( res, context[71], context[72] );
    res = refalrts::splice_elem( res, context[70] );
    res = refalrts::splice_elem( res, context[69] );
    refalrts::link_brackets( context[64], context[68] );
    res = refalrts::splice_elem( res, context[68] );
    res = refalrts::splice_evar( res, context[66], context[67] );
    res = refalrts::splice_elem( res, context[65] );
    res = refalrts::splice_elem( res, context[64] );
    refalrts::link_brackets( context[59], context[63] );
    res = refalrts::splice_elem( res, context[63] );
    res = refalrts::splice_evar( res, context[61], context[62] );
    res = refalrts::splice_elem( res, context[60] );
    res = refalrts::splice_elem( res, context[59] );
    refalrts::link_brackets( context[54], context[58] );
    res = refalrts::splice_elem( res, context[58] );
    res = refalrts::splice_evar( res, context[56], context[57] );
    res = refalrts::splice_elem( res, context[55] );
    res = refalrts::splice_elem( res, context[54] );
    refalrts::link_brackets( context[49], context[53] );
    res = refalrts::splice_elem( res, context[53] );
    res = refalrts::splice_evar( res, context[51], context[52] );
    res = refalrts::splice_elem( res, context[50] );
    res = refalrts::splice_elem( res, context[49] );
    refalrts::link_brackets( context[44], context[48] );
    res = refalrts::splice_elem( res, context[48] );
    res = refalrts::splice_evar( res, context[46], context[47] );
    res = refalrts::splice_elem( res, context[45] );
    res = refalrts::splice_elem( res, context[44] );
    refalrts::link_brackets( context[39], context[43] );
    res = refalrts::splice_elem( res, context[43] );
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_elem( res, context[40] );
    res = refalrts::splice_elem( res, context[39] );
    refalrts::link_brackets( context[34], context[38] );
    res = refalrts::splice_elem( res, context[38] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    res = refalrts::splice_elem( res, context[35] );
    res = refalrts::splice_elem( res, context[34] );
    refalrts::link_brackets( context[29], context[33] );
    res = refalrts::splice_elem( res, context[33] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_elem( res, context[29] );
    refalrts::link_brackets( context[24], context[28] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_evar( res, context[26], context[27] );
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
      // </21 & DoScan-BuildKeyword$2?1/25 e.Keywords-B#2/26 (/32 s.Tag#2/36 e.KeywordChars#1/34 )/33 e.Keywords-E#2/28 >/22
      context[23] = 0;
      context[24] = 0;
      context[25] = refalrts::call_left( context[23], context[24], context[21], context[22] );
      context[26] = 0;
      context[27] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[28] = context[23];
        context[29] = context[24];
        context[30] = 0;
        context[31] = 0;
        context[32] = refalrts::brackets_left( context[30], context[31], context[28], context[29] );
        if( ! context[32] )
          continue;
        refalrts::bracket_pointers(context[32], context[33]);
        if( ! refalrts::repeated_evar_right( vm, context[34], context[35], context[15], context[16], context[30], context[31] ) )
          continue;
        // closed e.Keywords-E#2 as range 28
        if( ! refalrts::svar_left( context[36], context[30], context[31] ) )
          continue;
        if( ! refalrts::empty_seq( context[30], context[31] ) )
          continue;
        //DEBUG: t.Pos#1: 5
        //DEBUG: e.KeywordChars#1: 15
        //DEBUG: e.Line#1: 17
        //DEBUG: e.Lines#1: 19
        //DEBUG: e.Keywords-B#2: 26
        //DEBUG: e.Keywords-E#2: 28
        //DEBUG: s.Tag#2: 36

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} & DoScan-BuildKeyword$2?1/25 e.Keywords-B#2/26 {REMOVED TILE} e.KeywordChars#1/34 {REMOVED TILE} e.Keywords-E#2/28 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/32 AsIs: s.Tag#2/36 } t.Pos#1/5/37 Tile{ AsIs: )/33 } Tile{ HalfReuse: </22 HalfReuse: & DoScan/1 } Tile{ AsIs: </0 Reuse: & IncCol/4 AsIs: t.Pos#1/5 HalfReuse: # Len/9 AsIs: e.KeywordChars#1/15 HalfReuse: >/10 AsIs: (/13 AsIs: e.Line#1/17 AsIs: )/14 AsIs: e.Lines#1/19 HalfReuse: >/21 } Tile{ ]] }
        refalrts::copy_evar(vm, context[37], context[38], context[5], context[6]);
        refalrts::reinit_open_call(context[22]);
        refalrts::reinit_name(context[1], functions[efunc_DoScan]);
        refalrts::update_name(context[4], functions[efunc_IncCol]);
        refalrts::reinit_ident(context[9], identifiers[ident_Len]);
        refalrts::reinit_close_call(context[10]);
        refalrts::reinit_close_call(context[21]);
        refalrts::push_stack( vm, context[21] );
        refalrts::push_stack( vm, context[22] );
        refalrts::link_brackets( context[13], context[14] );
        refalrts::push_stack( vm, context[10] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[32], context[33] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[0], context[21] );
        res = refalrts::splice_evar( res, context[22], context[1] );
        res = refalrts::splice_evar( res, context[33], context[33] );
        res = refalrts::splice_evar( res, context[37], context[38] );
        res = refalrts::splice_evar( res, context[32], context[36] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[26], context[27], context[23], context[24] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[21], context[22]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoScan-BuildKeyword/4 t.Pos#1/5 (/9 '$'/21 'E'/22 'A'/23 'S'/24 'T'/25 'E'/26 'R'/27 'E'/28 'G'/29 'G'/30 )/10 (/13 e.Line#1/17 )/14 e.Lines#1/19 >/1
    context[15] = context[7];
    context[16] = context[8];
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[2];
    context[20] = context[3];
    context[21] = refalrts::char_left( '$', context[15], context[16] );
    if( ! context[21] )
      continue;
    context[22] = refalrts::char_left( 'E', context[15], context[16] );
    if( ! context[22] )
      continue;
    context[23] = refalrts::char_left( 'A', context[15], context[16] );
    if( ! context[23] )
      continue;
    context[24] = refalrts::char_left( 'S', context[15], context[16] );
    if( ! context[24] )
      continue;
    context[25] = refalrts::char_left( 'T', context[15], context[16] );
    if( ! context[25] )
      continue;
    context[26] = refalrts::char_left( 'E', context[15], context[16] );
    if( ! context[26] )
      continue;
    context[27] = refalrts::char_left( 'R', context[15], context[16] );
    if( ! context[27] )
      continue;
    context[28] = refalrts::char_left( 'E', context[15], context[16] );
    if( ! context[28] )
      continue;
    context[29] = refalrts::char_left( 'G', context[15], context[16] );
    if( ! context[29] )
      continue;
    context[30] = refalrts::char_left( 'G', context[15], context[16] );
    if( ! context[30] )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    // closed e.Line#1 as range 17
    // closed e.Lines#1 as range 19
    //DEBUG: t.Pos#1: 5
    //DEBUG: e.Line#1: 17
    //DEBUG: e.Lines#1: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </31 & EasterEgg/32 t.Pos#1/5/33"Preved-oriented programming"/35 >/37 </38 & DoScan/39 Tile{ AsIs: </0 Reuse: & IncCol/4 AsIs: t.Pos#1/5 HalfReuse: # Len/9 AsIs: '$'/21 AsIs: 'E'/22 AsIs: 'A'/23 AsIs: 'S'/24 AsIs: 'T'/25 AsIs: 'E'/26 AsIs: 'R'/27 AsIs: 'E'/28 AsIs: 'G'/29 AsIs: 'G'/30 HalfReuse: >/10 AsIs: (/13 AsIs: e.Line#1/17 AsIs: )/14 AsIs: e.Lines#1/19 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[31]);
    refalrts::alloc_name(vm, context[32], functions[efunc_EasterEgg]);
    refalrts::copy_evar(vm, context[33], context[34], context[5], context[6]);
    refalrts::alloc_chars(vm, context[35], context[36], "Preved-oriented programming", 27);
    refalrts::alloc_close_call(vm, context[37]);
    refalrts::alloc_open_call(vm, context[38]);
    refalrts::alloc_name(vm, context[39], functions[efunc_DoScan]);
    refalrts::update_name(context[4], functions[efunc_IncCol]);
    refalrts::reinit_ident(context[9], identifiers[ident_Len]);
    refalrts::reinit_close_call(context[10]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[38] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[37] );
    refalrts::push_stack( vm, context[31] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[31], context[39] );
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

static refalrts::NativeReference nat_ref_DoScanm_BuildKeyword("DoScan-BuildKeyword", COOKIE1_, COOKIE2_, func_DoScanm_BuildKeyword);


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

static refalrts::NativeReference nat_ref_EasterEgg("EasterEgg", COOKIE1_, COOKIE2_, func_EasterEgg);


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
    // </0 & DoScan-Number$1:1/4 t.Pos#1/5 (/9 e.Number#1/20 )/10 s.Next#1/11 (/14 e.Line#1/22 )/15 (/18 e.Lines#1/24 )/19 s.Macrodigit#3/28 >/1
    context[20] = context[7];
    context[21] = context[8];
    context[22] = context[12];
    context[23] = context[13];
    context[24] = context[16];
    context[25] = context[17];
    context[26] = context[2];
    context[27] = context[3];
    // closed e.Number#1 as range 20
    // closed e.Line#1 as range 22
    // closed e.Lines#1 as range 24
    if( ! refalrts::svar_left( context[28], context[26], context[27] ) )
      continue;
    if( ! refalrts::empty_seq( context[26], context[27] ) )
      continue;
    //DEBUG: t.Pos#1: 5
    //DEBUG: s.Next#1: 11
    //DEBUG: e.Number#1: 20
    //DEBUG: e.Line#1: 22
    //DEBUG: e.Lines#1: 24
    //DEBUG: s.Macrodigit#3: 28

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Next#1/11 {REMOVED TILE} (/18 {REMOVED TILE} {REMOVED TILE} s.Macrodigit#3/28 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoScan-Number/4 AsIs: t.Pos#1/5 AsIs: (/9 AsIs: e.Number#1/20 HalfReuse: s.Next1 #11/10 } Tile{ AsIs: )/19 } Tile{ AsIs: (/14 AsIs: e.Line#1/22 AsIs: )/15 } Tile{ AsIs: e.Lines#1/24 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_DoScanm_Number]);
    refalrts::reinit_svar( context[10], context[11] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::link_brackets( context[9], context[19] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[24], context[25] );
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

static refalrts::NativeReference nat_ref_gen_DoScanm_Number_S1B1("DoScan-Number$1:1", COOKIE1_, COOKIE2_, func_gen_DoScanm_Number_S1B1);


static refalrts::FnResult func_DoScanm_Number(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
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
    // </0 & DoScan-Number/4 t.Pos#1/5 (/9 e.Number#1/15 )/10 (/13 s.Next#1/21 e.Line#1/17 )/14 e.Lines#1/19 >/1
    context[15] = context[7];
    context[16] = context[8];
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[2];
    context[20] = context[3];
    // closed e.Number#1 as range 15
    // closed e.Lines#1 as range 19
    if( ! refalrts::svar_left( context[21], context[17], context[18] ) )
      continue;
    // closed e.Line#1 as range 17
    //DEBUG: t.Pos#1: 5
    //DEBUG: e.Number#1: 15
    //DEBUG: e.Lines#1: 19
    //DEBUG: s.Next#1: 21
    //DEBUG: e.Line#1: 17
    //5: t.Pos#1
    //15: e.Number#1
    //17: e.Line#1
    //19: e.Lines#1
    //21: s.Next#1
    //27: s.Next#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[22]);
    refalrts::alloc_name(vm, context[24], functions[efunc_gen_DoScanm_Number_S1C1]);
    refalrts::alloc_open_call(vm, context[25]);
    refalrts::alloc_name(vm, context[26], functions[efunc_Type]);
    refalrts::copy_stvar(vm, context[27], context[21]);
    refalrts::alloc_close_call(vm, context[28]);
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[22] );
    res = refalrts::splice_elem( res, context[23] );
    refalrts::push_stack( vm, context[28] );
    refalrts::push_stack( vm, context[25] );
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
      // </22 & DoScan-Number$1?1/26 'D'/27 '0'/28 s.Next#1/29 >/23
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::call_left( context[24], context[25], context[22], context[23] );
      context[27] = refalrts::char_left( 'D', context[24], context[25] );
      if( ! context[27] )
        continue;
      context[28] = refalrts::char_left( '0', context[24], context[25] );
      if( ! context[28] )
        continue;
      if( ! refalrts::repeated_stvar_left( vm, context[29], context[21], context[24], context[25] ) )
        continue;
      if( ! refalrts::empty_seq( context[24], context[25] ) )
        continue;
      //DEBUG: t.Pos#1: 5
      //DEBUG: e.Number#1: 15
      //DEBUG: e.Lines#1: 19
      //DEBUG: s.Next#1: 21
      //DEBUG: e.Line#1: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Next#1/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoScan-Number$1:1/4 AsIs: t.Pos#1/5 AsIs: (/9 AsIs: e.Number#1/15 AsIs: )/10 HalfReuse: s.Next1 #29/13 } Tile{ HalfReuse: (/28 } Tile{ AsIs: e.Line#1/17 } )/30 Tile{ HalfReuse: (/14 AsIs: e.Lines#1/19 HalfReuse: )/22 HalfReuse: </26 HalfReuse: & Numb/27 } e.Number#1/15/31 Tile{ AsIs: s.Next#1/29 AsIs: >/23 AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[30]);
      refalrts::copy_evar(vm, context[31], context[32], context[15], context[16]);
      refalrts::update_name(context[4], functions[efunc_gen_DoScanm_Number_S1B1]);
      refalrts::reinit_svar( context[13], context[29] );
      refalrts::reinit_open_bracket(context[28]);
      refalrts::reinit_open_bracket(context[14]);
      refalrts::reinit_close_bracket(context[22]);
      refalrts::reinit_open_call(context[26]);
      refalrts::reinit_name(context[27], functions[efunc_Numb]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[26] );
      refalrts::link_brackets( context[14], context[22] );
      refalrts::link_brackets( context[28], context[30] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[29];
      res = refalrts::splice_evar( res, context[31], context[32] );
      res = refalrts::splice_evar( res, context[14], context[27] );
      res = refalrts::splice_evar( res, context[30], context[30] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[28], context[28] );
      refalrts::splice_to_freelist_open( vm, context[13], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[22], context[23]);
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

static refalrts::NativeReference nat_ref_DoScanm_Number("DoScan-Number", COOKIE1_, COOKIE2_, func_DoScanm_Number);


static refalrts::FnResult func_gen_DoScanm_Var_S2L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & DoScan-Var$2\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoScan-Var$2\1/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & DoScan-Var$2\1/4 t.Pos#1/5 '-'/9 e._#2/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[9] = refalrts::char_left( '-', context[7], context[8] );
    if( ! context[9] )
      continue;
    // closed e._#2 as range 7
    //DEBUG: t.Pos#1: 5
    //DEBUG: e._#2: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} e._#2/7 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkError/4 AsIs: t.Pos#1/5 Reuse: 'V'/9 }"ariable index can\'t start from \'-\'"/10 Tile{ HalfReuse: )/1 ]] }
    refalrts::alloc_chars(vm, context[10], context[11], "ariable index can\'t start from \'-\'", 34);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_TkError]);
    refalrts::update_char(context[9], 'V');
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::splice_to_freelist_open( vm, context[9], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoScan-Var$2\1/4 t.Pos#1/5 e._#2/2 >/1
  // closed e._#2 as range 2
  //DEBUG: t.Pos#1: 5
  //DEBUG: e._#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DoScan-Var$2\1/4 t.Pos#1/5 e._#2/2 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoScanm_Var_S2L1("DoScan-Var$2\\1", COOKIE1_, COOKIE2_, func_gen_DoScanm_Var_S2L1);


static refalrts::FnResult func_DoScanm_Var(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 42 elems
  refalrts::Iter context[42];
  refalrts::zeros( context, 42 );
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
    // </0 & DoScan-Var/4 t.Pos#1/5 (/9 e.Variable#1/15 )/10 (/13 s.Next#1/21 e.Line#1/17 )/14 e.Lines#1/19 >/1
    context[15] = context[7];
    context[16] = context[8];
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[2];
    context[20] = context[3];
    // closed e.Variable#1 as range 15
    // closed e.Lines#1 as range 19
    if( ! refalrts::svar_left( context[21], context[17], context[18] ) )
      continue;
    // closed e.Line#1 as range 17
    //DEBUG: t.Pos#1: 5
    //DEBUG: e.Variable#1: 15
    //DEBUG: e.Lines#1: 19
    //DEBUG: s.Next#1: 21
    //DEBUG: e.Line#1: 17
    //5: t.Pos#1
    //15: e.Variable#1
    //17: e.Line#1
    //19: e.Lines#1
    //21: s.Next#1
    //27: s.Next#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[22]);
    refalrts::alloc_name(vm, context[24], functions[efunc_gen_DoScanm_Var_S1C1]);
    refalrts::alloc_open_call(vm, context[25]);
    refalrts::alloc_name(vm, context[26], functions[efunc_IsIdentTail]);
    refalrts::copy_stvar(vm, context[27], context[21]);
    refalrts::alloc_close_call(vm, context[28]);
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[22] );
    res = refalrts::splice_elem( res, context[23] );
    refalrts::push_stack( vm, context[28] );
    refalrts::push_stack( vm, context[25] );
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
      // </22 & DoScan-Var$1?1/26 # True/27 >/23
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::call_left( context[24], context[25], context[22], context[23] );
      context[27] = refalrts::ident_left( identifiers[ident_True], context[24], context[25] );
      if( ! context[27] )
        continue;
      if( ! refalrts::empty_seq( context[24], context[25] ) )
        continue;
      //DEBUG: t.Pos#1: 5
      //DEBUG: e.Variable#1: 15
      //DEBUG: e.Lines#1: 19
      //DEBUG: s.Next#1: 21
      //DEBUG: e.Line#1: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Next#1/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # True/27 >/23 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoScan-Var/4 AsIs: t.Pos#1/5 AsIs: (/9 AsIs: e.Variable#1/15 HalfReuse: s.Next1 #21/10 HalfReuse: )/13 } Tile{ HalfReuse: (/26 } Tile{ AsIs: e.Line#1/17 } Tile{ AsIs: )/14 AsIs: e.Lines#1/19 HalfReuse: >/22 } Tile{ ]] }
      refalrts::reinit_svar( context[10], context[21] );
      refalrts::reinit_close_bracket(context[13]);
      refalrts::reinit_open_bracket(context[26]);
      refalrts::reinit_close_call(context[22]);
      refalrts::push_stack( vm, context[22] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[26], context[14] );
      refalrts::link_brackets( context[9], context[13] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[14], context[22] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[26], context[26] );
      refalrts::splice_to_freelist_open( vm, context[13], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[22], context[23]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoScan-Var/4 t.new#5/5 (/9 s.new#7/15 '.'/16 e.new#8/7 )/10 (/13 e.new#9/11 )/14 e.new#6/2 >/1
  // closed e.new#9 as range 11
  // closed e.new#6 as range 2
  if( ! refalrts::svar_left( context[15], context[7], context[8] ) )
    return refalrts::cRecognitionImpossible;
  context[16] = refalrts::char_left( '.', context[7], context[8] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#8 as range 7
  do {
    // </0 & DoScan-Var/4 t.Pos#1/5 (/9 s.Type#1/15 '.'/16 '-'/23 e.#0/17 )/10 (/13 e.Line#1/19 )/14 e.Lines#1/21 >/1
    context[17] = context[7];
    context[18] = context[8];
    context[19] = context[11];
    context[20] = context[12];
    context[21] = context[2];
    context[22] = context[3];
    context[23] = refalrts::char_left( '-', context[17], context[18] );
    if( ! context[23] )
      continue;
    // closed e.#0 as range 17
    // closed e.Line#1 as range 19
    // closed e.Lines#1 as range 21
    //DEBUG: t.Pos#1: 5
    //DEBUG: s.Type#1: 15
    //DEBUG: e.#0: 17
    //DEBUG: e.Line#1: 19
    //DEBUG: e.Lines#1: 21

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/24 # TkVariable/25 t.Pos#1/5/26 s.Type#1/15/28 '-'/29 e.#0/17/30 )/32 (/33 # TkError/34 t.Pos#1/5/35"Variable index can\'t start from \'-\'"/37 )/39 </40 & DoScan/41 Tile{ AsIs: </0 Reuse: & IncCol/4 AsIs: t.Pos#1/5 HalfReuse: # Len/9 AsIs: s.Type#1/15 AsIs: '.'/16 AsIs: '-'/23 AsIs: e.#0/17 HalfReuse: >/10 AsIs: (/13 AsIs: e.Line#1/19 AsIs: )/14 AsIs: e.Lines#1/21 AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[24]);
    refalrts::alloc_ident(vm, context[25], identifiers[ident_TkVariable]);
    refalrts::copy_evar(vm, context[26], context[27], context[5], context[6]);
    refalrts::copy_stvar(vm, context[28], context[15]);
    refalrts::alloc_char(vm, context[29], '-');
    refalrts::copy_evar(vm, context[30], context[31], context[17], context[18]);
    refalrts::alloc_close_bracket(vm, context[32]);
    refalrts::alloc_open_bracket(vm, context[33]);
    refalrts::alloc_ident(vm, context[34], identifiers[ident_TkError]);
    refalrts::copy_evar(vm, context[35], context[36], context[5], context[6]);
    refalrts::alloc_chars(vm, context[37], context[38], "Variable index can\'t start from \'-\'", 35);
    refalrts::alloc_close_bracket(vm, context[39]);
    refalrts::alloc_open_call(vm, context[40]);
    refalrts::alloc_name(vm, context[41], functions[efunc_DoScan]);
    refalrts::update_name(context[4], functions[efunc_IncCol]);
    refalrts::reinit_ident(context[9], identifiers[ident_Len]);
    refalrts::reinit_close_call(context[10]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[40] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[33], context[39] );
    refalrts::link_brackets( context[24], context[32] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[24], context[41] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoScan-Var/4 t.Pos#1/5 (/9 s.Type#1/15 '.'/16 e.Index#1/7 )/10 (/13 e.Line#1/11 )/14 e.Lines#1/2 >/1
  // closed e.Index#1 as range 7
  // closed e.Line#1 as range 11
  // closed e.Lines#1 as range 2
  //DEBUG: t.Pos#1: 5
  //DEBUG: s.Type#1: 15
  //DEBUG: e.Index#1: 7
  //DEBUG: e.Line#1: 11
  //DEBUG: e.Lines#1: 2

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

static refalrts::NativeReference nat_ref_DoScanm_Var("DoScan-Var", COOKIE1_, COOKIE2_, func_DoScanm_Var);


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

static refalrts::NativeReference nat_ref_gen_IsIdentTail_S3B1("IsIdentTail$3:1", COOKIE1_, COOKIE2_, func_gen_IsIdentTail_S3B1);


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

static refalrts::NativeReference nat_ref_IsIdentTail("IsIdentTail", COOKIE1_, COOKIE2_, func_IsIdentTail);


static refalrts::FnResult func_DoScanm_CComment(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
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
    // </0 & DoScan-CComment/4 t.new#4/5 (/9 e.new#7/11 )/10 (/17 e.new#5/15 )/18 e.new#6/13 >/1
    context[11] = context[7];
    context[12] = context[8];
    context[13] = context[2];
    context[14] = context[3];
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[13], context[14] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    // closed e.new#7 as range 11
    // closed e.new#5 as range 15
    // closed e.new#6 as range 13
    do {
      // </0 & DoScan-CComment/4 t.new#8/5 (/9 e.new#12/19 )/10 (/17 s.new#10/25 e.new#11/21 )/18 e.new#9/23 >/1
      context[19] = context[11];
      context[20] = context[12];
      context[21] = context[15];
      context[22] = context[16];
      context[23] = context[13];
      context[24] = context[14];
      // closed e.new#12 as range 19
      // closed e.new#9 as range 23
      if( ! refalrts::svar_left( context[25], context[21], context[22] ) )
        continue;
      // closed e.new#11 as range 21
      do {
        // </0 & DoScan-CComment/4 t.Pos#1/5 (/9 e.Comment#1/26 )/10 (/17 '*'/25 '/'/32 e.Line#1/28 )/18 e.Lines#1/30 >/1
        context[26] = context[19];
        context[27] = context[20];
        context[28] = context[21];
        context[29] = context[22];
        context[30] = context[23];
        context[31] = context[24];
        if( ! refalrts::char_term( '*', context[25] ) )
          continue;
        context[32] = refalrts::char_left( '/', context[28], context[29] );
        if( ! context[32] )
          continue;
        // closed e.Comment#1 as range 26
        // closed e.Line#1 as range 28
        // closed e.Lines#1 as range 30
        //DEBUG: t.Pos#1: 5
        //DEBUG: e.Comment#1: 26
        //DEBUG: e.Line#1: 28
        //DEBUG: e.Lines#1: 30

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } </33 & DoScan/34 Tile{ AsIs: </0 Reuse: & IncCol/4 AsIs: t.Pos#1/5 HalfReuse: # Len/9 AsIs: e.Comment#1/26 HalfReuse: '*'/10 HalfReuse: '/'/17 HalfReuse: >/25 HalfReuse: (/32 AsIs: e.Line#1/28 AsIs: )/18 AsIs: e.Lines#1/30 AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[33]);
        refalrts::alloc_name(vm, context[34], functions[efunc_DoScan]);
        refalrts::update_name(context[4], functions[efunc_IncCol]);
        refalrts::reinit_ident(context[9], identifiers[ident_Len]);
        refalrts::reinit_char(context[10], '*');
        refalrts::reinit_char(context[17], '/');
        refalrts::reinit_close_call(context[25]);
        refalrts::reinit_open_bracket(context[32]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[33] );
        refalrts::link_brackets( context[32], context[18] );
        refalrts::push_stack( vm, context[25] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[0];
        res = refalrts::splice_evar( res, context[33], context[34] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoScan-CComment/4 t.Pos#1/5 (/9 e.Comment#1/26 )/10 (/17 s.Char#1/25 e.Line#1/28 )/18 e.Lines#1/30 >/1
      context[26] = context[19];
      context[27] = context[20];
      context[28] = context[21];
      context[29] = context[22];
      context[30] = context[23];
      context[31] = context[24];
      // closed e.Comment#1 as range 26
      // closed e.Line#1 as range 28
      // closed e.Lines#1 as range 30
      //DEBUG: t.Pos#1: 5
      //DEBUG: s.Char#1: 25
      //DEBUG: e.Comment#1: 26
      //DEBUG: e.Line#1: 28
      //DEBUG: e.Lines#1: 30

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Char#1/25 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoScan-CComment/4 AsIs: t.Pos#1/5 AsIs: (/9 AsIs: e.Comment#1/26 HalfReuse: s.Char1 #25/10 HalfReuse: )/17 } (/32 Tile{ AsIs: e.Line#1/28 } Tile{ AsIs: )/18 AsIs: e.Lines#1/30 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[32]);
      refalrts::reinit_svar( context[10], context[25] );
      refalrts::reinit_close_bracket(context[17]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[32], context[18] );
      refalrts::link_brackets( context[9], context[17] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[18];
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_evar( res, context[32], context[32] );
      refalrts::splice_to_freelist_open( vm, context[17], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoScan-CComment/4 t.Pos#1/5 (/9 e.Comment#1/19 )/10 (/17 )/18 e.Lines#1/21 >/1
    context[19] = context[11];
    context[20] = context[12];
    context[21] = context[13];
    context[22] = context[14];
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    // closed e.Comment#1 as range 19
    // closed e.Lines#1 as range 21
    //DEBUG: t.Pos#1: 5
    //DEBUG: e.Comment#1: 19
    //DEBUG: e.Lines#1: 21

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Comment#1/19 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoScan-CComment/4 } </23 Tile{ HalfReuse: & IncLine/9 } Tile{ AsIs: t.Pos#1/5 } Tile{ HalfReuse: >/10 AsIs: (/17 AsIs: )/18 AsIs: e.Lines#1/21 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::reinit_name(context[9], functions[efunc_IncLine]);
    refalrts::reinit_close_call(context[10]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[23] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[23], context[23] );
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

static refalrts::NativeReference nat_ref_DoScanm_CComment("DoScan-CComment", COOKIE1_, COOKIE2_, func_DoScanm_CComment);


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

static refalrts::NativeReference nat_ref_DoScanm_NativeCode("DoScan-NativeCode", COOKIE1_, COOKIE2_, func_DoScanm_NativeCode);


static refalrts::FnResult func_DoScanm_DoNativeCode(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
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
    // </0 & DoScan-DoNativeCode/4 t.StartPos#1/5 t.Pos#1/7 (/11 e.Collected#1/13 )/12 (/19 '%'/21 '%'/22 )/20 e.Lines#1/15 >/1
    context[13] = context[9];
    context[14] = context[10];
    context[15] = context[2];
    context[16] = context[3];
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[15], context[16] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = refalrts::char_left( '%', context[17], context[18] );
    if( ! context[21] )
      continue;
    context[22] = refalrts::char_left( '%', context[17], context[18] );
    if( ! context[22] )
      continue;
    if( ! refalrts::empty_seq( context[17], context[18] ) )
      continue;
    // closed e.Collected#1 as range 13
    // closed e.Lines#1 as range 15
    //DEBUG: t.StartPos#1: 5
    //DEBUG: t.Pos#1: 7
    //DEBUG: e.Collected#1: 13
    //DEBUG: e.Lines#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkNativeCode/4 AsIs: t.StartPos#1/5 } Tile{ AsIs: e.Collected#1/13 } Tile{ AsIs: )/12 HalfReuse: </19 HalfReuse: & DoScan/21 HalfReuse: </22 } Tile{ HalfReuse: & IncLine/11 } Tile{ AsIs: t.Pos#1/7 } Tile{ HalfReuse: >/20 AsIs: e.Lines#1/15 AsIs: >/1 ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_TkNativeCode]);
    refalrts::reinit_open_call(context[19]);
    refalrts::reinit_name(context[21], functions[efunc_DoScan]);
    refalrts::reinit_open_call(context[22]);
    refalrts::reinit_name(context[11], functions[efunc_IncLine]);
    refalrts::reinit_close_call(context[20]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[22] );
    refalrts::link_brackets( context[0], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[20];
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[12], context[22] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoScan-DoNativeCode/4 t.StartPos#1/5 t.Pos#1/7 (/11 e.Collected#1/13 )/12 >/1
    context[13] = context[9];
    context[14] = context[10];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Collected#1 as range 13
    //DEBUG: t.StartPos#1: 5
    //DEBUG: t.Pos#1: 7
    //DEBUG: e.Collected#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkNativeCode/4 AsIs: t.StartPos#1/5 } Tile{ AsIs: e.Collected#1/13 } Tile{ AsIs: )/12 HalfReuse: (/1 } # TkError/15 Tile{ AsIs: t.Pos#1/7 HalfReuse: 'U'/11 }"nexpected EOF, unclosed native code insertion"/16 )/18 (/19 # TkEOF/20 t.Pos#1/7/21 )/23 Tile{ ]] }
    refalrts::alloc_ident(vm, context[15], identifiers[ident_TkError]);
    refalrts::alloc_chars(vm, context[16], context[17], "nexpected EOF, unclosed native code insertion", 45);
    refalrts::alloc_close_bracket(vm, context[18]);
    refalrts::alloc_open_bracket(vm, context[19]);
    refalrts::alloc_ident(vm, context[20], identifiers[ident_TkEOF]);
    refalrts::copy_evar(vm, context[21], context[22], context[7], context[8]);
    refalrts::alloc_close_bracket(vm, context[23]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_TkNativeCode]);
    refalrts::reinit_open_bracket(context[1]);
    refalrts::reinit_char(context[11], 'U');
    refalrts::link_brackets( context[19], context[23] );
    refalrts::link_brackets( context[1], context[18] );
    refalrts::link_brackets( context[0], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[16], context[23] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[12], context[1] );
    res = refalrts::splice_evar( res, context[13], context[14] );
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

static refalrts::NativeReference nat_ref_DoScanm_DoNativeCode("DoScan-DoNativeCode", COOKIE1_, COOKIE2_, func_DoScanm_DoNativeCode);


static refalrts::FnResult func_DoScanm_Ident(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
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
    // </0 & DoScan-Ident/4 t.Pos#1/5 (/9 e.Ident#1/15 )/10 (/13 s.Next#1/21 e.Line#1/17 )/14 e.Lines#1/19 >/1
    context[15] = context[7];
    context[16] = context[8];
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[2];
    context[20] = context[3];
    // closed e.Ident#1 as range 15
    // closed e.Lines#1 as range 19
    if( ! refalrts::svar_left( context[21], context[17], context[18] ) )
      continue;
    // closed e.Line#1 as range 17
    //DEBUG: t.Pos#1: 5
    //DEBUG: e.Ident#1: 15
    //DEBUG: e.Lines#1: 19
    //DEBUG: s.Next#1: 21
    //DEBUG: e.Line#1: 17
    //5: t.Pos#1
    //15: e.Ident#1
    //17: e.Line#1
    //19: e.Lines#1
    //21: s.Next#1
    //27: s.Next#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[22]);
    refalrts::alloc_name(vm, context[24], functions[efunc_gen_DoScanm_Ident_S1C1]);
    refalrts::alloc_open_call(vm, context[25]);
    refalrts::alloc_name(vm, context[26], functions[efunc_IsIdentTail]);
    refalrts::copy_stvar(vm, context[27], context[21]);
    refalrts::alloc_close_call(vm, context[28]);
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[22] );
    res = refalrts::splice_elem( res, context[23] );
    refalrts::push_stack( vm, context[28] );
    refalrts::push_stack( vm, context[25] );
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
      // </22 & DoScan-Ident$1?1/26 # True/27 >/23
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::call_left( context[24], context[25], context[22], context[23] );
      context[27] = refalrts::ident_left( identifiers[ident_True], context[24], context[25] );
      if( ! context[27] )
        continue;
      if( ! refalrts::empty_seq( context[24], context[25] ) )
        continue;
      //DEBUG: t.Pos#1: 5
      //DEBUG: e.Ident#1: 15
      //DEBUG: e.Lines#1: 19
      //DEBUG: s.Next#1: 21
      //DEBUG: e.Line#1: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Next#1/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # True/27 >/23 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoScan-Ident/4 AsIs: t.Pos#1/5 AsIs: (/9 AsIs: e.Ident#1/15 HalfReuse: s.Next1 #21/10 HalfReuse: )/13 } Tile{ HalfReuse: (/26 } Tile{ AsIs: e.Line#1/17 } Tile{ AsIs: )/14 AsIs: e.Lines#1/19 HalfReuse: >/22 } Tile{ ]] }
      refalrts::reinit_svar( context[10], context[21] );
      refalrts::reinit_close_bracket(context[13]);
      refalrts::reinit_open_bracket(context[26]);
      refalrts::reinit_close_call(context[22]);
      refalrts::push_stack( vm, context[22] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[26], context[14] );
      refalrts::link_brackets( context[9], context[13] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[14], context[22] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[26], context[26] );
      refalrts::splice_to_freelist_open( vm, context[13], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[22], context[23]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoScan-Ident/4 t.new#5/5 (/9 s.new#7/21 e.new#8/15 )/10 (/13 e.new#9/17 )/14 e.new#6/19 >/1
    context[15] = context[7];
    context[16] = context[8];
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[2];
    context[20] = context[3];
    // closed e.new#9 as range 17
    // closed e.new#6 as range 19
    if( ! refalrts::svar_left( context[21], context[15], context[16] ) )
      continue;
    // closed e.new#8 as range 15
    do {
      // </0 & DoScan-Ident/4 t.Pos#1/5 (/9 '<'/21 e.Ident#1/22 )/10 (/13 e.Line#1/24 )/14 e.Lines#1/26 >/1
      context[22] = context[15];
      context[23] = context[16];
      context[24] = context[17];
      context[25] = context[18];
      context[26] = context[19];
      context[27] = context[20];
      if( ! refalrts::char_term( '<', context[21] ) )
        continue;
      // closed e.Ident#1 as range 22
      // closed e.Line#1 as range 24
      // closed e.Lines#1 as range 26
      //DEBUG: t.Pos#1: 5
      //DEBUG: e.Ident#1: 22
      //DEBUG: e.Line#1: 24
      //DEBUG: e.Lines#1: 26

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/28 # TkOpenCall/29 t.Pos#1/5/30 e.Ident#1/22/32 )/34 </35 & DoScan/36 Tile{ AsIs: </0 Reuse: & IncCol/4 AsIs: t.Pos#1/5 HalfReuse: # Len/9 AsIs: '<'/21 AsIs: e.Ident#1/22 HalfReuse: >/10 AsIs: (/13 AsIs: e.Line#1/24 AsIs: )/14 AsIs: e.Lines#1/26 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[28]);
      refalrts::alloc_ident(vm, context[29], identifiers[ident_TkOpenCall]);
      refalrts::copy_evar(vm, context[30], context[31], context[5], context[6]);
      refalrts::copy_evar(vm, context[32], context[33], context[22], context[23]);
      refalrts::alloc_close_bracket(vm, context[34]);
      refalrts::alloc_open_call(vm, context[35]);
      refalrts::alloc_name(vm, context[36], functions[efunc_DoScan]);
      refalrts::update_name(context[4], functions[efunc_IncCol]);
      refalrts::reinit_ident(context[9], identifiers[ident_Len]);
      refalrts::reinit_close_call(context[10]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[35] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::push_stack( vm, context[10] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[28], context[34] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[0];
      res = refalrts::splice_evar( res, context[28], context[36] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoScan-Ident/4 t.Pos#1/5 (/9 '['/21 e.Ident#1/22 )/10 (/13 e.Line#1/24 )/14 e.Lines#1/26 >/1
    context[22] = context[15];
    context[23] = context[16];
    context[24] = context[17];
    context[25] = context[18];
    context[26] = context[19];
    context[27] = context[20];
    if( ! refalrts::char_term( '[', context[21] ) )
      continue;
    // closed e.Ident#1 as range 22
    // closed e.Line#1 as range 24
    // closed e.Lines#1 as range 26
    //DEBUG: t.Pos#1: 5
    //DEBUG: e.Ident#1: 22
    //DEBUG: e.Line#1: 24
    //DEBUG: e.Lines#1: 26

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/28 # TkOpenADT/29 t.Pos#1/5/30 e.Ident#1/22/32 )/34 </35 & DoScan/36 Tile{ AsIs: </0 Reuse: & IncCol/4 AsIs: t.Pos#1/5 HalfReuse: # Len/9 AsIs: '['/21 AsIs: e.Ident#1/22 HalfReuse: >/10 AsIs: (/13 AsIs: e.Line#1/24 AsIs: )/14 AsIs: e.Lines#1/26 AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[28]);
    refalrts::alloc_ident(vm, context[29], identifiers[ident_TkOpenADT]);
    refalrts::copy_evar(vm, context[30], context[31], context[5], context[6]);
    refalrts::copy_evar(vm, context[32], context[33], context[22], context[23]);
    refalrts::alloc_close_bracket(vm, context[34]);
    refalrts::alloc_open_call(vm, context[35]);
    refalrts::alloc_name(vm, context[36], functions[efunc_DoScan]);
    refalrts::update_name(context[4], functions[efunc_IncCol]);
    refalrts::reinit_ident(context[9], identifiers[ident_Len]);
    refalrts::reinit_close_call(context[10]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[35] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[28], context[34] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[28], context[36] );
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

static refalrts::NativeReference nat_ref_DoScanm_Ident("DoScan-Ident", COOKIE1_, COOKIE2_, func_DoScanm_Ident);


static refalrts::FnResult func_DoScanm_Chars(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
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
    // </0 & DoScan-Chars/4 t.new#4/5 (/9 s.new#6/15 e.new#7/11 )/10 e.new#5/13 >/1
    context[11] = context[7];
    context[12] = context[8];
    context[13] = context[2];
    context[14] = context[3];
    // closed e.new#5 as range 13
    if( ! refalrts::svar_left( context[15], context[11], context[12] ) )
      continue;
    // closed e.new#7 as range 11
    do {
      // </0 & DoScan-Chars/4 t.Pos#1/5 (/9 '\\'/15 e.Line#1/16 )/10 e.Lines#1/18 >/1
      context[16] = context[11];
      context[17] = context[12];
      context[18] = context[13];
      context[19] = context[14];
      if( ! refalrts::char_term( '\\', context[15] ) )
        continue;
      // closed e.Line#1 as range 16
      // closed e.Lines#1 as range 18
      //DEBUG: t.Pos#1: 5
      //DEBUG: e.Line#1: 16
      //DEBUG: e.Lines#1: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/9 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoScan-Chars-Escape/4 AsIs: t.Pos#1/5 } Tile{ HalfReuse: (/15 AsIs: e.Line#1/16 AsIs: )/10 AsIs: e.Lines#1/18 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_DoScanm_Charsm_Escape]);
      refalrts::reinit_open_bracket(context[15]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[15], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[15];
      refalrts::splice_to_freelist_open( vm, context[6], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoScan-Chars/4 t.Pos#1/5 (/9 '\''/15 e.Line#1/16 )/10 e.Lines#1/18 >/1
      context[16] = context[11];
      context[17] = context[12];
      context[18] = context[13];
      context[19] = context[14];
      if( ! refalrts::char_term( '\'', context[15] ) )
        continue;
      // closed e.Line#1 as range 16
      // closed e.Lines#1 as range 18
      //DEBUG: t.Pos#1: 5
      //DEBUG: e.Line#1: 16
      //DEBUG: e.Lines#1: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </20 & DoScan/21 Tile{ AsIs: </0 Reuse: & IncCol/4 AsIs: t.Pos#1/5 HalfReuse: >/9 HalfReuse: (/15 AsIs: e.Line#1/16 AsIs: )/10 AsIs: e.Lines#1/18 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[20]);
      refalrts::alloc_name(vm, context[21], functions[efunc_DoScan]);
      refalrts::update_name(context[4], functions[efunc_IncCol]);
      refalrts::reinit_close_call(context[9]);
      refalrts::reinit_open_bracket(context[15]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[20] );
      refalrts::link_brackets( context[15], context[10] );
      refalrts::push_stack( vm, context[9] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[0];
      res = refalrts::splice_evar( res, context[20], context[21] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoScan-Chars/4 t.Pos#1/5 (/9 s.Char#1/15 e.Line#1/16 )/10 e.Lines#1/18 >/1
    context[16] = context[11];
    context[17] = context[12];
    context[18] = context[13];
    context[19] = context[14];
    // closed e.Line#1 as range 16
    // closed e.Lines#1 as range 18
    //DEBUG: t.Pos#1: 5
    //DEBUG: s.Char#1: 15
    //DEBUG: e.Line#1: 16
    //DEBUG: e.Lines#1: 18

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/20 # TkChar/21 t.Pos#1/5/22 Tile{ AsIs: s.Char#1/15 } )/24 </25 & DoScan-Chars/26 Tile{ AsIs: </0 Reuse: & IncCol/4 AsIs: t.Pos#1/5 HalfReuse: >/9 } (/27 Tile{ AsIs: e.Line#1/16 } Tile{ AsIs: )/10 AsIs: e.Lines#1/18 AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[20]);
    refalrts::alloc_ident(vm, context[21], identifiers[ident_TkChar]);
    refalrts::copy_evar(vm, context[22], context[23], context[5], context[6]);
    refalrts::alloc_close_bracket(vm, context[24]);
    refalrts::alloc_open_call(vm, context[25]);
    refalrts::alloc_name(vm, context[26], functions[efunc_DoScanm_Chars]);
    refalrts::alloc_open_bracket(vm, context[27]);
    refalrts::update_name(context[4], functions[efunc_IncCol]);
    refalrts::reinit_close_call(context[9]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[25] );
    refalrts::link_brackets( context[27], context[10] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[20], context[24] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[27], context[27] );
    res = refalrts::splice_evar( res, context[0], context[9] );
    res = refalrts::splice_evar( res, context[24], context[26] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[20], context[23] );
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

static refalrts::NativeReference nat_ref_DoScanm_Chars("DoScan-Chars", COOKIE1_, COOKIE2_, func_DoScanm_Chars);


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

static refalrts::NativeReference nat_ref_gen_SimpleEscapedChar_B1("SimpleEscapedChar:1", COOKIE1_, COOKIE2_, func_gen_SimpleEscapedChar_B1);


static refalrts::FnResult func_SimpleEscapedChar(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 46 elems
  refalrts::Iter context[46];
  refalrts::zeros( context, 46 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & SimpleEscapedChar:1/4 AsIs: s.Escaped#1/5 HalfReuse: (/1 }"\'\'"/6 )/8 (/9"\"\""/10 )/12 (/13"\\\\"/14 )/16 (/17"n\n"/18 )/20 (/21"r\r"/22 )/24 (/25"t\t"/26 )/28 (/29"(("/30 )/32 (/33"))"/34 )/36 (/37"<<"/38 )/40 (/41">>"/42 )/44 >/45 Tile{ ]] }
  refalrts::alloc_chars(vm, context[6], context[7], "\'\'", 2);
  refalrts::alloc_close_bracket(vm, context[8]);
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_chars(vm, context[10], context[11], "\"\"", 2);
  refalrts::alloc_close_bracket(vm, context[12]);
  refalrts::alloc_open_bracket(vm, context[13]);
  refalrts::alloc_chars(vm, context[14], context[15], "\\\\", 2);
  refalrts::alloc_close_bracket(vm, context[16]);
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::alloc_chars(vm, context[18], context[19], "n\n", 2);
  refalrts::alloc_close_bracket(vm, context[20]);
  refalrts::alloc_open_bracket(vm, context[21]);
  refalrts::alloc_chars(vm, context[22], context[23], "r\r", 2);
  refalrts::alloc_close_bracket(vm, context[24]);
  refalrts::alloc_open_bracket(vm, context[25]);
  refalrts::alloc_chars(vm, context[26], context[27], "t\t", 2);
  refalrts::alloc_close_bracket(vm, context[28]);
  refalrts::alloc_open_bracket(vm, context[29]);
  refalrts::alloc_chars(vm, context[30], context[31], "((", 2);
  refalrts::alloc_close_bracket(vm, context[32]);
  refalrts::alloc_open_bracket(vm, context[33]);
  refalrts::alloc_chars(vm, context[34], context[35], "))", 2);
  refalrts::alloc_close_bracket(vm, context[36]);
  refalrts::alloc_open_bracket(vm, context[37]);
  refalrts::alloc_chars(vm, context[38], context[39], "<<", 2);
  refalrts::alloc_close_bracket(vm, context[40]);
  refalrts::alloc_open_bracket(vm, context[41]);
  refalrts::alloc_chars(vm, context[42], context[43], ">>", 2);
  refalrts::alloc_close_bracket(vm, context[44]);
  refalrts::alloc_close_call(vm, context[45]);
  refalrts::update_name(context[4], functions[efunc_gen_SimpleEscapedChar_B1]);
  refalrts::reinit_open_bracket(context[1]);
  refalrts::push_stack( vm, context[45] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[41], context[44] );
  refalrts::link_brackets( context[37], context[40] );
  refalrts::link_brackets( context[33], context[36] );
  refalrts::link_brackets( context[29], context[32] );
  refalrts::link_brackets( context[25], context[28] );
  refalrts::link_brackets( context[21], context[24] );
  refalrts::link_brackets( context[17], context[20] );
  refalrts::link_brackets( context[13], context[16] );
  refalrts::link_brackets( context[9], context[12] );
  refalrts::link_brackets( context[1], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[45] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SimpleEscapedChar("SimpleEscapedChar", COOKIE1_, COOKIE2_, func_SimpleEscapedChar);


static refalrts::FnResult func_ScanEscape(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 40 elems
  refalrts::Iter context[40];
  refalrts::zeros( context, 40 );
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
      // </0 & ScanEscape/4 t.Pos#1/5 s.Escaped#1/9 e.Line#1/10 >/1
      context[10] = context[7];
      context[11] = context[8];
      // closed e.Line#1 as range 10
      //DEBUG: t.Pos#1: 5
      //DEBUG: s.Escaped#1: 9
      //DEBUG: e.Line#1: 10
      //5: t.Pos#1
      //9: s.Escaped#1
      //10: e.Line#1
      //17: s.Escaped#1

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[12]);
      refalrts::alloc_name(vm, context[14], functions[efunc_gen_ScanEscape_S1C1]);
      refalrts::alloc_open_call(vm, context[15]);
      refalrts::alloc_name(vm, context[16], functions[efunc_SimpleEscapedChar]);
      refalrts::copy_stvar(vm, context[17], context[9]);
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
        // </12 & ScanEscape$1?1/16 s.Char#2/17 >/13
        context[14] = 0;
        context[15] = 0;
        context[16] = refalrts::call_left( context[14], context[15], context[12], context[13] );
        if( ! refalrts::svar_left( context[17], context[14], context[15] ) )
          continue;
        if( ! refalrts::empty_seq( context[14], context[15] ) )
          continue;
        //DEBUG: t.Pos#1: 5
        //DEBUG: s.Escaped#1: 9
        //DEBUG: e.Line#1: 10
        //DEBUG: s.Char#2: 17

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkChar/4 AsIs: t.Pos#1/5 } Tile{ AsIs: s.Char#2/17 HalfReuse: )/13 HalfReuse: </1 } & IncCol/18 t.Pos#1/5/19 Tile{ HalfReuse: # Len/12 HalfReuse: '\\'/16 } Tile{ AsIs: s.Escaped#1/9 } >/21 Tile{ AsIs: e.Line#1/10 } Tile{ ]] }
        refalrts::alloc_name(vm, context[18], functions[efunc_IncCol]);
        refalrts::copy_evar(vm, context[19], context[20], context[5], context[6]);
        refalrts::alloc_close_call(vm, context[21]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_ident(context[4], identifiers[ident_TkChar]);
        refalrts::reinit_close_bracket(context[13]);
        refalrts::reinit_open_call(context[1]);
        refalrts::reinit_ident(context[12], identifiers[ident_Len]);
        refalrts::reinit_char(context[16], '\\');
        refalrts::push_stack( vm, context[21] );
        refalrts::push_stack( vm, context[1] );
        refalrts::link_brackets( context[0], context[13] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[10], context[11] );
        res = refalrts::splice_evar( res, context[21], context[21] );
        res = refalrts::splice_evar( res, context[9], context[9] );
        res = refalrts::splice_evar( res, context[12], context[16] );
        res = refalrts::splice_evar( res, context[18], context[20] );
        res = refalrts::splice_evar( res, context[17], context[1] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[12], context[13]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ScanEscape/4 t.new#6/5 'x'/9 e.new#7/10 >/1
      context[10] = context[7];
      context[11] = context[8];
      if( ! refalrts::char_term( 'x', context[9] ) )
        continue;
      // closed e.new#7 as range 10
      do {
        // </0 & ScanEscape/4 t.Pos#1/5 'x'/9 s.Hex1#1/14 s.Hex2#1/15 e.Line#1/12 >/1
        context[12] = context[10];
        context[13] = context[11];
        if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
          continue;
        if( ! refalrts::svar_left( context[15], context[12], context[13] ) )
          continue;
        // closed e.Line#1 as range 12
        //DEBUG: t.Pos#1: 5
        //DEBUG: s.Hex1#1: 14
        //DEBUG: s.Hex2#1: 15
        //DEBUG: e.Line#1: 12
        //5: t.Pos#1
        //12: e.Line#1
        //14: s.Hex1#1
        //15: s.Hex2#1
        //21: s.Hex1#1

        refalrts::reset_allocator(vm);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::alloc_open_call(vm, context[16]);
        refalrts::alloc_name(vm, context[18], functions[efunc_gen_ScanEscape_S2C1]);
        refalrts::alloc_open_call(vm, context[19]);
        refalrts::alloc_name(vm, context[20], functions[efunc_HexDigit]);
        refalrts::copy_stvar(vm, context[21], context[14]);
        refalrts::alloc_close_call(vm, context[22]);
        refalrts::alloc_close_call(vm, context[17]);
        refalrts::push_stack( vm, context[17] );
        refalrts::push_stack( vm, context[16] );
        res = refalrts::splice_elem( res, context[17] );
        refalrts::push_stack( vm, context[22] );
        refalrts::push_stack( vm, context[19] );
        res = refalrts::splice_elem( res, context[22] );
        res = refalrts::splice_stvar( res, context[21] );
        res = refalrts::splice_elem( res, context[20] );
        res = refalrts::splice_elem( res, context[19] );
        res = refalrts::splice_elem( res, context[18] );
        res = refalrts::splice_elem( res, context[16] );
        refalrts::use( res );
        refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
        if (rec_res != refalrts::cSuccess)
          return rec_res;
        refalrts::this_is_generated_function(vm);
        do {
          // </16 & ScanEscape$2?1/20 s.Num1#2/21 >/17
          context[18] = 0;
          context[19] = 0;
          context[20] = refalrts::call_left( context[18], context[19], context[16], context[17] );
          if( ! refalrts::svar_left( context[21], context[18], context[19] ) )
            continue;
          if( ! refalrts::empty_seq( context[18], context[19] ) )
            continue;
          //DEBUG: t.Pos#1: 5
          //DEBUG: s.Hex1#1: 14
          //DEBUG: s.Hex2#1: 15
          //DEBUG: e.Line#1: 12
          //DEBUG: s.Num1#2: 21
          //5: t.Pos#1
          //12: e.Line#1
          //14: s.Hex1#1
          //15: s.Hex2#1
          //21: s.Num1#2
          //27: s.Hex2#1

          refalrts::reset_allocator(vm);
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          refalrts::alloc_open_call(vm, context[22]);
          refalrts::alloc_name(vm, context[24], functions[efunc_gen_ScanEscape_S2C2]);
          refalrts::alloc_open_call(vm, context[25]);
          refalrts::alloc_name(vm, context[26], functions[efunc_HexDigit]);
          refalrts::copy_stvar(vm, context[27], context[15]);
          refalrts::alloc_close_call(vm, context[28]);
          refalrts::alloc_close_call(vm, context[23]);
          refalrts::push_stack( vm, context[23] );
          refalrts::push_stack( vm, context[22] );
          res = refalrts::splice_elem( res, context[23] );
          refalrts::push_stack( vm, context[28] );
          refalrts::push_stack( vm, context[25] );
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
            // </22 & ScanEscape$2?2/26 s.Num2#3/27 >/23
            context[24] = 0;
            context[25] = 0;
            context[26] = refalrts::call_left( context[24], context[25], context[22], context[23] );
            if( ! refalrts::svar_left( context[27], context[24], context[25] ) )
              continue;
            if( ! refalrts::empty_seq( context[24], context[25] ) )
              continue;
            //DEBUG: t.Pos#1: 5
            //DEBUG: s.Hex1#1: 14
            //DEBUG: s.Hex2#1: 15
            //DEBUG: e.Line#1: 12
            //DEBUG: s.Num1#2: 21
            //DEBUG: s.Num2#3: 27

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Num1#2/21 {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkChar/4 AsIs: t.Pos#1/5 HalfReuse: </9 } & Chr/28 </29 & Add/30 Tile{ AsIs: </16 Reuse: & Mul/20 } Tile{ HalfReuse: s.Num12 #21/17 HalfReuse: 16/22 HalfReuse: >/26 AsIs: s.Num2#3/27 AsIs: >/23 AsIs: >/1 } )/31 </32 & IncCol/33 t.Pos#1/5/34 # Len/36"\\x"/37 Tile{ AsIs: s.Hex1#1/14 AsIs: s.Hex2#1/15 } >/39 Tile{ AsIs: e.Line#1/12 } Tile{ ]] }
            refalrts::alloc_name(vm, context[28], functions[efunc_Chr]);
            refalrts::alloc_open_call(vm, context[29]);
            refalrts::alloc_name(vm, context[30], functions[efunc_Add]);
            refalrts::alloc_close_bracket(vm, context[31]);
            refalrts::alloc_open_call(vm, context[32]);
            refalrts::alloc_name(vm, context[33], functions[efunc_IncCol]);
            refalrts::copy_evar(vm, context[34], context[35], context[5], context[6]);
            refalrts::alloc_ident(vm, context[36], identifiers[ident_Len]);
            refalrts::alloc_chars(vm, context[37], context[38], "\\x", 2);
            refalrts::alloc_close_call(vm, context[39]);
            refalrts::reinit_open_bracket(context[0]);
            refalrts::reinit_ident(context[4], identifiers[ident_TkChar]);
            refalrts::reinit_open_call(context[9]);
            refalrts::update_name(context[20], functions[efunc_Mul]);
            refalrts::reinit_svar( context[17], context[21] );
            refalrts::reinit_number(context[22], 16UL);
            refalrts::reinit_close_call(context[26]);
            refalrts::push_stack( vm, context[39] );
            refalrts::push_stack( vm, context[32] );
            refalrts::link_brackets( context[0], context[31] );
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[9] );
            refalrts::push_stack( vm, context[23] );
            refalrts::push_stack( vm, context[29] );
            refalrts::push_stack( vm, context[26] );
            refalrts::push_stack( vm, context[16] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = arg_end->next;
            res = refalrts::splice_evar( res, context[12], context[13] );
            res = refalrts::splice_evar( res, context[39], context[39] );
            res = refalrts::splice_evar( res, context[14], context[15] );
            res = refalrts::splice_evar( res, context[31], context[38] );
            res = refalrts::splice_evar( res, context[17], context[1] );
            res = refalrts::splice_evar( res, context[16], context[20] );
            res = refalrts::splice_evar( res, context[28], context[30] );
            refalrts::splice_to_freelist_open( vm, context[9], res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          refalrts::splice_to_freelist(vm, context[22], context[23]);
          continue;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        refalrts::splice_to_freelist(vm, context[16], context[17]);
        continue;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ScanEscape/4 t.Pos#1/5 'x'/9 e.Line#1/12 >/1
      context[12] = context[10];
      context[13] = context[11];
      // closed e.Line#1 as range 12
      //DEBUG: t.Pos#1: 5
      //DEBUG: e.Line#1: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkError/4 AsIs: t.Pos#1/5 Reuse: 'A'/9 }"fter \\x must be two hex digits"/14 )/16 </17 & IncCol/18 t.Pos#1/5/19 # Len/21"\\x"/22 Tile{ AsIs: >/1 } Tile{ AsIs: e.Line#1/12 } Tile{ ]] }
      refalrts::alloc_chars(vm, context[14], context[15], "fter \\x must be two hex digits", 30);
      refalrts::alloc_close_bracket(vm, context[16]);
      refalrts::alloc_open_call(vm, context[17]);
      refalrts::alloc_name(vm, context[18], functions[efunc_IncCol]);
      refalrts::copy_evar(vm, context[19], context[20], context[5], context[6]);
      refalrts::alloc_ident(vm, context[21], identifiers[ident_Len]);
      refalrts::alloc_chars(vm, context[22], context[23], "\\x", 2);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TkError]);
      refalrts::update_char(context[9], 'A');
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[17] );
      refalrts::link_brackets( context[0], context[16] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[12], context[13] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[14], context[23] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ScanEscape/4 t.Pos#1/5 s.Other#1/9 e.Line#1/10 >/1
    context[10] = context[7];
    context[11] = context[8];
    // closed e.Line#1 as range 10
    //DEBUG: t.Pos#1: 5
    //DEBUG: s.Other#1: 9
    //DEBUG: e.Line#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkError/4 AsIs: t.Pos#1/5 }"Bad escape sequence \\"/12 Tile{ AsIs: s.Other#1/9 } )/14 </15 & IncCol/16 t.Pos#1/5/17 # Len/19 '\\'/20 s.Other#1/9/21 Tile{ AsIs: >/1 } Tile{ AsIs: e.Line#1/10 } Tile{ ]] }
    refalrts::alloc_chars(vm, context[12], context[13], "Bad escape sequence \\", 21);
    refalrts::alloc_close_bracket(vm, context[14]);
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_name(vm, context[16], functions[efunc_IncCol]);
    refalrts::copy_evar(vm, context[17], context[18], context[5], context[6]);
    refalrts::alloc_ident(vm, context[19], identifiers[ident_Len]);
    refalrts::alloc_char(vm, context[20], '\\');
    refalrts::copy_stvar(vm, context[21], context[9]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_TkError]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[15] );
    refalrts::link_brackets( context[0], context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[14], context[21] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[12], context[13] );
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

static refalrts::NativeReference nat_ref_ScanEscape("ScanEscape", COOKIE1_, COOKIE2_, func_ScanEscape);


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

static refalrts::NativeReference nat_ref_DoScanm_Charsm_Escape("DoScan-Chars-Escape", COOKIE1_, COOKIE2_, func_DoScanm_Charsm_Escape);


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

static refalrts::NativeReference nat_ref_gen_HexDigit_B1("HexDigit:1", COOKIE1_, COOKIE2_, func_gen_HexDigit_B1);


static refalrts::FnResult func_HexDigit(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & HexDigit:1/4 AsIs: s.Digit#1/5 HalfReuse: </1 } & Type/6 s.Digit#1/5/7 >/8 >/9 Tile{ ]] }
  refalrts::alloc_name(vm, context[6], functions[efunc_Type]);
  refalrts::copy_stvar(vm, context[7], context[5]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::alloc_close_call(vm, context[9]);
  refalrts::update_name(context[4], functions[efunc_gen_HexDigit_B1]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_HexDigit("HexDigit", COOKIE1_, COOKIE2_, func_HexDigit);


static refalrts::FnResult func_DoHexDigit(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
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
      // </0 & DoHexDigit/4 s.Digit#1/9 e.Samples#1/10 s.Val#1/6 s.Digit#1/5 >/1
      context[10] = context[7];
      context[11] = context[8];
      if( ! refalrts::repeated_stvar_term( vm, context[5], context[9] ) )
        continue;
      // closed e.Samples#1 as range 10
      //DEBUG: s.Digit#1: 9
      //DEBUG: s.Val#1: 6
      //DEBUG: e.Samples#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & DoHexDigit/4 s.Digit#1/9 e.Samples#1/10 s.Val#1/6 s.Digit#1/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Val1 #6/1 ]] }
      refalrts::reinit_svar( context[1], context[6] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoHexDigit/4 s.OtherDigit#1/9 e.Samples#1/10 s.Val#1/6 s.Digit#1/5 >/1
    context[10] = context[7];
    context[11] = context[8];
    // closed e.Samples#1 as range 10
    //DEBUG: s.OtherDigit#1: 9
    //DEBUG: s.Val#1: 6
    //DEBUG: s.Digit#1: 5
    //DEBUG: e.Samples#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.OtherDigit#1/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoHexDigit/4 } Tile{ AsIs: e.Samples#1/10 } </12 & Add/13 1/14 Tile{ AsIs: s.Val#1/6 } >/15 Tile{ AsIs: s.Digit#1/5 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_Add]);
    refalrts::alloc_number(vm, context[14], 1UL);
    refalrts::alloc_close_call(vm, context[15]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[6], context[6] );
    res = refalrts::splice_evar( res, context[12], context[14] );
    res = refalrts::splice_evar( res, context[10], context[11] );
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

static refalrts::NativeReference nat_ref_DoHexDigit("DoHexDigit", COOKIE1_, COOKIE2_, func_DoHexDigit);


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

static refalrts::NativeReference nat_ref_MakeCompound("MakeCompound", COOKIE1_, COOKIE2_, func_MakeCompound);


static refalrts::FnResult func_DoScanm_Compound(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
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
    // </0 & DoScan-Compound/4 t.new#6/5 t.new#7/7 (/11 e.new#9/17 )/12 (/15 s.new#10/23 e.new#11/19 )/16 e.new#8/21 >/1
    context[17] = context[9];
    context[18] = context[10];
    context[19] = context[13];
    context[20] = context[14];
    context[21] = context[2];
    context[22] = context[3];
    // closed e.new#9 as range 17
    // closed e.new#8 as range 21
    if( ! refalrts::svar_left( context[23], context[19], context[20] ) )
      continue;
    // closed e.new#11 as range 19
    do {
      // </0 & DoScan-Compound/4 t.StartPos#1/5 t.Pos#1/7 (/11 e.Compound#1/24 )/12 (/15 '\"'/23 e.Line#1/26 )/16 e.Lines#1/28 >/1
      context[24] = context[17];
      context[25] = context[18];
      context[26] = context[19];
      context[27] = context[20];
      context[28] = context[21];
      context[29] = context[22];
      if( ! refalrts::char_term( '\"', context[23] ) )
        continue;
      // closed e.Compound#1 as range 24
      // closed e.Line#1 as range 26
      // closed e.Lines#1 as range 28
      //DEBUG: t.StartPos#1: 5
      //DEBUG: t.Pos#1: 7
      //DEBUG: e.Compound#1: 24
      //DEBUG: e.Line#1: 26
      //DEBUG: e.Lines#1: 28

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & MakeCompound/4 AsIs: t.StartPos#1/5 } Tile{ AsIs: e.Compound#1/24 } Tile{ HalfReuse: >/11 } </30 Tile{ HalfReuse: & DoScan/12 } </31 & IncCol/32 Tile{ AsIs: t.Pos#1/7 } Tile{ HalfReuse: >/15 HalfReuse: (/23 AsIs: e.Line#1/26 AsIs: )/16 AsIs: e.Lines#1/28 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[30]);
      refalrts::alloc_open_call(vm, context[31]);
      refalrts::alloc_name(vm, context[32], functions[efunc_IncCol]);
      refalrts::update_name(context[4], functions[efunc_MakeCompound]);
      refalrts::reinit_close_call(context[11]);
      refalrts::reinit_name(context[12], functions[efunc_DoScan]);
      refalrts::reinit_close_call(context[15]);
      refalrts::reinit_open_bracket(context[23]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[30] );
      refalrts::link_brackets( context[23], context[16] );
      refalrts::push_stack( vm, context[15] );
      refalrts::push_stack( vm, context[31] );
      refalrts::push_stack( vm, context[11] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[15];
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_evar( res, context[31], context[32] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[30], context[30] );
      res = refalrts::splice_evar( res, context[11], context[11] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoScan-Compound/4 t.StartPos#1/5 t.Pos#1/7 (/11 e.Compound#1/24 )/12 (/15 '\\'/23 e.Line#1/26 )/16 e.Lines#1/28 >/1
      context[24] = context[17];
      context[25] = context[18];
      context[26] = context[19];
      context[27] = context[20];
      context[28] = context[21];
      context[29] = context[22];
      if( ! refalrts::char_term( '\\', context[23] ) )
        continue;
      // closed e.Compound#1 as range 24
      // closed e.Line#1 as range 26
      // closed e.Lines#1 as range 28
      //DEBUG: t.StartPos#1: 5
      //DEBUG: t.Pos#1: 7
      //DEBUG: e.Compound#1: 24
      //DEBUG: e.Line#1: 26
      //DEBUG: e.Lines#1: 28

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoScan-Compound-HandleEscape/4 AsIs: t.StartPos#1/5 } </30 & IncCol/31 Tile{ AsIs: t.Pos#1/7 HalfReuse: >/11 } Tile{ HalfReuse: (/12 } Tile{ AsIs: e.Compound#1/24 } Tile{ HalfReuse: )/15 HalfReuse: (/23 AsIs: e.Line#1/26 AsIs: )/16 AsIs: e.Lines#1/28 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[30]);
      refalrts::alloc_name(vm, context[31], functions[efunc_IncCol]);
      refalrts::update_name(context[4], functions[efunc_DoScanm_Compoundm_HandleEscape]);
      refalrts::reinit_close_call(context[11]);
      refalrts::reinit_open_bracket(context[12]);
      refalrts::reinit_close_bracket(context[15]);
      refalrts::reinit_open_bracket(context[23]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[23], context[16] );
      refalrts::link_brackets( context[12], context[15] );
      refalrts::push_stack( vm, context[11] );
      refalrts::push_stack( vm, context[30] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[15];
      res = refalrts::splice_evar( res, context[24], context[25] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[7], context[11] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoScan-Compound/4 t.StartPos#1/5 t.Pos#1/7 (/11 e.Compound#1/24 )/12 (/15 s.Char#1/23 e.Line#1/26 )/16 e.Lines#1/28 >/1
    context[24] = context[17];
    context[25] = context[18];
    context[26] = context[19];
    context[27] = context[20];
    context[28] = context[21];
    context[29] = context[22];
    // closed e.Compound#1 as range 24
    // closed e.Line#1 as range 26
    // closed e.Lines#1 as range 28
    //DEBUG: t.StartPos#1: 5
    //DEBUG: t.Pos#1: 7
    //DEBUG: s.Char#1: 23
    //DEBUG: e.Compound#1: 24
    //DEBUG: e.Line#1: 26
    //DEBUG: e.Lines#1: 28

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Char#1/23 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoScan-Compound/4 AsIs: t.StartPos#1/5 } </30 & IncCol/31 Tile{ AsIs: t.Pos#1/7 } >/32 Tile{ AsIs: (/11 AsIs: e.Compound#1/24 HalfReuse: s.Char1 #23/12 HalfReuse: )/15 } (/33 Tile{ AsIs: e.Line#1/26 } Tile{ AsIs: )/16 AsIs: e.Lines#1/28 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[30]);
    refalrts::alloc_name(vm, context[31], functions[efunc_IncCol]);
    refalrts::alloc_close_call(vm, context[32]);
    refalrts::alloc_open_bracket(vm, context[33]);
    refalrts::reinit_svar( context[12], context[23] );
    refalrts::reinit_close_bracket(context[15]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[33], context[16] );
    refalrts::link_brackets( context[11], context[15] );
    refalrts::push_stack( vm, context[32] );
    refalrts::push_stack( vm, context[30] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[16];
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[33], context[33] );
    res = refalrts::splice_evar( res, context[11], context[15] );
    res = refalrts::splice_evar( res, context[32], context[32] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[30], context[31] );
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

static refalrts::NativeReference nat_ref_DoScanm_Compound("DoScan-Compound", COOKIE1_, COOKIE2_, func_DoScanm_Compound);


static refalrts::FnResult func_DoScanm_Compoundm_HandleEscape(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 59 elems
  refalrts::Iter context[59];
  refalrts::zeros( context, 59 );
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
    // </0 & DoScan-Compound-HandleEscape/4 t.new#6/5 t.new#7/7 (/11 e.new#9/17 )/12 (/15 s.new#10/23 e.new#11/19 )/16 e.new#8/21 >/1
    context[17] = context[9];
    context[18] = context[10];
    context[19] = context[13];
    context[20] = context[14];
    context[21] = context[2];
    context[22] = context[3];
    // closed e.new#9 as range 17
    // closed e.new#8 as range 21
    if( ! refalrts::svar_left( context[23], context[19], context[20] ) )
      continue;
    // closed e.new#11 as range 19
    do {
      // </0 & DoScan-Compound-HandleEscape/4 t.StartPos#1/5 t.Pos#1/7 (/11 e.Compound#1/24 )/12 (/15 s.Escaped#1/23 e.Line#1/26 )/16 e.Lines#1/28 >/1
      context[24] = context[17];
      context[25] = context[18];
      context[26] = context[19];
      context[27] = context[20];
      context[28] = context[21];
      context[29] = context[22];
      // closed e.Compound#1 as range 24
      // closed e.Line#1 as range 26
      // closed e.Lines#1 as range 28
      //DEBUG: t.StartPos#1: 5
      //DEBUG: t.Pos#1: 7
      //DEBUG: s.Escaped#1: 23
      //DEBUG: e.Compound#1: 24
      //DEBUG: e.Line#1: 26
      //DEBUG: e.Lines#1: 28
      //5: t.StartPos#1
      //7: t.Pos#1
      //23: s.Escaped#1
      //24: e.Compound#1
      //26: e.Line#1
      //28: e.Lines#1
      //35: s.Escaped#1

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[30]);
      refalrts::alloc_name(vm, context[32], functions[efunc_gen_DoScanm_Compoundm_HandleEscape_S1C1]);
      refalrts::alloc_open_call(vm, context[33]);
      refalrts::alloc_name(vm, context[34], functions[efunc_SimpleEscapedChar]);
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
        // </30 & DoScan-Compound-HandleEscape$1?1/34 s.Char#2/35 >/31
        context[32] = 0;
        context[33] = 0;
        context[34] = refalrts::call_left( context[32], context[33], context[30], context[31] );
        if( ! refalrts::svar_left( context[35], context[32], context[33] ) )
          continue;
        if( ! refalrts::empty_seq( context[32], context[33] ) )
          continue;
        //DEBUG: t.StartPos#1: 5
        //DEBUG: t.Pos#1: 7
        //DEBUG: s.Escaped#1: 23
        //DEBUG: e.Compound#1: 24
        //DEBUG: e.Line#1: 26
        //DEBUG: e.Lines#1: 28
        //DEBUG: s.Char#2: 35

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Escaped#1/23 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Char#2/35 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoScan-Compound/4 AsIs: t.StartPos#1/5 } Tile{ HalfReuse: </1 } Tile{ Reuse: & IncCol/34 } Tile{ AsIs: t.Pos#1/7 } Tile{ AsIs: >/31 } Tile{ AsIs: (/11 AsIs: e.Compound#1/24 HalfReuse: s.Char2 #35/12 HalfReuse: )/15 } (/36 Tile{ AsIs: e.Line#1/26 } Tile{ AsIs: )/16 AsIs: e.Lines#1/28 HalfReuse: >/30 } Tile{ ]] }
        refalrts::alloc_open_bracket(vm, context[36]);
        refalrts::update_name(context[4], functions[efunc_DoScanm_Compound]);
        refalrts::reinit_open_call(context[1]);
        refalrts::update_name(context[34], functions[efunc_IncCol]);
        refalrts::reinit_svar( context[12], context[35] );
        refalrts::reinit_close_bracket(context[15]);
        refalrts::reinit_close_call(context[30]);
        refalrts::push_stack( vm, context[30] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[36], context[16] );
        refalrts::link_brackets( context[11], context[15] );
        refalrts::push_stack( vm, context[31] );
        refalrts::push_stack( vm, context[1] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[16], context[30] );
        res = refalrts::splice_evar( res, context[26], context[27] );
        res = refalrts::splice_evar( res, context[36], context[36] );
        res = refalrts::splice_evar( res, context[11], context[15] );
        res = refalrts::splice_evar( res, context[31], context[31] );
        res = refalrts::splice_evar( res, context[7], context[8] );
        res = refalrts::splice_evar( res, context[34], context[34] );
        res = refalrts::splice_evar( res, context[1], context[1] );
        refalrts::splice_to_freelist_open( vm, context[6], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[30], context[31]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoScan-Compound-HandleEscape/4 t.new#12/5 t.new#13/7 (/11 e.new#15/24 )/12 (/15 'x'/23 e.new#16/26 )/16 e.new#14/28 >/1
      context[24] = context[17];
      context[25] = context[18];
      context[26] = context[19];
      context[27] = context[20];
      context[28] = context[21];
      context[29] = context[22];
      if( ! refalrts::char_term( 'x', context[23] ) )
        continue;
      // closed e.new#15 as range 24
      // closed e.new#16 as range 26
      // closed e.new#14 as range 28
      do {
        // </0 & DoScan-Compound-HandleEscape/4 t.StartPos#1/5 t.Pos#1/7 (/11 e.Compound#1/30 )/12 (/15 'x'/23 s.Hex1#1/36 s.Hex2#1/37 e.Line#1/32 )/16 e.Lines#1/34 >/1
        context[30] = context[24];
        context[31] = context[25];
        context[32] = context[26];
        context[33] = context[27];
        context[34] = context[28];
        context[35] = context[29];
        // closed e.Compound#1 as range 30
        // closed e.Lines#1 as range 34
        if( ! refalrts::svar_left( context[36], context[32], context[33] ) )
          continue;
        if( ! refalrts::svar_left( context[37], context[32], context[33] ) )
          continue;
        // closed e.Line#1 as range 32
        //DEBUG: t.StartPos#1: 5
        //DEBUG: t.Pos#1: 7
        //DEBUG: e.Compound#1: 30
        //DEBUG: e.Lines#1: 34
        //DEBUG: s.Hex1#1: 36
        //DEBUG: s.Hex2#1: 37
        //DEBUG: e.Line#1: 32
        //5: t.StartPos#1
        //7: t.Pos#1
        //30: e.Compound#1
        //32: e.Line#1
        //34: e.Lines#1
        //36: s.Hex1#1
        //37: s.Hex2#1
        //43: s.Hex1#1

        refalrts::reset_allocator(vm);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::alloc_open_call(vm, context[38]);
        refalrts::alloc_name(vm, context[40], functions[efunc_gen_DoScanm_Compoundm_HandleEscape_S2C1]);
        refalrts::alloc_open_call(vm, context[41]);
        refalrts::alloc_name(vm, context[42], functions[efunc_HexDigit]);
        refalrts::copy_stvar(vm, context[43], context[36]);
        refalrts::alloc_close_call(vm, context[44]);
        refalrts::alloc_close_call(vm, context[39]);
        refalrts::push_stack( vm, context[39] );
        refalrts::push_stack( vm, context[38] );
        res = refalrts::splice_elem( res, context[39] );
        refalrts::push_stack( vm, context[44] );
        refalrts::push_stack( vm, context[41] );
        res = refalrts::splice_elem( res, context[44] );
        res = refalrts::splice_stvar( res, context[43] );
        res = refalrts::splice_elem( res, context[42] );
        res = refalrts::splice_elem( res, context[41] );
        res = refalrts::splice_elem( res, context[40] );
        res = refalrts::splice_elem( res, context[38] );
        refalrts::use( res );
        refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
        if (rec_res != refalrts::cSuccess)
          return rec_res;
        refalrts::this_is_generated_function(vm);
        do {
          // </38 & DoScan-Compound-HandleEscape$2?1/42 s.Num1#2/43 >/39
          context[40] = 0;
          context[41] = 0;
          context[42] = refalrts::call_left( context[40], context[41], context[38], context[39] );
          if( ! refalrts::svar_left( context[43], context[40], context[41] ) )
            continue;
          if( ! refalrts::empty_seq( context[40], context[41] ) )
            continue;
          //DEBUG: t.StartPos#1: 5
          //DEBUG: t.Pos#1: 7
          //DEBUG: e.Compound#1: 30
          //DEBUG: e.Lines#1: 34
          //DEBUG: s.Hex1#1: 36
          //DEBUG: s.Hex2#1: 37
          //DEBUG: e.Line#1: 32
          //DEBUG: s.Num1#2: 43
          //5: t.StartPos#1
          //7: t.Pos#1
          //30: e.Compound#1
          //32: e.Line#1
          //34: e.Lines#1
          //36: s.Hex1#1
          //37: s.Hex2#1
          //43: s.Num1#2
          //49: s.Hex2#1

          refalrts::reset_allocator(vm);
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          refalrts::alloc_open_call(vm, context[44]);
          refalrts::alloc_name(vm, context[46], functions[efunc_gen_DoScanm_Compoundm_HandleEscape_S2C2]);
          refalrts::alloc_open_call(vm, context[47]);
          refalrts::alloc_name(vm, context[48], functions[efunc_HexDigit]);
          refalrts::copy_stvar(vm, context[49], context[37]);
          refalrts::alloc_close_call(vm, context[50]);
          refalrts::alloc_close_call(vm, context[45]);
          refalrts::push_stack( vm, context[45] );
          refalrts::push_stack( vm, context[44] );
          res = refalrts::splice_elem( res, context[45] );
          refalrts::push_stack( vm, context[50] );
          refalrts::push_stack( vm, context[47] );
          res = refalrts::splice_elem( res, context[50] );
          res = refalrts::splice_stvar( res, context[49] );
          res = refalrts::splice_elem( res, context[48] );
          res = refalrts::splice_elem( res, context[47] );
          res = refalrts::splice_elem( res, context[46] );
          res = refalrts::splice_elem( res, context[44] );
          refalrts::use( res );
          refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
          if (rec_res != refalrts::cSuccess)
            return rec_res;
          refalrts::this_is_generated_function(vm);
          do {
            // </44 & DoScan-Compound-HandleEscape$2?2/48 s.Num2#3/49 >/45
            context[46] = 0;
            context[47] = 0;
            context[48] = refalrts::call_left( context[46], context[47], context[44], context[45] );
            if( ! refalrts::svar_left( context[49], context[46], context[47] ) )
              continue;
            if( ! refalrts::empty_seq( context[46], context[47] ) )
              continue;
            //DEBUG: t.StartPos#1: 5
            //DEBUG: t.Pos#1: 7
            //DEBUG: e.Compound#1: 30
            //DEBUG: e.Lines#1: 34
            //DEBUG: s.Hex1#1: 36
            //DEBUG: s.Hex2#1: 37
            //DEBUG: e.Line#1: 32
            //DEBUG: s.Num1#2: 43
            //DEBUG: s.Num2#3: 49

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Num1#2/43 {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoScan-Compound/4 AsIs: t.StartPos#1/5 } </50 & IncCol/51 Tile{ AsIs: t.Pos#1/7 } Tile{ HalfReuse: # Len/15 AsIs: 'x'/23 AsIs: s.Hex1#1/36 AsIs: s.Hex2#1/37 } >/52 Tile{ AsIs: (/11 AsIs: e.Compound#1/30 HalfReuse: </12 } Tile{ Reuse: & Chr/42 } </53 & Add/54 </55 & Mul/56 Tile{ HalfReuse: s.Num12 #43/39 HalfReuse: 16/44 HalfReuse: >/48 AsIs: s.Num2#3/49 AsIs: >/45 AsIs: >/1 } )/57 (/58 Tile{ AsIs: e.Line#1/32 } Tile{ AsIs: )/16 AsIs: e.Lines#1/34 HalfReuse: >/38 } Tile{ ]] }
            refalrts::alloc_open_call(vm, context[50]);
            refalrts::alloc_name(vm, context[51], functions[efunc_IncCol]);
            refalrts::alloc_close_call(vm, context[52]);
            refalrts::alloc_open_call(vm, context[53]);
            refalrts::alloc_name(vm, context[54], functions[efunc_Add]);
            refalrts::alloc_open_call(vm, context[55]);
            refalrts::alloc_name(vm, context[56], functions[efunc_Mul]);
            refalrts::alloc_close_bracket(vm, context[57]);
            refalrts::alloc_open_bracket(vm, context[58]);
            refalrts::update_name(context[4], functions[efunc_DoScanm_Compound]);
            refalrts::reinit_ident(context[15], identifiers[ident_Len]);
            refalrts::reinit_open_call(context[12]);
            refalrts::update_name(context[42], functions[efunc_Chr]);
            refalrts::reinit_svar( context[39], context[43] );
            refalrts::reinit_number(context[44], 16UL);
            refalrts::reinit_close_call(context[48]);
            refalrts::reinit_close_call(context[38]);
            refalrts::push_stack( vm, context[38] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[58], context[16] );
            refalrts::link_brackets( context[11], context[57] );
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[12] );
            refalrts::push_stack( vm, context[45] );
            refalrts::push_stack( vm, context[53] );
            refalrts::push_stack( vm, context[48] );
            refalrts::push_stack( vm, context[55] );
            refalrts::push_stack( vm, context[52] );
            refalrts::push_stack( vm, context[50] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = arg_end->next;
            res = refalrts::splice_evar( res, context[16], context[38] );
            res = refalrts::splice_evar( res, context[32], context[33] );
            res = refalrts::splice_evar( res, context[57], context[58] );
            res = refalrts::splice_evar( res, context[39], context[1] );
            res = refalrts::splice_evar( res, context[53], context[56] );
            res = refalrts::splice_evar( res, context[42], context[42] );
            res = refalrts::splice_evar( res, context[11], context[12] );
            res = refalrts::splice_evar( res, context[52], context[52] );
            res = refalrts::splice_evar( res, context[15], context[37] );
            res = refalrts::splice_evar( res, context[7], context[8] );
            res = refalrts::splice_evar( res, context[50], context[51] );
            refalrts::splice_to_freelist_open( vm, context[6], res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          refalrts::splice_to_freelist(vm, context[44], context[45]);
          continue;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        refalrts::splice_to_freelist(vm, context[38], context[39]);
        continue;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoScan-Compound-HandleEscape/4 t.StartPos#1/5 t.Pos#1/7 (/11 e.Compound#1/30 )/12 (/15 'x'/23 e.Line#1/32 )/16 e.Lines#1/34 >/1
      context[30] = context[24];
      context[31] = context[25];
      context[32] = context[26];
      context[33] = context[27];
      context[34] = context[28];
      context[35] = context[29];
      // closed e.Compound#1 as range 30
      // closed e.Line#1 as range 32
      // closed e.Lines#1 as range 34
      //DEBUG: t.StartPos#1: 5
      //DEBUG: t.Pos#1: 7
      //DEBUG: e.Compound#1: 30
      //DEBUG: e.Line#1: 32
      //DEBUG: e.Lines#1: 34

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/36 # TkError/37 Tile{ AsIs: t.Pos#1/7 HalfReuse: 'A'/11 }"fter \\x must be two hex digits"/38 Tile{ AsIs: )/12 } Tile{ AsIs: </0 Reuse: & DoScan-Compound/4 AsIs: t.StartPos#1/5 } </40 & IncCol/41 t.Pos#1/7/42 >/44 (/45 Tile{ AsIs: e.Compound#1/30 } Tile{ HalfReuse: )/15 HalfReuse: (/23 AsIs: e.Line#1/32 AsIs: )/16 AsIs: e.Lines#1/34 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[36]);
      refalrts::alloc_ident(vm, context[37], identifiers[ident_TkError]);
      refalrts::alloc_chars(vm, context[38], context[39], "fter \\x must be two hex digits", 30);
      refalrts::alloc_open_call(vm, context[40]);
      refalrts::alloc_name(vm, context[41], functions[efunc_IncCol]);
      refalrts::copy_evar(vm, context[42], context[43], context[7], context[8]);
      refalrts::alloc_close_call(vm, context[44]);
      refalrts::alloc_open_bracket(vm, context[45]);
      refalrts::reinit_char(context[11], 'A');
      refalrts::update_name(context[4], functions[efunc_DoScanm_Compound]);
      refalrts::reinit_close_bracket(context[15]);
      refalrts::reinit_open_bracket(context[23]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[23], context[16] );
      refalrts::link_brackets( context[45], context[15] );
      refalrts::push_stack( vm, context[44] );
      refalrts::push_stack( vm, context[40] );
      refalrts::link_brackets( context[36], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[15];
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[40], context[45] );
      res = refalrts::splice_evar( res, context[0], context[6] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[38], context[39] );
      res = refalrts::splice_evar( res, context[7], context[11] );
      res = refalrts::splice_evar( res, context[36], context[37] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoScan-Compound-HandleEscape/4 t.StartPos#1/5 t.Pos#1/7 (/11 e.Compound#1/24 )/12 (/15 s.Other#1/23 e.Line#1/26 )/16 e.Lines#1/28 >/1
    context[24] = context[17];
    context[25] = context[18];
    context[26] = context[19];
    context[27] = context[20];
    context[28] = context[21];
    context[29] = context[22];
    // closed e.Compound#1 as range 24
    // closed e.Line#1 as range 26
    // closed e.Lines#1 as range 28
    //DEBUG: t.StartPos#1: 5
    //DEBUG: t.Pos#1: 7
    //DEBUG: s.Other#1: 23
    //DEBUG: e.Compound#1: 24
    //DEBUG: e.Line#1: 26
    //DEBUG: e.Lines#1: 28

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/30 # TkError/31 Tile{ AsIs: t.Pos#1/7 }"Bad escape sequence \\"/32 Tile{ AsIs: s.Other#1/23 } )/34 Tile{ AsIs: </0 Reuse: & DoScan-Compound/4 AsIs: t.StartPos#1/5 } </35 & IncCol/36 t.Pos#1/7/37 >/39 Tile{ AsIs: (/11 AsIs: e.Compound#1/24 AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.Line#1/26 } Tile{ AsIs: )/16 AsIs: e.Lines#1/28 AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[30]);
    refalrts::alloc_ident(vm, context[31], identifiers[ident_TkError]);
    refalrts::alloc_chars(vm, context[32], context[33], "Bad escape sequence \\", 21);
    refalrts::alloc_close_bracket(vm, context[34]);
    refalrts::alloc_open_call(vm, context[35]);
    refalrts::alloc_name(vm, context[36], functions[efunc_IncCol]);
    refalrts::copy_evar(vm, context[37], context[38], context[7], context[8]);
    refalrts::alloc_close_call(vm, context[39]);
    refalrts::update_name(context[4], functions[efunc_DoScanm_Compound]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::push_stack( vm, context[39] );
    refalrts::push_stack( vm, context[35] );
    refalrts::link_brackets( context[30], context[34] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[16];
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[11], context[15] );
    res = refalrts::splice_evar( res, context[35], context[39] );
    res = refalrts::splice_evar( res, context[0], context[6] );
    res = refalrts::splice_evar( res, context[34], context[34] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[30], context[31] );
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

static refalrts::NativeReference nat_ref_DoScanm_Compoundm_HandleEscape("DoScan-Compound-HandleEscape", COOKIE1_, COOKIE2_, func_DoScanm_Compoundm_HandleEscape);


//End of file
