// This file automatically generated from 'Log-AST.ref'
// Don't edit! Edit 'Log-AST.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_2622296123_831963407
#define COOKIE1_ 2622296123U
#define COOKIE2_ 831963407U

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
  efunc_UndoubleEmtpyLines = 15,
  efunc_TrimLines = 16,
  efunc_gen_Map_Z1 = 17,
  efunc_Trimm_R = 18,
  efunc_Function = 19,
  efunc_ColdFunction = 20,
  efunc_DisplayName = 21,
  efunc_InlineExpr = 22,
  efunc_Compare = 23,
  efunc_MAXm_LINE = 24,
  efunc_gen_LongLine_B1 = 25,
  efunc_gen_LongLine_A1 = 26,
  efunc_Lenw = 27,
  efunc_Functionm_Aux = 28,
  efunc_InlineTerm = 29,
  efunc_Sentences = 30,
  efunc_Entry = 31,
  efunc_gen_Map_Z2 = 32,
  efunc_Sentence = 33,
  efunc_PutComment = 34,
  efunc_gen_Sentence_S2C1 = 35,
  efunc_gen_Sentence_S2C2 = 36,
  efunc_LongLine = 37,
  efunc_Tail = 38,
  efunc_Expression = 39,
  efunc_InlineSubexpr = 40,
  efunc_gen_Tail_S1B1 = 41,
  efunc_gen_Tail_S1A1 = 42,
  efunc_DoExpression = 43,
  efunc_gen_DoExpression_S3B1S1B1S1C1 = 44,
  efunc_MultilineTerm = 45,
  efunc_gen_DoExpression_S3B1S1B1S2C1 = 46,
  efunc_gen_DoExpression_S3B1S1B1 = 47,
  efunc_gen_DoExpression_S3B1S1B1Z1 = 48,
  efunc_gen_DoExpression_S3B1 = 49,
  efunc_AppendTerm = 50,
  efunc_gen_DoExpression_S3A2 = 51,
  efunc_gen_DoExpression_S3A1 = 52,
  efunc_MultilineTermm_Prefix = 53,
  efunc_TkVariable = 54,
  efunc_gen_MultilineTermm_Prefix_B1D9 = 55,
  efunc_CharRep = 56,
  efunc_Symb = 57,
  efunc_Compound = 58,
  efunc_gen_Compound_S1C1 = 59,
  efunc_IsIdent = 60,
  efunc_DoCompound = 61,
  efunc_gen_IsIdent_S1C1 = 62,
  efunc_Type = 63,
  efunc_DoIsIdent = 64,
  efunc_gen_DoIsIdent_S3C1 = 65,
  efunc_gen_DoIsIdent_S4C1 = 66,
  efunc_gen_CharRep_S7C1 = 67,
  efunc_Ord = 68,
  efunc_gen_CharRep_S7C2 = 69,
  efunc_HexDigit = 70,
  efunc_Mod = 71,
  efunc_Div = 72,
  efunc_gen_HexDigit_C1 = 73,
  efunc_First = 74,
  efunc_DoInlineExpr = 75,
  efunc_Mu = 76,
  efunc_Up = 77,
  efunc_Evm_met = 78,
  efunc_Residue = 79,
  efunc_u_u_Metau_Residue = 80,
  efunc_MapAccum = 81,
  efunc_UnBracket = 82,
  efunc_DelAccumulator = 83,
  efunc_Inc = 84,
  efunc_Dec = 85,
  efunc_Logm_TextFromAST = 86,
  efunc_Element = 87,
  efunc_Symbol = 88,
  efunc_Brackets = 89,
  efunc_ADTm_Brackets = 90,
  efunc_CallBrackets = 91,
  efunc_ColdCallBrackets = 92,
  efunc_ClosureBrackets = 93,
  efunc_gen_Map_Z0 = 94,
  efunc_gen_Functionm_Aux_S3L1D1 = 95,
  efunc_gen_Functionm_Aux_S3L1 = 96,
  efunc_gen_DoExpression_S3B1S1B1Z1S1C1 = 97,
  efunc_gen_DoExpression_S3B1S1B1Z1S2C1 = 98,
  efunc_gen_DoExpression_S3B1S1B1Z0 = 99,
};


enum ident {
  ident_Function = 0,
  ident_ColdFunction = 1,
  ident_Swap = 2,
  ident_GNm_Entry = 3,
  ident_GNm_Local = 4,
  ident_Declaration = 5,
  ident_Inline = 6,
  ident_Drive = 7,
  ident_Ident = 8,
  ident_NativeBlock = 9,
  ident_Spec = 10,
  ident_DriveInfo = 11,
  ident_SpecInfo = 12,
  ident_True = 13,
  ident_False = 14,
  ident_Sentences = 15,
  ident_NativeBody = 16,
  ident_Metatable = 17,
  ident_Comment = 18,
  ident_Condition = 19,
  ident_FIRST = 20,
  ident_NEXT = 21,
  ident_Brackets = 22,
  ident_ADTm_Brackets = 23,
  ident_CallBrackets = 24,
  ident_Symbol = 25,
  ident_Name = 26,
  ident_TkVariable = 27,
  ident_ClosureBrackets = 28,
  ident_ColdCallBrackets = 29,
  ident_Char = 30,
  ident_Number = 31,
  ident_Cookie1 = 32,
  ident_Cookie2 = 33,
  ident_Identifier = 34,
  ident_Mu = 35,
  ident_Up = 36,
  ident_Evm_met = 37,
  ident_Residue = 38,
  ident_u_u_Metau_Residue = 39,
  ident_Apply = 40,
  ident_Map = 41,
  ident_Reduce = 42,
  ident_Fetch = 43,
  ident_MapAccum = 44,
  ident_DoMapAccum = 45,
  ident_UnBracket = 46,
  ident_DelAccumulator = 47,
  ident_Inc = 48,
  ident_Dec = 49,
  ident_Pipe = 50,
  ident_Logm_TextFromAST = 51,
  ident_TrimLines = 52,
  ident_UndoubleEmtpyLines = 53,
  ident_Element = 54,
  ident_MAXm_LINE = 55,
  ident_LongLine = 56,
  ident_Functionm_Aux = 57,
  ident_Entry = 58,
  ident_Sentence = 59,
  ident_InlineExpr = 60,
  ident_PutComment = 61,
  ident_Tail = 62,
  ident_Expression = 63,
  ident_DoExpression = 64,
  ident_AppendTerm = 65,
  ident_InlineTerm = 66,
  ident_MultilineTerm = 67,
  ident_MultilineTermm_Prefix = 68,
  ident_Compound = 69,
  ident_DoCompound = 70,
  ident_IsIdent = 71,
  ident_DoIsIdent = 72,
  ident_CharRep = 73,
  ident_HexDigit = 74,
  ident_InlineSubexpr = 75,
  ident_DoInlineExpr = 76,
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


static refalrts::FnResult func_Logm_TextFromAST(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & Log-TextFromAST/4 e.Units#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Units#1 as range 2
  //DEBUG: e.Units#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & UndoubleEmtpyLines/6 </7 & TrimLines/8 Tile{ AsIs: </0 Reuse: & Map@1/4 AsIs: e.Units#1/2 AsIs: >/1 } >/9 >/10 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_UndoubleEmtpyLines]);
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_TrimLines]);
  refalrts::alloc_close_call(vm, context[9]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z1]);
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

static refalrts::NativeReference nat_ref_Logm_TextFromAST("Log-TextFromAST", 0U, 0U, func_Logm_TextFromAST);


static refalrts::FnResult func_TrimLines(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & TrimLines/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & TrimLines/4 (/9 e.Line#1/7 )/10 e.Lines#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    // closed e.Line#1 as range 7
    // closed e.Lines#1 as range 5
    //DEBUG: e.Line#1: 7
    //DEBUG: e.Lines#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & Trim-R/9 AsIs: e.Line#1/7 HalfReuse: >/10 } )/11 </12 & TrimLines/13 Tile{ AsIs: e.Lines#1/5 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_bracket(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_TrimLines]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[9], functions[efunc_Trimm_R]);
    refalrts::reinit_close_call(context[10]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[12] );
    refalrts::link_brackets( context[0], context[11] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[11], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & TrimLines/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & TrimLines/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_TrimLines("TrimLines", COOKIE1_, COOKIE2_, func_TrimLines);


static refalrts::FnResult func_UndoubleEmtpyLines(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & UndoubleEmtpyLines/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & UndoubleEmtpyLines/4 e.Lines-B#1/7 (/13 )/14 (/17 )/18 e.Lines-E#1/9 >/1
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
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::brackets_left( context[15], context[16], context[9], context[10] );
      if( ! context[17] )
        continue;
      refalrts::bracket_pointers(context[17], context[18]);
      if( ! refalrts::empty_seq( context[11], context[12] ) )
        continue;
      if( ! refalrts::empty_seq( context[15], context[16] ) )
        continue;
      // closed e.Lines-E#1 as range 9
      //DEBUG: e.Lines-B#1: 7
      //DEBUG: e.Lines-E#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & UndoubleEmtpyLines/4 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Lines-B#1/7 } Tile{ HalfReuse: </13 HalfReuse: & UndoubleEmtpyLines/14 AsIs: (/17 AsIs: )/18 AsIs: e.Lines-E#1/9 AsIs: >/1 ]] }
      refalrts::reinit_open_call(context[13]);
      refalrts::reinit_name(context[14], functions[efunc_UndoubleEmtpyLines]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::link_brackets( context[17], context[18] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[13];
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & UndoubleEmtpyLines/4 e.Lines#1/2 >/1
  // closed e.Lines#1 as range 2
  //DEBUG: e.Lines#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & UndoubleEmtpyLines/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Lines#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_UndoubleEmtpyLines("UndoubleEmtpyLines", COOKIE1_, COOKIE2_, func_UndoubleEmtpyLines);


static refalrts::FnResult func_Element(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & Element/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Element/4 (/7 s.new#1/9 e.new#2/5 )/8 >/1
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
    // </0 & Element/4 (/7 s.new#3/9 s.new#4/12 e.new#5/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::svar_left( context[12], context[10], context[11] ) )
      continue;
    // closed e.new#5 as range 10
    do {
      // </0 & Element/4 (/7 s.new#6/9 s.new#7/12 (/17 e.new#8/15 )/18 e.new#9/13 )/8 >/1
      context[13] = context[10];
      context[14] = context[11];
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::brackets_left( context[15], context[16], context[13], context[14] );
      if( ! context[17] )
        continue;
      refalrts::bracket_pointers(context[17], context[18]);
      // closed e.new#8 as range 15
      // closed e.new#9 as range 13
      do {
        // </0 & Element/4 (/7 # Function/9 s.Scope#1/12 (/17 e.Name#1/19 )/18 e.Body#1/21 )/8 >/1
        context[19] = context[15];
        context[20] = context[16];
        context[21] = context[13];
        context[22] = context[14];
        if( ! refalrts::ident_term( identifiers[ident_Function], context[9] ) )
          continue;
        // closed e.Name#1 as range 19
        // closed e.Body#1 as range 21
        //DEBUG: s.Scope#1: 12
        //DEBUG: e.Name#1: 19
        //DEBUG: e.Body#1: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} (/17 {REMOVED TILE} )/18 {REMOVED TILE} )/8 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Function/4 AsIs: (/7 } Tile{ AsIs: e.Name#1/19 } Tile{ HalfReuse: )/9 AsIs: s.Scope#1/12 } Tile{ AsIs: e.Body#1/21 } Tile{ AsIs: >/1 ]] }
        refalrts::update_name(context[4], functions[efunc_Function]);
        refalrts::reinit_close_bracket(context[9]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[9] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[21], context[22] );
        res = refalrts::splice_evar( res, context[9], context[12] );
        res = refalrts::splice_evar( res, context[19], context[20] );
        refalrts::splice_to_freelist_open( vm, context[7], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Element/4 (/7 # ColdFunction/9 s.Scope#1/12 (/17 e.Name#1/19 )/18 e.Body#1/21 )/8 >/1
      context[19] = context[15];
      context[20] = context[16];
      context[21] = context[13];
      context[22] = context[14];
      if( ! refalrts::ident_term( identifiers[ident_ColdFunction], context[9] ) )
        continue;
      // closed e.Name#1 as range 19
      // closed e.Body#1 as range 21
      //DEBUG: s.Scope#1: 12
      //DEBUG: e.Name#1: 19
      //DEBUG: e.Body#1: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} (/17 {REMOVED TILE} )/18 {REMOVED TILE} )/8 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ColdFunction/4 AsIs: (/7 } Tile{ AsIs: e.Name#1/19 } Tile{ HalfReuse: )/9 AsIs: s.Scope#1/12 } Tile{ AsIs: e.Body#1/21 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_ColdFunction]);
      refalrts::reinit_close_bracket(context[9]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[9] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[9], context[12] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Element/4 (/7 # Swap/9 s.new#6/12 e.new#7/13 )/8 >/1
      context[13] = context[10];
      context[14] = context[11];
      if( ! refalrts::ident_term( identifiers[ident_Swap], context[9] ) )
        continue;
      // closed e.new#7 as range 13
      do {
        // </0 & Element/4 (/7 # Swap/9 # GN-Entry/12 e.Name#1/15 )/8 >/1
        context[15] = context[13];
        context[16] = context[14];
        if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[12] ) )
          continue;
        // closed e.Name#1 as range 15
        //DEBUG: e.Name#1: 15

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } (/17"$ESW"/18 Tile{ HalfReuse: 'A'/0 HalfReuse: 'P'/4 HalfReuse: ' '/7 HalfReuse: </9 HalfReuse: & DisplayName/12 AsIs: e.Name#1/15 HalfReuse: >/8 HalfReuse: ';'/1 } )/20 Tile{ ]] }
        refalrts::alloc_open_bracket(vm, context[17]);
        refalrts::alloc_chars(vm, context[18], context[19], "$ESW", 4);
        refalrts::alloc_close_bracket(vm, context[20]);
        refalrts::reinit_char(context[0], 'A');
        refalrts::reinit_char(context[4], 'P');
        refalrts::reinit_char(context[7], ' ');
        refalrts::reinit_open_call(context[9]);
        refalrts::reinit_name(context[12], functions[efunc_DisplayName]);
        refalrts::reinit_close_call(context[8]);
        refalrts::reinit_char(context[1], ';');
        refalrts::link_brackets( context[17], context[20] );
        refalrts::push_stack( vm, context[8] );
        refalrts::push_stack( vm, context[9] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[20], context[20] );
        res = refalrts::splice_evar( res, context[0], context[1] );
        res = refalrts::splice_evar( res, context[17], context[19] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Element/4 (/7 # Swap/9 # GN-Local/12 e.Name#1/15 )/8 >/1
      context[15] = context[13];
      context[16] = context[14];
      if( ! refalrts::ident_term( identifiers[ident_GNm_Local], context[12] ) )
        continue;
      // closed e.Name#1 as range 15
      //DEBUG: e.Name#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/17"$SW"/18 Tile{ HalfReuse: 'A'/0 HalfReuse: 'P'/4 HalfReuse: ' '/7 HalfReuse: </9 HalfReuse: & DisplayName/12 AsIs: e.Name#1/15 HalfReuse: >/8 HalfReuse: ';'/1 } )/20 Tile{ ]] }
      refalrts::alloc_open_bracket(vm, context[17]);
      refalrts::alloc_chars(vm, context[18], context[19], "$SW", 3);
      refalrts::alloc_close_bracket(vm, context[20]);
      refalrts::reinit_char(context[0], 'A');
      refalrts::reinit_char(context[4], 'P');
      refalrts::reinit_char(context[7], ' ');
      refalrts::reinit_open_call(context[9]);
      refalrts::reinit_name(context[12], functions[efunc_DisplayName]);
      refalrts::reinit_close_call(context[8]);
      refalrts::reinit_char(context[1], ';');
      refalrts::link_brackets( context[17], context[20] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[9] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[20], context[20] );
      res = refalrts::splice_evar( res, context[0], context[1] );
      res = refalrts::splice_evar( res, context[17], context[19] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Element/4 (/7 # Declaration/9 s.new#6/12 e.new#7/13 )/8 >/1
    context[13] = context[10];
    context[14] = context[11];
    if( ! refalrts::ident_term( identifiers[ident_Declaration], context[9] ) )
      continue;
    // closed e.new#7 as range 13
    do {
      // </0 & Element/4 (/7 # Declaration/9 # GN-Entry/12 e.Name#1/15 )/8 >/1
      context[15] = context[13];
      context[16] = context[14];
      if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[12] ) )
        continue;
      // closed e.Name#1 as range 15
      //DEBUG: e.Name#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/17"$EXTE"/18 Tile{ HalfReuse: 'R'/0 HalfReuse: 'N'/4 HalfReuse: ' '/7 HalfReuse: </9 HalfReuse: & DisplayName/12 AsIs: e.Name#1/15 HalfReuse: >/8 HalfReuse: ';'/1 } )/20 Tile{ ]] }
      refalrts::alloc_open_bracket(vm, context[17]);
      refalrts::alloc_chars(vm, context[18], context[19], "$EXTE", 5);
      refalrts::alloc_close_bracket(vm, context[20]);
      refalrts::reinit_char(context[0], 'R');
      refalrts::reinit_char(context[4], 'N');
      refalrts::reinit_char(context[7], ' ');
      refalrts::reinit_open_call(context[9]);
      refalrts::reinit_name(context[12], functions[efunc_DisplayName]);
      refalrts::reinit_close_call(context[8]);
      refalrts::reinit_char(context[1], ';');
      refalrts::link_brackets( context[17], context[20] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[9] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[20], context[20] );
      res = refalrts::splice_evar( res, context[0], context[1] );
      res = refalrts::splice_evar( res, context[17], context[19] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Element/4 (/7 # Declaration/9 # GN-Local/12 e.Name#1/15 )/8 >/1
    context[15] = context[13];
    context[16] = context[14];
    if( ! refalrts::ident_term( identifiers[ident_GNm_Local], context[12] ) )
      continue;
    // closed e.Name#1 as range 15
    //DEBUG: e.Name#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/17"$FORWA"/18 Tile{ HalfReuse: 'R'/0 HalfReuse: 'D'/4 HalfReuse: ' '/7 HalfReuse: </9 HalfReuse: & DisplayName/12 AsIs: e.Name#1/15 HalfReuse: >/8 HalfReuse: ';'/1 } )/20 Tile{ ]] }
    refalrts::alloc_open_bracket(vm, context[17]);
    refalrts::alloc_chars(vm, context[18], context[19], "$FORWA", 6);
    refalrts::alloc_close_bracket(vm, context[20]);
    refalrts::reinit_char(context[0], 'R');
    refalrts::reinit_char(context[4], 'D');
    refalrts::reinit_char(context[7], ' ');
    refalrts::reinit_open_call(context[9]);
    refalrts::reinit_name(context[12], functions[efunc_DisplayName]);
    refalrts::reinit_close_call(context[8]);
    refalrts::reinit_char(context[1], ';');
    refalrts::link_brackets( context[17], context[20] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[17], context[19] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Element/4 (/7 # Inline/9 e.Name#1/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_Inline], context[9] ) )
      continue;
    // closed e.Name#1 as range 10
    //DEBUG: e.Name#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/12"$INLIN"/13 Tile{ HalfReuse: 'E'/0 HalfReuse: ' '/4 HalfReuse: </7 HalfReuse: & DisplayName/9 AsIs: e.Name#1/10 HalfReuse: >/8 HalfReuse: ';'/1 } )/15 Tile{ ]] }
    refalrts::alloc_open_bracket(vm, context[12]);
    refalrts::alloc_chars(vm, context[13], context[14], "$INLIN", 6);
    refalrts::alloc_close_bracket(vm, context[15]);
    refalrts::reinit_char(context[0], 'E');
    refalrts::reinit_char(context[4], ' ');
    refalrts::reinit_open_call(context[7]);
    refalrts::reinit_name(context[9], functions[efunc_DisplayName]);
    refalrts::reinit_close_call(context[8]);
    refalrts::reinit_char(context[1], ';');
    refalrts::link_brackets( context[12], context[15] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[12], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Element/4 (/7 # Drive/9 e.Name#1/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_Drive], context[9] ) )
      continue;
    // closed e.Name#1 as range 10
    //DEBUG: e.Name#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/12"$DRIV"/13 Tile{ HalfReuse: 'E'/0 HalfReuse: ' '/4 HalfReuse: </7 HalfReuse: & DisplayName/9 AsIs: e.Name#1/10 HalfReuse: >/8 HalfReuse: ';'/1 } )/15 Tile{ ]] }
    refalrts::alloc_open_bracket(vm, context[12]);
    refalrts::alloc_chars(vm, context[13], context[14], "$DRIV", 5);
    refalrts::alloc_close_bracket(vm, context[15]);
    refalrts::reinit_char(context[0], 'E');
    refalrts::reinit_char(context[4], ' ');
    refalrts::reinit_open_call(context[7]);
    refalrts::reinit_name(context[9], functions[efunc_DisplayName]);
    refalrts::reinit_close_call(context[8]);
    refalrts::reinit_char(context[1], ';');
    refalrts::link_brackets( context[12], context[15] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[12], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Element/4 (/7 # Ident/9 e.Name#1/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_Ident], context[9] ) )
      continue;
    // closed e.Name#1 as range 10
    //DEBUG: e.Name#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/12"$LABE"/13 Tile{ HalfReuse: 'L'/0 HalfReuse: ' '/4 HalfReuse: </7 HalfReuse: & DisplayName/9 AsIs: e.Name#1/10 HalfReuse: >/8 HalfReuse: ';'/1 } )/15 Tile{ ]] }
    refalrts::alloc_open_bracket(vm, context[12]);
    refalrts::alloc_chars(vm, context[13], context[14], "$LABE", 5);
    refalrts::alloc_close_bracket(vm, context[15]);
    refalrts::reinit_char(context[0], 'L');
    refalrts::reinit_char(context[4], ' ');
    refalrts::reinit_open_call(context[7]);
    refalrts::reinit_name(context[9], functions[efunc_DisplayName]);
    refalrts::reinit_close_call(context[8]);
    refalrts::reinit_char(context[1], ';');
    refalrts::link_brackets( context[12], context[15] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[12], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Element/4 (/7 s.new#3/9 t.new#4/12 e.new#5/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    context[13] = refalrts::tvar_left( context[12], context[10], context[11] );
    if( ! context[13] )
      continue;
    // closed e.new#5 as range 10
    do {
      // </0 & Element/4 (/7 # NativeBlock/9 t.SrcPos#1/12 e.Code#1/14 )/8 >/1
      context[14] = context[10];
      context[15] = context[11];
      if( ! refalrts::ident_term( identifiers[ident_NativeBlock], context[9] ) )
        continue;
      // closed e.Code#1 as range 14
      //DEBUG: t.SrcPos#1: 12
      //DEBUG: e.Code#1: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} t.SrcPos#1/12 e.Code#1/14 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: '%'/4 HalfReuse: '%'/7 HalfReuse: ' '/9 }"native block %"/16 Tile{ HalfReuse: '%'/8 HalfReuse: )/1 ]] }
      refalrts::alloc_chars(vm, context[16], context[17], "native block %", 14);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_char(context[4], '%');
      refalrts::reinit_char(context[7], '%');
      refalrts::reinit_char(context[9], ' ');
      refalrts::reinit_char(context[8], '%');
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[0], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[16], context[17] );
      refalrts::splice_to_freelist_open( vm, context[9], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Element/4 (/7 # Spec/9 (/12 e.Name#1/16 )/13 e.Pattern#1/14 )/8 >/1
    context[14] = context[10];
    context[15] = context[11];
    context[16] = 0;
    context[17] = 0;
    if( ! refalrts::brackets_term( context[16], context[17], context[12] ) )
      continue;
    if( ! refalrts::ident_term( identifiers[ident_Spec], context[9] ) )
      continue;
    // closed e.Name#1 as range 16
    // closed e.Pattern#1 as range 14
    //DEBUG: e.Name#1: 16
    //DEBUG: e.Pattern#1: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/18"$SP"/19 Tile{ HalfReuse: 'E'/0 HalfReuse: 'C'/4 HalfReuse: ' '/7 HalfReuse: </9 HalfReuse: & DisplayName/12 AsIs: e.Name#1/16 HalfReuse: >/13 } ' '/21 </22 & InlineExpr/23 Tile{ AsIs: e.Pattern#1/14 } >/24 Tile{ HalfReuse: ';'/8 HalfReuse: )/1 ]] }
    refalrts::alloc_open_bracket(vm, context[18]);
    refalrts::alloc_chars(vm, context[19], context[20], "$SP", 3);
    refalrts::alloc_char(vm, context[21], ' ');
    refalrts::alloc_open_call(vm, context[22]);
    refalrts::alloc_name(vm, context[23], functions[efunc_InlineExpr]);
    refalrts::alloc_close_call(vm, context[24]);
    refalrts::reinit_char(context[0], 'E');
    refalrts::reinit_char(context[4], 'C');
    refalrts::reinit_char(context[7], ' ');
    refalrts::reinit_open_call(context[9]);
    refalrts::reinit_name(context[12], functions[efunc_DisplayName]);
    refalrts::reinit_close_call(context[13]);
    refalrts::reinit_char(context[8], ';');
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[18], context[1] );
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[22] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[24], context[24] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[21], context[23] );
    res = refalrts::splice_evar( res, context[0], context[13] );
    res = refalrts::splice_evar( res, context[18], context[20] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Element/4 (/7 # DriveInfo/9 e.DriveInfo#1/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_DriveInfo], context[9] ) )
      continue;
    // closed e.DriveInfo#1 as range 10
    //DEBUG: e.DriveInfo#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} e.DriveInfo#1/10 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: '('/4 HalfReuse: 'D'/7 HalfReuse: 'r'/9 }"iveInfo ..."/12 Tile{ HalfReuse: ')'/8 HalfReuse: )/1 ]] }
    refalrts::alloc_chars(vm, context[12], context[13], "iveInfo ...", 11);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_char(context[4], '(');
    refalrts::reinit_char(context[7], 'D');
    refalrts::reinit_char(context[9], 'r');
    refalrts::reinit_char(context[8], ')');
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::splice_to_freelist_open( vm, context[9], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Element/4 (/7 # SpecInfo/9 e.SpecInfo#1/5 )/8 >/1
  if( ! refalrts::ident_term( identifiers[ident_SpecInfo], context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.SpecInfo#1 as range 5
  //DEBUG: e.SpecInfo#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} e.SpecInfo#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: '('/4 HalfReuse: 'S'/7 HalfReuse: 'p'/9 }"ecInfo ..."/10 Tile{ HalfReuse: ')'/8 HalfReuse: )/1 ]] }
  refalrts::alloc_chars(vm, context[10], context[11], "ecInfo ...", 10);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_char(context[4], '(');
  refalrts::reinit_char(context[7], 'S');
  refalrts::reinit_char(context[9], 'p');
  refalrts::reinit_char(context[8], ')');
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::splice_to_freelist_open( vm, context[9], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Element("Element", COOKIE1_, COOKIE2_, func_Element);


static refalrts::FnResult func_MAXm_LINE(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & MAX-LINE/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & MAX-LINE/4 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: 77/1 ]] }
  refalrts::reinit_number(context[1], 77UL);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MAXm_LINE("MAX-LINE", COOKIE1_, COOKIE2_, func_MAXm_LINE);


static refalrts::FnResult func_gen_LongLine_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & LongLine:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & LongLine:1/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & LongLine:1/4 '+'/5 >/1
    if( ! refalrts::char_term( '+', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & LongLine:1/4 '+'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_True]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & LongLine:1/4 s._#3/5 >/1
  //DEBUG: s._#3: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & LongLine:1/4 s._#3/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_False]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LongLine_B1("LongLine:1", COOKIE1_, COOKIE2_, func_gen_LongLine_B1);


static refalrts::FnResult func_gen_LongLine_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & LongLine=1/4 s.Len#2/5 e.Line#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Line#2 as range 2
  //DEBUG: s.Len#2: 5
  //DEBUG: e.Line#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Line#2/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & LongLine:1/4 } </6 & Compare/7 Tile{ AsIs: s.Len#2/5 } </8 & MAX-LINE/9 >/10 >/11 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Compare]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_MAXm_LINE]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_gen_LongLine_B1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LongLine_A1("LongLine=1", COOKIE1_, COOKIE2_, func_gen_LongLine_A1);


static refalrts::FnResult func_LongLine(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & LongLine/4 e.Line#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Line#1 as range 2
  //DEBUG: e.Line#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & LongLine=1/6 Tile{ AsIs: </0 Reuse: & Lenw/4 AsIs: e.Line#1/2 AsIs: >/1 } >/7 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_LongLine_A1]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_Lenw]);
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

static refalrts::NativeReference nat_ref_LongLine("LongLine", COOKIE1_, COOKIE2_, func_LongLine);


static refalrts::FnResult func_Function(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & Function/4 (/7 e.Name#1/5 )/8 s.Scope#1/9 e.Body#1/2 >/1
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
  // closed e.Name#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Body#1 as range 2
  //DEBUG: e.Name#1: 5
  //DEBUG: s.Scope#1: 9
  //DEBUG: e.Body#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Function-Aux/4 AsIs: (/7 } </10 & DisplayName/11 Tile{ AsIs: e.Name#1/5 } >/12 Tile{ AsIs: )/8 AsIs: s.Scope#1/9 AsIs: e.Body#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_DisplayName]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::update_name(context[4], functions[efunc_Functionm_Aux]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Function("Function", COOKIE1_, COOKIE2_, func_Function);


static refalrts::FnResult func_ColdFunction(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ColdFunction/4 (/7 e.Name#1/5 )/8 s.Scope#1/9 e.Body#1/2 >/1
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
  // closed e.Name#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Body#1 as range 2
  //DEBUG: e.Name#1: 5
  //DEBUG: s.Scope#1: 9
  //DEBUG: e.Body#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Function-Aux/4 AsIs: (/7 }"* "/10 </12 & DisplayName/13 Tile{ AsIs: e.Name#1/5 } >/14" *"/15 Tile{ AsIs: )/8 AsIs: s.Scope#1/9 AsIs: e.Body#1/2 AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[10], context[11], "* ", 2);
  refalrts::alloc_open_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_DisplayName]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::alloc_chars(vm, context[15], context[16], " *", 2);
  refalrts::update_name(context[4], functions[efunc_Functionm_Aux]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[14], context[16] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[10], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ColdFunction("ColdFunction", COOKIE1_, COOKIE2_, func_ColdFunction);


static refalrts::FnResult func_gen_Functionm_Aux_S3L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & Function-Aux$3\1/4 (/7 t.Ident#2/9 t.Name#2/11 )/8 >/1
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
  context[12] = refalrts::tvar_left( context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Ident#2: 9
  //DEBUG: t.Name#2: 11

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/13 ' '/14 Tile{ HalfReuse: ' '/0 HalfReuse: </4 HalfReuse: & InlineTerm/7 AsIs: t.Ident#2/9 } >/15" :: "/16 </18 & InlineTerm/19 Tile{ AsIs: t.Name#2/11 HalfReuse: >/8 HalfReuse: )/1 ]] }
  refalrts::alloc_open_bracket(vm, context[13]);
  refalrts::alloc_char(vm, context[14], ' ');
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::alloc_chars(vm, context[16], context[17], " :: ", 4);
  refalrts::alloc_open_call(vm, context[18]);
  refalrts::alloc_name(vm, context[19], functions[efunc_InlineTerm]);
  refalrts::reinit_char(context[0], ' ');
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_InlineTerm]);
  refalrts::reinit_close_call(context[8]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[13], context[1] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[11];
  res = refalrts::splice_evar( res, context[15], context[19] );
  res = refalrts::splice_evar( res, context[0], context[10] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Functionm_Aux_S3L1("Function-Aux$3\\1", COOKIE1_, COOKIE2_, func_gen_Functionm_Aux_S3L1);


static refalrts::FnResult func_Functionm_Aux(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & Function-Aux/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Function-Aux/4 (/7 e.new#1/5 )/8 s.new#2/9 s.new#3/10 e.new#4/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 2
  do {
    // </0 & Function-Aux/4 (/7 e.Name#1/11 )/8 s.Scope#1/9 # Sentences/10 e.Sentences#1/13 >/1
    context[11] = context[5];
    context[12] = context[6];
    context[13] = context[2];
    context[14] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Sentences], context[10] ) )
      continue;
    // closed e.Name#1 as range 11
    // closed e.Sentences#1 as range 13
    //DEBUG: s.Scope#1: 9
    //DEBUG: e.Name#1: 11
    //DEBUG: e.Sentences#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: )/4 AsIs: (/7 } </15 Tile{ HalfReuse: & Entry/8 AsIs: s.Scope#1/9 } >/16 Tile{ AsIs: e.Name#1/11 }" {"/17 )/19 </20 & Sentences/21 (/22"  "/23 Tile{ HalfReuse: )/10 AsIs: e.Sentences#1/13 AsIs: >/1 } (/25 '}'/26 )/27 (/28 )/29 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_close_call(vm, context[16]);
    refalrts::alloc_chars(vm, context[17], context[18], " {", 2);
    refalrts::alloc_close_bracket(vm, context[19]);
    refalrts::alloc_open_call(vm, context[20]);
    refalrts::alloc_name(vm, context[21], functions[efunc_Sentences]);
    refalrts::alloc_open_bracket(vm, context[22]);
    refalrts::alloc_chars(vm, context[23], context[24], "  ", 2);
    refalrts::alloc_open_bracket(vm, context[25]);
    refalrts::alloc_char(vm, context[26], '}');
    refalrts::alloc_close_bracket(vm, context[27]);
    refalrts::alloc_open_bracket(vm, context[28]);
    refalrts::alloc_close_bracket(vm, context[29]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_close_bracket(context[4]);
    refalrts::reinit_name(context[8], functions[efunc_Entry]);
    refalrts::reinit_close_bracket(context[10]);
    refalrts::link_brackets( context[28], context[29] );
    refalrts::link_brackets( context[25], context[27] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[20] );
    refalrts::link_brackets( context[22], context[10] );
    refalrts::link_brackets( context[7], context[19] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[15] );
    refalrts::link_brackets( context[0], context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[25], context[29] );
    res = refalrts::splice_evar( res, context[10], context[1] );
    res = refalrts::splice_evar( res, context[17], context[24] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Function-Aux/4 (/7 e.Name#1/11 )/8 s.Scope#1/9 # NativeBody/10 t.SrcPos#1/15 e.NativeBody#1/13 >/1
    context[11] = context[5];
    context[12] = context[6];
    context[13] = context[2];
    context[14] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_NativeBody], context[10] ) )
      continue;
    // closed e.Name#1 as range 11
    context[16] = refalrts::tvar_left( context[15], context[13], context[14] );
    if( ! context[16] )
      continue;
    // closed e.NativeBody#1 as range 13
    //DEBUG: s.Scope#1: 9
    //DEBUG: e.Name#1: 11
    //DEBUG: t.SrcPos#1: 15
    //DEBUG: e.NativeBody#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SrcPos#1/15 e.NativeBody#1/13 {REMOVED TILE}
    //RESULT: Tile{ [[ } (/17 </18 Tile{ HalfReuse: & Entry/10 } Tile{ AsIs: s.Scope#1/9 } Tile{ HalfReuse: >/0 HalfReuse: </4 HalfReuse: & DisplayName/7 AsIs: e.Name#1/11 HalfReuse: >/8 }" { %% native %% }"/19 Tile{ HalfReuse: )/1 ]] }
    refalrts::alloc_open_bracket(vm, context[17]);
    refalrts::alloc_open_call(vm, context[18]);
    refalrts::alloc_chars(vm, context[19], context[20], " { %% native %% }", 17);
    refalrts::reinit_name(context[10], functions[efunc_Entry]);
    refalrts::reinit_close_call(context[0]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[7], functions[efunc_DisplayName]);
    refalrts::reinit_close_call(context[8]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[17], context[1] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[4] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Function-Aux/4 (/7 e.Name#1/5 )/8 s.Scope#1/9 # Metatable/10 e.Metatable#1/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_Metatable], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 5
  // closed e.Metatable#1 as range 2
  //DEBUG: s.Scope#1: 9
  //DEBUG: e.Name#1: 5
  //DEBUG: e.Metatable#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: )/4 AsIs: (/7 } </11 Tile{ HalfReuse: & Entry/8 AsIs: s.Scope#1/9 } >/12 Tile{ AsIs: e.Name#1/5 }" {"/13 )/15 (/16"* metatable function"/17 )/19 </20 Tile{ HalfReuse: & Map@2/10 AsIs: e.Metatable#1/2 AsIs: >/1 } (/21 '}'/22 )/23 (/24 )/25 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_chars(vm, context[13], context[14], " {", 2);
  refalrts::alloc_close_bracket(vm, context[15]);
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::alloc_chars(vm, context[17], context[18], "* metatable function", 20);
  refalrts::alloc_close_bracket(vm, context[19]);
  refalrts::alloc_open_call(vm, context[20]);
  refalrts::alloc_open_bracket(vm, context[21]);
  refalrts::alloc_char(vm, context[22], '}');
  refalrts::alloc_close_bracket(vm, context[23]);
  refalrts::alloc_open_bracket(vm, context[24]);
  refalrts::alloc_close_bracket(vm, context[25]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::reinit_name(context[8], functions[efunc_Entry]);
  refalrts::reinit_name(context[10], functions[efunc_gen_Map_Z2]);
  refalrts::link_brackets( context[24], context[25] );
  refalrts::link_brackets( context[21], context[23] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[20] );
  refalrts::link_brackets( context[16], context[19] );
  refalrts::link_brackets( context[7], context[15] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[0], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[21], context[25] );
  res = refalrts::splice_evar( res, context[10], context[1] );
  res = refalrts::splice_evar( res, context[13], context[20] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Functionm_Aux("Function-Aux", COOKIE1_, COOKIE2_, func_Functionm_Aux);


static refalrts::FnResult func_Entry(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & Entry/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Entry/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & Entry/4 # GN-Entry/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: '$'/0 HalfReuse: 'E'/4 HalfReuse: 'N'/5 HalfReuse: 'T'/1 }"RY "/6 Tile{ ]] }
    refalrts::alloc_chars(vm, context[6], context[7], "RY ", 3);
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

  // </0 & Entry/4 # GN-Local/5 >/1
  if( ! refalrts::ident_term( identifiers[ident_GNm_Local], context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Entry/4 # GN-Local/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Entry("Entry", COOKIE1_, COOKIE2_, func_Entry);


static refalrts::FnResult func_Sentences(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & Sentences/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Sentences/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Sentences/4 (/7 e.new#5/9 )/8 (/15 e.new#3/13 )/16 e.new#4/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[11], context[12] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    // closed e.new#5 as range 9
    // closed e.new#3 as range 13
    // closed e.new#4 as range 11
    do {
      // </0 & Sentences/4 (/7 e.Indent#1/17 )/8 (/15 e.Sentence#1/19 )/16 >/1
      context[17] = context[9];
      context[18] = context[10];
      context[19] = context[13];
      context[20] = context[14];
      if( ! refalrts::empty_seq( context[11], context[12] ) )
        continue;
      // closed e.Indent#1 as range 17
      // closed e.Sentence#1 as range 19
      //DEBUG: e.Indent#1: 17
      //DEBUG: e.Sentence#1: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/15 {REMOVED TILE} )/16 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Sentence/4 AsIs: (/7 AsIs: e.Indent#1/17 AsIs: )/8 } Tile{ AsIs: e.Sentence#1/19 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Sentence]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::splice_to_freelist_open( vm, context[8], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Sentences/4 (/7 e.Indent#1/17 )/8 (/15 e.Sentence#1/19 )/16 e.Sentences#1/21 >/1
    context[17] = context[9];
    context[18] = context[10];
    context[19] = context[13];
    context[20] = context[14];
    context[21] = context[11];
    context[22] = context[12];
    // closed e.Indent#1 as range 17
    // closed e.Sentence#1 as range 19
    // closed e.Sentences#1 as range 21
    //DEBUG: e.Indent#1: 17
    //DEBUG: e.Sentence#1: 19
    //DEBUG: e.Sentences#1: 21

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Sentence/4 AsIs: (/7 AsIs: e.Indent#1/17 AsIs: )/8 } Tile{ AsIs: e.Sentence#1/19 } >/23 Tile{ AsIs: (/15 } )/24 </25 & Sentences/26 (/27 e.Indent#1/17/28 Tile{ AsIs: )/16 AsIs: e.Sentences#1/21 AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::alloc_close_bracket(vm, context[24]);
    refalrts::alloc_open_call(vm, context[25]);
    refalrts::alloc_name(vm, context[26], functions[efunc_Sentences]);
    refalrts::alloc_open_bracket(vm, context[27]);
    refalrts::copy_evar(vm, context[28], context[29], context[17], context[18]);
    refalrts::update_name(context[4], functions[efunc_Sentence]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[25] );
    refalrts::link_brackets( context[27], context[16] );
    refalrts::link_brackets( context[15], context[24] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[16];
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_evar( res, context[24], context[27] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Sentences/4 (/7 e.Indent#1/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Indent#1 as range 5
  //DEBUG: e.Indent#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Sentences/4 (/7 e.Indent#1/5 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Sentences("Sentences", COOKIE1_, COOKIE2_, func_Sentences);


static refalrts::FnResult func_Sentence(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
  // </0 & Sentence/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Sentence/4 (/7 e.new#1/5 )/8 t.new#2/9 e.new#3/2 >/1
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
  // closed e.new#3 as range 2
  do {
    // </0 & Sentence/4 (/7 s.Space#1/15 e.Indent#1/11 )/8 # Comment/9 e.Text#1/13 >/1
    context[11] = context[5];
    context[12] = context[6];
    context[13] = context[2];
    context[14] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Comment], context[9] ) )
      continue;
    // closed e.Text#1 as range 13
    if( ! refalrts::svar_left( context[15], context[11], context[12] ) )
      continue;
    // closed e.Indent#1 as range 11
    //DEBUG: e.Text#1: 13
    //DEBUG: s.Space#1: 15
    //DEBUG: e.Indent#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Space#1/15 {REMOVED TILE} )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutComment/4 AsIs: (/7 } Tile{ AsIs: e.Indent#1/11 } Tile{ HalfReuse: )/9 AsIs: e.Text#1/13 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_PutComment]);
    refalrts::reinit_close_bracket(context[9]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Sentence/4 (/7 e.new#6/5 )/8 (/9 e.new#4/11 )/10 e.new#5/2 >/1
  context[11] = 0;
  context[12] = 0;
  if( ! refalrts::brackets_term( context[11], context[12], context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#6 as range 5
  // closed e.new#4 as range 11
  // closed e.new#5 as range 2
  do {
    // </0 & Sentence/4 (/7 e.Indent#1/13 )/8 (/9 e.Pattern#1/15 )/10 (/21 e.Result#1/19 )/22 >/1
    context[13] = context[5];
    context[14] = context[6];
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
    if( ! refalrts::empty_seq( context[17], context[18] ) )
      continue;
    // closed e.Indent#1 as range 13
    // closed e.Pattern#1 as range 15
    // closed e.Result#1 as range 19
    //DEBUG: e.Indent#1: 13
    //DEBUG: e.Pattern#1: 15
    //DEBUG: e.Result#1: 19
    //13: e.Indent#1
    //15: e.Pattern#1
    //19: e.Result#1
    //26: e.Indent#1
    //30: e.Pattern#1
    //37: e.Result#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_name(vm, context[25], functions[efunc_gen_Sentence_S2C1]);
    refalrts::copy_evar(vm, context[26], context[27], context[13], context[14]);
    refalrts::alloc_open_call(vm, context[28]);
    refalrts::alloc_name(vm, context[29], functions[efunc_InlineExpr]);
    refalrts::copy_evar(vm, context[30], context[31], context[15], context[16]);
    refalrts::alloc_close_call(vm, context[32]);
    refalrts::alloc_chars(vm, context[33], context[34], " = ", 3);
    refalrts::alloc_open_call(vm, context[35]);
    refalrts::alloc_name(vm, context[36], functions[efunc_InlineExpr]);
    refalrts::copy_evar(vm, context[37], context[38], context[19], context[20]);
    refalrts::alloc_close_call(vm, context[39]);
    refalrts::alloc_char(vm, context[40], ';');
    refalrts::alloc_close_call(vm, context[24]);
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[23] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_elem( res, context[40] );
    refalrts::push_stack( vm, context[39] );
    refalrts::push_stack( vm, context[35] );
    res = refalrts::splice_elem( res, context[39] );
    res = refalrts::splice_evar( res, context[37], context[38] );
    res = refalrts::splice_elem( res, context[36] );
    res = refalrts::splice_elem( res, context[35] );
    res = refalrts::splice_evar( res, context[33], context[34] );
    refalrts::push_stack( vm, context[32] );
    refalrts::push_stack( vm, context[28] );
    res = refalrts::splice_elem( res, context[32] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_elem( res, context[23] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </23 & Sentence$2?1/27 e.OneLineSentence#2/25 >/24
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::call_left( context[25], context[26], context[23], context[24] );
      // closed e.OneLineSentence#2 as range 25
      //DEBUG: e.Indent#1: 13
      //DEBUG: e.Pattern#1: 15
      //DEBUG: e.Result#1: 19
      //DEBUG: e.OneLineSentence#2: 25
      //13: e.Indent#1
      //15: e.Pattern#1
      //19: e.Result#1
      //25: e.OneLineSentence#2
      //33: e.OneLineSentence#2

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[28]);
      refalrts::alloc_name(vm, context[30], functions[efunc_gen_Sentence_S2C2]);
      refalrts::alloc_open_call(vm, context[31]);
      refalrts::alloc_name(vm, context[32], functions[efunc_LongLine]);
      refalrts::copy_evar(vm, context[33], context[34], context[25], context[26]);
      refalrts::alloc_close_call(vm, context[35]);
      refalrts::alloc_close_call(vm, context[29]);
      refalrts::push_stack( vm, context[29] );
      refalrts::push_stack( vm, context[28] );
      res = refalrts::splice_elem( res, context[29] );
      refalrts::push_stack( vm, context[35] );
      refalrts::push_stack( vm, context[31] );
      res = refalrts::splice_elem( res, context[35] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      res = refalrts::splice_elem( res, context[32] );
      res = refalrts::splice_elem( res, context[31] );
      res = refalrts::splice_elem( res, context[30] );
      res = refalrts::splice_elem( res, context[28] );
      refalrts::use( res );
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function(vm);
      do {
        // </28 & Sentence$2?2/32 # False/33 >/29
        context[30] = 0;
        context[31] = 0;
        context[32] = refalrts::call_left( context[30], context[31], context[28], context[29] );
        context[33] = refalrts::ident_left( identifiers[ident_False], context[30], context[31] );
        if( ! context[33] )
          continue;
        if( ! refalrts::empty_seq( context[30], context[31] ) )
          continue;
        //DEBUG: e.Indent#1: 13
        //DEBUG: e.Pattern#1: 15
        //DEBUG: e.Result#1: 19
        //DEBUG: e.OneLineSentence#2: 25

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & Sentence/4 (/7 e.Indent#1/13 )/8 (/9 e.Pattern#1/15 )/10 (/21 e.Result#1/19 )/22 </23 {REMOVED TILE} </28 & Sentence$2?2/32 # False/33 >/29 >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: (/27 AsIs: e.OneLineSentence#2/25 HalfReuse: )/24 } Tile{ ]] }
        refalrts::reinit_open_bracket(context[27]);
        refalrts::reinit_close_bracket(context[24]);
        refalrts::link_brackets( context[27], context[24] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[27], context[24] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[28], context[29]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[23], context[24]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Sentence/4 (/7 e.Indent#1/5 )/8 (/9 e.Pattern#1/11 )/10 e.Tail#1/2 >/1
  // closed e.Indent#1 as range 5
  // closed e.Pattern#1 as range 11
  // closed e.Tail#1 as range 2
  //DEBUG: e.Indent#1: 5
  //DEBUG: e.Pattern#1: 11
  //DEBUG: e.Tail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Expression/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: (/9 } e.Indent#1/5/13 )/15 Tile{ AsIs: e.Pattern#1/11 } >/16 </17 & Tail/18 (/19 e.Indent#1/5/20"  "/22 Tile{ AsIs: )/10 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
  refalrts::copy_evar(vm, context[13], context[14], context[5], context[6]);
  refalrts::alloc_close_bracket(vm, context[15]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::alloc_open_call(vm, context[17]);
  refalrts::alloc_name(vm, context[18], functions[efunc_Tail]);
  refalrts::alloc_open_bracket(vm, context[19]);
  refalrts::copy_evar(vm, context[20], context[21], context[5], context[6]);
  refalrts::alloc_chars(vm, context[22], context[23], "  ", 2);
  refalrts::update_name(context[4], functions[efunc_Expression]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[17] );
  refalrts::link_brackets( context[19], context[10] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[9], context[15] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[10];
  res = refalrts::splice_evar( res, context[16], context[23] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Sentence("Sentence", COOKIE1_, COOKIE2_, func_Sentence);


static refalrts::FnResult func_InlineExpr(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & InlineExpr/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & InlineExpr/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: '/'/0 HalfReuse: '*'/4 HalfReuse: ' '/1 }"empty */"/5 Tile{ ]] }
    refalrts::alloc_chars(vm, context[5], context[6], "empty */", 8);
    refalrts::reinit_char(context[0], '/');
    refalrts::reinit_char(context[4], '*');
    refalrts::reinit_char(context[1], ' ');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & InlineExpr/4 e.Expr#1/2 >/1
  // closed e.Expr#1 as range 2
  //DEBUG: e.Expr#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & InlineSubexpr/4 AsIs: e.Expr#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_InlineSubexpr]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_InlineExpr("InlineExpr", COOKIE1_, COOKIE2_, func_InlineExpr);


static refalrts::FnResult func_PutComment(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & PutComment/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & PutComment/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & PutComment/4 (/7 e.Indent#1/9 )/8 e.Comment#1/13 '\n'/17 e.Tail#1/15 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.Indent#1 as range 9
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[15] = context[11];
      context[16] = context[12];
      context[17] = refalrts::char_left( '\n', context[15], context[16] );
      if( ! context[17] )
        continue;
      // closed e.Tail#1 as range 15
      //DEBUG: e.Indent#1: 9
      //DEBUG: e.Comment#1: 13
      //DEBUG: e.Tail#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/18 Tile{ Reuse: '*'/17 } e.Indent#1/9/19 Tile{ AsIs: e.Comment#1/13 } )/21 Tile{ AsIs: </0 AsIs: & PutComment/4 AsIs: (/7 AsIs: e.Indent#1/9 AsIs: )/8 } Tile{ AsIs: e.Tail#1/15 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[18]);
      refalrts::copy_evar(vm, context[19], context[20], context[9], context[10]);
      refalrts::alloc_close_bracket(vm, context[21]);
      refalrts::update_char(context[17], '*');
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[18], context[21] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[0], context[8] );
      res = refalrts::splice_evar( res, context[21], context[21] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[17], context[17] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[13], context[14], context[11], context[12] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PutComment/4 (/7 e.Indent#1/5 )/8 e.Comment#1/2 >/1
  // closed e.Indent#1 as range 5
  // closed e.Comment#1 as range 2
  //DEBUG: e.Indent#1: 5
  //DEBUG: e.Comment#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: '*'/4 } Tile{ AsIs: e.Indent#1/5 } Tile{ AsIs: e.Comment#1/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_char(context[4], '*');
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PutComment("PutComment", COOKIE1_, COOKIE2_, func_PutComment);


static refalrts::FnResult func_gen_Tail_S1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 72 elems
  refalrts::Iter context[72];
  refalrts::zeros( context, 72 );
  // </0 & Tail$1:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Tail$1:1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 (/15 e.new#3/13 )/16 (/19 e.new#4/17 )/20 (/23 e.new#5/21 )/24 (/27 e.new#6/25 )/28 s.new#7/29 >/1
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
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  // closed e.new#3 as range 13
  // closed e.new#4 as range 17
  // closed e.new#5 as range 21
  // closed e.new#6 as range 25
  if( ! refalrts::svar_left( context[29], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & Tail$1:1/4 (/7 e.Indent#1/30 )/8 (/11 e.Name#1/32 )/12 (/15 e.Result#1/34 )/16 (/19 e.Pattern#1/36 )/20 (/23 e.Tail#1/38 )/24 (/27 e.OneLineCondition#2/40 )/28 # True/29 >/1
    context[30] = context[5];
    context[31] = context[6];
    context[32] = context[9];
    context[33] = context[10];
    context[34] = context[13];
    context[35] = context[14];
    context[36] = context[17];
    context[37] = context[18];
    context[38] = context[21];
    context[39] = context[22];
    context[40] = context[25];
    context[41] = context[26];
    if( ! refalrts::ident_term( identifiers[ident_True], context[29] ) )
      continue;
    // closed e.Indent#1 as range 30
    // closed e.Name#1 as range 32
    // closed e.Result#1 as range 34
    // closed e.Pattern#1 as range 36
    // closed e.Tail#1 as range 38
    // closed e.OneLineCondition#2 as range 40
    //DEBUG: e.Indent#1: 30
    //DEBUG: e.Name#1: 32
    //DEBUG: e.Result#1: 34
    //DEBUG: e.Pattern#1: 36
    //DEBUG: e.Tail#1: 38
    //DEBUG: e.OneLineCondition#2: 40

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.OneLineCondition#2/40 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/42 e.Indent#1/30/43"  /* "/45 </47 & DisplayName/48 Tile{ AsIs: e.Name#1/32 } >/49" */"/50 Tile{ AsIs: )/28 HalfReuse: </29 } & Expression/52 Tile{ AsIs: (/11 } e.Indent#1/30/53", "/55 Tile{ AsIs: )/24 AsIs: (/27 } e.Indent#1/30/57 ' '/59 Tile{ HalfReuse: ' '/12 HalfReuse: )/15 AsIs: e.Result#1/34 HalfReuse: >/16 HalfReuse: </19 } & Expression/60 (/61 e.Indent#1/30/62": "/64 Tile{ AsIs: )/20 AsIs: (/23 } e.Indent#1/30/66"  "/68 )/70 Tile{ AsIs: e.Pattern#1/36 } >/71 Tile{ AsIs: </0 Reuse: & Tail/4 AsIs: (/7 AsIs: e.Indent#1/30 AsIs: )/8 } Tile{ AsIs: e.Tail#1/38 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[42]);
    refalrts::copy_evar(vm, context[43], context[44], context[30], context[31]);
    refalrts::alloc_chars(vm, context[45], context[46], "  /* ", 5);
    refalrts::alloc_open_call(vm, context[47]);
    refalrts::alloc_name(vm, context[48], functions[efunc_DisplayName]);
    refalrts::alloc_close_call(vm, context[49]);
    refalrts::alloc_chars(vm, context[50], context[51], " */", 3);
    refalrts::alloc_name(vm, context[52], functions[efunc_Expression]);
    refalrts::copy_evar(vm, context[53], context[54], context[30], context[31]);
    refalrts::alloc_chars(vm, context[55], context[56], ", ", 2);
    refalrts::copy_evar(vm, context[57], context[58], context[30], context[31]);
    refalrts::alloc_char(vm, context[59], ' ');
    refalrts::alloc_name(vm, context[60], functions[efunc_Expression]);
    refalrts::alloc_open_bracket(vm, context[61]);
    refalrts::copy_evar(vm, context[62], context[63], context[30], context[31]);
    refalrts::alloc_chars(vm, context[64], context[65], ": ", 2);
    refalrts::copy_evar(vm, context[66], context[67], context[30], context[31]);
    refalrts::alloc_chars(vm, context[68], context[69], "  ", 2);
    refalrts::alloc_close_bracket(vm, context[70]);
    refalrts::alloc_close_call(vm, context[71]);
    refalrts::reinit_open_call(context[29]);
    refalrts::reinit_char(context[12], ' ');
    refalrts::reinit_close_bracket(context[15]);
    refalrts::reinit_close_call(context[16]);
    refalrts::reinit_open_call(context[19]);
    refalrts::update_name(context[4], functions[efunc_Tail]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( vm, context[71] );
    refalrts::push_stack( vm, context[19] );
    refalrts::link_brackets( context[23], context[70] );
    refalrts::link_brackets( context[61], context[20] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[29] );
    refalrts::link_brackets( context[27], context[15] );
    refalrts::link_brackets( context[11], context[24] );
    refalrts::link_brackets( context[42], context[28] );
    refalrts::push_stack( vm, context[49] );
    refalrts::push_stack( vm, context[47] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[38], context[39] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[71], context[71] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    res = refalrts::splice_evar( res, context[68], context[70] );
    res = refalrts::splice_evar( res, context[66], context[67] );
    res = refalrts::splice_evar( res, context[20], context[23] );
    res = refalrts::splice_evar( res, context[60], context[65] );
    res = refalrts::splice_evar( res, context[12], context[19] );
    res = refalrts::splice_evar( res, context[59], context[59] );
    res = refalrts::splice_evar( res, context[57], context[58] );
    res = refalrts::splice_evar( res, context[24], context[27] );
    res = refalrts::splice_evar( res, context[55], context[56] );
    res = refalrts::splice_evar( res, context[53], context[54] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[52], context[52] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_evar( res, context[49], context[51] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_evar( res, context[42], context[48] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Tail$1:1/4 (/7 e.Indent#1/5 )/8 (/11 e.Name#1/9 )/12 (/15 e.Result#1/13 )/16 (/19 e.Pattern#1/17 )/20 (/23 e.Tail#1/21 )/24 (/27 e.OneLineCondition#2/25 )/28 # False/29 >/1
  if( ! refalrts::ident_term( identifiers[ident_False], context[29] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Indent#1 as range 5
  // closed e.Name#1 as range 9
  // closed e.Result#1 as range 13
  // closed e.Pattern#1 as range 17
  // closed e.Tail#1 as range 21
  // closed e.OneLineCondition#2 as range 25
  //DEBUG: e.Indent#1: 5
  //DEBUG: e.Name#1: 9
  //DEBUG: e.Result#1: 13
  //DEBUG: e.Pattern#1: 17
  //DEBUG: e.Tail#1: 21
  //DEBUG: e.OneLineCondition#2: 25

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Result#1/13 {REMOVED TILE} e.Pattern#1/17 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 } e.Indent#1/5/30 Tile{ HalfReuse: ' '/16 HalfReuse: ' '/19 } Tile{ HalfReuse: '/'/4 } Tile{ HalfReuse: '*'/20 HalfReuse: ' '/23 } </32 Tile{ HalfReuse: & DisplayName/11 AsIs: e.Name#1/9 HalfReuse: >/12 HalfReuse: ' '/15 }"*/"/33 Tile{ AsIs: )/24 AsIs: (/27 AsIs: e.OneLineCondition#2/25 AsIs: )/28 HalfReuse: </29 HalfReuse: & Tail/1 } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 } Tile{ AsIs: e.Tail#1/21 } >/35 Tile{ ]] }
  refalrts::copy_evar(vm, context[30], context[31], context[5], context[6]);
  refalrts::alloc_open_call(vm, context[32]);
  refalrts::alloc_chars(vm, context[33], context[34], "*/", 2);
  refalrts::alloc_close_call(vm, context[35]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_char(context[16], ' ');
  refalrts::reinit_char(context[19], ' ');
  refalrts::reinit_char(context[4], '/');
  refalrts::reinit_char(context[20], '*');
  refalrts::reinit_char(context[23], ' ');
  refalrts::reinit_name(context[11], functions[efunc_DisplayName]);
  refalrts::reinit_close_call(context[12]);
  refalrts::reinit_char(context[15], ' ');
  refalrts::reinit_open_call(context[29]);
  refalrts::reinit_name(context[1], functions[efunc_Tail]);
  refalrts::push_stack( vm, context[35] );
  refalrts::push_stack( vm, context[29] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[27], context[28] );
  refalrts::link_brackets( context[0], context[24] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[32] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[35], context[35] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[24], context[1] );
  res = refalrts::splice_evar( res, context[33], context[34] );
  res = refalrts::splice_evar( res, context[11], context[15] );
  res = refalrts::splice_evar( res, context[32], context[32] );
  res = refalrts::splice_evar( res, context[20], context[23] );
  res = refalrts::splice_evar( res, context[4], context[4] );
  res = refalrts::splice_evar( res, context[16], context[19] );
  res = refalrts::splice_evar( res, context[30], context[31] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Tail_S1B1("Tail$1:1", COOKIE1_, COOKIE2_, func_gen_Tail_S1B1);


static refalrts::FnResult func_gen_Tail_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  // </0 & Tail$1=1/4 (/7 e.Indent#1/5 )/8 (/11 e.Name#1/9 )/12 (/15 e.Result#1/13 )/16 (/19 e.Pattern#1/17 )/20 (/23 e.Tail#1/21 )/24 e.OneLineCondition#2/2 >/1
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
  // closed e.Indent#1 as range 5
  // closed e.Name#1 as range 9
  // closed e.Result#1 as range 13
  // closed e.Pattern#1 as range 17
  // closed e.Tail#1 as range 21
  // closed e.OneLineCondition#2 as range 2
  //DEBUG: e.Indent#1: 5
  //DEBUG: e.Name#1: 9
  //DEBUG: e.Result#1: 13
  //DEBUG: e.Pattern#1: 17
  //DEBUG: e.Tail#1: 21
  //DEBUG: e.OneLineCondition#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Tail$1:1/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Name#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Result#1/13 AsIs: )/16 AsIs: (/19 AsIs: e.Pattern#1/17 AsIs: )/20 AsIs: (/23 AsIs: e.Tail#1/21 AsIs: )/24 } (/25 e.OneLineCondition#2/2/26 )/28 </29 & LongLine/30 Tile{ AsIs: e.OneLineCondition#2/2 } >/31 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[25]);
  refalrts::copy_evar(vm, context[26], context[27], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[28]);
  refalrts::alloc_open_call(vm, context[29]);
  refalrts::alloc_name(vm, context[30], functions[efunc_LongLine]);
  refalrts::alloc_close_call(vm, context[31]);
  refalrts::update_name(context[4], functions[efunc_gen_Tail_S1B1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[31] );
  refalrts::push_stack( vm, context[29] );
  refalrts::link_brackets( context[25], context[28] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[31], context[31] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[25], context[30] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Tail_S1A1("Tail$1=1", COOKIE1_, COOKIE2_, func_gen_Tail_S1A1);


static refalrts::FnResult func_Tail(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 47 elems
  refalrts::Iter context[47];
  refalrts::zeros( context, 47 );
  // </0 & Tail/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Tail/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 e.new#3/2 >/1
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
    // </0 & Tail/4 (/7 e.Indent#1/13 )/8 (/11 # Condition/19 (/22 e.Name#1/20 )/23 (/26 e.Result#1/24 )/27 (/30 e.Pattern#1/28 )/31 )/12 e.Tail#1/17 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[2];
    context[18] = context[3];
    context[19] = refalrts::ident_left( identifiers[ident_Condition], context[15], context[16] );
    if( ! context[19] )
      continue;
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_left( context[20], context[21], context[15], context[16] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    context[24] = 0;
    context[25] = 0;
    context[26] = refalrts::brackets_left( context[24], context[25], context[15], context[16] );
    if( ! context[26] )
      continue;
    refalrts::bracket_pointers(context[26], context[27]);
    context[28] = 0;
    context[29] = 0;
    context[30] = refalrts::brackets_left( context[28], context[29], context[15], context[16] );
    if( ! context[30] )
      continue;
    refalrts::bracket_pointers(context[30], context[31]);
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    // closed e.Indent#1 as range 13
    // closed e.Name#1 as range 20
    // closed e.Result#1 as range 24
    // closed e.Pattern#1 as range 28
    // closed e.Tail#1 as range 17
    //DEBUG: e.Indent#1: 13
    //DEBUG: e.Name#1: 20
    //DEBUG: e.Result#1: 24
    //DEBUG: e.Pattern#1: 28
    //DEBUG: e.Tail#1: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Tail$1=1/4 AsIs: (/7 } Tile{ AsIs: e.Indent#1/13 } Tile{ HalfReuse: )/19 AsIs: (/22 AsIs: e.Name#1/20 AsIs: )/23 AsIs: (/26 AsIs: e.Result#1/24 AsIs: )/27 AsIs: (/30 AsIs: e.Pattern#1/28 AsIs: )/31 HalfReuse: (/12 AsIs: e.Tail#1/17 HalfReuse: )/1 } e.Indent#1/13/32 Tile{ HalfReuse: ','/8 HalfReuse: ' '/11 } </34 & InlineExpr/35 e.Result#1/24/36 >/38" : "/39 </41 & InlineExpr/42 e.Pattern#1/28/43 >/45 >/46 Tile{ ]] }
    refalrts::copy_evar(vm, context[32], context[33], context[13], context[14]);
    refalrts::alloc_open_call(vm, context[34]);
    refalrts::alloc_name(vm, context[35], functions[efunc_InlineExpr]);
    refalrts::copy_evar(vm, context[36], context[37], context[24], context[25]);
    refalrts::alloc_close_call(vm, context[38]);
    refalrts::alloc_chars(vm, context[39], context[40], " : ", 3);
    refalrts::alloc_open_call(vm, context[41]);
    refalrts::alloc_name(vm, context[42], functions[efunc_InlineExpr]);
    refalrts::copy_evar(vm, context[43], context[44], context[28], context[29]);
    refalrts::alloc_close_call(vm, context[45]);
    refalrts::alloc_close_call(vm, context[46]);
    refalrts::update_name(context[4], functions[efunc_gen_Tail_S1A1]);
    refalrts::reinit_close_bracket(context[19]);
    refalrts::reinit_open_bracket(context[12]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::reinit_char(context[8], ',');
    refalrts::reinit_char(context[11], ' ');
    refalrts::push_stack( vm, context[46] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[45] );
    refalrts::push_stack( vm, context[41] );
    refalrts::push_stack( vm, context[38] );
    refalrts::push_stack( vm, context[34] );
    refalrts::link_brackets( context[12], context[1] );
    refalrts::link_brackets( context[30], context[31] );
    refalrts::link_brackets( context[26], context[27] );
    refalrts::link_brackets( context[22], context[23] );
    refalrts::link_brackets( context[7], context[19] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[34], context[46] );
    res = refalrts::splice_evar( res, context[8], context[11] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_evar( res, context[19], context[1] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Tail/4 (/7 e.Indent#1/5 )/8 (/11 e.Result#1/9 )/12 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Indent#1 as range 5
  // closed e.Result#1 as range 9
  //DEBUG: e.Indent#1: 5
  //DEBUG: e.Result#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Expression/4 AsIs: (/7 AsIs: e.Indent#1/5 HalfReuse: '='/8 HalfReuse: ' '/11 } )/13 (/14 e.Indent#1/5/15"  "/17 )/19 Tile{ AsIs: e.Result#1/9 } Tile{ HalfReuse: ';'/12 AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::alloc_open_bracket(vm, context[14]);
  refalrts::copy_evar(vm, context[15], context[16], context[5], context[6]);
  refalrts::alloc_chars(vm, context[17], context[18], "  ", 2);
  refalrts::alloc_close_bracket(vm, context[19]);
  refalrts::update_name(context[4], functions[efunc_Expression]);
  refalrts::reinit_char(context[8], '=');
  refalrts::reinit_char(context[11], ' ');
  refalrts::reinit_char(context[12], ';');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[14], context[19] );
  refalrts::link_brackets( context[7], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[12];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[13], context[19] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Tail("Tail", COOKIE1_, COOKIE2_, func_Tail);


static refalrts::FnResult func_Expression(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & Expression/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Expression/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 e.new#3/2 >/1
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
    // </0 & Expression/4 (/7 e.Prefix#1/13 )/8 (/11 e.Indent#1/15 )/12 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Prefix#1 as range 13
    // closed e.Indent#1 as range 15
    //DEBUG: e.Prefix#1: 13
    //DEBUG: e.Indent#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Indent#1/15 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Prefix#1/13 HalfReuse: '/'/8 HalfReuse: '*'/11 } ' '/17 Tile{ HalfReuse: 'e'/0 HalfReuse: 'm'/4 }"pty *"/18 Tile{ HalfReuse: '/'/12 HalfReuse: )/1 ]] }
    refalrts::alloc_char(vm, context[17], ' ');
    refalrts::alloc_chars(vm, context[18], context[19], "pty *", 5);
    refalrts::reinit_char(context[8], '/');
    refalrts::reinit_char(context[11], '*');
    refalrts::reinit_char(context[0], 'e');
    refalrts::reinit_char(context[4], 'm');
    refalrts::reinit_char(context[12], '/');
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Expression/4 (/7 e.Prefix#1/5 )/8 (/11 e.Indent#1/9 )/12 e.Expression#1/2 >/1
  // closed e.Prefix#1 as range 5
  // closed e.Indent#1 as range 9
  // closed e.Expression#1 as range 2
  //DEBUG: e.Prefix#1: 5
  //DEBUG: e.Indent#1: 9
  //DEBUG: e.Expression#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoExpression/4 HalfReuse: # FIRST/7 } (/13 Tile{ AsIs: e.Indent#1/9 } Tile{ AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Prefix#1/5 } Tile{ AsIs: )/12 AsIs: e.Expression#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_DoExpression]);
  refalrts::reinit_ident(context[7], identifiers[ident_FIRST]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[13], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[12];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Expression("Expression", COOKIE1_, COOKIE2_, func_Expression);


static refalrts::FnResult func_gen_DoExpression_S3B1S1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 48 elems
  refalrts::Iter context[48];
  refalrts::zeros( context, 48 );
  // </0 & DoExpression$3:1$1:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoExpression$3:1$1:1/4 (/7 e.new#1/5 )/8 s.new#2/9 (/12 e.new#3/10 )/13 (/16 e.new#4/14 )/17 t.new#5/18 (/22 e.new#6/20 )/23 s.new#7/24 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
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
  // closed e.new#3 as range 10
  // closed e.new#4 as range 14
  context[19] = refalrts::tvar_left( context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  context[20] = 0;
  context[21] = 0;
  context[22] = refalrts::brackets_left( context[20], context[21], context[2], context[3] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[22], context[23]);
  // closed e.new#6 as range 20
  if( ! refalrts::svar_left( context[24], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & DoExpression$3:1$1:1/4 (/7 e.new#10/25 )/8 s.new#8/9 (/12 e.new#11/27 )/13 (/16 e.new#12/29 )/17 t.new#9/18 (/22 e.new#13/31 )/23 # True/24 >/1
    context[25] = context[5];
    context[26] = context[6];
    context[27] = context[10];
    context[28] = context[11];
    context[29] = context[14];
    context[30] = context[15];
    context[31] = context[20];
    context[32] = context[21];
    if( ! refalrts::ident_term( identifiers[ident_True], context[24] ) )
      continue;
    // closed e.new#10 as range 25
    // closed e.new#11 as range 27
    // closed e.new#12 as range 29
    // closed e.new#13 as range 31
    do {
      // </0 & DoExpression$3:1$1:1/4 (/7 e.Expr#1/33 )/8 s.Pos#1/9 (/12 e.OutLine#1/35 )/13 (/16 e.Indent#1/37 )/17 t.NextTerm#1/18 (/22 e.OutLineTerm#5/39 )/23 # True/24 >/1
      context[33] = context[25];
      context[34] = context[26];
      context[35] = context[27];
      context[36] = context[28];
      context[37] = context[29];
      context[38] = context[30];
      context[39] = context[31];
      context[40] = context[32];
      // closed e.Expr#1 as range 33
      // closed e.OutLine#1 as range 35
      // closed e.Indent#1 as range 37
      // closed e.OutLineTerm#5 as range 39
      //DEBUG: t.NextTerm#1: 18
      //DEBUG: s.Pos#1: 9
      //DEBUG: e.Expr#1: 33
      //DEBUG: e.OutLine#1: 35
      //DEBUG: e.Indent#1: 37
      //DEBUG: e.OutLineTerm#5: 39
      //9: s.Pos#1
      //18: t.NextTerm#1
      //33: e.Expr#1
      //35: e.OutLine#1
      //37: e.Indent#1
      //39: e.OutLineTerm#5
      //44: e.Expr#1

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[41]);
      refalrts::alloc_name(vm, context[43], functions[efunc_gen_DoExpression_S3B1S1B1S1C1]);
      refalrts::copy_evar(vm, context[44], context[45], context[33], context[34]);
      refalrts::alloc_close_call(vm, context[42]);
      refalrts::push_stack( vm, context[42] );
      refalrts::push_stack( vm, context[41] );
      res = refalrts::splice_elem( res, context[42] );
      res = refalrts::splice_evar( res, context[44], context[45] );
      res = refalrts::splice_elem( res, context[43] );
      res = refalrts::splice_elem( res, context[41] );
      refalrts::use( res );
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function(vm);
      do {
        // </41 & DoExpression$3:1$1:1$1?1/45 ';'/46 >/42
        context[43] = 0;
        context[44] = 0;
        context[45] = refalrts::call_left( context[43], context[44], context[41], context[42] );
        context[46] = refalrts::char_left( ';', context[43], context[44] );
        if( ! context[46] )
          continue;
        if( ! refalrts::empty_seq( context[43], context[44] ) )
          continue;
        //DEBUG: t.NextTerm#1: 18
        //DEBUG: s.Pos#1: 9
        //DEBUG: e.Expr#1: 33
        //DEBUG: e.OutLine#1: 35
        //DEBUG: e.Indent#1: 37
        //DEBUG: e.OutLineTerm#5: 39

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} & DoExpression$3:1$1:1/4 (/7 e.Expr#1/33 {REMOVED TILE} (/16 {REMOVED TILE} )/17 {REMOVED TILE} (/22 e.OutLineTerm#5/39 )/23 # True/24 </41 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & MultilineTerm/8 AsIs: s.Pos#1/9 AsIs: (/12 AsIs: e.OutLine#1/35 AsIs: )/13 } Tile{ AsIs: e.Indent#1/37 } Tile{ AsIs: t.NextTerm#1/18 } Tile{ HalfReuse: (/45 AsIs: ';'/46 HalfReuse: )/42 AsIs: >/1 ]] }
        refalrts::reinit_name(context[8], functions[efunc_MultilineTerm]);
        refalrts::reinit_open_bracket(context[45]);
        refalrts::reinit_close_bracket(context[42]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[45], context[42] );
        refalrts::link_brackets( context[12], context[13] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[45];
        res = refalrts::splice_evar( res, context[18], context[19] );
        res = refalrts::splice_evar( res, context[37], context[38] );
        res = refalrts::splice_evar( res, context[8], context[13] );
        refalrts::splice_to_freelist_open( vm, context[0], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[41], context[42]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoExpression$3:1$1:1/4 (/7 e.Expr#1/33 )/8 s.Pos#1/9 (/12 e.OutLine#1/35 )/13 (/16 e.Indent#1/37 )/17 t.NextTerm#1/18 (/22 e.OutLineTerm#5/39 )/23 # True/24 >/1
      context[33] = context[25];
      context[34] = context[26];
      context[35] = context[27];
      context[36] = context[28];
      context[37] = context[29];
      context[38] = context[30];
      context[39] = context[31];
      context[40] = context[32];
      // closed e.Expr#1 as range 33
      // closed e.OutLine#1 as range 35
      // closed e.Indent#1 as range 37
      // closed e.OutLineTerm#5 as range 39
      //DEBUG: t.NextTerm#1: 18
      //DEBUG: s.Pos#1: 9
      //DEBUG: e.Expr#1: 33
      //DEBUG: e.OutLine#1: 35
      //DEBUG: e.Indent#1: 37
      //DEBUG: e.OutLineTerm#5: 39
      //9: s.Pos#1
      //18: t.NextTerm#1
      //33: e.Expr#1
      //35: e.OutLine#1
      //37: e.Indent#1
      //39: e.OutLineTerm#5
      //44: e.Expr#1

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[41]);
      refalrts::alloc_name(vm, context[43], functions[efunc_gen_DoExpression_S3B1S1B1S2C1]);
      refalrts::copy_evar(vm, context[44], context[45], context[33], context[34]);
      refalrts::alloc_close_call(vm, context[42]);
      refalrts::push_stack( vm, context[42] );
      refalrts::push_stack( vm, context[41] );
      res = refalrts::splice_elem( res, context[42] );
      res = refalrts::splice_evar( res, context[44], context[45] );
      res = refalrts::splice_elem( res, context[43] );
      res = refalrts::splice_elem( res, context[41] );
      refalrts::use( res );
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function(vm);
      do {
        // </41 & DoExpression$3:1$1:1$2?1/45 >/42
        context[43] = 0;
        context[44] = 0;
        context[45] = refalrts::call_left( context[43], context[44], context[41], context[42] );
        if( ! refalrts::empty_seq( context[43], context[44] ) )
          continue;
        //DEBUG: t.NextTerm#1: 18
        //DEBUG: s.Pos#1: 9
        //DEBUG: e.Expr#1: 33
        //DEBUG: e.OutLine#1: 35
        //DEBUG: e.Indent#1: 37
        //DEBUG: e.OutLineTerm#5: 39

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} & DoExpression$3:1$1:1/4 (/7 e.Expr#1/33 {REMOVED TILE} (/16 {REMOVED TILE} )/17 {REMOVED TILE} (/22 e.OutLineTerm#5/39 )/23 # True/24 </41 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & MultilineTerm/8 AsIs: s.Pos#1/9 AsIs: (/12 AsIs: e.OutLine#1/35 AsIs: )/13 } Tile{ AsIs: e.Indent#1/37 } Tile{ AsIs: t.NextTerm#1/18 } Tile{ HalfReuse: (/45 HalfReuse: )/42 AsIs: >/1 ]] }
        refalrts::reinit_name(context[8], functions[efunc_MultilineTerm]);
        refalrts::reinit_open_bracket(context[45]);
        refalrts::reinit_close_bracket(context[42]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[45], context[42] );
        refalrts::link_brackets( context[12], context[13] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[45];
        res = refalrts::splice_evar( res, context[18], context[19] );
        res = refalrts::splice_evar( res, context[37], context[38] );
        res = refalrts::splice_evar( res, context[8], context[13] );
        refalrts::splice_to_freelist_open( vm, context[0], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[41], context[42]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoExpression$3:1$1:1/4 (/7 e.Expr#1/33 )/8 s.Pos#1/9 (/12 e.OutLine#1/35 )/13 (/16 e.Indent#1/37 )/17 t.NextTerm#1/18 (/22 e.OutLineTerm#5/39 )/23 # True/24 >/1
    context[33] = context[25];
    context[34] = context[26];
    context[35] = context[27];
    context[36] = context[28];
    context[37] = context[29];
    context[38] = context[30];
    context[39] = context[31];
    context[40] = context[32];
    // closed e.Expr#1 as range 33
    // closed e.OutLine#1 as range 35
    // closed e.Indent#1 as range 37
    // closed e.OutLineTerm#5 as range 39
    //DEBUG: t.NextTerm#1: 18
    //DEBUG: s.Pos#1: 9
    //DEBUG: e.Expr#1: 33
    //DEBUG: e.OutLine#1: 35
    //DEBUG: e.Indent#1: 37
    //DEBUG: e.OutLineTerm#5: 39

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.OutLineTerm#5/39 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & MultilineTerm/8 AsIs: s.Pos#1/9 AsIs: (/12 AsIs: e.OutLine#1/35 AsIs: )/13 } e.Indent#1/37/41 Tile{ AsIs: t.NextTerm#1/18 AsIs: (/22 } Tile{ AsIs: )/23 HalfReuse: >/24 } </43 Tile{ Reuse: & DoExpression/4 HalfReuse: # NEXT/7 } Tile{ AsIs: (/16 AsIs: e.Indent#1/37 AsIs: )/17 } (/44 e.Indent#1/37/45 )/47 Tile{ AsIs: e.Expr#1/33 } Tile{ AsIs: >/1 ]] }
    refalrts::copy_evar(vm, context[41], context[42], context[37], context[38]);
    refalrts::alloc_open_call(vm, context[43]);
    refalrts::alloc_open_bracket(vm, context[44]);
    refalrts::copy_evar(vm, context[45], context[46], context[37], context[38]);
    refalrts::alloc_close_bracket(vm, context[47]);
    refalrts::reinit_name(context[8], functions[efunc_MultilineTerm]);
    refalrts::reinit_close_call(context[24]);
    refalrts::update_name(context[4], functions[efunc_DoExpression]);
    refalrts::reinit_ident(context[7], identifiers[ident_NEXT]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[43] );
    refalrts::link_brackets( context[44], context[47] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[22], context[23] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[33], context[34] );
    res = refalrts::splice_evar( res, context[44], context[47] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[4], context[7] );
    res = refalrts::splice_evar( res, context[43], context[43] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[18], context[22] );
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_evar( res, context[8], context[13] );
    refalrts::splice_to_freelist_open( vm, context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoExpression$3:1$1:1/4 (/7 e.Expr#1/5 )/8 s.Pos#1/9 (/12 e.OutLine#1/10 )/13 (/16 e.Indent#1/14 )/17 t.NextTerm#1/18 (/22 e.OutLineTerm#5/20 )/23 # False/24 >/1
  if( ! refalrts::ident_term( identifiers[ident_False], context[24] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Expr#1 as range 5
  // closed e.OutLine#1 as range 10
  // closed e.Indent#1 as range 14
  // closed e.OutLineTerm#5 as range 20
  //DEBUG: t.NextTerm#1: 18
  //DEBUG: s.Pos#1: 9
  //DEBUG: e.Expr#1: 5
  //DEBUG: e.OutLine#1: 10
  //DEBUG: e.Indent#1: 14
  //DEBUG: e.OutLineTerm#5: 20

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 s.Pos#1/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.NextTerm#1/18 {REMOVED TILE} # False/24 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/12 AsIs: e.OutLine#1/10 AsIs: )/13 HalfReuse: </16 } Tile{ HalfReuse: & DoExpression/0 HalfReuse: # NEXT/4 AsIs: (/7 } Tile{ AsIs: e.Indent#1/14 } Tile{ AsIs: )/17 } Tile{ AsIs: (/22 AsIs: e.OutLineTerm#5/20 AsIs: )/23 } Tile{ AsIs: e.Expr#1/5 } Tile{ AsIs: >/1 ]] }
  refalrts::reinit_open_call(context[16]);
  refalrts::reinit_name(context[0], functions[efunc_DoExpression]);
  refalrts::reinit_ident(context[4], identifiers[ident_NEXT]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[16] );
  refalrts::link_brackets( context[22], context[23] );
  refalrts::link_brackets( context[7], context[17] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[12], context[16] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoExpression_S3B1S1B1("DoExpression$3:1$1:1", COOKIE1_, COOKIE2_, func_gen_DoExpression_S3B1S1B1);


static refalrts::FnResult func_gen_DoExpression_S3B1S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & DoExpression$3:1$1=1/4 (/7 e.Expr#1/5 )/8 s.Pos#1/9 (/12 e.OutLine#1/10 )/13 (/16 e.Indent#1/14 )/17 t.NextTerm#1/18 e.OutLineTerm#5/2 >/1
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
  // closed e.Expr#1 as range 5
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
  // closed e.OutLine#1 as range 10
  // closed e.Indent#1 as range 14
  context[19] = refalrts::tvar_left( context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  // closed e.OutLineTerm#5 as range 2
  //DEBUG: e.Expr#1: 5
  //DEBUG: s.Pos#1: 9
  //DEBUG: e.OutLine#1: 10
  //DEBUG: e.Indent#1: 14
  //DEBUG: t.NextTerm#1: 18
  //DEBUG: e.OutLineTerm#5: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoExpression$3:1$1:1/4 AsIs: (/7 AsIs: e.Expr#1/5 AsIs: )/8 AsIs: s.Pos#1/9 AsIs: (/12 AsIs: e.OutLine#1/10 AsIs: )/13 AsIs: (/16 AsIs: e.Indent#1/14 AsIs: )/17 AsIs: t.NextTerm#1/18 } (/20 e.OutLineTerm#5/2/21 )/23 </24 & LongLine/25 Tile{ AsIs: e.OutLineTerm#5/2 } >/26 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[20]);
  refalrts::copy_evar(vm, context[21], context[22], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[23]);
  refalrts::alloc_open_call(vm, context[24]);
  refalrts::alloc_name(vm, context[25], functions[efunc_LongLine]);
  refalrts::alloc_close_call(vm, context[26]);
  refalrts::update_name(context[4], functions[efunc_gen_DoExpression_S3B1S1B1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[26] );
  refalrts::push_stack( vm, context[24] );
  refalrts::link_brackets( context[20], context[23] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[26], context[26] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[20], context[25] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoExpression_S3B1S1A1("DoExpression$3:1$1=1", COOKIE1_, COOKIE2_, func_gen_DoExpression_S3B1S1A1);


static refalrts::FnResult func_gen_DoExpression_S3B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 43 elems
  refalrts::Iter context[43];
  refalrts::zeros( context, 43 );
  // </0 & DoExpression$3:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoExpression$3:1/4 (/7 e.new#1/5 )/8 s.new#2/9 (/12 e.new#3/10 )/13 (/16 e.new#4/14 )/17 t.new#5/18 (/22 e.new#6/20 )/23 (/26 e.new#7/24 )/27 s.new#8/28 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
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
  // closed e.new#3 as range 10
  // closed e.new#4 as range 14
  context[19] = refalrts::tvar_left( context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  context[20] = 0;
  context[21] = 0;
  context[22] = refalrts::brackets_left( context[20], context[21], context[2], context[3] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[22], context[23]);
  context[24] = 0;
  context[25] = 0;
  context[26] = refalrts::brackets_left( context[24], context[25], context[2], context[3] );
  if( ! context[26] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[26], context[27]);
  // closed e.new#6 as range 20
  // closed e.new#7 as range 24
  if( ! refalrts::svar_left( context[28], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & DoExpression$3:1/4 (/7 e.Expr#1/29 )/8 s.Pos#1/9 (/12 e.OutLine#1/31 )/13 (/16 e.Indent#1/33 )/17 t.NextTerm#1/18 (/22 e.TextualTerm#2/35 )/23 (/26 e.NewOutLine#3/37 )/27 # True/28 >/1
    context[29] = context[5];
    context[30] = context[6];
    context[31] = context[10];
    context[32] = context[11];
    context[33] = context[14];
    context[34] = context[15];
    context[35] = context[20];
    context[36] = context[21];
    context[37] = context[24];
    context[38] = context[25];
    if( ! refalrts::ident_term( identifiers[ident_True], context[28] ) )
      continue;
    // closed e.Expr#1 as range 29
    // closed e.OutLine#1 as range 31
    // closed e.Indent#1 as range 33
    // closed e.TextualTerm#2 as range 35
    // closed e.NewOutLine#3 as range 37
    //DEBUG: t.NextTerm#1: 18
    //DEBUG: s.Pos#1: 9
    //DEBUG: e.Expr#1: 29
    //DEBUG: e.OutLine#1: 31
    //DEBUG: e.Indent#1: 33
    //DEBUG: e.TextualTerm#2: 35
    //DEBUG: e.NewOutLine#3: 37

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} e.NewOutLine#3/37 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoExpression$3:1$1:1@1/4 AsIs: (/7 AsIs: e.Expr#1/29 AsIs: )/8 AsIs: s.Pos#1/9 AsIs: (/12 AsIs: e.OutLine#1/31 AsIs: )/13 AsIs: (/16 AsIs: e.Indent#1/33 AsIs: )/17 AsIs: t.NextTerm#1/18 AsIs: (/22 AsIs: e.TextualTerm#2/35 AsIs: )/23 HalfReuse: </26 } Tile{ HalfReuse: & LongLine/27 } e.Indent#1/33/39 e.TextualTerm#2/35/41 Tile{ HalfReuse: >/28 AsIs: >/1 ]] }
    refalrts::copy_evar(vm, context[39], context[40], context[33], context[34]);
    refalrts::copy_evar(vm, context[41], context[42], context[35], context[36]);
    refalrts::update_name(context[4], functions[efunc_gen_DoExpression_S3B1S1B1Z1]);
    refalrts::reinit_open_call(context[26]);
    refalrts::reinit_name(context[27], functions[efunc_LongLine]);
    refalrts::reinit_close_call(context[28]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[28] );
    refalrts::push_stack( vm, context[26] );
    refalrts::link_brackets( context[22], context[23] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[28];
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[27], context[27] );
    refalrts::splice_to_freelist_open( vm, context[26], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoExpression$3:1/4 (/7 e.Expr#1/5 )/8 s.Pos#1/9 (/12 e.OutLine#1/10 )/13 (/16 e.Indent#1/14 )/17 t.NextTerm#1/18 (/22 e.TextualTerm#2/20 )/23 (/26 e.NewOutLine#3/24 )/27 # False/28 >/1
  if( ! refalrts::ident_term( identifiers[ident_False], context[28] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Expr#1 as range 5
  // closed e.OutLine#1 as range 10
  // closed e.Indent#1 as range 14
  // closed e.TextualTerm#2 as range 20
  // closed e.NewOutLine#3 as range 24
  //DEBUG: t.NextTerm#1: 18
  //DEBUG: s.Pos#1: 9
  //DEBUG: e.Expr#1: 5
  //DEBUG: e.OutLine#1: 10
  //DEBUG: e.Indent#1: 14
  //DEBUG: e.TextualTerm#2: 20
  //DEBUG: e.NewOutLine#3: 24

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} )/8 s.Pos#1/9 (/12 e.OutLine#1/10 )/13 {REMOVED TILE} {REMOVED TILE} )/17 t.NextTerm#1/18 (/22 e.TextualTerm#2/20 {REMOVED TILE} # False/28 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoExpression/4 HalfReuse: # NEXT/7 } Tile{ AsIs: (/16 } Tile{ AsIs: e.Indent#1/14 } Tile{ AsIs: )/23 AsIs: (/26 AsIs: e.NewOutLine#3/24 AsIs: )/27 } Tile{ AsIs: e.Expr#1/5 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_DoExpression]);
  refalrts::reinit_ident(context[7], identifiers[ident_NEXT]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[26], context[27] );
  refalrts::link_brackets( context[16], context[23] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[23], context[27] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoExpression_S3B1("DoExpression$3:1", COOKIE1_, COOKIE2_, func_gen_DoExpression_S3B1);


static refalrts::FnResult func_gen_DoExpression_S3A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  // </0 & DoExpression$3=2/4 (/7 e.Expr#1/5 )/8 s.Pos#1/9 (/12 e.OutLine#1/10 )/13 (/16 e.Indent#1/14 )/17 t.NextTerm#1/18 (/22 e.TextualTerm#2/20 )/23 e.NewOutLine#3/2 >/1
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
  // closed e.Expr#1 as range 5
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
  // closed e.OutLine#1 as range 10
  // closed e.Indent#1 as range 14
  context[19] = refalrts::tvar_left( context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  context[20] = 0;
  context[21] = 0;
  context[22] = refalrts::brackets_left( context[20], context[21], context[2], context[3] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[22], context[23]);
  // closed e.TextualTerm#2 as range 20
  // closed e.NewOutLine#3 as range 2
  //DEBUG: e.Expr#1: 5
  //DEBUG: s.Pos#1: 9
  //DEBUG: e.OutLine#1: 10
  //DEBUG: e.Indent#1: 14
  //DEBUG: t.NextTerm#1: 18
  //DEBUG: e.TextualTerm#2: 20
  //DEBUG: e.NewOutLine#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoExpression$3:1/4 AsIs: (/7 AsIs: e.Expr#1/5 AsIs: )/8 AsIs: s.Pos#1/9 AsIs: (/12 AsIs: e.OutLine#1/10 AsIs: )/13 AsIs: (/16 AsIs: e.Indent#1/14 AsIs: )/17 AsIs: t.NextTerm#1/18 AsIs: (/22 AsIs: e.TextualTerm#2/20 AsIs: )/23 } (/24 e.NewOutLine#3/2/25 )/27 </28 & LongLine/29 Tile{ AsIs: e.NewOutLine#3/2 } >/30 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[24]);
  refalrts::copy_evar(vm, context[25], context[26], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[27]);
  refalrts::alloc_open_call(vm, context[28]);
  refalrts::alloc_name(vm, context[29], functions[efunc_LongLine]);
  refalrts::alloc_close_call(vm, context[30]);
  refalrts::update_name(context[4], functions[efunc_gen_DoExpression_S3B1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[30] );
  refalrts::push_stack( vm, context[28] );
  refalrts::link_brackets( context[24], context[27] );
  refalrts::link_brackets( context[22], context[23] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[30], context[30] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[24], context[29] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoExpression_S3A2("DoExpression$3=2", COOKIE1_, COOKIE2_, func_gen_DoExpression_S3A2);


static refalrts::FnResult func_gen_DoExpression_S3A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  // </0 & DoExpression$3=1/4 (/7 e.Expr#1/5 )/8 s.Pos#1/9 (/12 e.OutLine#1/10 )/13 (/16 e.Indent#1/14 )/17 t.NextTerm#1/18 e.TextualTerm#2/2 >/1
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
  // closed e.Expr#1 as range 5
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
  // closed e.OutLine#1 as range 10
  // closed e.Indent#1 as range 14
  context[19] = refalrts::tvar_left( context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  // closed e.TextualTerm#2 as range 2
  //DEBUG: e.Expr#1: 5
  //DEBUG: s.Pos#1: 9
  //DEBUG: e.OutLine#1: 10
  //DEBUG: e.Indent#1: 14
  //DEBUG: t.NextTerm#1: 18
  //DEBUG: e.TextualTerm#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoExpression$3=2/4 AsIs: (/7 AsIs: e.Expr#1/5 AsIs: )/8 AsIs: s.Pos#1/9 AsIs: (/12 AsIs: e.OutLine#1/10 AsIs: )/13 AsIs: (/16 AsIs: e.Indent#1/14 AsIs: )/17 AsIs: t.NextTerm#1/18 } (/20 e.TextualTerm#2/2/21 )/23 </24 & AppendTerm/25 e.OutLine#1/10/26 (/28 Tile{ AsIs: e.TextualTerm#2/2 } )/29 >/30 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[20]);
  refalrts::copy_evar(vm, context[21], context[22], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[23]);
  refalrts::alloc_open_call(vm, context[24]);
  refalrts::alloc_name(vm, context[25], functions[efunc_AppendTerm]);
  refalrts::copy_evar(vm, context[26], context[27], context[10], context[11]);
  refalrts::alloc_open_bracket(vm, context[28]);
  refalrts::alloc_close_bracket(vm, context[29]);
  refalrts::alloc_close_call(vm, context[30]);
  refalrts::update_name(context[4], functions[efunc_gen_DoExpression_S3A2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[30] );
  refalrts::push_stack( vm, context[24] );
  refalrts::link_brackets( context[28], context[29] );
  refalrts::link_brackets( context[20], context[23] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[29], context[30] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[20], context[28] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoExpression_S3A1("DoExpression$3=1", COOKIE1_, COOKIE2_, func_gen_DoExpression_S3A1);


static refalrts::FnResult func_DoExpression(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & DoExpression/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoExpression/4 s.new#1/5 (/8 e.new#2/6 )/9 (/12 e.new#3/10 )/13 e.new#4/2 >/1
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
  // closed e.new#2 as range 6
  // closed e.new#3 as range 10
  // closed e.new#4 as range 2
  do {
    // </0 & DoExpression/4 s.Pos#1/5 (/8 e.Indent#1/14 )/9 (/12 e.OutLine#1/16 )/13 >/1
    context[14] = context[6];
    context[15] = context[7];
    context[16] = context[10];
    context[17] = context[11];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 14
    // closed e.OutLine#1 as range 16
    //DEBUG: s.Pos#1: 5
    //DEBUG: e.Indent#1: 14
    //DEBUG: e.OutLine#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoExpression/4 s.Pos#1/5 (/8 e.Indent#1/14 )/9 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/12 AsIs: e.OutLine#1/16 AsIs: )/13 } Tile{ ]] }
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoExpression/4 s.new#5/5 (/8 e.new#8/6 )/9 (/12 e.new#9/10 )/13 t.new#6/14 e.new#7/2 >/1
  // closed e.new#8 as range 6
  // closed e.new#9 as range 10
  context[15] = refalrts::tvar_left( context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#7 as range 2
  do {
    // </0 & DoExpression/4 s.Pos#1/5 (/8 e.Indent#1/16 )/9 (/12 e.OutLine#1/18 )/13 ';'/14 >/1
    context[16] = context[6];
    context[17] = context[7];
    context[18] = context[10];
    context[19] = context[11];
    if( ! refalrts::char_term( ';', context[14] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent#1 as range 16
    // closed e.OutLine#1 as range 18
    //DEBUG: s.Pos#1: 5
    //DEBUG: e.Indent#1: 16
    //DEBUG: e.OutLine#1: 18

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoExpression/4 s.Pos#1/5 (/8 e.Indent#1/16 )/9 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/12 AsIs: e.OutLine#1/18 HalfReuse: ';'/13 HalfReuse: )/14 } Tile{ ]] }
    refalrts::reinit_char(context[13], ';');
    refalrts::reinit_close_bracket(context[14]);
    refalrts::link_brackets( context[12], context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[14] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoExpression/4 s.Pos#1/5 (/8 e.Indent#1/6 )/9 (/12 e.OutLine#1/10 )/13 t.NextTerm#1/14 e.Expr#1/2 >/1
  // closed e.Indent#1 as range 6
  // closed e.OutLine#1 as range 10
  // closed e.Expr#1 as range 2
  //DEBUG: t.NextTerm#1: 14
  //DEBUG: s.Pos#1: 5
  //DEBUG: e.Indent#1: 6
  //DEBUG: e.OutLine#1: 10
  //DEBUG: e.Expr#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Pos#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoExpression$3=1/4 } (/16 Tile{ AsIs: e.Expr#1/2 } )/17 Tile{ HalfReuse: s.Pos1 #5/9 AsIs: (/12 AsIs: e.OutLine#1/10 AsIs: )/13 } Tile{ AsIs: (/8 } Tile{ AsIs: e.Indent#1/6 } )/18 Tile{ AsIs: t.NextTerm#1/14 } </19 & InlineTerm/20 t.NextTerm#1/14/21 >/23 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::alloc_close_bracket(vm, context[17]);
  refalrts::alloc_close_bracket(vm, context[18]);
  refalrts::alloc_open_call(vm, context[19]);
  refalrts::alloc_name(vm, context[20], functions[efunc_InlineTerm]);
  refalrts::copy_evar(vm, context[21], context[22], context[14], context[15]);
  refalrts::alloc_close_call(vm, context[23]);
  refalrts::update_name(context[4], functions[efunc_gen_DoExpression_S3A1]);
  refalrts::reinit_svar( context[9], context[5] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[19] );
  refalrts::link_brackets( context[8], context[18] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[19], context[23] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[9], context[13] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoExpression("DoExpression", COOKIE1_, COOKIE2_, func_DoExpression);


static refalrts::FnResult func_AppendTerm(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & AppendTerm/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & AppendTerm/4 e.new#1/2 (/7 e.new#2/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 2
  // closed e.new#2 as range 5
  do {
    // </0 & AppendTerm/4 e.new#3/9 s.new#4/13 (/7 e.new#5/11 )/8 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[11] = context[5];
    context[12] = context[6];
    // closed e.new#5 as range 11
    if( ! refalrts::svar_right( context[13], context[9], context[10] ) )
      continue;
    // closed e.new#3 as range 9
    do {
      // </0 & AppendTerm/4 e.String#1/14 '\''/13 (/7 '\''/18 e.Term#1/16 )/8 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '\'', context[13] ) )
        continue;
      context[18] = refalrts::char_left( '\'', context[16], context[17] );
      if( ! context[18] )
        continue;
      // closed e.String#1 as range 14
      // closed e.Term#1 as range 16
      //DEBUG: e.String#1: 14
      //DEBUG: e.Term#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & AppendTerm/4 {REMOVED TILE} '\''/13 (/7 '\''/18 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.String#1/14 } Tile{ AsIs: e.Term#1/16 } Tile{ ]] }
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & AppendTerm/4 e.String#1/14 ' '/13 (/7 e.Term#1/16 )/8 >/1
    context[14] = context[9];
    context[15] = context[10];
    context[16] = context[11];
    context[17] = context[12];
    if( ! refalrts::char_term( ' ', context[13] ) )
      continue;
    // closed e.String#1 as range 14
    // closed e.Term#1 as range 16
    //DEBUG: e.String#1: 14
    //DEBUG: e.Term#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & AppendTerm/4 {REMOVED TILE} {REMOVED TILE} (/7 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.String#1/14 } Tile{ AsIs: ' '/13 } Tile{ AsIs: e.Term#1/16 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AppendTerm/4 e.String#1/2 (/7 e.Term#1/5 )/8 >/1
  // closed e.String#1 as range 2
  // closed e.Term#1 as range 5
  //DEBUG: e.String#1: 2
  //DEBUG: e.Term#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & AppendTerm/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.String#1/2 } Tile{ HalfReuse: ' '/7 } Tile{ AsIs: e.Term#1/5 } Tile{ ]] }
  refalrts::reinit_char(context[7], ' ');
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_AppendTerm("AppendTerm", COOKIE1_, COOKIE2_, func_AppendTerm);


static refalrts::FnResult func_InlineTerm(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & InlineTerm/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & InlineTerm/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & InlineTerm/4 (/5 s.Type#1/9 e.Value#1/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    // closed e.Value#1 as range 7
    //DEBUG: s.Type#1: 9
    //DEBUG: e.Value#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </10 & __Step-Drop/11 Tile{ HalfReuse: >/0 HalfReuse: </4 HalfReuse: & __Meta_Mu/5 AsIs: s.Type#1/9 AsIs: e.Value#1/7 HalfReuse: & $table/6 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_u_u_Stepm_Drop]);
    refalrts::reinit_close_call(context[0]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_u_u_Metau_Mu]);
    refalrts::reinit_name(context[6], functions[efunc_d_table]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & InlineTerm/4 ';'/5 >/1
  if( ! refalrts::char_term( ';', context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & InlineTerm/4 ';'/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: ';'/1 ]] }
  refalrts::reinit_char(context[1], ';');
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_InlineTerm("InlineTerm", COOKIE1_, COOKIE2_, func_InlineTerm);


static refalrts::FnResult func_MultilineTerm(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & MultilineTerm/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & MultilineTerm/4 s.new#1/9 (/12 e.new#2/10 )/13 e.new#3/2 t.new#4/14 (/7 e.new#5/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#5 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.new#2 as range 10
  context[15] = refalrts::tvar_right( context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & MultilineTerm/4 # FIRST/9 (/12 e.Prefix#1/16 )/13 e.Indent#1/18 t.Term#1/14 (/7 e.Suffix#1/20 )/8 >/1
    context[16] = context[10];
    context[17] = context[11];
    context[18] = context[2];
    context[19] = context[3];
    context[20] = context[5];
    context[21] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_FIRST], context[9] ) )
      continue;
    // closed e.Prefix#1 as range 16
    // closed e.Indent#1 as range 18
    // closed e.Suffix#1 as range 20
    //DEBUG: t.Term#1: 14
    //DEBUG: e.Prefix#1: 16
    //DEBUG: e.Indent#1: 18
    //DEBUG: e.Suffix#1: 20

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & MultilineTerm-Prefix/9 AsIs: (/12 AsIs: e.Prefix#1/16 AsIs: )/13 AsIs: e.Indent#1/18 AsIs: t.Term#1/14 AsIs: (/7 AsIs: e.Suffix#1/20 AsIs: )/8 AsIs: >/1 ]] }
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[9], functions[efunc_MultilineTermm_Prefix]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MultilineTerm/4 # NEXT/9 (/12 e.Prefix#1/10 )/13 e.Indent#1/2 t.Term#1/14 (/7 e.Suffix#1/5 )/8 >/1
  if( ! refalrts::ident_term( identifiers[ident_NEXT], context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Prefix#1 as range 10
  // closed e.Indent#1 as range 2
  // closed e.Suffix#1 as range 5
  //DEBUG: t.Term#1: 14
  //DEBUG: e.Prefix#1: 10
  //DEBUG: e.Indent#1: 2
  //DEBUG: e.Suffix#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/16 Tile{ AsIs: e.Prefix#1/10 } Tile{ HalfReuse: )/0 HalfReuse: </4 HalfReuse: & MultilineTerm-Prefix/9 AsIs: (/12 } e.Indent#1/2/17 Tile{ AsIs: )/13 AsIs: e.Indent#1/2 AsIs: t.Term#1/14 AsIs: (/7 AsIs: e.Suffix#1/5 AsIs: )/8 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::copy_evar(vm, context[17], context[18], context[2], context[3]);
  refalrts::reinit_close_bracket(context[0]);
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[9], functions[efunc_MultilineTermm_Prefix]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[4] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[16], context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[13];
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[0], context[12] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MultilineTerm("MultilineTerm", COOKIE1_, COOKIE2_, func_MultilineTerm);


static refalrts::FnResult func_gen_MultilineTermm_Prefix_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 92 elems
  refalrts::Iter context[92];
  refalrts::zeros( context, 92 );
  // </0 & MultilineTerm-Prefix:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & MultilineTerm-Prefix:1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 (/15 e.new#3/13 )/16 (/19 s.new#4/21 e.new#5/17 )/20 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  // closed e.new#3 as range 13
  if( ! refalrts::svar_left( context[21], context[17], context[18] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#5 as range 17
  do {
    // </0 & MultilineTerm-Prefix:1/4 (/7 e.Prefix#1/22 )/8 (/11 e.Indent#1/24 )/12 (/15 e.Suffix#1/26 )/16 (/19 # Brackets/21 e.Expr#2/28 )/20 >/1
    context[22] = context[5];
    context[23] = context[6];
    context[24] = context[9];
    context[25] = context[10];
    context[26] = context[13];
    context[27] = context[14];
    context[28] = context[17];
    context[29] = context[18];
    if( ! refalrts::ident_term( identifiers[ident_Brackets], context[21] ) )
      continue;
    // closed e.Prefix#1 as range 22
    // closed e.Indent#1 as range 24
    // closed e.Suffix#1 as range 26
    // closed e.Expr#2 as range 28
    //DEBUG: e.Prefix#1: 22
    //DEBUG: e.Indent#1: 24
    //DEBUG: e.Suffix#1: 26
    //DEBUG: e.Expr#2: 28

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/19 } Tile{ AsIs: e.Prefix#1/22 } '('/30 Tile{ AsIs: )/16 } Tile{ AsIs: </0 Reuse: & Expression/4 AsIs: (/7 } e.Indent#1/24/31"  "/33 Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.Indent#1/24 HalfReuse: ' '/12 HalfReuse: ' '/15 } Tile{ HalfReuse: )/21 AsIs: e.Expr#2/28 HalfReuse: >/20 HalfReuse: (/1 } e.Indent#1/24/35 ')'/37 Tile{ AsIs: e.Suffix#1/26 } )/38 Tile{ ]] }
    refalrts::alloc_char(vm, context[30], '(');
    refalrts::copy_evar(vm, context[31], context[32], context[24], context[25]);
    refalrts::alloc_chars(vm, context[33], context[34], "  ", 2);
    refalrts::copy_evar(vm, context[35], context[36], context[24], context[25]);
    refalrts::alloc_char(vm, context[37], ')');
    refalrts::alloc_close_bracket(vm, context[38]);
    refalrts::update_name(context[4], functions[efunc_Expression]);
    refalrts::reinit_char(context[12], ' ');
    refalrts::reinit_char(context[15], ' ');
    refalrts::reinit_close_bracket(context[21]);
    refalrts::reinit_close_call(context[20]);
    refalrts::reinit_open_bracket(context[1]);
    refalrts::link_brackets( context[1], context[38] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[11], context[21] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[19], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[38], context[38] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[37], context[37] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_evar( res, context[21], context[1] );
    res = refalrts::splice_evar( res, context[8], context[15] );
    res = refalrts::splice_evar( res, context[33], context[34] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[30], context[30] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & MultilineTerm-Prefix:1/4 (/7 e.new#6/22 )/8 (/11 e.new#7/24 )/12 (/15 e.new#8/26 )/16 (/19 s.new#9/21 (/32 e.new#10/30 )/33 e.new#11/28 )/20 >/1
    context[22] = context[5];
    context[23] = context[6];
    context[24] = context[9];
    context[25] = context[10];
    context[26] = context[13];
    context[27] = context[14];
    context[28] = context[17];
    context[29] = context[18];
    context[30] = 0;
    context[31] = 0;
    context[32] = refalrts::brackets_left( context[30], context[31], context[28], context[29] );
    if( ! context[32] )
      continue;
    refalrts::bracket_pointers(context[32], context[33]);
    // closed e.new#6 as range 22
    // closed e.new#7 as range 24
    // closed e.new#8 as range 26
    // closed e.new#10 as range 30
    // closed e.new#11 as range 28
    do {
      // </0 & MultilineTerm-Prefix:1/4 (/7 e.Prefix#1/34 )/8 (/11 e.Indent#1/36 )/12 (/15 e.Suffix#1/38 )/16 (/19 # ADT-Brackets/21 (/32 e.Name#2/40 )/33 e.Expr#2/42 )/20 >/1
      context[34] = context[22];
      context[35] = context[23];
      context[36] = context[24];
      context[37] = context[25];
      context[38] = context[26];
      context[39] = context[27];
      context[40] = context[30];
      context[41] = context[31];
      context[42] = context[28];
      context[43] = context[29];
      if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[21] ) )
        continue;
      // closed e.Prefix#1 as range 34
      // closed e.Indent#1 as range 36
      // closed e.Suffix#1 as range 38
      // closed e.Name#2 as range 40
      // closed e.Expr#2 as range 42
      //DEBUG: e.Prefix#1: 34
      //DEBUG: e.Indent#1: 36
      //DEBUG: e.Suffix#1: 38
      //DEBUG: e.Name#2: 40
      //DEBUG: e.Expr#2: 42

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } Tile{ AsIs: e.Prefix#1/34 } '['/44 Tile{ AsIs: </0 Reuse: & DisplayName/4 } Tile{ AsIs: e.Name#2/40 } >/45 Tile{ AsIs: )/16 HalfReuse: </19 HalfReuse: & Expression/21 AsIs: (/32 } e.Indent#1/36/46"  "/48 Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.Indent#1/36 HalfReuse: ' '/12 HalfReuse: ' '/15 } Tile{ AsIs: )/33 AsIs: e.Expr#2/42 HalfReuse: >/20 HalfReuse: (/1 } e.Indent#1/36/50 ']'/52 Tile{ AsIs: e.Suffix#1/38 } )/53 Tile{ ]] }
      refalrts::alloc_char(vm, context[44], '[');
      refalrts::alloc_close_call(vm, context[45]);
      refalrts::copy_evar(vm, context[46], context[47], context[36], context[37]);
      refalrts::alloc_chars(vm, context[48], context[49], "  ", 2);
      refalrts::copy_evar(vm, context[50], context[51], context[36], context[37]);
      refalrts::alloc_char(vm, context[52], ']');
      refalrts::alloc_close_bracket(vm, context[53]);
      refalrts::update_name(context[4], functions[efunc_DisplayName]);
      refalrts::reinit_open_call(context[19]);
      refalrts::reinit_name(context[21], functions[efunc_Expression]);
      refalrts::reinit_char(context[12], ' ');
      refalrts::reinit_char(context[15], ' ');
      refalrts::reinit_close_call(context[20]);
      refalrts::reinit_open_bracket(context[1]);
      refalrts::link_brackets( context[1], context[53] );
      refalrts::push_stack( vm, context[20] );
      refalrts::push_stack( vm, context[19] );
      refalrts::link_brackets( context[11], context[33] );
      refalrts::link_brackets( context[32], context[8] );
      refalrts::link_brackets( context[7], context[16] );
      refalrts::push_stack( vm, context[45] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[53], context[53] );
      res = refalrts::splice_evar( res, context[38], context[39] );
      res = refalrts::splice_evar( res, context[52], context[52] );
      res = refalrts::splice_evar( res, context[50], context[51] );
      res = refalrts::splice_evar( res, context[33], context[1] );
      res = refalrts::splice_evar( res, context[8], context[15] );
      res = refalrts::splice_evar( res, context[48], context[49] );
      res = refalrts::splice_evar( res, context[46], context[47] );
      res = refalrts::splice_evar( res, context[16], context[32] );
      res = refalrts::splice_evar( res, context[45], context[45] );
      res = refalrts::splice_evar( res, context[40], context[41] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[44], context[44] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & MultilineTerm-Prefix:1/4 (/7 e.new#12/34 )/8 (/11 e.new#13/36 )/12 (/15 e.new#14/38 )/16 (/19 # CallBrackets/21 (/32 s.new#16/44 e.new#17/40 )/33 e.new#15/42 )/20 >/1
    context[34] = context[22];
    context[35] = context[23];
    context[36] = context[24];
    context[37] = context[25];
    context[38] = context[26];
    context[39] = context[27];
    context[40] = context[30];
    context[41] = context[31];
    context[42] = context[28];
    context[43] = context[29];
    if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[21] ) )
      continue;
    // closed e.new#12 as range 34
    // closed e.new#13 as range 36
    // closed e.new#14 as range 38
    // closed e.new#15 as range 42
    if( ! refalrts::svar_left( context[44], context[40], context[41] ) )
      continue;
    // closed e.new#17 as range 40
    do {
      // </0 & MultilineTerm-Prefix:1/4 (/7 e.Prefix#1/45 )/8 (/11 e.Indent#1/47 )/12 (/15 e.Suffix#1/49 )/16 (/19 # CallBrackets/21 (/32 # Symbol/44 # Name/55 e.Function#2/51 )/33 e.Expr#2/53 )/20 >/1
      context[45] = context[34];
      context[46] = context[35];
      context[47] = context[36];
      context[48] = context[37];
      context[49] = context[38];
      context[50] = context[39];
      context[51] = context[40];
      context[52] = context[41];
      context[53] = context[42];
      context[54] = context[43];
      if( ! refalrts::ident_term( identifiers[ident_Symbol], context[44] ) )
        continue;
      context[55] = refalrts::ident_left( identifiers[ident_Name], context[51], context[52] );
      if( ! context[55] )
        continue;
      // closed e.Prefix#1 as range 45
      // closed e.Indent#1 as range 47
      // closed e.Suffix#1 as range 49
      // closed e.Function#2 as range 51
      // closed e.Expr#2 as range 53
      //DEBUG: e.Prefix#1: 45
      //DEBUG: e.Indent#1: 47
      //DEBUG: e.Suffix#1: 49
      //DEBUG: e.Function#2: 51
      //DEBUG: e.Expr#2: 53

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } Tile{ AsIs: e.Prefix#1/45 } '<'/56 Tile{ AsIs: </0 Reuse: & DisplayName/4 } Tile{ AsIs: e.Function#2/51 } >/57 Tile{ AsIs: )/16 HalfReuse: </19 HalfReuse: & Expression/21 AsIs: (/32 } e.Indent#1/47/58 Tile{ HalfReuse: ' '/44 HalfReuse: ' '/55 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.Indent#1/47 HalfReuse: ' '/12 HalfReuse: ' '/15 } Tile{ AsIs: )/33 AsIs: e.Expr#2/53 HalfReuse: >/20 HalfReuse: (/1 } e.Indent#1/47/60 '>'/62 Tile{ AsIs: e.Suffix#1/49 } )/63 Tile{ ]] }
      refalrts::alloc_char(vm, context[56], '<');
      refalrts::alloc_close_call(vm, context[57]);
      refalrts::copy_evar(vm, context[58], context[59], context[47], context[48]);
      refalrts::copy_evar(vm, context[60], context[61], context[47], context[48]);
      refalrts::alloc_char(vm, context[62], '>');
      refalrts::alloc_close_bracket(vm, context[63]);
      refalrts::update_name(context[4], functions[efunc_DisplayName]);
      refalrts::reinit_open_call(context[19]);
      refalrts::reinit_name(context[21], functions[efunc_Expression]);
      refalrts::reinit_char(context[44], ' ');
      refalrts::reinit_char(context[55], ' ');
      refalrts::reinit_char(context[12], ' ');
      refalrts::reinit_char(context[15], ' ');
      refalrts::reinit_close_call(context[20]);
      refalrts::reinit_open_bracket(context[1]);
      refalrts::link_brackets( context[1], context[63] );
      refalrts::push_stack( vm, context[20] );
      refalrts::push_stack( vm, context[19] );
      refalrts::link_brackets( context[11], context[33] );
      refalrts::link_brackets( context[32], context[8] );
      refalrts::link_brackets( context[7], context[16] );
      refalrts::push_stack( vm, context[57] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[63], context[63] );
      res = refalrts::splice_evar( res, context[49], context[50] );
      res = refalrts::splice_evar( res, context[62], context[62] );
      res = refalrts::splice_evar( res, context[60], context[61] );
      res = refalrts::splice_evar( res, context[33], context[1] );
      res = refalrts::splice_evar( res, context[8], context[15] );
      res = refalrts::splice_evar( res, context[44], context[55] );
      res = refalrts::splice_evar( res, context[58], context[59] );
      res = refalrts::splice_evar( res, context[16], context[32] );
      res = refalrts::splice_evar( res, context[57], context[57] );
      res = refalrts::splice_evar( res, context[51], context[52] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[56], context[56] );
      res = refalrts::splice_evar( res, context[45], context[46] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & MultilineTerm-Prefix:1/4 (/7 e.Prefix#1/45 )/8 (/11 e.Indent#1/47 )/12 (/15 e.Suffix#1/49 )/16 (/19 # CallBrackets/21 (/32 # TkVariable/44 e.Indirect#2/51 )/33 e.Expr#2/53 )/20 >/1
      context[45] = context[34];
      context[46] = context[35];
      context[47] = context[36];
      context[48] = context[37];
      context[49] = context[38];
      context[50] = context[39];
      context[51] = context[40];
      context[52] = context[41];
      context[53] = context[42];
      context[54] = context[43];
      if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[44] ) )
        continue;
      // closed e.Prefix#1 as range 45
      // closed e.Indent#1 as range 47
      // closed e.Suffix#1 as range 49
      // closed e.Indirect#2 as range 51
      // closed e.Expr#2 as range 53
      //DEBUG: e.Prefix#1: 45
      //DEBUG: e.Indent#1: 47
      //DEBUG: e.Suffix#1: 49
      //DEBUG: e.Indirect#2: 51
      //DEBUG: e.Expr#2: 53

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } Tile{ AsIs: e.Prefix#1/45 } Tile{ HalfReuse: '<'/44 } Tile{ AsIs: </0 Reuse: & TkVariable/4 } Tile{ AsIs: e.Indirect#2/51 } >/55 Tile{ AsIs: )/16 HalfReuse: </19 HalfReuse: & Expression/21 AsIs: (/32 } e.Indent#1/47/56"  "/58 Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.Indent#1/47 HalfReuse: ' '/12 HalfReuse: ' '/15 } Tile{ AsIs: )/33 AsIs: e.Expr#2/53 HalfReuse: >/20 HalfReuse: (/1 } e.Indent#1/47/60 '>'/62 Tile{ AsIs: e.Suffix#1/49 } )/63 Tile{ ]] }
      refalrts::alloc_close_call(vm, context[55]);
      refalrts::copy_evar(vm, context[56], context[57], context[47], context[48]);
      refalrts::alloc_chars(vm, context[58], context[59], "  ", 2);
      refalrts::copy_evar(vm, context[60], context[61], context[47], context[48]);
      refalrts::alloc_char(vm, context[62], '>');
      refalrts::alloc_close_bracket(vm, context[63]);
      refalrts::reinit_char(context[44], '<');
      refalrts::update_name(context[4], functions[efunc_TkVariable]);
      refalrts::reinit_open_call(context[19]);
      refalrts::reinit_name(context[21], functions[efunc_Expression]);
      refalrts::reinit_char(context[12], ' ');
      refalrts::reinit_char(context[15], ' ');
      refalrts::reinit_close_call(context[20]);
      refalrts::reinit_open_bracket(context[1]);
      refalrts::link_brackets( context[1], context[63] );
      refalrts::push_stack( vm, context[20] );
      refalrts::push_stack( vm, context[19] );
      refalrts::link_brackets( context[11], context[33] );
      refalrts::link_brackets( context[32], context[8] );
      refalrts::link_brackets( context[7], context[16] );
      refalrts::push_stack( vm, context[55] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[63], context[63] );
      res = refalrts::splice_evar( res, context[49], context[50] );
      res = refalrts::splice_evar( res, context[62], context[62] );
      res = refalrts::splice_evar( res, context[60], context[61] );
      res = refalrts::splice_evar( res, context[33], context[1] );
      res = refalrts::splice_evar( res, context[8], context[15] );
      res = refalrts::splice_evar( res, context[58], context[59] );
      res = refalrts::splice_evar( res, context[56], context[57] );
      res = refalrts::splice_evar( res, context[16], context[32] );
      res = refalrts::splice_evar( res, context[55], context[55] );
      res = refalrts::splice_evar( res, context[51], context[52] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[44], context[44] );
      res = refalrts::splice_evar( res, context[45], context[46] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & MultilineTerm-Prefix:1/4 (/7 e.Prefix#1/45 )/8 (/11 e.Indent#1/47 )/12 (/15 e.Suffix#1/49 )/16 (/19 # CallBrackets/21 (/32 # ClosureBrackets/44 (/57 # Symbol/59 # Name/60 e.Function#2/55 )/58 e.Context#2/51 )/33 e.Expr#2/53 )/20 >/1
    context[45] = context[34];
    context[46] = context[35];
    context[47] = context[36];
    context[48] = context[37];
    context[49] = context[38];
    context[50] = context[39];
    context[51] = context[40];
    context[52] = context[41];
    context[53] = context[42];
    context[54] = context[43];
    if( ! refalrts::ident_term( identifiers[ident_ClosureBrackets], context[44] ) )
      continue;
    context[55] = 0;
    context[56] = 0;
    context[57] = refalrts::brackets_left( context[55], context[56], context[51], context[52] );
    if( ! context[57] )
      continue;
    refalrts::bracket_pointers(context[57], context[58]);
    context[59] = refalrts::ident_left( identifiers[ident_Symbol], context[55], context[56] );
    if( ! context[59] )
      continue;
    context[60] = refalrts::ident_left( identifiers[ident_Name], context[55], context[56] );
    if( ! context[60] )
      continue;
    // closed e.Prefix#1 as range 45
    // closed e.Indent#1 as range 47
    // closed e.Suffix#1 as range 49
    // closed e.Function#2 as range 55
    // closed e.Context#2 as range 51
    // closed e.Expr#2 as range 53
    //DEBUG: e.Prefix#1: 45
    //DEBUG: e.Indent#1: 47
    //DEBUG: e.Suffix#1: 49
    //DEBUG: e.Function#2: 55
    //DEBUG: e.Context#2: 51
    //DEBUG: e.Expr#2: 53

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/61 Tile{ AsIs: e.Prefix#1/45 } Tile{ HalfReuse: '<'/21 HalfReuse: ' '/32 HalfReuse: '{'/44 HalfReuse: '{'/57 HalfReuse: </59 HalfReuse: & DisplayName/60 AsIs: e.Function#2/55 HalfReuse: >/58 } )/62 Tile{ AsIs: </0 Reuse: & Expression/4 AsIs: (/7 } e.Indent#1/47/63"    "/65 Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.Indent#1/47 HalfReuse: ' '/12 HalfReuse: ' '/15 }"  "/67 )/69 Tile{ AsIs: e.Context#2/51 } >/70 (/71 e.Indent#1/47/72"  }}"/74 )/76 </77 & Expression/78 (/79 e.Indent#1/47/80"  "/82 Tile{ AsIs: )/16 AsIs: (/19 } e.Indent#1/47/84"  "/86 Tile{ AsIs: )/33 AsIs: e.Expr#2/53 HalfReuse: >/20 HalfReuse: (/1 } e.Indent#1/47/88 '>'/90 Tile{ AsIs: e.Suffix#1/49 } )/91 Tile{ ]] }
    refalrts::alloc_open_bracket(vm, context[61]);
    refalrts::alloc_close_bracket(vm, context[62]);
    refalrts::copy_evar(vm, context[63], context[64], context[47], context[48]);
    refalrts::alloc_chars(vm, context[65], context[66], "    ", 4);
    refalrts::alloc_chars(vm, context[67], context[68], "  ", 2);
    refalrts::alloc_close_bracket(vm, context[69]);
    refalrts::alloc_close_call(vm, context[70]);
    refalrts::alloc_open_bracket(vm, context[71]);
    refalrts::copy_evar(vm, context[72], context[73], context[47], context[48]);
    refalrts::alloc_chars(vm, context[74], context[75], "  }}", 4);
    refalrts::alloc_close_bracket(vm, context[76]);
    refalrts::alloc_open_call(vm, context[77]);
    refalrts::alloc_name(vm, context[78], functions[efunc_Expression]);
    refalrts::alloc_open_bracket(vm, context[79]);
    refalrts::copy_evar(vm, context[80], context[81], context[47], context[48]);
    refalrts::alloc_chars(vm, context[82], context[83], "  ", 2);
    refalrts::copy_evar(vm, context[84], context[85], context[47], context[48]);
    refalrts::alloc_chars(vm, context[86], context[87], "  ", 2);
    refalrts::copy_evar(vm, context[88], context[89], context[47], context[48]);
    refalrts::alloc_char(vm, context[90], '>');
    refalrts::alloc_close_bracket(vm, context[91]);
    refalrts::reinit_char(context[21], '<');
    refalrts::reinit_char(context[32], ' ');
    refalrts::reinit_char(context[44], '{');
    refalrts::reinit_char(context[57], '{');
    refalrts::reinit_open_call(context[59]);
    refalrts::reinit_name(context[60], functions[efunc_DisplayName]);
    refalrts::reinit_close_call(context[58]);
    refalrts::update_name(context[4], functions[efunc_Expression]);
    refalrts::reinit_char(context[12], ' ');
    refalrts::reinit_char(context[15], ' ');
    refalrts::reinit_close_call(context[20]);
    refalrts::reinit_open_bracket(context[1]);
    refalrts::link_brackets( context[1], context[91] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[77] );
    refalrts::link_brackets( context[19], context[33] );
    refalrts::link_brackets( context[79], context[16] );
    refalrts::link_brackets( context[71], context[76] );
    refalrts::push_stack( vm, context[70] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[11], context[69] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[61], context[62] );
    refalrts::push_stack( vm, context[58] );
    refalrts::push_stack( vm, context[59] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[91], context[91] );
    res = refalrts::splice_evar( res, context[49], context[50] );
    res = refalrts::splice_evar( res, context[90], context[90] );
    res = refalrts::splice_evar( res, context[88], context[89] );
    res = refalrts::splice_evar( res, context[33], context[1] );
    res = refalrts::splice_evar( res, context[86], context[87] );
    res = refalrts::splice_evar( res, context[84], context[85] );
    res = refalrts::splice_evar( res, context[16], context[19] );
    res = refalrts::splice_evar( res, context[70], context[83] );
    res = refalrts::splice_evar( res, context[51], context[52] );
    res = refalrts::splice_evar( res, context[67], context[69] );
    res = refalrts::splice_evar( res, context[8], context[15] );
    res = refalrts::splice_evar( res, context[65], context[66] );
    res = refalrts::splice_evar( res, context[63], context[64] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[62], context[62] );
    res = refalrts::splice_evar( res, context[21], context[58] );
    res = refalrts::splice_evar( res, context[45], context[46] );
    res = refalrts::splice_evar( res, context[61], context[61] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & MultilineTerm-Prefix:1/4 (/7 e.Prefix#1/22 )/8 (/11 e.Indent#1/24 )/12 (/15 e.Suffix#1/26 )/16 (/19 # CallBrackets/21 e.Expr#2/28 )/20 >/1
    context[22] = context[5];
    context[23] = context[6];
    context[24] = context[9];
    context[25] = context[10];
    context[26] = context[13];
    context[27] = context[14];
    context[28] = context[17];
    context[29] = context[18];
    if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[21] ) )
      continue;
    // closed e.Prefix#1 as range 22
    // closed e.Indent#1 as range 24
    // closed e.Suffix#1 as range 26
    // closed e.Expr#2 as range 28
    //DEBUG: e.Prefix#1: 22
    //DEBUG: e.Indent#1: 24
    //DEBUG: e.Suffix#1: 26
    //DEBUG: e.Expr#2: 28

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/19 } Tile{ AsIs: e.Prefix#1/22 } '<'/30 Tile{ AsIs: )/16 } Tile{ AsIs: </0 Reuse: & Expression/4 AsIs: (/7 } e.Indent#1/24/31"  "/33 Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.Indent#1/24 HalfReuse: ' '/12 HalfReuse: ' '/15 } Tile{ HalfReuse: )/21 AsIs: e.Expr#2/28 HalfReuse: >/20 HalfReuse: (/1 } e.Indent#1/24/35 '>'/37 Tile{ AsIs: e.Suffix#1/26 } )/38 Tile{ ]] }
    refalrts::alloc_char(vm, context[30], '<');
    refalrts::copy_evar(vm, context[31], context[32], context[24], context[25]);
    refalrts::alloc_chars(vm, context[33], context[34], "  ", 2);
    refalrts::copy_evar(vm, context[35], context[36], context[24], context[25]);
    refalrts::alloc_char(vm, context[37], '>');
    refalrts::alloc_close_bracket(vm, context[38]);
    refalrts::update_name(context[4], functions[efunc_Expression]);
    refalrts::reinit_char(context[12], ' ');
    refalrts::reinit_char(context[15], ' ');
    refalrts::reinit_close_bracket(context[21]);
    refalrts::reinit_close_call(context[20]);
    refalrts::reinit_open_bracket(context[1]);
    refalrts::link_brackets( context[1], context[38] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[11], context[21] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[19], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[38], context[38] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[37], context[37] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_evar( res, context[21], context[1] );
    res = refalrts::splice_evar( res, context[8], context[15] );
    res = refalrts::splice_evar( res, context[33], context[34] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[30], context[30] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & MultilineTerm-Prefix:1/4 (/7 e.Prefix#1/22 )/8 (/11 e.Indent#1/24 )/12 (/15 e.Suffix#1/26 )/16 (/19 # ColdCallBrackets/21 e.Expr#2/28 )/20 >/1
    context[22] = context[5];
    context[23] = context[6];
    context[24] = context[9];
    context[25] = context[10];
    context[26] = context[13];
    context[27] = context[14];
    context[28] = context[17];
    context[29] = context[18];
    if( ! refalrts::ident_term( identifiers[ident_ColdCallBrackets], context[21] ) )
      continue;
    // closed e.Prefix#1 as range 22
    // closed e.Indent#1 as range 24
    // closed e.Suffix#1 as range 26
    // closed e.Expr#2 as range 28
    //DEBUG: e.Prefix#1: 22
    //DEBUG: e.Indent#1: 24
    //DEBUG: e.Suffix#1: 26
    //DEBUG: e.Expr#2: 28

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/19 } Tile{ AsIs: e.Prefix#1/22 }"<*"/30 )/32 Tile{ AsIs: </0 Reuse: & Expression/4 AsIs: (/7 } e.Indent#1/24/33 ' '/35 Tile{ HalfReuse: ' '/21 } Tile{ AsIs: )/20 HalfReuse: (/1 } e.Indent#1/24/36"  "/38 )/40 Tile{ AsIs: e.Expr#2/28 } Tile{ HalfReuse: >/8 AsIs: (/11 AsIs: e.Indent#1/24 HalfReuse: '*'/12 HalfReuse: '>'/15 AsIs: e.Suffix#1/26 AsIs: )/16 } Tile{ ]] }
    refalrts::alloc_chars(vm, context[30], context[31], "<*", 2);
    refalrts::alloc_close_bracket(vm, context[32]);
    refalrts::copy_evar(vm, context[33], context[34], context[24], context[25]);
    refalrts::alloc_char(vm, context[35], ' ');
    refalrts::copy_evar(vm, context[36], context[37], context[24], context[25]);
    refalrts::alloc_chars(vm, context[38], context[39], "  ", 2);
    refalrts::alloc_close_bracket(vm, context[40]);
    refalrts::update_name(context[4], functions[efunc_Expression]);
    refalrts::reinit_char(context[21], ' ');
    refalrts::reinit_open_bracket(context[1]);
    refalrts::reinit_close_call(context[8]);
    refalrts::reinit_char(context[12], '*');
    refalrts::reinit_char(context[15], '>');
    refalrts::link_brackets( context[11], context[16] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[1], context[40] );
    refalrts::link_brackets( context[7], context[20] );
    refalrts::link_brackets( context[19], context[32] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[16] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_evar( res, context[38], context[40] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    res = refalrts::splice_evar( res, context[20], context[1] );
    res = refalrts::splice_evar( res, context[21], context[21] );
    res = refalrts::splice_evar( res, context[35], context[35] );
    res = refalrts::splice_evar( res, context[33], context[34] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[30], context[32] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & MultilineTerm-Prefix:1/4 (/7 e.Prefix#1/22 )/8 (/11 e.Indent#1/24 )/12 (/15 e.Suffix#1/26 )/16 (/19 # ClosureBrackets/21 (/32 # Symbol/34 # Name/35 e.Function#2/30 )/33 e.Expr#2/28 )/20 >/1
    context[22] = context[5];
    context[23] = context[6];
    context[24] = context[9];
    context[25] = context[10];
    context[26] = context[13];
    context[27] = context[14];
    context[28] = context[17];
    context[29] = context[18];
    if( ! refalrts::ident_term( identifiers[ident_ClosureBrackets], context[21] ) )
      continue;
    context[30] = 0;
    context[31] = 0;
    context[32] = refalrts::brackets_left( context[30], context[31], context[28], context[29] );
    if( ! context[32] )
      continue;
    refalrts::bracket_pointers(context[32], context[33]);
    context[34] = refalrts::ident_left( identifiers[ident_Symbol], context[30], context[31] );
    if( ! context[34] )
      continue;
    context[35] = refalrts::ident_left( identifiers[ident_Name], context[30], context[31] );
    if( ! context[35] )
      continue;
    // closed e.Prefix#1 as range 22
    // closed e.Indent#1 as range 24
    // closed e.Suffix#1 as range 26
    // closed e.Function#2 as range 30
    // closed e.Expr#2 as range 28
    //DEBUG: e.Prefix#1: 22
    //DEBUG: e.Indent#1: 24
    //DEBUG: e.Suffix#1: 26
    //DEBUG: e.Function#2: 30
    //DEBUG: e.Expr#2: 28

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/19 } Tile{ AsIs: e.Prefix#1/22 } Tile{ HalfReuse: '{'/21 HalfReuse: '{'/32 HalfReuse: </34 HalfReuse: & DisplayName/35 AsIs: e.Function#2/30 HalfReuse: >/33 } )/36 Tile{ AsIs: </0 Reuse: & Expression/4 AsIs: (/7 } e.Indent#1/24/37"  "/39 Tile{ AsIs: )/20 HalfReuse: (/1 } e.Indent#1/24/41"  "/43 )/45 Tile{ AsIs: e.Expr#2/28 } Tile{ HalfReuse: >/8 AsIs: (/11 AsIs: e.Indent#1/24 HalfReuse: '}'/12 HalfReuse: '}'/15 AsIs: e.Suffix#1/26 AsIs: )/16 } Tile{ ]] }
    refalrts::alloc_close_bracket(vm, context[36]);
    refalrts::copy_evar(vm, context[37], context[38], context[24], context[25]);
    refalrts::alloc_chars(vm, context[39], context[40], "  ", 2);
    refalrts::copy_evar(vm, context[41], context[42], context[24], context[25]);
    refalrts::alloc_chars(vm, context[43], context[44], "  ", 2);
    refalrts::alloc_close_bracket(vm, context[45]);
    refalrts::reinit_char(context[21], '{');
    refalrts::reinit_char(context[32], '{');
    refalrts::reinit_open_call(context[34]);
    refalrts::reinit_name(context[35], functions[efunc_DisplayName]);
    refalrts::reinit_close_call(context[33]);
    refalrts::update_name(context[4], functions[efunc_Expression]);
    refalrts::reinit_open_bracket(context[1]);
    refalrts::reinit_close_call(context[8]);
    refalrts::reinit_char(context[12], '}');
    refalrts::reinit_char(context[15], '}');
    refalrts::link_brackets( context[11], context[16] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[1], context[45] );
    refalrts::link_brackets( context[7], context[20] );
    refalrts::link_brackets( context[19], context[36] );
    refalrts::push_stack( vm, context[33] );
    refalrts::push_stack( vm, context[34] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[16] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_evar( res, context[43], context[45] );
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_evar( res, context[20], context[1] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[37], context[38] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[36], context[36] );
    res = refalrts::splice_evar( res, context[21], context[33] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MultilineTerm-Prefix:1/4 (/7 e.Prefix#1/5 )/8 (/11 e.Indent#1/9 )/12 (/15 e.Suffix#1/13 )/16 (/19 s.Type#2/21 e.Value#2/17 )/20 >/1
  // closed e.Prefix#1 as range 5
  // closed e.Indent#1 as range 9
  // closed e.Suffix#1 as range 13
  // closed e.Value#2 as range 17
  //DEBUG: s.Type#2: 21
  //DEBUG: e.Prefix#1: 5
  //DEBUG: e.Indent#1: 9
  //DEBUG: e.Suffix#1: 13
  //DEBUG: e.Value#2: 17

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & MultilineTerm-Prefix:1/4 {REMOVED TILE} e.Indent#1/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Prefix#1/5 HalfReuse: </8 HalfReuse: & __Step-Drop/11 } Tile{ HalfReuse: >/15 } Tile{ HalfReuse: </16 HalfReuse: & __Meta_Mu/19 AsIs: s.Type#2/21 AsIs: e.Value#2/17 HalfReuse: & $table/20 AsIs: >/1 } Tile{ AsIs: e.Suffix#1/13 } Tile{ AsIs: )/12 } Tile{ ]] }
  refalrts::reinit_open_call(context[8]);
  refalrts::reinit_name(context[11], functions[efunc_u_u_Stepm_Drop]);
  refalrts::reinit_close_call(context[15]);
  refalrts::reinit_open_call(context[16]);
  refalrts::reinit_name(context[19], functions[efunc_u_u_Metau_Mu]);
  refalrts::reinit_name(context[20], functions[efunc_d_table]);
  refalrts::link_brackets( context[7], context[12] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[16], context[1] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[7], context[11] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MultilineTermm_Prefix_B1("MultilineTerm-Prefix:1", COOKIE1_, COOKIE2_, func_gen_MultilineTermm_Prefix_B1);


static refalrts::FnResult func_MultilineTermm_Prefix(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 94 elems
  refalrts::Iter context[94];
  refalrts::zeros( context, 94 );
  // </0 & MultilineTerm-Prefix/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & MultilineTerm-Prefix/4 (/7 e.new#1/5 )/8 e.new#2/2 t.new#3/13 (/11 e.new#4/9 )/12 >/1
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
  // closed e.new#1 as range 5
  // closed e.new#4 as range 9
  context[14] = refalrts::tvar_right( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & MultilineTerm-Prefix/4 (/7 e.new#8/15 )/8 e.new#7/17 (/13 s.new#5/23 e.new#6/21 )/14 (/11 e.new#9/19 )/12 >/1
    context[15] = context[5];
    context[16] = context[6];
    context[17] = context[2];
    context[18] = context[3];
    context[19] = context[9];
    context[20] = context[10];
    context[21] = 0;
    context[22] = 0;
    if( ! refalrts::brackets_term( context[21], context[22], context[13] ) )
      continue;
    // closed e.new#8 as range 15
    // closed e.new#7 as range 17
    // closed e.new#9 as range 19
    if( ! refalrts::svar_left( context[23], context[21], context[22] ) )
      continue;
    // closed e.new#6 as range 21
    do {
      // </0 & MultilineTerm-Prefix/4 (/7 e.Prefix#1/24 )/8 e.Indent#1/26 (/13 # Brackets/23 e.0#0/28 )/14 (/11 e.Suffix#1/30 )/12 >/1
      context[24] = context[15];
      context[25] = context[16];
      context[26] = context[17];
      context[27] = context[18];
      context[28] = context[21];
      context[29] = context[22];
      context[30] = context[19];
      context[31] = context[20];
      if( ! refalrts::ident_term( identifiers[ident_Brackets], context[23] ) )
        continue;
      // closed e.Prefix#1 as range 24
      // closed e.Indent#1 as range 26
      // closed e.0#0 as range 28
      // closed e.Suffix#1 as range 30
      //DEBUG: e.Prefix#1: 24
      //DEBUG: e.Indent#1: 26
      //DEBUG: e.0#0: 28
      //DEBUG: e.Suffix#1: 30

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/32 Tile{ AsIs: e.Prefix#1/24 } '('/33 Tile{ AsIs: )/8 } Tile{ AsIs: </0 Reuse: & Expression/4 AsIs: (/7 } Tile{ AsIs: e.Indent#1/26 }"  "/34 Tile{ AsIs: )/12 HalfReuse: (/1 } e.Indent#1/26/36 ' '/38 Tile{ HalfReuse: ' '/13 HalfReuse: )/23 AsIs: e.0#0/28 HalfReuse: >/14 AsIs: (/11 } e.Indent#1/26/39 ')'/41 Tile{ AsIs: e.Suffix#1/30 } )/42 Tile{ ]] }
      refalrts::alloc_open_bracket(vm, context[32]);
      refalrts::alloc_char(vm, context[33], '(');
      refalrts::alloc_chars(vm, context[34], context[35], "  ", 2);
      refalrts::copy_evar(vm, context[36], context[37], context[26], context[27]);
      refalrts::alloc_char(vm, context[38], ' ');
      refalrts::copy_evar(vm, context[39], context[40], context[26], context[27]);
      refalrts::alloc_char(vm, context[41], ')');
      refalrts::alloc_close_bracket(vm, context[42]);
      refalrts::update_name(context[4], functions[efunc_Expression]);
      refalrts::reinit_open_bracket(context[1]);
      refalrts::reinit_char(context[13], ' ');
      refalrts::reinit_close_bracket(context[23]);
      refalrts::reinit_close_call(context[14]);
      refalrts::link_brackets( context[11], context[42] );
      refalrts::push_stack( vm, context[14] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[1], context[23] );
      refalrts::link_brackets( context[7], context[12] );
      refalrts::link_brackets( context[32], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[42], context[42] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[41], context[41] );
      res = refalrts::splice_evar( res, context[39], context[40] );
      res = refalrts::splice_evar( res, context[13], context[11] );
      res = refalrts::splice_evar( res, context[38], context[38] );
      res = refalrts::splice_evar( res, context[36], context[37] );
      res = refalrts::splice_evar( res, context[12], context[1] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[0], context[7] );
      res = refalrts::splice_evar( res, context[8], context[8] );
      res = refalrts::splice_evar( res, context[33], context[33] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      res = refalrts::splice_evar( res, context[32], context[32] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & MultilineTerm-Prefix/4 (/7 e.new#14/24 )/8 e.new#13/26 (/13 s.new#10/23 (/34 e.new#11/32 )/35 e.new#12/28 )/14 (/11 e.new#15/30 )/12 >/1
      context[24] = context[15];
      context[25] = context[16];
      context[26] = context[17];
      context[27] = context[18];
      context[28] = context[21];
      context[29] = context[22];
      context[30] = context[19];
      context[31] = context[20];
      context[32] = 0;
      context[33] = 0;
      context[34] = refalrts::brackets_left( context[32], context[33], context[28], context[29] );
      if( ! context[34] )
        continue;
      refalrts::bracket_pointers(context[34], context[35]);
      // closed e.new#14 as range 24
      // closed e.new#13 as range 26
      // closed e.new#11 as range 32
      // closed e.new#12 as range 28
      // closed e.new#15 as range 30
      do {
        // </0 & MultilineTerm-Prefix/4 (/7 e.Prefix#1/36 )/8 e.Indent#1/38 (/13 # ADT-Brackets/23 (/34 e.2#0/40 )/35 e.1#0/42 )/14 (/11 e.Suffix#1/44 )/12 >/1
        context[36] = context[24];
        context[37] = context[25];
        context[38] = context[26];
        context[39] = context[27];
        context[40] = context[32];
        context[41] = context[33];
        context[42] = context[28];
        context[43] = context[29];
        context[44] = context[30];
        context[45] = context[31];
        if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[23] ) )
          continue;
        // closed e.Prefix#1 as range 36
        // closed e.Indent#1 as range 38
        // closed e.2#0 as range 40
        // closed e.1#0 as range 42
        // closed e.Suffix#1 as range 44
        //DEBUG: e.Prefix#1: 36
        //DEBUG: e.Indent#1: 38
        //DEBUG: e.2#0: 40
        //DEBUG: e.1#0: 42
        //DEBUG: e.Suffix#1: 44

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/34 } Tile{ AsIs: e.Prefix#1/36 } '['/46 </47 & DisplayName/48 Tile{ AsIs: e.2#0/40 } >/49 Tile{ AsIs: )/12 } Tile{ AsIs: </0 Reuse: & Expression/4 AsIs: (/7 } e.Indent#1/38/50"  "/52 )/54 Tile{ HalfReuse: (/8 AsIs: e.Indent#1/38 HalfReuse: ' '/13 HalfReuse: ' '/23 } Tile{ AsIs: )/35 AsIs: e.1#0/42 HalfReuse: >/14 AsIs: (/11 } e.Indent#1/38/55 ']'/57 Tile{ AsIs: e.Suffix#1/44 } Tile{ HalfReuse: )/1 ]] }
        refalrts::alloc_char(vm, context[46], '[');
        refalrts::alloc_open_call(vm, context[47]);
        refalrts::alloc_name(vm, context[48], functions[efunc_DisplayName]);
        refalrts::alloc_close_call(vm, context[49]);
        refalrts::copy_evar(vm, context[50], context[51], context[38], context[39]);
        refalrts::alloc_chars(vm, context[52], context[53], "  ", 2);
        refalrts::alloc_close_bracket(vm, context[54]);
        refalrts::copy_evar(vm, context[55], context[56], context[38], context[39]);
        refalrts::alloc_char(vm, context[57], ']');
        refalrts::update_name(context[4], functions[efunc_Expression]);
        refalrts::reinit_open_bracket(context[8]);
        refalrts::reinit_char(context[13], ' ');
        refalrts::reinit_char(context[23], ' ');
        refalrts::reinit_close_call(context[14]);
        refalrts::reinit_close_bracket(context[1]);
        refalrts::link_brackets( context[11], context[1] );
        refalrts::push_stack( vm, context[14] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[8], context[35] );
        refalrts::link_brackets( context[7], context[54] );
        refalrts::link_brackets( context[34], context[12] );
        refalrts::push_stack( vm, context[49] );
        refalrts::push_stack( vm, context[47] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[44], context[45] );
        res = refalrts::splice_evar( res, context[57], context[57] );
        res = refalrts::splice_evar( res, context[55], context[56] );
        res = refalrts::splice_evar( res, context[35], context[11] );
        res = refalrts::splice_evar( res, context[8], context[23] );
        res = refalrts::splice_evar( res, context[52], context[54] );
        res = refalrts::splice_evar( res, context[50], context[51] );
        res = refalrts::splice_evar( res, context[0], context[7] );
        res = refalrts::splice_evar( res, context[12], context[12] );
        res = refalrts::splice_evar( res, context[49], context[49] );
        res = refalrts::splice_evar( res, context[40], context[41] );
        res = refalrts::splice_evar( res, context[46], context[48] );
        res = refalrts::splice_evar( res, context[36], context[37] );
        res = refalrts::splice_evar( res, context[34], context[34] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & MultilineTerm-Prefix/4 (/7 e.new#20/36 )/8 e.new#19/38 (/13 # CallBrackets/23 (/34 s.new#17/46 e.new#18/40 )/35 e.new#16/42 )/14 (/11 e.new#21/44 )/12 >/1
      context[36] = context[24];
      context[37] = context[25];
      context[38] = context[26];
      context[39] = context[27];
      context[40] = context[32];
      context[41] = context[33];
      context[42] = context[28];
      context[43] = context[29];
      context[44] = context[30];
      context[45] = context[31];
      if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[23] ) )
        continue;
      // closed e.new#20 as range 36
      // closed e.new#19 as range 38
      // closed e.new#16 as range 42
      // closed e.new#21 as range 44
      if( ! refalrts::svar_left( context[46], context[40], context[41] ) )
        continue;
      // closed e.new#18 as range 40
      do {
        // </0 & MultilineTerm-Prefix/4 (/7 e.Prefix#1/47 )/8 e.Indent#1/49 (/13 # CallBrackets/23 (/34 # Symbol/46 # Name/57 e.4#0/51 )/35 e.1#0/53 )/14 (/11 e.Suffix#1/55 )/12 >/1
        context[47] = context[36];
        context[48] = context[37];
        context[49] = context[38];
        context[50] = context[39];
        context[51] = context[40];
        context[52] = context[41];
        context[53] = context[42];
        context[54] = context[43];
        context[55] = context[44];
        context[56] = context[45];
        if( ! refalrts::ident_term( identifiers[ident_Symbol], context[46] ) )
          continue;
        context[57] = refalrts::ident_left( identifiers[ident_Name], context[51], context[52] );
        if( ! context[57] )
          continue;
        // closed e.Prefix#1 as range 47
        // closed e.Indent#1 as range 49
        // closed e.4#0 as range 51
        // closed e.1#0 as range 53
        // closed e.Suffix#1 as range 55
        //DEBUG: e.Prefix#1: 47
        //DEBUG: e.Indent#1: 49
        //DEBUG: e.4#0: 51
        //DEBUG: e.1#0: 53
        //DEBUG: e.Suffix#1: 55

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } Tile{ AsIs: e.Prefix#1/47 } '<'/58 Tile{ AsIs: </0 Reuse: & DisplayName/4 } Tile{ AsIs: e.4#0/51 } Tile{ HalfReuse: >/57 } Tile{ AsIs: )/12 HalfReuse: </1 } & Expression/59 Tile{ HalfReuse: (/8 AsIs: e.Indent#1/49 HalfReuse: ' '/13 HalfReuse: ' '/23 HalfReuse: )/34 HalfReuse: (/46 } e.Indent#1/49/60"  "/62 Tile{ AsIs: )/35 AsIs: e.1#0/53 HalfReuse: >/14 AsIs: (/11 } e.Indent#1/49/64 '>'/66 Tile{ AsIs: e.Suffix#1/55 } )/67 Tile{ ]] }
        refalrts::alloc_char(vm, context[58], '<');
        refalrts::alloc_name(vm, context[59], functions[efunc_Expression]);
        refalrts::copy_evar(vm, context[60], context[61], context[49], context[50]);
        refalrts::alloc_chars(vm, context[62], context[63], "  ", 2);
        refalrts::copy_evar(vm, context[64], context[65], context[49], context[50]);
        refalrts::alloc_char(vm, context[66], '>');
        refalrts::alloc_close_bracket(vm, context[67]);
        refalrts::update_name(context[4], functions[efunc_DisplayName]);
        refalrts::reinit_close_call(context[57]);
        refalrts::reinit_open_call(context[1]);
        refalrts::reinit_open_bracket(context[8]);
        refalrts::reinit_char(context[13], ' ');
        refalrts::reinit_char(context[23], ' ');
        refalrts::reinit_close_bracket(context[34]);
        refalrts::reinit_open_bracket(context[46]);
        refalrts::reinit_close_call(context[14]);
        refalrts::link_brackets( context[11], context[67] );
        refalrts::push_stack( vm, context[14] );
        refalrts::push_stack( vm, context[1] );
        refalrts::link_brackets( context[46], context[35] );
        refalrts::link_brackets( context[8], context[34] );
        refalrts::link_brackets( context[7], context[12] );
        refalrts::push_stack( vm, context[57] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[67], context[67] );
        res = refalrts::splice_evar( res, context[55], context[56] );
        res = refalrts::splice_evar( res, context[66], context[66] );
        res = refalrts::splice_evar( res, context[64], context[65] );
        res = refalrts::splice_evar( res, context[35], context[11] );
        res = refalrts::splice_evar( res, context[62], context[63] );
        res = refalrts::splice_evar( res, context[60], context[61] );
        res = refalrts::splice_evar( res, context[8], context[46] );
        res = refalrts::splice_evar( res, context[59], context[59] );
        res = refalrts::splice_evar( res, context[12], context[1] );
        res = refalrts::splice_evar( res, context[57], context[57] );
        res = refalrts::splice_evar( res, context[51], context[52] );
        res = refalrts::splice_evar( res, context[0], context[4] );
        res = refalrts::splice_evar( res, context[58], context[58] );
        res = refalrts::splice_evar( res, context[47], context[48] );
        res = refalrts::splice_evar( res, context[7], context[7] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & MultilineTerm-Prefix/4 (/7 e.Prefix#1/47 )/8 e.Indent#1/49 (/13 # CallBrackets/23 (/34 # TkVariable/46 e.3#0/51 )/35 e.1#0/53 )/14 (/11 e.Suffix#1/55 )/12 >/1
        context[47] = context[36];
        context[48] = context[37];
        context[49] = context[38];
        context[50] = context[39];
        context[51] = context[40];
        context[52] = context[41];
        context[53] = context[42];
        context[54] = context[43];
        context[55] = context[44];
        context[56] = context[45];
        if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[46] ) )
          continue;
        // closed e.Prefix#1 as range 47
        // closed e.Indent#1 as range 49
        // closed e.3#0 as range 51
        // closed e.1#0 as range 53
        // closed e.Suffix#1 as range 55
        //DEBUG: e.Prefix#1: 47
        //DEBUG: e.Indent#1: 49
        //DEBUG: e.3#0: 51
        //DEBUG: e.1#0: 53
        //DEBUG: e.Suffix#1: 55

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/34 } Tile{ AsIs: e.Prefix#1/47 } '<'/57 </58 & TkVariable/59 Tile{ AsIs: e.3#0/51 } >/60 Tile{ AsIs: )/12 } Tile{ AsIs: </0 Reuse: & Expression/4 AsIs: (/7 } e.Indent#1/49/61 Tile{ HalfReuse: ' '/46 } ' '/63 )/64 Tile{ HalfReuse: (/8 AsIs: e.Indent#1/49 HalfReuse: ' '/13 HalfReuse: ' '/23 } Tile{ AsIs: )/35 AsIs: e.1#0/53 HalfReuse: >/14 AsIs: (/11 } e.Indent#1/49/65 '>'/67 Tile{ AsIs: e.Suffix#1/55 } Tile{ HalfReuse: )/1 ]] }
        refalrts::alloc_char(vm, context[57], '<');
        refalrts::alloc_open_call(vm, context[58]);
        refalrts::alloc_name(vm, context[59], functions[efunc_TkVariable]);
        refalrts::alloc_close_call(vm, context[60]);
        refalrts::copy_evar(vm, context[61], context[62], context[49], context[50]);
        refalrts::alloc_char(vm, context[63], ' ');
        refalrts::alloc_close_bracket(vm, context[64]);
        refalrts::copy_evar(vm, context[65], context[66], context[49], context[50]);
        refalrts::alloc_char(vm, context[67], '>');
        refalrts::update_name(context[4], functions[efunc_Expression]);
        refalrts::reinit_char(context[46], ' ');
        refalrts::reinit_open_bracket(context[8]);
        refalrts::reinit_char(context[13], ' ');
        refalrts::reinit_char(context[23], ' ');
        refalrts::reinit_close_call(context[14]);
        refalrts::reinit_close_bracket(context[1]);
        refalrts::link_brackets( context[11], context[1] );
        refalrts::push_stack( vm, context[14] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[8], context[35] );
        refalrts::link_brackets( context[7], context[64] );
        refalrts::link_brackets( context[34], context[12] );
        refalrts::push_stack( vm, context[60] );
        refalrts::push_stack( vm, context[58] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[55], context[56] );
        res = refalrts::splice_evar( res, context[67], context[67] );
        res = refalrts::splice_evar( res, context[65], context[66] );
        res = refalrts::splice_evar( res, context[35], context[11] );
        res = refalrts::splice_evar( res, context[8], context[23] );
        res = refalrts::splice_evar( res, context[63], context[64] );
        res = refalrts::splice_evar( res, context[46], context[46] );
        res = refalrts::splice_evar( res, context[61], context[62] );
        res = refalrts::splice_evar( res, context[0], context[7] );
        res = refalrts::splice_evar( res, context[12], context[12] );
        res = refalrts::splice_evar( res, context[60], context[60] );
        res = refalrts::splice_evar( res, context[51], context[52] );
        res = refalrts::splice_evar( res, context[57], context[59] );
        res = refalrts::splice_evar( res, context[47], context[48] );
        res = refalrts::splice_evar( res, context[34], context[34] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & MultilineTerm-Prefix/4 (/7 e.Prefix#1/47 )/8 e.Indent#1/49 (/13 # CallBrackets/23 (/34 # ClosureBrackets/46 (/59 # Symbol/61 # Name/62 e.7#0/57 )/60 e.4#0/51 )/35 e.1#0/53 )/14 (/11 e.Suffix#1/55 )/12 >/1
      context[47] = context[36];
      context[48] = context[37];
      context[49] = context[38];
      context[50] = context[39];
      context[51] = context[40];
      context[52] = context[41];
      context[53] = context[42];
      context[54] = context[43];
      context[55] = context[44];
      context[56] = context[45];
      if( ! refalrts::ident_term( identifiers[ident_ClosureBrackets], context[46] ) )
        continue;
      context[57] = 0;
      context[58] = 0;
      context[59] = refalrts::brackets_left( context[57], context[58], context[51], context[52] );
      if( ! context[59] )
        continue;
      refalrts::bracket_pointers(context[59], context[60]);
      context[61] = refalrts::ident_left( identifiers[ident_Symbol], context[57], context[58] );
      if( ! context[61] )
        continue;
      context[62] = refalrts::ident_left( identifiers[ident_Name], context[57], context[58] );
      if( ! context[62] )
        continue;
      // closed e.Prefix#1 as range 47
      // closed e.Indent#1 as range 49
      // closed e.7#0 as range 57
      // closed e.4#0 as range 51
      // closed e.1#0 as range 53
      // closed e.Suffix#1 as range 55
      //DEBUG: e.Prefix#1: 47
      //DEBUG: e.Indent#1: 49
      //DEBUG: e.7#0: 57
      //DEBUG: e.4#0: 51
      //DEBUG: e.1#0: 53
      //DEBUG: e.Suffix#1: 55

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/63 Tile{ AsIs: e.Prefix#1/47 }"< {{"/64 </66 & DisplayName/67 Tile{ AsIs: e.7#0/57 } >/68 Tile{ AsIs: )/60 } Tile{ AsIs: </0 Reuse: & Expression/4 AsIs: (/7 } e.Indent#1/49/69"    "/71 Tile{ AsIs: )/12 HalfReuse: (/1 } e.Indent#1/49/73"    "/75 )/77 Tile{ AsIs: e.4#0/51 } >/78 Tile{ HalfReuse: (/8 AsIs: e.Indent#1/49 HalfReuse: ' '/13 HalfReuse: ' '/23 HalfReuse: '}'/34 HalfReuse: '}'/46 HalfReuse: )/59 HalfReuse: </61 HalfReuse: & Expression/62 } (/79 e.Indent#1/49/80"  "/82 )/84 (/85 e.Indent#1/49/86"  "/88 Tile{ AsIs: )/35 AsIs: e.1#0/53 HalfReuse: >/14 AsIs: (/11 } e.Indent#1/49/90 '>'/92 Tile{ AsIs: e.Suffix#1/55 } )/93 Tile{ ]] }
      refalrts::alloc_open_bracket(vm, context[63]);
      refalrts::alloc_chars(vm, context[64], context[65], "< {{", 4);
      refalrts::alloc_open_call(vm, context[66]);
      refalrts::alloc_name(vm, context[67], functions[efunc_DisplayName]);
      refalrts::alloc_close_call(vm, context[68]);
      refalrts::copy_evar(vm, context[69], context[70], context[49], context[50]);
      refalrts::alloc_chars(vm, context[71], context[72], "    ", 4);
      refalrts::copy_evar(vm, context[73], context[74], context[49], context[50]);
      refalrts::alloc_chars(vm, context[75], context[76], "    ", 4);
      refalrts::alloc_close_bracket(vm, context[77]);
      refalrts::alloc_close_call(vm, context[78]);
      refalrts::alloc_open_bracket(vm, context[79]);
      refalrts::copy_evar(vm, context[80], context[81], context[49], context[50]);
      refalrts::alloc_chars(vm, context[82], context[83], "  ", 2);
      refalrts::alloc_close_bracket(vm, context[84]);
      refalrts::alloc_open_bracket(vm, context[85]);
      refalrts::copy_evar(vm, context[86], context[87], context[49], context[50]);
      refalrts::alloc_chars(vm, context[88], context[89], "  ", 2);
      refalrts::copy_evar(vm, context[90], context[91], context[49], context[50]);
      refalrts::alloc_char(vm, context[92], '>');
      refalrts::alloc_close_bracket(vm, context[93]);
      refalrts::update_name(context[4], functions[efunc_Expression]);
      refalrts::reinit_open_bracket(context[1]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_char(context[13], ' ');
      refalrts::reinit_char(context[23], ' ');
      refalrts::reinit_char(context[34], '}');
      refalrts::reinit_char(context[46], '}');
      refalrts::reinit_close_bracket(context[59]);
      refalrts::reinit_open_call(context[61]);
      refalrts::reinit_name(context[62], functions[efunc_Expression]);
      refalrts::reinit_close_call(context[14]);
      refalrts::link_brackets( context[11], context[93] );
      refalrts::push_stack( vm, context[14] );
      refalrts::push_stack( vm, context[61] );
      refalrts::link_brackets( context[85], context[35] );
      refalrts::link_brackets( context[79], context[84] );
      refalrts::link_brackets( context[8], context[59] );
      refalrts::push_stack( vm, context[78] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[1], context[77] );
      refalrts::link_brackets( context[7], context[12] );
      refalrts::link_brackets( context[63], context[60] );
      refalrts::push_stack( vm, context[68] );
      refalrts::push_stack( vm, context[66] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[93], context[93] );
      res = refalrts::splice_evar( res, context[55], context[56] );
      res = refalrts::splice_evar( res, context[92], context[92] );
      res = refalrts::splice_evar( res, context[90], context[91] );
      res = refalrts::splice_evar( res, context[35], context[11] );
      res = refalrts::splice_evar( res, context[79], context[89] );
      res = refalrts::splice_evar( res, context[8], context[62] );
      res = refalrts::splice_evar( res, context[78], context[78] );
      res = refalrts::splice_evar( res, context[51], context[52] );
      res = refalrts::splice_evar( res, context[75], context[77] );
      res = refalrts::splice_evar( res, context[73], context[74] );
      res = refalrts::splice_evar( res, context[12], context[1] );
      res = refalrts::splice_evar( res, context[71], context[72] );
      res = refalrts::splice_evar( res, context[69], context[70] );
      res = refalrts::splice_evar( res, context[0], context[7] );
      res = refalrts::splice_evar( res, context[60], context[60] );
      res = refalrts::splice_evar( res, context[68], context[68] );
      res = refalrts::splice_evar( res, context[57], context[58] );
      res = refalrts::splice_evar( res, context[64], context[67] );
      res = refalrts::splice_evar( res, context[47], context[48] );
      res = refalrts::splice_evar( res, context[63], context[63] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & MultilineTerm-Prefix/4 (/7 e.Prefix#1/24 )/8 e.Indent#1/26 (/13 # CallBrackets/23 e.0#0/28 )/14 (/11 e.Suffix#1/30 )/12 >/1
      context[24] = context[15];
      context[25] = context[16];
      context[26] = context[17];
      context[27] = context[18];
      context[28] = context[21];
      context[29] = context[22];
      context[30] = context[19];
      context[31] = context[20];
      if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[23] ) )
        continue;
      // closed e.Prefix#1 as range 24
      // closed e.Indent#1 as range 26
      // closed e.0#0 as range 28
      // closed e.Suffix#1 as range 30
      //DEBUG: e.Prefix#1: 24
      //DEBUG: e.Indent#1: 26
      //DEBUG: e.0#0: 28
      //DEBUG: e.Suffix#1: 30

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/32 Tile{ AsIs: e.Prefix#1/24 } '<'/33 Tile{ AsIs: )/8 } Tile{ AsIs: </0 Reuse: & Expression/4 AsIs: (/7 } Tile{ AsIs: e.Indent#1/26 }"  "/34 Tile{ AsIs: )/12 HalfReuse: (/1 } e.Indent#1/26/36 ' '/38 Tile{ HalfReuse: ' '/13 HalfReuse: )/23 AsIs: e.0#0/28 HalfReuse: >/14 AsIs: (/11 } e.Indent#1/26/39 '>'/41 Tile{ AsIs: e.Suffix#1/30 } )/42 Tile{ ]] }
      refalrts::alloc_open_bracket(vm, context[32]);
      refalrts::alloc_char(vm, context[33], '<');
      refalrts::alloc_chars(vm, context[34], context[35], "  ", 2);
      refalrts::copy_evar(vm, context[36], context[37], context[26], context[27]);
      refalrts::alloc_char(vm, context[38], ' ');
      refalrts::copy_evar(vm, context[39], context[40], context[26], context[27]);
      refalrts::alloc_char(vm, context[41], '>');
      refalrts::alloc_close_bracket(vm, context[42]);
      refalrts::update_name(context[4], functions[efunc_Expression]);
      refalrts::reinit_open_bracket(context[1]);
      refalrts::reinit_char(context[13], ' ');
      refalrts::reinit_close_bracket(context[23]);
      refalrts::reinit_close_call(context[14]);
      refalrts::link_brackets( context[11], context[42] );
      refalrts::push_stack( vm, context[14] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[1], context[23] );
      refalrts::link_brackets( context[7], context[12] );
      refalrts::link_brackets( context[32], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[42], context[42] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[41], context[41] );
      res = refalrts::splice_evar( res, context[39], context[40] );
      res = refalrts::splice_evar( res, context[13], context[11] );
      res = refalrts::splice_evar( res, context[38], context[38] );
      res = refalrts::splice_evar( res, context[36], context[37] );
      res = refalrts::splice_evar( res, context[12], context[1] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[0], context[7] );
      res = refalrts::splice_evar( res, context[8], context[8] );
      res = refalrts::splice_evar( res, context[33], context[33] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      res = refalrts::splice_evar( res, context[32], context[32] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & MultilineTerm-Prefix/4 (/7 e.Prefix#1/24 )/8 e.Indent#1/26 (/13 # ColdCallBrackets/23 e.0#0/28 )/14 (/11 e.Suffix#1/30 )/12 >/1
      context[24] = context[15];
      context[25] = context[16];
      context[26] = context[17];
      context[27] = context[18];
      context[28] = context[21];
      context[29] = context[22];
      context[30] = context[19];
      context[31] = context[20];
      if( ! refalrts::ident_term( identifiers[ident_ColdCallBrackets], context[23] ) )
        continue;
      // closed e.Prefix#1 as range 24
      // closed e.Indent#1 as range 26
      // closed e.0#0 as range 28
      // closed e.Suffix#1 as range 30
      //DEBUG: e.Prefix#1: 24
      //DEBUG: e.Indent#1: 26
      //DEBUG: e.0#0: 28
      //DEBUG: e.Suffix#1: 30

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/32 Tile{ AsIs: e.Prefix#1/24 }"<*"/33 Tile{ AsIs: )/8 } Tile{ AsIs: </0 Reuse: & Expression/4 AsIs: (/7 } Tile{ AsIs: e.Indent#1/26 }"  "/35 Tile{ AsIs: )/12 HalfReuse: (/1 } e.Indent#1/26/37 ' '/39 Tile{ HalfReuse: ' '/13 HalfReuse: )/23 AsIs: e.0#0/28 HalfReuse: >/14 AsIs: (/11 } e.Indent#1/26/40"*>"/42 Tile{ AsIs: e.Suffix#1/30 } )/44 Tile{ ]] }
      refalrts::alloc_open_bracket(vm, context[32]);
      refalrts::alloc_chars(vm, context[33], context[34], "<*", 2);
      refalrts::alloc_chars(vm, context[35], context[36], "  ", 2);
      refalrts::copy_evar(vm, context[37], context[38], context[26], context[27]);
      refalrts::alloc_char(vm, context[39], ' ');
      refalrts::copy_evar(vm, context[40], context[41], context[26], context[27]);
      refalrts::alloc_chars(vm, context[42], context[43], "*>", 2);
      refalrts::alloc_close_bracket(vm, context[44]);
      refalrts::update_name(context[4], functions[efunc_Expression]);
      refalrts::reinit_open_bracket(context[1]);
      refalrts::reinit_char(context[13], ' ');
      refalrts::reinit_close_bracket(context[23]);
      refalrts::reinit_close_call(context[14]);
      refalrts::link_brackets( context[11], context[44] );
      refalrts::push_stack( vm, context[14] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[1], context[23] );
      refalrts::link_brackets( context[7], context[12] );
      refalrts::link_brackets( context[32], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[44], context[44] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[42], context[43] );
      res = refalrts::splice_evar( res, context[40], context[41] );
      res = refalrts::splice_evar( res, context[13], context[11] );
      res = refalrts::splice_evar( res, context[39], context[39] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      res = refalrts::splice_evar( res, context[12], context[1] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[0], context[7] );
      res = refalrts::splice_evar( res, context[8], context[8] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      res = refalrts::splice_evar( res, context[32], context[32] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & MultilineTerm-Prefix/4 (/7 e.Prefix#1/24 )/8 e.Indent#1/26 (/13 # ClosureBrackets/23 (/34 # Symbol/36 # Name/37 e.4#0/32 )/35 e.1#0/28 )/14 (/11 e.Suffix#1/30 )/12 >/1
      context[24] = context[15];
      context[25] = context[16];
      context[26] = context[17];
      context[27] = context[18];
      context[28] = context[21];
      context[29] = context[22];
      context[30] = context[19];
      context[31] = context[20];
      if( ! refalrts::ident_term( identifiers[ident_ClosureBrackets], context[23] ) )
        continue;
      context[32] = 0;
      context[33] = 0;
      context[34] = refalrts::brackets_left( context[32], context[33], context[28], context[29] );
      if( ! context[34] )
        continue;
      refalrts::bracket_pointers(context[34], context[35]);
      context[36] = refalrts::ident_left( identifiers[ident_Symbol], context[32], context[33] );
      if( ! context[36] )
        continue;
      context[37] = refalrts::ident_left( identifiers[ident_Name], context[32], context[33] );
      if( ! context[37] )
        continue;
      // closed e.Prefix#1 as range 24
      // closed e.Indent#1 as range 26
      // closed e.4#0 as range 32
      // closed e.1#0 as range 28
      // closed e.Suffix#1 as range 30
      //DEBUG: e.Prefix#1: 24
      //DEBUG: e.Indent#1: 26
      //DEBUG: e.4#0: 32
      //DEBUG: e.1#0: 28
      //DEBUG: e.Suffix#1: 30

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } Tile{ AsIs: e.Prefix#1/24 } '{'/38 Tile{ HalfReuse: '{'/37 } Tile{ AsIs: </0 Reuse: & DisplayName/4 } Tile{ AsIs: e.4#0/32 } >/39 Tile{ AsIs: )/12 HalfReuse: </1 } & Expression/40 Tile{ HalfReuse: (/8 AsIs: e.Indent#1/26 HalfReuse: ' '/13 HalfReuse: ' '/23 HalfReuse: )/34 HalfReuse: (/36 } e.Indent#1/26/41"  "/43 Tile{ AsIs: )/35 AsIs: e.1#0/28 HalfReuse: >/14 AsIs: (/11 } e.Indent#1/26/45"}}"/47 Tile{ AsIs: e.Suffix#1/30 } )/49 Tile{ ]] }
      refalrts::alloc_char(vm, context[38], '{');
      refalrts::alloc_close_call(vm, context[39]);
      refalrts::alloc_name(vm, context[40], functions[efunc_Expression]);
      refalrts::copy_evar(vm, context[41], context[42], context[26], context[27]);
      refalrts::alloc_chars(vm, context[43], context[44], "  ", 2);
      refalrts::copy_evar(vm, context[45], context[46], context[26], context[27]);
      refalrts::alloc_chars(vm, context[47], context[48], "}}", 2);
      refalrts::alloc_close_bracket(vm, context[49]);
      refalrts::reinit_char(context[37], '{');
      refalrts::update_name(context[4], functions[efunc_DisplayName]);
      refalrts::reinit_open_call(context[1]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_char(context[13], ' ');
      refalrts::reinit_char(context[23], ' ');
      refalrts::reinit_close_bracket(context[34]);
      refalrts::reinit_open_bracket(context[36]);
      refalrts::reinit_close_call(context[14]);
      refalrts::link_brackets( context[11], context[49] );
      refalrts::push_stack( vm, context[14] );
      refalrts::push_stack( vm, context[1] );
      refalrts::link_brackets( context[36], context[35] );
      refalrts::link_brackets( context[8], context[34] );
      refalrts::link_brackets( context[7], context[12] );
      refalrts::push_stack( vm, context[39] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[49], context[49] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[47], context[48] );
      res = refalrts::splice_evar( res, context[45], context[46] );
      res = refalrts::splice_evar( res, context[35], context[11] );
      res = refalrts::splice_evar( res, context[43], context[44] );
      res = refalrts::splice_evar( res, context[41], context[42] );
      res = refalrts::splice_evar( res, context[8], context[36] );
      res = refalrts::splice_evar( res, context[40], context[40] );
      res = refalrts::splice_evar( res, context[12], context[1] );
      res = refalrts::splice_evar( res, context[39], context[39] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[37], context[37] );
      res = refalrts::splice_evar( res, context[38], context[38] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & MultilineTerm-Prefix/4 (/7 e.Prefix#1/24 )/8 e.Indent#1/26 (/13 s.Type#2/23 e.0#0/28 )/14 (/11 e.Suffix#1/30 )/12 >/1
    context[24] = context[15];
    context[25] = context[16];
    context[26] = context[17];
    context[27] = context[18];
    context[28] = context[21];
    context[29] = context[22];
    context[30] = context[19];
    context[31] = context[20];
    // closed e.Prefix#1 as range 24
    // closed e.Indent#1 as range 26
    // closed e.0#0 as range 28
    // closed e.Suffix#1 as range 30
    //DEBUG: s.Type#2: 23
    //DEBUG: e.Prefix#1: 24
    //DEBUG: e.Indent#1: 26
    //DEBUG: e.0#0: 28
    //DEBUG: e.Suffix#1: 30

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Indent#1/26 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Prefix#1/24 HalfReuse: </8 } Tile{ Reuse: & __Step-Drop/4 } Tile{ AsIs: >/1 } Tile{ AsIs: </0 } Tile{ HalfReuse: & __Meta_Mu/13 AsIs: s.Type#2/23 AsIs: e.0#0/28 HalfReuse: & $table/14 HalfReuse: >/11 AsIs: e.Suffix#1/30 AsIs: )/12 } Tile{ ]] }
    refalrts::reinit_open_call(context[8]);
    refalrts::update_name(context[4], functions[efunc_u_u_Stepm_Drop]);
    refalrts::reinit_name(context[13], functions[efunc_u_u_Metau_Mu]);
    refalrts::reinit_name(context[14], functions[efunc_d_table]);
    refalrts::reinit_close_call(context[11]);
    refalrts::link_brackets( context[7], context[12] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[13], context[12] );
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[4], context[4] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MultilineTerm-Prefix/4 (/7 e.Prefix#1/5 )/8 e.Indent#1/2 t.Term#1/13 (/11 e.Suffix#1/9 )/12 >/1
  // closed e.Prefix#1 as range 5
  // closed e.Indent#1 as range 2
  // closed e.Suffix#1 as range 9
  //DEBUG: t.Term#1: 13
  //DEBUG: e.Prefix#1: 5
  //DEBUG: e.Indent#1: 2
  //DEBUG: e.Suffix#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MultilineTerm-Prefix:1*9/4 AsIs: (/7 AsIs: e.Prefix#1/5 AsIs: )/8 } (/15 Tile{ AsIs: e.Indent#1/2 } )/16 Tile{ AsIs: (/11 AsIs: e.Suffix#1/9 AsIs: )/12 } Tile{ AsIs: t.Term#1/13 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::alloc_close_bracket(vm, context[16]);
  refalrts::update_name(context[4], functions[efunc_gen_MultilineTermm_Prefix_B1D9]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MultilineTermm_Prefix("MultilineTerm-Prefix", COOKIE1_, COOKIE2_, func_MultilineTermm_Prefix);


static refalrts::FnResult func_Symbol(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & Symbol/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Symbol/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Symbol/4 s.new#3/5 s.new#4/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::svar_left( context[8], context[6], context[7] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;
    do {
      // </0 & Symbol/4 # Char/5 s.Char#1/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_Char], context[5] ) )
        continue;
      //DEBUG: s.Char#1: 8

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: '\''/0 HalfReuse: </4 HalfReuse: & CharRep/5 AsIs: s.Char#1/8 AsIs: >/1 } '\''/9 Tile{ ]] }
      refalrts::alloc_char(vm, context[9], '\'');
      refalrts::reinit_char(context[0], '\'');
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[5], functions[efunc_CharRep]);
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

    // </0 & Symbol/4 # Number/5 s.new#5/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_Number], context[5] ) )
      continue;
    do {
      // </0 & Symbol/4 # Number/5 # Cookie1/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_Cookie1], context[8] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: '$'/0 HalfReuse: 'C'/4 HalfReuse: 'O'/5 HalfReuse: 'O'/8 HalfReuse: 'K'/1 }"IE1"/9 Tile{ ]] }
      refalrts::alloc_chars(vm, context[9], context[10], "IE1", 3);
      refalrts::reinit_char(context[0], '$');
      refalrts::reinit_char(context[4], 'C');
      refalrts::reinit_char(context[5], 'O');
      refalrts::reinit_char(context[8], 'O');
      refalrts::reinit_char(context[1], 'K');
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Symbol/4 # Number/5 # Cookie2/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_Cookie2], context[8] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: '$'/0 HalfReuse: 'C'/4 HalfReuse: 'O'/5 HalfReuse: 'O'/8 HalfReuse: 'K'/1 }"IE2"/9 Tile{ ]] }
      refalrts::alloc_chars(vm, context[9], context[10], "IE2", 3);
      refalrts::reinit_char(context[0], '$');
      refalrts::reinit_char(context[4], 'C');
      refalrts::reinit_char(context[5], 'O');
      refalrts::reinit_char(context[8], 'O');
      refalrts::reinit_char(context[1], 'K');
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Symbol/4 # Number/5 s.Number#1/8 >/1
    //DEBUG: s.Number#1: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & Symb/5 AsIs: s.Number#1/8 AsIs: >/1 ]] }
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_Symb]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Symbol/4 # Name/5 e.Ident#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Name], context[5] ) )
      continue;
    // closed e.Ident#1 as range 6
    //DEBUG: e.Ident#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: '&'/0 HalfReuse: </4 HalfReuse: & DisplayName/5 AsIs: e.Ident#1/6 AsIs: >/1 ]] }
    refalrts::reinit_char(context[0], '&');
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_DisplayName]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Symbol/4 # Identifier/5 e.Ident#1/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_Identifier], context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Ident#1 as range 2
  //DEBUG: e.Ident#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Compound/4 HalfReuse: </5 } & DisplayName/6 Tile{ AsIs: e.Ident#1/2 } >/7 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[6], functions[efunc_DisplayName]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_Compound]);
  refalrts::reinit_open_call(context[5]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[6], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Symbol("Symbol", COOKIE1_, COOKIE2_, func_Symbol);


static refalrts::FnResult func_Compound(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & Compound/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Compound/4 e.Chars#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Chars#1 as range 5
    //DEBUG: e.Chars#1: 5
    //5: e.Chars#1
    //12: e.Chars#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[9], functions[efunc_gen_Compound_S1C1]);
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_IsIdent]);
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
      // </7 & Compound$1?1/11 # True/12 e.Textual#2/9 >/8
      context[9] = 0;
      context[10] = 0;
      context[11] = refalrts::call_left( context[9], context[10], context[7], context[8] );
      context[12] = refalrts::ident_left( identifiers[ident_True], context[9], context[10] );
      if( ! context[12] )
        continue;
      // closed e.Textual#2 as range 9
      //DEBUG: e.Chars#1: 5
      //DEBUG: e.Textual#2: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & Compound/4 e.Chars#1/5 </7 & Compound$1?1/11 # True/12 {REMOVED TILE} >/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Textual#2/9 } Tile{ ]] }
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[7], context[8]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Compound/4 e.Chars#1/2 >/1
  // closed e.Chars#1 as range 2
  //DEBUG: e.Chars#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } '\"'/5 Tile{ AsIs: </0 Reuse: & DoCompound/4 AsIs: e.Chars#1/2 AsIs: >/1 } '\"'/6 Tile{ ]] }
  refalrts::alloc_char(vm, context[5], '\"');
  refalrts::alloc_char(vm, context[6], '\"');
  refalrts::update_name(context[4], functions[efunc_DoCompound]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[6] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Compound("Compound", COOKIE1_, COOKIE2_, func_Compound);


static refalrts::FnResult func_DoCompound(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & DoCompound/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & DoCompound/4 s.Char#1/7 e.Chars#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_left( context[7], context[5], context[6] ) )
      continue;
    // closed e.Chars#1 as range 5
    //DEBUG: s.Char#1: 7
    //DEBUG: e.Chars#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & CharRep/4 AsIs: s.Char#1/7 } >/8 </9 & DoCompound/10 Tile{ AsIs: e.Chars#1/5 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[8]);
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::alloc_name(vm, context[10], functions[efunc_DoCompound]);
    refalrts::update_name(context[4], functions[efunc_CharRep]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[8], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoCompound/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DoCompound/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoCompound("DoCompound", COOKIE1_, COOKIE2_, func_DoCompound);


static refalrts::FnResult func_IsIdent(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & IsIdent/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & IsIdent/4 s.Initial#1/7 e.Tail#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_left( context[7], context[5], context[6] ) )
      continue;
    // closed e.Tail#1 as range 5
    //DEBUG: s.Initial#1: 7
    //DEBUG: e.Tail#1: 5
    //5: e.Tail#1
    //7: s.Initial#1
    //13: s.Initial#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[8]);
    refalrts::alloc_name(vm, context[10], functions[efunc_gen_IsIdent_S1C1]);
    refalrts::alloc_open_call(vm, context[11]);
    refalrts::alloc_name(vm, context[12], functions[efunc_Type]);
    refalrts::copy_stvar(vm, context[13], context[7]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::alloc_close_call(vm, context[9]);
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[8] );
    res = refalrts::splice_elem( res, context[9] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[11] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_stvar( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </8 & IsIdent$1?1/12 'L'/13 s.SubType#2/15 s.Initial#1/14 >/9
      context[10] = 0;
      context[11] = 0;
      context[12] = refalrts::call_left( context[10], context[11], context[8], context[9] );
      context[13] = refalrts::char_left( 'L', context[10], context[11] );
      if( ! context[13] )
        continue;
      if( ! refalrts::repeated_stvar_right( vm, context[14], context[7], context[10], context[11] ) )
        continue;
      if( ! refalrts::svar_left( context[15], context[10], context[11] ) )
        continue;
      if( ! refalrts::empty_seq( context[10], context[11] ) )
        continue;
      //DEBUG: s.Initial#1: 7
      //DEBUG: e.Tail#1: 5
      //DEBUG: s.SubType#2: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Initial#1/7 {REMOVED TILE} {REMOVED TILE} & IsIdent$1?1/12 'L'/13 s.SubType#2/15 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoIsIdent/4 } Tile{ HalfReuse: (/8 } Tile{ AsIs: s.Initial#1/14 HalfReuse: )/9 } Tile{ AsIs: e.Tail#1/5 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_DoIsIdent]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[9]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[9] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[14], context[9] );
      res = refalrts::splice_evar( res, context[8], context[8] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[8], context[9]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & IsIdent/4 e.Other#1/2 >/1
  // closed e.Other#1 as range 2
  //DEBUG: e.Other#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & IsIdent/4 e.Other#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_False]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_IsIdent("IsIdent", COOKIE1_, COOKIE2_, func_IsIdent);


static refalrts::FnResult func_DoIsIdent(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & DoIsIdent/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoIsIdent/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & DoIsIdent/4 (/7 e.new#5/9 )/8 s.new#3/13 e.new#4/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.new#5 as range 9
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    // closed e.new#4 as range 11
    do {
      // </0 & DoIsIdent/4 (/7 e.Valid#1/14 )/8 '-'/13 e.Tail#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '-', context[13] ) )
        continue;
      // closed e.Valid#1 as range 14
      // closed e.Tail#1 as range 16
      //DEBUG: e.Valid#1: 14
      //DEBUG: e.Tail#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoIsIdent/4 AsIs: (/7 AsIs: e.Valid#1/14 HalfReuse: '-'/8 HalfReuse: )/13 AsIs: e.Tail#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '-');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoIsIdent/4 (/7 e.Valid#1/14 )/8 '_'/13 e.Tail#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '_', context[13] ) )
        continue;
      // closed e.Valid#1 as range 14
      // closed e.Tail#1 as range 16
      //DEBUG: e.Valid#1: 14
      //DEBUG: e.Tail#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoIsIdent/4 AsIs: (/7 AsIs: e.Valid#1/14 HalfReuse: '_'/8 HalfReuse: )/13 AsIs: e.Tail#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '_');
      refalrts::reinit_close_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoIsIdent/4 (/7 e.Valid#1/14 )/8 s.Next#1/13 e.Tail#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      // closed e.Valid#1 as range 14
      // closed e.Tail#1 as range 16
      //DEBUG: s.Next#1: 13
      //DEBUG: e.Valid#1: 14
      //DEBUG: e.Tail#1: 16
      //13: s.Next#1
      //14: e.Valid#1
      //16: e.Tail#1
      //23: s.Next#1

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[18]);
      refalrts::alloc_name(vm, context[20], functions[efunc_gen_DoIsIdent_S3C1]);
      refalrts::alloc_open_call(vm, context[21]);
      refalrts::alloc_name(vm, context[22], functions[efunc_Type]);
      refalrts::copy_stvar(vm, context[23], context[13]);
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
        // </18 & DoIsIdent$3?1/22 'L'/23 s.Subtype#2/25 s.Next#1/24 >/19
        context[20] = 0;
        context[21] = 0;
        context[22] = refalrts::call_left( context[20], context[21], context[18], context[19] );
        context[23] = refalrts::char_left( 'L', context[20], context[21] );
        if( ! context[23] )
          continue;
        if( ! refalrts::repeated_stvar_right( vm, context[24], context[13], context[20], context[21] ) )
          continue;
        if( ! refalrts::svar_left( context[25], context[20], context[21] ) )
          continue;
        if( ! refalrts::empty_seq( context[20], context[21] ) )
          continue;
        //DEBUG: s.Next#1: 13
        //DEBUG: e.Valid#1: 14
        //DEBUG: e.Tail#1: 16
        //DEBUG: s.Subtype#2: 25

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.Next#1/13 {REMOVED TILE} </18 & DoIsIdent$3?1/22 {REMOVED TILE} s.Subtype#2/25 s.Next#1/24 >/19 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoIsIdent/4 AsIs: (/7 AsIs: e.Valid#1/14 HalfReuse: s.Next1 #24/8 } Tile{ HalfReuse: )/23 } Tile{ AsIs: e.Tail#1/16 } Tile{ AsIs: >/1 ]] }
        refalrts::reinit_svar( context[8], context[24] );
        refalrts::reinit_close_bracket(context[23]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[23] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[23], context[23] );
        refalrts::splice_to_freelist_open( vm, context[8], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[18], context[19]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoIsIdent/4 (/7 e.Valid#1/14 )/8 s.Next#1/13 e.Tail#1/16 >/1
    context[14] = context[9];
    context[15] = context[10];
    context[16] = context[11];
    context[17] = context[12];
    // closed e.Valid#1 as range 14
    // closed e.Tail#1 as range 16
    //DEBUG: s.Next#1: 13
    //DEBUG: e.Valid#1: 14
    //DEBUG: e.Tail#1: 16
    //13: s.Next#1
    //14: e.Valid#1
    //16: e.Tail#1
    //23: s.Next#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[18]);
    refalrts::alloc_name(vm, context[20], functions[efunc_gen_DoIsIdent_S4C1]);
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_Type]);
    refalrts::copy_stvar(vm, context[23], context[13]);
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
      // </18 & DoIsIdent$4?1/22 'D'/23 '0'/24 s.Next#1/25 >/19
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::call_left( context[20], context[21], context[18], context[19] );
      context[23] = refalrts::char_left( 'D', context[20], context[21] );
      if( ! context[23] )
        continue;
      context[24] = refalrts::char_left( '0', context[20], context[21] );
      if( ! context[24] )
        continue;
      if( ! refalrts::repeated_stvar_left( vm, context[25], context[13], context[20], context[21] ) )
        continue;
      if( ! refalrts::empty_seq( context[20], context[21] ) )
        continue;
      //DEBUG: s.Next#1: 13
      //DEBUG: e.Valid#1: 14
      //DEBUG: e.Tail#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Next#1/13 {REMOVED TILE} </18 & DoIsIdent$4?1/22 'D'/23 {REMOVED TILE} s.Next#1/25 >/19 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoIsIdent/4 AsIs: (/7 AsIs: e.Valid#1/14 HalfReuse: s.Next1 #25/8 } Tile{ HalfReuse: )/24 } Tile{ AsIs: e.Tail#1/16 } Tile{ AsIs: >/1 ]] }
      refalrts::reinit_svar( context[8], context[25] );
      refalrts::reinit_close_bracket(context[24]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[24] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[24], context[24] );
      refalrts::splice_to_freelist_open( vm, context[8], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[18], context[19]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoIsIdent/4 (/7 e.Valid#1/9 )/8 >/1
    context[9] = context[5];
    context[10] = context[6];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Valid#1 as range 9
    //DEBUG: e.Valid#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} & DoIsIdent/4 (/7 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: # True/0 } Tile{ AsIs: e.Valid#1/9 } Tile{ ]] }
    refalrts::reinit_ident(context[0], identifiers[ident_True]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( vm, context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoIsIdent/4 (/7 e.Valid#1/5 )/8 s.Other#1/9 e.Tail#1/2 >/1
  // closed e.Valid#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#1 as range 2
  //DEBUG: e.Valid#1: 5
  //DEBUG: s.Other#1: 9
  //DEBUG: e.Tail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DoIsIdent/4 (/7 e.Valid#1/5 )/8 s.Other#1/9 e.Tail#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_False]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoIsIdent("DoIsIdent", COOKIE1_, COOKIE2_, func_DoIsIdent);


static refalrts::FnResult func_CharRep(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & CharRep/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CharRep/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & CharRep/4 '\''/5 >/1
    if( ! refalrts::char_term( '\'', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CharRep/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ Reuse: '\\'/5 HalfReuse: '\''/1 ]] }
    refalrts::update_char(context[5], '\\');
    refalrts::reinit_char(context[1], '\'');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CharRep/4 '\"'/5 >/1
    if( ! refalrts::char_term( '\"', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CharRep/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ Reuse: '\\'/5 HalfReuse: '\"'/1 ]] }
    refalrts::update_char(context[5], '\\');
    refalrts::reinit_char(context[1], '\"');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CharRep/4 '\\'/5 >/1
    if( ! refalrts::char_term( '\\', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CharRep/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: '\\'/5 HalfReuse: '\\'/1 ]] }
    refalrts::reinit_char(context[1], '\\');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CharRep/4 '\n'/5 >/1
    if( ! refalrts::char_term( '\n', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CharRep/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ Reuse: '\\'/5 HalfReuse: 'n'/1 ]] }
    refalrts::update_char(context[5], '\\');
    refalrts::reinit_char(context[1], 'n');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CharRep/4 '\r'/5 >/1
    if( ! refalrts::char_term( '\r', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CharRep/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ Reuse: '\\'/5 HalfReuse: 'r'/1 ]] }
    refalrts::update_char(context[5], '\\');
    refalrts::reinit_char(context[1], 'r');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CharRep/4 '\t'/5 >/1
    if( ! refalrts::char_term( '\t', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CharRep/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ Reuse: '\\'/5 HalfReuse: 't'/1 ]] }
    refalrts::update_char(context[5], '\\');
    refalrts::reinit_char(context[1], 't');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CharRep/4 s.Char#1/5 >/1
    //DEBUG: s.Char#1: 5
    //5: s.Char#1
    //11: s.Char#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[6]);
    refalrts::alloc_name(vm, context[8], functions[efunc_gen_CharRep_S7C1]);
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::alloc_name(vm, context[10], functions[efunc_Ord]);
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
      // </6 & CharRep$7?1/10 s.Ord#2/11 >/7
      context[8] = 0;
      context[9] = 0;
      context[10] = refalrts::call_left( context[8], context[9], context[6], context[7] );
      if( ! refalrts::svar_left( context[11], context[8], context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[8], context[9] ) )
        continue;
      //DEBUG: s.Char#1: 5
      //DEBUG: s.Ord#2: 11
      //5: s.Char#1
      //11: s.Ord#2
      //17: s.Ord#2

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[12]);
      refalrts::alloc_name(vm, context[14], functions[efunc_gen_CharRep_S7C2]);
      refalrts::alloc_open_call(vm, context[15]);
      refalrts::alloc_name(vm, context[16], functions[efunc_Compare]);
      refalrts::copy_stvar(vm, context[17], context[11]);
      refalrts::alloc_number(vm, context[18], 32UL);
      refalrts::alloc_close_call(vm, context[19]);
      refalrts::alloc_close_call(vm, context[13]);
      refalrts::push_stack( vm, context[13] );
      refalrts::push_stack( vm, context[12] );
      res = refalrts::splice_elem( res, context[13] );
      refalrts::push_stack( vm, context[19] );
      refalrts::push_stack( vm, context[15] );
      res = refalrts::splice_elem( res, context[19] );
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
        // </12 & CharRep$7?2/16 '-'/17 >/13
        context[14] = 0;
        context[15] = 0;
        context[16] = refalrts::call_left( context[14], context[15], context[12], context[13] );
        context[17] = refalrts::char_left( '-', context[14], context[15] );
        if( ! context[17] )
          continue;
        if( ! refalrts::empty_seq( context[14], context[15] ) )
          continue;
        //DEBUG: s.Char#1: 5
        //DEBUG: s.Ord#2: 11

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.Char#1/5 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: '\\'/0 HalfReuse: 'x'/4 } </18 & HexDigit/19 Tile{ AsIs: </6 Reuse: & Div/10 AsIs: s.Ord#2/11 HalfReuse: 16/7 HalfReuse: >/12 HalfReuse: >/16 HalfReuse: </17 HalfReuse: & HexDigit/13 HalfReuse: </1 } & Mod/20 s.Ord#2/11/21 16/22 >/23 >/24 Tile{ ]] }
        refalrts::alloc_open_call(vm, context[18]);
        refalrts::alloc_name(vm, context[19], functions[efunc_HexDigit]);
        refalrts::alloc_name(vm, context[20], functions[efunc_Mod]);
        refalrts::copy_stvar(vm, context[21], context[11]);
        refalrts::alloc_number(vm, context[22], 16UL);
        refalrts::alloc_close_call(vm, context[23]);
        refalrts::alloc_close_call(vm, context[24]);
        refalrts::reinit_char(context[0], '\\');
        refalrts::reinit_char(context[4], 'x');
        refalrts::update_name(context[10], functions[efunc_Div]);
        refalrts::reinit_number(context[7], 16UL);
        refalrts::reinit_close_call(context[12]);
        refalrts::reinit_close_call(context[16]);
        refalrts::reinit_open_call(context[17]);
        refalrts::reinit_name(context[13], functions[efunc_HexDigit]);
        refalrts::reinit_open_call(context[1]);
        refalrts::push_stack( vm, context[24] );
        refalrts::push_stack( vm, context[17] );
        refalrts::push_stack( vm, context[23] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[16] );
        refalrts::push_stack( vm, context[18] );
        refalrts::push_stack( vm, context[12] );
        refalrts::push_stack( vm, context[6] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[20], context[24] );
        res = refalrts::splice_evar( res, context[6], context[1] );
        res = refalrts::splice_evar( res, context[18], context[19] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[12], context[13]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[6], context[7]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CharRep/4 s.Char#1/5 >/1
  //DEBUG: s.Char#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CharRep/4 s.Char#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Char1 #5/1 ]] }
  refalrts::reinit_svar( context[1], context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CharRep("CharRep", COOKIE1_, COOKIE2_, func_CharRep);


static refalrts::FnResult func_HexDigit(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & HexDigit/4 s.Number#1/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Number#1: 5
  //5: s.Number#1
  //11: s.Number#1

  refalrts::reset_allocator(vm);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_HexDigit_C1]);
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_First]);
  refalrts::copy_stvar(vm, context[11], context[5]);
  refalrts::alloc_chars(vm, context[12], context[13], "0123456789abcdef", 16);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[6] );
  res = refalrts::splice_elem( res, context[7] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[9] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_evar( res, context[12], context[13] );
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
    // </6 & HexDigit?1/10 (/13 e.1#2/11 )/14 s.Digit#2/15 e.2#2/8 >/7
    context[8] = 0;
    context[9] = 0;
    context[10] = refalrts::call_left( context[8], context[9], context[6], context[7] );
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[8], context[9] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    // closed e.1#2 as range 11
    if( ! refalrts::svar_left( context[15], context[8], context[9] ) )
      continue;
    // closed e.2#2 as range 8
    //DEBUG: s.Number#1: 5
    //DEBUG: e.1#2: 11
    //DEBUG: s.Digit#2: 15
    //DEBUG: e.2#2: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & HexDigit/4 s.Number#1/5 </6 & HexDigit?1/10 (/13 e.1#2/11 )/14 s.Digit#2/15 e.2#2/8 >/7 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Digit2 #15/1 ]] }
    refalrts::reinit_svar( context[1], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  refalrts::splice_to_freelist(vm, context[6], context[7]);
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_HexDigit("HexDigit", COOKIE1_, COOKIE2_, func_HexDigit);


static refalrts::FnResult func_TkVariable(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & TkVariable/4 s.Type#1/5 e.Index#1/2 s.Depth#1/6 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Index#1 as range 2
  //DEBUG: s.Type#1: 5
  //DEBUG: s.Depth#1: 6
  //DEBUG: e.Index#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Type#1/5 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: s.Type1 #5/0 HalfReuse: '.'/4 } Tile{ AsIs: e.Index#1/2 } '#'/7 </8 & Symb/9 Tile{ AsIs: s.Depth#1/6 AsIs: >/1 ]] }
  refalrts::alloc_char(vm, context[7], '#');
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Symb]);
  refalrts::reinit_svar( context[0], context[5] );
  refalrts::reinit_char(context[4], '.');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[6];
  res = refalrts::splice_evar( res, context[7], context[9] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_TkVariable("TkVariable", COOKIE1_, COOKIE2_, func_TkVariable);


static refalrts::FnResult func_Brackets(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & Brackets/4 e.Expr#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Expr#1 as range 2
  //DEBUG: e.Expr#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } '('/5 Tile{ AsIs: </0 Reuse: & InlineSubexpr/4 AsIs: e.Expr#1/2 AsIs: >/1 } ')'/6 Tile{ ]] }
  refalrts::alloc_char(vm, context[5], '(');
  refalrts::alloc_char(vm, context[6], ')');
  refalrts::update_name(context[4], functions[efunc_InlineSubexpr]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[6] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Brackets("Brackets", COOKIE1_, COOKIE2_, func_Brackets);


static refalrts::FnResult func_ADTm_Brackets(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & ADT-Brackets/4 (/7 e.Name#1/5 )/8 e.Expr#1/2 >/1
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
  // closed e.Name#1 as range 5
  // closed e.Expr#1 as range 2
  //DEBUG: e.Name#1: 5
  //DEBUG: e.Expr#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: '['/0 HalfReuse: </4 HalfReuse: & DisplayName/7 AsIs: e.Name#1/5 HalfReuse: >/8 } ' '/9 </10 & InlineSubexpr/11 Tile{ AsIs: e.Expr#1/2 } >/12 Tile{ HalfReuse: ']'/1 ]] }
  refalrts::alloc_char(vm, context[9], ' ');
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_InlineSubexpr]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::reinit_char(context[0], '[');
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_DisplayName]);
  refalrts::reinit_close_call(context[8]);
  refalrts::reinit_char(context[1], ']');
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ADTm_Brackets("ADT-Brackets", COOKIE1_, COOKIE2_, func_ADTm_Brackets);


static refalrts::FnResult func_CallBrackets(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & CallBrackets/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & CallBrackets/4 (/9 s.new#1/11 e.new#2/7 )/10 e.new#3/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    // closed e.new#3 as range 5
    if( ! refalrts::svar_left( context[11], context[7], context[8] ) )
      continue;
    // closed e.new#2 as range 7
    do {
      // </0 & CallBrackets/4 (/9 # Symbol/11 # Name/16 e.new#5/12 )/10 e.new#4/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::ident_term( identifiers[ident_Symbol], context[11] ) )
        continue;
      context[16] = refalrts::ident_left( identifiers[ident_Name], context[12], context[13] );
      if( ! context[16] )
        continue;
      // closed e.new#5 as range 12
      // closed e.new#4 as range 14
      do {
        // </0 & CallBrackets/4 (/9 # Symbol/11 # Name/16 e.Function#1/17 )/10 >/1
        context[17] = context[12];
        context[18] = context[13];
        if( ! refalrts::empty_seq( context[14], context[15] ) )
          continue;
        // closed e.Function#1 as range 17
        //DEBUG: e.Function#1: 17

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & CallBrackets/4 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: '<'/9 HalfReuse: </11 HalfReuse: & DisplayName/16 AsIs: e.Function#1/17 HalfReuse: >/10 HalfReuse: '>'/1 ]] }
        refalrts::reinit_char(context[9], '<');
        refalrts::reinit_open_call(context[11]);
        refalrts::reinit_name(context[16], functions[efunc_DisplayName]);
        refalrts::reinit_close_call(context[10]);
        refalrts::reinit_char(context[1], '>');
        refalrts::push_stack( vm, context[10] );
        refalrts::push_stack( vm, context[11] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[9];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & CallBrackets/4 (/9 # Symbol/11 # Name/16 e.Function#1/17 )/10 e.Expr#1/19 >/1
      context[17] = context[12];
      context[18] = context[13];
      context[19] = context[14];
      context[20] = context[15];
      // closed e.Function#1 as range 17
      // closed e.Expr#1 as range 19
      //DEBUG: e.Function#1: 17
      //DEBUG: e.Expr#1: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: '<'/9 HalfReuse: </11 HalfReuse: & DisplayName/16 AsIs: e.Function#1/17 HalfReuse: >/10 } ' '/21 Tile{ AsIs: </0 Reuse: & InlineSubexpr/4 } Tile{ AsIs: e.Expr#1/19 } >/22 Tile{ HalfReuse: '>'/1 ]] }
      refalrts::alloc_char(vm, context[21], ' ');
      refalrts::alloc_close_call(vm, context[22]);
      refalrts::reinit_char(context[9], '<');
      refalrts::reinit_open_call(context[11]);
      refalrts::reinit_name(context[16], functions[efunc_DisplayName]);
      refalrts::reinit_close_call(context[10]);
      refalrts::update_name(context[4], functions[efunc_InlineSubexpr]);
      refalrts::reinit_char(context[1], '>');
      refalrts::push_stack( vm, context[22] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[10] );
      refalrts::push_stack( vm, context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[22], context[22] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[21], context[21] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & CallBrackets/4 (/9 # TkVariable/11 e.Indirect#1/12 )/10 e.Expr#1/14 >/1
    context[12] = context[7];
    context[13] = context[8];
    context[14] = context[5];
    context[15] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[11] ) )
      continue;
    // closed e.Indirect#1 as range 12
    // closed e.Expr#1 as range 14
    //DEBUG: e.Indirect#1: 12
    //DEBUG: e.Expr#1: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '<'/4 HalfReuse: </9 HalfReuse: & TkVariable/11 AsIs: e.Indirect#1/12 HalfReuse: >/10 } ' '/16 Tile{ AsIs: </0 } & InlineSubexpr/17 Tile{ AsIs: e.Expr#1/14 } >/18 Tile{ HalfReuse: '>'/1 ]] }
    refalrts::alloc_char(vm, context[16], ' ');
    refalrts::alloc_name(vm, context[17], functions[efunc_InlineSubexpr]);
    refalrts::alloc_close_call(vm, context[18]);
    refalrts::reinit_char(context[4], '<');
    refalrts::reinit_open_call(context[9]);
    refalrts::reinit_name(context[11], functions[efunc_TkVariable]);
    refalrts::reinit_close_call(context[10]);
    refalrts::reinit_char(context[1], '>');
    refalrts::push_stack( vm, context[18] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[4], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CallBrackets/4 e.Expr#1/2 >/1
  // closed e.Expr#1 as range 2
  //DEBUG: e.Expr#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ }"< "/5 Tile{ AsIs: </0 Reuse: & InlineSubexpr/4 AsIs: e.Expr#1/2 AsIs: >/1 } '>'/7 Tile{ ]] }
  refalrts::alloc_chars(vm, context[5], context[6], "< ", 2);
  refalrts::alloc_char(vm, context[7], '>');
  refalrts::update_name(context[4], functions[efunc_InlineSubexpr]);
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

static refalrts::NativeReference nat_ref_CallBrackets("CallBrackets", COOKIE1_, COOKIE2_, func_CallBrackets);


static refalrts::FnResult func_ColdCallBrackets(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & ColdCallBrackets/4 e.Expr#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Expr#1 as range 2
  //DEBUG: e.Expr#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ }"<* "/5 Tile{ AsIs: </0 Reuse: & InlineSubexpr/4 AsIs: e.Expr#1/2 AsIs: >/1 }"*>"/7 Tile{ ]] }
  refalrts::alloc_chars(vm, context[5], context[6], "<* ", 3);
  refalrts::alloc_chars(vm, context[7], context[8], "*>", 2);
  refalrts::update_name(context[4], functions[efunc_InlineSubexpr]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ColdCallBrackets("ColdCallBrackets", COOKIE1_, COOKIE2_, func_ColdCallBrackets);


static refalrts::FnResult func_ClosureBrackets(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & ClosureBrackets/4 e.Expr#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Expr#1 as range 2
  //DEBUG: e.Expr#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ }"{{"/5 Tile{ AsIs: </0 Reuse: & InlineSubexpr/4 AsIs: e.Expr#1/2 AsIs: >/1 }"}}"/7 Tile{ ]] }
  refalrts::alloc_chars(vm, context[5], context[6], "{{", 2);
  refalrts::alloc_chars(vm, context[7], context[8], "}}", 2);
  refalrts::update_name(context[4], functions[efunc_InlineSubexpr]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ClosureBrackets("ClosureBrackets", COOKIE1_, COOKIE2_, func_ClosureBrackets);


static refalrts::FnResult func_InlineSubexpr(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & InlineSubexpr/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & InlineSubexpr/4 t.Term#1/7 e.Expr#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.Expr#1 as range 5
    //DEBUG: t.Term#1: 7
    //DEBUG: e.Expr#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoInlineExpr/4 } (/9 </10 & InlineTerm/11 Tile{ AsIs: t.Term#1/7 } >/12 )/13 Tile{ AsIs: e.Expr#1/5 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[9]);
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_InlineTerm]);
    refalrts::alloc_close_call(vm, context[12]);
    refalrts::alloc_close_bracket(vm, context[13]);
    refalrts::update_name(context[4], functions[efunc_DoInlineExpr]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[9], context[13] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[9], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & InlineSubexpr/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & InlineSubexpr/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_InlineSubexpr("InlineSubexpr", COOKIE1_, COOKIE2_, func_InlineSubexpr);


static refalrts::FnResult func_DoInlineExpr(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & DoInlineExpr/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoInlineExpr/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & DoInlineExpr/4 (/7 e.Text#1/9 )/8 t.NextTerm#1/13 e.Expr#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.Text#1 as range 9
    context[14] = refalrts::tvar_left( context[13], context[11], context[12] );
    if( ! context[14] )
      continue;
    // closed e.Expr#1 as range 11
    //DEBUG: e.Text#1: 9
    //DEBUG: t.NextTerm#1: 13
    //DEBUG: e.Expr#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoInlineExpr/4 AsIs: (/7 } </15 & AppendTerm/16 Tile{ AsIs: e.Text#1/9 } (/17 </18 Tile{ HalfReuse: & InlineTerm/8 AsIs: t.NextTerm#1/13 } >/19 )/20 >/21 )/22 Tile{ AsIs: e.Expr#1/11 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_name(vm, context[16], functions[efunc_AppendTerm]);
    refalrts::alloc_open_bracket(vm, context[17]);
    refalrts::alloc_open_call(vm, context[18]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::alloc_close_bracket(vm, context[20]);
    refalrts::alloc_close_call(vm, context[21]);
    refalrts::alloc_close_bracket(vm, context[22]);
    refalrts::reinit_name(context[8], functions[efunc_InlineTerm]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[22] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[15] );
    refalrts::link_brackets( context[17], context[20] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[19], context[22] );
    res = refalrts::splice_evar( res, context[8], context[14] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoInlineExpr/4 (/7 e.Text#1/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Text#1 as range 5
  //DEBUG: e.Text#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DoInlineExpr/4 (/7 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Text#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoInlineExpr("DoInlineExpr", COOKIE1_, COOKIE2_, func_DoInlineExpr);


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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Element/4 AsIs: t.Next#1/7 } >/9 </10 & Map@1/11 Tile{ AsIs: e.Tail#1/5 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[9]);
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_gen_Map_Z1]);
    refalrts::update_name(context[4], functions[efunc_Element]);
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
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & Element/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_Element]);
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
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
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
      // </0 & Map@2/4 (/7 t.#0/13 t.0#0/15 )/8 e.Tail#1/9 >/1
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
      context[16] = refalrts::tvar_left( context[15], context[11], context[12] );
      if( ! context[16] )
        continue;
      if( ! refalrts::empty_seq( context[11], context[12] ) )
        continue;
      //DEBUG: e.Tail#1: 9
      //DEBUG: t.#0: 13
      //DEBUG: t.0#0: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/17 ' '/18 Tile{ HalfReuse: ' '/0 HalfReuse: </4 HalfReuse: & InlineTerm/7 AsIs: t.#0/13 } >/19" :: "/20 </22 & InlineTerm/23 Tile{ AsIs: t.0#0/15 } >/24 )/25 </26 Tile{ HalfReuse: & Map@2/8 AsIs: e.Tail#1/9 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[17]);
      refalrts::alloc_char(vm, context[18], ' ');
      refalrts::alloc_close_call(vm, context[19]);
      refalrts::alloc_chars(vm, context[20], context[21], " :: ", 4);
      refalrts::alloc_open_call(vm, context[22]);
      refalrts::alloc_name(vm, context[23], functions[efunc_InlineTerm]);
      refalrts::alloc_close_call(vm, context[24]);
      refalrts::alloc_close_bracket(vm, context[25]);
      refalrts::alloc_open_call(vm, context[26]);
      refalrts::reinit_char(context[0], ' ');
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[7], functions[efunc_InlineTerm]);
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z2]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[26] );
      refalrts::link_brackets( context[17], context[25] );
      refalrts::push_stack( vm, context[24] );
      refalrts::push_stack( vm, context[22] );
      refalrts::push_stack( vm, context[19] );
      refalrts::push_stack( vm, context[4] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[24], context[26] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[19], context[23] );
      res = refalrts::splice_evar( res, context[0], context[14] );
      res = refalrts::splice_evar( res, context[17], context[18] );
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Function-Aux$3\1*1/4 AsIs: t.Next#1/7 } >/11 </12 & Map@2/13 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z2]);
    refalrts::update_name(context[4], functions[efunc_gen_Functionm_Aux_S3L1D1]);
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
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & Function-Aux$3\1/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_Functionm_Aux_S3L1]);
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


static refalrts::FnResult func_gen_DoExpression_S3B1S1B1Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 58 elems
  refalrts::Iter context[58];
  refalrts::zeros( context, 58 );
  // </0 & DoExpression$3:1$1:1@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoExpression$3:1$1:1@1/4 (/7 e.new#1/5 )/8 s.new#2/9 (/12 e.new#3/10 )/13 (/16 e.new#4/14 )/17 t.new#5/18 (/22 e.new#6/20 )/23 e.new#7/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
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
  // closed e.new#3 as range 10
  // closed e.new#4 as range 14
  context[19] = refalrts::tvar_left( context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  context[20] = 0;
  context[21] = 0;
  context[22] = refalrts::brackets_left( context[20], context[21], context[2], context[3] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[22], context[23]);
  // closed e.new#6 as range 20
  // closed e.new#7 as range 2
  do {
    // </0 & DoExpression$3:1$1:1@1/4 (/7 e.new#11/24 )/8 s.new#8/9 (/12 e.new#12/26 )/13 (/16 e.new#13/28 )/17 t.new#9/18 (/22 e.new#14/30 )/23 s.new#10/34 >/1
    context[24] = context[5];
    context[25] = context[6];
    context[26] = context[10];
    context[27] = context[11];
    context[28] = context[14];
    context[29] = context[15];
    context[30] = context[20];
    context[31] = context[21];
    context[32] = context[2];
    context[33] = context[3];
    // closed e.new#11 as range 24
    // closed e.new#12 as range 26
    // closed e.new#13 as range 28
    // closed e.new#14 as range 30
    if( ! refalrts::svar_left( context[34], context[32], context[33] ) )
      continue;
    if( ! refalrts::empty_seq( context[32], context[33] ) )
      continue;
    do {
      // </0 & DoExpression$3:1$1:1@1/4 (/7 e.new#17/35 )/8 s.new#15/9 (/12 e.new#18/37 )/13 (/16 e.new#19/39 )/17 t.new#16/18 (/22 e.new#20/41 )/23 # True/34 >/1
      context[35] = context[24];
      context[36] = context[25];
      context[37] = context[26];
      context[38] = context[27];
      context[39] = context[28];
      context[40] = context[29];
      context[41] = context[30];
      context[42] = context[31];
      if( ! refalrts::ident_term( identifiers[ident_True], context[34] ) )
        continue;
      // closed e.new#17 as range 35
      // closed e.new#18 as range 37
      // closed e.new#19 as range 39
      // closed e.new#20 as range 41
      do {
        // </0 & DoExpression$3:1$1:1@1/4 (/7 e.Expr0#1/43 )/8 s.Pos0#1/9 (/12 e.OutLine0#1/45 )/13 (/16 e.Indent0#1/47 )/17 t.NextTerm0#1/18 (/22 e.TextualTerm#2/49 )/23 # True/34 >/1
        context[43] = context[35];
        context[44] = context[36];
        context[45] = context[37];
        context[46] = context[38];
        context[47] = context[39];
        context[48] = context[40];
        context[49] = context[41];
        context[50] = context[42];
        // closed e.Expr0#1 as range 43
        // closed e.OutLine0#1 as range 45
        // closed e.Indent0#1 as range 47
        // closed e.TextualTerm#2 as range 49
        //DEBUG: t.NextTerm0#1: 18
        //DEBUG: s.Pos0#1: 9
        //DEBUG: e.Expr0#1: 43
        //DEBUG: e.OutLine0#1: 45
        //DEBUG: e.Indent0#1: 47
        //DEBUG: e.TextualTerm#2: 49
        //9: s.Pos0#1
        //18: t.NextTerm0#1
        //43: e.Expr0#1
        //45: e.OutLine0#1
        //47: e.Indent0#1
        //49: e.TextualTerm#2
        //54: e.Expr0#1

        refalrts::reset_allocator(vm);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::alloc_open_call(vm, context[51]);
        refalrts::alloc_name(vm, context[53], functions[efunc_gen_DoExpression_S3B1S1B1Z1S1C1]);
        refalrts::copy_evar(vm, context[54], context[55], context[43], context[44]);
        refalrts::alloc_close_call(vm, context[52]);
        refalrts::push_stack( vm, context[52] );
        refalrts::push_stack( vm, context[51] );
        res = refalrts::splice_elem( res, context[52] );
        res = refalrts::splice_evar( res, context[54], context[55] );
        res = refalrts::splice_elem( res, context[53] );
        res = refalrts::splice_elem( res, context[51] );
        refalrts::use( res );
        refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
        if (rec_res != refalrts::cSuccess)
          return rec_res;
        refalrts::this_is_generated_function(vm);
        do {
          // </51 & DoExpression$3:1$1:1@1$1?1/55 ';'/56 >/52
          context[53] = 0;
          context[54] = 0;
          context[55] = refalrts::call_left( context[53], context[54], context[51], context[52] );
          context[56] = refalrts::char_left( ';', context[53], context[54] );
          if( ! context[56] )
            continue;
          if( ! refalrts::empty_seq( context[53], context[54] ) )
            continue;
          //DEBUG: t.NextTerm0#1: 18
          //DEBUG: s.Pos0#1: 9
          //DEBUG: e.Expr0#1: 43
          //DEBUG: e.OutLine0#1: 45
          //DEBUG: e.Indent0#1: 47
          //DEBUG: e.TextualTerm#2: 49

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} & DoExpression$3:1$1:1@1/4 (/7 e.Expr0#1/43 {REMOVED TILE} (/16 {REMOVED TILE} )/17 {REMOVED TILE} (/22 e.TextualTerm#2/49 )/23 # True/34 </51 {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & MultilineTerm/8 AsIs: s.Pos0#1/9 AsIs: (/12 AsIs: e.OutLine0#1/45 AsIs: )/13 } Tile{ AsIs: e.Indent0#1/47 } Tile{ AsIs: t.NextTerm0#1/18 } Tile{ HalfReuse: (/55 AsIs: ';'/56 HalfReuse: )/52 AsIs: >/1 ]] }
          refalrts::reinit_name(context[8], functions[efunc_MultilineTerm]);
          refalrts::reinit_open_bracket(context[55]);
          refalrts::reinit_close_bracket(context[52]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[55], context[52] );
          refalrts::link_brackets( context[12], context[13] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[55];
          res = refalrts::splice_evar( res, context[18], context[19] );
          res = refalrts::splice_evar( res, context[47], context[48] );
          res = refalrts::splice_evar( res, context[8], context[13] );
          refalrts::splice_to_freelist_open( vm, context[0], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        refalrts::splice_to_freelist(vm, context[51], context[52]);
        continue;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & DoExpression$3:1$1:1@1/4 (/7 e.Expr0#1/43 )/8 s.Pos0#1/9 (/12 e.OutLine0#1/45 )/13 (/16 e.Indent0#1/47 )/17 t.NextTerm0#1/18 (/22 e.TextualTerm#2/49 )/23 # True/34 >/1
        context[43] = context[35];
        context[44] = context[36];
        context[45] = context[37];
        context[46] = context[38];
        context[47] = context[39];
        context[48] = context[40];
        context[49] = context[41];
        context[50] = context[42];
        // closed e.Expr0#1 as range 43
        // closed e.OutLine0#1 as range 45
        // closed e.Indent0#1 as range 47
        // closed e.TextualTerm#2 as range 49
        //DEBUG: t.NextTerm0#1: 18
        //DEBUG: s.Pos0#1: 9
        //DEBUG: e.Expr0#1: 43
        //DEBUG: e.OutLine0#1: 45
        //DEBUG: e.Indent0#1: 47
        //DEBUG: e.TextualTerm#2: 49
        //9: s.Pos0#1
        //18: t.NextTerm0#1
        //43: e.Expr0#1
        //45: e.OutLine0#1
        //47: e.Indent0#1
        //49: e.TextualTerm#2
        //54: e.Expr0#1

        refalrts::reset_allocator(vm);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::alloc_open_call(vm, context[51]);
        refalrts::alloc_name(vm, context[53], functions[efunc_gen_DoExpression_S3B1S1B1Z1S2C1]);
        refalrts::copy_evar(vm, context[54], context[55], context[43], context[44]);
        refalrts::alloc_close_call(vm, context[52]);
        refalrts::push_stack( vm, context[52] );
        refalrts::push_stack( vm, context[51] );
        res = refalrts::splice_elem( res, context[52] );
        res = refalrts::splice_evar( res, context[54], context[55] );
        res = refalrts::splice_elem( res, context[53] );
        res = refalrts::splice_elem( res, context[51] );
        refalrts::use( res );
        refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
        if (rec_res != refalrts::cSuccess)
          return rec_res;
        refalrts::this_is_generated_function(vm);
        do {
          // </51 & DoExpression$3:1$1:1@1$2?1/55 >/52
          context[53] = 0;
          context[54] = 0;
          context[55] = refalrts::call_left( context[53], context[54], context[51], context[52] );
          if( ! refalrts::empty_seq( context[53], context[54] ) )
            continue;
          //DEBUG: t.NextTerm0#1: 18
          //DEBUG: s.Pos0#1: 9
          //DEBUG: e.Expr0#1: 43
          //DEBUG: e.OutLine0#1: 45
          //DEBUG: e.Indent0#1: 47
          //DEBUG: e.TextualTerm#2: 49

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} & DoExpression$3:1$1:1@1/4 (/7 e.Expr0#1/43 {REMOVED TILE} (/16 {REMOVED TILE} )/17 {REMOVED TILE} (/22 e.TextualTerm#2/49 )/23 # True/34 </51 {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & MultilineTerm/8 AsIs: s.Pos0#1/9 AsIs: (/12 AsIs: e.OutLine0#1/45 AsIs: )/13 } Tile{ AsIs: e.Indent0#1/47 } Tile{ AsIs: t.NextTerm0#1/18 } Tile{ HalfReuse: (/55 HalfReuse: )/52 AsIs: >/1 ]] }
          refalrts::reinit_name(context[8], functions[efunc_MultilineTerm]);
          refalrts::reinit_open_bracket(context[55]);
          refalrts::reinit_close_bracket(context[52]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[55], context[52] );
          refalrts::link_brackets( context[12], context[13] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[55];
          res = refalrts::splice_evar( res, context[18], context[19] );
          res = refalrts::splice_evar( res, context[47], context[48] );
          res = refalrts::splice_evar( res, context[8], context[13] );
          refalrts::splice_to_freelist_open( vm, context[0], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        refalrts::splice_to_freelist(vm, context[51], context[52]);
        continue;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoExpression$3:1$1:1@1/4 (/7 e.Expr0#1/43 )/8 s.Pos0#1/9 (/12 e.OutLine0#1/45 )/13 (/16 e.Indent0#1/47 )/17 t.NextTerm0#1/18 (/22 e.TextualTerm#2/49 )/23 # True/34 >/1
      context[43] = context[35];
      context[44] = context[36];
      context[45] = context[37];
      context[46] = context[38];
      context[47] = context[39];
      context[48] = context[40];
      context[49] = context[41];
      context[50] = context[42];
      // closed e.Expr0#1 as range 43
      // closed e.OutLine0#1 as range 45
      // closed e.Indent0#1 as range 47
      // closed e.TextualTerm#2 as range 49
      //DEBUG: t.NextTerm0#1: 18
      //DEBUG: s.Pos0#1: 9
      //DEBUG: e.Expr0#1: 43
      //DEBUG: e.OutLine0#1: 45
      //DEBUG: e.Indent0#1: 47
      //DEBUG: e.TextualTerm#2: 49

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.TextualTerm#2/49 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & MultilineTerm/8 AsIs: s.Pos0#1/9 AsIs: (/12 AsIs: e.OutLine0#1/45 AsIs: )/13 } e.Indent0#1/47/51 Tile{ AsIs: t.NextTerm0#1/18 AsIs: (/22 } Tile{ AsIs: )/23 HalfReuse: >/34 } </53 Tile{ Reuse: & DoExpression/4 HalfReuse: # NEXT/7 } Tile{ AsIs: (/16 AsIs: e.Indent0#1/47 AsIs: )/17 } (/54 e.Indent0#1/47/55 )/57 Tile{ AsIs: e.Expr0#1/43 } Tile{ AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[51], context[52], context[47], context[48]);
      refalrts::alloc_open_call(vm, context[53]);
      refalrts::alloc_open_bracket(vm, context[54]);
      refalrts::copy_evar(vm, context[55], context[56], context[47], context[48]);
      refalrts::alloc_close_bracket(vm, context[57]);
      refalrts::reinit_name(context[8], functions[efunc_MultilineTerm]);
      refalrts::reinit_close_call(context[34]);
      refalrts::update_name(context[4], functions[efunc_DoExpression]);
      refalrts::reinit_ident(context[7], identifiers[ident_NEXT]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[53] );
      refalrts::link_brackets( context[54], context[57] );
      refalrts::link_brackets( context[16], context[17] );
      refalrts::push_stack( vm, context[34] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[22], context[23] );
      refalrts::link_brackets( context[12], context[13] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[43], context[44] );
      res = refalrts::splice_evar( res, context[54], context[57] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[4], context[7] );
      res = refalrts::splice_evar( res, context[53], context[53] );
      res = refalrts::splice_evar( res, context[23], context[34] );
      res = refalrts::splice_evar( res, context[18], context[22] );
      res = refalrts::splice_evar( res, context[51], context[52] );
      res = refalrts::splice_evar( res, context[8], context[13] );
      refalrts::splice_to_freelist_open( vm, context[0], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoExpression$3:1$1:1@1/4 (/7 e.Expr0#1/35 )/8 s.Pos0#1/9 (/12 e.OutLine0#1/37 )/13 (/16 e.Indent0#1/39 )/17 t.NextTerm0#1/18 (/22 e.TextualTerm#2/41 )/23 # False/34 >/1
    context[35] = context[24];
    context[36] = context[25];
    context[37] = context[26];
    context[38] = context[27];
    context[39] = context[28];
    context[40] = context[29];
    context[41] = context[30];
    context[42] = context[31];
    if( ! refalrts::ident_term( identifiers[ident_False], context[34] ) )
      continue;
    // closed e.Expr0#1 as range 35
    // closed e.OutLine0#1 as range 37
    // closed e.Indent0#1 as range 39
    // closed e.TextualTerm#2 as range 41
    //DEBUG: t.NextTerm0#1: 18
    //DEBUG: s.Pos0#1: 9
    //DEBUG: e.Expr0#1: 35
    //DEBUG: e.OutLine0#1: 37
    //DEBUG: e.Indent0#1: 39
    //DEBUG: e.TextualTerm#2: 41

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 s.Pos0#1/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.NextTerm0#1/18 (/22 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/12 AsIs: e.OutLine0#1/37 AsIs: )/13 HalfReuse: </16 } Tile{ HalfReuse: & DoExpression/0 HalfReuse: # NEXT/4 AsIs: (/7 } Tile{ AsIs: e.Indent0#1/39 } Tile{ AsIs: )/23 HalfReuse: (/34 } e.Indent0#1/39/43 Tile{ AsIs: e.TextualTerm#2/41 } Tile{ AsIs: )/17 } Tile{ AsIs: e.Expr0#1/35 } Tile{ AsIs: >/1 ]] }
    refalrts::copy_evar(vm, context[43], context[44], context[39], context[40]);
    refalrts::reinit_open_call(context[16]);
    refalrts::reinit_name(context[0], functions[efunc_DoExpression]);
    refalrts::reinit_ident(context[4], identifiers[ident_NEXT]);
    refalrts::reinit_open_bracket(context[34]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[16] );
    refalrts::link_brackets( context[34], context[17] );
    refalrts::link_brackets( context[7], context[23] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_evar( res, context[43], context[44] );
    res = refalrts::splice_evar( res, context[23], context[34] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[12], context[16] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoExpression$3:1$1:1@1/4 (/7 e.Expr0#1/5 )/8 s.Pos0#1/9 (/12 e.OutLine0#1/10 )/13 (/16 e.Indent0#1/14 )/17 t.NextTerm0#1/18 (/22 e.TextualTerm#2/20 )/23 e.dyn#0/2 >/1
  // closed e.Expr0#1 as range 5
  // closed e.OutLine0#1 as range 10
  // closed e.Indent0#1 as range 14
  // closed e.TextualTerm#2 as range 20
  // closed e.dyn#0 as range 2
  //DEBUG: t.NextTerm0#1: 18
  //DEBUG: s.Pos0#1: 9
  //DEBUG: e.Expr0#1: 5
  //DEBUG: e.OutLine0#1: 10
  //DEBUG: e.Indent0#1: 14
  //DEBUG: e.TextualTerm#2: 20
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoExpression$3:1$1:1@0/4 AsIs: (/7 AsIs: e.Expr0#1/5 AsIs: )/8 AsIs: s.Pos0#1/9 AsIs: (/12 AsIs: e.OutLine0#1/10 AsIs: )/13 AsIs: (/16 AsIs: e.Indent0#1/14 AsIs: )/17 AsIs: t.NextTerm0#1/18 AsIs: (/22 } e.Indent0#1/14/24 Tile{ AsIs: e.TextualTerm#2/20 } Tile{ AsIs: )/23 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::copy_evar(vm, context[24], context[25], context[14], context[15]);
  refalrts::update_name(context[4], functions[efunc_gen_DoExpression_S3B1S1B1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[22], context[23] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[23];
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[24], context[25] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoExpression_S3B1S1B1Z1("DoExpression$3:1$1:1@1", COOKIE1_, COOKIE2_, func_gen_DoExpression_S3B1S1B1Z1);


//End of file
