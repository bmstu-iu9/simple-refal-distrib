// This file automatically generated from 'SR-Lexer.sref'
// Don't edit! Edit 'SR-Lexer.sref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_3566852076_2216997627
#define COOKIE1_ 3566852076U
#define COOKIE2_ 2216997627U

enum efunc {
  efunc_u_u_Stepm_Drop = 0,
  efunc_u_u_Metau_Mu = 1,
  efunc_d_table = 2,
  efunc_Map = 3,
  efunc_Apply = 4,
  efunc_Reduce = 5,
  efunc_gen_Reduce_S1A1 = 6,
  efunc_DoMapAccum = 7,
  efunc_gen_DoMapAccum_S1A1 = 8,
  efunc_Add = 9,
  efunc_Sub = 10,
  efunc_Fetch = 11,
  efunc_Pipe = 12,
  efunc_gen_Pipe_S2L1 = 13,
  efunc_gen_Pipe_S3L1 = 14,
  efunc_LexFolding = 15,
  efunc_LoadSource = 16,
  efunc_gen_LoadSource_B1 = 17,
  efunc_gen_Map_Z1 = 18,
  efunc_LoadFile = 19,
  efunc_Root = 20,
  efunc_NormalizeTokens = 21,
  efunc_EscapeChar = 22,
  efunc_EscapeString = 23,
  efunc_StrDirective = 24,
  efunc_Symb = 25,
  efunc_SRm_StrFromToken = 26,
  efunc_gen_NormalizeToken_S14B1 = 27,
  efunc_ValidDirective = 28,
  efunc_Chr = 29,
  efunc_Numbm_Overflow = 30,
  efunc_CharFromNum = 31,
  efunc_gen_NormalizeToken_S14A1 = 32,
  efunc_UnEscapeStringm_SR = 33,
  efunc_SwPunctuation = 34,
  efunc_Trimm_R = 35,
  efunc_TokenError = 36,
  efunc_gen_Numbm_Overflow_A1 = 37,
  efunc_Numb = 38,
  efunc_gen_Map_Z2 = 39,
  efunc_gen_Fetch_Z1 = 40,
  efunc_gen_Map_Z3 = 41,
  efunc_CollectNativeLinesm_Aux = 42,
  efunc_CollectNativeLines = 43,
  efunc_StartNativem_Percent = 44,
  efunc_Main = 45,
  efunc_StartNativem_NewLine = 46,
  efunc_VariableStart = 47,
  efunc_Name = 48,
  efunc_Number = 49,
  efunc_Directive = 50,
  efunc_StringLiteralm_Start = 51,
  efunc_CompoundSymbol = 52,
  efunc_StartComment = 53,
  efunc_Nativem_Begin = 54,
  efunc_VariableIndex = 55,
  efunc_DirectiveTail = 56,
  efunc_StringLiteral = 57,
  efunc_Compoundm_Escape = 58,
  efunc_CComment = 59,
  efunc_CppComment = 60,
  efunc_Nativem_CheckEnd = 61,
  efunc_Native = 62,
  efunc_VariableIndexTail = 63,
  efunc_StringLiteralm_Escape = 64,
  efunc_StringLiteralm_Quote = 65,
  efunc_Compoundm_Escapem_Dec = 66,
  efunc_Compoundm_Escapem_Hex = 67,
  efunc_CCommentm_CheckNested = 68,
  efunc_CCommentm_CheckEnd = 69,
  efunc_Nativem_CheckEnd2 = 70,
  efunc_StringLiteralm_Escapem_Code = 71,
  efunc_StringLiteralm_Escapem_OCode = 72,
  efunc_StringLiteralm_Escapem_XCode = 73,
  efunc_SLm_Em_C1 = 74,
  efunc_SLm_Em_OC1 = 75,
  efunc_StringLiteralm_Escapem_Xnext = 76,
  efunc_SLm_Em_C2 = 77,
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
  efunc_SRm_Scan = 88,
  efunc_NormalizeToken = 89,
  efunc_AddLineNumber = 90,
  efunc_gen_LoadSource_L1D1 = 91,
  efunc_gen_Map_Z0 = 92,
  efunc_gen_LoadSource_L1 = 93,
  efunc_gen_ValidDirective_S10L1D1 = 94,
  efunc_gen_ValidDirective_S10L1 = 95,
  efunc_gen_MapAccum_Z1 = 96,
  efunc_gen_Fetch_Z2 = 97,
  efunc_gen_Pipe_S2L1Z0 = 98,
  efunc_gen_Pipe_S2L1Z1 = 99,
  efunc_gen_Fetch_Z0 = 100,
  efunc_gen_DoMapAccum_Z1 = 101,
  efunc_gen_MapAccum_Z0 = 102,
  efunc_gen_Fetch_Z3 = 103,
  efunc_gen_DelAccumulator_D1 = 104,
  efunc_gen_Pipe_S2L1Z2 = 105,
  efunc_gen_DoMapAccum_S1A1Z1 = 106,
  efunc_gen_DoMapAccum_Z0 = 107,
  efunc_gen_DoMapAccum_S1A1Z0 = 108,
};


enum ident {
  ident_EEnum = 0,
  ident_Entry = 1,
  ident_Enum = 2,
  ident_Extern = 3,
  ident_Forward = 4,
  ident_Swap = 5,
  ident_ESwap = 6,
  ident_Ident = 7,
  ident_Include = 8,
  ident_Spec = 9,
  ident_Meta = 10,
  ident_TkChar = 11,
  ident_TkCompound = 12,
  ident_TkCloseADT = 13,
  ident_TkCloseCall = 14,
  ident_TkCloseBlock = 15,
  ident_TkCloseBracket = 16,
  ident_TkComma = 17,
  ident_TkDirective = 18,
  ident_TkEOF = 19,
  ident_TkError = 20,
  ident_TkIdentMarker = 21,
  ident_TkName = 22,
  ident_TkNumber = 23,
  ident_Cookie1 = 24,
  ident_Cookie2 = 25,
  ident_TkOpenADT = 26,
  ident_TkOpenCall = 27,
  ident_TkOpenBlock = 28,
  ident_TkOpenBracket = 29,
  ident_TkReplace = 30,
  ident_TkSemicolon = 31,
  ident_TkColon = 32,
  ident_TkUnexpected = 33,
  ident_TkVariable = 34,
  ident_TkRedefinition = 35,
  ident_TkNativeBlock = 36,
  ident_Open = 37,
  ident_Close = 38,
  ident_TkWarning = 39,
  ident_nulm_inm_compound = 40,
  ident_Success = 41,
  ident_TkLiteralm_Char = 42,
  ident_TkLiteralm_Code = 43,
  ident_TkLiteralm_OCode = 44,
  ident_TkLiteralm_XCode = 45,
  ident_TkLiteralm_NewLine = 46,
  ident_TkLiteralm_CarriageReturn = 47,
  ident_TkLiteralm_Tab = 48,
  ident_TkLiteralm_Bell = 49,
  ident_TkLiteralm_BS = 50,
  ident_TkLiteralm_FF = 51,
  ident_TkLiteralm_VT = 52,
  ident_TkNewLine = 53,
  ident_TkPunctuation = 54,
  ident_TkNativeLine = 55,
  ident_Mu = 56,
  ident_Up = 57,
  ident_Evm_met = 58,
  ident_Residue = 59,
  ident_u_u_Metau_Residue = 60,
  ident_Apply = 61,
  ident_Map = 62,
  ident_Reduce = 63,
  ident_Fetch = 64,
  ident_MapAccum = 65,
  ident_DoMapAccum = 66,
  ident_UnBracket = 67,
  ident_DelAccumulator = 68,
  ident_Inc = 69,
  ident_Dec = 70,
  ident_Pipe = 71,
  ident_SRm_Scan = 72,
  ident_LoadSource = 73,
  ident_LexFolding = 74,
  ident_StrDirective = 75,
  ident_SRm_StrFromToken = 76,
  ident_NormalizeToken = 77,
  ident_Numbm_Overflow = 78,
  ident_ValidDirective = 79,
  ident_SwPunctuation = 80,
  ident_AddLineNumber = 81,
  ident_NormalizeTokens = 82,
  ident_CollectNativeLines = 83,
  ident_CollectNativeLinesm_Aux = 84,
  ident_TokenError = 85,
  ident_Root = 86,
  ident_StartNativem_Percent = 87,
  ident_Main = 88,
  ident_StartNativem_NewLine = 89,
  ident_VariableStart = 90,
  ident_Name = 91,
  ident_Number = 92,
  ident_Directive = 93,
  ident_StringLiteralm_Start = 94,
  ident_CompoundSymbol = 95,
  ident_StartComment = 96,
  ident_Nativem_Begin = 97,
  ident_VariableIndex = 98,
  ident_DirectiveTail = 99,
  ident_StringLiteral = 100,
  ident_Compoundm_Escape = 101,
  ident_CComment = 102,
  ident_CppComment = 103,
  ident_Nativem_CheckEnd = 104,
  ident_Native = 105,
  ident_VariableIndexTail = 106,
  ident_StringLiteralm_Escape = 107,
  ident_StringLiteralm_Quote = 108,
  ident_Compoundm_Escapem_Dec = 109,
  ident_Compoundm_Escapem_Hex = 110,
  ident_CCommentm_CheckNested = 111,
  ident_CCommentm_CheckEnd = 112,
  ident_Nativem_CheckEnd2 = 113,
  ident_StringLiteralm_Escapem_Code = 114,
  ident_StringLiteralm_Escapem_OCode = 115,
  ident_StringLiteralm_Escapem_XCode = 116,
  ident_SLm_Em_C1 = 117,
  ident_SLm_Em_OC1 = 118,
  ident_StringLiteralm_Escapem_Xnext = 119,
  ident_SLm_Em_C2 = 120,
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


static refalrts::FnResult func_gen_Reduce_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & Reduce$1=1/4 t.Fn#1/5 (/9 e.Tail#1/7 )/10 t.Acc#2/11 >/1
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
  // closed e.Tail#1 as range 7
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Fn#1: 5
  //DEBUG: e.Tail#1: 7
  //DEBUG: t.Acc#2: 11

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/9 {REMOVED TILE} )/10 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Reduce/4 AsIs: t.Fn#1/5 } Tile{ AsIs: t.Acc#2/11 } Tile{ AsIs: e.Tail#1/7 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_Reduce]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::splice_to_freelist_open( vm, context[6], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Reduce_S1A1("Reduce$1=1", COOKIE1_, COOKIE2_, func_gen_Reduce_S1A1);


static refalrts::FnResult func_Reduce(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
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
    //RESULT: Tile{ [[ } </13 & Reduce$1=1/14 t.Fn#1/5/15 (/17 Tile{ AsIs: e.Tail#1/9 } )/18 Tile{ AsIs: </0 Reuse: & Apply/4 AsIs: t.Fn#1/5 AsIs: t.Acc#1/7 AsIs: t.Next#1/11 } >/19 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_gen_Reduce_S1A1]);
    refalrts::copy_evar(vm, context[15], context[16], context[5], context[6]);
    refalrts::alloc_open_bracket(vm, context[17]);
    refalrts::alloc_close_bracket(vm, context[18]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::update_name(context[4], functions[efunc_Apply]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[0], context[12] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[13], context[17] );
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


static refalrts::FnResult func_gen_DoMapAccum_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & DoMapAccum$1=1/4 t.Fn#1/5 (/9 e.Scanned#1/7 )/10 (/13 e.Tail#1/11 )/14 t.Acc#2/15 e.StepScanned#2/2 >/1
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
  // closed e.Tail#1 as range 11
  context[16] = refalrts::tvar_left( context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  // closed e.StepScanned#2 as range 2
  //DEBUG: t.Fn#1: 5
  //DEBUG: e.Scanned#1: 7
  //DEBUG: e.Tail#1: 11
  //DEBUG: t.Acc#2: 15
  //DEBUG: e.StepScanned#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/9 {REMOVED TILE} )/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum/4 AsIs: t.Fn#1/5 } Tile{ AsIs: t.Acc#2/15 } Tile{ AsIs: (/13 } Tile{ AsIs: e.Scanned#1/7 } Tile{ AsIs: e.StepScanned#2/2 } Tile{ AsIs: )/14 } Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_DoMapAccum]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::splice_to_freelist_open( vm, context[6], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_S1A1("DoMapAccum$1=1", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_S1A1);


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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1/4 AsIs: t.Fn#1/5 } Tile{ AsIs: (/11 AsIs: e.Scanned#1/13 AsIs: )/12 } (/19 Tile{ AsIs: e.Tail#1/15 } )/20 </21 & Apply/22 t.Fn#1/5/23 Tile{ AsIs: t.Acc#1/7 } Tile{ AsIs: t.Next#1/17 } >/25 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[19]);
    refalrts::alloc_close_bracket(vm, context[20]);
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_Apply]);
    refalrts::copy_evar(vm, context[23], context[24], context[5], context[6]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[21] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[20], context[24] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[19], context[19] );
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


static refalrts::FnResult func_SRm_Scan(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & SR-Scan/4 e.SrcName#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.SrcName#1 as range 2
  //DEBUG: e.SrcName#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & LexFolding/6 Tile{ AsIs: </0 Reuse: & LoadSource/4 AsIs: e.SrcName#1/2 AsIs: >/1 } >/7 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_LexFolding]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_LoadSource]);
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SRm_Scan("SR-Scan", 0U, 0U, func_SRm_Scan);


static refalrts::FnResult func_gen_LoadSource_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & LoadSource:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & LoadSource:1/4 '\357'/7 '\273'/8 '\277'/9 e.Content#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = refalrts::char_left( '\357', context[5], context[6] );
    if( ! context[7] )
      continue;
    context[8] = refalrts::char_left( '\273', context[5], context[6] );
    if( ! context[8] )
      continue;
    context[9] = refalrts::char_left( '\277', context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.Content#2 as range 5
    //DEBUG: e.Content#2: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & LoadSource:1/4 '\357'/7 '\273'/8 '\277'/9 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Content#2/5 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & LoadSource:1/4 e.Content#2/2 >/1
  // closed e.Content#2 as range 2
  //DEBUG: e.Content#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & LoadSource:1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Content#2/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LoadSource_B1("LoadSource:1", COOKIE1_, COOKIE2_, func_gen_LoadSource_B1);


static refalrts::FnResult func_gen_LoadSource_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & LoadSource\1/4 (/7 e.Line#2/5 )/8 >/1
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
  // closed e.Line#2 as range 5
  //DEBUG: e.Line#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & LoadSource\1/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Line#2/5 } Tile{ HalfReuse: '\n'/1 ]] }
  refalrts::reinit_char(context[1], '\n');
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LoadSource_L1("LoadSource\\1", COOKIE1_, COOKIE2_, func_gen_LoadSource_L1);


static refalrts::FnResult func_LoadSource(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & LoadSource/4 e.FileName#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.FileName#1 as range 2
  //DEBUG: e.FileName#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & LoadSource:1/6 </7 & Map@1/8 Tile{ AsIs: </0 Reuse: & LoadFile/4 AsIs: e.FileName#1/2 AsIs: >/1 } >/9 >/10 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_LoadSource_B1]);
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_Map_Z1]);
  refalrts::alloc_close_call(vm, context[9]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::update_name(context[4], functions[efunc_LoadFile]);
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_LoadSource("LoadSource", COOKIE1_, COOKIE2_, func_LoadSource);


static refalrts::FnResult func_LexFolding(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & LexFolding/4 e.SourceText#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.SourceText#1 as range 2
  //DEBUG: e.SourceText#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & NormalizeTokens/4 } </5 & Root/6 (/7 )/8 Tile{ AsIs: e.SourceText#1/2 } >/9 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_Root]);
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_close_bracket(vm, context[8]);
  refalrts::alloc_close_call(vm, context[9]);
  refalrts::update_name(context[4], functions[efunc_NormalizeTokens]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[5] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_LexFolding("LexFolding", COOKIE1_, COOKIE2_, func_LexFolding);


static refalrts::FnResult func_StrDirective(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & StrDirective/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & StrDirective/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & StrDirective/4 # EEnum/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_EEnum], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'E'/0 HalfReuse: 'E'/4 HalfReuse: 'N'/5 HalfReuse: 'U'/1 } 'M'/6 Tile{ ]] }
    refalrts::alloc_char(vm, context[6], 'M');
    refalrts::reinit_char(context[0], 'E');
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
    // </0 & StrDirective/4 # Entry/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_Entry], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'E'/0 HalfReuse: 'N'/4 HalfReuse: 'T'/5 HalfReuse: 'R'/1 } 'Y'/6 Tile{ ]] }
    refalrts::alloc_char(vm, context[6], 'Y');
    refalrts::reinit_char(context[0], 'E');
    refalrts::reinit_char(context[4], 'N');
    refalrts::reinit_char(context[5], 'T');
    refalrts::reinit_char(context[1], 'R');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[6] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & StrDirective/4 # Enum/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_Enum], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'E'/0 HalfReuse: 'N'/4 HalfReuse: 'U'/5 HalfReuse: 'M'/1 ]] }
    refalrts::reinit_char(context[0], 'E');
    refalrts::reinit_char(context[4], 'N');
    refalrts::reinit_char(context[5], 'U');
    refalrts::reinit_char(context[1], 'M');
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & StrDirective/4 # Extern/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_Extern], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'E'/0 HalfReuse: 'X'/4 HalfReuse: 'T'/5 HalfReuse: 'E'/1 }"RN"/6 Tile{ ]] }
    refalrts::alloc_chars(vm, context[6], context[7], "RN", 2);
    refalrts::reinit_char(context[0], 'E');
    refalrts::reinit_char(context[4], 'X');
    refalrts::reinit_char(context[5], 'T');
    refalrts::reinit_char(context[1], 'E');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & StrDirective/4 # Forward/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_Forward], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'F'/0 HalfReuse: 'O'/4 HalfReuse: 'R'/5 HalfReuse: 'W'/1 }"ARD"/6 Tile{ ]] }
    refalrts::alloc_chars(vm, context[6], context[7], "ARD", 3);
    refalrts::reinit_char(context[0], 'F');
    refalrts::reinit_char(context[4], 'O');
    refalrts::reinit_char(context[5], 'R');
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
    // </0 & StrDirective/4 # Swap/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_Swap], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'S'/0 HalfReuse: 'W'/4 HalfReuse: 'A'/5 HalfReuse: 'P'/1 ]] }
    refalrts::reinit_char(context[0], 'S');
    refalrts::reinit_char(context[4], 'W');
    refalrts::reinit_char(context[5], 'A');
    refalrts::reinit_char(context[1], 'P');
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & StrDirective/4 # ESwap/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_ESwap], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'E'/0 HalfReuse: 'S'/4 HalfReuse: 'W'/5 HalfReuse: 'A'/1 } 'P'/6 Tile{ ]] }
    refalrts::alloc_char(vm, context[6], 'P');
    refalrts::reinit_char(context[0], 'E');
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
    // </0 & StrDirective/4 # Ident/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_Ident], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'L'/0 HalfReuse: 'A'/4 HalfReuse: 'B'/5 HalfReuse: 'E'/1 } 'L'/6 Tile{ ]] }
    refalrts::alloc_char(vm, context[6], 'L');
    refalrts::reinit_char(context[0], 'L');
    refalrts::reinit_char(context[4], 'A');
    refalrts::reinit_char(context[5], 'B');
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
    // </0 & StrDirective/4 # Include/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_Include], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'I'/0 HalfReuse: 'N'/4 HalfReuse: 'C'/5 HalfReuse: 'L'/1 }"UDE"/6 Tile{ ]] }
    refalrts::alloc_chars(vm, context[6], context[7], "UDE", 3);
    refalrts::reinit_char(context[0], 'I');
    refalrts::reinit_char(context[4], 'N');
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
    // </0 & StrDirective/4 # Spec/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_Spec], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'S'/0 HalfReuse: 'P'/4 HalfReuse: 'E'/5 HalfReuse: 'C'/1 ]] }
    refalrts::reinit_char(context[0], 'S');
    refalrts::reinit_char(context[4], 'P');
    refalrts::reinit_char(context[5], 'E');
    refalrts::reinit_char(context[1], 'C');
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & StrDirective/4 # Meta/5 >/1
  if( ! refalrts::ident_term( identifiers[ident_Meta], context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: 'M'/0 HalfReuse: 'E'/4 HalfReuse: 'T'/5 HalfReuse: 'A'/1 ]] }
  refalrts::reinit_char(context[0], 'M');
  refalrts::reinit_char(context[4], 'E');
  refalrts::reinit_char(context[5], 'T');
  refalrts::reinit_char(context[1], 'A');
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_StrDirective("StrDirective", COOKIE1_, COOKIE2_, func_StrDirective);


static refalrts::FnResult func_SRm_StrFromToken(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & SR-StrFromToken/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & SR-StrFromToken/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & SR-StrFromToken/4 # TkChar/5 s.Char#1/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_TkChar], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[6], context[7] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;
    //DEBUG: s.Char#1: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: '\''/0 HalfReuse: </4 HalfReuse: & EscapeChar/5 AsIs: s.Char#1/8 AsIs: >/1 } '\''/9 Tile{ ]] }
    refalrts::alloc_char(vm, context[9], '\'');
    refalrts::reinit_char(context[0], '\'');
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_EscapeChar]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[9], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SR-StrFromToken/4 # TkCompound/5 e.Chars#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_TkCompound], context[5] ) )
      continue;
    // closed e.Chars#1 as range 6
    //DEBUG: e.Chars#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: '\"'/0 HalfReuse: </4 HalfReuse: & EscapeString/5 AsIs: e.Chars#1/6 AsIs: >/1 } '\"'/8 Tile{ ]] }
    refalrts::alloc_char(vm, context[8], '\"');
    refalrts::reinit_char(context[0], '\"');
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_EscapeString]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SR-StrFromToken/4 s.new#3/5 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    do {
      // </0 & SR-StrFromToken/4 # TkCloseADT/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_TkCloseADT], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: '\"'/4 HalfReuse: ']'/5 HalfReuse: '\"'/1 ]] }
      refalrts::reinit_char(context[4], '\"');
      refalrts::reinit_char(context[5], ']');
      refalrts::reinit_char(context[1], '\"');
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[4];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SR-StrFromToken/4 # TkCloseCall/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_TkCloseCall], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: '\"'/4 HalfReuse: '>'/5 HalfReuse: '\"'/1 ]] }
      refalrts::reinit_char(context[4], '\"');
      refalrts::reinit_char(context[5], '>');
      refalrts::reinit_char(context[1], '\"');
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[4];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SR-StrFromToken/4 # TkCloseBlock/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_TkCloseBlock], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: '\"'/4 HalfReuse: '}'/5 HalfReuse: '\"'/1 ]] }
      refalrts::reinit_char(context[4], '\"');
      refalrts::reinit_char(context[5], '}');
      refalrts::reinit_char(context[1], '\"');
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[4];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SR-StrFromToken/4 # TkCloseBracket/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_TkCloseBracket], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: '\"'/4 HalfReuse: ')'/5 HalfReuse: '\"'/1 ]] }
      refalrts::reinit_char(context[4], '\"');
      refalrts::reinit_char(context[5], ')');
      refalrts::reinit_char(context[1], '\"');
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[4];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & SR-StrFromToken/4 # TkComma/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkComma], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\"'/4 HalfReuse: ','/5 HalfReuse: '\"'/1 ]] }
    refalrts::reinit_char(context[4], '\"');
    refalrts::reinit_char(context[5], ',');
    refalrts::reinit_char(context[1], '\"');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SR-StrFromToken/4 # TkDirective/5 s.Directive#1/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_TkDirective], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[6], context[7] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;
    //DEBUG: s.Directive#1: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } '\"'/9 Tile{ HalfReuse: '$'/0 HalfReuse: </4 HalfReuse: & StrDirective/5 AsIs: s.Directive#1/8 AsIs: >/1 } '\"'/10 Tile{ ]] }
    refalrts::alloc_char(vm, context[9], '\"');
    refalrts::alloc_char(vm, context[10], '\"');
    refalrts::reinit_char(context[0], '$');
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_StrDirective]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SR-StrFromToken/4 # TkEOF/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkEOF], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
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
    // </0 & SR-StrFromToken/4 # TkError/5 e.Message#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_TkError], context[5] ) )
      continue;
    // closed e.Message#1 as range 6
    //DEBUG: e.Message#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'L'/0 HalfReuse: 'E'/4 HalfReuse: 'X'/5 }"ER"/8 Tile{ HalfReuse: ' '/1 }"ERROR: "/10 Tile{ AsIs: e.Message#1/6 } Tile{ ]] }
    refalrts::alloc_chars(vm, context[8], context[9], "ER", 2);
    refalrts::alloc_chars(vm, context[10], context[11], "ERROR: ", 7);
    refalrts::reinit_char(context[0], 'L');
    refalrts::reinit_char(context[4], 'E');
    refalrts::reinit_char(context[5], 'X');
    refalrts::reinit_char(context[1], ' ');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SR-StrFromToken/4 # TkIdentMarker/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkIdentMarker], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\"'/4 HalfReuse: '#'/5 HalfReuse: '\"'/1 ]] }
    refalrts::reinit_char(context[4], '\"');
    refalrts::reinit_char(context[5], '#');
    refalrts::reinit_char(context[1], '\"');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SR-StrFromToken/4 # TkName/5 e.Name#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_TkName], context[5] ) )
      continue;
    // closed e.Name#1 as range 6
    //DEBUG: e.Name#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'N'/0 HalfReuse: 'a'/4 HalfReuse: 'm'/5 } Tile{ HalfReuse: 'e'/1 } ' '/8 Tile{ AsIs: e.Name#1/6 } Tile{ ]] }
    refalrts::alloc_char(vm, context[8], ' ');
    refalrts::reinit_char(context[0], 'N');
    refalrts::reinit_char(context[4], 'a');
    refalrts::reinit_char(context[5], 'm');
    refalrts::reinit_char(context[1], 'e');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SR-StrFromToken/4 # TkNumber/5 s.new#3/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_TkNumber], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[6], context[7] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;
    do {
      // </0 & SR-StrFromToken/4 # TkNumber/5 # Cookie1/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_Cookie1], context[8] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: 'N'/0 HalfReuse: 'u'/4 HalfReuse: 'm'/5 HalfReuse: 'b'/8 HalfReuse: 'e'/1 }"r <Cookie1>"/9 Tile{ ]] }
      refalrts::alloc_chars(vm, context[9], context[10], "r <Cookie1>", 11);
      refalrts::reinit_char(context[0], 'N');
      refalrts::reinit_char(context[4], 'u');
      refalrts::reinit_char(context[5], 'm');
      refalrts::reinit_char(context[8], 'b');
      refalrts::reinit_char(context[1], 'e');
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SR-StrFromToken/4 # TkNumber/5 # Cookie2/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_Cookie2], context[8] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: 'N'/0 HalfReuse: 'u'/4 HalfReuse: 'm'/5 HalfReuse: 'b'/8 HalfReuse: 'e'/1 }"r <Cookie2>"/9 Tile{ ]] }
      refalrts::alloc_chars(vm, context[9], context[10], "r <Cookie2>", 11);
      refalrts::reinit_char(context[0], 'N');
      refalrts::reinit_char(context[4], 'u');
      refalrts::reinit_char(context[5], 'm');
      refalrts::reinit_char(context[8], 'b');
      refalrts::reinit_char(context[1], 'e');
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & SR-StrFromToken/4 # TkNumber/5 s.Number#1/8 >/1
    //DEBUG: s.Number#1: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ }"Number"/9 Tile{ HalfReuse: ' '/0 HalfReuse: </4 HalfReuse: & Symb/5 AsIs: s.Number#1/8 AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[9], context[10], "Number", 6);
    refalrts::reinit_char(context[0], ' ');
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_Symb]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SR-StrFromToken/4 s.new#3/5 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    do {
      // </0 & SR-StrFromToken/4 # TkOpenADT/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_TkOpenADT], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: '\"'/4 HalfReuse: '['/5 HalfReuse: '\"'/1 ]] }
      refalrts::reinit_char(context[4], '\"');
      refalrts::reinit_char(context[5], '[');
      refalrts::reinit_char(context[1], '\"');
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[4];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SR-StrFromToken/4 # TkOpenCall/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_TkOpenCall], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: '\"'/4 HalfReuse: '<'/5 HalfReuse: '\"'/1 ]] }
      refalrts::reinit_char(context[4], '\"');
      refalrts::reinit_char(context[5], '<');
      refalrts::reinit_char(context[1], '\"');
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[4];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SR-StrFromToken/4 # TkOpenBlock/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_TkOpenBlock], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: '\"'/4 HalfReuse: '{'/5 HalfReuse: '\"'/1 ]] }
      refalrts::reinit_char(context[4], '\"');
      refalrts::reinit_char(context[5], '{');
      refalrts::reinit_char(context[1], '\"');
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[4];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SR-StrFromToken/4 # TkOpenBracket/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_TkOpenBracket], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: '\"'/4 HalfReuse: '('/5 HalfReuse: '\"'/1 ]] }
      refalrts::reinit_char(context[4], '\"');
      refalrts::reinit_char(context[5], '(');
      refalrts::reinit_char(context[1], '\"');
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[4];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SR-StrFromToken/4 # TkReplace/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_TkReplace], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: '\"'/4 HalfReuse: '='/5 HalfReuse: '\"'/1 ]] }
      refalrts::reinit_char(context[4], '\"');
      refalrts::reinit_char(context[5], '=');
      refalrts::reinit_char(context[1], '\"');
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[4];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SR-StrFromToken/4 # TkSemicolon/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_TkSemicolon], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: '\"'/4 HalfReuse: ';'/5 HalfReuse: '\"'/1 ]] }
      refalrts::reinit_char(context[4], '\"');
      refalrts::reinit_char(context[5], ';');
      refalrts::reinit_char(context[1], '\"');
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[4];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & SR-StrFromToken/4 # TkColon/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkColon], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\"'/4 HalfReuse: ':'/5 HalfReuse: '\"'/1 ]] }
    refalrts::reinit_char(context[4], '\"');
    refalrts::reinit_char(context[5], ':');
    refalrts::reinit_char(context[1], '\"');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SR-StrFromToken/4 # TkUnexpected/5 e.Unexpected#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_TkUnexpected], context[5] ) )
      continue;
    // closed e.Unexpected#1 as range 6
    //DEBUG: e.Unexpected#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ }"Unexpected character"/8 Tile{ HalfReuse: 's'/0 HalfReuse: ' '/4 HalfReuse: '<'/5 AsIs: e.Unexpected#1/6 HalfReuse: '>'/1 ]] }
    refalrts::alloc_chars(vm, context[8], context[9], "Unexpected character", 20);
    refalrts::reinit_char(context[0], 's');
    refalrts::reinit_char(context[4], ' ');
    refalrts::reinit_char(context[5], '<');
    refalrts::reinit_char(context[1], '>');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SR-StrFromToken/4 # TkVariable/5 s.Mode#1/8 e.Index#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[6], context[7] ) )
      continue;
    // closed e.Index#1 as range 6
    //DEBUG: s.Mode#1: 8
    //DEBUG: e.Index#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} # TkVariable/5 s.Mode#1/8 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: s.Mode1 #8/0 HalfReuse: '.'/4 } Tile{ AsIs: e.Index#1/6 } Tile{ ]] }
    refalrts::reinit_svar( context[0], context[8] );
    refalrts::reinit_char(context[4], '.');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SR-StrFromToken/4 # TkRedefinition/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkRedefinition], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\"'/4 HalfReuse: '^'/5 HalfReuse: '\"'/1 ]] }
    refalrts::reinit_char(context[4], '\"');
    refalrts::reinit_char(context[5], '^');
    refalrts::reinit_char(context[1], '\"');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SR-StrFromToken/4 # TkNativeBlock/5 e.Block#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_TkNativeBlock], context[5] ) )
      continue;
    // closed e.Block#1 as range 6
    //DEBUG: e.Block#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} e.Block#1/6 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'n'/0 HalfReuse: 'a'/4 HalfReuse: 't'/5 }"ive code insertio"/8 Tile{ HalfReuse: 'n'/1 ]] }
    refalrts::alloc_chars(vm, context[8], context[9], "ive code insertio", 17);
    refalrts::reinit_char(context[0], 'n');
    refalrts::reinit_char(context[4], 'a');
    refalrts::reinit_char(context[5], 't');
    refalrts::reinit_char(context[1], 'n');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::splice_to_freelist_open( vm, context[5], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SR-StrFromToken/4 s.new#3/5 s.new#4/6 >/1
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & SR-StrFromToken/4 # Open/5 s.OpenBracket#1/6 >/1
    if( ! refalrts::ident_term( identifiers[ident_Open], context[5] ) )
      continue;
    //DEBUG: s.OpenBracket#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & SR-StrFromToken/5 AsIs: s.OpenBracket#1/6 AsIs: >/1 ]] }
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_SRm_StrFromToken]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SR-StrFromToken/4 # Close/5 s.CloseBracket#1/6 >/1
  if( ! refalrts::ident_term( identifiers[ident_Close], context[5] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.CloseBracket#1: 6

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & SR-StrFromToken/5 AsIs: s.CloseBracket#1/6 AsIs: >/1 ]] }
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[5], functions[efunc_SRm_StrFromToken]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[4];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SRm_StrFromToken("SR-StrFromToken", 0U, 0U, func_SRm_StrFromToken);


static refalrts::FnResult func_gen_NormalizeToken_S14B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & NormalizeToken$14:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & NormalizeToken$14:1/4 e.Compound-B#3/7 '\000'/11 e.Compound-E#3/9 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[9] = context[5];
      context[10] = context[6];
      context[11] = refalrts::char_left( '\000', context[9], context[10] );
      if( ! context[11] )
        continue;
      // closed e.Compound-E#3 as range 9
      //DEBUG: e.Compound-B#3: 7
      //DEBUG: e.Compound-E#3: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} e.Compound-E#3/9 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/12 # TkWarning/13 # nul-in-compound/14 Tile{ HalfReuse: 'Z'/1 }"ero byte in compound symbol"/15 )/17 Tile{ HalfReuse: (/0 HalfReuse: # TkCompound/4 AsIs: e.Compound-B#3/7 HalfReuse: )/11 } Tile{ ]] }
      refalrts::alloc_open_bracket(vm, context[12]);
      refalrts::alloc_ident(vm, context[13], identifiers[ident_TkWarning]);
      refalrts::alloc_ident(vm, context[14], identifiers[ident_nulm_inm_compound]);
      refalrts::alloc_chars(vm, context[15], context[16], "ero byte in compound symbol", 27);
      refalrts::alloc_close_bracket(vm, context[17]);
      refalrts::reinit_char(context[1], 'Z');
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TkCompound]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::link_brackets( context[0], context[11] );
      refalrts::link_brackets( context[12], context[17] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[0], context[11] );
      res = refalrts::splice_evar( res, context[15], context[17] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[12], context[14] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & NormalizeToken$14:1/4 e.Compound#3/2 >/1
  // closed e.Compound#3 as range 2
  //DEBUG: e.Compound#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkCompound/4 AsIs: e.Compound#3/2 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_TkCompound]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_NormalizeToken_S14B1("NormalizeToken$14:1", COOKIE1_, COOKIE2_, func_gen_NormalizeToken_S14B1);


static refalrts::FnResult func_gen_NormalizeToken_S14A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & NormalizeToken$14=1/4 # Success/5 e.Compound#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = refalrts::ident_left( identifiers[ident_Success], context[2], context[3] );
  if( ! context[5] )
    return refalrts::cRecognitionImpossible;
  // closed e.Compound#2 as range 2
  //DEBUG: e.Compound#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & NormalizeToken$14:1/5 AsIs: e.Compound#2/2 AsIs: >/1 ]] }
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[5], functions[efunc_gen_NormalizeToken_S14B1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[4];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_NormalizeToken_S14A1("NormalizeToken$14=1", COOKIE1_, COOKIE2_, func_gen_NormalizeToken_S14A1);


static refalrts::FnResult func_gen_NormalizeToken_S19L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & NormalizeToken$19\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & NormalizeToken$19\1/4 '-'/7 e._#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = refalrts::char_left( '-', context[5], context[6] );
    if( ! context[7] )
      continue;
    // closed e._#2 as range 5
    //DEBUG: e._#2: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} e._#2/5 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkError/4 Reuse: 'V'/7 }"ariable index can\'t start from \'-\'"/8 Tile{ HalfReuse: )/1 ]] }
    refalrts::alloc_chars(vm, context[8], context[9], "ariable index can\'t start from \'-\'", 34);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_TkError]);
    refalrts::update_char(context[7], 'V');
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & NormalizeToken$19\1/4 e._#2/2 >/1
  // closed e._#2 as range 2
  //DEBUG: e._#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & NormalizeToken$19\1/4 e._#2/2 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_NormalizeToken_S19L1("NormalizeToken$19\\1", COOKIE1_, COOKIE2_, func_gen_NormalizeToken_S19L1);


static refalrts::FnResult func_NormalizeToken(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & NormalizeToken/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & NormalizeToken/4 (/7 s.new#1/9 e.new#2/5 )/8 >/1
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
  // closed e.new#2 as range 5
  do {
    // </0 & NormalizeToken/4 (/7 # TkDirective/9 e.Directive#1/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_TkDirective], context[9] ) )
      continue;
    // closed e.Directive#1 as range 10
    //DEBUG: e.Directive#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/7 # TkDirective/9 {REMOVED TILE} )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ValidDirective/4 } Tile{ AsIs: e.Directive#1/10 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_ValidDirective]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & NormalizeToken/4 (/7 # TkEOF/9 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkEOF], context[9] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & NormalizeToken/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TkEOF/9 AsIs: )/8 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & NormalizeToken/4 (/7 # TkLiteral-Char/9 s.Char#1/12 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_TkLiteralm_Char], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[12], context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    //DEBUG: s.Char#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & NormalizeToken/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # TkChar/9 AsIs: s.Char#1/12 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident(context[9], identifiers[ident_TkChar]);
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & NormalizeToken/4 (/7 # TkLiteral-Code/9 e.DecCode#1/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_TkLiteralm_Code], context[9] ) )
      continue;
    // closed e.DecCode#1 as range 10
    //DEBUG: e.DecCode#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/12 # TkChar/13 Tile{ AsIs: </0 Reuse: & Chr/4 HalfReuse: </7 HalfReuse: & Numb-Overflow/9 AsIs: e.DecCode#1/10 HalfReuse: >/8 AsIs: >/1 } )/14 Tile{ ]] }
    refalrts::alloc_open_bracket(vm, context[12]);
    refalrts::alloc_ident(vm, context[13], identifiers[ident_TkChar]);
    refalrts::alloc_close_bracket(vm, context[14]);
    refalrts::update_name(context[4], functions[efunc_Chr]);
    refalrts::reinit_open_call(context[7]);
    refalrts::reinit_name(context[9], functions[efunc_Numbm_Overflow]);
    refalrts::reinit_close_call(context[8]);
    refalrts::link_brackets( context[12], context[14] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & NormalizeToken/4 (/7 # TkLiteral-OCode/9 e.OctCode#1/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_TkLiteralm_OCode], context[9] ) )
      continue;
    // closed e.OctCode#1 as range 10
    //DEBUG: e.OctCode#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/12 Tile{ HalfReuse: # TkChar/0 HalfReuse: </4 HalfReuse: & CharFromNum/7 HalfReuse: 8/9 AsIs: e.OctCode#1/10 HalfReuse: >/8 HalfReuse: )/1 ]] }
    refalrts::alloc_open_bracket(vm, context[12]);
    refalrts::reinit_ident(context[0], identifiers[ident_TkChar]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[7], functions[efunc_CharFromNum]);
    refalrts::reinit_number(context[9], 8UL);
    refalrts::reinit_close_call(context[8]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[12], context[1] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[12], context[12] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & NormalizeToken/4 (/7 # TkLiteral-XCode/9 e.HexCode#1/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_TkLiteralm_XCode], context[9] ) )
      continue;
    // closed e.HexCode#1 as range 10
    //DEBUG: e.HexCode#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/12 Tile{ HalfReuse: # TkChar/0 HalfReuse: </4 HalfReuse: & CharFromNum/7 HalfReuse: 16/9 AsIs: e.HexCode#1/10 HalfReuse: >/8 HalfReuse: )/1 ]] }
    refalrts::alloc_open_bracket(vm, context[12]);
    refalrts::reinit_ident(context[0], identifiers[ident_TkChar]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[7], functions[efunc_CharFromNum]);
    refalrts::reinit_number(context[9], 16UL);
    refalrts::reinit_close_call(context[8]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[12], context[1] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[12], context[12] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & NormalizeToken/4 (/7 s.new#3/9 e.new#4/10 s.new#5/12 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::svar_right( context[12], context[10], context[11] ) )
      continue;
    // closed e.new#4 as range 10
    do {
      // </0 & NormalizeToken/4 (/7 s.new#6/9 s.new#7/12 )/8 >/1
      if( ! refalrts::empty_seq( context[10], context[11] ) )
        continue;
      do {
        // </0 & NormalizeToken/4 (/7 # TkLiteral-NewLine/9 'n'/12 )/8 >/1
        if( ! refalrts::char_term( 'n', context[12] ) )
          continue;
        if( ! refalrts::ident_term( identifiers[ident_TkLiteralm_NewLine], context[9] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & NormalizeToken/4 {REMOVED TILE} >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # TkChar/9 Reuse: '\n'/12 AsIs: )/8 } Tile{ ]] }
        refalrts::update_ident(context[9], identifiers[ident_TkChar]);
        refalrts::update_char(context[12], '\n');
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[7], context[8] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & NormalizeToken/4 (/7 # TkLiteral-CarriageReturn/9 'r'/12 )/8 >/1
        if( ! refalrts::char_term( 'r', context[12] ) )
          continue;
        if( ! refalrts::ident_term( identifiers[ident_TkLiteralm_CarriageReturn], context[9] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & NormalizeToken/4 {REMOVED TILE} >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # TkChar/9 Reuse: '\r'/12 AsIs: )/8 } Tile{ ]] }
        refalrts::update_ident(context[9], identifiers[ident_TkChar]);
        refalrts::update_char(context[12], '\r');
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[7], context[8] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & NormalizeToken/4 (/7 # TkLiteral-Tab/9 't'/12 )/8 >/1
        if( ! refalrts::char_term( 't', context[12] ) )
          continue;
        if( ! refalrts::ident_term( identifiers[ident_TkLiteralm_Tab], context[9] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & NormalizeToken/4 {REMOVED TILE} >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # TkChar/9 Reuse: '\t'/12 AsIs: )/8 } Tile{ ]] }
        refalrts::update_ident(context[9], identifiers[ident_TkChar]);
        refalrts::update_char(context[12], '\t');
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[7], context[8] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & NormalizeToken/4 (/7 # TkLiteral-Bell/9 'a'/12 )/8 >/1
        if( ! refalrts::char_term( 'a', context[12] ) )
          continue;
        if( ! refalrts::ident_term( identifiers[ident_TkLiteralm_Bell], context[9] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & NormalizeToken/4 {REMOVED TILE} >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # TkChar/9 Reuse: '\007'/12 AsIs: )/8 } Tile{ ]] }
        refalrts::update_ident(context[9], identifiers[ident_TkChar]);
        refalrts::update_char(context[12], '\007');
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[7], context[8] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & NormalizeToken/4 (/7 # TkLiteral-BS/9 'b'/12 )/8 >/1
        if( ! refalrts::char_term( 'b', context[12] ) )
          continue;
        if( ! refalrts::ident_term( identifiers[ident_TkLiteralm_BS], context[9] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & NormalizeToken/4 {REMOVED TILE} >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # TkChar/9 Reuse: '\010'/12 AsIs: )/8 } Tile{ ]] }
        refalrts::update_ident(context[9], identifiers[ident_TkChar]);
        refalrts::update_char(context[12], '\010');
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[7], context[8] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & NormalizeToken/4 (/7 # TkLiteral-FF/9 'f'/12 )/8 >/1
        if( ! refalrts::char_term( 'f', context[12] ) )
          continue;
        if( ! refalrts::ident_term( identifiers[ident_TkLiteralm_FF], context[9] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & NormalizeToken/4 {REMOVED TILE} >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # TkChar/9 Reuse: '\014'/12 AsIs: )/8 } Tile{ ]] }
        refalrts::update_ident(context[9], identifiers[ident_TkChar]);
        refalrts::update_char(context[12], '\014');
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[7], context[8] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & NormalizeToken/4 (/7 # TkLiteral-VT/9 'v'/12 )/8 >/1
      if( ! refalrts::char_term( 'v', context[12] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_TkLiteralm_VT], context[9] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & NormalizeToken/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # TkChar/9 Reuse: '\013'/12 AsIs: )/8 } Tile{ ]] }
      refalrts::update_ident(context[9], identifiers[ident_TkChar]);
      refalrts::update_char(context[12], '\013');
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & NormalizeToken/4 (/7 # TkCompound/9 '\"'/15 e.CompoundRep#1/13 '\"'/12 )/8 >/1
    context[13] = context[10];
    context[14] = context[11];
    if( ! refalrts::char_term( '\"', context[12] ) )
      continue;
    if( ! refalrts::ident_term( identifiers[ident_TkCompound], context[9] ) )
      continue;
    context[15] = refalrts::char_left( '\"', context[13], context[14] );
    if( ! context[15] )
      continue;
    // closed e.CompoundRep#1 as range 13
    //DEBUG: e.CompoundRep#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} '\"'/15 {REMOVED TILE} '\"'/12 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & NormalizeToken$14=1/4 HalfReuse: </7 HalfReuse: & UnEscapeString-SR/9 } Tile{ AsIs: e.CompoundRep#1/13 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_NormalizeToken_S14A1]);
    refalrts::reinit_open_call(context[7]);
    refalrts::reinit_name(context[9], functions[efunc_UnEscapeStringm_SR]);
    refalrts::reinit_close_call(context[8]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::splice_to_freelist_open( vm, context[9], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & NormalizeToken/4 (/7 # TkName/9 e.Name#1/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_TkName], context[9] ) )
      continue;
    // closed e.Name#1 as range 10
    //DEBUG: e.Name#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & NormalizeToken/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TkName/9 AsIs: e.Name#1/10 AsIs: )/8 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & NormalizeToken/4 (/7 # TkNewLine/9 e.Accumulated#1/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_TkNewLine], context[9] ) )
      continue;
    // closed e.Accumulated#1 as range 10
    //DEBUG: e.Accumulated#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & NormalizeToken/4 {REMOVED TILE} e.Accumulated#1/10 )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TkNewLine/9 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[7], context[9] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & NormalizeToken/4 (/7 # TkNumber/9 e.Digits#1/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_TkNumber], context[9] ) )
      continue;
    // closed e.Digits#1 as range 10
    //DEBUG: e.Digits#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkNumber/4 HalfReuse: </7 HalfReuse: & Numb-Overflow/9 AsIs: e.Digits#1/10 HalfReuse: >/8 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_TkNumber]);
    refalrts::reinit_open_call(context[7]);
    refalrts::reinit_name(context[9], functions[efunc_Numbm_Overflow]);
    refalrts::reinit_close_call(context[8]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[0], context[1] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[7] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & NormalizeToken/4 (/7 s.new#3/9 s.new#4/12 e.new#5/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::svar_left( context[12], context[10], context[11] ) )
      continue;
    // closed e.new#5 as range 10
    do {
      // </0 & NormalizeToken/4 (/7 # TkPunctuation/9 s.Punctuation#1/12 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_TkPunctuation], context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[10], context[11] ) )
        continue;
      //DEBUG: s.Punctuation#1: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: </7 HalfReuse: & SwPunctuation/9 AsIs: s.Punctuation#1/12 HalfReuse: >/8 HalfReuse: )/1 ]] }
      refalrts::reinit_open_bracket(context[4]);
      refalrts::reinit_open_call(context[7]);
      refalrts::reinit_name(context[9], functions[efunc_SwPunctuation]);
      refalrts::reinit_close_call(context[8]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[4], context[1] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[4];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & NormalizeToken/4 (/7 # TkVariable/9 s.new#6/12 '.'/15 e.new#7/13 )/8 >/1
    context[13] = context[10];
    context[14] = context[11];
    if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[9] ) )
      continue;
    context[15] = refalrts::char_left( '.', context[13], context[14] );
    if( ! context[15] )
      continue;
    // closed e.new#7 as range 13
    do {
      // </0 & NormalizeToken/4 (/7 # TkVariable/9 s.Type#1/12 '.'/15 '-'/18 e.#0/16 )/8 >/1
      context[16] = context[13];
      context[17] = context[14];
      context[18] = refalrts::char_left( '-', context[16], context[17] );
      if( ! context[18] )
        continue;
      // closed e.#0 as range 16
      //DEBUG: s.Type#1: 12
      //DEBUG: e.#0: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Type#1/12 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TkVariable/9 } Tile{ HalfReuse: s.Type1 #12/15 AsIs: '-'/18 AsIs: e.#0/16 AsIs: )/8 HalfReuse: (/1 } # TkError/19 Tile{ HalfReuse: 'V'/0 HalfReuse: 'a'/4 }"riable index can\'t start from \'-\'"/20 )/22 Tile{ ]] }
      refalrts::alloc_ident(vm, context[19], identifiers[ident_TkError]);
      refalrts::alloc_chars(vm, context[20], context[21], "riable index can\'t start from \'-\'", 33);
      refalrts::alloc_close_bracket(vm, context[22]);
      refalrts::reinit_svar( context[15], context[12] );
      refalrts::reinit_open_bracket(context[1]);
      refalrts::reinit_char(context[0], 'V');
      refalrts::reinit_char(context[4], 'a');
      refalrts::link_brackets( context[1], context[22] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[20], context[22] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[19], context[19] );
      res = refalrts::splice_evar( res, context[15], context[1] );
      res = refalrts::splice_evar( res, context[7], context[9] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & NormalizeToken/4 (/7 # TkVariable/9 s.Type#1/12 '.'/15 e.Index#1/16 )/8 >/1
    context[16] = context[13];
    context[17] = context[14];
    // closed e.Index#1 as range 16
    //DEBUG: s.Type#1: 12
    //DEBUG: e.Index#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & NormalizeToken/4 {REMOVED TILE} '.'/15 {REMOVED TILE} )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TkVariable/9 AsIs: s.Type#1/12 } Tile{ AsIs: e.Index#1/16 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[7], context[12] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & NormalizeToken/4 (/7 # TkNativeLine/9 e.Line#1/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_TkNativeLine], context[9] ) )
      continue;
    // closed e.Line#1 as range 10
    //DEBUG: e.Line#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkNativeLine/4 HalfReuse: </7 HalfReuse: & Trim-R/9 AsIs: e.Line#1/10 HalfReuse: >/8 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_TkNativeLine]);
    refalrts::reinit_open_call(context[7]);
    refalrts::reinit_name(context[9], functions[efunc_Trimm_R]);
    refalrts::reinit_close_call(context[8]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[0], context[1] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[7] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & NormalizeToken/4 (/7 # TkUnexpected/9 e.Unexpected#1/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_TkUnexpected], context[9] ) )
      continue;
    // closed e.Unexpected#1 as range 10
    //DEBUG: e.Unexpected#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & NormalizeToken/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TkUnexpected/9 AsIs: e.Unexpected#1/10 AsIs: )/8 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & NormalizeToken/4 (/7 & TokenError/9 e.Message#1/5 )/8 >/1
  if( ! refalrts::function_term( functions[efunc_TokenError], context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Message#1 as range 5
  //DEBUG: e.Message#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & NormalizeToken/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 HalfReuse: # TkError/9 AsIs: e.Message#1/5 AsIs: )/8 } Tile{ ]] }
  refalrts::reinit_ident(context[9], identifiers[ident_TkError]);
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_NormalizeToken("NormalizeToken", COOKIE1_, COOKIE2_, func_NormalizeToken);


static refalrts::FnResult func_gen_Numbm_Overflow_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & Numb-Overflow=1/4 e.HighMacrodigits#2/2 s.LastMacrodigit#2/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_right( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.HighMacrodigits#2 as range 2
  //DEBUG: s.LastMacrodigit#2: 5
  //DEBUG: e.HighMacrodigits#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Numb-Overflow=1/4 e.HighMacrodigits#2/2 s.LastMacrodigit#2/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: s.LastMacrodigit2 #5/1 ]] }
  refalrts::reinit_svar( context[1], context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Numbm_Overflow_A1("Numb-Overflow=1", COOKIE1_, COOKIE2_, func_gen_Numbm_Overflow_A1);


static refalrts::FnResult func_Numbm_Overflow(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & Numb-Overflow/4 e.Digits#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Digits#1 as range 2
  //DEBUG: e.Digits#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Numb-Overflow=1/6 Tile{ AsIs: </0 Reuse: & Numb/4 AsIs: e.Digits#1/2 AsIs: >/1 } >/7 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_Numbm_Overflow_A1]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_Numb]);
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Numbm_Overflow("Numb-Overflow", COOKIE1_, COOKIE2_, func_Numbm_Overflow);


static refalrts::FnResult func_gen_ValidDirective_S10L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & ValidDirective$10\1/4 s.Char#2/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Char#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkChar/4 AsIs: s.Char#2/5 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_TkChar]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ValidDirective_S10L1("ValidDirective$10\\1", COOKIE1_, COOKIE2_, func_gen_ValidDirective_S10L1);


static refalrts::FnResult func_ValidDirective(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & ValidDirective/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & ValidDirective/4 e.new#1/5 s.new#2/10 s.new#3/9 s.new#4/8 s.new#5/7 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_right( context[7], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_right( context[8], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_right( context[9], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_right( context[10], context[5], context[6] ) )
      continue;
    // closed e.new#1 as range 5
    do {
      // </0 & ValidDirective/4 e.new#6/11 'E'/10 'N'/9 'U'/8 'M'/7 >/1
      context[11] = context[5];
      context[12] = context[6];
      if( ! refalrts::char_term( 'E', context[10] ) )
        continue;
      if( ! refalrts::char_term( 'N', context[9] ) )
        continue;
      if( ! refalrts::char_term( 'U', context[8] ) )
        continue;
      if( ! refalrts::char_term( 'M', context[7] ) )
        continue;
      // closed e.new#6 as range 11
      do {
        // </0 & ValidDirective/4 'E'/10 'N'/9 'U'/8 'M'/7 >/1
        if( ! refalrts::empty_seq( context[11], context[12] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & ValidDirective/4 'E'/10 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: (/9 HalfReuse: # TkDirective/8 HalfReuse: # Enum/7 HalfReuse: )/1 ]] }
        refalrts::reinit_open_bracket(context[9]);
        refalrts::reinit_ident(context[8], identifiers[ident_TkDirective]);
        refalrts::reinit_ident(context[7], identifiers[ident_Enum]);
        refalrts::reinit_close_bracket(context[1]);
        refalrts::link_brackets( context[9], context[1] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[9];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ValidDirective/4 'E'/15 'E'/10 'N'/9 'U'/8 'M'/7 >/1
      context[13] = context[11];
      context[14] = context[12];
      context[15] = refalrts::char_left( 'E', context[13], context[14] );
      if( ! context[15] )
        continue;
      if( ! refalrts::empty_seq( context[13], context[14] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & ValidDirective/4 'E'/15 'E'/10 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/9 HalfReuse: # TkDirective/8 HalfReuse: # EEnum/7 HalfReuse: )/1 ]] }
      refalrts::reinit_open_bracket(context[9]);
      refalrts::reinit_ident(context[8], identifiers[ident_TkDirective]);
      refalrts::reinit_ident(context[7], identifiers[ident_EEnum]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[9], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[9];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ValidDirective/4 e.new#9/11 s.new#10/13 s.new#8/10 s.new#7/9 'R'/8 s.new#6/7 >/1
      context[11] = context[5];
      context[12] = context[6];
      if( ! refalrts::char_term( 'R', context[8] ) )
        continue;
      if( ! refalrts::svar_right( context[13], context[11], context[12] ) )
        continue;
      // closed e.new#9 as range 11
      do {
        // </0 & ValidDirective/4 'E'/13 'N'/10 'T'/9 'R'/8 'Y'/7 >/1
        if( ! refalrts::char_term( 'E', context[13] ) )
          continue;
        if( ! refalrts::char_term( 'N', context[10] ) )
          continue;
        if( ! refalrts::char_term( 'T', context[9] ) )
          continue;
        if( ! refalrts::char_term( 'Y', context[7] ) )
          continue;
        if( ! refalrts::empty_seq( context[11], context[12] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & ValidDirective/4 'E'/13 'N'/10 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: (/9 HalfReuse: # TkDirective/8 HalfReuse: # Entry/7 HalfReuse: )/1 ]] }
        refalrts::reinit_open_bracket(context[9]);
        refalrts::reinit_ident(context[8], identifiers[ident_TkDirective]);
        refalrts::reinit_ident(context[7], identifiers[ident_Entry]);
        refalrts::reinit_close_bracket(context[1]);
        refalrts::link_brackets( context[9], context[1] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[9];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ValidDirective/4 e.new#15/14 s.new#16/16 s.new#14/13 s.new#13/10 s.new#12/9 'R'/8 s.new#11/7 >/1
      context[14] = context[11];
      context[15] = context[12];
      if( ! refalrts::svar_right( context[16], context[14], context[15] ) )
        continue;
      // closed e.new#15 as range 14
      do {
        // </0 & ValidDirective/4 'E'/16 'X'/13 'T'/10 'E'/9 'R'/8 'N'/7 >/1
        if( ! refalrts::char_term( 'E', context[16] ) )
          continue;
        if( ! refalrts::char_term( 'X', context[13] ) )
          continue;
        if( ! refalrts::char_term( 'T', context[10] ) )
          continue;
        if( ! refalrts::char_term( 'E', context[9] ) )
          continue;
        if( ! refalrts::char_term( 'N', context[7] ) )
          continue;
        if( ! refalrts::empty_seq( context[14], context[15] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & ValidDirective/4 'E'/16 'X'/13 'T'/10 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: (/9 HalfReuse: # TkDirective/8 HalfReuse: # Extern/7 HalfReuse: )/1 ]] }
        refalrts::reinit_open_bracket(context[9]);
        refalrts::reinit_ident(context[8], identifiers[ident_TkDirective]);
        refalrts::reinit_ident(context[7], identifiers[ident_Extern]);
        refalrts::reinit_close_bracket(context[1]);
        refalrts::link_brackets( context[9], context[1] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[9];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ValidDirective/4 'F'/19 'O'/16 'R'/13 'W'/10 'A'/9 'R'/8 'D'/7 >/1
      context[17] = context[14];
      context[18] = context[15];
      if( ! refalrts::char_term( 'O', context[16] ) )
        continue;
      if( ! refalrts::char_term( 'R', context[13] ) )
        continue;
      if( ! refalrts::char_term( 'W', context[10] ) )
        continue;
      if( ! refalrts::char_term( 'A', context[9] ) )
        continue;
      if( ! refalrts::char_term( 'D', context[7] ) )
        continue;
      context[19] = refalrts::char_left( 'F', context[17], context[18] );
      if( ! context[19] )
        continue;
      if( ! refalrts::empty_seq( context[17], context[18] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & ValidDirective/4 'F'/19 'O'/16 'R'/13 'W'/10 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/9 HalfReuse: # TkDirective/8 HalfReuse: # Forward/7 HalfReuse: )/1 ]] }
      refalrts::reinit_open_bracket(context[9]);
      refalrts::reinit_ident(context[8], identifiers[ident_TkDirective]);
      refalrts::reinit_ident(context[7], identifiers[ident_Forward]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[9], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[9];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ValidDirective/4 e.new#6/11 'S'/10 'W'/9 'A'/8 'P'/7 >/1
      context[11] = context[5];
      context[12] = context[6];
      if( ! refalrts::char_term( 'S', context[10] ) )
        continue;
      if( ! refalrts::char_term( 'W', context[9] ) )
        continue;
      if( ! refalrts::char_term( 'A', context[8] ) )
        continue;
      if( ! refalrts::char_term( 'P', context[7] ) )
        continue;
      // closed e.new#6 as range 11
      do {
        // </0 & ValidDirective/4 'S'/10 'W'/9 'A'/8 'P'/7 >/1
        if( ! refalrts::empty_seq( context[11], context[12] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & ValidDirective/4 'S'/10 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: (/9 HalfReuse: # TkDirective/8 HalfReuse: # Swap/7 HalfReuse: )/1 ]] }
        refalrts::reinit_open_bracket(context[9]);
        refalrts::reinit_ident(context[8], identifiers[ident_TkDirective]);
        refalrts::reinit_ident(context[7], identifiers[ident_Swap]);
        refalrts::reinit_close_bracket(context[1]);
        refalrts::link_brackets( context[9], context[1] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[9];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ValidDirective/4 'E'/15 'S'/10 'W'/9 'A'/8 'P'/7 >/1
      context[13] = context[11];
      context[14] = context[12];
      context[15] = refalrts::char_left( 'E', context[13], context[14] );
      if( ! context[15] )
        continue;
      if( ! refalrts::empty_seq( context[13], context[14] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & ValidDirective/4 'E'/15 'S'/10 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/9 HalfReuse: # TkDirective/8 HalfReuse: # ESwap/7 HalfReuse: )/1 ]] }
      refalrts::reinit_open_bracket(context[9]);
      refalrts::reinit_ident(context[8], identifiers[ident_TkDirective]);
      refalrts::reinit_ident(context[7], identifiers[ident_ESwap]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[9], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[9];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ValidDirective/4 e.new#10/11 s.new#11/13 s.new#9/10 s.new#8/9 s.new#7/8 s.new#6/7 >/1
      context[11] = context[5];
      context[12] = context[6];
      if( ! refalrts::svar_right( context[13], context[11], context[12] ) )
        continue;
      // closed e.new#10 as range 11
      do {
        // </0 & ValidDirective/4 'L'/13 'A'/10 'B'/9 'E'/8 'L'/7 >/1
        if( ! refalrts::char_term( 'L', context[13] ) )
          continue;
        if( ! refalrts::char_term( 'A', context[10] ) )
          continue;
        if( ! refalrts::char_term( 'B', context[9] ) )
          continue;
        if( ! refalrts::char_term( 'E', context[8] ) )
          continue;
        if( ! refalrts::char_term( 'L', context[7] ) )
          continue;
        if( ! refalrts::empty_seq( context[11], context[12] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & ValidDirective/4 'L'/13 'A'/10 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: (/9 HalfReuse: # TkDirective/8 HalfReuse: # Ident/7 HalfReuse: )/1 ]] }
        refalrts::reinit_open_bracket(context[9]);
        refalrts::reinit_ident(context[8], identifiers[ident_TkDirective]);
        refalrts::reinit_ident(context[7], identifiers[ident_Ident]);
        refalrts::reinit_close_bracket(context[1]);
        refalrts::link_brackets( context[9], context[1] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[9];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ValidDirective/4 e.new#17/14 s.new#18/17 s.new#19/16 s.new#16/13 s.new#15/10 s.new#14/9 s.new#13/8 s.new#12/7 >/1
      context[14] = context[11];
      context[15] = context[12];
      if( ! refalrts::svar_right( context[16], context[14], context[15] ) )
        continue;
      if( ! refalrts::svar_right( context[17], context[14], context[15] ) )
        continue;
      // closed e.new#17 as range 14
      do {
        // </0 & ValidDirective/4 'I'/17 'N'/16 'C'/13 'L'/10 'U'/9 'D'/8 'E'/7 >/1
        if( ! refalrts::char_term( 'I', context[17] ) )
          continue;
        if( ! refalrts::char_term( 'N', context[16] ) )
          continue;
        if( ! refalrts::char_term( 'C', context[13] ) )
          continue;
        if( ! refalrts::char_term( 'L', context[10] ) )
          continue;
        if( ! refalrts::char_term( 'U', context[9] ) )
          continue;
        if( ! refalrts::char_term( 'D', context[8] ) )
          continue;
        if( ! refalrts::char_term( 'E', context[7] ) )
          continue;
        if( ! refalrts::empty_seq( context[14], context[15] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & ValidDirective/4 'I'/17 'N'/16 'C'/13 'L'/10 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: (/9 HalfReuse: # TkDirective/8 HalfReuse: # Include/7 HalfReuse: )/1 ]] }
        refalrts::reinit_open_bracket(context[9]);
        refalrts::reinit_ident(context[8], identifiers[ident_TkDirective]);
        refalrts::reinit_ident(context[7], identifiers[ident_Include]);
        refalrts::reinit_close_bracket(context[1]);
        refalrts::link_brackets( context[9], context[1] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[9];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ValidDirective/4 e.new#25/18 'S'/17 s.new#24/16 s.new#23/13 s.new#22/10 'E'/9 s.new#21/8 s.new#20/7 >/1
      context[18] = context[14];
      context[19] = context[15];
      if( ! refalrts::char_term( 'S', context[17] ) )
        continue;
      if( ! refalrts::char_term( 'E', context[9] ) )
        continue;
      // closed e.new#25 as range 18
      do {
        // </0 & ValidDirective/4 'E'/22 'A'/23 'S'/17 'T'/16 'E'/13 'R'/10 'E'/9 'G'/8 'G'/7 >/1
        context[20] = context[18];
        context[21] = context[19];
        if( ! refalrts::char_term( 'T', context[16] ) )
          continue;
        if( ! refalrts::char_term( 'E', context[13] ) )
          continue;
        if( ! refalrts::char_term( 'R', context[10] ) )
          continue;
        if( ! refalrts::char_term( 'G', context[8] ) )
          continue;
        if( ! refalrts::char_term( 'G', context[7] ) )
          continue;
        context[22] = refalrts::char_left( 'E', context[20], context[21] );
        if( ! context[22] )
          continue;
        context[23] = refalrts::char_left( 'A', context[20], context[21] );
        if( ! context[23] )
          continue;
        if( ! refalrts::empty_seq( context[20], context[21] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@2/4 Reuse: 'M'/22 Reuse: 'e'/23 Reuse: 'd'/17 Reuse: 'v'/16 Reuse: 'e'/13 Reuse: 'd'/10 Reuse: 'n'/9 Reuse: 'o'/8 Reuse: '-'/7 HalfReuse: 'o'/1 }"rientirovannoe programmirovanie"/24 >/26 Tile{ ]] }
        refalrts::alloc_chars(vm, context[24], context[25], "rientirovannoe programmirovanie", 31);
        refalrts::alloc_close_call(vm, context[26]);
        refalrts::update_name(context[4], functions[efunc_gen_Map_Z2]);
        refalrts::update_char(context[22], 'M');
        refalrts::update_char(context[23], 'e');
        refalrts::update_char(context[17], 'd');
        refalrts::update_char(context[16], 'v');
        refalrts::update_char(context[13], 'e');
        refalrts::update_char(context[10], 'd');
        refalrts::update_char(context[9], 'n');
        refalrts::update_char(context[8], 'o');
        refalrts::update_char(context[7], '-');
        refalrts::reinit_char(context[1], 'o');
        refalrts::push_stack( vm, context[26] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[24], context[26] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ValidDirective/4 'S'/17 'C'/16 'O'/13 'P'/10 'E'/9 'I'/8 'D'/7 >/1
      if( ! refalrts::char_term( 'C', context[16] ) )
        continue;
      if( ! refalrts::char_term( 'O', context[13] ) )
        continue;
      if( ! refalrts::char_term( 'P', context[10] ) )
        continue;
      if( ! refalrts::char_term( 'I', context[8] ) )
        continue;
      if( ! refalrts::char_term( 'D', context[7] ) )
        continue;
      if( ! refalrts::empty_seq( context[18], context[19] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & ValidDirective/4 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/17 HalfReuse: # TkNumber/16 HalfReuse: # Cookie1/13 HalfReuse: )/10 HalfReuse: (/9 HalfReuse: # TkNumber/8 HalfReuse: # Cookie2/7 HalfReuse: )/1 ]] }
      refalrts::reinit_open_bracket(context[17]);
      refalrts::reinit_ident(context[16], identifiers[ident_TkNumber]);
      refalrts::reinit_ident(context[13], identifiers[ident_Cookie1]);
      refalrts::reinit_close_bracket(context[10]);
      refalrts::reinit_open_bracket(context[9]);
      refalrts::reinit_ident(context[8], identifiers[ident_TkNumber]);
      refalrts::reinit_ident(context[7], identifiers[ident_Cookie2]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[9], context[1] );
      refalrts::link_brackets( context[17], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[17];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ValidDirective/4 s.new#9/10 s.new#8/9 s.new#7/8 s.new#6/7 >/1
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    do {
      // </0 & ValidDirective/4 'S'/10 'P'/9 'E'/8 'C'/7 >/1
      if( ! refalrts::char_term( 'S', context[10] ) )
        continue;
      if( ! refalrts::char_term( 'P', context[9] ) )
        continue;
      if( ! refalrts::char_term( 'E', context[8] ) )
        continue;
      if( ! refalrts::char_term( 'C', context[7] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & ValidDirective/4 'S'/10 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/9 HalfReuse: # TkDirective/8 HalfReuse: # Spec/7 HalfReuse: )/1 ]] }
      refalrts::reinit_open_bracket(context[9]);
      refalrts::reinit_ident(context[8], identifiers[ident_TkDirective]);
      refalrts::reinit_ident(context[7], identifiers[ident_Spec]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[9], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[9];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ValidDirective/4 'M'/10 'E'/9 'T'/8 'A'/7 >/1
    if( ! refalrts::char_term( 'M', context[10] ) )
      continue;
    if( ! refalrts::char_term( 'E', context[9] ) )
      continue;
    if( ! refalrts::char_term( 'T', context[8] ) )
      continue;
    if( ! refalrts::char_term( 'A', context[7] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & ValidDirective/4 'M'/10 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/9 HalfReuse: # TkDirective/8 HalfReuse: # Meta/7 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket(context[9]);
    refalrts::reinit_ident(context[8], identifiers[ident_TkDirective]);
    refalrts::reinit_ident(context[7], identifiers[ident_Meta]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[9], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ValidDirective/4 e.Other#1/2 >/1
  // closed e.Other#1 as range 2
  //DEBUG: e.Other#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/5 # TkError/6"Unknown directive"/7 Tile{ HalfReuse: ' '/0 HalfReuse: '$'/4 AsIs: e.Other#1/2 HalfReuse: )/1 ]] }
  refalrts::alloc_open_bracket(vm, context[5]);
  refalrts::alloc_ident(vm, context[6], identifiers[ident_TkError]);
  refalrts::alloc_chars(vm, context[7], context[8], "Unknown directive", 17);
  refalrts::reinit_char(context[0], ' ');
  refalrts::reinit_char(context[4], '$');
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[5], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ValidDirective("ValidDirective", COOKIE1_, COOKIE2_, func_ValidDirective);


static refalrts::FnResult func_SwPunctuation(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & SwPunctuation/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & SwPunctuation/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & SwPunctuation/4 '<'/5 >/1
    if( ! refalrts::char_term( '<', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SwPunctuation/4 '<'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # TkOpenCall/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_TkOpenCall]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SwPunctuation/4 '>'/5 >/1
    if( ! refalrts::char_term( '>', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SwPunctuation/4 '>'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # TkCloseCall/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_TkCloseCall]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SwPunctuation/4 '{'/5 >/1
    if( ! refalrts::char_term( '{', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SwPunctuation/4 '{'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # TkOpenBlock/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_TkOpenBlock]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SwPunctuation/4 '}'/5 >/1
    if( ! refalrts::char_term( '}', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SwPunctuation/4 '}'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # TkCloseBlock/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_TkCloseBlock]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SwPunctuation/4 '('/5 >/1
    if( ! refalrts::char_term( '(', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SwPunctuation/4 '('/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # TkOpenBracket/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_TkOpenBracket]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SwPunctuation/4 ')'/5 >/1
    if( ! refalrts::char_term( ')', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SwPunctuation/4 ')'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # TkCloseBracket/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_TkCloseBracket]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SwPunctuation/4 '='/5 >/1
    if( ! refalrts::char_term( '=', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SwPunctuation/4 '='/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # TkReplace/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_TkReplace]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SwPunctuation/4 ','/5 >/1
    if( ! refalrts::char_term( ',', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SwPunctuation/4 ','/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # TkComma/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_TkComma]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SwPunctuation/4 ';'/5 >/1
    if( ! refalrts::char_term( ';', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SwPunctuation/4 ';'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # TkSemicolon/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_TkSemicolon]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SwPunctuation/4 ':'/5 >/1
    if( ! refalrts::char_term( ':', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SwPunctuation/4 ':'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # TkColon/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_TkColon]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SwPunctuation/4 '['/5 >/1
    if( ! refalrts::char_term( '[', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SwPunctuation/4 '['/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # TkOpenADT/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_TkOpenADT]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SwPunctuation/4 ']'/5 >/1
    if( ! refalrts::char_term( ']', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SwPunctuation/4 ']'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # TkCloseADT/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_TkCloseADT]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SwPunctuation/4 '#'/5 >/1
    if( ! refalrts::char_term( '#', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SwPunctuation/4 '#'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # TkIdentMarker/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_TkIdentMarker]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SwPunctuation/4 '^'/5 >/1
  if( ! refalrts::char_term( '^', context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & SwPunctuation/4 '^'/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # TkRedefinition/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_TkRedefinition]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SwPunctuation("SwPunctuation", COOKIE1_, COOKIE2_, func_SwPunctuation);


static refalrts::FnResult func_AddLineNumber(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & AddLineNumber/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & AddLineNumber/4 s.new#1/9 (/7 s.new#2/10 e.new#3/5 )/8 >/1
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
  // closed e.new#3 as range 5
  do {
    // </0 & AddLineNumber/4 s.LineNumber#1/9 (/7 # TkNewLine/10 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkNewLine], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    //DEBUG: s.LineNumber#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} & AddLineNumber/4 s.LineNumber#1/9 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & Add/7 HalfReuse: 1/10 HalfReuse: s.LineNumber1 #9/8 AsIs: >/1 ]] }
    refalrts::reinit_name(context[7], functions[efunc_Add]);
    refalrts::reinit_number(context[10], 1UL);
    refalrts::reinit_svar( context[8], context[9] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    refalrts::splice_to_freelist_open( vm, context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & AddLineNumber/4 s.LineNumber#1/9 (/7 # TkNativeLine/10 e.Line#1/11 )/8 >/1
    context[11] = context[5];
    context[12] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_TkNativeLine], context[10] ) )
      continue;
    // closed e.Line#1 as range 11
    //DEBUG: s.LineNumber#1: 9
    //DEBUG: e.Line#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 } 1/13 Tile{ AsIs: s.LineNumber#1/9 } Tile{ AsIs: >/1 } (/14 Tile{ HalfReuse: # TkNativeLine/7 HalfReuse: s.LineNumber1 #9/10 AsIs: e.Line#1/11 AsIs: )/8 } Tile{ ]] }
    refalrts::alloc_number(vm, context[13], 1UL);
    refalrts::alloc_open_bracket(vm, context[14]);
    refalrts::update_name(context[4], functions[efunc_Add]);
    refalrts::reinit_ident(context[7], identifiers[ident_TkNativeLine]);
    refalrts::reinit_svar( context[10], context[9] );
    refalrts::link_brackets( context[14], context[8] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AddLineNumber/4 s.LineNumber#1/9 (/7 s.TokType#1/10 e.Info#1/5 )/8 >/1
  // closed e.Info#1 as range 5
  //DEBUG: s.LineNumber#1: 9
  //DEBUG: s.TokType#1: 10
  //DEBUG: e.Info#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & AddLineNumber/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: s.LineNumber#1/9 AsIs: (/7 AsIs: s.TokType#1/10 } Tile{ HalfReuse: s.LineNumber1 #9/8 } Tile{ AsIs: e.Info#1/5 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_svar( context[8], context[9] );
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[7], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_AddLineNumber("AddLineNumber", COOKIE1_, COOKIE2_, func_AddLineNumber);


static refalrts::FnResult func_NormalizeTokens(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & NormalizeTokens/4 e.Tokens#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Tokens#1 as range 2
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Fetch@1/6 Tile{ AsIs: </0 Reuse: & Map@3/4 AsIs: e.Tokens#1/2 AsIs: >/1 } >/7 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_Fetch_Z1]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z3]);
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_NormalizeTokens("NormalizeTokens", COOKIE1_, COOKIE2_, func_NormalizeTokens);


static refalrts::FnResult func_CollectNativeLines(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & CollectNativeLines/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & CollectNativeLines/4 e.SimpleTokens#1/7 (/13 # TkNativeLine/15 s.LineNumber#1/16 e.Line#1/11 )/14 e.Tail#1/9 >/1
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
      context[15] = refalrts::ident_left( identifiers[ident_TkNativeLine], context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.Tail#1 as range 9
      if( ! refalrts::svar_left( context[16], context[11], context[12] ) )
        continue;
      // closed e.Line#1 as range 11
      //DEBUG: e.SimpleTokens#1: 7
      //DEBUG: e.Tail#1: 9
      //DEBUG: s.LineNumber#1: 16
      //DEBUG: e.Line#1: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.SimpleTokens#1/7 } Tile{ AsIs: </0 Reuse: & CollectNativeLines-Aux/4 } Tile{ AsIs: s.LineNumber#1/16 } Tile{ AsIs: (/13 HalfReuse: (/15 } Tile{ AsIs: e.Line#1/11 } )/17 Tile{ AsIs: )/14 AsIs: e.Tail#1/9 AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[17]);
      refalrts::update_name(context[4], functions[efunc_CollectNativeLinesm_Aux]);
      refalrts::reinit_open_bracket(context[15]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::link_brackets( context[15], context[17] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[14];
      res = refalrts::splice_evar( res, context[17], context[17] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[13], context[15] );
      res = refalrts::splice_evar( res, context[16], context[16] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CollectNativeLines/4 e.SimpleTokens#1/2 >/1
  // closed e.SimpleTokens#1 as range 2
  //DEBUG: e.SimpleTokens#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CollectNativeLines/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.SimpleTokens#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CollectNativeLines("CollectNativeLines", COOKIE1_, COOKIE2_, func_CollectNativeLines);


static refalrts::FnResult func_CollectNativeLinesm_Aux(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & CollectNativeLines-Aux/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CollectNativeLines-Aux/4 s.new#1/5 (/8 e.new#2/6 )/9 e.new#3/2 >/1
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
    // </0 & CollectNativeLines-Aux/4 s.StartLineNumber#1/5 (/8 e.Block#1/10 )/9 (/16 # TkNativeLine/18 s.LineNumber#1/19 e.Line#1/14 )/17 e.Tail#1/12 >/1
    context[10] = context[6];
    context[11] = context[7];
    context[12] = context[2];
    context[13] = context[3];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left( identifiers[ident_TkNativeLine], context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.Block#1 as range 10
    // closed e.Tail#1 as range 12
    if( ! refalrts::svar_left( context[19], context[14], context[15] ) )
      continue;
    // closed e.Line#1 as range 14
    //DEBUG: s.StartLineNumber#1: 5
    //DEBUG: e.Block#1: 10
    //DEBUG: e.Tail#1: 12
    //DEBUG: s.LineNumber#1: 19
    //DEBUG: e.Line#1: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/16 {REMOVED TILE} s.LineNumber#1/19 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & CollectNativeLines-Aux/4 AsIs: s.StartLineNumber#1/5 AsIs: (/8 AsIs: e.Block#1/10 HalfReuse: (/9 } Tile{ AsIs: e.Line#1/14 } Tile{ HalfReuse: )/18 } Tile{ AsIs: )/17 AsIs: e.Tail#1/12 AsIs: >/1 ]] }
    refalrts::reinit_open_bracket(context[9]);
    refalrts::reinit_close_bracket(context[18]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[8], context[17] );
    refalrts::link_brackets( context[9], context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[17];
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::splice_to_freelist_open( vm, context[9], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CollectNativeLines-Aux/4 s.StartLineNumber#1/5 (/8 e.Block#1/6 )/9 e.Tail#1/2 >/1
  // closed e.Block#1 as range 6
  // closed e.Tail#1 as range 2
  //DEBUG: s.StartLineNumber#1: 5
  //DEBUG: e.Block#1: 6
  //DEBUG: e.Tail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkNativeBlock/4 AsIs: s.StartLineNumber#1/5 } Tile{ AsIs: e.Block#1/6 } Tile{ HalfReuse: )/8 } </10 Tile{ HalfReuse: & CollectNativeLines/9 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_TkNativeBlock]);
  refalrts::reinit_close_bracket(context[8]);
  refalrts::reinit_name(context[9], functions[efunc_CollectNativeLines]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[10] );
  refalrts::link_brackets( context[0], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[9];
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CollectNativeLinesm_Aux("CollectNativeLines-Aux", COOKIE1_, COOKIE2_, func_CollectNativeLinesm_Aux);


static refalrts::FnResult func_Root(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & Root/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Root/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Root/4 (/7 e.Accum#1/9 )/8 '%'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '%', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/7 e.Accum#1/9 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & StartNative-Percent/4 } Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_StartNativem_Percent]);
    refalrts::reinit_open_bracket(context[8]);
    refalrts::reinit_close_bracket(context[13]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[8], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Root/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2
  //DEBUG: e.Accum#1: 5
  //DEBUG: e.Text#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Main/4 AsIs: (/7 AsIs: e.Accum#1/5 AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_Main]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Root("Root", COOKIE1_, COOKIE2_, func_Root);


static refalrts::FnResult func_StartNativem_Percent(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & StartNative-Percent/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & StartNative-Percent/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & StartNative-Percent/4 (/7 e.Accum#1/9 )/8 '%'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '%', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/7 e.Accum#1/9 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & StartNative-NewLine/4 } Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_StartNativem_NewLine]);
    refalrts::reinit_open_bracket(context[8]);
    refalrts::reinit_close_bracket(context[13]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[8], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & StartNative-Percent/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2
  //DEBUG: e.Accum#1: 5
  //DEBUG: e.Text#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Accum#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 & TokenError/10"Native inlines expects two percents"/11 )/13 Tile{ AsIs: </0 Reuse: & Main/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_TokenError]);
  refalrts::alloc_chars(vm, context[11], context[12], "Native inlines expects two percents", 35);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_Main]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[9], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_StartNativem_Percent("StartNative-Percent", COOKIE1_, COOKIE2_, func_StartNativem_Percent);


static refalrts::FnResult func_Main(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & Main/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Main/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Main/4 (/7 e.new#5/9 )/8 s.new#3/13 e.new#4/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.new#5 as range 9
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    // closed e.new#4 as range 11
    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 ' '/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( ' ', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} e.Accum#1/14 )/8 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Main/4 AsIs: (/7 } Tile{ HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[13];
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 '\t'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '\t', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} e.Accum#1/14 )/8 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Main/4 AsIs: (/7 } Tile{ HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[13];
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 '\r'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '\r', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} e.Accum#1/14 )/8 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Main/4 AsIs: (/7 } Tile{ HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[13];
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 '<'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '<', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TkPunctuation/18 Tile{ AsIs: e.Accum#1/14 } '<'/19 )/20 Tile{ AsIs: </0 AsIs: & Main/4 } Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[18], identifiers[ident_TkPunctuation]);
      refalrts::alloc_char(vm, context[19], '<');
      refalrts::alloc_close_bracket(vm, context[20]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::link_brackets( context[7], context[20] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 '>'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '>', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TkPunctuation/18 Tile{ AsIs: e.Accum#1/14 } '>'/19 )/20 Tile{ AsIs: </0 AsIs: & Main/4 } Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[18], identifiers[ident_TkPunctuation]);
      refalrts::alloc_char(vm, context[19], '>');
      refalrts::alloc_close_bracket(vm, context[20]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::link_brackets( context[7], context[20] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 '('/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '(', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TkPunctuation/18 Tile{ AsIs: e.Accum#1/14 } '('/19 )/20 Tile{ AsIs: </0 AsIs: & Main/4 } Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[18], identifiers[ident_TkPunctuation]);
      refalrts::alloc_char(vm, context[19], '(');
      refalrts::alloc_close_bracket(vm, context[20]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::link_brackets( context[7], context[20] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 ')'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( ')', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TkPunctuation/18 Tile{ AsIs: e.Accum#1/14 } ')'/19 )/20 Tile{ AsIs: </0 AsIs: & Main/4 } Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[18], identifiers[ident_TkPunctuation]);
      refalrts::alloc_char(vm, context[19], ')');
      refalrts::alloc_close_bracket(vm, context[20]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::link_brackets( context[7], context[20] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 '{'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '{', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TkPunctuation/18 Tile{ AsIs: e.Accum#1/14 } '{'/19 )/20 Tile{ AsIs: </0 AsIs: & Main/4 } Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[18], identifiers[ident_TkPunctuation]);
      refalrts::alloc_char(vm, context[19], '{');
      refalrts::alloc_close_bracket(vm, context[20]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::link_brackets( context[7], context[20] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 '}'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '}', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TkPunctuation/18 Tile{ AsIs: e.Accum#1/14 } '}'/19 )/20 Tile{ AsIs: </0 AsIs: & Main/4 } Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[18], identifiers[ident_TkPunctuation]);
      refalrts::alloc_char(vm, context[19], '}');
      refalrts::alloc_close_bracket(vm, context[20]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::link_brackets( context[7], context[20] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 '['/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '[', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TkPunctuation/18 Tile{ AsIs: e.Accum#1/14 } '['/19 )/20 Tile{ AsIs: </0 AsIs: & Main/4 } Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[18], identifiers[ident_TkPunctuation]);
      refalrts::alloc_char(vm, context[19], '[');
      refalrts::alloc_close_bracket(vm, context[20]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::link_brackets( context[7], context[20] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 ']'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( ']', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TkPunctuation/18 Tile{ AsIs: e.Accum#1/14 } ']'/19 )/20 Tile{ AsIs: </0 AsIs: & Main/4 } Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[18], identifiers[ident_TkPunctuation]);
      refalrts::alloc_char(vm, context[19], ']');
      refalrts::alloc_close_bracket(vm, context[20]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::link_brackets( context[7], context[20] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 '='/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '=', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TkPunctuation/18 Tile{ AsIs: e.Accum#1/14 } '='/19 )/20 Tile{ AsIs: </0 AsIs: & Main/4 } Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[18], identifiers[ident_TkPunctuation]);
      refalrts::alloc_char(vm, context[19], '=');
      refalrts::alloc_close_bracket(vm, context[20]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::link_brackets( context[7], context[20] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 ';'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( ';', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TkPunctuation/18 Tile{ AsIs: e.Accum#1/14 } ';'/19 )/20 Tile{ AsIs: </0 AsIs: & Main/4 } Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[18], identifiers[ident_TkPunctuation]);
      refalrts::alloc_char(vm, context[19], ';');
      refalrts::alloc_close_bracket(vm, context[20]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::link_brackets( context[7], context[20] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 ':'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( ':', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TkPunctuation/18 Tile{ AsIs: e.Accum#1/14 } ':'/19 )/20 Tile{ AsIs: </0 AsIs: & Main/4 } Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[18], identifiers[ident_TkPunctuation]);
      refalrts::alloc_char(vm, context[19], ':');
      refalrts::alloc_close_bracket(vm, context[20]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::link_brackets( context[7], context[20] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 ','/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( ',', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TkPunctuation/18 Tile{ AsIs: e.Accum#1/14 } ','/19 )/20 Tile{ AsIs: </0 AsIs: & Main/4 } Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[18], identifiers[ident_TkPunctuation]);
      refalrts::alloc_char(vm, context[19], ',');
      refalrts::alloc_close_bracket(vm, context[20]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::link_brackets( context[7], context[20] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 '#'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '#', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TkPunctuation/18 Tile{ AsIs: e.Accum#1/14 } '#'/19 )/20 Tile{ AsIs: </0 AsIs: & Main/4 } Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[18], identifiers[ident_TkPunctuation]);
      refalrts::alloc_char(vm, context[19], '#');
      refalrts::alloc_close_bracket(vm, context[20]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::link_brackets( context[7], context[20] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 '^'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '^', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TkPunctuation/18 Tile{ AsIs: e.Accum#1/14 } '^'/19 )/20 Tile{ AsIs: </0 AsIs: & Main/4 } Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[18], identifiers[ident_TkPunctuation]);
      refalrts::alloc_char(vm, context[19], '^');
      refalrts::alloc_close_bracket(vm, context[20]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::link_brackets( context[7], context[20] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 's'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 's', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableStart/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 's'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableStart]);
      refalrts::reinit_char(context[8], 's');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 'e'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'e', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableStart/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'e'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableStart]);
      refalrts::reinit_char(context[8], 'e');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 't'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 't', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableStart/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 't'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableStart]);
      refalrts::reinit_char(context[8], 't');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 'a'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'a', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'a'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'a');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 'b'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'b', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'b'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'b');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 'c'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'c', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'c'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'c');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 'd'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'd', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'd'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'd');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 'f'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'f', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'f'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'f');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 'g'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'g', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'g'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'g');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 'h'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'h', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'h'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'h');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 'i'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'i', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'i'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'i');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 'j'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'j', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'j'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'j');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 'k'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'k', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'k'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'k');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 'l'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'l', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'l'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'l');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 'm'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'm', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'm'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'm');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 'n'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'n', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'n'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'n');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 'o'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'o', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'o'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'o');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 'p'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'p', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'p'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'p');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 'q'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'q', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'q'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'q');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 'r'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'r', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'r'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'r');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 'u'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'u', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'u'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'u');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 'v'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'v', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'v'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'v');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 'w'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'w', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'w'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'w');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 'x'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'x', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'x'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'x');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 'y'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'y', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'y'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'y');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 'z'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'z', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'z'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'z');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 'A'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'A', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'A'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'A');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 'B'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'B', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'B'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'B');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 'C'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'C', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'C'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'C');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 'D'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'D', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'D'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'D');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 'E'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'E', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'E'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'E');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 'F'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'F', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'F'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'F');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 'G'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'G', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'G'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'G');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 'H'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'H', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'H'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'H');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 'I'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'I', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'I'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'I');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 'J'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'J', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'J'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'J');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 'K'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'K', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'K'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'K');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 'L'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'L', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'L'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'L');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 'M'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'M', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'M'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'M');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 'N'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'N', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'N'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'N');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 'O'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'O', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'O'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'O');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 'P'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'P', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'P'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'P');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 'Q'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'Q', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'Q'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'Q');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 'R'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'R', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'R'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'R');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 'S'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'S', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'S'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'S');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 'T'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'T', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'T'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'T');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 'U'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'U', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'U'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'U');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 'V'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'V', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'V'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'V');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 'W'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'W', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'W'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'W');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 'X'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'X', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'X'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'X');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 'Y'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'Y', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'Y'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'Y');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 'Z'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'Z', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'Z'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'Z');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 '_'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '_', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '_'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], '_');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 '0'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '0', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Number/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '0'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Number]);
      refalrts::reinit_char(context[8], '0');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 '1'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '1', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Number/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '1'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Number]);
      refalrts::reinit_char(context[8], '1');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 '2'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '2', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Number/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '2'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Number]);
      refalrts::reinit_char(context[8], '2');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 '3'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '3', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Number/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '3'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Number]);
      refalrts::reinit_char(context[8], '3');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 '4'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '4', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Number/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '4'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Number]);
      refalrts::reinit_char(context[8], '4');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 '5'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '5', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Number/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '5'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Number]);
      refalrts::reinit_char(context[8], '5');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 '6'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '6', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Number/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '6'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Number]);
      refalrts::reinit_char(context[8], '6');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 '7'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '7', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Number/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '7'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Number]);
      refalrts::reinit_char(context[8], '7');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 '8'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '8', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Number/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '8'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Number]);
      refalrts::reinit_char(context[8], '8');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 '9'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '9', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Number/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '9'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Number]);
      refalrts::reinit_char(context[8], '9');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 '$'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '$', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/7 e.Accum#1/14 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Directive/4 } Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Directive]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 '\''/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '\'', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/7 e.Accum#1/14 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & StringLiteral-Start/4 } Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_StringLiteralm_Start]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 '\"'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '\"', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CompoundSymbol/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '\"'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_CompoundSymbol]);
      refalrts::reinit_char(context[8], '\"');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Main/4 (/7 e.Accum#1/14 )/8 '/'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '/', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & StartComment/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '/'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_StartComment]);
      refalrts::reinit_char(context[8], '/');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Main/4 (/7 e.Accum#1/14 )/8 '\n'/13 e.Text#1/16 >/1
    context[14] = context[9];
    context[15] = context[10];
    context[16] = context[11];
    context[17] = context[12];
    if( ! refalrts::char_term( '\n', context[13] ) )
      continue;
    // closed e.Accum#1 as range 14
    // closed e.Text#1 as range 16
    //DEBUG: e.Accum#1: 14
    //DEBUG: e.Text#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkNewLine/4 } Tile{ AsIs: e.Accum#1/14 } '\n'/18 Tile{ HalfReuse: )/7 } </19 & Root/20 Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
    refalrts::alloc_char(vm, context[18], '\n');
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_Root]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_TkNewLine]);
    refalrts::reinit_close_bracket(context[7]);
    refalrts::reinit_open_bracket(context[8]);
    refalrts::reinit_close_bracket(context[13]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[19] );
    refalrts::link_brackets( context[8], context[13] );
    refalrts::link_brackets( context[0], context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Main/4 (/7 e.Accum#1/9 )/8 >/1
    context[9] = context[5];
    context[10] = context[6];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Accum#1 as range 9
    //DEBUG: e.Accum#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # TkEOF/7 AsIs: e.Accum#1/9 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket(context[4]);
    refalrts::reinit_ident(context[7], identifiers[ident_TkEOF]);
    refalrts::link_brackets( context[4], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Main/4 (/7 e.Accum#1/5 )/8 s.Any#1/9 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Text#1 as range 2
  //DEBUG: e.Accum#1: 5
  //DEBUG: s.Any#1: 9
  //DEBUG: e.Text#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/10 # TkUnexpected/11 Tile{ AsIs: e.Accum#1/5 } Tile{ AsIs: s.Any#1/9 } Tile{ AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Main/4 AsIs: (/7 } )/12 Tile{ AsIs: e.Text#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[10]);
  refalrts::alloc_ident(vm, context[11], identifiers[ident_TkUnexpected]);
  refalrts::alloc_close_bracket(vm, context[12]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[12] );
  refalrts::link_brackets( context[10], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Main("Main", COOKIE1_, COOKIE2_, func_Main);


static refalrts::FnResult func_StartNativem_NewLine(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & StartNative-NewLine/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & StartNative-NewLine/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & StartNative-NewLine/4 (/7 e.new#5/9 )/8 s.new#3/13 e.new#4/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.new#5 as range 9
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    // closed e.new#4 as range 11
    do {
      // </0 & StartNative-NewLine/4 (/7 e.Accum#1/14 )/8 '\r'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '\r', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} e.Accum#1/14 )/8 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & StartNative-NewLine/4 AsIs: (/7 } Tile{ HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[13];
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & StartNative-NewLine/4 (/7 e.Accum#1/14 )/8 '\n'/13 e.Text#1/16 >/1
    context[14] = context[9];
    context[15] = context[10];
    context[16] = context[11];
    context[17] = context[12];
    if( ! refalrts::char_term( '\n', context[13] ) )
      continue;
    // closed e.Accum#1 as range 14
    // closed e.Text#1 as range 16
    //DEBUG: e.Accum#1: 14
    //DEBUG: e.Text#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkNewLine/4 } Tile{ AsIs: e.Accum#1/14 } '\n'/18 Tile{ HalfReuse: )/7 } </19 & Native-Begin/20 Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
    refalrts::alloc_char(vm, context[18], '\n');
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_Nativem_Begin]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_TkNewLine]);
    refalrts::reinit_close_bracket(context[7]);
    refalrts::reinit_open_bracket(context[8]);
    refalrts::reinit_close_bracket(context[13]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[19] );
    refalrts::link_brackets( context[8], context[13] );
    refalrts::link_brackets( context[0], context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & StartNative-NewLine/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2
  //DEBUG: e.Accum#1: 5
  //DEBUG: e.Text#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Accum#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 & TokenError/10"Native inlines expects new line after two percents"/11 )/13 Tile{ AsIs: </0 Reuse: & Main/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_TokenError]);
  refalrts::alloc_chars(vm, context[11], context[12], "Native inlines expects new line after two percents", 50);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_Main]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[9], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_StartNativem_NewLine("StartNative-NewLine", COOKIE1_, COOKIE2_, func_StartNativem_NewLine);


static refalrts::FnResult func_VariableStart(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & VariableStart/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & VariableStart/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & VariableStart/4 (/7 e.Accum#1/9 )/8 '.'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '.', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndex/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '.'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_VariableIndex]);
    refalrts::reinit_char(context[8], '.');
    refalrts::reinit_close_bracket(context[13]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & VariableStart/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2
  //DEBUG: e.Accum#1: 5
  //DEBUG: e.Text#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_Name]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_VariableStart("VariableStart", COOKIE1_, COOKIE2_, func_VariableStart);


static refalrts::FnResult func_Name(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & Name/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Name/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Name/4 (/7 e.new#5/9 )/8 s.new#3/13 e.new#4/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.new#5 as range 9
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    // closed e.new#4 as range 11
    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 '0'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '0', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '0'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '0');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 '1'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '1', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '1'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '1');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 '2'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '2', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '2'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '2');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 '3'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '3', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '3'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '3');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 '4'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '4', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '4'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '4');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 '5'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '5', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '5'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '5');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 '6'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '6', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '6'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '6');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 '7'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '7', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '7'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '7');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 '8'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '8', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '8'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '8');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 '9'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '9', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '9'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '9');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 'a'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'a', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'a'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'a');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 'b'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'b', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'b'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'b');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 'c'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'c', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'c'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'c');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 'd'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'd', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'd'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'd');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 'e'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'e', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'e'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'e');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 'f'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'f', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'f'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'f');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 'g'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'g', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'g'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'g');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 'h'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'h', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'h'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'h');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 'i'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'i', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'i'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'i');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 'j'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'j', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'j'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'j');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 'k'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'k', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'k'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'k');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 'l'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'l', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'l'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'l');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 'm'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'm', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'm'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'm');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 'n'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'n', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'n'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'n');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 'o'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'o', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'o'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'o');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 'p'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'p', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'p'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'p');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 'q'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'q', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'q'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'q');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 'r'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'r', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'r'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'r');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 's'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 's', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 's'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 's');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 't'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 't', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 't'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 't');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 'u'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'u', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'u'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'u');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 'v'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'v', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'v'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'v');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 'w'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'w', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'w'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'w');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 'x'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'x', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'x'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'x');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 'y'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'y', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'y'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'y');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 'z'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'z', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'z'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'z');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 'A'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'A', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'A'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'A');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 'B'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'B', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'B'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'B');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 'C'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'C', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'C'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'C');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 'D'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'D', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'D'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'D');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 'E'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'E', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'E'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'E');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 'F'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'F', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'F'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'F');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 'G'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'G', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'G'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'G');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 'H'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'H', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'H'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'H');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 'I'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'I', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'I'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'I');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 'J'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'J', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'J'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'J');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 'K'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'K', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'K'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'K');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 'L'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'L', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'L'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'L');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 'M'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'M', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'M'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'M');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 'N'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'N', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'N'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'N');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 'O'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'O', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'O'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'O');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 'P'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'P', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'P'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'P');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 'Q'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'Q', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'Q'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'Q');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 'R'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'R', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'R'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'R');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 'S'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'S', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'S'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'S');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 'T'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'T', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'T'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'T');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 'U'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'U', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'U'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'U');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 'V'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'V', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'V'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'V');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 'W'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'W', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'W'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'W');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 'X'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'X', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'X'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'X');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 'Y'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'Y', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'Y'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'Y');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 'Z'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'Z', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'Z'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'Z');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/14 )/8 '_'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '_', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '_'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '_');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Name/4 (/7 e.Accum#1/14 )/8 '-'/13 e.Text#1/16 >/1
    context[14] = context[9];
    context[15] = context[10];
    context[16] = context[11];
    context[17] = context[12];
    if( ! refalrts::char_term( '-', context[13] ) )
      continue;
    // closed e.Accum#1 as range 14
    // closed e.Text#1 as range 16
    //DEBUG: e.Accum#1: 14
    //DEBUG: e.Text#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '-'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
    refalrts::reinit_char(context[8], '-');
    refalrts::reinit_close_bracket(context[13]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Name/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2
  //DEBUG: e.Accum#1: 5
  //DEBUG: e.Text#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 # TkName/10 Tile{ AsIs: e.Accum#1/5 } )/11 Tile{ AsIs: </0 Reuse: & Main/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_ident(vm, context[10], identifiers[ident_TkName]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_Main]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[9], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Name("Name", COOKIE1_, COOKIE2_, func_Name);


static refalrts::FnResult func_Number(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & Number/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Number/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Number/4 (/7 e.new#5/9 )/8 s.new#3/13 e.new#4/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.new#5 as range 9
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    // closed e.new#4 as range 11
    do {
      // </0 & Number/4 (/7 e.Accum#1/14 )/8 '0'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '0', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Number/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '0'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '0');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Number/4 (/7 e.Accum#1/14 )/8 '1'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '1', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Number/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '1'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '1');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Number/4 (/7 e.Accum#1/14 )/8 '2'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '2', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Number/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '2'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '2');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Number/4 (/7 e.Accum#1/14 )/8 '3'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '3', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Number/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '3'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '3');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Number/4 (/7 e.Accum#1/14 )/8 '4'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '4', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Number/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '4'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '4');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Number/4 (/7 e.Accum#1/14 )/8 '5'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '5', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Number/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '5'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '5');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Number/4 (/7 e.Accum#1/14 )/8 '6'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '6', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Number/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '6'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '6');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Number/4 (/7 e.Accum#1/14 )/8 '7'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '7', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Number/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '7'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '7');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Number/4 (/7 e.Accum#1/14 )/8 '8'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '8', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Number/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '8'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '8');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Number/4 (/7 e.Accum#1/14 )/8 '9'/13 e.Text#1/16 >/1
    context[14] = context[9];
    context[15] = context[10];
    context[16] = context[11];
    context[17] = context[12];
    if( ! refalrts::char_term( '9', context[13] ) )
      continue;
    // closed e.Accum#1 as range 14
    // closed e.Text#1 as range 16
    //DEBUG: e.Accum#1: 14
    //DEBUG: e.Text#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Number/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '9'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
    refalrts::reinit_char(context[8], '9');
    refalrts::reinit_close_bracket(context[13]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Number/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2
  //DEBUG: e.Accum#1: 5
  //DEBUG: e.Text#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 # TkNumber/10 Tile{ AsIs: e.Accum#1/5 } )/11 Tile{ AsIs: </0 Reuse: & Main/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_ident(vm, context[10], identifiers[ident_TkNumber]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_Main]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[9], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Number("Number", COOKIE1_, COOKIE2_, func_Number);


static refalrts::FnResult func_Directive(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & Directive/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Directive/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Directive/4 (/7 e.new#5/9 )/8 s.new#3/13 e.new#4/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.new#5 as range 9
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    // closed e.new#4 as range 11
    do {
      // </0 & Directive/4 (/7 e.Accum#1/14 )/8 'A'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'A', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'A'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_DirectiveTail]);
      refalrts::reinit_char(context[8], 'A');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Directive/4 (/7 e.Accum#1/14 )/8 'B'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'B', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'B'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_DirectiveTail]);
      refalrts::reinit_char(context[8], 'B');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Directive/4 (/7 e.Accum#1/14 )/8 'C'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'C', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'C'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_DirectiveTail]);
      refalrts::reinit_char(context[8], 'C');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Directive/4 (/7 e.Accum#1/14 )/8 'D'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'D', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'D'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_DirectiveTail]);
      refalrts::reinit_char(context[8], 'D');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Directive/4 (/7 e.Accum#1/14 )/8 'E'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'E', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'E'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_DirectiveTail]);
      refalrts::reinit_char(context[8], 'E');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Directive/4 (/7 e.Accum#1/14 )/8 'F'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'F', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'F'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_DirectiveTail]);
      refalrts::reinit_char(context[8], 'F');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Directive/4 (/7 e.Accum#1/14 )/8 'G'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'G', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'G'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_DirectiveTail]);
      refalrts::reinit_char(context[8], 'G');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Directive/4 (/7 e.Accum#1/14 )/8 'H'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'H', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'H'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_DirectiveTail]);
      refalrts::reinit_char(context[8], 'H');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Directive/4 (/7 e.Accum#1/14 )/8 'I'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'I', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'I'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_DirectiveTail]);
      refalrts::reinit_char(context[8], 'I');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Directive/4 (/7 e.Accum#1/14 )/8 'J'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'J', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'J'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_DirectiveTail]);
      refalrts::reinit_char(context[8], 'J');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Directive/4 (/7 e.Accum#1/14 )/8 'K'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'K', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'K'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_DirectiveTail]);
      refalrts::reinit_char(context[8], 'K');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Directive/4 (/7 e.Accum#1/14 )/8 'L'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'L', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'L'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_DirectiveTail]);
      refalrts::reinit_char(context[8], 'L');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Directive/4 (/7 e.Accum#1/14 )/8 'M'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'M', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'M'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_DirectiveTail]);
      refalrts::reinit_char(context[8], 'M');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Directive/4 (/7 e.Accum#1/14 )/8 'N'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'N', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'N'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_DirectiveTail]);
      refalrts::reinit_char(context[8], 'N');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Directive/4 (/7 e.Accum#1/14 )/8 'O'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'O', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'O'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_DirectiveTail]);
      refalrts::reinit_char(context[8], 'O');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Directive/4 (/7 e.Accum#1/14 )/8 'P'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'P', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'P'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_DirectiveTail]);
      refalrts::reinit_char(context[8], 'P');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Directive/4 (/7 e.Accum#1/14 )/8 'Q'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'Q', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'Q'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_DirectiveTail]);
      refalrts::reinit_char(context[8], 'Q');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Directive/4 (/7 e.Accum#1/14 )/8 'R'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'R', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'R'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_DirectiveTail]);
      refalrts::reinit_char(context[8], 'R');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Directive/4 (/7 e.Accum#1/14 )/8 'S'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'S', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'S'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_DirectiveTail]);
      refalrts::reinit_char(context[8], 'S');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Directive/4 (/7 e.Accum#1/14 )/8 'T'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'T', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'T'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_DirectiveTail]);
      refalrts::reinit_char(context[8], 'T');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Directive/4 (/7 e.Accum#1/14 )/8 'U'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'U', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'U'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_DirectiveTail]);
      refalrts::reinit_char(context[8], 'U');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Directive/4 (/7 e.Accum#1/14 )/8 'V'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'V', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'V'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_DirectiveTail]);
      refalrts::reinit_char(context[8], 'V');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Directive/4 (/7 e.Accum#1/14 )/8 'W'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'W', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'W'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_DirectiveTail]);
      refalrts::reinit_char(context[8], 'W');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Directive/4 (/7 e.Accum#1/14 )/8 'X'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'X', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'X'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_DirectiveTail]);
      refalrts::reinit_char(context[8], 'X');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Directive/4 (/7 e.Accum#1/14 )/8 'Y'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'Y', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'Y'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_DirectiveTail]);
      refalrts::reinit_char(context[8], 'Y');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Directive/4 (/7 e.Accum#1/14 )/8 'Z'/13 e.Text#1/16 >/1
    context[14] = context[9];
    context[15] = context[10];
    context[16] = context[11];
    context[17] = context[12];
    if( ! refalrts::char_term( 'Z', context[13] ) )
      continue;
    // closed e.Accum#1 as range 14
    // closed e.Text#1 as range 16
    //DEBUG: e.Accum#1: 14
    //DEBUG: e.Text#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'Z'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_DirectiveTail]);
    refalrts::reinit_char(context[8], 'Z');
    refalrts::reinit_close_bracket(context[13]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Directive/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2
  //DEBUG: e.Accum#1: 5
  //DEBUG: e.Text#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Accum#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 & TokenError/10"Expected directive name"/11 )/13 Tile{ AsIs: </0 Reuse: & Main/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_TokenError]);
  refalrts::alloc_chars(vm, context[11], context[12], "Expected directive name", 23);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_Main]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[9], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Directive("Directive", COOKIE1_, COOKIE2_, func_Directive);


static refalrts::FnResult func_StringLiteralm_Start(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & StringLiteral-Start/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & StringLiteral-Start/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & StringLiteral-Start/4 (/7 e.Accum#1/9 )/8 '\''/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '\'', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral-Char/4 } Tile{ AsIs: e.Accum#1/9 } '\''/14 Tile{ HalfReuse: )/7 } </15 & Main/16 Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::alloc_char(vm, context[14], '\'');
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_name(vm, context[16], functions[efunc_Main]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_TkLiteralm_Char]);
    refalrts::reinit_close_bracket(context[7]);
    refalrts::reinit_open_bracket(context[8]);
    refalrts::reinit_close_bracket(context[13]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[15] );
    refalrts::link_brackets( context[8], context[13] );
    refalrts::link_brackets( context[0], context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & StringLiteral-Start/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2
  //DEBUG: e.Accum#1: 5
  //DEBUG: e.Text#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & StringLiteral/4 AsIs: (/7 AsIs: e.Accum#1/5 AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_StringLiteral]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_StringLiteralm_Start("StringLiteral-Start", COOKIE1_, COOKIE2_, func_StringLiteralm_Start);


static refalrts::FnResult func_CompoundSymbol(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & CompoundSymbol/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CompoundSymbol/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & CompoundSymbol/4 (/7 e.new#5/9 )/8 s.new#3/13 e.new#4/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.new#5 as range 9
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    // closed e.new#4 as range 11
    do {
      // </0 & CompoundSymbol/4 (/7 e.Accum#1/14 )/8 '\"'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '\"', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkCompound/4 } Tile{ AsIs: e.Accum#1/14 } '\"'/18 Tile{ HalfReuse: )/7 } </19 & Main/20 Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[18], '\"');
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::alloc_name(vm, context[20], functions[efunc_Main]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TkCompound]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[19] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & CompoundSymbol/4 (/7 e.Accum#1/14 )/8 '\\'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '\\', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Compound-Escape/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '\\'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Compoundm_Escape]);
      refalrts::reinit_char(context[8], '\\');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & CompoundSymbol/4 (/7 e.Accum#1/14 )/8 '\n'/13 e.Text#1/16 >/1
    context[14] = context[9];
    context[15] = context[10];
    context[16] = context[11];
    context[17] = context[12];
    if( ! refalrts::char_term( '\n', context[13] ) )
      continue;
    // closed e.Accum#1 as range 14
    // closed e.Text#1 as range 16
    //DEBUG: e.Accum#1: 14
    //DEBUG: e.Text#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} e.Accum#1/14 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 Reuse: & TokenError/4 HalfReuse: 'U'/7 }"nclosed quote"/18 )/20 </21 & Main/22 Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[18], context[19], "nclosed quote", 13);
    refalrts::alloc_close_bracket(vm, context[20]);
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_Main]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::update_name(context[4], functions[efunc_TokenError]);
    refalrts::reinit_char(context[7], 'U');
    refalrts::reinit_open_bracket(context[8]);
    refalrts::reinit_close_bracket(context[13]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[21] );
    refalrts::link_brackets( context[8], context[13] );
    refalrts::link_brackets( context[0], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[18], context[22] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CompoundSymbol/4 (/7 e.Accum#1/9 )/8 >/1
    context[9] = context[5];
    context[10] = context[6];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Accum#1 as range 9
    //DEBUG: e.Accum#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} e.Accum#1/9 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 Reuse: & TokenError/4 HalfReuse: 'U'/7 }"nexpected EOF in compound symbo"/11 Tile{ HalfReuse: 'l'/8 HalfReuse: )/1 ]] }
    refalrts::alloc_chars(vm, context[11], context[12], "nexpected EOF in compound symbo", 31);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::update_name(context[4], functions[efunc_TokenError]);
    refalrts::reinit_char(context[7], 'U');
    refalrts::reinit_char(context[8], 'l');
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CompoundSymbol/4 (/7 e.Accum#1/5 )/8 s.Any#1/9 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Text#1 as range 2
  //DEBUG: e.Accum#1: 5
  //DEBUG: s.Any#1: 9
  //DEBUG: e.Text#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Any#1/9 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 AsIs: & CompoundSymbol/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: s.Any1 #9/8 } )/10 Tile{ AsIs: e.Text#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[10]);
  refalrts::reinit_svar( context[8], context[9] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  refalrts::splice_to_freelist_open( vm, context[8], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CompoundSymbol("CompoundSymbol", COOKIE1_, COOKIE2_, func_CompoundSymbol);


static refalrts::FnResult func_StartComment(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & StartComment/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & StartComment/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & StartComment/4 (/7 e.new#5/9 )/8 s.new#3/13 e.new#4/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.new#5 as range 9
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    // closed e.new#4 as range 11
    do {
      // </0 & StartComment/4 (/7 e.Accum#1/14 )/8 '*'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '*', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/7 e.Accum#1/14 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CComment/4 } Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_CComment]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & StartComment/4 (/7 e.Accum#1/14 )/8 '/'/13 e.Text#1/16 >/1
    context[14] = context[9];
    context[15] = context[10];
    context[16] = context[11];
    context[17] = context[12];
    if( ! refalrts::char_term( '/', context[13] ) )
      continue;
    // closed e.Accum#1 as range 14
    // closed e.Text#1 as range 16
    //DEBUG: e.Accum#1: 14
    //DEBUG: e.Text#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/7 e.Accum#1/14 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & CppComment/4 } Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_CppComment]);
    refalrts::reinit_open_bracket(context[8]);
    refalrts::reinit_close_bracket(context[13]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[8], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & StartComment/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2
  //DEBUG: e.Accum#1: 5
  //DEBUG: e.Text#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 # TkUnexpected/10 Tile{ AsIs: e.Accum#1/5 } )/11 Tile{ AsIs: </0 Reuse: & Main/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_ident(vm, context[10], identifiers[ident_TkUnexpected]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_Main]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[9], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_StartComment("StartComment", COOKIE1_, COOKIE2_, func_StartComment);


static refalrts::FnResult func_Nativem_Begin(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & Native-Begin/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Native-Begin/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Native-Begin/4 (/7 e.Accum#1/9 )/8 '%'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '%', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Native-CheckEnd/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '%'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_Nativem_CheckEnd]);
    refalrts::reinit_char(context[8], '%');
    refalrts::reinit_close_bracket(context[13]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Native-Begin/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2
  //DEBUG: e.Accum#1: 5
  //DEBUG: e.Text#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Native/4 AsIs: (/7 AsIs: e.Accum#1/5 AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_Native]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Nativem_Begin("Native-Begin", COOKIE1_, COOKIE2_, func_Nativem_Begin);


static refalrts::FnResult func_VariableIndex(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & VariableIndex/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & VariableIndex/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & VariableIndex/4 (/7 e.new#5/9 )/8 s.new#3/13 e.new#4/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.new#5 as range 9
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    // closed e.new#4 as range 11
    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 '0'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '0', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '0'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], '0');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 '1'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '1', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '1'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], '1');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 '2'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '2', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '2'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], '2');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 '3'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '3', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '3'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], '3');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 '4'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '4', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '4'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], '4');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 '5'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '5', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '5'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], '5');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 '6'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '6', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '6'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], '6');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 '7'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '7', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '7'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], '7');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 '8'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '8', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '8'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], '8');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 '9'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '9', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '9'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], '9');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 'a'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'a', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'a'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], 'a');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 'b'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'b', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'b'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], 'b');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 'c'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'c', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'c'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], 'c');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 'd'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'd', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'd'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], 'd');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 'e'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'e', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'e'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], 'e');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 'f'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'f', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'f'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], 'f');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 'g'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'g', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'g'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], 'g');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 'h'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'h', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'h'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], 'h');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 'i'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'i', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'i'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], 'i');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 'j'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'j', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'j'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], 'j');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 'k'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'k', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'k'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], 'k');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 'l'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'l', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'l'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], 'l');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 'm'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'm', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'm'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], 'm');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 'n'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'n', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'n'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], 'n');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 'o'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'o', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'o'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], 'o');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 'p'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'p', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'p'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], 'p');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 'q'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'q', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'q'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], 'q');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 'r'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'r', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'r'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], 'r');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 's'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 's', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 's'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], 's');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 't'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 't', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 't'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], 't');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 'u'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'u', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'u'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], 'u');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 'v'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'v', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'v'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], 'v');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 'w'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'w', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'w'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], 'w');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 'x'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'x', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'x'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], 'x');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 'y'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'y', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'y'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], 'y');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 'z'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'z', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'z'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], 'z');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 'A'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'A', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'A'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], 'A');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 'B'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'B', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'B'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], 'B');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 'C'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'C', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'C'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], 'C');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 'D'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'D', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'D'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], 'D');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 'E'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'E', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'E'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], 'E');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 'F'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'F', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'F'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], 'F');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 'G'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'G', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'G'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], 'G');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 'H'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'H', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'H'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], 'H');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 'I'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'I', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'I'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], 'I');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 'J'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'J', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'J'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], 'J');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 'K'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'K', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'K'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], 'K');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 'L'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'L', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'L'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], 'L');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 'M'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'M', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'M'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], 'M');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 'N'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'N', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'N'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], 'N');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 'O'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'O', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'O'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], 'O');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 'P'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'P', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'P'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], 'P');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 'Q'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'Q', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'Q'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], 'Q');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 'R'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'R', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'R'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], 'R');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 'S'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'S', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'S'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], 'S');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 'T'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'T', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'T'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], 'T');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 'U'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'U', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'U'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], 'U');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 'V'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'V', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'V'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], 'V');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 'W'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'W', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'W'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], 'W');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 'X'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'X', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'X'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], 'X');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 'Y'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'Y', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'Y'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], 'Y');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 'Z'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'Z', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'Z'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], 'Z');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 '_'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '_', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '_'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
      refalrts::reinit_char(context[8], '_');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & VariableIndex/4 (/7 e.Accum#1/14 )/8 '-'/13 e.Text#1/16 >/1
    context[14] = context[9];
    context[15] = context[10];
    context[16] = context[11];
    context[17] = context[12];
    if( ! refalrts::char_term( '-', context[13] ) )
      continue;
    // closed e.Accum#1 as range 14
    // closed e.Text#1 as range 16
    //DEBUG: e.Accum#1: 14
    //DEBUG: e.Text#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '-'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_VariableIndexTail]);
    refalrts::reinit_char(context[8], '-');
    refalrts::reinit_close_bracket(context[13]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & VariableIndex/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2
  //DEBUG: e.Accum#1: 5
  //DEBUG: e.Text#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Accum#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 & TokenError/10"Expected variable name"/11 )/13 Tile{ AsIs: </0 Reuse: & Main/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_TokenError]);
  refalrts::alloc_chars(vm, context[11], context[12], "Expected variable name", 22);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_Main]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[9], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_VariableIndex("VariableIndex", COOKIE1_, COOKIE2_, func_VariableIndex);


static refalrts::FnResult func_DirectiveTail(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & DirectiveTail/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DirectiveTail/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & DirectiveTail/4 (/7 e.new#5/9 )/8 s.new#3/13 e.new#4/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.new#5 as range 9
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    // closed e.new#4 as range 11
    do {
      // </0 & DirectiveTail/4 (/7 e.Accum#1/14 )/8 'A'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'A', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'A'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'A');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DirectiveTail/4 (/7 e.Accum#1/14 )/8 'B'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'B', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'B'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'B');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DirectiveTail/4 (/7 e.Accum#1/14 )/8 'C'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'C', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'C'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'C');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DirectiveTail/4 (/7 e.Accum#1/14 )/8 'D'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'D', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'D'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'D');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DirectiveTail/4 (/7 e.Accum#1/14 )/8 'E'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'E', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'E'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'E');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DirectiveTail/4 (/7 e.Accum#1/14 )/8 'F'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'F', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'F'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'F');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DirectiveTail/4 (/7 e.Accum#1/14 )/8 'G'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'G', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'G'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'G');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DirectiveTail/4 (/7 e.Accum#1/14 )/8 'H'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'H', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'H'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'H');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DirectiveTail/4 (/7 e.Accum#1/14 )/8 'I'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'I', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'I'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'I');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DirectiveTail/4 (/7 e.Accum#1/14 )/8 'J'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'J', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'J'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'J');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DirectiveTail/4 (/7 e.Accum#1/14 )/8 'K'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'K', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'K'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'K');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DirectiveTail/4 (/7 e.Accum#1/14 )/8 'L'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'L', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'L'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'L');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DirectiveTail/4 (/7 e.Accum#1/14 )/8 'M'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'M', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'M'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'M');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DirectiveTail/4 (/7 e.Accum#1/14 )/8 'N'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'N', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'N'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'N');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DirectiveTail/4 (/7 e.Accum#1/14 )/8 'O'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'O', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'O'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'O');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DirectiveTail/4 (/7 e.Accum#1/14 )/8 'P'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'P', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'P'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'P');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DirectiveTail/4 (/7 e.Accum#1/14 )/8 'Q'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'Q', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'Q'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'Q');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DirectiveTail/4 (/7 e.Accum#1/14 )/8 'R'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'R', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'R'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'R');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DirectiveTail/4 (/7 e.Accum#1/14 )/8 'S'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'S', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'S'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'S');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DirectiveTail/4 (/7 e.Accum#1/14 )/8 'T'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'T', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'T'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'T');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DirectiveTail/4 (/7 e.Accum#1/14 )/8 'U'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'U', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'U'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'U');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DirectiveTail/4 (/7 e.Accum#1/14 )/8 'V'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'V', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'V'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'V');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DirectiveTail/4 (/7 e.Accum#1/14 )/8 'W'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'W', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'W'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'W');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DirectiveTail/4 (/7 e.Accum#1/14 )/8 'X'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'X', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'X'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'X');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DirectiveTail/4 (/7 e.Accum#1/14 )/8 'Y'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'Y', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'Y'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'Y');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DirectiveTail/4 (/7 e.Accum#1/14 )/8 'Z'/13 e.Text#1/16 >/1
    context[14] = context[9];
    context[15] = context[10];
    context[16] = context[11];
    context[17] = context[12];
    if( ! refalrts::char_term( 'Z', context[13] ) )
      continue;
    // closed e.Accum#1 as range 14
    // closed e.Text#1 as range 16
    //DEBUG: e.Accum#1: 14
    //DEBUG: e.Text#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DirectiveTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'Z'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
    refalrts::reinit_char(context[8], 'Z');
    refalrts::reinit_close_bracket(context[13]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DirectiveTail/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2
  //DEBUG: e.Accum#1: 5
  //DEBUG: e.Text#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 # TkDirective/10 Tile{ AsIs: e.Accum#1/5 } )/11 Tile{ AsIs: </0 Reuse: & Main/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_ident(vm, context[10], identifiers[ident_TkDirective]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_Main]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[9], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DirectiveTail("DirectiveTail", COOKIE1_, COOKIE2_, func_DirectiveTail);


static refalrts::FnResult func_StringLiteral(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & StringLiteral/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & StringLiteral/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & StringLiteral/4 (/7 e.new#5/9 )/8 s.new#3/13 e.new#4/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.new#5 as range 9
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    // closed e.new#4 as range 11
    do {
      // </0 & StringLiteral/4 (/7 e.Accum#1/14 )/8 '\\'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '\\', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/7 e.Accum#1/14 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & StringLiteral-Escape/4 } Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_StringLiteralm_Escape]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral/4 (/7 e.Accum#1/14 )/8 '\''/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '\'', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/7 e.Accum#1/14 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & StringLiteral-Quote/4 } Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_StringLiteralm_Quote]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & StringLiteral/4 (/7 e.Accum#1/14 )/8 '\n'/13 e.Text#1/16 >/1
    context[14] = context[9];
    context[15] = context[10];
    context[16] = context[11];
    context[17] = context[12];
    if( ! refalrts::char_term( '\n', context[13] ) )
      continue;
    // closed e.Accum#1 as range 14
    // closed e.Text#1 as range 16
    //DEBUG: e.Accum#1: 14
    //DEBUG: e.Text#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} e.Accum#1/14 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 Reuse: & TokenError/4 HalfReuse: 'U'/7 }"nclosed quote"/18 )/20 </21 & Main/22 Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[18], context[19], "nclosed quote", 13);
    refalrts::alloc_close_bracket(vm, context[20]);
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_Main]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::update_name(context[4], functions[efunc_TokenError]);
    refalrts::reinit_char(context[7], 'U');
    refalrts::reinit_open_bracket(context[8]);
    refalrts::reinit_close_bracket(context[13]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[21] );
    refalrts::link_brackets( context[8], context[13] );
    refalrts::link_brackets( context[0], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[18], context[22] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & StringLiteral/4 (/7 e.Accum#1/9 )/8 >/1
    context[9] = context[5];
    context[10] = context[6];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Accum#1 as range 9
    //DEBUG: e.Accum#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} e.Accum#1/9 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 Reuse: & TokenError/4 HalfReuse: 'U'/7 }"nexpected EOF in string litera"/11 Tile{ HalfReuse: 'l'/8 HalfReuse: )/1 ]] }
    refalrts::alloc_chars(vm, context[11], context[12], "nexpected EOF in string litera", 30);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::update_name(context[4], functions[efunc_TokenError]);
    refalrts::reinit_char(context[7], 'U');
    refalrts::reinit_char(context[8], 'l');
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & StringLiteral/4 (/7 e.Accum#1/5 )/8 s.Any#1/9 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Text#1 as range 2
  //DEBUG: e.Accum#1: 5
  //DEBUG: s.Any#1: 9
  //DEBUG: e.Text#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/10 # TkLiteral-Char/11 Tile{ AsIs: e.Accum#1/5 } Tile{ AsIs: s.Any#1/9 } Tile{ AsIs: )/8 } Tile{ AsIs: </0 AsIs: & StringLiteral/4 AsIs: (/7 } )/12 Tile{ AsIs: e.Text#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[10]);
  refalrts::alloc_ident(vm, context[11], identifiers[ident_TkLiteralm_Char]);
  refalrts::alloc_close_bracket(vm, context[12]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[12] );
  refalrts::link_brackets( context[10], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_StringLiteral("StringLiteral", COOKIE1_, COOKIE2_, func_StringLiteral);


static refalrts::FnResult func_Compoundm_Escape(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & Compound-Escape/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Compound-Escape/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Compound-Escape/4 (/7 e.new#5/9 )/8 s.new#3/13 e.new#4/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.new#5 as range 9
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    // closed e.new#4 as range 11
    do {
      // </0 & Compound-Escape/4 (/7 e.Accum#1/14 )/8 '0'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '0', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CompoundSymbol/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '0'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_CompoundSymbol]);
      refalrts::reinit_char(context[8], '0');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Compound-Escape/4 (/7 e.Accum#1/14 )/8 '1'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '1', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CompoundSymbol/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '1'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_CompoundSymbol]);
      refalrts::reinit_char(context[8], '1');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Compound-Escape/4 (/7 e.Accum#1/14 )/8 '2'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '2', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CompoundSymbol/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '2'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_CompoundSymbol]);
      refalrts::reinit_char(context[8], '2');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Compound-Escape/4 (/7 e.Accum#1/14 )/8 '3'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '3', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CompoundSymbol/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '3'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_CompoundSymbol]);
      refalrts::reinit_char(context[8], '3');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Compound-Escape/4 (/7 e.Accum#1/14 )/8 '4'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '4', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CompoundSymbol/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '4'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_CompoundSymbol]);
      refalrts::reinit_char(context[8], '4');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Compound-Escape/4 (/7 e.Accum#1/14 )/8 '5'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '5', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CompoundSymbol/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '5'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_CompoundSymbol]);
      refalrts::reinit_char(context[8], '5');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Compound-Escape/4 (/7 e.Accum#1/14 )/8 '6'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '6', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CompoundSymbol/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '6'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_CompoundSymbol]);
      refalrts::reinit_char(context[8], '6');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Compound-Escape/4 (/7 e.Accum#1/14 )/8 '7'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '7', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CompoundSymbol/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '7'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_CompoundSymbol]);
      refalrts::reinit_char(context[8], '7');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Compound-Escape/4 (/7 e.Accum#1/14 )/8 'n'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'n', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CompoundSymbol/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'n'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_CompoundSymbol]);
      refalrts::reinit_char(context[8], 'n');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Compound-Escape/4 (/7 e.Accum#1/14 )/8 'r'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'r', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CompoundSymbol/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'r'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_CompoundSymbol]);
      refalrts::reinit_char(context[8], 'r');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Compound-Escape/4 (/7 e.Accum#1/14 )/8 't'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 't', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CompoundSymbol/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 't'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_CompoundSymbol]);
      refalrts::reinit_char(context[8], 't');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Compound-Escape/4 (/7 e.Accum#1/14 )/8 'a'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'a', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CompoundSymbol/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'a'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_CompoundSymbol]);
      refalrts::reinit_char(context[8], 'a');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Compound-Escape/4 (/7 e.Accum#1/14 )/8 'b'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'b', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CompoundSymbol/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'b'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_CompoundSymbol]);
      refalrts::reinit_char(context[8], 'b');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Compound-Escape/4 (/7 e.Accum#1/14 )/8 'f'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'f', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CompoundSymbol/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'f'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_CompoundSymbol]);
      refalrts::reinit_char(context[8], 'f');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Compound-Escape/4 (/7 e.Accum#1/14 )/8 'v'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'v', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CompoundSymbol/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'v'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_CompoundSymbol]);
      refalrts::reinit_char(context[8], 'v');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Compound-Escape/4 (/7 e.Accum#1/14 )/8 '\\'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '\\', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CompoundSymbol/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '\\'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_CompoundSymbol]);
      refalrts::reinit_char(context[8], '\\');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Compound-Escape/4 (/7 e.Accum#1/14 )/8 '\''/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '\'', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CompoundSymbol/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '\''/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_CompoundSymbol]);
      refalrts::reinit_char(context[8], '\'');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Compound-Escape/4 (/7 e.Accum#1/14 )/8 '\"'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '\"', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CompoundSymbol/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '\"'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_CompoundSymbol]);
      refalrts::reinit_char(context[8], '\"');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Compound-Escape/4 (/7 e.Accum#1/14 )/8 'd'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'd', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Compound-Escape-Dec/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'd'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Compoundm_Escapem_Dec]);
      refalrts::reinit_char(context[8], 'd');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Compound-Escape/4 (/7 e.Accum#1/14 )/8 'D'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'D', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Compound-Escape-Dec/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'D'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Compoundm_Escapem_Dec]);
      refalrts::reinit_char(context[8], 'D');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Compound-Escape/4 (/7 e.Accum#1/14 )/8 'x'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'x', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Compound-Escape-Hex/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'x'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Compoundm_Escapem_Hex]);
      refalrts::reinit_char(context[8], 'x');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Compound-Escape/4 (/7 e.Accum#1/14 )/8 'X'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'X', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Compound-Escape-Hex/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'X'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Compoundm_Escapem_Hex]);
      refalrts::reinit_char(context[8], 'X');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Compound-Escape/4 (/7 e.Accum#1/14 )/8 '\n'/13 e.Text#1/16 >/1
    context[14] = context[9];
    context[15] = context[10];
    context[16] = context[11];
    context[17] = context[12];
    if( ! refalrts::char_term( '\n', context[13] ) )
      continue;
    // closed e.Accum#1 as range 14
    // closed e.Text#1 as range 16
    //DEBUG: e.Accum#1: 14
    //DEBUG: e.Text#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} e.Accum#1/14 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 Reuse: & TokenError/4 HalfReuse: 'U'/7 }"nclosed quote"/18 )/20 </21 & Main/22 Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[18], context[19], "nclosed quote", 13);
    refalrts::alloc_close_bracket(vm, context[20]);
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_Main]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::update_name(context[4], functions[efunc_TokenError]);
    refalrts::reinit_char(context[7], 'U');
    refalrts::reinit_open_bracket(context[8]);
    refalrts::reinit_close_bracket(context[13]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[21] );
    refalrts::link_brackets( context[8], context[13] );
    refalrts::link_brackets( context[0], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[18], context[22] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Compound-Escape/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2
  //DEBUG: e.Accum#1: 5
  //DEBUG: e.Text#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Accum#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 & TokenError/10"Unexpected escape sequence"/11 )/13 Tile{ AsIs: </0 Reuse: & CompoundSymbol/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_TokenError]);
  refalrts::alloc_chars(vm, context[11], context[12], "Unexpected escape sequence", 26);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_CompoundSymbol]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[9], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Compoundm_Escape("Compound-Escape", COOKIE1_, COOKIE2_, func_Compoundm_Escape);


static refalrts::FnResult func_CComment(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & CComment/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CComment/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & CComment/4 (/7 e.new#5/9 )/8 s.new#3/13 e.new#4/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.new#5 as range 9
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    // closed e.new#4 as range 11
    do {
      // </0 & CComment/4 (/7 e.Accum#1/14 )/8 '/'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '/', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/7 e.Accum#1/14 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CComment-CheckNested/4 } Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_CCommentm_CheckNested]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & CComment/4 (/7 e.Accum#1/14 )/8 '*'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '*', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/7 e.Accum#1/14 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CComment-CheckEnd/4 } Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_CCommentm_CheckEnd]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & CComment/4 (/7 e.Accum#1/14 )/8 '\n'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '\n', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TkNewLine/18 Tile{ AsIs: e.Accum#1/14 } '\n'/19 )/20 Tile{ AsIs: </0 AsIs: & CComment/4 } Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[18], identifiers[ident_TkNewLine]);
      refalrts::alloc_char(vm, context[19], '\n');
      refalrts::alloc_close_bracket(vm, context[20]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::link_brackets( context[7], context[20] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & CComment/4 (/7 e.Accum#1/14 )/8 s.Any#1/13 e.Text#1/16 >/1
    context[14] = context[9];
    context[15] = context[10];
    context[16] = context[11];
    context[17] = context[12];
    // closed e.Accum#1 as range 14
    // closed e.Text#1 as range 16
    //DEBUG: s.Any#1: 13
    //DEBUG: e.Accum#1: 14
    //DEBUG: e.Text#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} e.Accum#1/14 {REMOVED TILE} s.Any#1/13 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & CComment/4 AsIs: (/7 } Tile{ AsIs: )/8 } Tile{ AsIs: e.Text#1/16 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CComment/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2
  //DEBUG: e.Accum#1: 5
  //DEBUG: e.Text#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Accum#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 & TokenError/10"Unexpected EOF: unclosed comment"/11 )/13 Tile{ AsIs: </0 Reuse: & Main/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_TokenError]);
  refalrts::alloc_chars(vm, context[11], context[12], "Unexpected EOF: unclosed comment", 32);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_Main]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[9], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CComment("CComment", COOKIE1_, COOKIE2_, func_CComment);


static refalrts::FnResult func_CppComment(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & CppComment/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CppComment/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & CppComment/4 (/7 e.Accum#1/9 )/8 '\n'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '\n', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkNewLine/4 } Tile{ AsIs: e.Accum#1/9 } '\n'/14 Tile{ HalfReuse: )/7 } </15 & Root/16 Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::alloc_char(vm, context[14], '\n');
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_name(vm, context[16], functions[efunc_Root]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_TkNewLine]);
    refalrts::reinit_close_bracket(context[7]);
    refalrts::reinit_open_bracket(context[8]);
    refalrts::reinit_close_bracket(context[13]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[15] );
    refalrts::link_brackets( context[8], context[13] );
    refalrts::link_brackets( context[0], context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CppComment/4 (/7 e.Accum#1/9 )/8 >/1
    context[9] = context[5];
    context[10] = context[6];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Accum#1 as range 9
    //DEBUG: e.Accum#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # TkEOF/7 AsIs: e.Accum#1/9 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket(context[4]);
    refalrts::reinit_ident(context[7], identifiers[ident_TkEOF]);
    refalrts::link_brackets( context[4], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CppComment/4 (/7 e.Accum#1/5 )/8 s.Any#1/9 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Text#1 as range 2
  //DEBUG: e.Accum#1: 5
  //DEBUG: s.Any#1: 9
  //DEBUG: e.Text#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} e.Accum#1/5 {REMOVED TILE} s.Any#1/9 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 AsIs: & CppComment/4 AsIs: (/7 } Tile{ AsIs: )/8 } Tile{ AsIs: e.Text#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CppComment("CppComment", COOKIE1_, COOKIE2_, func_CppComment);


static refalrts::FnResult func_Nativem_CheckEnd(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & Native-CheckEnd/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Native-CheckEnd/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Native-CheckEnd/4 (/7 e.Accum#1/9 )/8 '%'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '%', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Native-CheckEnd2/4 AsIs: (/7 AsIs: e.Accum#1/9 HalfReuse: '%'/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_Nativem_CheckEnd2]);
    refalrts::reinit_char(context[8], '%');
    refalrts::reinit_close_bracket(context[13]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Native-CheckEnd/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2
  //DEBUG: e.Accum#1: 5
  //DEBUG: e.Text#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Native/4 AsIs: (/7 AsIs: e.Accum#1/5 AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_Native]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Nativem_CheckEnd("Native-CheckEnd", COOKIE1_, COOKIE2_, func_Nativem_CheckEnd);


static refalrts::FnResult func_Native(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & Native/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Native/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Native/4 (/7 e.new#5/9 )/8 s.new#3/13 e.new#4/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.new#5 as range 9
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    // closed e.new#4 as range 11
    do {
      // </0 & Native/4 (/7 e.Accum#1/14 )/8 '\n'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '\n', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkNativeLine/4 } Tile{ AsIs: e.Accum#1/14 } '\n'/18 Tile{ HalfReuse: )/7 } </19 & Native-Begin/20 Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[18], '\n');
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::alloc_name(vm, context[20], functions[efunc_Nativem_Begin]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TkNativeLine]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[19] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Native/4 (/7 e.Accum#1/14 )/8 s.Any#1/13 e.Text#1/16 >/1
    context[14] = context[9];
    context[15] = context[10];
    context[16] = context[11];
    context[17] = context[12];
    // closed e.Accum#1 as range 14
    // closed e.Text#1 as range 16
    //DEBUG: s.Any#1: 13
    //DEBUG: e.Accum#1: 14
    //DEBUG: e.Text#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Any#1/13 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Native/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: s.Any1 #13/8 } )/18 Tile{ AsIs: e.Text#1/16 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_bracket(vm, context[18]);
    refalrts::reinit_svar( context[8], context[13] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    refalrts::splice_to_freelist_open( vm, context[8], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Native/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2
  //DEBUG: e.Accum#1: 5
  //DEBUG: e.Text#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Accum#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 & TokenError/10"Unexpected EOF: unclosed native insertion"/11 )/13 Tile{ AsIs: </0 Reuse: & Main/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_TokenError]);
  refalrts::alloc_chars(vm, context[11], context[12], "Unexpected EOF: unclosed native insertion", 41);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_Main]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[9], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Native("Native", COOKIE1_, COOKIE2_, func_Native);


static refalrts::FnResult func_VariableIndexTail(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & VariableIndexTail/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & VariableIndexTail/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & VariableIndexTail/4 (/7 e.new#5/9 )/8 s.new#3/13 e.new#4/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.new#5 as range 9
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    // closed e.new#4 as range 11
    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 '0'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '0', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '0'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '0');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 '1'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '1', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '1'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '1');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 '2'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '2', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '2'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '2');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 '3'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '3', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '3'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '3');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 '4'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '4', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '4'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '4');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 '5'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '5', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '5'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '5');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 '6'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '6', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '6'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '6');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 '7'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '7', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '7'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '7');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 '8'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '8', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '8'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '8');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 '9'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '9', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '9'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '9');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 'a'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'a', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'a'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'a');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 'b'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'b', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'b'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'b');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 'c'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'c', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'c'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'c');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 'd'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'd', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'd'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'd');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 'e'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'e', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'e'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'e');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 'f'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'f', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'f'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'f');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 'g'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'g', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'g'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'g');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 'h'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'h', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'h'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'h');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 'i'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'i', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'i'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'i');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 'j'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'j', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'j'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'j');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 'k'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'k', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'k'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'k');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 'l'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'l', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'l'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'l');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 'm'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'm', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'm'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'm');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 'n'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'n', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'n'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'n');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 'o'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'o', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'o'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'o');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 'p'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'p', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'p'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'p');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 'q'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'q', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'q'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'q');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 'r'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'r', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'r'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'r');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 's'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 's', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 's'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 's');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 't'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 't', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 't'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 't');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 'u'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'u', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'u'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'u');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 'v'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'v', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'v'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'v');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 'w'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'w', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'w'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'w');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 'x'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'x', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'x'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'x');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 'y'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'y', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'y'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'y');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 'z'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'z', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'z'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'z');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 'A'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'A', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'A'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'A');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 'B'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'B', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'B'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'B');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 'C'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'C', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'C'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'C');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 'D'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'D', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'D'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'D');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 'E'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'E', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'E'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'E');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 'F'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'F', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'F'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'F');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 'G'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'G', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'G'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'G');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 'H'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'H', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'H'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'H');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 'I'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'I', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'I'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'I');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 'J'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'J', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'J'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'J');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 'K'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'K', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'K'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'K');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 'L'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'L', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'L'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'L');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 'M'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'M', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'M'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'M');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 'N'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'N', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'N'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'N');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 'O'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'O', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'O'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'O');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 'P'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'P', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'P'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'P');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 'Q'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'Q', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'Q'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'Q');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 'R'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'R', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'R'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'R');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 'S'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'S', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'S'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'S');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 'T'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'T', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'T'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'T');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 'U'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'U', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'U'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'U');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 'V'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'V', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'V'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'V');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 'W'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'W', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'W'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'W');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 'X'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'X', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'X'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'X');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 'Y'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'Y', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'Y'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'Y');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 'Z'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'Z', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'Z'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'Z');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 '_'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '_', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '_'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '_');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & VariableIndexTail/4 (/7 e.Accum#1/14 )/8 '-'/13 e.Text#1/16 >/1
    context[14] = context[9];
    context[15] = context[10];
    context[16] = context[11];
    context[17] = context[12];
    if( ! refalrts::char_term( '-', context[13] ) )
      continue;
    // closed e.Accum#1 as range 14
    // closed e.Text#1 as range 16
    //DEBUG: e.Accum#1: 14
    //DEBUG: e.Text#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & VariableIndexTail/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '-'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
    refalrts::reinit_char(context[8], '-');
    refalrts::reinit_close_bracket(context[13]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & VariableIndexTail/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2
  //DEBUG: e.Accum#1: 5
  //DEBUG: e.Text#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 # TkVariable/10 Tile{ AsIs: e.Accum#1/5 } )/11 Tile{ AsIs: </0 Reuse: & Main/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_ident(vm, context[10], identifiers[ident_TkVariable]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_Main]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[9], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_VariableIndexTail("VariableIndexTail", COOKIE1_, COOKIE2_, func_VariableIndexTail);


static refalrts::FnResult func_StringLiteralm_Escape(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & StringLiteral-Escape/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & StringLiteral-Escape/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & StringLiteral-Escape/4 (/7 e.new#5/9 )/8 s.new#3/13 e.new#4/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.new#5 as range 9
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    // closed e.new#4 as range 11
    do {
      // </0 & StringLiteral-Escape/4 (/7 e.Accum#1/14 )/8 'n'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'n', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral-NewLine/4 } Tile{ AsIs: e.Accum#1/14 } 'n'/18 Tile{ HalfReuse: )/7 } </19 & StringLiteral/20 Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[18], 'n');
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::alloc_name(vm, context[20], functions[efunc_StringLiteral]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TkLiteralm_NewLine]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[19] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape/4 (/7 e.Accum#1/14 )/8 'r'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'r', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral-CarriageReturn/4 } Tile{ AsIs: e.Accum#1/14 } 'r'/18 Tile{ HalfReuse: )/7 } </19 & StringLiteral/20 Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[18], 'r');
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::alloc_name(vm, context[20], functions[efunc_StringLiteral]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TkLiteralm_CarriageReturn]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[19] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape/4 (/7 e.Accum#1/14 )/8 't'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 't', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral-Tab/4 } Tile{ AsIs: e.Accum#1/14 } 't'/18 Tile{ HalfReuse: )/7 } </19 & StringLiteral/20 Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[18], 't');
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::alloc_name(vm, context[20], functions[efunc_StringLiteral]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TkLiteralm_Tab]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[19] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape/4 (/7 e.Accum#1/14 )/8 'a'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'a', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral-Bell/4 } Tile{ AsIs: e.Accum#1/14 } 'a'/18 Tile{ HalfReuse: )/7 } </19 & StringLiteral/20 Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[18], 'a');
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::alloc_name(vm, context[20], functions[efunc_StringLiteral]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TkLiteralm_Bell]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[19] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape/4 (/7 e.Accum#1/14 )/8 'b'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'b', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral-BS/4 } Tile{ AsIs: e.Accum#1/14 } 'b'/18 Tile{ HalfReuse: )/7 } </19 & StringLiteral/20 Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[18], 'b');
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::alloc_name(vm, context[20], functions[efunc_StringLiteral]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TkLiteralm_BS]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[19] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape/4 (/7 e.Accum#1/14 )/8 'f'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'f', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral-FF/4 } Tile{ AsIs: e.Accum#1/14 } 'f'/18 Tile{ HalfReuse: )/7 } </19 & StringLiteral/20 Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[18], 'f');
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::alloc_name(vm, context[20], functions[efunc_StringLiteral]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TkLiteralm_FF]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[19] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape/4 (/7 e.Accum#1/14 )/8 'v'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'v', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral-VT/4 } Tile{ AsIs: e.Accum#1/14 } 'v'/18 Tile{ HalfReuse: )/7 } </19 & StringLiteral/20 Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[18], 'v');
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::alloc_name(vm, context[20], functions[efunc_StringLiteral]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TkLiteralm_VT]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[19] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape/4 (/7 e.Accum#1/14 )/8 '\\'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '\\', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral-Char/4 } Tile{ AsIs: e.Accum#1/14 } '\\'/18 Tile{ HalfReuse: )/7 } </19 & StringLiteral/20 Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[18], '\\');
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::alloc_name(vm, context[20], functions[efunc_StringLiteral]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TkLiteralm_Char]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[19] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape/4 (/7 e.Accum#1/14 )/8 '\''/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '\'', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral-Char/4 } Tile{ AsIs: e.Accum#1/14 } '\''/18 Tile{ HalfReuse: )/7 } </19 & StringLiteral/20 Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[18], '\'');
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::alloc_name(vm, context[20], functions[efunc_StringLiteral]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TkLiteralm_Char]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[19] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape/4 (/7 e.Accum#1/14 )/8 '\"'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '\"', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral-Char/4 } Tile{ AsIs: e.Accum#1/14 } '\"'/18 Tile{ HalfReuse: )/7 } </19 & StringLiteral/20 Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[18], '\"');
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::alloc_name(vm, context[20], functions[efunc_StringLiteral]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TkLiteralm_Char]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[19] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape/4 (/7 e.Accum#1/14 )/8 'd'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'd', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/7 e.Accum#1/14 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & StringLiteral-Escape-Code/4 } Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_StringLiteralm_Escapem_Code]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape/4 (/7 e.Accum#1/14 )/8 'D'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'D', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/7 e.Accum#1/14 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & StringLiteral-Escape-Code/4 } Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_StringLiteralm_Escapem_Code]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape/4 (/7 e.Accum#1/14 )/8 '0'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '0', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & StringLiteral-Escape-OCode/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '0'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_StringLiteralm_Escapem_OCode]);
      refalrts::reinit_char(context[8], '0');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape/4 (/7 e.Accum#1/14 )/8 '1'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '1', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & StringLiteral-Escape-OCode/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '1'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_StringLiteralm_Escapem_OCode]);
      refalrts::reinit_char(context[8], '1');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape/4 (/7 e.Accum#1/14 )/8 '2'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '2', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & StringLiteral-Escape-OCode/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '2'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_StringLiteralm_Escapem_OCode]);
      refalrts::reinit_char(context[8], '2');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape/4 (/7 e.Accum#1/14 )/8 '3'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '3', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & StringLiteral-Escape-OCode/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '3'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_StringLiteralm_Escapem_OCode]);
      refalrts::reinit_char(context[8], '3');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape/4 (/7 e.Accum#1/14 )/8 '4'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '4', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & StringLiteral-Escape-OCode/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '4'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_StringLiteralm_Escapem_OCode]);
      refalrts::reinit_char(context[8], '4');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape/4 (/7 e.Accum#1/14 )/8 '5'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '5', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & StringLiteral-Escape-OCode/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '5'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_StringLiteralm_Escapem_OCode]);
      refalrts::reinit_char(context[8], '5');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape/4 (/7 e.Accum#1/14 )/8 '6'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '6', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & StringLiteral-Escape-OCode/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '6'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_StringLiteralm_Escapem_OCode]);
      refalrts::reinit_char(context[8], '6');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape/4 (/7 e.Accum#1/14 )/8 '7'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '7', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & StringLiteral-Escape-OCode/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '7'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_StringLiteralm_Escapem_OCode]);
      refalrts::reinit_char(context[8], '7');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape/4 (/7 e.Accum#1/14 )/8 'x'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'x', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/7 e.Accum#1/14 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & StringLiteral-Escape-XCode/4 } Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_StringLiteralm_Escapem_XCode]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape/4 (/7 e.Accum#1/14 )/8 'X'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'X', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/7 e.Accum#1/14 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & StringLiteral-Escape-XCode/4 } Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_StringLiteralm_Escapem_XCode]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & StringLiteral-Escape/4 (/7 e.Accum#1/14 )/8 '\n'/13 e.Text#1/16 >/1
    context[14] = context[9];
    context[15] = context[10];
    context[16] = context[11];
    context[17] = context[12];
    if( ! refalrts::char_term( '\n', context[13] ) )
      continue;
    // closed e.Accum#1 as range 14
    // closed e.Text#1 as range 16
    //DEBUG: e.Accum#1: 14
    //DEBUG: e.Text#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} e.Accum#1/14 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 Reuse: & TokenError/4 HalfReuse: 'U'/7 }"nclosed quote"/18 )/20 </21 & Main/22 Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[18], context[19], "nclosed quote", 13);
    refalrts::alloc_close_bracket(vm, context[20]);
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_Main]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::update_name(context[4], functions[efunc_TokenError]);
    refalrts::reinit_char(context[7], 'U');
    refalrts::reinit_open_bracket(context[8]);
    refalrts::reinit_close_bracket(context[13]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[21] );
    refalrts::link_brackets( context[8], context[13] );
    refalrts::link_brackets( context[0], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[18], context[22] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & StringLiteral-Escape/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2
  //DEBUG: e.Accum#1: 5
  //DEBUG: e.Text#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Accum#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 & TokenError/10"Unexpected escape sequence"/11 )/13 Tile{ AsIs: </0 Reuse: & StringLiteral/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_TokenError]);
  refalrts::alloc_chars(vm, context[11], context[12], "Unexpected escape sequence", 26);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_StringLiteral]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[9], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_StringLiteralm_Escape("StringLiteral-Escape", COOKIE1_, COOKIE2_, func_StringLiteralm_Escape);


static refalrts::FnResult func_StringLiteralm_Quote(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & StringLiteral-Quote/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & StringLiteral-Quote/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & StringLiteral-Quote/4 (/7 e.Accum#1/9 )/8 '\''/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '\'', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral-Char/4 } Tile{ AsIs: e.Accum#1/9 } '\''/14 Tile{ HalfReuse: )/7 } </15 & StringLiteral/16 Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::alloc_char(vm, context[14], '\'');
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_name(vm, context[16], functions[efunc_StringLiteral]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_TkLiteralm_Char]);
    refalrts::reinit_close_bracket(context[7]);
    refalrts::reinit_open_bracket(context[8]);
    refalrts::reinit_close_bracket(context[13]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[15] );
    refalrts::link_brackets( context[8], context[13] );
    refalrts::link_brackets( context[0], context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & StringLiteral-Quote/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2
  //DEBUG: e.Accum#1: 5
  //DEBUG: e.Text#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Main/4 AsIs: (/7 AsIs: e.Accum#1/5 AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_Main]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_StringLiteralm_Quote("StringLiteral-Quote", COOKIE1_, COOKIE2_, func_StringLiteralm_Quote);


static refalrts::FnResult func_Compoundm_Escapem_Dec(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & Compound-Escape-Dec/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Compound-Escape-Dec/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Compound-Escape-Dec/4 (/7 e.new#5/9 )/8 s.new#3/13 e.new#4/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.new#5 as range 9
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    // closed e.new#4 as range 11
    do {
      // </0 & Compound-Escape-Dec/4 (/7 e.Accum#1/14 )/8 '0'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '0', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CompoundSymbol/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '0'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_CompoundSymbol]);
      refalrts::reinit_char(context[8], '0');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Compound-Escape-Dec/4 (/7 e.Accum#1/14 )/8 '1'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '1', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CompoundSymbol/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '1'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_CompoundSymbol]);
      refalrts::reinit_char(context[8], '1');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Compound-Escape-Dec/4 (/7 e.Accum#1/14 )/8 '2'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '2', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CompoundSymbol/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '2'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_CompoundSymbol]);
      refalrts::reinit_char(context[8], '2');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Compound-Escape-Dec/4 (/7 e.Accum#1/14 )/8 '3'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '3', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CompoundSymbol/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '3'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_CompoundSymbol]);
      refalrts::reinit_char(context[8], '3');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Compound-Escape-Dec/4 (/7 e.Accum#1/14 )/8 '4'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '4', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CompoundSymbol/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '4'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_CompoundSymbol]);
      refalrts::reinit_char(context[8], '4');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Compound-Escape-Dec/4 (/7 e.Accum#1/14 )/8 '5'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '5', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CompoundSymbol/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '5'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_CompoundSymbol]);
      refalrts::reinit_char(context[8], '5');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Compound-Escape-Dec/4 (/7 e.Accum#1/14 )/8 '6'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '6', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CompoundSymbol/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '6'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_CompoundSymbol]);
      refalrts::reinit_char(context[8], '6');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Compound-Escape-Dec/4 (/7 e.Accum#1/14 )/8 '7'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '7', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CompoundSymbol/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '7'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_CompoundSymbol]);
      refalrts::reinit_char(context[8], '7');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Compound-Escape-Dec/4 (/7 e.Accum#1/14 )/8 '8'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '8', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CompoundSymbol/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '8'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_CompoundSymbol]);
      refalrts::reinit_char(context[8], '8');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Compound-Escape-Dec/4 (/7 e.Accum#1/14 )/8 '9'/13 e.Text#1/16 >/1
    context[14] = context[9];
    context[15] = context[10];
    context[16] = context[11];
    context[17] = context[12];
    if( ! refalrts::char_term( '9', context[13] ) )
      continue;
    // closed e.Accum#1 as range 14
    // closed e.Text#1 as range 16
    //DEBUG: e.Accum#1: 14
    //DEBUG: e.Text#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & CompoundSymbol/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '9'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_CompoundSymbol]);
    refalrts::reinit_char(context[8], '9');
    refalrts::reinit_close_bracket(context[13]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Compound-Escape-Dec/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2
  //DEBUG: e.Accum#1: 5
  //DEBUG: e.Text#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Accum#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 & TokenError/10"Expected decimal digit"/11 )/13 Tile{ AsIs: </0 Reuse: & CompoundSymbol/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_TokenError]);
  refalrts::alloc_chars(vm, context[11], context[12], "Expected decimal digit", 22);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_CompoundSymbol]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[9], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Compoundm_Escapem_Dec("Compound-Escape-Dec", COOKIE1_, COOKIE2_, func_Compoundm_Escapem_Dec);


static refalrts::FnResult func_Compoundm_Escapem_Hex(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & Compound-Escape-Hex/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Compound-Escape-Hex/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Compound-Escape-Hex/4 (/7 e.new#5/9 )/8 s.new#3/13 e.new#4/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.new#5 as range 9
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    // closed e.new#4 as range 11
    do {
      // </0 & Compound-Escape-Hex/4 (/7 e.Accum#1/14 )/8 '0'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '0', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CompoundSymbol/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '0'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_CompoundSymbol]);
      refalrts::reinit_char(context[8], '0');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Compound-Escape-Hex/4 (/7 e.Accum#1/14 )/8 '1'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '1', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CompoundSymbol/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '1'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_CompoundSymbol]);
      refalrts::reinit_char(context[8], '1');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Compound-Escape-Hex/4 (/7 e.Accum#1/14 )/8 '2'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '2', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CompoundSymbol/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '2'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_CompoundSymbol]);
      refalrts::reinit_char(context[8], '2');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Compound-Escape-Hex/4 (/7 e.Accum#1/14 )/8 '3'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '3', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CompoundSymbol/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '3'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_CompoundSymbol]);
      refalrts::reinit_char(context[8], '3');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Compound-Escape-Hex/4 (/7 e.Accum#1/14 )/8 '4'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '4', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CompoundSymbol/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '4'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_CompoundSymbol]);
      refalrts::reinit_char(context[8], '4');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Compound-Escape-Hex/4 (/7 e.Accum#1/14 )/8 '5'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '5', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CompoundSymbol/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '5'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_CompoundSymbol]);
      refalrts::reinit_char(context[8], '5');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Compound-Escape-Hex/4 (/7 e.Accum#1/14 )/8 '6'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '6', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CompoundSymbol/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '6'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_CompoundSymbol]);
      refalrts::reinit_char(context[8], '6');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Compound-Escape-Hex/4 (/7 e.Accum#1/14 )/8 '7'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '7', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CompoundSymbol/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '7'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_CompoundSymbol]);
      refalrts::reinit_char(context[8], '7');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Compound-Escape-Hex/4 (/7 e.Accum#1/14 )/8 '8'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '8', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CompoundSymbol/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '8'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_CompoundSymbol]);
      refalrts::reinit_char(context[8], '8');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Compound-Escape-Hex/4 (/7 e.Accum#1/14 )/8 '9'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '9', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CompoundSymbol/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '9'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_CompoundSymbol]);
      refalrts::reinit_char(context[8], '9');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Compound-Escape-Hex/4 (/7 e.Accum#1/14 )/8 'A'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'A', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CompoundSymbol/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'A'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_CompoundSymbol]);
      refalrts::reinit_char(context[8], 'A');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Compound-Escape-Hex/4 (/7 e.Accum#1/14 )/8 'B'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'B', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CompoundSymbol/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'B'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_CompoundSymbol]);
      refalrts::reinit_char(context[8], 'B');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Compound-Escape-Hex/4 (/7 e.Accum#1/14 )/8 'C'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'C', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CompoundSymbol/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'C'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_CompoundSymbol]);
      refalrts::reinit_char(context[8], 'C');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Compound-Escape-Hex/4 (/7 e.Accum#1/14 )/8 'D'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'D', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CompoundSymbol/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'D'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_CompoundSymbol]);
      refalrts::reinit_char(context[8], 'D');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Compound-Escape-Hex/4 (/7 e.Accum#1/14 )/8 'E'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'E', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CompoundSymbol/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'E'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_CompoundSymbol]);
      refalrts::reinit_char(context[8], 'E');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Compound-Escape-Hex/4 (/7 e.Accum#1/14 )/8 'F'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'F', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CompoundSymbol/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'F'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_CompoundSymbol]);
      refalrts::reinit_char(context[8], 'F');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Compound-Escape-Hex/4 (/7 e.Accum#1/14 )/8 'a'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'a', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CompoundSymbol/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'a'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_CompoundSymbol]);
      refalrts::reinit_char(context[8], 'a');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Compound-Escape-Hex/4 (/7 e.Accum#1/14 )/8 'b'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'b', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CompoundSymbol/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'b'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_CompoundSymbol]);
      refalrts::reinit_char(context[8], 'b');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Compound-Escape-Hex/4 (/7 e.Accum#1/14 )/8 'c'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'c', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CompoundSymbol/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'c'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_CompoundSymbol]);
      refalrts::reinit_char(context[8], 'c');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Compound-Escape-Hex/4 (/7 e.Accum#1/14 )/8 'd'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'd', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CompoundSymbol/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'd'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_CompoundSymbol]);
      refalrts::reinit_char(context[8], 'd');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Compound-Escape-Hex/4 (/7 e.Accum#1/14 )/8 'e'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'e', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CompoundSymbol/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'e'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_CompoundSymbol]);
      refalrts::reinit_char(context[8], 'e');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Compound-Escape-Hex/4 (/7 e.Accum#1/14 )/8 'f'/13 e.Text#1/16 >/1
    context[14] = context[9];
    context[15] = context[10];
    context[16] = context[11];
    context[17] = context[12];
    if( ! refalrts::char_term( 'f', context[13] ) )
      continue;
    // closed e.Accum#1 as range 14
    // closed e.Text#1 as range 16
    //DEBUG: e.Accum#1: 14
    //DEBUG: e.Text#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & CompoundSymbol/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'f'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_CompoundSymbol]);
    refalrts::reinit_char(context[8], 'f');
    refalrts::reinit_close_bracket(context[13]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Compound-Escape-Hex/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2
  //DEBUG: e.Accum#1: 5
  //DEBUG: e.Text#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Accum#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 & TokenError/10"Expected hexadecimal digit"/11 )/13 Tile{ AsIs: </0 Reuse: & CompoundSymbol/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_TokenError]);
  refalrts::alloc_chars(vm, context[11], context[12], "Expected hexadecimal digit", 26);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_CompoundSymbol]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[9], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Compoundm_Escapem_Hex("Compound-Escape-Hex", COOKIE1_, COOKIE2_, func_Compoundm_Escapem_Hex);


static refalrts::FnResult func_CCommentm_CheckNested(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & CComment-CheckNested/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CComment-CheckNested/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & CComment-CheckNested/4 (/7 e.Accum#1/9 )/8 '*'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '*', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} e.Accum#1/9 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 Reuse: & TokenError/4 HalfReuse: 'N'/7 }"ested comments is disabled"/14 )/16 </17 & CComment/18 Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[14], context[15], "ested comments is disabled", 26);
    refalrts::alloc_close_bracket(vm, context[16]);
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[18], functions[efunc_CComment]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::update_name(context[4], functions[efunc_TokenError]);
    refalrts::reinit_char(context[7], 'N');
    refalrts::reinit_open_bracket(context[8]);
    refalrts::reinit_close_bracket(context[13]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[17] );
    refalrts::link_brackets( context[8], context[13] );
    refalrts::link_brackets( context[0], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[14], context[18] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CComment-CheckNested/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2
  //DEBUG: e.Accum#1: 5
  //DEBUG: e.Text#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CComment/4 AsIs: (/7 AsIs: e.Accum#1/5 AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_CComment]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CCommentm_CheckNested("CComment-CheckNested", COOKIE1_, COOKIE2_, func_CCommentm_CheckNested);


static refalrts::FnResult func_CCommentm_CheckEnd(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & CComment-CheckEnd/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CComment-CheckEnd/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & CComment-CheckEnd/4 (/7 e.Accum#1/9 )/8 '/'/13 e.Text#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = refalrts::char_left( '/', context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Accum#1 as range 9
    // closed e.Text#1 as range 11
    //DEBUG: e.Accum#1: 9
    //DEBUG: e.Text#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/7 e.Accum#1/9 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Main/4 } Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/11 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_Main]);
    refalrts::reinit_open_bracket(context[8]);
    refalrts::reinit_close_bracket(context[13]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[8], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CComment-CheckEnd/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2
  //DEBUG: e.Accum#1: 5
  //DEBUG: e.Text#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CComment/4 AsIs: (/7 AsIs: e.Accum#1/5 AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_CComment]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CCommentm_CheckEnd("CComment-CheckEnd", COOKIE1_, COOKIE2_, func_CCommentm_CheckEnd);


static refalrts::FnResult func_Nativem_CheckEnd2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & Native-CheckEnd2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Native-CheckEnd2/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Native-CheckEnd2/4 (/7 e.new#5/9 )/8 s.new#3/13 e.new#4/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.new#5 as range 9
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    // closed e.new#4 as range 11
    do {
      // </0 & Native-CheckEnd2/4 (/7 e.Accum#1/14 )/8 '\r'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '\r', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Native-CheckEnd2/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '\r'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '\r');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Native-CheckEnd2/4 (/7 e.Accum#1/14 )/8 '\n'/13 e.Text#1/16 >/1
    context[14] = context[9];
    context[15] = context[10];
    context[16] = context[11];
    context[17] = context[12];
    if( ! refalrts::char_term( '\n', context[13] ) )
      continue;
    // closed e.Accum#1 as range 14
    // closed e.Text#1 as range 16
    //DEBUG: e.Accum#1: 14
    //DEBUG: e.Text#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkNewLine/4 } Tile{ AsIs: e.Accum#1/14 } '\n'/18 Tile{ HalfReuse: )/7 } </19 & Main/20 Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
    refalrts::alloc_char(vm, context[18], '\n');
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_Main]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_TkNewLine]);
    refalrts::reinit_close_bracket(context[7]);
    refalrts::reinit_open_bracket(context[8]);
    refalrts::reinit_close_bracket(context[13]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[19] );
    refalrts::link_brackets( context[8], context[13] );
    refalrts::link_brackets( context[0], context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Native-CheckEnd2/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2
  //DEBUG: e.Accum#1: 5
  //DEBUG: e.Text#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Native/4 AsIs: (/7 AsIs: e.Accum#1/5 AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_Native]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Nativem_CheckEnd2("Native-CheckEnd2", COOKIE1_, COOKIE2_, func_Nativem_CheckEnd2);


static refalrts::FnResult func_StringLiteralm_Escapem_Code(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & StringLiteral-Escape-Code/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & StringLiteral-Escape-Code/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & StringLiteral-Escape-Code/4 (/7 e.new#5/9 )/8 s.new#3/13 e.new#4/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.new#5 as range 9
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    // closed e.new#4 as range 11
    do {
      // </0 & StringLiteral-Escape-Code/4 (/7 e.Accum#1/14 )/8 '0'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '0', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL-E-C1/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '0'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_SLm_Em_C1]);
      refalrts::reinit_char(context[8], '0');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape-Code/4 (/7 e.Accum#1/14 )/8 '1'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '1', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL-E-C1/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '1'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_SLm_Em_C1]);
      refalrts::reinit_char(context[8], '1');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape-Code/4 (/7 e.Accum#1/14 )/8 '2'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '2', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL-E-C1/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '2'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_SLm_Em_C1]);
      refalrts::reinit_char(context[8], '2');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape-Code/4 (/7 e.Accum#1/14 )/8 '3'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '3', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL-E-C1/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '3'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_SLm_Em_C1]);
      refalrts::reinit_char(context[8], '3');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape-Code/4 (/7 e.Accum#1/14 )/8 '4'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '4', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL-E-C1/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '4'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_SLm_Em_C1]);
      refalrts::reinit_char(context[8], '4');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape-Code/4 (/7 e.Accum#1/14 )/8 '5'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '5', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL-E-C1/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '5'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_SLm_Em_C1]);
      refalrts::reinit_char(context[8], '5');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape-Code/4 (/7 e.Accum#1/14 )/8 '6'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '6', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL-E-C1/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '6'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_SLm_Em_C1]);
      refalrts::reinit_char(context[8], '6');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape-Code/4 (/7 e.Accum#1/14 )/8 '7'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '7', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL-E-C1/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '7'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_SLm_Em_C1]);
      refalrts::reinit_char(context[8], '7');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape-Code/4 (/7 e.Accum#1/14 )/8 '8'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '8', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL-E-C1/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '8'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_SLm_Em_C1]);
      refalrts::reinit_char(context[8], '8');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & StringLiteral-Escape-Code/4 (/7 e.Accum#1/14 )/8 '9'/13 e.Text#1/16 >/1
    context[14] = context[9];
    context[15] = context[10];
    context[16] = context[11];
    context[17] = context[12];
    if( ! refalrts::char_term( '9', context[13] ) )
      continue;
    // closed e.Accum#1 as range 14
    // closed e.Text#1 as range 16
    //DEBUG: e.Accum#1: 14
    //DEBUG: e.Text#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL-E-C1/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '9'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_SLm_Em_C1]);
    refalrts::reinit_char(context[8], '9');
    refalrts::reinit_close_bracket(context[13]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & StringLiteral-Escape-Code/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2
  //DEBUG: e.Accum#1: 5
  //DEBUG: e.Text#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Accum#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 & TokenError/10"Expected decimal digit"/11 )/13 Tile{ AsIs: </0 Reuse: & StringLiteral/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_TokenError]);
  refalrts::alloc_chars(vm, context[11], context[12], "Expected decimal digit", 22);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_StringLiteral]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[9], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_StringLiteralm_Escapem_Code("StringLiteral-Escape-Code", COOKIE1_, COOKIE2_, func_StringLiteralm_Escapem_Code);


static refalrts::FnResult func_StringLiteralm_Escapem_OCode(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & StringLiteral-Escape-OCode/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & StringLiteral-Escape-OCode/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & StringLiteral-Escape-OCode/4 (/7 e.new#5/9 )/8 s.new#3/13 e.new#4/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.new#5 as range 9
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    // closed e.new#4 as range 11
    do {
      // </0 & StringLiteral-Escape-OCode/4 (/7 e.Accum#1/14 )/8 '0'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '0', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL-E-OC1/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '0'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_SLm_Em_OC1]);
      refalrts::reinit_char(context[8], '0');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape-OCode/4 (/7 e.Accum#1/14 )/8 '1'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '1', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL-E-OC1/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '1'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_SLm_Em_OC1]);
      refalrts::reinit_char(context[8], '1');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape-OCode/4 (/7 e.Accum#1/14 )/8 '2'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '2', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL-E-OC1/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '2'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_SLm_Em_OC1]);
      refalrts::reinit_char(context[8], '2');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape-OCode/4 (/7 e.Accum#1/14 )/8 '3'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '3', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL-E-OC1/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '3'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_SLm_Em_OC1]);
      refalrts::reinit_char(context[8], '3');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape-OCode/4 (/7 e.Accum#1/14 )/8 '4'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '4', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL-E-OC1/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '4'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_SLm_Em_OC1]);
      refalrts::reinit_char(context[8], '4');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape-OCode/4 (/7 e.Accum#1/14 )/8 '5'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '5', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL-E-OC1/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '5'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_SLm_Em_OC1]);
      refalrts::reinit_char(context[8], '5');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape-OCode/4 (/7 e.Accum#1/14 )/8 '6'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '6', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL-E-OC1/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '6'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_SLm_Em_OC1]);
      refalrts::reinit_char(context[8], '6');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & StringLiteral-Escape-OCode/4 (/7 e.Accum#1/14 )/8 '7'/13 e.Text#1/16 >/1
    context[14] = context[9];
    context[15] = context[10];
    context[16] = context[11];
    context[17] = context[12];
    if( ! refalrts::char_term( '7', context[13] ) )
      continue;
    // closed e.Accum#1 as range 14
    // closed e.Text#1 as range 16
    //DEBUG: e.Accum#1: 14
    //DEBUG: e.Text#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL-E-OC1/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '7'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_SLm_Em_OC1]);
    refalrts::reinit_char(context[8], '7');
    refalrts::reinit_close_bracket(context[13]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & StringLiteral-Escape-OCode/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2
  //DEBUG: e.Accum#1: 5
  //DEBUG: e.Text#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 # TkLiteral-OCode/10 Tile{ AsIs: e.Accum#1/5 } )/11 Tile{ AsIs: </0 Reuse: & StringLiteral/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_ident(vm, context[10], identifiers[ident_TkLiteralm_OCode]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_StringLiteral]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[9], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_StringLiteralm_Escapem_OCode("StringLiteral-Escape-OCode", COOKIE1_, COOKIE2_, func_StringLiteralm_Escapem_OCode);


static refalrts::FnResult func_StringLiteralm_Escapem_XCode(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & StringLiteral-Escape-XCode/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & StringLiteral-Escape-XCode/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & StringLiteral-Escape-XCode/4 (/7 e.new#5/9 )/8 s.new#3/13 e.new#4/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.new#5 as range 9
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    // closed e.new#4 as range 11
    do {
      // </0 & StringLiteral-Escape-XCode/4 (/7 e.Accum#1/14 )/8 '0'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '0', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & StringLiteral-Escape-Xnext/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '0'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_StringLiteralm_Escapem_Xnext]);
      refalrts::reinit_char(context[8], '0');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape-XCode/4 (/7 e.Accum#1/14 )/8 '1'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '1', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & StringLiteral-Escape-Xnext/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '1'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_StringLiteralm_Escapem_Xnext]);
      refalrts::reinit_char(context[8], '1');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape-XCode/4 (/7 e.Accum#1/14 )/8 '2'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '2', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & StringLiteral-Escape-Xnext/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '2'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_StringLiteralm_Escapem_Xnext]);
      refalrts::reinit_char(context[8], '2');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape-XCode/4 (/7 e.Accum#1/14 )/8 '3'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '3', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & StringLiteral-Escape-Xnext/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '3'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_StringLiteralm_Escapem_Xnext]);
      refalrts::reinit_char(context[8], '3');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape-XCode/4 (/7 e.Accum#1/14 )/8 '4'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '4', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & StringLiteral-Escape-Xnext/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '4'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_StringLiteralm_Escapem_Xnext]);
      refalrts::reinit_char(context[8], '4');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape-XCode/4 (/7 e.Accum#1/14 )/8 '5'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '5', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & StringLiteral-Escape-Xnext/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '5'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_StringLiteralm_Escapem_Xnext]);
      refalrts::reinit_char(context[8], '5');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape-XCode/4 (/7 e.Accum#1/14 )/8 '6'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '6', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & StringLiteral-Escape-Xnext/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '6'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_StringLiteralm_Escapem_Xnext]);
      refalrts::reinit_char(context[8], '6');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape-XCode/4 (/7 e.Accum#1/14 )/8 '7'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '7', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & StringLiteral-Escape-Xnext/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '7'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_StringLiteralm_Escapem_Xnext]);
      refalrts::reinit_char(context[8], '7');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape-XCode/4 (/7 e.Accum#1/14 )/8 '8'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '8', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & StringLiteral-Escape-Xnext/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '8'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_StringLiteralm_Escapem_Xnext]);
      refalrts::reinit_char(context[8], '8');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape-XCode/4 (/7 e.Accum#1/14 )/8 '9'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '9', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & StringLiteral-Escape-Xnext/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '9'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_StringLiteralm_Escapem_Xnext]);
      refalrts::reinit_char(context[8], '9');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape-XCode/4 (/7 e.Accum#1/14 )/8 'A'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'A', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & StringLiteral-Escape-Xnext/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'A'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_StringLiteralm_Escapem_Xnext]);
      refalrts::reinit_char(context[8], 'A');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape-XCode/4 (/7 e.Accum#1/14 )/8 'B'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'B', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & StringLiteral-Escape-Xnext/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'B'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_StringLiteralm_Escapem_Xnext]);
      refalrts::reinit_char(context[8], 'B');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape-XCode/4 (/7 e.Accum#1/14 )/8 'C'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'C', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & StringLiteral-Escape-Xnext/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'C'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_StringLiteralm_Escapem_Xnext]);
      refalrts::reinit_char(context[8], 'C');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape-XCode/4 (/7 e.Accum#1/14 )/8 'D'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'D', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & StringLiteral-Escape-Xnext/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'D'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_StringLiteralm_Escapem_Xnext]);
      refalrts::reinit_char(context[8], 'D');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape-XCode/4 (/7 e.Accum#1/14 )/8 'E'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'E', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & StringLiteral-Escape-Xnext/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'E'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_StringLiteralm_Escapem_Xnext]);
      refalrts::reinit_char(context[8], 'E');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape-XCode/4 (/7 e.Accum#1/14 )/8 'F'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'F', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & StringLiteral-Escape-Xnext/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'F'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_StringLiteralm_Escapem_Xnext]);
      refalrts::reinit_char(context[8], 'F');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape-XCode/4 (/7 e.Accum#1/14 )/8 'a'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'a', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & StringLiteral-Escape-Xnext/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'a'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_StringLiteralm_Escapem_Xnext]);
      refalrts::reinit_char(context[8], 'a');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape-XCode/4 (/7 e.Accum#1/14 )/8 'b'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'b', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & StringLiteral-Escape-Xnext/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'b'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_StringLiteralm_Escapem_Xnext]);
      refalrts::reinit_char(context[8], 'b');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape-XCode/4 (/7 e.Accum#1/14 )/8 'c'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'c', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & StringLiteral-Escape-Xnext/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'c'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_StringLiteralm_Escapem_Xnext]);
      refalrts::reinit_char(context[8], 'c');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape-XCode/4 (/7 e.Accum#1/14 )/8 'd'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'd', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & StringLiteral-Escape-Xnext/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'd'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_StringLiteralm_Escapem_Xnext]);
      refalrts::reinit_char(context[8], 'd');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape-XCode/4 (/7 e.Accum#1/14 )/8 'e'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'e', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & StringLiteral-Escape-Xnext/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'e'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_StringLiteralm_Escapem_Xnext]);
      refalrts::reinit_char(context[8], 'e');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & StringLiteral-Escape-XCode/4 (/7 e.Accum#1/14 )/8 'f'/13 e.Text#1/16 >/1
    context[14] = context[9];
    context[15] = context[10];
    context[16] = context[11];
    context[17] = context[12];
    if( ! refalrts::char_term( 'f', context[13] ) )
      continue;
    // closed e.Accum#1 as range 14
    // closed e.Text#1 as range 16
    //DEBUG: e.Accum#1: 14
    //DEBUG: e.Text#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & StringLiteral-Escape-Xnext/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'f'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_StringLiteralm_Escapem_Xnext]);
    refalrts::reinit_char(context[8], 'f');
    refalrts::reinit_close_bracket(context[13]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & StringLiteral-Escape-XCode/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2
  //DEBUG: e.Accum#1: 5
  //DEBUG: e.Text#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Accum#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 & TokenError/10"Expected hexadecimal digit"/11 )/13 Tile{ AsIs: </0 Reuse: & StringLiteral/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_TokenError]);
  refalrts::alloc_chars(vm, context[11], context[12], "Expected hexadecimal digit", 26);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_StringLiteral]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[9], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_StringLiteralm_Escapem_XCode("StringLiteral-Escape-XCode", COOKIE1_, COOKIE2_, func_StringLiteralm_Escapem_XCode);


static refalrts::FnResult func_SLm_Em_C1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & SL-E-C1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & SL-E-C1/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & SL-E-C1/4 (/7 e.new#5/9 )/8 s.new#3/13 e.new#4/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.new#5 as range 9
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    // closed e.new#4 as range 11
    do {
      // </0 & SL-E-C1/4 (/7 e.Accum#1/14 )/8 '0'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '0', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL-E-C2/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '0'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_SLm_Em_C2]);
      refalrts::reinit_char(context[8], '0');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SL-E-C1/4 (/7 e.Accum#1/14 )/8 '1'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '1', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL-E-C2/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '1'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_SLm_Em_C2]);
      refalrts::reinit_char(context[8], '1');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SL-E-C1/4 (/7 e.Accum#1/14 )/8 '2'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '2', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL-E-C2/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '2'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_SLm_Em_C2]);
      refalrts::reinit_char(context[8], '2');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SL-E-C1/4 (/7 e.Accum#1/14 )/8 '3'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '3', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL-E-C2/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '3'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_SLm_Em_C2]);
      refalrts::reinit_char(context[8], '3');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SL-E-C1/4 (/7 e.Accum#1/14 )/8 '4'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '4', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL-E-C2/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '4'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_SLm_Em_C2]);
      refalrts::reinit_char(context[8], '4');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SL-E-C1/4 (/7 e.Accum#1/14 )/8 '5'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '5', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL-E-C2/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '5'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_SLm_Em_C2]);
      refalrts::reinit_char(context[8], '5');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SL-E-C1/4 (/7 e.Accum#1/14 )/8 '6'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '6', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL-E-C2/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '6'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_SLm_Em_C2]);
      refalrts::reinit_char(context[8], '6');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SL-E-C1/4 (/7 e.Accum#1/14 )/8 '7'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '7', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL-E-C2/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '7'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_SLm_Em_C2]);
      refalrts::reinit_char(context[8], '7');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SL-E-C1/4 (/7 e.Accum#1/14 )/8 '8'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '8', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL-E-C2/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '8'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_SLm_Em_C2]);
      refalrts::reinit_char(context[8], '8');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & SL-E-C1/4 (/7 e.Accum#1/14 )/8 '9'/13 e.Text#1/16 >/1
    context[14] = context[9];
    context[15] = context[10];
    context[16] = context[11];
    context[17] = context[12];
    if( ! refalrts::char_term( '9', context[13] ) )
      continue;
    // closed e.Accum#1 as range 14
    // closed e.Text#1 as range 16
    //DEBUG: e.Accum#1: 14
    //DEBUG: e.Text#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SL-E-C2/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '9'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_SLm_Em_C2]);
    refalrts::reinit_char(context[8], '9');
    refalrts::reinit_close_bracket(context[13]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SL-E-C1/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2
  //DEBUG: e.Accum#1: 5
  //DEBUG: e.Text#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 # TkLiteral-Code/10 Tile{ AsIs: e.Accum#1/5 } )/11 Tile{ AsIs: </0 Reuse: & StringLiteral/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_ident(vm, context[10], identifiers[ident_TkLiteralm_Code]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_StringLiteral]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[9], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SLm_Em_C1("SL-E-C1", COOKIE1_, COOKIE2_, func_SLm_Em_C1);


static refalrts::FnResult func_SLm_Em_OC1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & SL-E-OC1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & SL-E-OC1/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & SL-E-OC1/4 (/7 e.new#5/9 )/8 s.new#3/13 e.new#4/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.new#5 as range 9
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    // closed e.new#4 as range 11
    do {
      // </0 & SL-E-OC1/4 (/7 e.Accum#1/14 )/8 '0'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '0', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral-OCode/4 } Tile{ AsIs: e.Accum#1/14 } '0'/18 Tile{ HalfReuse: )/7 } </19 & StringLiteral/20 Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[18], '0');
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::alloc_name(vm, context[20], functions[efunc_StringLiteral]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TkLiteralm_OCode]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[19] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SL-E-OC1/4 (/7 e.Accum#1/14 )/8 '1'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '1', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral-OCode/4 } Tile{ AsIs: e.Accum#1/14 } '1'/18 Tile{ HalfReuse: )/7 } </19 & StringLiteral/20 Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[18], '1');
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::alloc_name(vm, context[20], functions[efunc_StringLiteral]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TkLiteralm_OCode]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[19] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SL-E-OC1/4 (/7 e.Accum#1/14 )/8 '2'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '2', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral-OCode/4 } Tile{ AsIs: e.Accum#1/14 } '2'/18 Tile{ HalfReuse: )/7 } </19 & StringLiteral/20 Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[18], '2');
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::alloc_name(vm, context[20], functions[efunc_StringLiteral]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TkLiteralm_OCode]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[19] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SL-E-OC1/4 (/7 e.Accum#1/14 )/8 '3'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '3', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral-OCode/4 } Tile{ AsIs: e.Accum#1/14 } '3'/18 Tile{ HalfReuse: )/7 } </19 & StringLiteral/20 Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[18], '3');
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::alloc_name(vm, context[20], functions[efunc_StringLiteral]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TkLiteralm_OCode]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[19] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SL-E-OC1/4 (/7 e.Accum#1/14 )/8 '4'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '4', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral-OCode/4 } Tile{ AsIs: e.Accum#1/14 } '4'/18 Tile{ HalfReuse: )/7 } </19 & StringLiteral/20 Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[18], '4');
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::alloc_name(vm, context[20], functions[efunc_StringLiteral]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TkLiteralm_OCode]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[19] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SL-E-OC1/4 (/7 e.Accum#1/14 )/8 '5'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '5', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral-OCode/4 } Tile{ AsIs: e.Accum#1/14 } '5'/18 Tile{ HalfReuse: )/7 } </19 & StringLiteral/20 Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[18], '5');
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::alloc_name(vm, context[20], functions[efunc_StringLiteral]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TkLiteralm_OCode]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[19] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SL-E-OC1/4 (/7 e.Accum#1/14 )/8 '6'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '6', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral-OCode/4 } Tile{ AsIs: e.Accum#1/14 } '6'/18 Tile{ HalfReuse: )/7 } </19 & StringLiteral/20 Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[18], '6');
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::alloc_name(vm, context[20], functions[efunc_StringLiteral]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TkLiteralm_OCode]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[19] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & SL-E-OC1/4 (/7 e.Accum#1/14 )/8 '7'/13 e.Text#1/16 >/1
    context[14] = context[9];
    context[15] = context[10];
    context[16] = context[11];
    context[17] = context[12];
    if( ! refalrts::char_term( '7', context[13] ) )
      continue;
    // closed e.Accum#1 as range 14
    // closed e.Text#1 as range 16
    //DEBUG: e.Accum#1: 14
    //DEBUG: e.Text#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral-OCode/4 } Tile{ AsIs: e.Accum#1/14 } '7'/18 Tile{ HalfReuse: )/7 } </19 & StringLiteral/20 Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
    refalrts::alloc_char(vm, context[18], '7');
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_StringLiteral]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_TkLiteralm_OCode]);
    refalrts::reinit_close_bracket(context[7]);
    refalrts::reinit_open_bracket(context[8]);
    refalrts::reinit_close_bracket(context[13]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[19] );
    refalrts::link_brackets( context[8], context[13] );
    refalrts::link_brackets( context[0], context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SL-E-OC1/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2
  //DEBUG: e.Accum#1: 5
  //DEBUG: e.Text#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 # TkLiteral-OCode/10 Tile{ AsIs: e.Accum#1/5 } )/11 Tile{ AsIs: </0 Reuse: & StringLiteral/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_ident(vm, context[10], identifiers[ident_TkLiteralm_OCode]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_StringLiteral]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[9], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SLm_Em_OC1("SL-E-OC1", COOKIE1_, COOKIE2_, func_SLm_Em_OC1);


static refalrts::FnResult func_StringLiteralm_Escapem_Xnext(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & StringLiteral-Escape-Xnext/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & StringLiteral-Escape-Xnext/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & StringLiteral-Escape-Xnext/4 (/7 e.new#5/9 )/8 s.new#3/13 e.new#4/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.new#5 as range 9
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    // closed e.new#4 as range 11
    do {
      // </0 & StringLiteral-Escape-Xnext/4 (/7 e.Accum#1/14 )/8 '0'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '0', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & StringLiteral-Escape-Xnext/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '0'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '0');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape-Xnext/4 (/7 e.Accum#1/14 )/8 '1'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '1', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & StringLiteral-Escape-Xnext/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '1'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '1');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape-Xnext/4 (/7 e.Accum#1/14 )/8 '2'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '2', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & StringLiteral-Escape-Xnext/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '2'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '2');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape-Xnext/4 (/7 e.Accum#1/14 )/8 '3'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '3', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & StringLiteral-Escape-Xnext/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '3'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '3');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape-Xnext/4 (/7 e.Accum#1/14 )/8 '4'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '4', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & StringLiteral-Escape-Xnext/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '4'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '4');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape-Xnext/4 (/7 e.Accum#1/14 )/8 '5'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '5', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & StringLiteral-Escape-Xnext/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '5'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '5');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape-Xnext/4 (/7 e.Accum#1/14 )/8 '6'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '6', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & StringLiteral-Escape-Xnext/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '6'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '6');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape-Xnext/4 (/7 e.Accum#1/14 )/8 '7'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '7', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & StringLiteral-Escape-Xnext/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '7'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '7');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape-Xnext/4 (/7 e.Accum#1/14 )/8 '8'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '8', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & StringLiteral-Escape-Xnext/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '8'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '8');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape-Xnext/4 (/7 e.Accum#1/14 )/8 '9'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '9', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & StringLiteral-Escape-Xnext/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: '9'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '9');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape-Xnext/4 (/7 e.Accum#1/14 )/8 'A'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'A', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & StringLiteral-Escape-Xnext/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'A'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'A');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape-Xnext/4 (/7 e.Accum#1/14 )/8 'B'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'B', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & StringLiteral-Escape-Xnext/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'B'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'B');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape-Xnext/4 (/7 e.Accum#1/14 )/8 'C'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'C', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & StringLiteral-Escape-Xnext/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'C'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'C');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape-Xnext/4 (/7 e.Accum#1/14 )/8 'D'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'D', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & StringLiteral-Escape-Xnext/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'D'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'D');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape-Xnext/4 (/7 e.Accum#1/14 )/8 'E'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'E', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & StringLiteral-Escape-Xnext/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'E'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'E');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape-Xnext/4 (/7 e.Accum#1/14 )/8 'F'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'F', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & StringLiteral-Escape-Xnext/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'F'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'F');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape-Xnext/4 (/7 e.Accum#1/14 )/8 'a'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'a', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & StringLiteral-Escape-Xnext/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'a'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'a');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape-Xnext/4 (/7 e.Accum#1/14 )/8 'b'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'b', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & StringLiteral-Escape-Xnext/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'b'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'b');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape-Xnext/4 (/7 e.Accum#1/14 )/8 'c'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'c', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & StringLiteral-Escape-Xnext/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'c'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'c');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape-Xnext/4 (/7 e.Accum#1/14 )/8 'd'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'd', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & StringLiteral-Escape-Xnext/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'd'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'd');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & StringLiteral-Escape-Xnext/4 (/7 e.Accum#1/14 )/8 'e'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( 'e', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & StringLiteral-Escape-Xnext/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'e'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'e');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & StringLiteral-Escape-Xnext/4 (/7 e.Accum#1/14 )/8 'f'/13 e.Text#1/16 >/1
    context[14] = context[9];
    context[15] = context[10];
    context[16] = context[11];
    context[17] = context[12];
    if( ! refalrts::char_term( 'f', context[13] ) )
      continue;
    // closed e.Accum#1 as range 14
    // closed e.Text#1 as range 16
    //DEBUG: e.Accum#1: 14
    //DEBUG: e.Text#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & StringLiteral-Escape-Xnext/4 AsIs: (/7 AsIs: e.Accum#1/14 HalfReuse: 'f'/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
    refalrts::reinit_char(context[8], 'f');
    refalrts::reinit_close_bracket(context[13]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[13] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & StringLiteral-Escape-Xnext/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2
  //DEBUG: e.Accum#1: 5
  //DEBUG: e.Text#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 # TkLiteral-XCode/10 Tile{ AsIs: e.Accum#1/5 } )/11 Tile{ AsIs: </0 Reuse: & StringLiteral/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_ident(vm, context[10], identifiers[ident_TkLiteralm_XCode]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_StringLiteral]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[9], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_StringLiteralm_Escapem_Xnext("StringLiteral-Escape-Xnext", COOKIE1_, COOKIE2_, func_StringLiteralm_Escapem_Xnext);


static refalrts::FnResult func_SLm_Em_C2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & SL-E-C2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & SL-E-C2/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & SL-E-C2/4 (/7 e.new#5/9 )/8 s.new#3/13 e.new#4/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.new#5 as range 9
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    // closed e.new#4 as range 11
    do {
      // </0 & SL-E-C2/4 (/7 e.Accum#1/14 )/8 '0'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '0', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral-Code/4 } Tile{ AsIs: e.Accum#1/14 } '0'/18 Tile{ HalfReuse: )/7 } </19 & StringLiteral/20 Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[18], '0');
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::alloc_name(vm, context[20], functions[efunc_StringLiteral]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TkLiteralm_Code]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[19] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SL-E-C2/4 (/7 e.Accum#1/14 )/8 '1'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '1', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral-Code/4 } Tile{ AsIs: e.Accum#1/14 } '1'/18 Tile{ HalfReuse: )/7 } </19 & StringLiteral/20 Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[18], '1');
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::alloc_name(vm, context[20], functions[efunc_StringLiteral]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TkLiteralm_Code]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[19] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SL-E-C2/4 (/7 e.Accum#1/14 )/8 '2'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '2', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral-Code/4 } Tile{ AsIs: e.Accum#1/14 } '2'/18 Tile{ HalfReuse: )/7 } </19 & StringLiteral/20 Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[18], '2');
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::alloc_name(vm, context[20], functions[efunc_StringLiteral]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TkLiteralm_Code]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[19] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SL-E-C2/4 (/7 e.Accum#1/14 )/8 '3'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '3', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral-Code/4 } Tile{ AsIs: e.Accum#1/14 } '3'/18 Tile{ HalfReuse: )/7 } </19 & StringLiteral/20 Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[18], '3');
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::alloc_name(vm, context[20], functions[efunc_StringLiteral]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TkLiteralm_Code]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[19] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SL-E-C2/4 (/7 e.Accum#1/14 )/8 '4'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '4', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral-Code/4 } Tile{ AsIs: e.Accum#1/14 } '4'/18 Tile{ HalfReuse: )/7 } </19 & StringLiteral/20 Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[18], '4');
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::alloc_name(vm, context[20], functions[efunc_StringLiteral]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TkLiteralm_Code]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[19] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SL-E-C2/4 (/7 e.Accum#1/14 )/8 '5'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '5', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral-Code/4 } Tile{ AsIs: e.Accum#1/14 } '5'/18 Tile{ HalfReuse: )/7 } </19 & StringLiteral/20 Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[18], '5');
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::alloc_name(vm, context[20], functions[efunc_StringLiteral]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TkLiteralm_Code]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[19] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SL-E-C2/4 (/7 e.Accum#1/14 )/8 '6'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '6', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral-Code/4 } Tile{ AsIs: e.Accum#1/14 } '6'/18 Tile{ HalfReuse: )/7 } </19 & StringLiteral/20 Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[18], '6');
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::alloc_name(vm, context[20], functions[efunc_StringLiteral]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TkLiteralm_Code]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[19] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SL-E-C2/4 (/7 e.Accum#1/14 )/8 '7'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '7', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral-Code/4 } Tile{ AsIs: e.Accum#1/14 } '7'/18 Tile{ HalfReuse: )/7 } </19 & StringLiteral/20 Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[18], '7');
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::alloc_name(vm, context[20], functions[efunc_StringLiteral]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TkLiteralm_Code]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[19] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SL-E-C2/4 (/7 e.Accum#1/14 )/8 '8'/13 e.Text#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '8', context[13] ) )
        continue;
      // closed e.Accum#1 as range 14
      // closed e.Text#1 as range 16
      //DEBUG: e.Accum#1: 14
      //DEBUG: e.Text#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral-Code/4 } Tile{ AsIs: e.Accum#1/14 } '8'/18 Tile{ HalfReuse: )/7 } </19 & StringLiteral/20 Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[18], '8');
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::alloc_name(vm, context[20], functions[efunc_StringLiteral]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TkLiteralm_Code]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[19] );
      refalrts::link_brackets( context[8], context[13] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & SL-E-C2/4 (/7 e.Accum#1/14 )/8 '9'/13 e.Text#1/16 >/1
    context[14] = context[9];
    context[15] = context[10];
    context[16] = context[11];
    context[17] = context[12];
    if( ! refalrts::char_term( '9', context[13] ) )
      continue;
    // closed e.Accum#1 as range 14
    // closed e.Text#1 as range 16
    //DEBUG: e.Accum#1: 14
    //DEBUG: e.Text#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkLiteral-Code/4 } Tile{ AsIs: e.Accum#1/14 } '9'/18 Tile{ HalfReuse: )/7 } </19 & StringLiteral/20 Tile{ HalfReuse: (/8 HalfReuse: )/13 AsIs: e.Text#1/16 AsIs: >/1 ]] }
    refalrts::alloc_char(vm, context[18], '9');
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_StringLiteral]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_TkLiteralm_Code]);
    refalrts::reinit_close_bracket(context[7]);
    refalrts::reinit_open_bracket(context[8]);
    refalrts::reinit_close_bracket(context[13]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[19] );
    refalrts::link_brackets( context[8], context[13] );
    refalrts::link_brackets( context[0], context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SL-E-C2/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2
  //DEBUG: e.Accum#1: 5
  //DEBUG: e.Text#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 # TkLiteral-Code/10 Tile{ AsIs: e.Accum#1/5 } )/11 Tile{ AsIs: </0 Reuse: & StringLiteral/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_ident(vm, context[10], identifiers[ident_TkLiteralm_Code]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_StringLiteral]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[9], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SLm_Em_C2("SL-E-C2", COOKIE1_, COOKIE2_, func_SLm_Em_C2);


static refalrts::FnResult func_gen_Map_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & Map@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@1/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Map@1/4 (/7 e.#0/11 )/8 e.Tail#1/9 >/1
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
      //TRASH: {REMOVED TILE} {REMOVED TILE} & Map@1/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.#0/11 } Tile{ HalfReuse: '\n'/7 } Tile{ AsIs: </0 } Tile{ HalfReuse: & Map@1/8 AsIs: e.Tail#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[7], '\n');
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z1]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[0], context[0] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@1/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & LoadSource\1*1/4 AsIs: t.Next#1/7 } >/11 </12 & Map@1/13 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z1]);
    refalrts::update_name(context[4], functions[efunc_gen_LoadSource_L1D1]);
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
    // </0 & Map@1/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@1/4 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@1/4 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & LoadSource\1/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_LoadSource_L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z1("Map@1", COOKIE1_, COOKIE2_, func_gen_Map_Z1);


static refalrts::FnResult func_gen_Map_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
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
      // </0 & Map@2/4 s.Char#2/7 e.Tail#1/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      if( ! refalrts::svar_term( context[7], context[7] ) )
        continue;
      // closed e.Tail#1 as range 9
      //DEBUG: s.Char#2: 7
      //DEBUG: e.Tail#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkChar/4 AsIs: s.Char#2/7 } )/11 </12 & Map@2/13 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[11]);
      refalrts::alloc_open_call(vm, context[12]);
      refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z2]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TkChar]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[12] );
      refalrts::link_brackets( context[0], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[11], context[13] );
      refalrts::use( res );
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ValidDirective$10\1*1/4 AsIs: t.Next#1/7 } >/11 </12 & Map@2/13 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z2]);
    refalrts::update_name(context[4], functions[efunc_gen_ValidDirective_S10L1D1]);
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
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & ValidDirective$10\1/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_ValidDirective_S10L1]);
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
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & Map@3/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@3/4 t.Next#1/7 e.Tail#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.Tail#1 as range 5
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & NormalizeToken/4 AsIs: t.Next#1/7 } >/9 </10 & Map@3/11 Tile{ AsIs: e.Tail#1/5 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[9]);
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_gen_Map_Z3]);
    refalrts::update_name(context[4], functions[efunc_NormalizeToken]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[9], context[11] );
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
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & NormalizeToken/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_NormalizeToken]);
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


static refalrts::FnResult func_gen_Pipe_S2L1Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & Pipe$2\1@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Pipe$2\1@1/4 e.Arg#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Arg#2 as range 5
    //DEBUG: e.Arg#2: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch@2/4 } </7 & MapAccum@1/8 1/9 Tile{ AsIs: e.Arg#2/5 } >/10 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[8], functions[efunc_gen_MapAccum_Z1]);
    refalrts::alloc_number(vm, context[9], 1UL);
    refalrts::alloc_close_call(vm, context[10]);
    refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z2]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[7], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Pipe$2\1@1/4 e.dyn#0/2 >/1
  // closed e.dyn#0 as range 2
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Pipe$2\1@0/6 (/7 & MapAccum/8 & AddLineNumber/9 1/10 )/11 (/12 & DelAccumulator/13 Tile{ HalfReuse: & CollectNativeLines/0 HalfReuse: )/4 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_Pipe_S2L1Z0]);
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_MapAccum]);
  refalrts::alloc_name(vm, context[9], functions[efunc_AddLineNumber]);
  refalrts::alloc_number(vm, context[10], 1UL);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_DelAccumulator]);
  refalrts::reinit_name(context[0], functions[efunc_CollectNativeLines]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::link_brackets( context[12], context[4] );
  refalrts::link_brackets( context[7], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Pipe_S2L1Z1("Pipe$2\\1@1", COOKIE1_, COOKIE2_, func_gen_Pipe_S2L1Z1);


static refalrts::FnResult func_gen_Fetch_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & Fetch@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Fetch@1/4 e.Argument#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Argument#1 as range 5
    //DEBUG: e.Argument#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Pipe$2\1@1/4 AsIs: e.Argument#1/5 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_Pipe_S2L1Z1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Fetch@1/4 e.arg#0/2 >/1
  // closed e.arg#0 as range 2
  //DEBUG: e.arg#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch@0/4 AsIs: e.arg#0/2 HalfReuse: & Pipe$2\1@1/1 } >/5 Tile{ ]] }
  refalrts::alloc_close_call(vm, context[5]);
  refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z0]);
  refalrts::reinit_name(context[1], functions[efunc_gen_Pipe_S2L1Z1]);
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Fetch_Z1("Fetch@1", COOKIE1_, COOKIE2_, func_gen_Fetch_Z1);


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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@1/4 AsIs: t.Acc#1/5 } (/9 )/10 Tile{ AsIs: e.Tail#1/7 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[9]);
    refalrts::alloc_close_bracket(vm, context[10]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[9], context[10] );
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
  //RESULT: Tile{ [[ } </7 Tile{ HalfReuse: & MapAccum@0/0 Reuse: & AddLineNumber/4 AsIs: t.accum#0/5 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::reinit_name(context[0], functions[efunc_gen_MapAccum_Z0]);
  refalrts::update_name(context[4], functions[efunc_AddLineNumber]);
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


static refalrts::FnResult func_gen_Pipe_S2L1Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & Pipe$2\1@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Pipe$2\1@2/4 t.#0/7 e.#0/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.#0 as range 5
    //DEBUG: t.#0: 7
    //DEBUG: e.#0: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} t.#0/7 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & CollectNativeLines/4 } Tile{ AsIs: e.#0/5 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_CollectNativeLines]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Pipe$2\1@2/4 e.Arg#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Arg#2 as range 5
    //DEBUG: e.Arg#2: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </7 & Fetch@3/8 Tile{ AsIs: </0 Reuse: & DelAccumulator*1/4 AsIs: e.Arg#2/5 AsIs: >/1 } >/9 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[8], functions[efunc_gen_Fetch_Z3]);
    refalrts::alloc_close_call(vm, context[9]);
    refalrts::update_name(context[4], functions[efunc_gen_DelAccumulator_D1]);
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
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Pipe$2\1@2/4 e.dyn#0/2 >/1
  // closed e.dyn#0 as range 2
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Pipe$2\1@0/6 & DelAccumulator/7 (/8 Tile{ HalfReuse: & CollectNativeLines/0 HalfReuse: )/4 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_Pipe_S2L1Z0]);
  refalrts::alloc_name(vm, context[7], functions[efunc_DelAccumulator]);
  refalrts::alloc_open_bracket(vm, context[8]);
  refalrts::reinit_name(context[0], functions[efunc_CollectNativeLines]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::link_brackets( context[8], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Pipe_S2L1Z2("Pipe$2\\1@2", COOKIE1_, COOKIE2_, func_gen_Pipe_S2L1Z2);


static refalrts::FnResult func_gen_Fetch_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & Fetch@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Fetch@2/4 e.Argument#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Argument#1 as range 5
    //DEBUG: e.Argument#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Pipe$2\1@2/4 AsIs: e.Argument#1/5 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_Pipe_S2L1Z2]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Fetch@2/4 e.arg#0/2 >/1
  // closed e.arg#0 as range 2
  //DEBUG: e.arg#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch@0/4 AsIs: e.arg#0/2 HalfReuse: & Pipe$2\1@2/1 } >/5 Tile{ ]] }
  refalrts::alloc_close_call(vm, context[5]);
  refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z0]);
  refalrts::reinit_name(context[1], functions[efunc_gen_Pipe_S2L1Z2]);
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Fetch_Z2("Fetch@2", COOKIE1_, COOKIE2_, func_gen_Fetch_Z2);


static refalrts::FnResult func_gen_DoMapAccum_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & DoMapAccum@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum@1/4 t.new#1/5 (/9 e.new#2/7 )/10 e.new#3/2 >/1
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
    // </0 & DoMapAccum@1/4 t.Acc#1/5 (/9 e.Scanned#1/11 )/10 t.Next#1/15 e.Tail#1/13 >/1
    context[11] = context[7];
    context[12] = context[8];
    context[13] = context[2];
    context[14] = context[3];
    // closed e.Scanned#1 as range 11
    context[16] = refalrts::tvar_left( context[15], context[13], context[14] );
    if( ! context[16] )
      continue;
    // closed e.Tail#1 as range 13
    //DEBUG: t.Acc#1: 5
    //DEBUG: e.Scanned#1: 11
    //DEBUG: t.Next#1: 15
    //DEBUG: e.Tail#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@1/4 } Tile{ AsIs: (/9 AsIs: e.Scanned#1/11 AsIs: )/10 } (/17 Tile{ AsIs: e.Tail#1/13 } )/18 </19 & AddLineNumber/20 Tile{ AsIs: t.Acc#1/5 } Tile{ AsIs: t.Next#1/15 } >/21 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[17]);
    refalrts::alloc_close_bracket(vm, context[18]);
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_AddLineNumber]);
    refalrts::alloc_close_call(vm, context[21]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[19] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[21], context[21] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[18], context[20] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoMapAccum@1/4 t.Acc#1/5 (/9 e.Scanned#1/11 )/10 >/1
    context[11] = context[7];
    context[12] = context[8];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Scanned#1 as range 11
    //DEBUG: t.Acc#1: 5
    //DEBUG: e.Scanned#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoMapAccum@1/4 {REMOVED TILE} (/9 {REMOVED TILE} )/10 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/5 } Tile{ AsIs: e.Scanned#1/11 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum@1/4 t.acc#0/5 (/9 e.scanned#0/7 )/10 e.items#0/2 >/1
  // closed e.scanned#0 as range 7
  // closed e.items#0 as range 2
  //DEBUG: t.acc#0: 5
  //DEBUG: e.scanned#0: 7
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </11 Tile{ HalfReuse: & DoMapAccum@0/0 Reuse: & AddLineNumber/4 AsIs: t.acc#0/5 AsIs: (/9 AsIs: e.scanned#0/7 AsIs: )/10 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::reinit_name(context[0], functions[efunc_gen_DoMapAccum_Z0]);
  refalrts::update_name(context[4], functions[efunc_AddLineNumber]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_Z1("DoMapAccum@1", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_Z1);


static refalrts::FnResult func_gen_Fetch_Z3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & Fetch@3/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Fetch@3/4 e.Argument#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Argument#1 as range 5
    //DEBUG: e.Argument#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & CollectNativeLines/4 AsIs: e.Argument#1/5 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_CollectNativeLines]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Fetch@3/4 e.arg#0/2 >/1
  // closed e.arg#0 as range 2
  //DEBUG: e.arg#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch@0/4 AsIs: e.arg#0/2 HalfReuse: & CollectNativeLines/1 } >/5 Tile{ ]] }
  refalrts::alloc_close_call(vm, context[5]);
  refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z0]);
  refalrts::reinit_name(context[1], functions[efunc_CollectNativeLines]);
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Fetch_Z3("Fetch@3", COOKIE1_, COOKIE2_, func_gen_Fetch_Z3);


static refalrts::FnResult func_gen_DoMapAccum_S1A1Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & DoMapAccum$1=1@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum$1=1@1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 e.new#3/2 >/1
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
    // </0 & DoMapAccum$1=1@1/4 (/7 e.Scanned0#1/13 )/8 (/11 e.Tail0#1/15 )/12 t.Acc#2/19 e.StepScanned#2/17 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[2];
    context[18] = context[3];
    // closed e.Scanned0#1 as range 13
    // closed e.Tail0#1 as range 15
    context[20] = refalrts::tvar_left( context[19], context[17], context[18] );
    if( ! context[20] )
      continue;
    // closed e.StepScanned#2 as range 17
    //DEBUG: e.Scanned0#1: 13
    //DEBUG: e.Tail0#1: 15
    //DEBUG: t.Acc#2: 19
    //DEBUG: e.StepScanned#2: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@1/4 } Tile{ AsIs: t.Acc#2/19 } Tile{ AsIs: (/11 } Tile{ AsIs: e.Scanned0#1/13 } Tile{ AsIs: e.StepScanned#2/17 } Tile{ AsIs: )/12 } Tile{ AsIs: e.Tail0#1/15 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum$1=1@1/4 (/7 e.Scanned0#1/5 )/8 (/11 e.Tail0#1/9 )/12 e.dyn#0/2 >/1
  // closed e.Scanned0#1 as range 5
  // closed e.Tail0#1 as range 9
  // closed e.dyn#0 as range 2
  //DEBUG: e.Scanned0#1: 5
  //DEBUG: e.Tail0#1: 9
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </13 Tile{ HalfReuse: & DoMapAccum$1=1@0/0 Reuse: & AddLineNumber/4 AsIs: (/7 AsIs: e.Scanned0#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Tail0#1/9 AsIs: )/12 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::reinit_name(context[0], functions[efunc_gen_DoMapAccum_S1A1Z0]);
  refalrts::update_name(context[4], functions[efunc_AddLineNumber]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[13], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_S1A1Z1("DoMapAccum$1=1@1", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_S1A1Z1);


//End of file
