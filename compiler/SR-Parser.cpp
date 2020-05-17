// This file automatically generated from 'SR-Parser.sref'
// Don't edit! Edit 'SR-Parser.sref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_3498767524_3398851923
#define COOKIE1_ 3498767524U
#define COOKIE2_ 3398851923U

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
  efunc_gen_Map_Z1 = 15,
  efunc_ParseElements = 16,
  efunc_gen_ParseElements_S2A1 = 17,
  efunc_ParseElementm_SwDirective = 18,
  efunc_gen_ParseElements_S4A1 = 19,
  efunc_ParseFunction = 20,
  efunc_AddUnexpected = 21,
  efunc_ParseInclude = 22,
  efunc_ParseNameListm_Idents = 23,
  efunc_ParseSpec = 24,
  efunc_ASTItemFromDirective = 25,
  efunc_ParseNameList = 26,
  efunc_Expect = 27,
  efunc_gen_ParseSpec_S1A2 = 28,
  efunc_gen_ParseSpec_S1A1 = 29,
  efunc_ParsePattern = 30,
  efunc_ParseNameListm_Tail = 31,
  efunc_ParseNameListm_Identsm_Tail = 32,
  efunc_gen_ParseFunction_S1A1 = 33,
  efunc_ParseBlock = 34,
  efunc_DoParseBlock = 35,
  efunc_ELm_AddErrorAt = 36,
  efunc_ParseSentence = 37,
  efunc_gen_DoParseBlock_S3A1 = 38,
  efunc_gen_ParseSentence_B1S1A1 = 39,
  efunc_gen_ParseSentence_B1S1A1L1D2 = 40,
  efunc_gen_ParseSentence_B1S2A1 = 41,
  efunc_gen_ParseSentence_B1S4A1D1 = 42,
  efunc_gen_ParseSentence_A1 = 43,
  efunc_ParseSentencePart = 44,
  efunc_ParseResult = 45,
  efunc_gen_ParseSentencePart_A3 = 46,
  efunc_gen_ParseSentencePart_A3Z1 = 47,
  efunc_gen_ParseSentencePart_A3Z2 = 48,
  efunc_gen_ParseSentencePart_A2 = 49,
  efunc_gen_ParseSentencePart_A2L1D3 = 50,
  efunc_gen_ParseSentencePart_A1 = 51,
  efunc_DoParsePattern = 52,
  efunc_StrFromBracket = 53,
  efunc_ParseBlocks = 54,
  efunc_gen_ParseResult_A2 = 55,
  efunc_DoParseResult = 56,
  efunc_gen_ParseResult_A1 = 57,
  efunc_gen_ParseBlocks_S1A2 = 58,
  efunc_gen_ParseBlocks_S1A1 = 59,
  efunc_gen_DoParseResult_S10L1D2 = 60,
  efunc_gen_DoParseResult_S10L2D2 = 61,
  efunc_gen_Fetch_Z1 = 62,
  efunc_SRm_StrFromToken = 63,
  efunc_Mu = 64,
  efunc_Up = 65,
  efunc_Evm_met = 66,
  efunc_Residue = 67,
  efunc_u_u_Metau_Residue = 68,
  efunc_MapAccum = 69,
  efunc_UnBracket = 70,
  efunc_DelAccumulator = 71,
  efunc_Inc = 72,
  efunc_Dec = 73,
  efunc_SRm_ParseProgram = 74,
  efunc_PrepareBracket = 75,
  efunc_gen_Map_Z0 = 76,
  efunc_gen_ParseSentencePart_A3Z0 = 77,
  efunc_gen_DoParseResult_S12L1D1 = 78,
  efunc_gen_Fetch_Z0 = 79,
  efunc_gen_DoParseResult_S12L1 = 80,
};


enum ident {
  ident_TkOpenBracket = 0,
  ident_Open = 1,
  ident_TkCloseBracket = 2,
  ident_Close = 3,
  ident_TkOpenADT = 4,
  ident_TkCloseADT = 5,
  ident_TkOpenCall = 6,
  ident_TkCloseCall = 7,
  ident_TkEOF = 8,
  ident_TkDirective = 9,
  ident_TkNativeBlock = 10,
  ident_NativeBlock = 11,
  ident_TkName = 12,
  ident_GNm_Local = 13,
  ident_TkSemicolon = 14,
  ident_EEnum = 15,
  ident_Enum = 16,
  ident_GNm_Entry = 17,
  ident_ESwap = 18,
  ident_Swap = 19,
  ident_Extern = 20,
  ident_Declaration = 21,
  ident_Forward = 22,
  ident_Entry = 23,
  ident_Meta = 24,
  ident_TkOpenBlock = 25,
  ident_Include = 26,
  ident_Ident = 27,
  ident_Spec = 28,
  ident_TkCompound = 29,
  ident_TkComma = 30,
  ident_Function = 31,
  ident_TkCloseBlock = 32,
  ident_NativeBody = 33,
  ident_Sentences = 34,
  ident_Assign = 35,
  ident_Condition = 36,
  ident_TkColon = 37,
  ident_TkReplace = 38,
  ident_TkChar = 39,
  ident_Symbol = 40,
  ident_Char = 41,
  ident_TkNumber = 42,
  ident_Number = 43,
  ident_Name = 44,
  ident_TkIdentMarker = 45,
  ident_Identifier = 46,
  ident_TkVariable = 47,
  ident_TkRedefinition = 48,
  ident_TkNewVariable = 49,
  ident_Brackets = 50,
  ident_ADTm_Brackets = 51,
  ident_UnnamedADT = 52,
  ident_CallBrackets = 53,
  ident_Closure = 54,
  ident_TkError = 55,
  ident_TkUnexpected = 56,
  ident_Mu = 57,
  ident_Up = 58,
  ident_Evm_met = 59,
  ident_Residue = 60,
  ident_u_u_Metau_Residue = 61,
  ident_Apply = 62,
  ident_Map = 63,
  ident_Reduce = 64,
  ident_Fetch = 65,
  ident_MapAccum = 66,
  ident_DoMapAccum = 67,
  ident_UnBracket = 68,
  ident_DelAccumulator = 69,
  ident_Inc = 70,
  ident_Dec = 71,
  ident_Pipe = 72,
  ident_SRm_ParseProgram = 73,
  ident_PrepareBracket = 74,
  ident_ParseElements = 75,
  ident_ASTItemFromDirective = 76,
  ident_ParseElementm_SwDirective = 77,
  ident_ParseSpec = 78,
  ident_ParseInclude = 79,
  ident_ParseNameList = 80,
  ident_ParseNameListm_Tail = 81,
  ident_ParseNameListm_Idents = 82,
  ident_ParseNameListm_Identsm_Tail = 83,
  ident_ParseFunction = 84,
  ident_ParseBlock = 85,
  ident_Expect = 86,
  ident_DoParseBlock = 87,
  ident_ParseSentence = 88,
  ident_ParseSentencePart = 89,
  ident_ParsePattern = 90,
  ident_DoParsePattern = 91,
  ident_StrFromBracket = 92,
  ident_ParseResult = 93,
  ident_ParseBlocks = 94,
  ident_DoParseResult = 95,
  ident_AddUnexpected = 96,
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


static refalrts::FnResult func_SRm_ParseProgram(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseElements/4 AsIs: t.ErrorList#1/5 } (/7 )/8 </9 & Map@1/10 Tile{ AsIs: e.Tokens#1/2 } >/11 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_close_bracket(vm, context[8]);
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_Map_Z1]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_ParseElements]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SRm_ParseProgram("SR-ParseProgram", 0U, 0U, func_SRm_ParseProgram);


static refalrts::FnResult func_PrepareBracket(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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
      if( ! refalrts::ident_term( identifiers[ident_TkOpenBracket], context[9] ) )
        continue;
      //DEBUG: s.LnNum#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & PrepareBracket/4 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # Open/9 AsIs: s.LnNum#1/10 HalfReuse: # TkOpenBracket/6 HalfReuse: )/1 ]] }
      refalrts::update_ident(context[9], identifiers[ident_Open]);
      refalrts::reinit_ident(context[6], identifiers[ident_TkOpenBracket]);
      refalrts::reinit_close_bracket(context[1]);
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
      if( ! refalrts::ident_term( identifiers[ident_TkCloseBracket], context[9] ) )
        continue;
      //DEBUG: s.LnNum#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & PrepareBracket/4 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # Close/9 AsIs: s.LnNum#1/10 HalfReuse: # TkCloseBracket/6 HalfReuse: )/1 ]] }
      refalrts::update_ident(context[9], identifiers[ident_Close]);
      refalrts::reinit_ident(context[6], identifiers[ident_TkCloseBracket]);
      refalrts::reinit_close_bracket(context[1]);
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
      if( ! refalrts::ident_term( identifiers[ident_TkOpenADT], context[9] ) )
        continue;
      //DEBUG: s.LnNum#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & PrepareBracket/4 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # Open/9 AsIs: s.LnNum#1/10 HalfReuse: # TkOpenADT/6 HalfReuse: )/1 ]] }
      refalrts::update_ident(context[9], identifiers[ident_Open]);
      refalrts::reinit_ident(context[6], identifiers[ident_TkOpenADT]);
      refalrts::reinit_close_bracket(context[1]);
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
      if( ! refalrts::ident_term( identifiers[ident_TkCloseADT], context[9] ) )
        continue;
      //DEBUG: s.LnNum#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & PrepareBracket/4 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # Close/9 AsIs: s.LnNum#1/10 HalfReuse: # TkCloseADT/6 HalfReuse: )/1 ]] }
      refalrts::update_ident(context[9], identifiers[ident_Close]);
      refalrts::reinit_ident(context[6], identifiers[ident_TkCloseADT]);
      refalrts::reinit_close_bracket(context[1]);
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
      if( ! refalrts::ident_term( identifiers[ident_TkOpenCall], context[9] ) )
        continue;
      //DEBUG: s.LnNum#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & PrepareBracket/4 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # Open/9 AsIs: s.LnNum#1/10 HalfReuse: # TkOpenCall/6 HalfReuse: )/1 ]] }
      refalrts::update_ident(context[9], identifiers[ident_Open]);
      refalrts::reinit_ident(context[6], identifiers[ident_TkOpenCall]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[5], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[5];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & PrepareBracket/4 (/5 # TkCloseCall/9 s.LnNum#1/10 )/6 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkCloseCall], context[9] ) )
      continue;
    //DEBUG: s.LnNum#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & PrepareBracket/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # Close/9 AsIs: s.LnNum#1/10 HalfReuse: # TkCloseCall/6 HalfReuse: )/1 ]] }
    refalrts::update_ident(context[9], identifiers[ident_Close]);
    refalrts::reinit_ident(context[6], identifiers[ident_TkCloseCall]);
    refalrts::reinit_close_bracket(context[1]);
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

static refalrts::NativeReference nat_ref_PrepareBracket("PrepareBracket", COOKIE1_, COOKIE2_, func_PrepareBracket);


static refalrts::FnResult func_gen_ParseElements_S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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
  refalrts::update_name(context[4], functions[efunc_ParseElements]);
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

static refalrts::NativeReference nat_ref_gen_ParseElements_S2A1("ParseElements$2=1", COOKIE1_, COOKIE2_, func_gen_ParseElements_S2A1);


static refalrts::FnResult func_gen_ParseElements_S4A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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
  refalrts::update_name(context[4], functions[efunc_ParseElements]);
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

static refalrts::NativeReference nat_ref_gen_ParseElements_S4A1("ParseElements$4=1", COOKIE1_, COOKIE2_, func_gen_ParseElements_S4A1);


static refalrts::FnResult func_ParseElements(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
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
    // </0 & ParseElements/4 t.new#5/5 (/9 e.new#10/13 )/10 (/11 s.new#6/19 t.new#7/20 e.new#8/17 )/12 e.new#9/15 >/1
    context[13] = context[7];
    context[14] = context[8];
    context[15] = context[2];
    context[16] = context[3];
    context[17] = 0;
    context[18] = 0;
    if( ! refalrts::brackets_term( context[17], context[18], context[11] ) )
      continue;
    // closed e.new#10 as range 13
    // closed e.new#9 as range 15
    if( ! refalrts::svar_left( context[19], context[17], context[18] ) )
      continue;
    context[21] = refalrts::tvar_left( context[20], context[17], context[18] );
    if( ! context[21] )
      continue;
    // closed e.new#8 as range 17
    do {
      // </0 & ParseElements/4 t.new#11/5 (/9 e.new#16/22 )/10 (/11 s.new#12/19 s.new#13/20 e.new#14/24 )/12 e.new#15/26 >/1
      context[22] = context[13];
      context[23] = context[14];
      context[24] = context[17];
      context[25] = context[18];
      context[26] = context[15];
      context[27] = context[16];
      if( ! refalrts::svar_term( context[20], context[20] ) )
        continue;
      // closed e.new#16 as range 22
      // closed e.new#14 as range 24
      // closed e.new#15 as range 26
      do {
        // </0 & ParseElements/4 t.ErrorList#1/5 (/9 e.AST#1/28 )/10 (/11 # TkEOF/19 s.LnNum#1/20 )/12 >/1
        context[28] = context[22];
        context[29] = context[23];
        if( ! refalrts::ident_term( identifiers[ident_TkEOF], context[19] ) )
          continue;
        if( ! refalrts::empty_seq( context[24], context[25] ) )
          continue;
        if( ! refalrts::empty_seq( context[26], context[27] ) )
          continue;
        // closed e.AST#1 as range 28
        //DEBUG: t.ErrorList#1: 5
        //DEBUG: s.LnNum#1: 20
        //DEBUG: e.AST#1: 28

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & ParseElements/4 {REMOVED TILE} (/9 {REMOVED TILE} )/10 (/11 # TkEOF/19 s.LnNum#1/20 )/12 >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: e.AST#1/28 } Tile{ ]] }
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[28], context[29] );
        res = refalrts::splice_evar( res, context[5], context[6] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ParseElements/4 t.ErrorList#1/5 (/9 e.AST#1/28 )/10 (/11 # TkDirective/19 s.LnNum#1/20 s.Directive#1/34 )/12 e.Tail#1/32 >/1
      context[28] = context[22];
      context[29] = context[23];
      context[30] = context[24];
      context[31] = context[25];
      context[32] = context[26];
      context[33] = context[27];
      if( ! refalrts::ident_term( identifiers[ident_TkDirective], context[19] ) )
        continue;
      // closed e.AST#1 as range 28
      // closed e.Tail#1 as range 32
      if( ! refalrts::svar_left( context[34], context[30], context[31] ) )
        continue;
      if( ! refalrts::empty_seq( context[30], context[31] ) )
        continue;
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: s.LnNum#1: 20
      //DEBUG: e.AST#1: 28
      //DEBUG: e.Tail#1: 32
      //DEBUG: s.Directive#1: 34

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.LnNum#1/20 s.Directive#1/34 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseElements$2=1/4 } Tile{ AsIs: (/9 AsIs: e.AST#1/28 AsIs: )/10 HalfReuse: </11 HalfReuse: & ParseElement-SwDirective/19 } Tile{ AsIs: t.ErrorList#1/5 } Tile{ HalfReuse: s.Directive1 #34/12 AsIs: e.Tail#1/32 AsIs: >/1 } >/35 Tile{ ]] }
      refalrts::alloc_close_call(vm, context[35]);
      refalrts::update_name(context[4], functions[efunc_gen_ParseElements_S2A1]);
      refalrts::reinit_open_call(context[11]);
      refalrts::reinit_name(context[19], functions[efunc_ParseElementm_SwDirective]);
      refalrts::reinit_svar( context[12], context[34] );
      refalrts::push_stack( vm, context[35] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[11] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[35], context[35] );
      res = refalrts::splice_evar( res, context[12], context[1] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[9], context[19] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseElements/4 t.ErrorList#1/5 (/9 e.AST#1/22 )/10 (/11 # TkNativeBlock/19 t.SrcPos#1/20 e.Block#1/24 )/12 e.Tail#1/26 >/1
      context[22] = context[13];
      context[23] = context[14];
      context[24] = context[17];
      context[25] = context[18];
      context[26] = context[15];
      context[27] = context[16];
      if( ! refalrts::ident_term( identifiers[ident_TkNativeBlock], context[19] ) )
        continue;
      // closed e.AST#1 as range 22
      // closed e.Block#1 as range 24
      // closed e.Tail#1 as range 26
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: t.SrcPos#1: 20
      //DEBUG: e.AST#1: 22
      //DEBUG: e.Block#1: 24
      //DEBUG: e.Tail#1: 26

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParseElements/4 AsIs: t.ErrorList#1/5 AsIs: (/9 AsIs: e.AST#1/22 HalfReuse: (/10 HalfReuse: # NativeBlock/11 } Tile{ AsIs: t.SrcPos#1/20 } Tile{ AsIs: e.Block#1/24 } Tile{ HalfReuse: )/19 } Tile{ AsIs: )/12 AsIs: e.Tail#1/26 AsIs: >/1 ]] }
      refalrts::reinit_open_bracket(context[10]);
      refalrts::reinit_ident(context[11], identifiers[ident_NativeBlock]);
      refalrts::reinit_close_bracket(context[19]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[12] );
      refalrts::link_brackets( context[10], context[19] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[19], context[19] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ParseElements/4 t.new#11/5 (/9 e.new#16/22 )/10 (/11 s.new#12/19 s.new#13/20 e.new#14/24 )/12 e.new#15/26 >/1
    context[22] = context[13];
    context[23] = context[14];
    context[24] = context[17];
    context[25] = context[18];
    context[26] = context[15];
    context[27] = context[16];
    if( ! refalrts::svar_term( context[20], context[20] ) )
      continue;
    // closed e.new#16 as range 22
    // closed e.new#14 as range 24
    // closed e.new#15 as range 26
    do {
      // </0 & ParseElements/4 t.ErrorList#1/5 (/9 e.AST#1/28 )/10 (/11 # TkName/19 s.LnNum#1/20 e.Name#1/30 )/12 e.Tail#1/32 >/1
      context[28] = context[22];
      context[29] = context[23];
      context[30] = context[24];
      context[31] = context[25];
      context[32] = context[26];
      context[33] = context[27];
      if( ! refalrts::ident_term( identifiers[ident_TkName], context[19] ) )
        continue;
      // closed e.AST#1 as range 28
      // closed e.Name#1 as range 30
      // closed e.Tail#1 as range 32
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: s.LnNum#1: 20
      //DEBUG: e.AST#1: 28
      //DEBUG: e.Name#1: 30
      //DEBUG: e.Tail#1: 32

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.LnNum#1/20 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseElements$4=1/4 } Tile{ AsIs: (/9 AsIs: e.AST#1/28 AsIs: )/10 HalfReuse: </11 HalfReuse: & ParseFunction/19 } # GN-Local/34 (/35 Tile{ AsIs: e.Name#1/30 } Tile{ AsIs: )/12 } Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: e.Tail#1/32 } >/36 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[34], identifiers[ident_GNm_Local]);
      refalrts::alloc_open_bracket(vm, context[35]);
      refalrts::alloc_close_call(vm, context[36]);
      refalrts::update_name(context[4], functions[efunc_gen_ParseElements_S4A1]);
      refalrts::reinit_open_call(context[11]);
      refalrts::reinit_name(context[19], functions[efunc_ParseFunction]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[36] );
      refalrts::push_stack( vm, context[11] );
      refalrts::link_brackets( context[35], context[12] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[36], context[36] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      res = refalrts::splice_evar( res, context[9], context[19] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ParseElements/4 t.ErrorList#1/5 (/9 e.AST#1/28 )/10 (/11 # TkSemicolon/19 s.LnNum#1/20 )/12 e.Tail#1/30 >/1
    context[28] = context[22];
    context[29] = context[23];
    context[30] = context[26];
    context[31] = context[27];
    if( ! refalrts::ident_term( identifiers[ident_TkSemicolon], context[19] ) )
      continue;
    if( ! refalrts::empty_seq( context[24], context[25] ) )
      continue;
    // closed e.AST#1 as range 28
    // closed e.Tail#1 as range 30
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: s.LnNum#1: 20
    //DEBUG: e.AST#1: 28
    //DEBUG: e.Tail#1: 30

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/11 # TkSemicolon/19 s.LnNum#1/20 )/12 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParseElements/4 AsIs: t.ErrorList#1/5 AsIs: (/9 AsIs: e.AST#1/28 AsIs: )/10 } Tile{ AsIs: e.Tail#1/30 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[30], context[31] );
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
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_AddUnexpected]);
  refalrts::alloc_chars(vm, context[15], context[16], "directive or name", 17);
  refalrts::alloc_close_call(vm, context[17]);
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

static refalrts::NativeReference nat_ref_ParseElements("ParseElements", COOKIE1_, COOKIE2_, func_ParseElements);


static refalrts::FnResult func_ASTItemFromDirective(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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
    if( ! refalrts::ident_term( identifiers[ident_EEnum], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & ASTItemFromDirective/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ Reuse: # Enum/5 HalfReuse: # GN-Entry/1 ]] }
    refalrts::update_ident(context[5], identifiers[ident_Enum]);
    refalrts::reinit_ident(context[1], identifiers[ident_GNm_Entry]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ASTItemFromDirective/4 # Enum/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_Enum], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & ASTItemFromDirective/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: # Enum/5 HalfReuse: # GN-Local/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_GNm_Local]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ASTItemFromDirective/4 # ESwap/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_ESwap], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & ASTItemFromDirective/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ Reuse: # Swap/5 HalfReuse: # GN-Entry/1 ]] }
    refalrts::update_ident(context[5], identifiers[ident_Swap]);
    refalrts::reinit_ident(context[1], identifiers[ident_GNm_Entry]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ASTItemFromDirective/4 # Swap/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_Swap], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & ASTItemFromDirective/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: # Swap/5 HalfReuse: # GN-Local/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_GNm_Local]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ASTItemFromDirective/4 # Extern/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_Extern], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & ASTItemFromDirective/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ Reuse: # Declaration/5 HalfReuse: # GN-Entry/1 ]] }
    refalrts::update_ident(context[5], identifiers[ident_Declaration]);
    refalrts::reinit_ident(context[1], identifiers[ident_GNm_Entry]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ASTItemFromDirective/4 # Forward/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_Forward], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & ASTItemFromDirective/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ Reuse: # Declaration/5 HalfReuse: # GN-Local/1 ]] }
    refalrts::update_ident(context[5], identifiers[ident_Declaration]);
    refalrts::reinit_ident(context[1], identifiers[ident_GNm_Local]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ASTItemFromDirective/4 # Entry/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_Entry], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & ASTItemFromDirective/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: # Entry/5 HalfReuse: # GN-Entry/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_GNm_Entry]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ASTItemFromDirective/4 # Meta/5 >/1
  if( ! refalrts::ident_term( identifiers[ident_Meta], context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ASTItemFromDirective/4 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: # Meta/5 HalfReuse: # GN-Local/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_GNm_Local]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[5];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ASTItemFromDirective("ASTItemFromDirective", COOKIE1_, COOKIE2_, func_ASTItemFromDirective);


static refalrts::FnResult func_ParseElementm_SwDirective(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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
    if( ! refalrts::ident_term( identifiers[ident_Entry], context[7] ) )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[8], context[9] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = refalrts::ident_left( identifiers[ident_TkName], context[10], context[11] );
    if( ! context[14] )
      continue;
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[8], context[9] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    context[19] = refalrts::ident_left( identifiers[ident_TkOpenBlock], context[15], context[16] );
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
    refalrts::update_name(context[4], functions[efunc_ParseFunction]);
    refalrts::update_ident(context[7], identifiers[ident_GNm_Entry]);
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
    // </0 & ParseElement-SwDirective/4 t.ErrorList#1/5 # Include/7 e.Tail#1/8 >/1
    context[8] = context[2];
    context[9] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Include], context[7] ) )
      continue;
    // closed e.Tail#1 as range 8
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: e.Tail#1: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} # Include/7 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseInclude/4 AsIs: t.ErrorList#1/5 } Tile{ AsIs: e.Tail#1/8 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_ParseInclude]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::splice_to_freelist_open( vm, context[6], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ParseElement-SwDirective/4 t.ErrorList#1/5 # Ident/7 e.Tail#1/8 >/1
    context[8] = context[2];
    context[9] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Ident], context[7] ) )
      continue;
    // closed e.Tail#1 as range 8
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: e.Tail#1: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseNameList-Idents/4 } Tile{ HalfReuse: (/7 } )/10 Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: e.Tail#1/8 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_bracket(vm, context[10]);
    refalrts::update_name(context[4], functions[efunc_ParseNameListm_Idents]);
    refalrts::reinit_open_bracket(context[7]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ParseElement-SwDirective/4 t.ErrorList#1/5 # Spec/7 e.Tail#1/8 >/1
    context[8] = context[2];
    context[9] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Spec], context[7] ) )
      continue;
    // closed e.Tail#1 as range 8
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: e.Tail#1: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} # Spec/7 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseSpec/4 AsIs: t.ErrorList#1/5 } Tile{ AsIs: e.Tail#1/8 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_ParseSpec]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[8], context[9] );
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
  refalrts::alloc_open_bracket(vm, context[8]);
  refalrts::alloc_close_bracket(vm, context[9]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_ASTItemFromDirective]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::update_name(context[4], functions[efunc_ParseNameList]);
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

static refalrts::NativeReference nat_ref_ParseElementm_SwDirective("ParseElement-SwDirective", COOKIE1_, COOKIE2_, func_ParseElementm_SwDirective);


static refalrts::FnResult func_gen_ParseSpec_S1A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_ident(context[14], identifiers[ident_Spec]);
  refalrts::reinit_close_bracket(context[1]);
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

static refalrts::NativeReference nat_ref_gen_ParseSpec_S1A2("ParseSpec$1=2", COOKIE1_, COOKIE2_, func_gen_ParseSpec_S1A2);


static refalrts::FnResult func_gen_ParseSpec_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseSpec$1=2/4 } Tile{ AsIs: t.ErrorList#2/10 } Tile{ AsIs: s.LnNum#1/5 AsIs: (/8 AsIs: e.Name#1/6 AsIs: )/9 } Tile{ AsIs: (/14 AsIs: e.Pattern#2/12 AsIs: )/15 } </16 & Expect/17 # TkSemicolon/18 (/19 ';'/20 )/21 t.ErrorList#2/10/22 Tile{ AsIs: e.Tail#2/2 } >/24 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[16]);
  refalrts::alloc_name(vm, context[17], functions[efunc_Expect]);
  refalrts::alloc_ident(vm, context[18], identifiers[ident_TkSemicolon]);
  refalrts::alloc_open_bracket(vm, context[19]);
  refalrts::alloc_char(vm, context[20], ';');
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::copy_evar(vm, context[22], context[23], context[10], context[11]);
  refalrts::alloc_close_call(vm, context[24]);
  refalrts::update_name(context[4], functions[efunc_gen_ParseSpec_S1A2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[24] );
  refalrts::push_stack( vm, context[16] );
  refalrts::link_brackets( context[19], context[21] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[24], context[24] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[16], context[23] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[5], context[9] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseSpec_S1A1("ParseSpec$1=1", COOKIE1_, COOKIE2_, func_gen_ParseSpec_S1A1);


static refalrts::FnResult func_ParseSpec(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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
    // </0 & ParseSpec/4 t.ErrorList#1/5 (/7 # TkName/13 s.LnNum#1/14 e.Name#1/11 )/8 e.Tail#1/9 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
      continue;
    context[13] = refalrts::ident_left( identifiers[ident_TkName], context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Tail#1 as range 9
    if( ! refalrts::svar_left( context[14], context[11], context[12] ) )
      continue;
    // closed e.Name#1 as range 11
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: e.Tail#1: 9
    //DEBUG: s.LnNum#1: 14
    //DEBUG: e.Name#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseSpec$1=1/4 } Tile{ AsIs: s.LnNum#1/14 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Name#1/11 } Tile{ AsIs: )/8 } </15 Tile{ HalfReuse: & ParsePattern/13 } Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: e.Tail#1/9 } >/16 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_close_call(vm, context[16]);
    refalrts::update_name(context[4], functions[efunc_gen_ParseSpec_S1A1]);
    refalrts::reinit_name(context[13], functions[efunc_ParsePattern]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[15] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    refalrts::use( res );
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
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_close_bracket(vm, context[10]);
  refalrts::alloc_chars(vm, context[11], context[12], "function name", 13);
  refalrts::copy_evar(vm, context[13], context[14], context[7], context[8]);
  refalrts::update_name(context[4], functions[efunc_AddUnexpected]);
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

static refalrts::NativeReference nat_ref_ParseSpec("ParseSpec", COOKIE1_, COOKIE2_, func_ParseSpec);


static refalrts::FnResult func_ParseInclude(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
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
    context[13] = refalrts::ident_left( identifiers[ident_TkCompound], context[11], context[12] );
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
      // </0 & ParseInclude/4 t.ErrorList#1/5 (/7 # TkCompound/13 s.LnNum1#1/14 e.Compound#1/17 )/8 (/15 # TkSemicolon/23 s.LnNum2#1/24 )/16 e.Tail#1/19 >/1
      context[17] = context[11];
      context[18] = context[12];
      context[19] = context[9];
      context[20] = context[10];
      context[21] = 0;
      context[22] = 0;
      if( ! refalrts::brackets_term( context[21], context[22], context[15] ) )
        continue;
      context[23] = refalrts::ident_left( identifiers[ident_TkSemicolon], context[21], context[22] );
      if( ! context[23] )
        continue;
      // closed e.Compound#1 as range 17
      // closed e.Tail#1 as range 19
      if( ! refalrts::svar_left( context[24], context[21], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: s.LnNum1#1: 14
      //DEBUG: e.Compound#1: 17
      //DEBUG: e.Tail#1: 19
      //DEBUG: s.LnNum2#1: 24

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} & ParseInclude/4 {REMOVED TILE} {REMOVED TILE} # TkSemicolon/23 s.LnNum2#1/24 )/16 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: (/7 Reuse: # Include/13 AsIs: s.LnNum1#1/14 AsIs: e.Compound#1/17 AsIs: )/8 HalfReuse: )/15 } Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: e.Tail#1/19 } Tile{ ]] }
      refalrts::reinit_open_bracket(context[0]);
      refalrts::update_ident(context[13], identifiers[ident_Include]);
      refalrts::reinit_close_bracket(context[15]);
      refalrts::link_brackets( context[0], context[15] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[7], context[15] );
      refalrts::splice_to_freelist_open( vm, context[0], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ParseInclude/4 t.ErrorList#1/5 (/7 # TkCompound/13 s.LnNum#1/14 e.Compound#1/17 )/8 t.Unexpected#1/15 e.Tail#1/19 >/1
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[9];
    context[20] = context[10];
    // closed e.Compound#1 as range 17
    // closed e.Tail#1 as range 19
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: t.Unexpected#1: 15
    //DEBUG: s.LnNum#1: 14
    //DEBUG: e.Compound#1: 17
    //DEBUG: e.Tail#1: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/21 Tile{ AsIs: (/7 Reuse: # Include/13 AsIs: s.LnNum#1/14 AsIs: e.Compound#1/17 AsIs: )/8 } )/22 Tile{ AsIs: </0 Reuse: & AddUnexpected/4 AsIs: t.ErrorList#1/5 } Tile{ AsIs: t.Unexpected#1/15 }"semicolon"/23 Tile{ AsIs: >/1 } t.Unexpected#1/15/25 Tile{ AsIs: e.Tail#1/19 } Tile{ ]] }
    refalrts::alloc_open_bracket(vm, context[21]);
    refalrts::alloc_close_bracket(vm, context[22]);
    refalrts::alloc_chars(vm, context[23], context[24], "semicolon", 9);
    refalrts::copy_evar(vm, context[25], context[26], context[15], context[16]);
    refalrts::update_ident(context[13], identifiers[ident_Include]);
    refalrts::update_name(context[4], functions[efunc_AddUnexpected]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[0], context[6] );
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[21], context[21] );
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
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_close_bracket(vm, context[10]);
  refalrts::alloc_chars(vm, context[11], context[12], "compound symbol", 15);
  refalrts::copy_evar(vm, context[13], context[14], context[7], context[8]);
  refalrts::update_name(context[4], functions[efunc_AddUnexpected]);
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

static refalrts::NativeReference nat_ref_ParseInclude("ParseInclude", COOKIE1_, COOKIE2_, func_ParseInclude);


static refalrts::FnResult func_ParseNameList(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
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
    // </0 & ParseNameList/4 (/7 e.AST#1/15 )/8 t.ErrorList#1/9 s.ASTItem#1/11 s.ScopeClass#1/12 (/13 # TkName/21 s.LnNum#1/22 e.Name#1/19 )/14 e.Tail#1/17 >/1
    context[15] = context[5];
    context[16] = context[6];
    context[17] = context[2];
    context[18] = context[3];
    context[19] = 0;
    context[20] = 0;
    if( ! refalrts::brackets_term( context[19], context[20], context[13] ) )
      continue;
    context[21] = refalrts::ident_left( identifiers[ident_TkName], context[19], context[20] );
    if( ! context[21] )
      continue;
    // closed e.AST#1 as range 15
    // closed e.Tail#1 as range 17
    if( ! refalrts::svar_left( context[22], context[19], context[20] ) )
      continue;
    // closed e.Name#1 as range 19
    //DEBUG: t.ErrorList#1: 9
    //DEBUG: s.ASTItem#1: 11
    //DEBUG: s.ScopeClass#1: 12
    //DEBUG: e.AST#1: 15
    //DEBUG: e.Tail#1: 17
    //DEBUG: s.LnNum#1: 22
    //DEBUG: e.Name#1: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseNameList-Tail/4 AsIs: (/7 AsIs: e.AST#1/15 HalfReuse: (/8 } Tile{ HalfReuse: s.ASTItem1 #11/21 AsIs: s.LnNum#1/22 } Tile{ AsIs: s.ScopeClass#1/12 } Tile{ AsIs: e.Name#1/19 } )/23 Tile{ HalfReuse: )/13 } Tile{ AsIs: t.ErrorList#1/9 AsIs: s.ASTItem#1/11 } Tile{ HalfReuse: s.ScopeClass1 #12/14 AsIs: e.Tail#1/17 AsIs: >/1 ]] }
    refalrts::alloc_close_bracket(vm, context[23]);
    refalrts::update_name(context[4], functions[efunc_ParseNameListm_Tail]);
    refalrts::reinit_open_bracket(context[8]);
    refalrts::reinit_svar( context[21], context[11] );
    refalrts::reinit_close_bracket(context[13]);
    refalrts::reinit_svar( context[14], context[12] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[13] );
    refalrts::link_brackets( context[8], context[23] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[14];
    res = refalrts::splice_evar( res, context[9], context[11] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[21], context[22] );
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
  refalrts::alloc_chars(vm, context[15], context[16], "function name", 13);
  refalrts::copy_evar(vm, context[17], context[18], context[13], context[14]);
  refalrts::update_name(context[4], functions[efunc_AddUnexpected]);
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

static refalrts::NativeReference nat_ref_ParseNameList("ParseNameList", COOKIE1_, COOKIE2_, func_ParseNameList);


static refalrts::FnResult func_ParseNameListm_Tail(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
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
    // </0 & ParseNameList-Tail/4 (/7 e.new#13/15 )/8 t.new#7/9 s.new#8/11 s.new#9/12 (/13 s.new#10/21 s.new#11/22 )/14 e.new#12/17 >/1
    context[15] = context[5];
    context[16] = context[6];
    context[17] = context[2];
    context[18] = context[3];
    context[19] = 0;
    context[20] = 0;
    if( ! refalrts::brackets_term( context[19], context[20], context[13] ) )
      continue;
    // closed e.new#13 as range 15
    // closed e.new#12 as range 17
    if( ! refalrts::svar_left( context[21], context[19], context[20] ) )
      continue;
    if( ! refalrts::svar_left( context[22], context[19], context[20] ) )
      continue;
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;
    do {
      // </0 & ParseNameList-Tail/4 (/7 e.AST#1/23 )/8 t.ErrorList#1/9 s.ASTItem#1/11 s.ScopeClass#1/12 (/13 # TkComma/21 s.LnNum#1/22 )/14 e.Tail#1/25 >/1
      context[23] = context[15];
      context[24] = context[16];
      context[25] = context[17];
      context[26] = context[18];
      if( ! refalrts::ident_term( identifiers[ident_TkComma], context[21] ) )
        continue;
      // closed e.AST#1 as range 23
      // closed e.Tail#1 as range 25
      //DEBUG: t.ErrorList#1: 9
      //DEBUG: s.ASTItem#1: 11
      //DEBUG: s.ScopeClass#1: 12
      //DEBUG: s.LnNum#1: 22
      //DEBUG: e.AST#1: 23
      //DEBUG: e.Tail#1: 25

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/13 # TkComma/21 s.LnNum#1/22 )/14 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseNameList/4 AsIs: (/7 AsIs: e.AST#1/23 AsIs: )/8 AsIs: t.ErrorList#1/9 AsIs: s.ASTItem#1/11 AsIs: s.ScopeClass#1/12 } Tile{ AsIs: e.Tail#1/25 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_ParseNameList]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[25], context[26] );
      refalrts::splice_to_freelist_open( vm, context[12], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ParseNameList-Tail/4 (/7 e.AST#1/23 )/8 t.ErrorList#1/9 s.ASTItem#1/11 s.ScopeClass#1/12 (/13 # TkSemicolon/21 s.LnNum#1/22 )/14 e.Tail#1/25 >/1
    context[23] = context[15];
    context[24] = context[16];
    context[25] = context[17];
    context[26] = context[18];
    if( ! refalrts::ident_term( identifiers[ident_TkSemicolon], context[21] ) )
      continue;
    // closed e.AST#1 as range 23
    // closed e.Tail#1 as range 25
    //DEBUG: t.ErrorList#1: 9
    //DEBUG: s.ASTItem#1: 11
    //DEBUG: s.ScopeClass#1: 12
    //DEBUG: s.LnNum#1: 22
    //DEBUG: e.AST#1: 23
    //DEBUG: e.Tail#1: 25

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & ParseNameList-Tail/4 {REMOVED TILE} s.ASTItem#1/11 s.ScopeClass#1/12 (/13 # TkSemicolon/21 s.LnNum#1/22 )/14 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.AST#1/23 AsIs: )/8 AsIs: t.ErrorList#1/9 } Tile{ AsIs: e.Tail#1/25 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[25], context[26] );
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
  refalrts::alloc_chars(vm, context[15], context[16], "comma or semicolon", 18);
  refalrts::copy_evar(vm, context[17], context[18], context[13], context[14]);
  refalrts::update_name(context[4], functions[efunc_AddUnexpected]);
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

static refalrts::NativeReference nat_ref_ParseNameListm_Tail("ParseNameList-Tail", COOKIE1_, COOKIE2_, func_ParseNameListm_Tail);


static refalrts::FnResult func_ParseNameListm_Idents(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
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
    // </0 & ParseNameList-Idents/4 (/7 e.new#10/13 )/8 t.new#5/9 (/11 s.new#6/19 s.new#7/20 e.new#8/17 )/12 e.new#9/15 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[2];
    context[16] = context[3];
    context[17] = 0;
    context[18] = 0;
    if( ! refalrts::brackets_term( context[17], context[18], context[11] ) )
      continue;
    // closed e.new#10 as range 13
    // closed e.new#9 as range 15
    if( ! refalrts::svar_left( context[19], context[17], context[18] ) )
      continue;
    if( ! refalrts::svar_left( context[20], context[17], context[18] ) )
      continue;
    // closed e.new#8 as range 17
    do {
      // </0 & ParseNameList-Idents/4 (/7 e.AST#1/21 )/8 t.ErrorList#1/9 (/11 # TkName/19 s.LnNum#1/20 e.Name#1/23 )/12 e.Tail#1/25 >/1
      context[21] = context[13];
      context[22] = context[14];
      context[23] = context[17];
      context[24] = context[18];
      context[25] = context[15];
      context[26] = context[16];
      if( ! refalrts::ident_term( identifiers[ident_TkName], context[19] ) )
        continue;
      // closed e.AST#1 as range 21
      // closed e.Name#1 as range 23
      // closed e.Tail#1 as range 25
      //DEBUG: t.ErrorList#1: 9
      //DEBUG: s.LnNum#1: 20
      //DEBUG: e.AST#1: 21
      //DEBUG: e.Name#1: 23
      //DEBUG: e.Tail#1: 25

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseNameList-Idents-Tail/4 AsIs: (/7 AsIs: e.AST#1/21 HalfReuse: (/8 } Tile{ Reuse: # Ident/19 AsIs: s.LnNum#1/20 AsIs: e.Name#1/23 AsIs: )/12 } Tile{ HalfReuse: )/11 } Tile{ AsIs: t.ErrorList#1/9 } Tile{ AsIs: e.Tail#1/25 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_ParseNameListm_Identsm_Tail]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::update_ident(context[19], identifiers[ident_Ident]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      refalrts::link_brackets( context[8], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[11], context[11] );
      res = refalrts::splice_evar( res, context[19], context[12] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ParseNameList-Idents/4 (/7 e.AST#1/21 )/8 t.ErrorList#1/9 (/11 # TkCompound/19 s.LnNum#1/20 e.Name#1/23 )/12 e.Tail#1/25 >/1
    context[21] = context[13];
    context[22] = context[14];
    context[23] = context[17];
    context[24] = context[18];
    context[25] = context[15];
    context[26] = context[16];
    if( ! refalrts::ident_term( identifiers[ident_TkCompound], context[19] ) )
      continue;
    // closed e.AST#1 as range 21
    // closed e.Name#1 as range 23
    // closed e.Tail#1 as range 25
    //DEBUG: t.ErrorList#1: 9
    //DEBUG: s.LnNum#1: 20
    //DEBUG: e.AST#1: 21
    //DEBUG: e.Name#1: 23
    //DEBUG: e.Tail#1: 25

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseNameList-Idents-Tail/4 AsIs: (/7 AsIs: e.AST#1/21 HalfReuse: (/8 } Tile{ Reuse: # Ident/19 AsIs: s.LnNum#1/20 AsIs: e.Name#1/23 AsIs: )/12 } Tile{ HalfReuse: )/11 } Tile{ AsIs: t.ErrorList#1/9 } Tile{ AsIs: e.Tail#1/25 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_ParseNameListm_Identsm_Tail]);
    refalrts::reinit_open_bracket(context[8]);
    refalrts::update_ident(context[19], identifiers[ident_Ident]);
    refalrts::reinit_close_bracket(context[11]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[11] );
    refalrts::link_brackets( context[8], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[19], context[12] );
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
  refalrts::alloc_chars(vm, context[13], context[14], "identifier name or compound symbol", 34);
  refalrts::copy_evar(vm, context[15], context[16], context[11], context[12]);
  refalrts::update_name(context[4], functions[efunc_AddUnexpected]);
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

static refalrts::NativeReference nat_ref_ParseNameListm_Idents("ParseNameList-Idents", COOKIE1_, COOKIE2_, func_ParseNameListm_Idents);


static refalrts::FnResult func_ParseNameListm_Identsm_Tail(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
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
    // </0 & ParseNameList-Idents-Tail/4 (/7 e.new#9/13 )/8 t.new#5/9 (/11 s.new#6/19 s.new#7/20 )/12 e.new#8/15 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[2];
    context[16] = context[3];
    context[17] = 0;
    context[18] = 0;
    if( ! refalrts::brackets_term( context[17], context[18], context[11] ) )
      continue;
    // closed e.new#9 as range 13
    // closed e.new#8 as range 15
    if( ! refalrts::svar_left( context[19], context[17], context[18] ) )
      continue;
    if( ! refalrts::svar_left( context[20], context[17], context[18] ) )
      continue;
    if( ! refalrts::empty_seq( context[17], context[18] ) )
      continue;
    do {
      // </0 & ParseNameList-Idents-Tail/4 (/7 e.AST#1/21 )/8 t.ErrorList#1/9 (/11 # TkComma/19 s.LnNum#1/20 )/12 e.Tail#1/23 >/1
      context[21] = context[13];
      context[22] = context[14];
      context[23] = context[15];
      context[24] = context[16];
      if( ! refalrts::ident_term( identifiers[ident_TkComma], context[19] ) )
        continue;
      // closed e.AST#1 as range 21
      // closed e.Tail#1 as range 23
      //DEBUG: t.ErrorList#1: 9
      //DEBUG: s.LnNum#1: 20
      //DEBUG: e.AST#1: 21
      //DEBUG: e.Tail#1: 23

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/11 # TkComma/19 s.LnNum#1/20 )/12 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseNameList-Idents/4 AsIs: (/7 AsIs: e.AST#1/21 AsIs: )/8 AsIs: t.ErrorList#1/9 } Tile{ AsIs: e.Tail#1/23 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_ParseNameListm_Idents]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[23], context[24] );
      refalrts::splice_to_freelist_open( vm, context[10], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ParseNameList-Idents-Tail/4 (/7 e.AST#1/21 )/8 t.ErrorList#1/9 (/11 # TkSemicolon/19 s.LnNum#1/20 )/12 e.Tail#1/23 >/1
    context[21] = context[13];
    context[22] = context[14];
    context[23] = context[15];
    context[24] = context[16];
    if( ! refalrts::ident_term( identifiers[ident_TkSemicolon], context[19] ) )
      continue;
    // closed e.AST#1 as range 21
    // closed e.Tail#1 as range 23
    //DEBUG: t.ErrorList#1: 9
    //DEBUG: s.LnNum#1: 20
    //DEBUG: e.AST#1: 21
    //DEBUG: e.Tail#1: 23

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & ParseNameList-Idents-Tail/4 {REMOVED TILE} (/11 # TkSemicolon/19 s.LnNum#1/20 )/12 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.AST#1/21 AsIs: )/8 AsIs: t.ErrorList#1/9 } Tile{ AsIs: e.Tail#1/23 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[23], context[24] );
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
  refalrts::alloc_chars(vm, context[13], context[14], "comma or semicolon", 18);
  refalrts::copy_evar(vm, context[15], context[16], context[11], context[12]);
  refalrts::update_name(context[4], functions[efunc_AddUnexpected]);
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

static refalrts::NativeReference nat_ref_ParseNameListm_Identsm_Tail("ParseNameList-Idents-Tail", COOKIE1_, COOKIE2_, func_ParseNameListm_Identsm_Tail);


static refalrts::FnResult func_gen_ParseFunction_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_Function]);
  refalrts::reinit_close_bracket(context[1]);
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

static refalrts::NativeReference nat_ref_gen_ParseFunction_S1A1("ParseFunction$1=1", COOKIE1_, COOKIE2_, func_gen_ParseFunction_S1A1);


static refalrts::FnResult func_ParseFunction(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
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
    // </0 & ParseFunction/4 s.ScopeClass#1/5 (/8 e.Name#1/14 )/9 t.ErrorList#1/10 (/12 # TkOpenBlock/20 s.LnNum#1/21 )/13 e.Tail#1/16 >/1
    context[14] = context[6];
    context[15] = context[7];
    context[16] = context[2];
    context[17] = context[3];
    context[18] = 0;
    context[19] = 0;
    if( ! refalrts::brackets_term( context[18], context[19], context[12] ) )
      continue;
    context[20] = refalrts::ident_left( identifiers[ident_TkOpenBlock], context[18], context[19] );
    if( ! context[20] )
      continue;
    // closed e.Name#1 as range 14
    // closed e.Tail#1 as range 16
    if( ! refalrts::svar_left( context[21], context[18], context[19] ) )
      continue;
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;
    //DEBUG: t.ErrorList#1: 10
    //DEBUG: s.ScopeClass#1: 5
    //DEBUG: e.Name#1: 14
    //DEBUG: e.Tail#1: 16
    //DEBUG: s.LnNum#1: 21

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.LnNum#1/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </13 } Tile{ HalfReuse: & ParseFunction$1=1/0 HalfReuse: s.LnNum1 #21/4 AsIs: s.ScopeClass#1/5 AsIs: (/8 AsIs: e.Name#1/14 AsIs: )/9 } Tile{ HalfReuse: </12 HalfReuse: & ParseBlock/20 } Tile{ AsIs: t.ErrorList#1/10 } Tile{ AsIs: e.Tail#1/16 } >/22 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[22]);
    refalrts::reinit_open_call(context[13]);
    refalrts::reinit_name(context[0], functions[efunc_gen_ParseFunction_S1A1]);
    refalrts::reinit_svar( context[4], context[21] );
    refalrts::reinit_open_call(context[12]);
    refalrts::reinit_name(context[20], functions[efunc_ParseBlock]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[22] );
    refalrts::push_stack( vm, context[12] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[12], context[20] );
    res = refalrts::splice_evar( res, context[0], context[9] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
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
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::alloc_char(vm, context[15], 'o');
  refalrts::alloc_chars(vm, context[16], context[17], "en brace", 8);
  refalrts::copy_evar(vm, context[18], context[19], context[12], context[13]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::reinit_name(context[9], functions[efunc_AddUnexpected]);
  refalrts::reinit_char(context[8], 'p');
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

static refalrts::NativeReference nat_ref_ParseFunction("ParseFunction", COOKIE1_, COOKIE2_, func_ParseFunction);


static refalrts::FnResult func_ParseBlock(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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
    context[13] = refalrts::ident_left( identifiers[ident_TkNativeBlock], context[9], context[10] );
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
    refalrts::alloc_ident(vm, context[16], identifiers[ident_TkCloseBlock]);
    refalrts::alloc_open_bracket(vm, context[17]);
    refalrts::alloc_char(vm, context[18], '}');
    refalrts::alloc_close_bracket(vm, context[19]);
    refalrts::update_ident(context[13], identifiers[ident_NativeBody]);
    refalrts::update_name(context[4], functions[efunc_Expect]);
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
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_close_bracket(vm, context[8]);
  refalrts::update_name(context[4], functions[efunc_DoParseBlock]);
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

static refalrts::NativeReference nat_ref_ParseBlock("ParseBlock", COOKIE1_, COOKIE2_, func_ParseBlock);


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
    // </0 & Expect/4 s.Expected#1/5 (/8 e.ExpectedText#1/14 )/9 t.ErrorList#1/10 (/12 s.Expected#1/20 t.SrcPos#1/21 )/13 e.Tokens#1/16 >/1
    context[14] = context[6];
    context[15] = context[7];
    context[16] = context[2];
    context[17] = context[3];
    context[18] = 0;
    context[19] = 0;
    if( ! refalrts::brackets_term( context[18], context[19], context[12] ) )
      continue;
    if( ! refalrts::repeated_stvar_left( vm, context[20], context[5], context[18], context[19] ) )
      continue;
    // closed e.ExpectedText#1 as range 14
    // closed e.Tokens#1 as range 16
    context[22] = refalrts::tvar_left( context[21], context[18], context[19] );
    if( ! context[22] )
      continue;
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;
    //DEBUG: t.ErrorList#1: 10
    //DEBUG: s.Expected#1: 5
    //DEBUG: e.ExpectedText#1: 14
    //DEBUG: e.Tokens#1: 16
    //DEBUG: t.SrcPos#1: 21

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Expect/4 s.Expected#1/5 (/8 e.ExpectedText#1/14 )/9 {REMOVED TILE} (/12 s.Expected#1/20 t.SrcPos#1/21 )/13 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/10 } Tile{ AsIs: e.Tokens#1/16 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[16], context[17] );
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
  refalrts::copy_evar(vm, context[14], context[15], context[12], context[13]);
  refalrts::update_name(context[4], functions[efunc_AddUnexpected]);
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

static refalrts::NativeReference nat_ref_Expect("Expect", COOKIE1_, COOKIE2_, func_Expect);


static refalrts::FnResult func_gen_DoParseBlock_S3A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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
  refalrts::update_name(context[4], functions[efunc_DoParseBlock]);
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

static refalrts::NativeReference nat_ref_gen_DoParseBlock_S3A1("DoParseBlock$3=1", COOKIE1_, COOKIE2_, func_gen_DoParseBlock_S3A1);


static refalrts::FnResult func_DoParseBlock(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
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
    // </0 & DoParseBlock/4 t.new#4/5 (/9 e.new#8/11 )/10 (/17 s.new#5/19 s.new#6/20 )/18 e.new#7/13 >/1
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
    // closed e.new#8 as range 11
    // closed e.new#7 as range 13
    if( ! refalrts::svar_left( context[19], context[15], context[16] ) )
      continue;
    if( ! refalrts::svar_left( context[20], context[15], context[16] ) )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    do {
      // </0 & DoParseBlock/4 t.ErrorList#1/5 (/9 e.Sentences#1/21 )/10 (/17 # TkCloseBlock/19 s.LnNumber#1/20 )/18 e.Tail#1/23 >/1
      context[21] = context[11];
      context[22] = context[12];
      context[23] = context[13];
      context[24] = context[14];
      if( ! refalrts::ident_term( identifiers[ident_TkCloseBlock], context[19] ) )
        continue;
      // closed e.Sentences#1 as range 21
      // closed e.Tail#1 as range 23
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: s.LnNumber#1: 20
      //DEBUG: e.Sentences#1: 21
      //DEBUG: e.Tail#1: 23

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} & DoParseBlock/4 {REMOVED TILE} {REMOVED TILE} (/17 # TkCloseBlock/19 s.LnNumber#1/20 )/18 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ HalfReuse: # Sentences/9 AsIs: e.Sentences#1/21 AsIs: )/10 } Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: e.Tail#1/23 } Tile{ ]] }
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[9], identifiers[ident_Sentences]);
      refalrts::link_brackets( context[0], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[0], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoParseBlock/4 t.ErrorList#1/5 (/9 e.Sentences#1/21 )/10 (/17 # TkEOF/19 s.LnNum#1/20 )/18 e.Tail#1/23 >/1
    context[21] = context[11];
    context[22] = context[12];
    context[23] = context[13];
    context[24] = context[14];
    if( ! refalrts::ident_term( identifiers[ident_TkEOF], context[19] ) )
      continue;
    // closed e.Sentences#1 as range 21
    // closed e.Tail#1 as range 23
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: s.LnNum#1: 20
    //DEBUG: e.Sentences#1: 21
    //DEBUG: e.Tail#1: 23

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/25 # Sentences/26 Tile{ AsIs: e.Sentences#1/21 } )/27 Tile{ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#1/5 HalfReuse: s.LnNum1 #20/9 } 'U'/28 Tile{ HalfReuse: 'n'/1 }"expected EOF, expected \"}\""/29 Tile{ HalfReuse: >/10 AsIs: (/17 AsIs: # TkEOF/19 AsIs: s.LnNum#1/20 AsIs: )/18 } Tile{ AsIs: e.Tail#1/23 } Tile{ ]] }
    refalrts::alloc_open_bracket(vm, context[25]);
    refalrts::alloc_ident(vm, context[26], identifiers[ident_Sentences]);
    refalrts::alloc_close_bracket(vm, context[27]);
    refalrts::alloc_char(vm, context[28], 'U');
    refalrts::alloc_chars(vm, context[29], context[30], "expected EOF, expected \"}\"", 26);
    refalrts::update_name(context[4], functions[efunc_ELm_AddErrorAt]);
    refalrts::reinit_svar( context[9], context[20] );
    refalrts::reinit_char(context[1], 'n');
    refalrts::reinit_close_call(context[10]);
    refalrts::link_brackets( context[17], context[18] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[25], context[27] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[10], context[18] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[28], context[28] );
    res = refalrts::splice_evar( res, context[0], context[9] );
    res = refalrts::splice_evar( res, context[27], context[27] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[25], context[26] );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoParseBlock$3=1/4 } Tile{ AsIs: (/9 AsIs: e.Sentences#1/7 AsIs: )/10 } </11 & ParseSentence/12 Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: e.Tokens#1/2 } >/13 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_ParseSentence]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_gen_DoParseBlock_S3A1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoParseBlock("DoParseBlock", COOKIE1_, COOKIE2_, func_DoParseBlock);


static refalrts::FnResult func_gen_ParseSentence_B1S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_close_bracket(context[19]);
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

static refalrts::NativeReference nat_ref_gen_ParseSentence_B1S1A1("ParseSentence:1$1=1", COOKIE1_, COOKIE2_, func_gen_ParseSentence_B1S1A1);


static refalrts::FnResult func_gen_ParseSentence_B1S1A1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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
    if( ! refalrts::ident_term( identifiers[ident_Assign], context[9] ) )
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
  if( ! refalrts::ident_term( identifiers[ident_Condition], context[9] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.ErrorList#2: 5
  //DEBUG: t.SrcPos#3: 7

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#2/5 AsIs: t.SrcPos#3/7 HalfReuse: 'B'/9 HalfReuse: 'e'/1 }"fore the last result expr must be \"=\""/10 >/12 Tile{ ]] }
  refalrts::alloc_chars(vm, context[10], context[11], "fore the last result expr must be \"=\"", 37);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::update_name(context[4], functions[efunc_ELm_AddErrorAt]);
  refalrts::reinit_char(context[9], 'B');
  refalrts::reinit_char(context[1], 'e');
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[10], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseSentence_B1S1A1L1("ParseSentence:1$1=1\\1", COOKIE1_, COOKIE2_, func_gen_ParseSentence_B1S1A1L1);


static refalrts::FnResult func_gen_ParseSentence_B1S2A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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
  refalrts::reinit_open_bracket(context[4]);
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

static refalrts::NativeReference nat_ref_gen_ParseSentence_B1S2A2("ParseSentence:1$2=2", COOKIE1_, COOKIE2_, func_gen_ParseSentence_B1S2A2);


static refalrts::FnResult func_gen_ParseSentence_B1S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 36 elems
  refalrts::Iter context[36];
  refalrts::zeros( context, 36 );
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
  //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 } Tile{ AsIs: e.StartPattern#2/5 } Tile{ HalfReuse: )/24 } Tile{ HalfReuse: (/8 AsIs: s.Type#2/9 AsIs: (/12 AsIs: e.Result#2/10 AsIs: )/13 AsIs: (/16 AsIs: e.Blocks#2/14 AsIs: )/17 AsIs: (/20 } Tile{ AsIs: e.InnerPattern#4/22 } Tile{ HalfReuse: )/1 } Tile{ AsIs: )/25 AsIs: e.AssignmentsANDCond#4/18 AsIs: (/32 AsIs: e.EndResult#4/30 AsIs: )/33 AsIs: (/28 AsIs: e.EndBlocks#4/26 AsIs: )/29 AsIs: )/21 AsIs: t.ErrorList#4/34 } Tile{ AsIs: e.Tokens#4/2 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_close_bracket(context[24]);
  refalrts::reinit_open_bracket(context[8]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[21] );
  refalrts::link_brackets( context[28], context[29] );
  refalrts::link_brackets( context[32], context[33] );
  refalrts::link_brackets( context[8], context[25] );
  refalrts::link_brackets( context[20], context[1] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[4], context[24] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[25], context[35] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[8], context[20] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseSentence_B1S2A1("ParseSentence:1$2=1", COOKIE1_, COOKIE2_, func_gen_ParseSentence_B1S2A1);


static refalrts::FnResult func_gen_ParseSentence_B1S4A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::alloc_name(vm, context[22], functions[efunc_ELm_AddErrorAt]);
  refalrts::alloc_chars(vm, context[23], context[24], "nexpected EOF in function", 25);
  refalrts::alloc_close_call(vm, context[25]);
  refalrts::alloc_open_bracket(vm, context[26]);
  refalrts::alloc_ident(vm, context[27], identifiers[ident_TkEOF]);
  refalrts::copy_evar(vm, context[28], context[29], context[19], context[20]);
  refalrts::alloc_close_bracket(vm, context[30]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_char(context[1], 'U');
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

static refalrts::NativeReference nat_ref_gen_ParseSentence_B1S4A1("ParseSentence:1$4=1", COOKIE1_, COOKIE2_, func_gen_ParseSentence_B1S4A1);


static refalrts::FnResult func_gen_ParseSentence_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 59 elems
  refalrts::Iter context[59];
  refalrts::zeros( context, 59 );
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
    // </0 & ParseSentence:1/4 (/7 e.new#12/26 )/8 (/11 e.new#13/28 )/12 (/15 e.new#14/30 )/16 (/19 e.new#15/32 )/20 s.new#8/21 t.new#9/22 (/24 s.new#10/36 t.new#11/37 )/25 >/1
    context[26] = context[5];
    context[27] = context[6];
    context[28] = context[9];
    context[29] = context[10];
    context[30] = context[13];
    context[31] = context[14];
    context[32] = context[17];
    context[33] = context[18];
    context[34] = 0;
    context[35] = 0;
    if( ! refalrts::brackets_term( context[34], context[35], context[24] ) )
      continue;
    // closed e.new#12 as range 26
    // closed e.new#13 as range 28
    // closed e.new#14 as range 30
    // closed e.new#15 as range 32
    if( ! refalrts::svar_left( context[36], context[34], context[35] ) )
      continue;
    context[38] = refalrts::tvar_left( context[37], context[34], context[35] );
    if( ! context[38] )
      continue;
    if( ! refalrts::empty_seq( context[34], context[35] ) )
      continue;
    do {
      // </0 & ParseSentence:1/4 (/7 e.new#19/39 )/8 (/11 e.new#20/41 )/12 (/15 e.new#21/43 )/16 (/19 e.new#22/45 )/20 s.new#16/21 t.new#17/22 (/24 # TkSemicolon/36 t.new#18/37 )/25 >/1
      context[39] = context[26];
      context[40] = context[27];
      context[41] = context[28];
      context[42] = context[29];
      context[43] = context[30];
      context[44] = context[31];
      context[45] = context[32];
      context[46] = context[33];
      if( ! refalrts::ident_term( identifiers[ident_TkSemicolon], context[36] ) )
        continue;
      // closed e.new#19 as range 39
      // closed e.new#20 as range 41
      // closed e.new#21 as range 43
      // closed e.new#22 as range 45
      do {
        // </0 & ParseSentence:1/4 (/7 e.StartPattern#2/47 )/8 (/11 e.Result#2/49 )/12 (/15 e.Blocks#2/51 )/16 (/19 e.Tokens#2/53 )/20 # Assign/21 t.ErrorList#2/22 (/24 # TkSemicolon/36 t.SrcPos#3/37 )/25 >/1
        context[47] = context[39];
        context[48] = context[40];
        context[49] = context[41];
        context[50] = context[42];
        context[51] = context[43];
        context[52] = context[44];
        context[53] = context[45];
        context[54] = context[46];
        if( ! refalrts::ident_term( identifiers[ident_Assign], context[21] ) )
          continue;
        // closed e.StartPattern#2 as range 47
        // closed e.Result#2 as range 49
        // closed e.Blocks#2 as range 51
        // closed e.Tokens#2 as range 53
        //DEBUG: t.ErrorList#2: 22
        //DEBUG: t.SrcPos#3: 37
        //DEBUG: e.StartPattern#2: 47
        //DEBUG: e.Result#2: 49
        //DEBUG: e.Blocks#2: 51
        //DEBUG: e.Tokens#2: 53

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} )/20 # Assign/21 {REMOVED TILE} (/24 # TkSemicolon/36 t.SrcPos#3/37 )/25 >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: (/7 AsIs: e.StartPattern#2/47 AsIs: )/8 AsIs: (/11 AsIs: e.Result#2/49 AsIs: )/12 AsIs: (/15 AsIs: e.Blocks#2/51 AsIs: )/16 HalfReuse: )/19 } Tile{ AsIs: t.ErrorList#2/22 } Tile{ AsIs: e.Tokens#2/53 } Tile{ ]] }
        refalrts::reinit_open_bracket(context[4]);
        refalrts::reinit_close_bracket(context[19]);
        refalrts::link_brackets( context[4], context[19] );
        refalrts::link_brackets( context[15], context[16] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[53], context[54] );
        res = refalrts::splice_evar( res, context[22], context[23] );
        res = refalrts::splice_evar( res, context[4], context[19] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & ParseSentence:1/4 (/7 e.StartPattern#2/47 )/8 (/11 e.Result#2/49 )/12 (/15 e.Blocks#2/51 )/16 (/19 e.Tokens#2/53 )/20 # Condition/21 t.ErrorList#2/22 (/24 # TkSemicolon/36 t.SrcPos#3/37 )/25 >/1
        context[47] = context[39];
        context[48] = context[40];
        context[49] = context[41];
        context[50] = context[42];
        context[51] = context[43];
        context[52] = context[44];
        context[53] = context[45];
        context[54] = context[46];
        if( ! refalrts::ident_term( identifiers[ident_Condition], context[21] ) )
          continue;
        // closed e.StartPattern#2 as range 47
        // closed e.Result#2 as range 49
        // closed e.Blocks#2 as range 51
        // closed e.Tokens#2 as range 53
        //DEBUG: t.ErrorList#2: 22
        //DEBUG: t.SrcPos#3: 37
        //DEBUG: e.StartPattern#2: 47
        //DEBUG: e.Result#2: 49
        //DEBUG: e.Blocks#2: 51
        //DEBUG: e.Tokens#2: 53

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseSentence:1$1=1/4 AsIs: (/7 AsIs: e.StartPattern#2/47 AsIs: )/8 AsIs: (/11 AsIs: e.Result#2/49 AsIs: )/12 AsIs: (/15 AsIs: e.Blocks#2/51 AsIs: )/16 AsIs: (/19 AsIs: e.Tokens#2/53 AsIs: )/20 HalfReuse: </21 } & EL-AddErrorAt/55 Tile{ AsIs: t.ErrorList#2/22 } Tile{ AsIs: t.SrcPos#3/37 } 'B'/56 Tile{ HalfReuse: 'e'/24 HalfReuse: 'f'/36 }"ore the last result expr must be \"=\""/57 Tile{ HalfReuse: >/25 AsIs: >/1 ]] }
        refalrts::alloc_name(vm, context[55], functions[efunc_ELm_AddErrorAt]);
        refalrts::alloc_char(vm, context[56], 'B');
        refalrts::alloc_chars(vm, context[57], context[58], "ore the last result expr must be \"=\"", 36);
        refalrts::update_name(context[4], functions[efunc_gen_ParseSentence_B1S1A1]);
        refalrts::reinit_open_call(context[21]);
        refalrts::reinit_char(context[24], 'e');
        refalrts::reinit_char(context[36], 'f');
        refalrts::reinit_close_call(context[25]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[25] );
        refalrts::push_stack( vm, context[21] );
        refalrts::link_brackets( context[19], context[20] );
        refalrts::link_brackets( context[15], context[16] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[25];
        res = refalrts::splice_evar( res, context[57], context[58] );
        res = refalrts::splice_evar( res, context[24], context[36] );
        res = refalrts::splice_evar( res, context[56], context[56] );
        res = refalrts::splice_evar( res, context[37], context[38] );
        res = refalrts::splice_evar( res, context[22], context[23] );
        res = refalrts::splice_evar( res, context[55], context[55] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ParseSentence:1/4 (/7 e.StartPattern#2/47 )/8 (/11 e.Result#2/49 )/12 (/15 e.Blocks#2/51 )/16 (/19 e.Tokens#2/53 )/20 s.Type#2/21 t.ErrorList#2/22 (/24 # TkSemicolon/36 t.SrcPos#3/37 )/25 >/1
      context[47] = context[39];
      context[48] = context[40];
      context[49] = context[41];
      context[50] = context[42];
      context[51] = context[43];
      context[52] = context[44];
      context[53] = context[45];
      context[54] = context[46];
      // closed e.StartPattern#2 as range 47
      // closed e.Result#2 as range 49
      // closed e.Blocks#2 as range 51
      // closed e.Tokens#2 as range 53
      //DEBUG: t.ErrorList#2: 22
      //DEBUG: t.SrcPos#3: 37
      //DEBUG: s.Type#2: 21
      //DEBUG: e.StartPattern#2: 47
      //DEBUG: e.Result#2: 49
      //DEBUG: e.Blocks#2: 51
      //DEBUG: e.Tokens#2: 53

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Type#2/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseSentence:1$1=1/4 AsIs: (/7 AsIs: e.StartPattern#2/47 AsIs: )/8 AsIs: (/11 AsIs: e.Result#2/49 AsIs: )/12 AsIs: (/15 AsIs: e.Blocks#2/51 AsIs: )/16 AsIs: (/19 AsIs: e.Tokens#2/53 AsIs: )/20 } Tile{ HalfReuse: </24 HalfReuse: & ParseSentence:1$1=1\1*2/36 } Tile{ AsIs: t.ErrorList#2/22 } Tile{ AsIs: t.SrcPos#3/37 HalfReuse: s.Type2 #21/25 AsIs: >/1 } >/55 Tile{ ]] }
      refalrts::alloc_close_call(vm, context[55]);
      refalrts::update_name(context[4], functions[efunc_gen_ParseSentence_B1S1A1]);
      refalrts::reinit_open_call(context[24]);
      refalrts::reinit_name(context[36], functions[efunc_gen_ParseSentence_B1S1A1L1D2]);
      refalrts::reinit_svar( context[25], context[21] );
      refalrts::push_stack( vm, context[55] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[24] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[55], context[55] );
      res = refalrts::splice_evar( res, context[37], context[1] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[24], context[36] );
      refalrts::splice_to_freelist_open( vm, context[20], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseSentence:1/4 (/7 e.StartPattern#2/39 )/8 (/11 e.Result#2/41 )/12 (/15 e.Blocks#2/43 )/16 (/19 e.Tokens#2/45 )/20 s.Type#2/21 t.ErrorList#2/22 (/24 # TkColon/36 t.SrcPos#3/37 )/25 >/1
      context[39] = context[26];
      context[40] = context[27];
      context[41] = context[28];
      context[42] = context[29];
      context[43] = context[30];
      context[44] = context[31];
      context[45] = context[32];
      context[46] = context[33];
      if( ! refalrts::ident_term( identifiers[ident_TkColon], context[36] ) )
        continue;
      // closed e.StartPattern#2 as range 39
      // closed e.Result#2 as range 41
      // closed e.Blocks#2 as range 43
      // closed e.Tokens#2 as range 45
      //DEBUG: t.ErrorList#2: 22
      //DEBUG: t.SrcPos#3: 37
      //DEBUG: s.Type#2: 21
      //DEBUG: e.StartPattern#2: 39
      //DEBUG: e.Result#2: 41
      //DEBUG: e.Blocks#2: 43
      //DEBUG: e.Tokens#2: 45

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Type#2/21 {REMOVED TILE} {REMOVED TILE} # TkColon/36 t.SrcPos#3/37 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseSentence:1$2=1/4 AsIs: (/7 } Tile{ AsIs: e.StartPattern#2/39 } Tile{ AsIs: )/20 } Tile{ HalfReuse: s.Type2 #21/8 AsIs: (/11 AsIs: e.Result#2/41 AsIs: )/12 AsIs: (/15 AsIs: e.Blocks#2/43 AsIs: )/16 HalfReuse: </19 } Tile{ HalfReuse: & ParseSentence/24 } Tile{ AsIs: t.ErrorList#2/22 } Tile{ AsIs: e.Tokens#2/45 } Tile{ HalfReuse: >/25 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_gen_ParseSentence_B1S2A1]);
      refalrts::reinit_svar( context[8], context[21] );
      refalrts::reinit_open_call(context[19]);
      refalrts::reinit_name(context[24], functions[efunc_ParseSentence]);
      refalrts::reinit_close_call(context[25]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[25] );
      refalrts::push_stack( vm, context[19] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[7], context[20] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[25];
      res = refalrts::splice_evar( res, context[45], context[46] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[24], context[24] );
      res = refalrts::splice_evar( res, context[8], context[19] );
      res = refalrts::splice_evar( res, context[20], context[20] );
      res = refalrts::splice_evar( res, context[39], context[40] );
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseSentence:1/4 (/7 e.StartPattern#2/39 )/8 (/11 e.Result#2/41 )/12 (/15 e.Blocks#2/43 )/16 (/19 e.Tokens#2/45 )/20 s.Type#2/21 t.ErrorList#2/22 (/24 # TkCloseBlock/36 t.SrcPos#3/37 )/25 >/1
      context[39] = context[26];
      context[40] = context[27];
      context[41] = context[28];
      context[42] = context[29];
      context[43] = context[30];
      context[44] = context[31];
      context[45] = context[32];
      context[46] = context[33];
      if( ! refalrts::ident_term( identifiers[ident_TkCloseBlock], context[36] ) )
        continue;
      // closed e.StartPattern#2 as range 39
      // closed e.Result#2 as range 41
      // closed e.Blocks#2 as range 43
      // closed e.Tokens#2 as range 45
      //DEBUG: t.ErrorList#2: 22
      //DEBUG: t.SrcPos#3: 37
      //DEBUG: s.Type#2: 21
      //DEBUG: e.StartPattern#2: 39
      //DEBUG: e.Result#2: 41
      //DEBUG: e.Blocks#2: 43
      //DEBUG: e.Tokens#2: 45

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Type#2/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: (/7 AsIs: e.StartPattern#2/39 AsIs: )/8 AsIs: (/11 AsIs: e.Result#2/41 AsIs: )/12 AsIs: (/15 AsIs: e.Blocks#2/43 AsIs: )/16 HalfReuse: )/19 } Tile{ AsIs: </0 } & EL-AddErrorAt/47 Tile{ AsIs: t.ErrorList#2/22 } t.SrcPos#3/37/48 'M'/50 Tile{ HalfReuse: 'i'/20 }"ssed semicolon"/51 Tile{ AsIs: >/1 } Tile{ AsIs: (/24 AsIs: # TkCloseBlock/36 AsIs: t.SrcPos#3/37 AsIs: )/25 } Tile{ AsIs: e.Tokens#2/45 } Tile{ ]] }
      refalrts::alloc_name(vm, context[47], functions[efunc_ELm_AddErrorAt]);
      refalrts::copy_evar(vm, context[48], context[49], context[37], context[38]);
      refalrts::alloc_char(vm, context[50], 'M');
      refalrts::alloc_chars(vm, context[51], context[52], "ssed semicolon", 14);
      refalrts::reinit_open_bracket(context[4]);
      refalrts::reinit_close_bracket(context[19]);
      refalrts::reinit_char(context[20], 'i');
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
      res = refalrts::splice_evar( res, context[45], context[46] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[51], context[52] );
      res = refalrts::splice_evar( res, context[20], context[20] );
      res = refalrts::splice_evar( res, context[48], context[50] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[47], context[47] );
      res = refalrts::splice_evar( res, context[0], context[0] );
      res = refalrts::splice_evar( res, context[4], context[19] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ParseSentence:1/4 (/7 e.new#19/39 )/8 (/11 e.new#20/41 )/12 (/15 e.new#21/43 )/16 (/19 e.new#22/45 )/20 s.new#16/21 t.new#17/22 (/24 # TkEOF/36 t.new#18/37 )/25 >/1
    context[39] = context[26];
    context[40] = context[27];
    context[41] = context[28];
    context[42] = context[29];
    context[43] = context[30];
    context[44] = context[31];
    context[45] = context[32];
    context[46] = context[33];
    if( ! refalrts::ident_term( identifiers[ident_TkEOF], context[36] ) )
      continue;
    // closed e.new#19 as range 39
    // closed e.new#20 as range 41
    // closed e.new#21 as range 43
    // closed e.new#22 as range 45
    do {
      // </0 & ParseSentence:1/4 (/7 e.StartPattern#2/47 )/8 (/11 e.Result#2/49 )/12 (/15 e.Blocks#2/51 )/16 (/19 )/20 s.Type#2/21 t.ErrorList#2/22 (/24 # TkEOF/36 t.SrcPos#3/37 )/25 >/1
      context[47] = context[39];
      context[48] = context[40];
      context[49] = context[41];
      context[50] = context[42];
      context[51] = context[43];
      context[52] = context[44];
      if( ! refalrts::empty_seq( context[45], context[46] ) )
        continue;
      // closed e.StartPattern#2 as range 47
      // closed e.Result#2 as range 49
      // closed e.Blocks#2 as range 51
      //DEBUG: t.ErrorList#2: 22
      //DEBUG: t.SrcPos#3: 37
      //DEBUG: s.Type#2: 21
      //DEBUG: e.StartPattern#2: 47
      //DEBUG: e.Result#2: 49
      //DEBUG: e.Blocks#2: 51

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Type#2/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: (/7 AsIs: e.StartPattern#2/47 AsIs: )/8 AsIs: (/11 AsIs: e.Result#2/49 AsIs: )/12 AsIs: (/15 AsIs: e.Blocks#2/51 AsIs: )/16 HalfReuse: )/19 HalfReuse: </20 } & EL-AddErrorAt/53 Tile{ AsIs: t.ErrorList#2/22 } t.SrcPos#3/37/54 Tile{ HalfReuse: 'U'/0 }"nexpected EOF in function"/56 Tile{ AsIs: >/1 } Tile{ AsIs: (/24 AsIs: # TkEOF/36 AsIs: t.SrcPos#3/37 AsIs: )/25 } Tile{ ]] }
      refalrts::alloc_name(vm, context[53], functions[efunc_ELm_AddErrorAt]);
      refalrts::copy_evar(vm, context[54], context[55], context[37], context[38]);
      refalrts::alloc_chars(vm, context[56], context[57], "nexpected EOF in function", 25);
      refalrts::reinit_open_bracket(context[4]);
      refalrts::reinit_close_bracket(context[19]);
      refalrts::reinit_open_call(context[20]);
      refalrts::reinit_char(context[0], 'U');
      refalrts::link_brackets( context[24], context[25] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[20] );
      refalrts::link_brackets( context[4], context[19] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[24], context[25] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[56], context[57] );
      res = refalrts::splice_evar( res, context[0], context[0] );
      res = refalrts::splice_evar( res, context[54], context[55] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[53], context[53] );
      res = refalrts::splice_evar( res, context[4], context[20] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ParseSentence:1/4 (/7 e.StartPattern#2/47 )/8 (/11 e.Result#2/49 )/12 (/15 e.Blocks#2/51 )/16 (/19 e.Tokens#2/53 )/20 s.Type#2/21 t.ErrorList#2/22 (/24 # TkEOF/36 t.SrcPos#3/37 )/25 >/1
    context[47] = context[39];
    context[48] = context[40];
    context[49] = context[41];
    context[50] = context[42];
    context[51] = context[43];
    context[52] = context[44];
    context[53] = context[45];
    context[54] = context[46];
    // closed e.StartPattern#2 as range 47
    // closed e.Result#2 as range 49
    // closed e.Blocks#2 as range 51
    // closed e.Tokens#2 as range 53
    //DEBUG: t.ErrorList#2: 22
    //DEBUG: t.SrcPos#3: 37
    //DEBUG: s.Type#2: 21
    //DEBUG: e.StartPattern#2: 47
    //DEBUG: e.Result#2: 49
    //DEBUG: e.Blocks#2: 51
    //DEBUG: e.Tokens#2: 53

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/19 {REMOVED TILE} )/20 s.Type#2/21 {REMOVED TILE} (/24 # TkEOF/36 {REMOVED TILE} )/25 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseSentence:1$4=1*1/4 AsIs: (/7 AsIs: e.StartPattern#2/47 AsIs: )/8 AsIs: (/11 AsIs: e.Result#2/49 AsIs: )/12 AsIs: (/15 AsIs: e.Blocks#2/51 AsIs: )/16 } Tile{ AsIs: t.ErrorList#2/22 } Tile{ AsIs: t.SrcPos#3/37 } Tile{ AsIs: e.Tokens#2/53 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_ParseSentence_B1S4A1D1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[53], context[54] );
    res = refalrts::splice_evar( res, context[37], context[38] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    refalrts::splice_to_freelist_open( vm, context[16], res );
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
  refalrts::alloc_name(vm, context[26], functions[efunc_AddUnexpected]);
  refalrts::alloc_char(vm, context[27], 'e');
  refalrts::alloc_chars(vm, context[28], context[29], "icolon", 6);
  refalrts::alloc_close_call(vm, context[30]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_close_bracket(context[19]);
  refalrts::reinit_char(context[1], 's');
  refalrts::reinit_char(context[20], 'm');
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

static refalrts::NativeReference nat_ref_gen_ParseSentence_B1("ParseSentence:1", COOKIE1_, COOKIE2_, func_gen_ParseSentence_B1);


static refalrts::FnResult func_gen_ParseSentence_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 58 elems
  refalrts::Iter context[58];
  refalrts::zeros( context, 58 );
  // </0 & ParseSentence=1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseSentence=1/4 (/7 (/11 e.new#1/9 )/12 s.new#2/21 (/19 e.new#3/17 )/20 (/15 e.new#4/13 )/16 )/8 t.new#5/22 t.new#6/24 e.new#7/2 >/1
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
  // closed e.new#1 as range 9
  // closed e.new#3 as range 17
  // closed e.new#4 as range 13
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
  // closed e.new#7 as range 2
  do {
    // </0 & ParseSentence=1/4 (/7 (/11 e.new#13/26 )/12 s.new#12/21 (/19 e.new#14/28 )/20 (/15 e.new#15/30 )/16 )/8 t.new#8/22 (/24 s.new#9/36 t.new#10/37 )/25 e.new#11/32 >/1
    context[26] = context[9];
    context[27] = context[10];
    context[28] = context[17];
    context[29] = context[18];
    context[30] = context[13];
    context[31] = context[14];
    context[32] = context[2];
    context[33] = context[3];
    context[34] = 0;
    context[35] = 0;
    if( ! refalrts::brackets_term( context[34], context[35], context[24] ) )
      continue;
    // closed e.new#13 as range 26
    // closed e.new#14 as range 28
    // closed e.new#15 as range 30
    // closed e.new#11 as range 32
    if( ! refalrts::svar_left( context[36], context[34], context[35] ) )
      continue;
    context[38] = refalrts::tvar_left( context[37], context[34], context[35] );
    if( ! context[38] )
      continue;
    if( ! refalrts::empty_seq( context[34], context[35] ) )
      continue;
    do {
      // </0 & ParseSentence=1/4 (/7 (/11 e.new#20/39 )/12 s.new#19/21 (/19 e.new#21/41 )/20 (/15 e.new#22/43 )/16 )/8 t.new#16/22 (/24 # TkSemicolon/36 t.new#17/37 )/25 e.new#18/45 >/1
      context[39] = context[26];
      context[40] = context[27];
      context[41] = context[28];
      context[42] = context[29];
      context[43] = context[30];
      context[44] = context[31];
      context[45] = context[32];
      context[46] = context[33];
      if( ! refalrts::ident_term( identifiers[ident_TkSemicolon], context[36] ) )
        continue;
      // closed e.new#20 as range 39
      // closed e.new#21 as range 41
      // closed e.new#22 as range 43
      // closed e.new#18 as range 45
      do {
        // </0 & ParseSentence=1/4 (/7 (/11 e.StartPattern#2/47 )/12 # Assign/21 (/19 e.Result#2/49 )/20 (/15 e.Blocks#2/51 )/16 )/8 t.ErrorList#2/22 (/24 # TkSemicolon/36 t.0#0/37 )/25 e.Tokens#2/53 >/1
        context[47] = context[39];
        context[48] = context[40];
        context[49] = context[41];
        context[50] = context[42];
        context[51] = context[43];
        context[52] = context[44];
        context[53] = context[45];
        context[54] = context[46];
        if( ! refalrts::ident_term( identifiers[ident_Assign], context[21] ) )
          continue;
        // closed e.StartPattern#2 as range 47
        // closed e.Result#2 as range 49
        // closed e.Blocks#2 as range 51
        // closed e.Tokens#2 as range 53
        //DEBUG: t.ErrorList#2: 22
        //DEBUG: t.0#0: 37
        //DEBUG: e.StartPattern#2: 47
        //DEBUG: e.Result#2: 49
        //DEBUG: e.Blocks#2: 51
        //DEBUG: e.Tokens#2: 53

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & ParseSentence=1/4 {REMOVED TILE} {REMOVED TILE} )/12 {REMOVED TILE} (/24 # TkSemicolon/36 t.0#0/37 )/25 {REMOVED TILE} >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/11 } Tile{ AsIs: e.StartPattern#2/47 } Tile{ HalfReuse: )/21 AsIs: (/19 AsIs: e.Result#2/49 AsIs: )/20 AsIs: (/15 AsIs: e.Blocks#2/51 AsIs: )/16 AsIs: )/8 AsIs: t.ErrorList#2/22 } Tile{ AsIs: e.Tokens#2/53 } Tile{ ]] }
        refalrts::reinit_close_bracket(context[21]);
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[15], context[16] );
        refalrts::link_brackets( context[19], context[20] );
        refalrts::link_brackets( context[11], context[21] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[53], context[54] );
        res = refalrts::splice_evar( res, context[21], context[23] );
        res = refalrts::splice_evar( res, context[47], context[48] );
        res = refalrts::splice_evar( res, context[7], context[11] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & ParseSentence=1/4 (/7 (/11 e.StartPattern#2/47 )/12 # Condition/21 (/19 e.Result#2/49 )/20 (/15 e.Blocks#2/51 )/16 )/8 t.ErrorList#2/22 (/24 # TkSemicolon/36 t.0#0/37 )/25 e.Tokens#2/53 >/1
        context[47] = context[39];
        context[48] = context[40];
        context[49] = context[41];
        context[50] = context[42];
        context[51] = context[43];
        context[52] = context[44];
        context[53] = context[45];
        context[54] = context[46];
        if( ! refalrts::ident_term( identifiers[ident_Condition], context[21] ) )
          continue;
        // closed e.StartPattern#2 as range 47
        // closed e.Result#2 as range 49
        // closed e.Blocks#2 as range 51
        // closed e.Tokens#2 as range 53
        //DEBUG: t.ErrorList#2: 22
        //DEBUG: t.0#0: 37
        //DEBUG: e.StartPattern#2: 47
        //DEBUG: e.Result#2: 49
        //DEBUG: e.Blocks#2: 51
        //DEBUG: e.Tokens#2: 53

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseSentence:1$1=1/4 AsIs: (/7 } Tile{ AsIs: e.StartPattern#2/47 } Tile{ HalfReuse: )/21 AsIs: (/19 AsIs: e.Result#2/49 AsIs: )/20 AsIs: (/15 AsIs: e.Blocks#2/51 AsIs: )/16 HalfReuse: (/8 } Tile{ AsIs: e.Tokens#2/53 } Tile{ AsIs: )/12 } Tile{ HalfReuse: </24 HalfReuse: & EL-AddErrorAt/36 } Tile{ AsIs: t.ErrorList#2/22 } Tile{ AsIs: t.0#0/37 HalfReuse: 'B'/25 } Tile{ HalfReuse: 'e'/11 }"fore the last result expr must be \"=\""/55 >/57 Tile{ AsIs: >/1 ]] }
        refalrts::alloc_chars(vm, context[55], context[56], "fore the last result expr must be \"=\"", 37);
        refalrts::alloc_close_call(vm, context[57]);
        refalrts::update_name(context[4], functions[efunc_gen_ParseSentence_B1S1A1]);
        refalrts::reinit_close_bracket(context[21]);
        refalrts::reinit_open_bracket(context[8]);
        refalrts::reinit_open_call(context[24]);
        refalrts::reinit_name(context[36], functions[efunc_ELm_AddErrorAt]);
        refalrts::reinit_char(context[25], 'B');
        refalrts::reinit_char(context[11], 'e');
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[57] );
        refalrts::push_stack( vm, context[24] );
        refalrts::link_brackets( context[8], context[12] );
        refalrts::link_brackets( context[15], context[16] );
        refalrts::link_brackets( context[19], context[20] );
        refalrts::link_brackets( context[7], context[21] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[55], context[57] );
        res = refalrts::splice_evar( res, context[11], context[11] );
        res = refalrts::splice_evar( res, context[37], context[25] );
        res = refalrts::splice_evar( res, context[22], context[23] );
        res = refalrts::splice_evar( res, context[24], context[36] );
        res = refalrts::splice_evar( res, context[12], context[12] );
        res = refalrts::splice_evar( res, context[53], context[54] );
        res = refalrts::splice_evar( res, context[21], context[8] );
        res = refalrts::splice_evar( res, context[47], context[48] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ParseSentence=1/4 (/7 (/11 e.StartPattern#2/47 )/12 s.Type#2/21 (/19 e.Result#2/49 )/20 (/15 e.Blocks#2/51 )/16 )/8 t.ErrorList#2/22 (/24 # TkSemicolon/36 t.0#0/37 )/25 e.Tokens#2/53 >/1
      context[47] = context[39];
      context[48] = context[40];
      context[49] = context[41];
      context[50] = context[42];
      context[51] = context[43];
      context[52] = context[44];
      context[53] = context[45];
      context[54] = context[46];
      // closed e.StartPattern#2 as range 47
      // closed e.Result#2 as range 49
      // closed e.Blocks#2 as range 51
      // closed e.Tokens#2 as range 53
      //DEBUG: t.ErrorList#2: 22
      //DEBUG: t.0#0: 37
      //DEBUG: s.Type#2: 21
      //DEBUG: e.StartPattern#2: 47
      //DEBUG: e.Result#2: 49
      //DEBUG: e.Blocks#2: 51
      //DEBUG: e.Tokens#2: 53

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Type#2/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & ParseSentence:1$1=1/7 AsIs: (/11 AsIs: e.StartPattern#2/47 AsIs: )/12 } Tile{ AsIs: (/19 AsIs: e.Result#2/49 AsIs: )/20 AsIs: (/15 AsIs: e.Blocks#2/51 AsIs: )/16 HalfReuse: (/8 } Tile{ AsIs: e.Tokens#2/53 } Tile{ HalfReuse: )/36 } Tile{ AsIs: </0 } Tile{ HalfReuse: & ParseSentence:1$1=1\1*2/24 } Tile{ AsIs: t.ErrorList#2/22 } Tile{ AsIs: t.0#0/37 HalfReuse: s.Type2 #21/25 } >/55 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_close_call(vm, context[55]);
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[7], functions[efunc_gen_ParseSentence_B1S1A1]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[36]);
      refalrts::reinit_name(context[24], functions[efunc_gen_ParseSentence_B1S1A1L1D2]);
      refalrts::reinit_svar( context[25], context[21] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[4] );
      refalrts::push_stack( vm, context[55] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[36] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[55], context[55] );
      res = refalrts::splice_evar( res, context[37], context[25] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[24], context[24] );
      res = refalrts::splice_evar( res, context[0], context[0] );
      res = refalrts::splice_evar( res, context[36], context[36] );
      res = refalrts::splice_evar( res, context[53], context[54] );
      res = refalrts::splice_evar( res, context[19], context[8] );
      res = refalrts::splice_evar( res, context[4], context[12] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseSentence=1/4 (/7 (/11 e.StartPattern#2/39 )/12 s.Type#2/21 (/19 e.Result#2/41 )/20 (/15 e.Blocks#2/43 )/16 )/8 t.ErrorList#2/22 (/24 # TkColon/36 t.0#0/37 )/25 e.Tokens#2/45 >/1
      context[39] = context[26];
      context[40] = context[27];
      context[41] = context[28];
      context[42] = context[29];
      context[43] = context[30];
      context[44] = context[31];
      context[45] = context[32];
      context[46] = context[33];
      if( ! refalrts::ident_term( identifiers[ident_TkColon], context[36] ) )
        continue;
      // closed e.StartPattern#2 as range 39
      // closed e.Result#2 as range 41
      // closed e.Blocks#2 as range 43
      // closed e.Tokens#2 as range 45
      //DEBUG: t.ErrorList#2: 22
      //DEBUG: t.0#0: 37
      //DEBUG: s.Type#2: 21
      //DEBUG: e.StartPattern#2: 39
      //DEBUG: e.Result#2: 41
      //DEBUG: e.Blocks#2: 43
      //DEBUG: e.Tokens#2: 45

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} (/24 {REMOVED TILE} t.0#0/37 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & ParseSentence:1$2=1/7 AsIs: (/11 AsIs: e.StartPattern#2/39 AsIs: )/12 AsIs: s.Type#2/21 AsIs: (/19 AsIs: e.Result#2/41 AsIs: )/20 AsIs: (/15 AsIs: e.Blocks#2/43 AsIs: )/16 HalfReuse: </8 } Tile{ HalfReuse: & ParseSentence/36 } Tile{ AsIs: t.ErrorList#2/22 } Tile{ AsIs: e.Tokens#2/45 } Tile{ HalfReuse: >/25 } Tile{ AsIs: >/1 ]] }
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[7], functions[efunc_gen_ParseSentence_B1S2A1]);
      refalrts::reinit_open_call(context[8]);
      refalrts::reinit_name(context[36], functions[efunc_ParseSentence]);
      refalrts::reinit_close_call(context[25]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[4] );
      refalrts::push_stack( vm, context[25] );
      refalrts::push_stack( vm, context[8] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[25], context[25] );
      res = refalrts::splice_evar( res, context[45], context[46] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[36], context[36] );
      res = refalrts::splice_evar( res, context[4], context[8] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseSentence=1/4 (/7 (/11 e.StartPattern#2/39 )/12 s.Type#2/21 (/19 e.Result#2/41 )/20 (/15 e.Blocks#2/43 )/16 )/8 t.ErrorList#2/22 (/24 # TkCloseBlock/36 t.0#0/37 )/25 e.Tokens#2/45 >/1
      context[39] = context[26];
      context[40] = context[27];
      context[41] = context[28];
      context[42] = context[29];
      context[43] = context[30];
      context[44] = context[31];
      context[45] = context[32];
      context[46] = context[33];
      if( ! refalrts::ident_term( identifiers[ident_TkCloseBlock], context[36] ) )
        continue;
      // closed e.StartPattern#2 as range 39
      // closed e.Result#2 as range 41
      // closed e.Blocks#2 as range 43
      // closed e.Tokens#2 as range 45
      //DEBUG: t.ErrorList#2: 22
      //DEBUG: t.0#0: 37
      //DEBUG: s.Type#2: 21
      //DEBUG: e.StartPattern#2: 39
      //DEBUG: e.Result#2: 41
      //DEBUG: e.Blocks#2: 43
      //DEBUG: e.Tokens#2: 45

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Type#2/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/11 AsIs: e.StartPattern#2/39 AsIs: )/12 } Tile{ AsIs: (/19 AsIs: e.Result#2/41 AsIs: )/20 AsIs: (/15 AsIs: e.Blocks#2/43 AsIs: )/16 AsIs: )/8 } Tile{ AsIs: </0 Reuse: & EL-AddErrorAt/4 } Tile{ AsIs: t.ErrorList#2/22 } t.0#0/37/47"Missed semicolon"/49 Tile{ AsIs: >/1 } Tile{ AsIs: (/24 AsIs: # TkCloseBlock/36 AsIs: t.0#0/37 AsIs: )/25 } Tile{ AsIs: e.Tokens#2/45 } Tile{ ]] }
      refalrts::copy_evar(vm, context[47], context[48], context[37], context[38]);
      refalrts::alloc_chars(vm, context[49], context[50], "Missed semicolon", 16);
      refalrts::update_name(context[4], functions[efunc_ELm_AddErrorAt]);
      refalrts::link_brackets( context[24], context[25] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[45], context[46] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[47], context[50] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[19], context[8] );
      res = refalrts::splice_evar( res, context[7], context[12] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ParseSentence=1/4 (/7 (/11 e.new#20/39 )/12 s.new#19/21 (/19 e.new#21/41 )/20 (/15 e.new#22/43 )/16 )/8 t.new#16/22 (/24 # TkEOF/36 t.new#17/37 )/25 e.new#18/45 >/1
    context[39] = context[26];
    context[40] = context[27];
    context[41] = context[28];
    context[42] = context[29];
    context[43] = context[30];
    context[44] = context[31];
    context[45] = context[32];
    context[46] = context[33];
    if( ! refalrts::ident_term( identifiers[ident_TkEOF], context[36] ) )
      continue;
    // closed e.new#20 as range 39
    // closed e.new#21 as range 41
    // closed e.new#22 as range 43
    // closed e.new#18 as range 45
    do {
      // </0 & ParseSentence=1/4 (/7 (/11 e.StartPattern#2/47 )/12 s.Type#2/21 (/19 e.Result#2/49 )/20 (/15 e.Blocks#2/51 )/16 )/8 t.ErrorList#2/22 (/24 # TkEOF/36 t.0#0/37 )/25 >/1
      context[47] = context[39];
      context[48] = context[40];
      context[49] = context[41];
      context[50] = context[42];
      context[51] = context[43];
      context[52] = context[44];
      if( ! refalrts::empty_seq( context[45], context[46] ) )
        continue;
      // closed e.StartPattern#2 as range 47
      // closed e.Result#2 as range 49
      // closed e.Blocks#2 as range 51
      //DEBUG: t.ErrorList#2: 22
      //DEBUG: t.0#0: 37
      //DEBUG: s.Type#2: 21
      //DEBUG: e.StartPattern#2: 47
      //DEBUG: e.Result#2: 49
      //DEBUG: e.Blocks#2: 51

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Type#2/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/11 AsIs: e.StartPattern#2/47 AsIs: )/12 } Tile{ AsIs: (/19 AsIs: e.Result#2/49 AsIs: )/20 AsIs: (/15 AsIs: e.Blocks#2/51 AsIs: )/16 AsIs: )/8 } Tile{ AsIs: </0 Reuse: & EL-AddErrorAt/4 } Tile{ AsIs: t.ErrorList#2/22 } t.0#0/37/53"Unexpected EOF in function"/55 Tile{ AsIs: >/1 } Tile{ AsIs: (/24 AsIs: # TkEOF/36 AsIs: t.0#0/37 AsIs: )/25 } Tile{ ]] }
      refalrts::copy_evar(vm, context[53], context[54], context[37], context[38]);
      refalrts::alloc_chars(vm, context[55], context[56], "Unexpected EOF in function", 26);
      refalrts::update_name(context[4], functions[efunc_ELm_AddErrorAt]);
      refalrts::link_brackets( context[24], context[25] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[24], context[25] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[53], context[56] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[19], context[8] );
      res = refalrts::splice_evar( res, context[7], context[12] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ParseSentence=1/4 (/7 (/11 e.StartPattern#2/47 )/12 s.Type#2/21 (/19 e.Result#2/49 )/20 (/15 e.Blocks#2/51 )/16 )/8 t.ErrorList#2/22 (/24 # TkEOF/36 t.0#0/37 )/25 e.Tokens#2/53 >/1
    context[47] = context[39];
    context[48] = context[40];
    context[49] = context[41];
    context[50] = context[42];
    context[51] = context[43];
    context[52] = context[44];
    context[53] = context[45];
    context[54] = context[46];
    // closed e.StartPattern#2 as range 47
    // closed e.Result#2 as range 49
    // closed e.Blocks#2 as range 51
    // closed e.Tokens#2 as range 53
    //DEBUG: t.ErrorList#2: 22
    //DEBUG: t.0#0: 37
    //DEBUG: s.Type#2: 21
    //DEBUG: e.StartPattern#2: 47
    //DEBUG: e.Result#2: 49
    //DEBUG: e.Blocks#2: 51
    //DEBUG: e.Tokens#2: 53

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} s.Type#2/21 {REMOVED TILE} )/8 {REMOVED TILE} (/24 # TkEOF/36 {REMOVED TILE} )/25 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & ParseSentence:1$4=1*1/7 AsIs: (/11 AsIs: e.StartPattern#2/47 AsIs: )/12 } Tile{ AsIs: (/19 AsIs: e.Result#2/49 AsIs: )/20 AsIs: (/15 AsIs: e.Blocks#2/51 AsIs: )/16 } Tile{ AsIs: t.ErrorList#2/22 } Tile{ AsIs: t.0#0/37 } Tile{ AsIs: e.Tokens#2/53 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[7], functions[efunc_gen_ParseSentence_B1S4A1D1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[53], context[54] );
    res = refalrts::splice_evar( res, context[37], context[38] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[19], context[16] );
    res = refalrts::splice_evar( res, context[4], context[12] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseSentence=1/4 (/7 (/11 e.StartPattern#2/9 )/12 s.Type#2/21 (/19 e.Result#2/17 )/20 (/15 e.Blocks#2/13 )/16 )/8 t.ErrorList#2/22 t.NextToken#2/24 e.Tokens#2/2 >/1
  // closed e.StartPattern#2 as range 9
  // closed e.Result#2 as range 17
  // closed e.Blocks#2 as range 13
  // closed e.Tokens#2 as range 2
  //DEBUG: t.ErrorList#2: 22
  //DEBUG: t.NextToken#2: 24
  //DEBUG: s.Type#2: 21
  //DEBUG: e.StartPattern#2: 9
  //DEBUG: e.Result#2: 17
  //DEBUG: e.Blocks#2: 13
  //DEBUG: e.Tokens#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Type#2/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/11 AsIs: e.StartPattern#2/9 AsIs: )/12 } Tile{ AsIs: (/19 AsIs: e.Result#2/17 AsIs: )/20 AsIs: (/15 AsIs: e.Blocks#2/13 AsIs: )/16 AsIs: )/8 } Tile{ AsIs: </0 Reuse: & AddUnexpected/4 } Tile{ AsIs: t.ErrorList#2/22 AsIs: t.NextToken#2/24 }"semicolon"/26 Tile{ AsIs: >/1 } Tile{ AsIs: e.Tokens#2/2 } Tile{ ]] }
  refalrts::alloc_chars(vm, context[26], context[27], "semicolon", 9);
  refalrts::update_name(context[4], functions[efunc_AddUnexpected]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  res = refalrts::splice_evar( res, context[22], context[25] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[19], context[8] );
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseSentence_A1("ParseSentence=1", COOKIE1_, COOKIE2_, func_gen_ParseSentence_A1);


static refalrts::FnResult func_ParseSentence(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_ParseSentence_A1]);
  refalrts::alloc_close_call(vm, context[9]);
  refalrts::update_name(context[4], functions[efunc_ParseSentencePart]);
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

static refalrts::NativeReference nat_ref_ParseSentence("ParseSentence", COOKIE1_, COOKIE2_, func_ParseSentence);


static refalrts::FnResult func_gen_ParseSentencePart_A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_close_bracket(context[1]);
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

static refalrts::NativeReference nat_ref_gen_ParseSentencePart_A3("ParseSentencePart=3", COOKIE1_, COOKIE2_, func_gen_ParseSentencePart_A3);


static refalrts::FnResult func_gen_ParseSentencePart_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseSentencePart=3/4 AsIs: (/7 AsIs: e.Pattern#2/5 AsIs: )/8 AsIs: s.Type#3/9 } </12 & ParseResult/13 Tile{ AsIs: t.ErrorList#3/10 AsIs: e.Tokens#3/2 AsIs: >/1 } >/14 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_ParseResult]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::update_name(context[4], functions[efunc_gen_ParseSentencePart_A3]);
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[10], context[1] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseSentencePart_A2("ParseSentencePart=2", COOKIE1_, COOKIE2_, func_gen_ParseSentencePart_A2);


static refalrts::FnResult func_gen_ParseSentencePart_A2L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
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
    // </0 & ParseSentencePart=2\1/4 t.new#4/5 (/7 s.new#5/13 t.new#6/14 )/8 e.new#7/9 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
      continue;
    // closed e.new#7 as range 9
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    context[15] = refalrts::tvar_left( context[14], context[11], context[12] );
    if( ! context[15] )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    do {
      // </0 & ParseSentencePart=2\1/4 t.ErrorList#2/5 (/7 # TkReplace/13 t.SrcPos#3/14 )/8 e.Tokens#3/16 >/1
      context[16] = context[9];
      context[17] = context[10];
      if( ! refalrts::ident_term( identifiers[ident_TkReplace], context[13] ) )
        continue;
      // closed e.Tokens#3 as range 16
      //DEBUG: t.ErrorList#2: 5
      //DEBUG: t.SrcPos#3: 14
      //DEBUG: e.Tokens#3: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} (/7 # TkReplace/13 t.SrcPos#3/14 )/8 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Assign/4 AsIs: t.ErrorList#2/5 } Tile{ AsIs: e.Tokens#3/16 } Tile{ ]] }
      refalrts::reinit_ident(context[4], identifiers[ident_Assign]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[4], context[6] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ParseSentencePart=2\1/4 t.ErrorList#2/5 (/7 # TkComma/13 t.SrcPos#3/14 )/8 e.Tokens#3/16 >/1
    context[16] = context[9];
    context[17] = context[10];
    if( ! refalrts::ident_term( identifiers[ident_TkComma], context[13] ) )
      continue;
    // closed e.Tokens#3 as range 16
    //DEBUG: t.ErrorList#2: 5
    //DEBUG: t.SrcPos#3: 14
    //DEBUG: e.Tokens#3: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} (/7 # TkComma/13 t.SrcPos#3/14 )/8 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Condition/4 AsIs: t.ErrorList#2/5 } Tile{ AsIs: e.Tokens#3/16 } Tile{ ]] }
    refalrts::reinit_ident(context[4], identifiers[ident_Condition]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[16], context[17] );
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
  refalrts::alloc_ident(vm, context[9], identifiers[ident_Assign]);
  refalrts::alloc_chars(vm, context[10], context[11], "\",\" or \"=\"", 10);
  refalrts::copy_evar(vm, context[12], context[13], context[7], context[8]);
  refalrts::update_name(context[4], functions[efunc_AddUnexpected]);
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

static refalrts::NativeReference nat_ref_gen_ParseSentencePart_A2L1("ParseSentencePart=2\\1", COOKIE1_, COOKIE2_, func_gen_ParseSentencePart_A2L1);


static refalrts::FnResult func_gen_ParseSentencePart_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & ParseSentencePart=1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseSentencePart=1/4 t.new#1/5 (/9 e.new#2/7 )/10 e.new#3/2 >/1
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
    // </0 & ParseSentencePart=1/4 t.new#4/5 (/9 e.new#7/11 )/10 t.new#5/15 e.new#6/13 >/1
    context[11] = context[7];
    context[12] = context[8];
    context[13] = context[2];
    context[14] = context[3];
    // closed e.new#7 as range 11
    context[16] = refalrts::tvar_left( context[15], context[13], context[14] );
    if( ! context[16] )
      continue;
    // closed e.new#6 as range 13
    do {
      // </0 & ParseSentencePart=1/4 t.new#8/5 (/9 e.new#12/17 )/10 (/15 s.new#9/23 t.new#10/24 )/16 e.new#11/19 >/1
      context[17] = context[11];
      context[18] = context[12];
      context[19] = context[13];
      context[20] = context[14];
      context[21] = 0;
      context[22] = 0;
      if( ! refalrts::brackets_term( context[21], context[22], context[15] ) )
        continue;
      // closed e.new#12 as range 17
      // closed e.new#11 as range 19
      if( ! refalrts::svar_left( context[23], context[21], context[22] ) )
        continue;
      context[25] = refalrts::tvar_left( context[24], context[21], context[22] );
      if( ! context[25] )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;
      do {
        // </0 & ParseSentencePart=1/4 t.ErrorList#2/5 (/9 e.Pattern#2/26 )/10 (/15 # TkReplace/23 t.1#0/24 )/16 e.#0/28 >/1
        context[26] = context[17];
        context[27] = context[18];
        context[28] = context[19];
        context[29] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_TkReplace], context[23] ) )
          continue;
        // closed e.Pattern#2 as range 26
        // closed e.#0 as range 28
        //DEBUG: t.ErrorList#2: 5
        //DEBUG: t.1#0: 24
        //DEBUG: e.Pattern#2: 26
        //DEBUG: e.#0: 28

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.1#0/24 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseSentencePart=3@1/4 } Tile{ AsIs: (/9 AsIs: e.Pattern#2/26 AsIs: )/10 HalfReuse: </15 HalfReuse: & ParseResult/23 } Tile{ AsIs: t.ErrorList#2/5 } Tile{ AsIs: e.#0/28 } Tile{ HalfReuse: >/16 } Tile{ AsIs: >/1 ]] }
        refalrts::update_name(context[4], functions[efunc_gen_ParseSentencePart_A3Z1]);
        refalrts::reinit_open_call(context[15]);
        refalrts::reinit_name(context[23], functions[efunc_ParseResult]);
        refalrts::reinit_close_call(context[16]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[16] );
        refalrts::push_stack( vm, context[15] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[16], context[16] );
        res = refalrts::splice_evar( res, context[28], context[29] );
        res = refalrts::splice_evar( res, context[5], context[6] );
        res = refalrts::splice_evar( res, context[9], context[23] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ParseSentencePart=1/4 t.ErrorList#2/5 (/9 e.Pattern#2/26 )/10 (/15 # TkComma/23 t.1#0/24 )/16 e.#0/28 >/1
      context[26] = context[17];
      context[27] = context[18];
      context[28] = context[19];
      context[29] = context[20];
      if( ! refalrts::ident_term( identifiers[ident_TkComma], context[23] ) )
        continue;
      // closed e.Pattern#2 as range 26
      // closed e.#0 as range 28
      //DEBUG: t.ErrorList#2: 5
      //DEBUG: t.1#0: 24
      //DEBUG: e.Pattern#2: 26
      //DEBUG: e.#0: 28

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.1#0/24 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseSentencePart=3@2/4 } Tile{ AsIs: (/9 AsIs: e.Pattern#2/26 AsIs: )/10 HalfReuse: </15 HalfReuse: & ParseResult/23 } Tile{ AsIs: t.ErrorList#2/5 } Tile{ AsIs: e.#0/28 } Tile{ HalfReuse: >/16 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_gen_ParseSentencePart_A3Z2]);
      refalrts::reinit_open_call(context[15]);
      refalrts::reinit_name(context[23], functions[efunc_ParseResult]);
      refalrts::reinit_close_call(context[16]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[16] );
      refalrts::push_stack( vm, context[15] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[16], context[16] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[9], context[23] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ParseSentencePart=1/4 t.ErrorList#2/5 (/9 e.Pattern#2/17 )/10 t.#0/15 e.#0/19 >/1
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[13];
    context[20] = context[14];
    // closed e.Pattern#2 as range 17
    // closed e.#0 as range 19
    //DEBUG: t.ErrorList#2: 5
    //DEBUG: t.#0: 15
    //DEBUG: e.Pattern#2: 17
    //DEBUG: e.#0: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseSentencePart=2/4 } Tile{ AsIs: (/9 } Tile{ AsIs: e.Pattern#2/17 } )/21 # Assign/22 </23 & AddUnexpected/24 Tile{ AsIs: t.ErrorList#2/5 } t.#0/15/25"\",\" or \"=\""/27 Tile{ HalfReuse: >/10 AsIs: t.#0/15 AsIs: e.#0/19 AsIs: >/1 ]] }
    refalrts::alloc_close_bracket(vm, context[21]);
    refalrts::alloc_ident(vm, context[22], identifiers[ident_Assign]);
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_name(vm, context[24], functions[efunc_AddUnexpected]);
    refalrts::copy_evar(vm, context[25], context[26], context[15], context[16]);
    refalrts::alloc_chars(vm, context[27], context[28], "\",\" or \"=\"", 10);
    refalrts::update_name(context[4], functions[efunc_gen_ParseSentencePart_A2]);
    refalrts::reinit_close_call(context[10]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[23] );
    refalrts::link_brackets( context[9], context[21] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[25], context[28] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[21], context[24] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseSentencePart=1/4 t.ErrorList#2/5 (/9 e.Pattern#2/7 )/10 e.Tokens#2/2 >/1
  // closed e.Pattern#2 as range 7
  // closed e.Tokens#2 as range 2
  //DEBUG: t.ErrorList#2: 5
  //DEBUG: e.Pattern#2: 7
  //DEBUG: e.Tokens#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseSentencePart=2/4 } Tile{ AsIs: (/9 AsIs: e.Pattern#2/7 AsIs: )/10 } </11 & ParseSentencePart=2\1*3/12 Tile{ AsIs: t.ErrorList#2/5 } Tile{ AsIs: e.Tokens#2/2 } >/13 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_gen_ParseSentencePart_A2L1D3]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_gen_ParseSentencePart_A2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseSentencePart_A1("ParseSentencePart=1", COOKIE1_, COOKIE2_, func_gen_ParseSentencePart_A1);


static refalrts::FnResult func_ParseSentencePart(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_ParseSentencePart_A1]);
  refalrts::alloc_close_call(vm, context[9]);
  refalrts::update_name(context[4], functions[efunc_ParsePattern]);
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

static refalrts::NativeReference nat_ref_ParseSentencePart("ParseSentencePart", COOKIE1_, COOKIE2_, func_ParseSentencePart);


static refalrts::FnResult func_ParsePattern(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_close_bracket(vm, context[8]);
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_close_bracket(vm, context[10]);
  refalrts::update_name(context[4], functions[efunc_DoParsePattern]);
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

static refalrts::NativeReference nat_ref_ParsePattern("ParsePattern", COOKIE1_, COOKIE2_, func_ParsePattern);


static refalrts::FnResult func_DoParsePattern(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 74 elems
  refalrts::Iter context[74];
  refalrts::zeros( context, 74 );
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
    // </0 & DoParsePattern/4 t.new#5/5 (/9 e.new#10/15 )/10 (/13 e.new#11/17 )/14 (/23 s.new#6/25 s.new#7/26 e.new#8/21 )/24 e.new#9/19 >/1
    context[15] = context[7];
    context[16] = context[8];
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[2];
    context[20] = context[3];
    context[21] = 0;
    context[22] = 0;
    context[23] = refalrts::brackets_left( context[21], context[22], context[19], context[20] );
    if( ! context[23] )
      continue;
    refalrts::bracket_pointers(context[23], context[24]);
    // closed e.new#10 as range 15
    // closed e.new#11 as range 17
    // closed e.new#9 as range 19
    if( ! refalrts::svar_left( context[25], context[21], context[22] ) )
      continue;
    if( ! refalrts::svar_left( context[26], context[21], context[22] ) )
      continue;
    // closed e.new#8 as range 21
    do {
      // </0 & DoParsePattern/4 t.new#12/5 (/9 e.new#17/27 )/10 (/13 e.new#18/29 )/14 (/23 s.new#14/25 s.new#15/26 s.new#16/35 )/24 e.new#13/33 >/1
      context[27] = context[15];
      context[28] = context[16];
      context[29] = context[17];
      context[30] = context[18];
      context[31] = context[21];
      context[32] = context[22];
      context[33] = context[19];
      context[34] = context[20];
      // closed e.new#17 as range 27
      // closed e.new#18 as range 29
      // closed e.new#13 as range 33
      if( ! refalrts::svar_left( context[35], context[31], context[32] ) )
        continue;
      if( ! refalrts::empty_seq( context[31], context[32] ) )
        continue;
      do {
        // </0 & DoParsePattern/4 t.ErrorList#1/5 (/9 e.MultiBrackets#1/36 )/10 (/13 e.Scanned#1/38 )/14 (/23 # TkChar/25 s.LnNum#1/26 s.Char#1/35 )/24 e.Tail#1/40 >/1
        context[36] = context[27];
        context[37] = context[28];
        context[38] = context[29];
        context[39] = context[30];
        context[40] = context[33];
        context[41] = context[34];
        if( ! refalrts::ident_term( identifiers[ident_TkChar], context[25] ) )
          continue;
        // closed e.MultiBrackets#1 as range 36
        // closed e.Scanned#1 as range 38
        // closed e.Tail#1 as range 40
        //DEBUG: t.ErrorList#1: 5
        //DEBUG: s.LnNum#1: 26
        //DEBUG: s.Char#1: 35
        //DEBUG: e.MultiBrackets#1: 36
        //DEBUG: e.Scanned#1: 38
        //DEBUG: e.Tail#1: 40

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.LnNum#1/26 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoParsePattern/4 AsIs: t.ErrorList#1/5 AsIs: (/9 AsIs: e.MultiBrackets#1/36 AsIs: )/10 AsIs: (/13 AsIs: e.Scanned#1/38 HalfReuse: (/14 HalfReuse: # Symbol/23 Reuse: # Char/25 } Tile{ AsIs: s.Char#1/35 } )/42 Tile{ AsIs: )/24 AsIs: e.Tail#1/40 AsIs: >/1 ]] }
        refalrts::alloc_close_bracket(vm, context[42]);
        refalrts::reinit_open_bracket(context[14]);
        refalrts::reinit_ident(context[23], identifiers[ident_Symbol]);
        refalrts::update_ident(context[25], identifiers[ident_Char]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[13], context[24] );
        refalrts::link_brackets( context[14], context[42] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[24];
        res = refalrts::splice_evar( res, context[42], context[42] );
        res = refalrts::splice_evar( res, context[35], context[35] );
        refalrts::splice_to_freelist_open( vm, context[25], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoParsePattern/4 t.ErrorList#1/5 (/9 e.MultiBrackets#1/36 )/10 (/13 e.Scanned#1/38 )/14 (/23 # TkNumber/25 s.LnNum#1/26 s.Number#1/35 )/24 e.Tail#1/40 >/1
      context[36] = context[27];
      context[37] = context[28];
      context[38] = context[29];
      context[39] = context[30];
      context[40] = context[33];
      context[41] = context[34];
      if( ! refalrts::ident_term( identifiers[ident_TkNumber], context[25] ) )
        continue;
      // closed e.MultiBrackets#1 as range 36
      // closed e.Scanned#1 as range 38
      // closed e.Tail#1 as range 40
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: s.LnNum#1: 26
      //DEBUG: s.Number#1: 35
      //DEBUG: e.MultiBrackets#1: 36
      //DEBUG: e.Scanned#1: 38
      //DEBUG: e.Tail#1: 40

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.LnNum#1/26 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoParsePattern/4 AsIs: t.ErrorList#1/5 AsIs: (/9 AsIs: e.MultiBrackets#1/36 AsIs: )/10 AsIs: (/13 AsIs: e.Scanned#1/38 HalfReuse: (/14 HalfReuse: # Symbol/23 Reuse: # Number/25 } Tile{ AsIs: s.Number#1/35 } )/42 Tile{ AsIs: )/24 AsIs: e.Tail#1/40 AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[42]);
      refalrts::reinit_open_bracket(context[14]);
      refalrts::reinit_ident(context[23], identifiers[ident_Symbol]);
      refalrts::update_ident(context[25], identifiers[ident_Number]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[13], context[24] );
      refalrts::link_brackets( context[14], context[42] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[24];
      res = refalrts::splice_evar( res, context[42], context[42] );
      res = refalrts::splice_evar( res, context[35], context[35] );
      refalrts::splice_to_freelist_open( vm, context[25], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoParsePattern/4 t.ErrorList#1/5 (/9 e.MultiBrackets#1/27 )/10 (/13 e.Scanned#1/29 )/14 (/23 # TkName/25 s.LnNum#1/26 e.Name#1/31 )/24 e.Tail#1/33 >/1
      context[27] = context[15];
      context[28] = context[16];
      context[29] = context[17];
      context[30] = context[18];
      context[31] = context[21];
      context[32] = context[22];
      context[33] = context[19];
      context[34] = context[20];
      if( ! refalrts::ident_term( identifiers[ident_TkName], context[25] ) )
        continue;
      // closed e.MultiBrackets#1 as range 27
      // closed e.Scanned#1 as range 29
      // closed e.Name#1 as range 31
      // closed e.Tail#1 as range 33
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: s.LnNum#1: 26
      //DEBUG: e.MultiBrackets#1: 27
      //DEBUG: e.Scanned#1: 29
      //DEBUG: e.Name#1: 31
      //DEBUG: e.Tail#1: 33

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoParsePattern/4 AsIs: t.ErrorList#1/5 AsIs: (/9 AsIs: e.MultiBrackets#1/27 AsIs: )/10 AsIs: (/13 AsIs: e.Scanned#1/29 HalfReuse: (/14 HalfReuse: # Symbol/23 Reuse: # Name/25 AsIs: s.LnNum#1/26 AsIs: e.Name#1/31 AsIs: )/24 } )/35 Tile{ AsIs: e.Tail#1/33 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[35]);
      refalrts::reinit_open_bracket(context[14]);
      refalrts::reinit_ident(context[23], identifiers[ident_Symbol]);
      refalrts::update_ident(context[25], identifiers[ident_Name]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[13], context[35] );
      refalrts::link_brackets( context[14], context[24] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[33], context[34] );
      res = refalrts::splice_evar( res, context[35], context[35] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoParsePattern/4 t.new#12/5 (/9 e.new#15/27 )/10 (/13 e.new#16/29 )/14 (/23 # TkIdentMarker/25 s.new#14/26 )/24 e.new#13/31 >/1
      context[27] = context[15];
      context[28] = context[16];
      context[29] = context[17];
      context[30] = context[18];
      context[31] = context[19];
      context[32] = context[20];
      if( ! refalrts::ident_term( identifiers[ident_TkIdentMarker], context[25] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;
      // closed e.new#15 as range 27
      // closed e.new#16 as range 29
      // closed e.new#13 as range 31
      do {
        // </0 & DoParsePattern/4 t.ErrorList#1/5 (/9 e.MultiBrackets#1/33 )/10 (/13 e.Scanned#1/35 )/14 (/23 # TkIdentMarker/25 s.LnNumMarker#1/26 )/24 (/41 # TkName/43 s.LnNumName#1/44 e.Name#1/39 )/42 e.Tail#1/37 >/1
        context[33] = context[27];
        context[34] = context[28];
        context[35] = context[29];
        context[36] = context[30];
        context[37] = context[31];
        context[38] = context[32];
        context[39] = 0;
        context[40] = 0;
        context[41] = refalrts::brackets_left( context[39], context[40], context[37], context[38] );
        if( ! context[41] )
          continue;
        refalrts::bracket_pointers(context[41], context[42]);
        context[43] = refalrts::ident_left( identifiers[ident_TkName], context[39], context[40] );
        if( ! context[43] )
          continue;
        // closed e.MultiBrackets#1 as range 33
        // closed e.Scanned#1 as range 35
        // closed e.Tail#1 as range 37
        if( ! refalrts::svar_left( context[44], context[39], context[40] ) )
          continue;
        // closed e.Name#1 as range 39
        //DEBUG: t.ErrorList#1: 5
        //DEBUG: s.LnNumMarker#1: 26
        //DEBUG: e.MultiBrackets#1: 33
        //DEBUG: e.Scanned#1: 35
        //DEBUG: e.Tail#1: 37
        //DEBUG: s.LnNumName#1: 44
        //DEBUG: e.Name#1: 39

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.LnNumMarker#1/26 {REMOVED TILE} (/41 # TkName/43 s.LnNumName#1/44 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoParsePattern/4 AsIs: t.ErrorList#1/5 AsIs: (/9 AsIs: e.MultiBrackets#1/33 AsIs: )/10 AsIs: (/13 AsIs: e.Scanned#1/35 HalfReuse: (/14 HalfReuse: # Symbol/23 Reuse: # Identifier/25 } Tile{ AsIs: e.Name#1/39 } Tile{ AsIs: )/24 } Tile{ AsIs: )/42 AsIs: e.Tail#1/37 AsIs: >/1 ]] }
        refalrts::reinit_open_bracket(context[14]);
        refalrts::reinit_ident(context[23], identifiers[ident_Symbol]);
        refalrts::update_ident(context[25], identifiers[ident_Identifier]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[13], context[42] );
        refalrts::link_brackets( context[14], context[24] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[42];
        res = refalrts::splice_evar( res, context[24], context[24] );
        res = refalrts::splice_evar( res, context[39], context[40] );
        refalrts::splice_to_freelist_open( vm, context[25], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoParsePattern/4 t.ErrorList#1/5 (/9 e.MultiBrackets#1/33 )/10 (/13 e.Scanned#1/35 )/14 (/23 # TkIdentMarker/25 s.LnNum#1/26 )/24 e.Tail#1/37 >/1
      context[33] = context[27];
      context[34] = context[28];
      context[35] = context[29];
      context[36] = context[30];
      context[37] = context[31];
      context[38] = context[32];
      // closed e.MultiBrackets#1 as range 33
      // closed e.Scanned#1 as range 35
      // closed e.Tail#1 as range 37
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: s.LnNum#1: 26
      //DEBUG: e.MultiBrackets#1: 33
      //DEBUG: e.Scanned#1: 35
      //DEBUG: e.Tail#1: 37

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoParsePattern/4 } </39 & EL-AddErrorAt/40 Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: s.LnNum#1/26 HalfReuse: 'M'/24 }"is"/41 Tile{ HalfReuse: 's'/23 HalfReuse: 'e'/25 }"d name after \'#\'"/43 >/45 Tile{ AsIs: (/9 AsIs: e.MultiBrackets#1/33 AsIs: )/10 AsIs: (/13 AsIs: e.Scanned#1/35 AsIs: )/14 } Tile{ AsIs: e.Tail#1/37 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[39]);
      refalrts::alloc_name(vm, context[40], functions[efunc_ELm_AddErrorAt]);
      refalrts::alloc_chars(vm, context[41], context[42], "is", 2);
      refalrts::alloc_chars(vm, context[43], context[44], "d name after \'#\'", 16);
      refalrts::alloc_close_call(vm, context[45]);
      refalrts::reinit_char(context[24], 'M');
      refalrts::reinit_char(context[23], 's');
      refalrts::reinit_char(context[25], 'e');
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::push_stack( vm, context[45] );
      refalrts::push_stack( vm, context[39] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[37], context[38] );
      res = refalrts::splice_evar( res, context[9], context[14] );
      res = refalrts::splice_evar( res, context[43], context[45] );
      res = refalrts::splice_evar( res, context[23], context[25] );
      res = refalrts::splice_evar( res, context[41], context[42] );
      res = refalrts::splice_evar( res, context[26], context[24] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[39], context[40] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoParsePattern/4 t.ErrorList#1/5 (/9 e.MultiBrackets#1/27 )/10 (/13 e.Scanned#1/29 )/14 (/23 # TkCompound/25 s.LnNum#1/26 e.Name#1/31 )/24 e.Tail#1/33 >/1
      context[27] = context[15];
      context[28] = context[16];
      context[29] = context[17];
      context[30] = context[18];
      context[31] = context[21];
      context[32] = context[22];
      context[33] = context[19];
      context[34] = context[20];
      if( ! refalrts::ident_term( identifiers[ident_TkCompound], context[25] ) )
        continue;
      // closed e.MultiBrackets#1 as range 27
      // closed e.Scanned#1 as range 29
      // closed e.Name#1 as range 31
      // closed e.Tail#1 as range 33
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: s.LnNum#1: 26
      //DEBUG: e.MultiBrackets#1: 27
      //DEBUG: e.Scanned#1: 29
      //DEBUG: e.Name#1: 31
      //DEBUG: e.Tail#1: 33

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.LnNum#1/26 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoParsePattern/4 AsIs: t.ErrorList#1/5 AsIs: (/9 AsIs: e.MultiBrackets#1/27 AsIs: )/10 AsIs: (/13 AsIs: e.Scanned#1/29 HalfReuse: (/14 HalfReuse: # Symbol/23 Reuse: # Identifier/25 } Tile{ AsIs: e.Name#1/31 } )/35 Tile{ AsIs: )/24 AsIs: e.Tail#1/33 AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[35]);
      refalrts::reinit_open_bracket(context[14]);
      refalrts::reinit_ident(context[23], identifiers[ident_Symbol]);
      refalrts::update_ident(context[25], identifiers[ident_Identifier]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[13], context[24] );
      refalrts::link_brackets( context[14], context[35] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[24];
      res = refalrts::splice_evar( res, context[35], context[35] );
      res = refalrts::splice_evar( res, context[31], context[32] );
      refalrts::splice_to_freelist_open( vm, context[25], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoParsePattern/4 t.new#12/5 (/9 e.new#17/27 )/10 (/13 e.new#18/29 )/14 (/23 # TkVariable/25 s.new#14/26 s.new#15/35 e.new#16/31 )/24 e.new#13/33 >/1
      context[27] = context[15];
      context[28] = context[16];
      context[29] = context[17];
      context[30] = context[18];
      context[31] = context[21];
      context[32] = context[22];
      context[33] = context[19];
      context[34] = context[20];
      if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[25] ) )
        continue;
      // closed e.new#17 as range 27
      // closed e.new#18 as range 29
      // closed e.new#13 as range 33
      if( ! refalrts::svar_left( context[35], context[31], context[32] ) )
        continue;
      // closed e.new#16 as range 31
      do {
        // </0 & DoParsePattern/4 t.ErrorList#1/5 (/9 e.MultiBracket#1/36 )/10 (/13 e.Scanned#1/38 )/14 (/23 # TkVariable/25 s.LnNumVar#1/26 s.Mode#1/35 e.Index#1/40 )/24 (/46 # TkRedefinition/48 s.LnNumRedef#1/49 )/47 e.Tail#1/42 >/1
        context[36] = context[27];
        context[37] = context[28];
        context[38] = context[29];
        context[39] = context[30];
        context[40] = context[31];
        context[41] = context[32];
        context[42] = context[33];
        context[43] = context[34];
        context[44] = 0;
        context[45] = 0;
        context[46] = refalrts::brackets_left( context[44], context[45], context[42], context[43] );
        if( ! context[46] )
          continue;
        refalrts::bracket_pointers(context[46], context[47]);
        context[48] = refalrts::ident_left( identifiers[ident_TkRedefinition], context[44], context[45] );
        if( ! context[48] )
          continue;
        // closed e.MultiBracket#1 as range 36
        // closed e.Scanned#1 as range 38
        // closed e.Index#1 as range 40
        // closed e.Tail#1 as range 42
        if( ! refalrts::svar_left( context[49], context[44], context[45] ) )
          continue;
        if( ! refalrts::empty_seq( context[44], context[45] ) )
          continue;
        //DEBUG: t.ErrorList#1: 5
        //DEBUG: s.LnNumVar#1: 26
        //DEBUG: s.Mode#1: 35
        //DEBUG: e.MultiBracket#1: 36
        //DEBUG: e.Scanned#1: 38
        //DEBUG: e.Index#1: 40
        //DEBUG: e.Tail#1: 42
        //DEBUG: s.LnNumRedef#1: 49

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.LnNumVar#1/26 {REMOVED TILE} (/46 # TkRedefinition/48 s.LnNumRedef#1/49 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoParsePattern/4 AsIs: t.ErrorList#1/5 AsIs: (/9 AsIs: e.MultiBracket#1/36 AsIs: )/10 AsIs: (/13 AsIs: e.Scanned#1/38 HalfReuse: (/14 HalfReuse: # TkNewVariable/23 HalfReuse: s.LnNumVar1 #26/25 } Tile{ AsIs: s.Mode#1/35 AsIs: e.Index#1/40 AsIs: )/24 } Tile{ AsIs: )/47 AsIs: e.Tail#1/42 AsIs: >/1 ]] }
        refalrts::reinit_open_bracket(context[14]);
        refalrts::reinit_ident(context[23], identifiers[ident_TkNewVariable]);
        refalrts::reinit_svar( context[25], context[26] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[13], context[47] );
        refalrts::link_brackets( context[14], context[24] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[47];
        res = refalrts::splice_evar( res, context[35], context[24] );
        refalrts::splice_to_freelist_open( vm, context[25], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoParsePattern/4 t.ErrorList#1/5 (/9 e.MultiBracket#1/36 )/10 (/13 e.Scanned#1/38 )/14 (/23 # TkVariable/25 s.LnNum#1/26 s.Mode#1/35 e.Index#1/40 )/24 e.Tail#1/42 >/1
      context[36] = context[27];
      context[37] = context[28];
      context[38] = context[29];
      context[39] = context[30];
      context[40] = context[31];
      context[41] = context[32];
      context[42] = context[33];
      context[43] = context[34];
      // closed e.MultiBracket#1 as range 36
      // closed e.Scanned#1 as range 38
      // closed e.Index#1 as range 40
      // closed e.Tail#1 as range 42
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: s.LnNum#1: 26
      //DEBUG: s.Mode#1: 35
      //DEBUG: e.MultiBracket#1: 36
      //DEBUG: e.Scanned#1: 38
      //DEBUG: e.Index#1: 40
      //DEBUG: e.Tail#1: 42

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.LnNum#1/26 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoParsePattern/4 AsIs: t.ErrorList#1/5 AsIs: (/9 AsIs: e.MultiBracket#1/36 AsIs: )/10 AsIs: (/13 AsIs: e.Scanned#1/38 HalfReuse: (/14 HalfReuse: # TkVariable/23 HalfReuse: s.LnNum1 #26/25 } Tile{ AsIs: s.Mode#1/35 } Tile{ AsIs: e.Index#1/40 } )/44 Tile{ AsIs: )/24 AsIs: e.Tail#1/42 AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[44]);
      refalrts::reinit_open_bracket(context[14]);
      refalrts::reinit_ident(context[23], identifiers[ident_TkVariable]);
      refalrts::reinit_svar( context[25], context[26] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[13], context[24] );
      refalrts::link_brackets( context[14], context[44] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[24];
      res = refalrts::splice_evar( res, context[44], context[44] );
      res = refalrts::splice_evar( res, context[40], context[41] );
      res = refalrts::splice_evar( res, context[35], context[35] );
      refalrts::splice_to_freelist_open( vm, context[25], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoParsePattern/4 t.ErrorList#1/5 (/9 e.MultiBracket#1/27 )/10 (/13 e.Scanned#1/29 )/14 (/23 # TkRedefinition/25 s.LnNum#1/26 )/24 e.Tail#1/31 >/1
      context[27] = context[15];
      context[28] = context[16];
      context[29] = context[17];
      context[30] = context[18];
      context[31] = context[19];
      context[32] = context[20];
      if( ! refalrts::ident_term( identifiers[ident_TkRedefinition], context[25] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;
      // closed e.MultiBracket#1 as range 27
      // closed e.Scanned#1 as range 29
      // closed e.Tail#1 as range 31
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: s.LnNum#1: 26
      //DEBUG: e.MultiBracket#1: 27
      //DEBUG: e.Scanned#1: 29
      //DEBUG: e.Tail#1: 31

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoParsePattern/4 } </33 & EL-AddErrorAt/34 Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: s.LnNum#1/26 HalfReuse: 'N'/24 }"ak"/35 Tile{ HalfReuse: 'e'/23 HalfReuse: 'd'/25 }" redefinition sign"/37 >/39 Tile{ AsIs: (/9 AsIs: e.MultiBracket#1/27 AsIs: )/10 AsIs: (/13 AsIs: e.Scanned#1/29 AsIs: )/14 } Tile{ AsIs: e.Tail#1/31 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[33]);
      refalrts::alloc_name(vm, context[34], functions[efunc_ELm_AddErrorAt]);
      refalrts::alloc_chars(vm, context[35], context[36], "ak", 2);
      refalrts::alloc_chars(vm, context[37], context[38], " redefinition sign", 18);
      refalrts::alloc_close_call(vm, context[39]);
      refalrts::reinit_char(context[24], 'N');
      refalrts::reinit_char(context[23], 'e');
      refalrts::reinit_char(context[25], 'd');
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::push_stack( vm, context[39] );
      refalrts::push_stack( vm, context[33] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[31], context[32] );
      res = refalrts::splice_evar( res, context[9], context[14] );
      res = refalrts::splice_evar( res, context[37], context[39] );
      res = refalrts::splice_evar( res, context[23], context[25] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_evar( res, context[26], context[24] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoParsePattern/4 t.new#12/5 (/9 e.new#17/27 )/10 (/13 e.new#18/29 )/14 (/23 s.new#14/25 s.new#15/26 s.new#16/35 )/24 e.new#13/33 >/1
    context[27] = context[15];
    context[28] = context[16];
    context[29] = context[17];
    context[30] = context[18];
    context[31] = context[21];
    context[32] = context[22];
    context[33] = context[19];
    context[34] = context[20];
    // closed e.new#17 as range 27
    // closed e.new#18 as range 29
    // closed e.new#13 as range 33
    if( ! refalrts::svar_left( context[35], context[31], context[32] ) )
      continue;
    if( ! refalrts::empty_seq( context[31], context[32] ) )
      continue;
    do {
      // </0 & DoParsePattern/4 t.new#19/5 (/9 e.new#23/36 )/10 (/13 e.new#24/38 )/14 (/23 # Open/25 s.new#21/26 s.new#22/35 )/24 e.new#20/40 >/1
      context[36] = context[27];
      context[37] = context[28];
      context[38] = context[29];
      context[39] = context[30];
      context[40] = context[33];
      context[41] = context[34];
      if( ! refalrts::ident_term( identifiers[ident_Open], context[25] ) )
        continue;
      // closed e.new#23 as range 36
      // closed e.new#24 as range 38
      // closed e.new#20 as range 40
      do {
        // </0 & DoParsePattern/4 t.ErrorList#1/5 (/9 e.MultiBracket#1/42 )/10 (/13 e.Scanned#1/44 )/14 (/23 # Open/25 s.LnNum#1/26 # TkOpenBracket/35 )/24 e.Tail#1/46 >/1
        context[42] = context[36];
        context[43] = context[37];
        context[44] = context[38];
        context[45] = context[39];
        context[46] = context[40];
        context[47] = context[41];
        if( ! refalrts::ident_term( identifiers[ident_TkOpenBracket], context[35] ) )
          continue;
        // closed e.MultiBracket#1 as range 42
        // closed e.Scanned#1 as range 44
        // closed e.Tail#1 as range 46
        //DEBUG: t.ErrorList#1: 5
        //DEBUG: s.LnNum#1: 26
        //DEBUG: e.MultiBracket#1: 42
        //DEBUG: e.Scanned#1: 44
        //DEBUG: e.Tail#1: 46

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoParsePattern/4 AsIs: t.ErrorList#1/5 AsIs: (/9 AsIs: e.MultiBracket#1/42 HalfReuse: (/10 HalfReuse: # Brackets/13 } Tile{ AsIs: s.LnNum#1/26 } Tile{ Reuse: # TkCloseBracket/25 } Tile{ AsIs: e.Scanned#1/44 } Tile{ AsIs: )/14 HalfReuse: )/23 } Tile{ HalfReuse: (/35 AsIs: )/24 AsIs: e.Tail#1/46 AsIs: >/1 ]] }
        refalrts::reinit_open_bracket(context[10]);
        refalrts::reinit_ident(context[13], identifiers[ident_Brackets]);
        refalrts::update_ident(context[25], identifiers[ident_TkCloseBracket]);
        refalrts::reinit_close_bracket(context[23]);
        refalrts::reinit_open_bracket(context[35]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[35], context[24] );
        refalrts::link_brackets( context[9], context[23] );
        refalrts::link_brackets( context[10], context[14] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[35];
        res = refalrts::splice_evar( res, context[14], context[23] );
        res = refalrts::splice_evar( res, context[44], context[45] );
        res = refalrts::splice_evar( res, context[25], context[25] );
        res = refalrts::splice_evar( res, context[26], context[26] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & DoParsePattern/4 t.new#25/5 (/9 e.new#28/42 )/10 (/13 e.new#29/44 )/14 (/23 # Open/25 s.new#27/26 # TkOpenADT/35 )/24 e.new#26/46 >/1
        context[42] = context[36];
        context[43] = context[37];
        context[44] = context[38];
        context[45] = context[39];
        context[46] = context[40];
        context[47] = context[41];
        if( ! refalrts::ident_term( identifiers[ident_TkOpenADT], context[35] ) )
          continue;
        // closed e.new#28 as range 42
        // closed e.new#29 as range 44
        // closed e.new#26 as range 46
        do {
          // </0 & DoParsePattern/4 t.ErrorList#1/5 (/9 e.MultiBracket#1/48 )/10 (/13 e.Scanned#1/50 )/14 (/23 # Open/25 s.LnNumBracket#1/26 # TkOpenADT/35 )/24 (/56 # TkName/58 s.LnNumName#1/59 e.Name#1/54 )/57 e.Tail#1/52 >/1
          context[48] = context[42];
          context[49] = context[43];
          context[50] = context[44];
          context[51] = context[45];
          context[52] = context[46];
          context[53] = context[47];
          context[54] = 0;
          context[55] = 0;
          context[56] = refalrts::brackets_left( context[54], context[55], context[52], context[53] );
          if( ! context[56] )
            continue;
          refalrts::bracket_pointers(context[56], context[57]);
          context[58] = refalrts::ident_left( identifiers[ident_TkName], context[54], context[55] );
          if( ! context[58] )
            continue;
          // closed e.MultiBracket#1 as range 48
          // closed e.Scanned#1 as range 50
          // closed e.Tail#1 as range 52
          if( ! refalrts::svar_left( context[59], context[54], context[55] ) )
            continue;
          // closed e.Name#1 as range 54
          //DEBUG: t.ErrorList#1: 5
          //DEBUG: s.LnNumBracket#1: 26
          //DEBUG: e.MultiBracket#1: 48
          //DEBUG: e.Scanned#1: 50
          //DEBUG: e.Tail#1: 52
          //DEBUG: s.LnNumName#1: 59
          //DEBUG: e.Name#1: 54

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.LnNumBracket#1/26 {REMOVED TILE} s.LnNumName#1/59 {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoParsePattern/4 AsIs: t.ErrorList#1/5 AsIs: (/9 AsIs: e.MultiBracket#1/48 HalfReuse: (/10 HalfReuse: # ADT-Brackets/13 } Tile{ HalfReuse: s.LnNumBracket1 #26/23 Reuse: # TkCloseADT/25 } Tile{ AsIs: e.Scanned#1/50 } Tile{ HalfReuse: )/35 AsIs: )/24 AsIs: (/56 HalfReuse: s.LnNumName1 #59/58 } (/60 Tile{ AsIs: e.Name#1/54 } Tile{ AsIs: )/14 } Tile{ AsIs: )/57 AsIs: e.Tail#1/52 AsIs: >/1 ]] }
          refalrts::alloc_open_bracket(vm, context[60]);
          refalrts::reinit_open_bracket(context[10]);
          refalrts::reinit_ident(context[13], identifiers[ident_ADTm_Brackets]);
          refalrts::reinit_svar( context[23], context[26] );
          refalrts::update_ident(context[25], identifiers[ident_TkCloseADT]);
          refalrts::reinit_close_bracket(context[35]);
          refalrts::reinit_svar( context[58], context[59] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[56], context[57] );
          refalrts::link_brackets( context[60], context[14] );
          refalrts::link_brackets( context[9], context[24] );
          refalrts::link_brackets( context[10], context[35] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[57];
          res = refalrts::splice_evar( res, context[14], context[14] );
          res = refalrts::splice_evar( res, context[54], context[55] );
          res = refalrts::splice_evar( res, context[60], context[60] );
          res = refalrts::splice_evar( res, context[35], context[58] );
          res = refalrts::splice_evar( res, context[50], context[51] );
          res = refalrts::splice_evar( res, context[23], context[25] );
          refalrts::splice_to_freelist_open( vm, context[13], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & DoParsePattern/4 t.ErrorList#1/5 (/9 e.MultiBracket#1/48 )/10 (/13 e.Scanned#1/50 )/14 (/23 # Open/25 s.LnNum#1/26 # TkOpenADT/35 )/24 e.Tail#1/52 >/1
        context[48] = context[42];
        context[49] = context[43];
        context[50] = context[44];
        context[51] = context[45];
        context[52] = context[46];
        context[53] = context[47];
        // closed e.MultiBracket#1 as range 48
        // closed e.Scanned#1 as range 50
        // closed e.Tail#1 as range 52
        //DEBUG: t.ErrorList#1: 5
        //DEBUG: s.LnNum#1: 26
        //DEBUG: e.MultiBracket#1: 48
        //DEBUG: e.Scanned#1: 50
        //DEBUG: e.Tail#1: 52

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } </54 & DoParsePattern/55 Tile{ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#1/5 HalfReuse: s.LnNum1 #26/9 }"Expected name after \"[\""/56 >/58 (/59 Tile{ AsIs: e.MultiBracket#1/48 } (/60 # ADT-Brackets/61 Tile{ HalfReuse: s.LnNum1 #26/10 HalfReuse: # TkCloseADT/13 AsIs: e.Scanned#1/50 AsIs: )/14 HalfReuse: )/23 HalfReuse: (/25 AsIs: s.LnNum#1/26 HalfReuse: (/35 HalfReuse: # UnnamedADT/24 } )/62 )/63 Tile{ AsIs: e.Tail#1/52 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[54]);
        refalrts::alloc_name(vm, context[55], functions[efunc_DoParsePattern]);
        refalrts::alloc_chars(vm, context[56], context[57], "Expected name after \"[\"", 23);
        refalrts::alloc_close_call(vm, context[58]);
        refalrts::alloc_open_bracket(vm, context[59]);
        refalrts::alloc_open_bracket(vm, context[60]);
        refalrts::alloc_ident(vm, context[61], identifiers[ident_ADTm_Brackets]);
        refalrts::alloc_close_bracket(vm, context[62]);
        refalrts::alloc_close_bracket(vm, context[63]);
        refalrts::update_name(context[4], functions[efunc_ELm_AddErrorAt]);
        refalrts::reinit_svar( context[9], context[26] );
        refalrts::reinit_svar( context[10], context[26] );
        refalrts::reinit_ident(context[13], identifiers[ident_TkCloseADT]);
        refalrts::reinit_close_bracket(context[23]);
        refalrts::reinit_open_bracket(context[25]);
        refalrts::reinit_open_bracket(context[35]);
        refalrts::reinit_ident(context[24], identifiers[ident_UnnamedADT]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[54] );
        refalrts::link_brackets( context[25], context[63] );
        refalrts::link_brackets( context[35], context[62] );
        refalrts::link_brackets( context[59], context[23] );
        refalrts::link_brackets( context[60], context[14] );
        refalrts::push_stack( vm, context[58] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[52], context[53] );
        res = refalrts::splice_evar( res, context[62], context[63] );
        res = refalrts::splice_evar( res, context[10], context[24] );
        res = refalrts::splice_evar( res, context[60], context[61] );
        res = refalrts::splice_evar( res, context[48], context[49] );
        res = refalrts::splice_evar( res, context[56], context[59] );
        res = refalrts::splice_evar( res, context[0], context[9] );
        res = refalrts::splice_evar( res, context[54], context[55] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoParsePattern/4 t.ErrorList#1/5 (/9 e.MultiBracket#1/42 )/10 (/13 e.Scanned#1/44 )/14 (/23 # Open/25 s.LnNum#1/26 # TkOpenCall/35 )/24 e.Tail#1/46 >/1
      context[42] = context[36];
      context[43] = context[37];
      context[44] = context[38];
      context[45] = context[39];
      context[46] = context[40];
      context[47] = context[41];
      if( ! refalrts::ident_term( identifiers[ident_TkOpenCall], context[35] ) )
        continue;
      // closed e.MultiBracket#1 as range 42
      // closed e.Scanned#1 as range 44
      // closed e.Tail#1 as range 46
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: s.LnNum#1: 26
      //DEBUG: e.MultiBracket#1: 42
      //DEBUG: e.Scanned#1: 44
      //DEBUG: e.Tail#1: 46

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.LnNum#1/26 {REMOVED TILE}
      //RESULT: Tile{ [[ } </48 & DoParsePattern/49 Tile{ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#1/5 HalfReuse: s.LnNum1 #26/9 }"Unexpected call bracket in pattern expression"/50 >/52 (/53 Tile{ AsIs: e.MultiBracket#1/42 } (/54 Tile{ Reuse: # Brackets/25 } Tile{ HalfReuse: s.LnNum1 #26/10 HalfReuse: # TkCloseCall/13 AsIs: e.Scanned#1/44 AsIs: )/14 HalfReuse: )/23 } Tile{ HalfReuse: (/35 AsIs: )/24 AsIs: e.Tail#1/46 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[48]);
      refalrts::alloc_name(vm, context[49], functions[efunc_DoParsePattern]);
      refalrts::alloc_chars(vm, context[50], context[51], "Unexpected call bracket in pattern expression", 45);
      refalrts::alloc_close_call(vm, context[52]);
      refalrts::alloc_open_bracket(vm, context[53]);
      refalrts::alloc_open_bracket(vm, context[54]);
      refalrts::update_name(context[4], functions[efunc_ELm_AddErrorAt]);
      refalrts::reinit_svar( context[9], context[26] );
      refalrts::update_ident(context[25], identifiers[ident_Brackets]);
      refalrts::reinit_svar( context[10], context[26] );
      refalrts::reinit_ident(context[13], identifiers[ident_TkCloseCall]);
      refalrts::reinit_close_bracket(context[23]);
      refalrts::reinit_open_bracket(context[35]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[48] );
      refalrts::link_brackets( context[35], context[24] );
      refalrts::link_brackets( context[53], context[23] );
      refalrts::link_brackets( context[54], context[14] );
      refalrts::push_stack( vm, context[52] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[35];
      res = refalrts::splice_evar( res, context[10], context[23] );
      res = refalrts::splice_evar( res, context[25], context[25] );
      res = refalrts::splice_evar( res, context[54], context[54] );
      res = refalrts::splice_evar( res, context[42], context[43] );
      res = refalrts::splice_evar( res, context[50], context[53] );
      res = refalrts::splice_evar( res, context[0], context[9] );
      res = refalrts::splice_evar( res, context[48], context[49] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoParsePattern/4 t.new#19/5 (/9 e.new#23/36 )/10 (/13 e.new#24/38 )/14 (/23 # Close/25 s.new#21/26 s.new#22/35 )/24 e.new#20/40 >/1
    context[36] = context[27];
    context[37] = context[28];
    context[38] = context[29];
    context[39] = context[30];
    context[40] = context[33];
    context[41] = context[34];
    if( ! refalrts::ident_term( identifiers[ident_Close], context[25] ) )
      continue;
    // closed e.new#23 as range 36
    // closed e.new#24 as range 38
    // closed e.new#20 as range 40
    do {
      // </0 & DoParsePattern/4 t.new#25/5 (/9 e.new#29/42 (/50 s.new#30/52 s.new#31/53 s.new#32/54 e.new#33/48 )/51 )/10 (/13 e.new#34/44 )/14 (/23 # Close/25 s.new#27/26 s.new#28/35 )/24 e.new#26/46 >/1
      context[42] = context[36];
      context[43] = context[37];
      context[44] = context[38];
      context[45] = context[39];
      context[46] = context[40];
      context[47] = context[41];
      context[48] = 0;
      context[49] = 0;
      context[50] = refalrts::brackets_right( context[48], context[49], context[42], context[43] );
      if( ! context[50] )
        continue;
      refalrts::bracket_pointers(context[50], context[51]);
      // closed e.new#29 as range 42
      // closed e.new#34 as range 44
      // closed e.new#26 as range 46
      if( ! refalrts::svar_left( context[52], context[48], context[49] ) )
        continue;
      if( ! refalrts::svar_left( context[53], context[48], context[49] ) )
        continue;
      if( ! refalrts::svar_left( context[54], context[48], context[49] ) )
        continue;
      // closed e.new#33 as range 48
      do {
        // </0 & DoParsePattern/4 t.ErrorList#1/5 (/9 e.MultiBracket#1/55 (/50 s.BracketsSign#1/52 s.InnerLnNum#1/53 s.CloseBracket#1/54 e.Scanned#1/57 )/51 )/10 (/13 e.InnerScanned#1/59 )/14 (/23 # Close/25 s.ClosedLnNum#1/26 s.CloseBracket#1/35 )/24 e.Tail#1/61 >/1
        context[55] = context[42];
        context[56] = context[43];
        context[57] = context[48];
        context[58] = context[49];
        context[59] = context[44];
        context[60] = context[45];
        context[61] = context[46];
        context[62] = context[47];
        if( ! refalrts::repeated_stvar_term( vm, context[35], context[54] ) )
          continue;
        // closed e.MultiBracket#1 as range 55
        // closed e.Scanned#1 as range 57
        // closed e.InnerScanned#1 as range 59
        // closed e.Tail#1 as range 61
        //DEBUG: t.ErrorList#1: 5
        //DEBUG: s.BracketsSign#1: 52
        //DEBUG: s.InnerLnNum#1: 53
        //DEBUG: s.CloseBracket#1: 54
        //DEBUG: s.ClosedLnNum#1: 26
        //DEBUG: e.MultiBracket#1: 55
        //DEBUG: e.Scanned#1: 57
        //DEBUG: e.InnerScanned#1: 59
        //DEBUG: e.Tail#1: 61

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.BracketsSign#1/52 s.InnerLnNum#1/53 s.CloseBracket#1/54 {REMOVED TILE} )/51 {REMOVED TILE} {REMOVED TILE} # Close/25 s.ClosedLnNum#1/26 s.CloseBracket#1/35 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoParsePattern/4 AsIs: t.ErrorList#1/5 AsIs: (/9 AsIs: e.MultiBracket#1/55 HalfReuse: )/50 } Tile{ AsIs: (/23 } Tile{ AsIs: e.Scanned#1/57 } Tile{ HalfReuse: (/10 HalfReuse: s.BracketsSign1 #52/13 AsIs: e.InnerScanned#1/59 AsIs: )/14 } Tile{ AsIs: )/24 AsIs: e.Tail#1/61 AsIs: >/1 ]] }
        refalrts::reinit_close_bracket(context[50]);
        refalrts::reinit_open_bracket(context[10]);
        refalrts::reinit_svar( context[13], context[52] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[23], context[24] );
        refalrts::link_brackets( context[10], context[14] );
        refalrts::link_brackets( context[9], context[50] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[24];
        res = refalrts::splice_evar( res, context[10], context[14] );
        res = refalrts::splice_evar( res, context[57], context[58] );
        res = refalrts::splice_evar( res, context[23], context[23] );
        refalrts::splice_to_freelist_open( vm, context[50], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoParsePattern/4 t.ErrorList#1/5 (/9 e.MultiBracket#1/55 (/50 s.BracketsSign#1/52 s.InnerLnNum#1/53 s.CloseBracket#1/54 e.Scanned#1/57 )/51 )/10 (/13 e.InnerScanned#1/59 )/14 (/23 # Close/25 s.LnNum#1/26 s.OtherCloseBracket#1/35 )/24 e.Tail#1/61 >/1
      context[55] = context[42];
      context[56] = context[43];
      context[57] = context[48];
      context[58] = context[49];
      context[59] = context[44];
      context[60] = context[45];
      context[61] = context[46];
      context[62] = context[47];
      // closed e.MultiBracket#1 as range 55
      // closed e.Scanned#1 as range 57
      // closed e.InnerScanned#1 as range 59
      // closed e.Tail#1 as range 61
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: s.BracketsSign#1: 52
      //DEBUG: s.InnerLnNum#1: 53
      //DEBUG: s.CloseBracket#1: 54
      //DEBUG: s.LnNum#1: 26
      //DEBUG: s.OtherCloseBracket#1: 35
      //DEBUG: e.MultiBracket#1: 55
      //DEBUG: e.Scanned#1: 57
      //DEBUG: e.InnerScanned#1: 59
      //DEBUG: e.Tail#1: 61

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.InnerLnNum#1/53 s.CloseBracket#1/54 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </63 & DoParsePattern/64 Tile{ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#1/5 HalfReuse: s.InnerLnNum1 #53/9 }"Unbalanced bracket \""/65 </67 & StrFromBracket/68 s.BracketsSign#1/52/69 >/70 '\"'/71 >/72 (/73 Tile{ AsIs: e.MultiBracket#1/55 } Tile{ AsIs: )/10 AsIs: (/13 } Tile{ AsIs: e.Scanned#1/57 } Tile{ AsIs: (/50 AsIs: s.BracketsSign#1/52 } Tile{ AsIs: e.InnerScanned#1/59 } Tile{ AsIs: )/51 } Tile{ AsIs: )/14 AsIs: (/23 AsIs: # Close/25 AsIs: s.LnNum#1/26 AsIs: s.OtherCloseBracket#1/35 AsIs: )/24 AsIs: e.Tail#1/61 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[63]);
      refalrts::alloc_name(vm, context[64], functions[efunc_DoParsePattern]);
      refalrts::alloc_chars(vm, context[65], context[66], "Unbalanced bracket \"", 20);
      refalrts::alloc_open_call(vm, context[67]);
      refalrts::alloc_name(vm, context[68], functions[efunc_StrFromBracket]);
      refalrts::copy_stvar(vm, context[69], context[52]);
      refalrts::alloc_close_call(vm, context[70]);
      refalrts::alloc_char(vm, context[71], '\"');
      refalrts::alloc_close_call(vm, context[72]);
      refalrts::alloc_open_bracket(vm, context[73]);
      refalrts::update_name(context[4], functions[efunc_ELm_AddErrorAt]);
      refalrts::reinit_svar( context[9], context[53] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[63] );
      refalrts::link_brackets( context[23], context[24] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::link_brackets( context[50], context[51] );
      refalrts::link_brackets( context[73], context[10] );
      refalrts::push_stack( vm, context[72] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[70] );
      refalrts::push_stack( vm, context[67] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[14];
      res = refalrts::splice_evar( res, context[51], context[51] );
      res = refalrts::splice_evar( res, context[59], context[60] );
      res = refalrts::splice_evar( res, context[50], context[52] );
      res = refalrts::splice_evar( res, context[57], context[58] );
      res = refalrts::splice_evar( res, context[10], context[13] );
      res = refalrts::splice_evar( res, context[55], context[56] );
      res = refalrts::splice_evar( res, context[65], context[73] );
      res = refalrts::splice_evar( res, context[0], context[9] );
      res = refalrts::splice_evar( res, context[63], context[64] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoParsePattern/4 t.ErrorList#1/5 (/9 )/10 (/13 e.Scanned#1/42 )/14 (/23 # Close/25 s.LnNum#1/26 s.CloseBracket#1/35 )/24 e.Tail#1/44 >/1
    context[42] = context[38];
    context[43] = context[39];
    context[44] = context[40];
    context[45] = context[41];
    if( ! refalrts::empty_seq( context[36], context[37] ) )
      continue;
    // closed e.Scanned#1 as range 42
    // closed e.Tail#1 as range 44
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: s.LnNum#1: 26
    //DEBUG: s.CloseBracket#1: 35
    //DEBUG: e.Scanned#1: 42
    //DEBUG: e.Tail#1: 44

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoParsePattern/4 } </46 & EL-AddErrorAt/47 Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: s.LnNum#1/26 }"Unb"/48 Tile{ HalfReuse: 'a'/23 HalfReuse: 'l'/25 }"anced bracket \""/50 </52 & StrFromBracket/53 Tile{ AsIs: s.CloseBracket#1/35 HalfReuse: >/24 } '\"'/54 >/55 Tile{ AsIs: (/9 AsIs: )/10 AsIs: (/13 AsIs: e.Scanned#1/42 AsIs: )/14 } Tile{ AsIs: e.Tail#1/44 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[46]);
    refalrts::alloc_name(vm, context[47], functions[efunc_ELm_AddErrorAt]);
    refalrts::alloc_chars(vm, context[48], context[49], "Unb", 3);
    refalrts::alloc_chars(vm, context[50], context[51], "anced bracket \"", 15);
    refalrts::alloc_open_call(vm, context[52]);
    refalrts::alloc_name(vm, context[53], functions[efunc_StrFromBracket]);
    refalrts::alloc_char(vm, context[54], '\"');
    refalrts::alloc_close_call(vm, context[55]);
    refalrts::reinit_char(context[23], 'a');
    refalrts::reinit_char(context[25], 'l');
    refalrts::reinit_close_call(context[24]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::push_stack( vm, context[55] );
    refalrts::push_stack( vm, context[46] );
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[52] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[44], context[45] );
    res = refalrts::splice_evar( res, context[9], context[14] );
    res = refalrts::splice_evar( res, context[54], context[55] );
    res = refalrts::splice_evar( res, context[35], context[24] );
    res = refalrts::splice_evar( res, context[50], context[53] );
    res = refalrts::splice_evar( res, context[23], context[25] );
    res = refalrts::splice_evar( res, context[48], context[49] );
    res = refalrts::splice_evar( res, context[26], context[26] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[46], context[47] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoParsePattern/4 t.ErrorList#1/5 (/9 e.MultiBracket#1/15 (/23 s.BracketsSign#1/25 s.InnerLnNum#1/26 s.CloseBracket#1/27 e.Scanned#1/21 )/24 )/10 (/13 e.InnerScanned#1/17 )/14 e.Tail#1/19 >/1
    context[15] = context[7];
    context[16] = context[8];
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[2];
    context[20] = context[3];
    context[21] = 0;
    context[22] = 0;
    context[23] = refalrts::brackets_right( context[21], context[22], context[15], context[16] );
    if( ! context[23] )
      continue;
    refalrts::bracket_pointers(context[23], context[24]);
    // closed e.MultiBracket#1 as range 15
    // closed e.InnerScanned#1 as range 17
    // closed e.Tail#1 as range 19
    if( ! refalrts::svar_left( context[25], context[21], context[22] ) )
      continue;
    if( ! refalrts::svar_left( context[26], context[21], context[22] ) )
      continue;
    if( ! refalrts::svar_left( context[27], context[21], context[22] ) )
      continue;
    // closed e.Scanned#1 as range 21
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: e.MultiBracket#1: 15
    //DEBUG: e.InnerScanned#1: 17
    //DEBUG: e.Tail#1: 19
    //DEBUG: s.BracketsSign#1: 25
    //DEBUG: s.InnerLnNum#1: 26
    //DEBUG: s.CloseBracket#1: 27
    //DEBUG: e.Scanned#1: 21

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.InnerLnNum#1/26 s.CloseBracket#1/27 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </28 & DoParsePattern/29 Tile{ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#1/5 HalfReuse: s.InnerLnNum1 #26/9 }"Unbalanced bracket \""/30 </32 & StrFromBracket/33 s.BracketsSign#1/25/34 >/35 '\"'/36 >/37 (/38 Tile{ AsIs: e.MultiBracket#1/15 } Tile{ AsIs: )/10 AsIs: (/13 } Tile{ AsIs: e.Scanned#1/21 } Tile{ AsIs: (/23 AsIs: s.BracketsSign#1/25 } Tile{ AsIs: e.InnerScanned#1/17 } Tile{ AsIs: )/24 } Tile{ AsIs: )/14 AsIs: e.Tail#1/19 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[28]);
    refalrts::alloc_name(vm, context[29], functions[efunc_DoParsePattern]);
    refalrts::alloc_chars(vm, context[30], context[31], "Unbalanced bracket \"", 20);
    refalrts::alloc_open_call(vm, context[32]);
    refalrts::alloc_name(vm, context[33], functions[efunc_StrFromBracket]);
    refalrts::copy_stvar(vm, context[34], context[25]);
    refalrts::alloc_close_call(vm, context[35]);
    refalrts::alloc_char(vm, context[36], '\"');
    refalrts::alloc_close_call(vm, context[37]);
    refalrts::alloc_open_bracket(vm, context[38]);
    refalrts::update_name(context[4], functions[efunc_ELm_AddErrorAt]);
    refalrts::reinit_svar( context[9], context[26] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[28] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[23], context[24] );
    refalrts::link_brackets( context[38], context[10] );
    refalrts::push_stack( vm, context[37] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[35] );
    refalrts::push_stack( vm, context[32] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[14];
    res = refalrts::splice_evar( res, context[24], context[24] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[23], context[25] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[10], context[13] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[30], context[38] );
    res = refalrts::splice_evar( res, context[0], context[9] );
    res = refalrts::splice_evar( res, context[28], context[29] );
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

static refalrts::NativeReference nat_ref_DoParsePattern("DoParsePattern", COOKIE1_, COOKIE2_, func_DoParsePattern);


static refalrts::FnResult func_StrFromBracket(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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
    if( ! refalrts::ident_term( identifiers[ident_TkOpenBracket], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & StrFromBracket/4 # TkOpenBracket/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '('/1 ]] }
    refalrts::reinit_char(context[1], '(');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & StrFromBracket/4 # TkCloseBracket/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkCloseBracket], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & StrFromBracket/4 # TkCloseBracket/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: ')'/1 ]] }
    refalrts::reinit_char(context[1], ')');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & StrFromBracket/4 # TkOpenCall/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkOpenCall], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & StrFromBracket/4 # TkOpenCall/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '<'/1 ]] }
    refalrts::reinit_char(context[1], '<');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & StrFromBracket/4 # TkCloseCall/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkCloseCall], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & StrFromBracket/4 # TkCloseCall/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '>'/1 ]] }
    refalrts::reinit_char(context[1], '>');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & StrFromBracket/4 # TkOpenADT/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkOpenADT], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & StrFromBracket/4 # TkOpenADT/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '['/1 ]] }
    refalrts::reinit_char(context[1], '[');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & StrFromBracket/4 # TkCloseADT/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkCloseADT], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & StrFromBracket/4 # TkCloseADT/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: ']'/1 ]] }
    refalrts::reinit_char(context[1], ']');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & StrFromBracket/4 # Brackets/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_Brackets], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & StrFromBracket/4 # Brackets/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '('/1 ]] }
    refalrts::reinit_char(context[1], '(');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & StrFromBracket/4 # ADT-Brackets/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & StrFromBracket/4 # ADT-Brackets/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '['/1 ]] }
    refalrts::reinit_char(context[1], '[');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & StrFromBracket/4 # CallBrackets/5 >/1
  if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & StrFromBracket/4 # CallBrackets/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: '<'/1 ]] }
  refalrts::reinit_char(context[1], '<');
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_StrFromBracket("StrFromBracket", COOKIE1_, COOKIE2_, func_StrFromBracket);


static refalrts::FnResult func_gen_ParseResult_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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

static refalrts::NativeReference nat_ref_gen_ParseResult_A2("ParseResult=2", COOKIE1_, COOKIE2_, func_gen_ParseResult_A2);


static refalrts::FnResult func_gen_ParseResult_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseResult=2/4 } Tile{ AsIs: (/9 AsIs: e.Result#2/7 AsIs: )/10 } </11 & ParseBlocks/12 Tile{ AsIs: t.ErrorList#2/5 } Tile{ AsIs: e.Tail#2/2 } >/13 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_ParseBlocks]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_gen_ParseResult_A2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseResult_A1("ParseResult=1", COOKIE1_, COOKIE2_, func_gen_ParseResult_A1);


static refalrts::FnResult func_ParseResult(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_DoParseResult]);
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_close_bracket(vm, context[10]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_close_bracket(vm, context[12]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_gen_ParseResult_A1]);
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

static refalrts::NativeReference nat_ref_ParseResult("ParseResult", COOKIE1_, COOKIE2_, func_ParseResult);


static refalrts::FnResult func_gen_ParseBlocks_S1A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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
  refalrts::reinit_open_bracket(context[4]);
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

static refalrts::NativeReference nat_ref_gen_ParseBlocks_S1A2("ParseBlocks$1=2", COOKIE1_, COOKIE2_, func_gen_ParseBlocks_S1A2);


static refalrts::FnResult func_gen_ParseBlocks_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseBlocks$1=2/4 AsIs: (/7 AsIs: e.Block#2/5 AsIs: )/8 } </11 & ParseBlocks/12 Tile{ AsIs: t.ErrorList#2/9 AsIs: e.Tail#2/2 AsIs: >/1 } >/13 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_ParseBlocks]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_gen_ParseBlocks_S1A2]);
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[9], context[1] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseBlocks_S1A1("ParseBlocks$1=1", COOKIE1_, COOKIE2_, func_gen_ParseBlocks_S1A1);


static refalrts::FnResult func_ParseBlocks(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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
    context[13] = refalrts::ident_left( identifiers[ident_TkColon], context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[7], context[8] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left( identifiers[ident_TkOpenBlock], context[14], context[15] );
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
    refalrts::update_name(context[4], functions[efunc_gen_ParseBlocks_S1A1]);
    refalrts::reinit_open_call(context[11]);
    refalrts::reinit_name(context[13], functions[efunc_ParseBlock]);
    refalrts::reinit_close_call(context[17]);
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
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_close_bracket(context[4]);
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

static refalrts::NativeReference nat_ref_ParseBlocks("ParseBlocks", COOKIE1_, COOKIE2_, func_ParseBlocks);


static refalrts::FnResult func_gen_DoParseResult_S10L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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
    if( ! refalrts::ident_term( identifiers[ident_TkOpenBracket], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoParseResult$10\1/4 # TkOpenBracket/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Brackets/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_Brackets]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoParseResult$10\1/4 # TkOpenCall/5 >/1
  if( ! refalrts::ident_term( identifiers[ident_TkOpenCall], context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DoParseResult$10\1/4 # TkOpenCall/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # CallBrackets/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_CallBrackets]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoParseResult_S10L1("DoParseResult$10\\1", COOKIE1_, COOKIE2_, func_gen_DoParseResult_S10L1);


static refalrts::FnResult func_gen_DoParseResult_S10L2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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
    if( ! refalrts::ident_term( identifiers[ident_TkOpenBracket], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoParseResult$10\2/4 # TkOpenBracket/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # TkCloseBracket/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_TkCloseBracket]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoParseResult$10\2/4 # TkOpenCall/5 >/1
  if( ! refalrts::ident_term( identifiers[ident_TkOpenCall], context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DoParseResult$10\2/4 # TkOpenCall/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # TkCloseCall/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_TkCloseCall]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoParseResult_S10L2("DoParseResult$10\\2", COOKIE1_, COOKIE2_, func_gen_DoParseResult_S10L2);


static refalrts::FnResult func_gen_DoParseResult_S12L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
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
  refalrts::alloc_close_bracket(vm, context[19]);
  refalrts::update_name(context[4], functions[efunc_DoParseResult]);
  refalrts::reinit_open_bracket(context[12]);
  refalrts::reinit_ident(context[15], identifiers[ident_Closure]);
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

static refalrts::NativeReference nat_ref_gen_DoParseResult_S12L1("DoParseResult$12\\1", COOKIE1_, COOKIE2_, func_gen_DoParseResult_S12L1);


static refalrts::FnResult func_DoParseResult(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 70 elems
  refalrts::Iter context[70];
  refalrts::zeros( context, 70 );
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
    // </0 & DoParseResult/4 t.new#5/5 (/9 e.new#10/15 )/10 (/13 e.new#11/17 )/14 (/23 s.new#6/25 s.new#7/26 e.new#8/21 )/24 e.new#9/19 >/1
    context[15] = context[7];
    context[16] = context[8];
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[2];
    context[20] = context[3];
    context[21] = 0;
    context[22] = 0;
    context[23] = refalrts::brackets_left( context[21], context[22], context[19], context[20] );
    if( ! context[23] )
      continue;
    refalrts::bracket_pointers(context[23], context[24]);
    // closed e.new#10 as range 15
    // closed e.new#11 as range 17
    // closed e.new#9 as range 19
    if( ! refalrts::svar_left( context[25], context[21], context[22] ) )
      continue;
    if( ! refalrts::svar_left( context[26], context[21], context[22] ) )
      continue;
    // closed e.new#8 as range 21
    do {
      // </0 & DoParseResult/4 t.new#12/5 (/9 e.new#17/27 )/10 (/13 e.new#18/29 )/14 (/23 s.new#14/25 s.new#15/26 s.new#16/35 )/24 e.new#13/33 >/1
      context[27] = context[15];
      context[28] = context[16];
      context[29] = context[17];
      context[30] = context[18];
      context[31] = context[21];
      context[32] = context[22];
      context[33] = context[19];
      context[34] = context[20];
      // closed e.new#17 as range 27
      // closed e.new#18 as range 29
      // closed e.new#13 as range 33
      if( ! refalrts::svar_left( context[35], context[31], context[32] ) )
        continue;
      if( ! refalrts::empty_seq( context[31], context[32] ) )
        continue;
      do {
        // </0 & DoParseResult/4 t.ErrorList#1/5 (/9 e.MultiBracket#1/36 )/10 (/13 e.Scanned#1/38 )/14 (/23 # TkChar/25 s.LnNum#1/26 s.Char#1/35 )/24 e.Tail#1/40 >/1
        context[36] = context[27];
        context[37] = context[28];
        context[38] = context[29];
        context[39] = context[30];
        context[40] = context[33];
        context[41] = context[34];
        if( ! refalrts::ident_term( identifiers[ident_TkChar], context[25] ) )
          continue;
        // closed e.MultiBracket#1 as range 36
        // closed e.Scanned#1 as range 38
        // closed e.Tail#1 as range 40
        //DEBUG: t.ErrorList#1: 5
        //DEBUG: s.LnNum#1: 26
        //DEBUG: s.Char#1: 35
        //DEBUG: e.MultiBracket#1: 36
        //DEBUG: e.Scanned#1: 38
        //DEBUG: e.Tail#1: 40

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.LnNum#1/26 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoParseResult/4 AsIs: t.ErrorList#1/5 AsIs: (/9 AsIs: e.MultiBracket#1/36 AsIs: )/10 AsIs: (/13 AsIs: e.Scanned#1/38 HalfReuse: (/14 HalfReuse: # Symbol/23 Reuse: # Char/25 } Tile{ AsIs: s.Char#1/35 } )/42 Tile{ AsIs: )/24 AsIs: e.Tail#1/40 AsIs: >/1 ]] }
        refalrts::alloc_close_bracket(vm, context[42]);
        refalrts::reinit_open_bracket(context[14]);
        refalrts::reinit_ident(context[23], identifiers[ident_Symbol]);
        refalrts::update_ident(context[25], identifiers[ident_Char]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[13], context[24] );
        refalrts::link_brackets( context[14], context[42] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[24];
        res = refalrts::splice_evar( res, context[42], context[42] );
        res = refalrts::splice_evar( res, context[35], context[35] );
        refalrts::splice_to_freelist_open( vm, context[25], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoParseResult/4 t.ErrorList#1/5 (/9 e.MultiBracket#1/36 )/10 (/13 e.Scanned#1/38 )/14 (/23 # TkNumber/25 s.LnNum#1/26 s.Number#1/35 )/24 e.Tail#1/40 >/1
      context[36] = context[27];
      context[37] = context[28];
      context[38] = context[29];
      context[39] = context[30];
      context[40] = context[33];
      context[41] = context[34];
      if( ! refalrts::ident_term( identifiers[ident_TkNumber], context[25] ) )
        continue;
      // closed e.MultiBracket#1 as range 36
      // closed e.Scanned#1 as range 38
      // closed e.Tail#1 as range 40
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: s.LnNum#1: 26
      //DEBUG: s.Number#1: 35
      //DEBUG: e.MultiBracket#1: 36
      //DEBUG: e.Scanned#1: 38
      //DEBUG: e.Tail#1: 40

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.LnNum#1/26 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoParseResult/4 AsIs: t.ErrorList#1/5 AsIs: (/9 AsIs: e.MultiBracket#1/36 AsIs: )/10 AsIs: (/13 AsIs: e.Scanned#1/38 HalfReuse: (/14 HalfReuse: # Symbol/23 Reuse: # Number/25 } Tile{ AsIs: s.Number#1/35 } )/42 Tile{ AsIs: )/24 AsIs: e.Tail#1/40 AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[42]);
      refalrts::reinit_open_bracket(context[14]);
      refalrts::reinit_ident(context[23], identifiers[ident_Symbol]);
      refalrts::update_ident(context[25], identifiers[ident_Number]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[13], context[24] );
      refalrts::link_brackets( context[14], context[42] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[24];
      res = refalrts::splice_evar( res, context[42], context[42] );
      res = refalrts::splice_evar( res, context[35], context[35] );
      refalrts::splice_to_freelist_open( vm, context[25], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoParseResult/4 t.ErrorList#1/5 (/9 e.MultiBracket#1/27 )/10 (/13 e.Scanned#1/29 )/14 (/23 # TkName/25 s.LnNum#1/26 e.Name#1/31 )/24 e.Tail#1/33 >/1
      context[27] = context[15];
      context[28] = context[16];
      context[29] = context[17];
      context[30] = context[18];
      context[31] = context[21];
      context[32] = context[22];
      context[33] = context[19];
      context[34] = context[20];
      if( ! refalrts::ident_term( identifiers[ident_TkName], context[25] ) )
        continue;
      // closed e.MultiBracket#1 as range 27
      // closed e.Scanned#1 as range 29
      // closed e.Name#1 as range 31
      // closed e.Tail#1 as range 33
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: s.LnNum#1: 26
      //DEBUG: e.MultiBracket#1: 27
      //DEBUG: e.Scanned#1: 29
      //DEBUG: e.Name#1: 31
      //DEBUG: e.Tail#1: 33

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoParseResult/4 AsIs: t.ErrorList#1/5 AsIs: (/9 AsIs: e.MultiBracket#1/27 AsIs: )/10 AsIs: (/13 AsIs: e.Scanned#1/29 HalfReuse: (/14 HalfReuse: # Symbol/23 Reuse: # Name/25 AsIs: s.LnNum#1/26 AsIs: e.Name#1/31 AsIs: )/24 } )/35 Tile{ AsIs: e.Tail#1/33 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[35]);
      refalrts::reinit_open_bracket(context[14]);
      refalrts::reinit_ident(context[23], identifiers[ident_Symbol]);
      refalrts::update_ident(context[25], identifiers[ident_Name]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[13], context[35] );
      refalrts::link_brackets( context[14], context[24] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[33], context[34] );
      res = refalrts::splice_evar( res, context[35], context[35] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoParseResult/4 t.new#12/5 (/9 e.new#15/27 )/10 (/13 e.new#16/29 )/14 (/23 # TkIdentMarker/25 s.new#14/26 )/24 e.new#13/31 >/1
      context[27] = context[15];
      context[28] = context[16];
      context[29] = context[17];
      context[30] = context[18];
      context[31] = context[19];
      context[32] = context[20];
      if( ! refalrts::ident_term( identifiers[ident_TkIdentMarker], context[25] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;
      // closed e.new#15 as range 27
      // closed e.new#16 as range 29
      // closed e.new#13 as range 31
      do {
        // </0 & DoParseResult/4 t.ErrorList#1/5 (/9 e.MultiBracket#1/33 )/10 (/13 e.Scanned#1/35 )/14 (/23 # TkIdentMarker/25 s.MarkerLnNum#1/26 )/24 (/41 # TkName/43 s.NameLnNum#1/44 e.Name#1/39 )/42 e.Tail#1/37 >/1
        context[33] = context[27];
        context[34] = context[28];
        context[35] = context[29];
        context[36] = context[30];
        context[37] = context[31];
        context[38] = context[32];
        context[39] = 0;
        context[40] = 0;
        context[41] = refalrts::brackets_left( context[39], context[40], context[37], context[38] );
        if( ! context[41] )
          continue;
        refalrts::bracket_pointers(context[41], context[42]);
        context[43] = refalrts::ident_left( identifiers[ident_TkName], context[39], context[40] );
        if( ! context[43] )
          continue;
        // closed e.MultiBracket#1 as range 33
        // closed e.Scanned#1 as range 35
        // closed e.Tail#1 as range 37
        if( ! refalrts::svar_left( context[44], context[39], context[40] ) )
          continue;
        // closed e.Name#1 as range 39
        //DEBUG: t.ErrorList#1: 5
        //DEBUG: s.MarkerLnNum#1: 26
        //DEBUG: e.MultiBracket#1: 33
        //DEBUG: e.Scanned#1: 35
        //DEBUG: e.Tail#1: 37
        //DEBUG: s.NameLnNum#1: 44
        //DEBUG: e.Name#1: 39

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.MarkerLnNum#1/26 {REMOVED TILE} (/41 # TkName/43 s.NameLnNum#1/44 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoParseResult/4 AsIs: t.ErrorList#1/5 AsIs: (/9 AsIs: e.MultiBracket#1/33 AsIs: )/10 AsIs: (/13 AsIs: e.Scanned#1/35 HalfReuse: (/14 HalfReuse: # Symbol/23 Reuse: # Identifier/25 } Tile{ AsIs: e.Name#1/39 } Tile{ AsIs: )/24 } Tile{ AsIs: )/42 AsIs: e.Tail#1/37 AsIs: >/1 ]] }
        refalrts::reinit_open_bracket(context[14]);
        refalrts::reinit_ident(context[23], identifiers[ident_Symbol]);
        refalrts::update_ident(context[25], identifiers[ident_Identifier]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[13], context[42] );
        refalrts::link_brackets( context[14], context[24] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[42];
        res = refalrts::splice_evar( res, context[24], context[24] );
        res = refalrts::splice_evar( res, context[39], context[40] );
        refalrts::splice_to_freelist_open( vm, context[25], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoParseResult/4 t.ErrorList#1/5 (/9 e.MultiBracket#1/33 )/10 (/13 e.Scanned#1/35 )/14 (/23 # TkIdentMarker/25 s.LnNum#1/26 )/24 e.Tail#1/37 >/1
      context[33] = context[27];
      context[34] = context[28];
      context[35] = context[29];
      context[36] = context[30];
      context[37] = context[31];
      context[38] = context[32];
      // closed e.MultiBracket#1 as range 33
      // closed e.Scanned#1 as range 35
      // closed e.Tail#1 as range 37
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: s.LnNum#1: 26
      //DEBUG: e.MultiBracket#1: 33
      //DEBUG: e.Scanned#1: 35
      //DEBUG: e.Tail#1: 37

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoParseResult/4 } </39 & EL-AddErrorAt/40 Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: s.LnNum#1/26 HalfReuse: 'M'/24 }"is"/41 Tile{ HalfReuse: 's'/23 HalfReuse: 'e'/25 }"d name after \"#\""/43 >/45 Tile{ AsIs: (/9 AsIs: e.MultiBracket#1/33 AsIs: )/10 AsIs: (/13 AsIs: e.Scanned#1/35 AsIs: )/14 } Tile{ AsIs: e.Tail#1/37 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[39]);
      refalrts::alloc_name(vm, context[40], functions[efunc_ELm_AddErrorAt]);
      refalrts::alloc_chars(vm, context[41], context[42], "is", 2);
      refalrts::alloc_chars(vm, context[43], context[44], "d name after \"#\"", 16);
      refalrts::alloc_close_call(vm, context[45]);
      refalrts::reinit_char(context[24], 'M');
      refalrts::reinit_char(context[23], 's');
      refalrts::reinit_char(context[25], 'e');
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::push_stack( vm, context[45] );
      refalrts::push_stack( vm, context[39] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[37], context[38] );
      res = refalrts::splice_evar( res, context[9], context[14] );
      res = refalrts::splice_evar( res, context[43], context[45] );
      res = refalrts::splice_evar( res, context[23], context[25] );
      res = refalrts::splice_evar( res, context[41], context[42] );
      res = refalrts::splice_evar( res, context[26], context[24] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[39], context[40] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoParseResult/4 t.ErrorList#1/5 (/9 e.MultiBracket#1/27 )/10 (/13 e.Scanned#1/29 )/14 (/23 # TkCompound/25 s.LnNum#1/26 e.Name#1/31 )/24 e.Tail#1/33 >/1
      context[27] = context[15];
      context[28] = context[16];
      context[29] = context[17];
      context[30] = context[18];
      context[31] = context[21];
      context[32] = context[22];
      context[33] = context[19];
      context[34] = context[20];
      if( ! refalrts::ident_term( identifiers[ident_TkCompound], context[25] ) )
        continue;
      // closed e.MultiBracket#1 as range 27
      // closed e.Scanned#1 as range 29
      // closed e.Name#1 as range 31
      // closed e.Tail#1 as range 33
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: s.LnNum#1: 26
      //DEBUG: e.MultiBracket#1: 27
      //DEBUG: e.Scanned#1: 29
      //DEBUG: e.Name#1: 31
      //DEBUG: e.Tail#1: 33

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.LnNum#1/26 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoParseResult/4 AsIs: t.ErrorList#1/5 AsIs: (/9 AsIs: e.MultiBracket#1/27 AsIs: )/10 AsIs: (/13 AsIs: e.Scanned#1/29 HalfReuse: (/14 HalfReuse: # Symbol/23 Reuse: # Identifier/25 } Tile{ AsIs: e.Name#1/31 } )/35 Tile{ AsIs: )/24 AsIs: e.Tail#1/33 AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[35]);
      refalrts::reinit_open_bracket(context[14]);
      refalrts::reinit_ident(context[23], identifiers[ident_Symbol]);
      refalrts::update_ident(context[25], identifiers[ident_Identifier]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[13], context[24] );
      refalrts::link_brackets( context[14], context[35] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[24];
      res = refalrts::splice_evar( res, context[35], context[35] );
      res = refalrts::splice_evar( res, context[31], context[32] );
      refalrts::splice_to_freelist_open( vm, context[25], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoParseResult/4 t.new#12/5 (/9 e.new#18/27 )/10 (/13 e.new#19/29 )/14 (/23 s.new#14/25 s.new#15/26 s.new#16/35 e.new#17/31 )/24 e.new#13/33 >/1
      context[27] = context[15];
      context[28] = context[16];
      context[29] = context[17];
      context[30] = context[18];
      context[31] = context[21];
      context[32] = context[22];
      context[33] = context[19];
      context[34] = context[20];
      // closed e.new#18 as range 27
      // closed e.new#19 as range 29
      // closed e.new#13 as range 33
      if( ! refalrts::svar_left( context[35], context[31], context[32] ) )
        continue;
      // closed e.new#17 as range 31
      do {
        // </0 & DoParseResult/4 t.ErrorList#1/5 (/9 e.MultiBracket#1/36 )/10 (/13 e.Scanned#1/38 )/14 (/23 # TkVariable/25 s.LnNum#1/26 s.Mode#1/35 e.Index#1/40 )/24 e.Tail#1/42 >/1
        context[36] = context[27];
        context[37] = context[28];
        context[38] = context[29];
        context[39] = context[30];
        context[40] = context[31];
        context[41] = context[32];
        context[42] = context[33];
        context[43] = context[34];
        if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[25] ) )
          continue;
        // closed e.MultiBracket#1 as range 36
        // closed e.Scanned#1 as range 38
        // closed e.Index#1 as range 40
        // closed e.Tail#1 as range 42
        //DEBUG: t.ErrorList#1: 5
        //DEBUG: s.LnNum#1: 26
        //DEBUG: s.Mode#1: 35
        //DEBUG: e.MultiBracket#1: 36
        //DEBUG: e.Scanned#1: 38
        //DEBUG: e.Index#1: 40
        //DEBUG: e.Tail#1: 42

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.LnNum#1/26 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoParseResult/4 AsIs: t.ErrorList#1/5 AsIs: (/9 AsIs: e.MultiBracket#1/36 AsIs: )/10 AsIs: (/13 AsIs: e.Scanned#1/38 HalfReuse: (/14 HalfReuse: # TkVariable/23 HalfReuse: s.LnNum1 #26/25 } Tile{ AsIs: s.Mode#1/35 } Tile{ AsIs: e.Index#1/40 } )/44 Tile{ AsIs: )/24 AsIs: e.Tail#1/42 AsIs: >/1 ]] }
        refalrts::alloc_close_bracket(vm, context[44]);
        refalrts::reinit_open_bracket(context[14]);
        refalrts::reinit_ident(context[23], identifiers[ident_TkVariable]);
        refalrts::reinit_svar( context[25], context[26] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[13], context[24] );
        refalrts::link_brackets( context[14], context[44] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[24];
        res = refalrts::splice_evar( res, context[44], context[44] );
        res = refalrts::splice_evar( res, context[40], context[41] );
        res = refalrts::splice_evar( res, context[35], context[35] );
        refalrts::splice_to_freelist_open( vm, context[25], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoParseResult/4 t.new#20/5 (/9 e.new#25/36 )/10 (/13 e.new#26/38 )/14 (/23 s.new#22/25 s.new#23/26 s.new#24/35 )/24 e.new#21/40 >/1
      context[36] = context[27];
      context[37] = context[28];
      context[38] = context[29];
      context[39] = context[30];
      context[40] = context[33];
      context[41] = context[34];
      if( ! refalrts::empty_seq( context[31], context[32] ) )
        continue;
      // closed e.new#25 as range 36
      // closed e.new#26 as range 38
      // closed e.new#21 as range 40
      do {
        // </0 & DoParseResult/4 t.new#27/5 (/9 e.new#31/42 )/10 (/13 e.new#32/44 )/14 (/23 # Open/25 s.new#29/26 s.new#30/35 )/24 e.new#28/46 >/1
        context[42] = context[36];
        context[43] = context[37];
        context[44] = context[38];
        context[45] = context[39];
        context[46] = context[40];
        context[47] = context[41];
        if( ! refalrts::ident_term( identifiers[ident_Open], context[25] ) )
          continue;
        // closed e.new#31 as range 42
        // closed e.new#32 as range 44
        // closed e.new#28 as range 46
        do {
          // </0 & DoParseResult/4 t.new#33/5 (/9 e.new#36/48 )/10 (/13 e.new#37/50 )/14 (/23 # Open/25 s.new#35/26 # TkOpenADT/35 )/24 e.new#34/52 >/1
          context[48] = context[42];
          context[49] = context[43];
          context[50] = context[44];
          context[51] = context[45];
          context[52] = context[46];
          context[53] = context[47];
          if( ! refalrts::ident_term( identifiers[ident_TkOpenADT], context[35] ) )
            continue;
          // closed e.new#36 as range 48
          // closed e.new#37 as range 50
          // closed e.new#34 as range 52
          do {
            // </0 & DoParseResult/4 t.ErrorList#1/5 (/9 e.MultiBracket#1/54 )/10 (/13 e.Scanned#1/56 )/14 (/23 # Open/25 s.LnNumADT#1/26 # TkOpenADT/35 )/24 (/62 # TkName/64 s.LnNumName#1/65 e.Name#1/60 )/63 e.Tail#1/58 >/1
            context[54] = context[48];
            context[55] = context[49];
            context[56] = context[50];
            context[57] = context[51];
            context[58] = context[52];
            context[59] = context[53];
            context[60] = 0;
            context[61] = 0;
            context[62] = refalrts::brackets_left( context[60], context[61], context[58], context[59] );
            if( ! context[62] )
              continue;
            refalrts::bracket_pointers(context[62], context[63]);
            context[64] = refalrts::ident_left( identifiers[ident_TkName], context[60], context[61] );
            if( ! context[64] )
              continue;
            // closed e.MultiBracket#1 as range 54
            // closed e.Scanned#1 as range 56
            // closed e.Tail#1 as range 58
            if( ! refalrts::svar_left( context[65], context[60], context[61] ) )
              continue;
            // closed e.Name#1 as range 60
            //DEBUG: t.ErrorList#1: 5
            //DEBUG: s.LnNumADT#1: 26
            //DEBUG: e.MultiBracket#1: 54
            //DEBUG: e.Scanned#1: 56
            //DEBUG: e.Tail#1: 58
            //DEBUG: s.LnNumName#1: 65
            //DEBUG: e.Name#1: 60

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.LnNumADT#1/26 {REMOVED TILE} s.LnNumName#1/65 {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoParseResult/4 AsIs: t.ErrorList#1/5 AsIs: (/9 AsIs: e.MultiBracket#1/54 HalfReuse: (/10 HalfReuse: # ADT-Brackets/13 } Tile{ HalfReuse: s.LnNumADT1 #26/23 Reuse: # TkCloseADT/25 } Tile{ AsIs: e.Scanned#1/56 } Tile{ HalfReuse: )/35 AsIs: )/24 AsIs: (/62 HalfReuse: s.LnNumName1 #65/64 } (/66 Tile{ AsIs: e.Name#1/60 } Tile{ AsIs: )/14 } Tile{ AsIs: )/63 AsIs: e.Tail#1/58 AsIs: >/1 ]] }
            refalrts::alloc_open_bracket(vm, context[66]);
            refalrts::reinit_open_bracket(context[10]);
            refalrts::reinit_ident(context[13], identifiers[ident_ADTm_Brackets]);
            refalrts::reinit_svar( context[23], context[26] );
            refalrts::update_ident(context[25], identifiers[ident_TkCloseADT]);
            refalrts::reinit_close_bracket(context[35]);
            refalrts::reinit_svar( context[64], context[65] );
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[62], context[63] );
            refalrts::link_brackets( context[66], context[14] );
            refalrts::link_brackets( context[9], context[24] );
            refalrts::link_brackets( context[10], context[35] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[63];
            res = refalrts::splice_evar( res, context[14], context[14] );
            res = refalrts::splice_evar( res, context[60], context[61] );
            res = refalrts::splice_evar( res, context[66], context[66] );
            res = refalrts::splice_evar( res, context[35], context[64] );
            res = refalrts::splice_evar( res, context[56], context[57] );
            res = refalrts::splice_evar( res, context[23], context[25] );
            refalrts::splice_to_freelist_open( vm, context[13], res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & DoParseResult/4 t.ErrorList#1/5 (/9 e.MultiBracket#1/54 )/10 (/13 e.Scanned#1/56 )/14 (/23 # Open/25 s.LnNum#1/26 # TkOpenADT/35 )/24 e.Tail#1/58 >/1
          context[54] = context[48];
          context[55] = context[49];
          context[56] = context[50];
          context[57] = context[51];
          context[58] = context[52];
          context[59] = context[53];
          // closed e.MultiBracket#1 as range 54
          // closed e.Scanned#1 as range 56
          // closed e.Tail#1 as range 58
          //DEBUG: t.ErrorList#1: 5
          //DEBUG: s.LnNum#1: 26
          //DEBUG: e.MultiBracket#1: 54
          //DEBUG: e.Scanned#1: 56
          //DEBUG: e.Tail#1: 58

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } </60 & DoParseResult/61 Tile{ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#1/5 HalfReuse: s.LnNum1 #26/9 }"Expected name after \"[\""/62 >/64 (/65 Tile{ AsIs: e.MultiBracket#1/54 } (/66 # ADT-Brackets/67 Tile{ HalfReuse: s.LnNum1 #26/10 HalfReuse: # TkCloseADT/13 AsIs: e.Scanned#1/56 AsIs: )/14 HalfReuse: )/23 HalfReuse: (/25 AsIs: s.LnNum#1/26 HalfReuse: (/35 HalfReuse: # UnnamedADT/24 } )/68 )/69 Tile{ AsIs: e.Tail#1/58 } Tile{ AsIs: >/1 ]] }
          refalrts::alloc_open_call(vm, context[60]);
          refalrts::alloc_name(vm, context[61], functions[efunc_DoParseResult]);
          refalrts::alloc_chars(vm, context[62], context[63], "Expected name after \"[\"", 23);
          refalrts::alloc_close_call(vm, context[64]);
          refalrts::alloc_open_bracket(vm, context[65]);
          refalrts::alloc_open_bracket(vm, context[66]);
          refalrts::alloc_ident(vm, context[67], identifiers[ident_ADTm_Brackets]);
          refalrts::alloc_close_bracket(vm, context[68]);
          refalrts::alloc_close_bracket(vm, context[69]);
          refalrts::update_name(context[4], functions[efunc_ELm_AddErrorAt]);
          refalrts::reinit_svar( context[9], context[26] );
          refalrts::reinit_svar( context[10], context[26] );
          refalrts::reinit_ident(context[13], identifiers[ident_TkCloseADT]);
          refalrts::reinit_close_bracket(context[23]);
          refalrts::reinit_open_bracket(context[25]);
          refalrts::reinit_open_bracket(context[35]);
          refalrts::reinit_ident(context[24], identifiers[ident_UnnamedADT]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[60] );
          refalrts::link_brackets( context[25], context[69] );
          refalrts::link_brackets( context[35], context[68] );
          refalrts::link_brackets( context[65], context[23] );
          refalrts::link_brackets( context[66], context[14] );
          refalrts::push_stack( vm, context[64] );
          refalrts::push_stack( vm, context[0] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[58], context[59] );
          res = refalrts::splice_evar( res, context[68], context[69] );
          res = refalrts::splice_evar( res, context[10], context[24] );
          res = refalrts::splice_evar( res, context[66], context[67] );
          res = refalrts::splice_evar( res, context[54], context[55] );
          res = refalrts::splice_evar( res, context[62], context[65] );
          res = refalrts::splice_evar( res, context[0], context[9] );
          res = refalrts::splice_evar( res, context[60], context[61] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & DoParseResult/4 t.ErrorList#1/5 (/9 e.MultiBracket#1/48 )/10 (/13 e.Scanned#1/50 )/14 (/23 # Open/25 s.LnNum#1/26 # TkOpenBracket/35 )/24 e.Tail#1/52 >/1
          context[48] = context[42];
          context[49] = context[43];
          context[50] = context[44];
          context[51] = context[45];
          context[52] = context[46];
          context[53] = context[47];
          if( ! refalrts::ident_term( identifiers[ident_TkOpenBracket], context[35] ) )
            continue;
          // closed e.MultiBracket#1 as range 48
          // closed e.Scanned#1 as range 50
          // closed e.Tail#1 as range 52
          //DEBUG: t.ErrorList#1: 5
          //DEBUG: s.LnNum#1: 26
          //DEBUG: e.MultiBracket#1: 48
          //DEBUG: e.Scanned#1: 50
          //DEBUG: e.Tail#1: 52

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoParseResult/4 AsIs: t.ErrorList#1/5 AsIs: (/9 AsIs: e.MultiBracket#1/48 HalfReuse: (/10 HalfReuse: # Brackets/13 } Tile{ AsIs: s.LnNum#1/26 } Tile{ Reuse: # TkCloseBracket/25 } Tile{ AsIs: e.Scanned#1/50 } Tile{ AsIs: )/14 HalfReuse: )/23 } Tile{ HalfReuse: (/35 AsIs: )/24 AsIs: e.Tail#1/52 AsIs: >/1 ]] }
          refalrts::reinit_open_bracket(context[10]);
          refalrts::reinit_ident(context[13], identifiers[ident_Brackets]);
          refalrts::update_ident(context[25], identifiers[ident_TkCloseBracket]);
          refalrts::reinit_close_bracket(context[23]);
          refalrts::reinit_open_bracket(context[35]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[35], context[24] );
          refalrts::link_brackets( context[9], context[23] );
          refalrts::link_brackets( context[10], context[14] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[35];
          res = refalrts::splice_evar( res, context[14], context[23] );
          res = refalrts::splice_evar( res, context[50], context[51] );
          res = refalrts::splice_evar( res, context[25], context[25] );
          res = refalrts::splice_evar( res, context[26], context[26] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & DoParseResult/4 t.ErrorList#1/5 (/9 e.MultiBracket#1/48 )/10 (/13 e.Scanned#1/50 )/14 (/23 # Open/25 s.LnNum#1/26 # TkOpenCall/35 )/24 e.Tail#1/52 >/1
          context[48] = context[42];
          context[49] = context[43];
          context[50] = context[44];
          context[51] = context[45];
          context[52] = context[46];
          context[53] = context[47];
          if( ! refalrts::ident_term( identifiers[ident_TkOpenCall], context[35] ) )
            continue;
          // closed e.MultiBracket#1 as range 48
          // closed e.Scanned#1 as range 50
          // closed e.Tail#1 as range 52
          //DEBUG: t.ErrorList#1: 5
          //DEBUG: s.LnNum#1: 26
          //DEBUG: e.MultiBracket#1: 48
          //DEBUG: e.Scanned#1: 50
          //DEBUG: e.Tail#1: 52

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoParseResult/4 AsIs: t.ErrorList#1/5 AsIs: (/9 AsIs: e.MultiBracket#1/48 HalfReuse: (/10 HalfReuse: # CallBrackets/13 } Tile{ AsIs: s.LnNum#1/26 } Tile{ Reuse: # TkCloseCall/25 } Tile{ AsIs: e.Scanned#1/50 } Tile{ AsIs: )/14 HalfReuse: )/23 } Tile{ HalfReuse: (/35 AsIs: )/24 AsIs: e.Tail#1/52 AsIs: >/1 ]] }
          refalrts::reinit_open_bracket(context[10]);
          refalrts::reinit_ident(context[13], identifiers[ident_CallBrackets]);
          refalrts::update_ident(context[25], identifiers[ident_TkCloseCall]);
          refalrts::reinit_close_bracket(context[23]);
          refalrts::reinit_open_bracket(context[35]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[35], context[24] );
          refalrts::link_brackets( context[9], context[23] );
          refalrts::link_brackets( context[10], context[14] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[35];
          res = refalrts::splice_evar( res, context[14], context[23] );
          res = refalrts::splice_evar( res, context[50], context[51] );
          res = refalrts::splice_evar( res, context[25], context[25] );
          res = refalrts::splice_evar( res, context[26], context[26] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & DoParseResult/4 t.ErrorList#1/5 (/9 e.MultiBracket#1/48 )/10 (/13 e.Scanned#1/50 )/14 (/23 # Open/25 s.LnNum#1/26 # TkOpenBracket/35 )/24 e.Tail#1/52 >/1
          context[48] = context[42];
          context[49] = context[43];
          context[50] = context[44];
          context[51] = context[45];
          context[52] = context[46];
          context[53] = context[47];
          if( ! refalrts::ident_term( identifiers[ident_TkOpenBracket], context[35] ) )
            continue;
          // closed e.MultiBracket#1 as range 48
          // closed e.Scanned#1 as range 50
          // closed e.Tail#1 as range 52
          //DEBUG: t.ErrorList#1: 5
          //DEBUG: s.LnNum#1: 26
          //DEBUG: e.MultiBracket#1: 48
          //DEBUG: e.Scanned#1: 50
          //DEBUG: e.Tail#1: 52

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoParseResult/4 AsIs: t.ErrorList#1/5 AsIs: (/9 AsIs: e.MultiBracket#1/48 HalfReuse: (/10 HalfReuse: </13 } Tile{ HalfReuse: & DoParseResult$10\1*2/14 HalfReuse: # TkOpenBracket/23 HalfReuse: >/25 AsIs: s.LnNum#1/26 } # TkCloseBracket/54 Tile{ AsIs: e.Scanned#1/50 } )/55 )/56 Tile{ HalfReuse: (/35 AsIs: )/24 AsIs: e.Tail#1/52 AsIs: >/1 ]] }
          refalrts::alloc_ident(vm, context[54], identifiers[ident_TkCloseBracket]);
          refalrts::alloc_close_bracket(vm, context[55]);
          refalrts::alloc_close_bracket(vm, context[56]);
          refalrts::reinit_open_bracket(context[10]);
          refalrts::reinit_open_call(context[13]);
          refalrts::reinit_name(context[14], functions[efunc_gen_DoParseResult_S10L1D2]);
          refalrts::reinit_ident(context[23], identifiers[ident_TkOpenBracket]);
          refalrts::reinit_close_call(context[25]);
          refalrts::reinit_open_bracket(context[35]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[35], context[24] );
          refalrts::link_brackets( context[9], context[56] );
          refalrts::link_brackets( context[10], context[55] );
          refalrts::push_stack( vm, context[25] );
          refalrts::push_stack( vm, context[13] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[35];
          res = refalrts::splice_evar( res, context[55], context[56] );
          res = refalrts::splice_evar( res, context[50], context[51] );
          res = refalrts::splice_evar( res, context[54], context[54] );
          res = refalrts::splice_evar( res, context[14], context[26] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & DoParseResult/4 t.ErrorList#1/5 (/9 e.MultiBracket#1/48 )/10 (/13 e.Scanned#1/50 )/14 (/23 # Open/25 s.LnNum#1/26 # TkOpenCall/35 )/24 e.Tail#1/52 >/1
          context[48] = context[42];
          context[49] = context[43];
          context[50] = context[44];
          context[51] = context[45];
          context[52] = context[46];
          context[53] = context[47];
          if( ! refalrts::ident_term( identifiers[ident_TkOpenCall], context[35] ) )
            continue;
          // closed e.MultiBracket#1 as range 48
          // closed e.Scanned#1 as range 50
          // closed e.Tail#1 as range 52
          //DEBUG: t.ErrorList#1: 5
          //DEBUG: s.LnNum#1: 26
          //DEBUG: e.MultiBracket#1: 48
          //DEBUG: e.Scanned#1: 50
          //DEBUG: e.Tail#1: 52

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoParseResult/4 AsIs: t.ErrorList#1/5 AsIs: (/9 AsIs: e.MultiBracket#1/48 HalfReuse: (/10 HalfReuse: </13 } Tile{ HalfReuse: & DoParseResult$10\1*2/14 HalfReuse: # TkOpenCall/23 HalfReuse: >/25 AsIs: s.LnNum#1/26 } # TkCloseCall/54 Tile{ AsIs: e.Scanned#1/50 } )/55 )/56 Tile{ HalfReuse: (/35 AsIs: )/24 AsIs: e.Tail#1/52 AsIs: >/1 ]] }
          refalrts::alloc_ident(vm, context[54], identifiers[ident_TkCloseCall]);
          refalrts::alloc_close_bracket(vm, context[55]);
          refalrts::alloc_close_bracket(vm, context[56]);
          refalrts::reinit_open_bracket(context[10]);
          refalrts::reinit_open_call(context[13]);
          refalrts::reinit_name(context[14], functions[efunc_gen_DoParseResult_S10L1D2]);
          refalrts::reinit_ident(context[23], identifiers[ident_TkOpenCall]);
          refalrts::reinit_close_call(context[25]);
          refalrts::reinit_open_bracket(context[35]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[35], context[24] );
          refalrts::link_brackets( context[9], context[56] );
          refalrts::link_brackets( context[10], context[55] );
          refalrts::push_stack( vm, context[25] );
          refalrts::push_stack( vm, context[13] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[35];
          res = refalrts::splice_evar( res, context[55], context[56] );
          res = refalrts::splice_evar( res, context[50], context[51] );
          res = refalrts::splice_evar( res, context[54], context[54] );
          res = refalrts::splice_evar( res, context[14], context[26] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & DoParseResult/4 t.ErrorList#1/5 (/9 e.MultiBracket#1/48 )/10 (/13 e.Scanned#1/50 )/14 (/23 # Open/25 s.LnNum#1/26 s.OpenBracket#1/35 )/24 e.Tail#1/52 >/1
        context[48] = context[42];
        context[49] = context[43];
        context[50] = context[44];
        context[51] = context[45];
        context[52] = context[46];
        context[53] = context[47];
        // closed e.MultiBracket#1 as range 48
        // closed e.Scanned#1 as range 50
        // closed e.Tail#1 as range 52
        //DEBUG: t.ErrorList#1: 5
        //DEBUG: s.LnNum#1: 26
        //DEBUG: s.OpenBracket#1: 35
        //DEBUG: e.MultiBracket#1: 48
        //DEBUG: e.Scanned#1: 50
        //DEBUG: e.Tail#1: 52

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoParseResult/4 AsIs: t.ErrorList#1/5 AsIs: (/9 AsIs: e.MultiBracket#1/48 HalfReuse: (/10 HalfReuse: </13 } Tile{ HalfReuse: & DoParseResult$10\1*2/14 HalfReuse: s.OpenBracket1 #35/23 HalfReuse: >/25 AsIs: s.LnNum#1/26 } </54 & DoParseResult$10\2*2/55 Tile{ AsIs: s.OpenBracket#1/35 } >/56 Tile{ AsIs: e.Scanned#1/50 } )/57 )/58 (/59 Tile{ AsIs: )/24 AsIs: e.Tail#1/52 AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[54]);
        refalrts::alloc_name(vm, context[55], functions[efunc_gen_DoParseResult_S10L2D2]);
        refalrts::alloc_close_call(vm, context[56]);
        refalrts::alloc_close_bracket(vm, context[57]);
        refalrts::alloc_close_bracket(vm, context[58]);
        refalrts::alloc_open_bracket(vm, context[59]);
        refalrts::reinit_open_bracket(context[10]);
        refalrts::reinit_open_call(context[13]);
        refalrts::reinit_name(context[14], functions[efunc_gen_DoParseResult_S10L1D2]);
        refalrts::reinit_svar( context[23], context[35] );
        refalrts::reinit_close_call(context[25]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[59], context[24] );
        refalrts::link_brackets( context[9], context[58] );
        refalrts::link_brackets( context[10], context[57] );
        refalrts::push_stack( vm, context[56] );
        refalrts::push_stack( vm, context[54] );
        refalrts::push_stack( vm, context[25] );
        refalrts::push_stack( vm, context[13] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[24];
        res = refalrts::splice_evar( res, context[57], context[59] );
        res = refalrts::splice_evar( res, context[50], context[51] );
        res = refalrts::splice_evar( res, context[56], context[56] );
        res = refalrts::splice_evar( res, context[35], context[35] );
        res = refalrts::splice_evar( res, context[54], context[55] );
        res = refalrts::splice_evar( res, context[14], context[26] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoParseResult/4 t.ErrorList#1/5 (/9 e.MultiBracket#1/42 (/50 s.BracketsSign#1/52 s.OpenLnNum#1/53 s.CloseBracket#1/54 e.Scanned#1/48 )/51 )/10 (/13 e.InnerScanned#1/44 )/14 (/23 # Close/25 s.LnNum#1/26 s.CloseBracket#1/35 )/24 e.Tail#1/46 >/1
      context[42] = context[36];
      context[43] = context[37];
      context[44] = context[38];
      context[45] = context[39];
      context[46] = context[40];
      context[47] = context[41];
      if( ! refalrts::ident_term( identifiers[ident_Close], context[25] ) )
        continue;
      context[48] = 0;
      context[49] = 0;
      context[50] = refalrts::brackets_right( context[48], context[49], context[42], context[43] );
      if( ! context[50] )
        continue;
      refalrts::bracket_pointers(context[50], context[51]);
      // closed e.MultiBracket#1 as range 42
      // closed e.InnerScanned#1 as range 44
      // closed e.Tail#1 as range 46
      if( ! refalrts::svar_left( context[52], context[48], context[49] ) )
        continue;
      if( ! refalrts::svar_left( context[53], context[48], context[49] ) )
        continue;
      if( ! refalrts::repeated_stvar_left( vm, context[54], context[35], context[48], context[49] ) )
        continue;
      // closed e.Scanned#1 as range 48
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: s.LnNum#1: 26
      //DEBUG: s.CloseBracket#1: 35
      //DEBUG: e.MultiBracket#1: 42
      //DEBUG: e.InnerScanned#1: 44
      //DEBUG: e.Tail#1: 46
      //DEBUG: s.BracketsSign#1: 52
      //DEBUG: s.OpenLnNum#1: 53
      //DEBUG: e.Scanned#1: 48

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.BracketsSign#1/52 s.OpenLnNum#1/53 s.CloseBracket#1/54 {REMOVED TILE} )/51 {REMOVED TILE} {REMOVED TILE} # Close/25 s.LnNum#1/26 s.CloseBracket#1/35 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoParseResult/4 AsIs: t.ErrorList#1/5 AsIs: (/9 AsIs: e.MultiBracket#1/42 HalfReuse: )/50 } Tile{ AsIs: (/23 } Tile{ AsIs: e.Scanned#1/48 } Tile{ HalfReuse: (/10 HalfReuse: s.BracketsSign1 #52/13 AsIs: e.InnerScanned#1/44 AsIs: )/14 } Tile{ AsIs: )/24 AsIs: e.Tail#1/46 AsIs: >/1 ]] }
      refalrts::reinit_close_bracket(context[50]);
      refalrts::reinit_open_bracket(context[10]);
      refalrts::reinit_svar( context[13], context[52] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[23], context[24] );
      refalrts::link_brackets( context[10], context[14] );
      refalrts::link_brackets( context[9], context[50] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[24];
      res = refalrts::splice_evar( res, context[10], context[14] );
      res = refalrts::splice_evar( res, context[48], context[49] );
      res = refalrts::splice_evar( res, context[23], context[23] );
      refalrts::splice_to_freelist_open( vm, context[50], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoParseResult/4 t.ErrorList#1/5 (/9 e.MultiBracket#1/27 )/10 (/13 e.Scanned#1/29 )/14 (/23 # TkOpenBlock/25 s.LnNum#1/26 )/24 e.Tail#1/31 >/1
    context[27] = context[15];
    context[28] = context[16];
    context[29] = context[17];
    context[30] = context[18];
    context[31] = context[19];
    context[32] = context[20];
    if( ! refalrts::ident_term( identifiers[ident_TkOpenBlock], context[25] ) )
      continue;
    if( ! refalrts::empty_seq( context[21], context[22] ) )
      continue;
    // closed e.MultiBracket#1 as range 27
    // closed e.Scanned#1 as range 29
    // closed e.Tail#1 as range 31
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: s.LnNum#1: 26
    //DEBUG: e.MultiBracket#1: 27
    //DEBUG: e.Scanned#1: 29
    //DEBUG: e.Tail#1: 31

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.LnNum#1/26 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </13 } Tile{ HalfReuse: & Fetch@1/14 AsIs: (/23 } Tile{ AsIs: </0 Reuse: & ParseBlock/4 AsIs: t.ErrorList#1/5 } Tile{ AsIs: e.Tail#1/31 } Tile{ HalfReuse: >/25 } Tile{ AsIs: )/24 } Tile{ AsIs: (/9 AsIs: e.MultiBracket#1/27 AsIs: )/10 } Tile{ AsIs: e.Scanned#1/29 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_open_call(context[13]);
    refalrts::reinit_name(context[14], functions[efunc_gen_Fetch_Z1]);
    refalrts::update_name(context[4], functions[efunc_ParseBlock]);
    refalrts::reinit_close_call(context[25]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::link_brackets( context[23], context[24] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[24], context[24] );
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_evar( res, context[0], context[6] );
    res = refalrts::splice_evar( res, context[14], context[23] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoParseResult/4 t.ErrorList#1/5 (/9 e.MultiBracket#1/15 (/23 s.BracketsSign#1/25 s.OpenLnNum#1/26 s.CloseBracket#1/27 e.Scanned#1/21 )/24 )/10 (/13 e.InnerScanned#1/17 )/14 e.Tail#1/19 >/1
    context[15] = context[7];
    context[16] = context[8];
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[2];
    context[20] = context[3];
    context[21] = 0;
    context[22] = 0;
    context[23] = refalrts::brackets_right( context[21], context[22], context[15], context[16] );
    if( ! context[23] )
      continue;
    refalrts::bracket_pointers(context[23], context[24]);
    // closed e.MultiBracket#1 as range 15
    // closed e.InnerScanned#1 as range 17
    // closed e.Tail#1 as range 19
    if( ! refalrts::svar_left( context[25], context[21], context[22] ) )
      continue;
    if( ! refalrts::svar_left( context[26], context[21], context[22] ) )
      continue;
    if( ! refalrts::svar_left( context[27], context[21], context[22] ) )
      continue;
    // closed e.Scanned#1 as range 21
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: e.MultiBracket#1: 15
    //DEBUG: e.InnerScanned#1: 17
    //DEBUG: e.Tail#1: 19
    //DEBUG: s.BracketsSign#1: 25
    //DEBUG: s.OpenLnNum#1: 26
    //DEBUG: s.CloseBracket#1: 27
    //DEBUG: e.Scanned#1: 21

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.OpenLnNum#1/26 s.CloseBracket#1/27 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </28 & DoParseResult/29 Tile{ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#1/5 HalfReuse: s.OpenLnNum1 #26/9 }"Unbalanced bracket \""/30 </32 & StrFromBracket/33 s.BracketsSign#1/25/34 >/35 '\"'/36 >/37 (/38 Tile{ AsIs: e.MultiBracket#1/15 } Tile{ AsIs: )/10 AsIs: (/13 } Tile{ AsIs: e.Scanned#1/21 } Tile{ AsIs: (/23 AsIs: s.BracketsSign#1/25 } Tile{ AsIs: e.InnerScanned#1/17 } Tile{ AsIs: )/24 } Tile{ AsIs: )/14 AsIs: e.Tail#1/19 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[28]);
    refalrts::alloc_name(vm, context[29], functions[efunc_DoParseResult]);
    refalrts::alloc_chars(vm, context[30], context[31], "Unbalanced bracket \"", 20);
    refalrts::alloc_open_call(vm, context[32]);
    refalrts::alloc_name(vm, context[33], functions[efunc_StrFromBracket]);
    refalrts::copy_stvar(vm, context[34], context[25]);
    refalrts::alloc_close_call(vm, context[35]);
    refalrts::alloc_char(vm, context[36], '\"');
    refalrts::alloc_close_call(vm, context[37]);
    refalrts::alloc_open_bracket(vm, context[38]);
    refalrts::update_name(context[4], functions[efunc_ELm_AddErrorAt]);
    refalrts::reinit_svar( context[9], context[26] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[28] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[23], context[24] );
    refalrts::link_brackets( context[38], context[10] );
    refalrts::push_stack( vm, context[37] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[35] );
    refalrts::push_stack( vm, context[32] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[14];
    res = refalrts::splice_evar( res, context[24], context[24] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[23], context[25] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[10], context[13] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[30], context[38] );
    res = refalrts::splice_evar( res, context[0], context[9] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoParseResult/4 t.new#5/5 (/9 )/10 (/13 e.new#7/11 )/14 e.new#6/2 >/1
  if( ! refalrts::empty_seq( context[7], context[8] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#7 as range 11
  // closed e.new#6 as range 2
  do {
    // </0 & DoParseResult/4 t.ErrorList#1/5 (/9 )/10 (/13 e.Scanned#1/15 )/14 (/21 # Close/23 s.LnNum#1/24 s.CloseBracket#1/25 )/22 e.Tail#1/17 >/1
    context[15] = context[11];
    context[16] = context[12];
    context[17] = context[2];
    context[18] = context[3];
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[17], context[18] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = refalrts::ident_left( identifiers[ident_Close], context[19], context[20] );
    if( ! context[23] )
      continue;
    // closed e.Scanned#1 as range 15
    // closed e.Tail#1 as range 17
    if( ! refalrts::svar_left( context[24], context[19], context[20] ) )
      continue;
    if( ! refalrts::svar_left( context[25], context[19], context[20] ) )
      continue;
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: e.Scanned#1: 15
    //DEBUG: e.Tail#1: 17
    //DEBUG: s.LnNum#1: 24
    //DEBUG: s.CloseBracket#1: 25

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoParseResult/4 } </26 & EL-AddErrorAt/27 Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: s.LnNum#1/24 }"Unb"/28 Tile{ HalfReuse: 'a'/21 HalfReuse: 'l'/23 }"anced bracket \""/30 </32 & StrFromBracket/33 Tile{ AsIs: s.CloseBracket#1/25 HalfReuse: >/22 } '\"'/34 >/35 Tile{ AsIs: (/9 AsIs: )/10 AsIs: (/13 AsIs: e.Scanned#1/15 AsIs: )/14 } Tile{ AsIs: e.Tail#1/17 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[26]);
    refalrts::alloc_name(vm, context[27], functions[efunc_ELm_AddErrorAt]);
    refalrts::alloc_chars(vm, context[28], context[29], "Unb", 3);
    refalrts::alloc_chars(vm, context[30], context[31], "anced bracket \"", 15);
    refalrts::alloc_open_call(vm, context[32]);
    refalrts::alloc_name(vm, context[33], functions[efunc_StrFromBracket]);
    refalrts::alloc_char(vm, context[34], '\"');
    refalrts::alloc_close_call(vm, context[35]);
    refalrts::reinit_char(context[21], 'a');
    refalrts::reinit_char(context[23], 'l');
    refalrts::reinit_close_call(context[22]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::push_stack( vm, context[35] );
    refalrts::push_stack( vm, context[26] );
    refalrts::push_stack( vm, context[22] );
    refalrts::push_stack( vm, context[32] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[9], context[14] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_evar( res, context[25], context[22] );
    res = refalrts::splice_evar( res, context[30], context[33] );
    res = refalrts::splice_evar( res, context[21], context[23] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_evar( res, context[24], context[24] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[26], context[27] );
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

static refalrts::NativeReference nat_ref_DoParseResult("DoParseResult", COOKIE1_, COOKIE2_, func_DoParseResult);


static refalrts::FnResult func_AddUnexpected(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
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
    // </0 & AddUnexpected/4 t.ErrorList#1/5 (/9 # TkError/11 s.LineNumber#1/12 e.Message#1/13 )/10 e.Expected#1/15 >/1
    context[13] = context[7];
    context[14] = context[8];
    context[15] = context[2];
    context[16] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_TkError], context[11] ) )
      continue;
    // closed e.Message#1 as range 13
    // closed e.Expected#1 as range 15
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: s.LineNumber#1: 12
    //DEBUG: e.Message#1: 13
    //DEBUG: e.Expected#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} # TkError/11 s.LineNumber#1/12 {REMOVED TILE} )/10 e.Expected#1/15 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#1/5 HalfReuse: s.LineNumber1 #12/9 } Tile{ AsIs: e.Message#1/13 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_ELm_AddErrorAt]);
    refalrts::reinit_svar( context[9], context[12] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::splice_to_freelist_open( vm, context[9], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & AddUnexpected/4 t.ErrorList#1/5 (/9 # TkUnexpected/11 s.LineNumber#1/12 e.Unexpected#1/13 )/10 e.Expected#1/15 >/1
    context[13] = context[7];
    context[14] = context[8];
    context[15] = context[2];
    context[16] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_TkUnexpected], context[11] ) )
      continue;
    // closed e.Unexpected#1 as range 13
    // closed e.Expected#1 as range 15
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: s.LineNumber#1: 12
    //DEBUG: e.Unexpected#1: 13
    //DEBUG: e.Expected#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.LineNumber#1/12 {REMOVED TILE} {REMOVED TILE} e.Expected#1/15 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#1/5 HalfReuse: s.LineNumber1 #12/9 HalfReuse: 'U'/11 } 'n'/17 Tile{ HalfReuse: 'k'/10 }"nown characters \""/18 Tile{ AsIs: e.Unexpected#1/13 } '\"'/20 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_char(vm, context[17], 'n');
    refalrts::alloc_chars(vm, context[18], context[19], "nown characters \"", 17);
    refalrts::alloc_char(vm, context[20], '\"');
    refalrts::update_name(context[4], functions[efunc_ELm_AddErrorAt]);
    refalrts::reinit_svar( context[9], context[12] );
    refalrts::reinit_char(context[11], 'U');
    refalrts::reinit_char(context[10], 'k');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[17], context[17] );
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
  refalrts::alloc_chars(vm, context[13], context[14], "Unexpected ", 11);
  refalrts::alloc_open_call(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_SRm_StrFromToken]);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::alloc_chars(vm, context[18], context[19], ", expected", 10);
  refalrts::update_name(context[4], functions[efunc_ELm_AddErrorAt]);
  refalrts::reinit_svar( context[9], context[12] );
  refalrts::reinit_char(context[10], ' ');
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

static refalrts::NativeReference nat_ref_AddUnexpected("AddUnexpected", COOKIE1_, COOKIE2_, func_AddUnexpected);


static refalrts::FnResult func_gen_Map_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & Map@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@1/4 t.Next#1/7 e.Tail#1/5 >/1
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrepareBracket/4 AsIs: t.Next#1/7 } >/9 </10 & Map@1/11 Tile{ AsIs: e.Tail#1/5 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[9]);
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_gen_Map_Z1]);
    refalrts::update_name(context[4], functions[efunc_PrepareBracket]);
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
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & PrepareBracket/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_PrepareBracket]);
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


static refalrts::FnResult func_gen_ParseSentencePart_A3Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & ParseSentencePart=3@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseSentencePart=3@1/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & ParseSentencePart=3@1/4 (/7 e.Pattern0#2/9 )/8 t.ErrorList#4/13 (/17 e.Result#4/15 )/18 (/21 e.Blocks#4/19 )/22 e.Tokens#4/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.Pattern0#2 as range 9
    context[14] = refalrts::tvar_left( context[13], context[11], context[12] );
    if( ! context[14] )
      continue;
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[11], context[12] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[11], context[12] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    // closed e.Result#4 as range 15
    // closed e.Blocks#4 as range 19
    // closed e.Tokens#4 as range 11
    //DEBUG: e.Pattern0#2: 9
    //DEBUG: t.ErrorList#4: 13
    //DEBUG: e.Result#4: 15
    //DEBUG: e.Blocks#4: 19
    //DEBUG: e.Tokens#4: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: (/7 AsIs: e.Pattern0#2/9 AsIs: )/8 } Tile{ HalfReuse: # Assign/1 } Tile{ AsIs: (/17 AsIs: e.Result#4/15 AsIs: )/18 AsIs: (/21 AsIs: e.Blocks#4/19 AsIs: )/22 } Tile{ HalfReuse: )/0 } Tile{ AsIs: t.ErrorList#4/13 } Tile{ AsIs: e.Tokens#4/11 } Tile{ ]] }
    refalrts::reinit_open_bracket(context[4]);
    refalrts::reinit_ident(context[1], identifiers[ident_Assign]);
    refalrts::reinit_close_bracket(context[0]);
    refalrts::link_brackets( context[4], context[0] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[17], context[22] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[4], context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseSentencePart=3@1/4 (/7 e.Pattern0#2/5 )/8 e.dyn#0/2 >/1
  // closed e.Pattern0#2 as range 5
  // closed e.dyn#0 as range 2
  //DEBUG: e.Pattern0#2: 5
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseSentencePart=3@0/4 AsIs: (/7 AsIs: e.Pattern0#2/5 AsIs: )/8 } # Assign/9 Tile{ AsIs: e.dyn#0/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_ident(vm, context[9], identifiers[ident_Assign]);
  refalrts::update_name(context[4], functions[efunc_gen_ParseSentencePart_A3Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseSentencePart_A3Z1("ParseSentencePart=3@1", COOKIE1_, COOKIE2_, func_gen_ParseSentencePart_A3Z1);


static refalrts::FnResult func_gen_ParseSentencePart_A3Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & ParseSentencePart=3@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseSentencePart=3@2/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & ParseSentencePart=3@2/4 (/7 e.Pattern0#2/9 )/8 t.ErrorList#4/13 (/17 e.Result#4/15 )/18 (/21 e.Blocks#4/19 )/22 e.Tokens#4/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.Pattern0#2 as range 9
    context[14] = refalrts::tvar_left( context[13], context[11], context[12] );
    if( ! context[14] )
      continue;
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[11], context[12] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[11], context[12] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    // closed e.Result#4 as range 15
    // closed e.Blocks#4 as range 19
    // closed e.Tokens#4 as range 11
    //DEBUG: e.Pattern0#2: 9
    //DEBUG: t.ErrorList#4: 13
    //DEBUG: e.Result#4: 15
    //DEBUG: e.Blocks#4: 19
    //DEBUG: e.Tokens#4: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: (/7 AsIs: e.Pattern0#2/9 AsIs: )/8 } Tile{ HalfReuse: # Condition/1 } Tile{ AsIs: (/17 AsIs: e.Result#4/15 AsIs: )/18 AsIs: (/21 AsIs: e.Blocks#4/19 AsIs: )/22 } Tile{ HalfReuse: )/0 } Tile{ AsIs: t.ErrorList#4/13 } Tile{ AsIs: e.Tokens#4/11 } Tile{ ]] }
    refalrts::reinit_open_bracket(context[4]);
    refalrts::reinit_ident(context[1], identifiers[ident_Condition]);
    refalrts::reinit_close_bracket(context[0]);
    refalrts::link_brackets( context[4], context[0] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[17], context[22] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[4], context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseSentencePart=3@2/4 (/7 e.Pattern0#2/5 )/8 e.dyn#0/2 >/1
  // closed e.Pattern0#2 as range 5
  // closed e.dyn#0 as range 2
  //DEBUG: e.Pattern0#2: 5
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseSentencePart=3@0/4 AsIs: (/7 AsIs: e.Pattern0#2/5 AsIs: )/8 } # Condition/9 Tile{ AsIs: e.dyn#0/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_ident(vm, context[9], identifiers[ident_Condition]);
  refalrts::update_name(context[4], functions[efunc_gen_ParseSentencePart_A3Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseSentencePart_A3Z2("ParseSentencePart=3@2", COOKIE1_, COOKIE2_, func_gen_ParseSentencePart_A3Z2);


static refalrts::FnResult func_gen_Fetch_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & Fetch@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Fetch@1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 e.new#3/2 >/1
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
    // </0 & Fetch@1/4 (/7 (/21 e.0#0/19 )/22 t.0#0/23 e.1#0/13 )/8 (/11 e.MultiBracket#1/15 )/12 e.Scanned#1/17 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[2];
    context[18] = context[3];
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[13], context[14] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    // closed e.0#0 as range 19
    // closed e.MultiBracket#1 as range 15
    // closed e.Scanned#1 as range 17
    context[24] = refalrts::tvar_left( context[23], context[13], context[14] );
    if( ! context[24] )
      continue;
    // closed e.1#0 as range 13
    //DEBUG: e.0#0: 19
    //DEBUG: e.MultiBracket#1: 15
    //DEBUG: e.Scanned#1: 17
    //DEBUG: t.0#0: 23
    //DEBUG: e.1#0: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoParseResult/4 } Tile{ AsIs: t.0#0/23 } Tile{ AsIs: (/11 AsIs: e.MultiBracket#1/15 AsIs: )/12 } (/25 Tile{ AsIs: e.Scanned#1/17 } Tile{ AsIs: (/7 HalfReuse: # Closure/21 AsIs: e.0#0/19 AsIs: )/22 } Tile{ AsIs: )/8 } Tile{ AsIs: e.1#0/13 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[25]);
    refalrts::update_name(context[4], functions[efunc_DoParseResult]);
    refalrts::reinit_ident(context[21], identifiers[ident_Closure]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[25], context[8] );
    refalrts::link_brackets( context[7], context[22] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[7], context[22] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Fetch@1/4 (/7 e.Argument#1/13 )/8 (/11 e.MultiBracket#1/15 )/12 e.Scanned#1/17 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[2];
    context[18] = context[3];
    // closed e.Argument#1 as range 13
    // closed e.MultiBracket#1 as range 15
    // closed e.Scanned#1 as range 17
    //DEBUG: e.Argument#1: 13
    //DEBUG: e.MultiBracket#1: 15
    //DEBUG: e.Scanned#1: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoParseResult$12\1*1/4 AsIs: (/7 } Tile{ AsIs: e.MultiBracket#1/15 } Tile{ AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Scanned#1/17 } Tile{ AsIs: )/12 } Tile{ AsIs: e.Argument#1/13 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_DoParseResult_S12L1D1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[8], context[11] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Fetch@1/4 (/7 e.arg#0/5 )/8 (/11 e.MultiBracket#1/9 )/12 e.Scanned#1/2 >/1
  // closed e.arg#0 as range 5
  // closed e.MultiBracket#1 as range 9
  // closed e.Scanned#1 as range 2
  //DEBUG: e.arg#0: 5
  //DEBUG: e.MultiBracket#1: 9
  //DEBUG: e.Scanned#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch@0/4 } Tile{ AsIs: e.arg#0/5 } [*]/13 Tile{ HalfReuse: & DoParseResult$12\1/8 AsIs: (/11 AsIs: e.MultiBracket#1/9 AsIs: )/12 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Scanned#1/2 } )/14 {*}/15 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_closure_head(vm, context[13]);
  refalrts::alloc_close_bracket(vm, context[14]);
  refalrts::alloc_unwrapped_closure(vm, context[15], context[13]);
  refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z0]);
  refalrts::reinit_name(context[8], functions[efunc_gen_DoParseResult_S12L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[14] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[8], context[12] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::wrap_closure( context[15] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Fetch_Z1("Fetch@1", COOKIE1_, COOKIE2_, func_gen_Fetch_Z1);


//End of file
