// This file automatically generated from 'Log-AST.ref'
// Don't edit! Edit 'Log-AST.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_2621574225_3109966432

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
  efunc_UndoubleEmtpyLines = 14,
  efunc_TrimLines = 15,
  efunc_Map = 16,
  efunc_Element = 17,
  efunc_Trimm_R = 18,
  efunc_Function = 19,
  efunc_DisplayName = 20,
  efunc_InlineExpr = 21,
  efunc_DoLongLine = 22,
  efunc_MAXm_LINE = 23,
  efunc_Sentences = 24,
  efunc_Entry = 25,
  efunc_Sentence = 26,
  efunc_PutComment = 27,
  efunc_gen_Sentence_S2C1 = 28,
  efunc_gen_Sentence_S2C2 = 29,
  efunc_LongLine = 30,
  efunc_Tail = 31,
  efunc_Expression = 32,
  efunc_InlineSubexpr = 33,
  efunc_gen_Tail_S1B1 = 34,
  efunc_gen_Tail_S1A1 = 35,
  efunc_DoExpression = 36,
  efunc_gen_DoExpression_S3B1S1B1S1C1 = 37,
  efunc_MultilineTerm = 38,
  efunc_gen_DoExpression_S3B1S1B1S2C1 = 39,
  efunc_gen_DoExpression_S3B1S1B1 = 40,
  efunc_gen_DoExpression_S3B1S1A1 = 41,
  efunc_gen_DoExpression_S3B1 = 42,
  efunc_AppendTerm = 43,
  efunc_gen_DoExpression_S3A2 = 44,
  efunc_gen_DoExpression_S3A1 = 45,
  efunc_InlineTerm = 46,
  efunc_Mu = 47,
  efunc_MultilineTermm_Prefix = 48,
  efunc_TkVariable = 49,
  efunc_gen_MultilineTermm_Prefix_B1 = 50,
  efunc_CharRep = 51,
  efunc_Symb = 52,
  efunc_Compound = 53,
  efunc_gen_Compound_S1C1 = 54,
  efunc_IsIdent = 55,
  efunc_DoCompound = 56,
  efunc_gen_IsIdent_S1C1 = 57,
  efunc_DoIsIdent = 58,
  efunc_gen_DoIsIdent_S3C1 = 59,
  efunc_gen_DoIsIdent_S4C1 = 60,
  efunc_gen_CharRep_S7C1 = 61,
  efunc_Ord = 62,
  efunc_gen_CharRep_S7C2 = 63,
  efunc_Compare = 64,
  efunc_HexDigit = 65,
  efunc_gen_HexDigit_C1 = 66,
  efunc_First = 67,
  efunc_DoInlineExpr = 68,
};


enum ident {
  ident_k43_ = 0,
  ident_k47_ = 1,
  ident_k37_ = 2,
  ident_k42_ = 3,
  ident_k63_ = 4,
  ident_m_ = 5,
  ident_Function = 6,
  ident_Enum = 7,
  ident_GNm_Entry = 8,
  ident_GNm_Local = 9,
  ident_Swap = 10,
  ident_Declaration = 11,
  ident_Inline = 12,
  ident_Drive = 13,
  ident_Ident = 14,
  ident_NativeBlock = 15,
  ident_Spec = 16,
  ident_False = 17,
  ident_True = 18,
  ident_Sentences = 19,
  ident_NativeBody = 20,
  ident_Comment = 21,
  ident_Condition = 22,
  ident_FIRST = 23,
  ident_NEXT = 24,
  ident_Brackets = 25,
  ident_ADTm_Brackets = 26,
  ident_CallBrackets = 27,
  ident_Symbol = 28,
  ident_Name = 29,
  ident_TkVariable = 30,
  ident_ClosureBrackets = 31,
  ident_ColdCallBrackets = 32,
  ident_Char = 33,
  ident_Number = 34,
  ident_Cookie1 = 35,
  ident_Cookie2 = 36,
  ident_Identifier = 37,
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

static refalrts::NativeReference nat_ref_Mu("Mu", 2621574225U, 3109966432U, func_Mu);


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
    refalrts::alloc_number(vm, context[9], 3109966432UL);
    refalrts::update_name(context[4], functions[efunc_u_u_FindMuPtr]);
    refalrts::reinit_number(context[5], 2621574225UL);
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
  refalrts::reinit_number(context[5], 2621574225UL);
  refalrts::reinit_number(context[7], 3109966432UL);
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

static refalrts::NativeReference nat_ref_gen_u_u_Mum_Aux_S13B1("__Mu-Aux$13:1", 2621574225U, 3109966432U, func_gen_u_u_Mum_Aux_S13B1);


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

static refalrts::NativeReference nat_ref_u_u_Mum_Aux("__Mu-Aux", 2621574225U, 3109966432U, func_u_u_Mum_Aux);


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

static refalrts::NativeReference nat_ref_Residue("Residue", 2621574225U, 3109966432U, func_Residue);


static refalrts::FnResult func_Logm_TextFromAST(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
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
  //RESULT: Tile{ [[ } </5 & UndoubleEmtpyLines/6 </7 & TrimLines/8 </9 Tile{ HalfReuse: & Map/0 Reuse: & Element/4 AsIs: e.Units#1/2 AsIs: >/1 } >/10 >/11 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_UndoubleEmtpyLines]);
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_TrimLines]);
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::reinit_name(context[0], functions[efunc_Map]);
  refalrts::update_name(context[4], functions[efunc_Element]);
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[9] );
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

static refalrts::NativeReference nat_ref_TrimLines("TrimLines", 2621574225U, 3109966432U, func_TrimLines);


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

static refalrts::NativeReference nat_ref_UndoubleEmtpyLines("UndoubleEmtpyLines", 2621574225U, 3109966432U, func_UndoubleEmtpyLines);


static refalrts::FnResult func_Element(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
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
      // </0 & Element/4 (/7 # Function/9 s.Scope#1/12 (/17 e.Name#1/15 )/18 e.Body#1/13 )/8 >/1
      context[13] = context[10];
      context[14] = context[11];
      if( ! refalrts::ident_term( identifiers[ident_Function], context[9] ) )
        continue;
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::brackets_left( context[15], context[16], context[13], context[14] );
      if( ! context[17] )
        continue;
      refalrts::bracket_pointers(context[17], context[18]);
      // closed e.Name#1 as range 15
      // closed e.Body#1 as range 13
      //DEBUG: s.Scope#1: 12
      //DEBUG: e.Name#1: 15
      //DEBUG: e.Body#1: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} (/17 {REMOVED TILE} )/18 {REMOVED TILE} )/8 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Function/4 AsIs: (/7 } Tile{ AsIs: e.Name#1/15 } Tile{ HalfReuse: )/9 AsIs: s.Scope#1/12 } Tile{ AsIs: e.Body#1/13 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Function]);
      refalrts::reinit_close_bracket(context[9]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[9] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[9], context[12] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Element/4 (/7 # Enum/9 s.new#6/12 e.new#7/13 )/8 >/1
      context[13] = context[10];
      context[14] = context[11];
      if( ! refalrts::ident_term( identifiers[ident_Enum], context[9] ) )
        continue;
      // closed e.new#7 as range 13
      do {
        // </0 & Element/4 (/7 # Enum/9 # GN-Entry/12 e.Name#1/15 )/8 >/1
        context[15] = context[13];
        context[16] = context[14];
        if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[12] ) )
          continue;
        // closed e.Name#1 as range 15
        //DEBUG: e.Name#1: 15

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } (/17"$EEN"/18 Tile{ HalfReuse: 'U'/0 HalfReuse: 'M'/4 HalfReuse: ' '/7 HalfReuse: </9 HalfReuse: & DisplayName/12 AsIs: e.Name#1/15 HalfReuse: >/8 HalfReuse: ';'/1 } )/20 Tile{ ]] }
        refalrts::alloc_open_bracket(vm, context[17]);
        refalrts::alloc_chars(vm, context[18], context[19], "$EEN", 4);
        refalrts::alloc_close_bracket(vm, context[20]);
        refalrts::reinit_char(context[0], 'U');
        refalrts::reinit_char(context[4], 'M');
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

      // </0 & Element/4 (/7 # Enum/9 # GN-Local/12 e.Name#1/15 )/8 >/1
      context[15] = context[13];
      context[16] = context[14];
      if( ! refalrts::ident_term( identifiers[ident_GNm_Local], context[12] ) )
        continue;
      // closed e.Name#1 as range 15
      //DEBUG: e.Name#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/17"$EN"/18 Tile{ HalfReuse: 'U'/0 HalfReuse: 'M'/4 HalfReuse: ' '/7 HalfReuse: </9 HalfReuse: & DisplayName/12 AsIs: e.Name#1/15 HalfReuse: >/8 HalfReuse: ';'/1 } )/20 Tile{ ]] }
      refalrts::alloc_open_bracket(vm, context[17]);
      refalrts::alloc_chars(vm, context[18], context[19], "$EN", 3);
      refalrts::alloc_close_bracket(vm, context[20]);
      refalrts::reinit_char(context[0], 'U');
      refalrts::reinit_char(context[4], 'M');
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

  // </0 & Element/4 (/7 s.new#3/9 t.new#4/10 e.new#5/5 )/8 >/1
  context[11] = refalrts::tvar_left( context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#5 as range 5
  do {
    // </0 & Element/4 (/7 # NativeBlock/9 t.SrcPos#1/10 e.Code#1/12 )/8 >/1
    context[12] = context[5];
    context[13] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_NativeBlock], context[9] ) )
      continue;
    // closed e.Code#1 as range 12
    //DEBUG: t.SrcPos#1: 10
    //DEBUG: e.Code#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} t.SrcPos#1/10 e.Code#1/12 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: '%'/4 HalfReuse: '%'/7 HalfReuse: ' '/9 }"native block %"/14 Tile{ HalfReuse: '%'/8 HalfReuse: )/1 ]] }
    refalrts::alloc_chars(vm, context[14], context[15], "native block %", 14);
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
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::splice_to_freelist_open( vm, context[9], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Element/4 (/7 # Spec/9 (/10 e.Name#1/12 )/11 e.Pattern#1/5 )/8 >/1
  context[12] = 0;
  context[13] = 0;
  if( ! refalrts::brackets_term( context[12], context[13], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::ident_term( identifiers[ident_Spec], context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 12
  // closed e.Pattern#1 as range 5
  //DEBUG: e.Name#1: 12
  //DEBUG: e.Pattern#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/14"$SP"/15 Tile{ HalfReuse: 'E'/0 HalfReuse: 'C'/4 HalfReuse: ' '/7 HalfReuse: </9 HalfReuse: & DisplayName/10 AsIs: e.Name#1/12 HalfReuse: >/11 } ' '/17 </18 & InlineExpr/19 Tile{ AsIs: e.Pattern#1/5 } >/20 Tile{ HalfReuse: ';'/8 HalfReuse: )/1 ]] }
  refalrts::alloc_open_bracket(vm, context[14]);
  refalrts::alloc_chars(vm, context[15], context[16], "$SP", 3);
  refalrts::alloc_char(vm, context[17], ' ');
  refalrts::alloc_open_call(vm, context[18]);
  refalrts::alloc_name(vm, context[19], functions[efunc_InlineExpr]);
  refalrts::alloc_close_call(vm, context[20]);
  refalrts::reinit_char(context[0], 'E');
  refalrts::reinit_char(context[4], 'C');
  refalrts::reinit_char(context[7], ' ');
  refalrts::reinit_open_call(context[9]);
  refalrts::reinit_name(context[10], functions[efunc_DisplayName]);
  refalrts::reinit_close_call(context[11]);
  refalrts::reinit_char(context[8], ';');
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[14], context[1] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[17], context[19] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[14], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Element("Element", 2621574225U, 3109966432U, func_Element);


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

static refalrts::NativeReference nat_ref_MAXm_LINE("MAX-LINE", 2621574225U, 3109966432U, func_MAXm_LINE);


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
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & DoLongLine/6 </7 Tile{ HalfReuse: & MAX-LINE/0 HalfReuse: >/4 AsIs: e.Line#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_DoLongLine]);
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::reinit_name(context[0], functions[efunc_MAXm_LINE]);
  refalrts::reinit_close_call(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[4] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_LongLine("LongLine", 2621574225U, 3109966432U, func_LongLine);


static refalrts::FnResult func_DoLongLine(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & DoLongLine/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoLongLine/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & DoLongLine/4 s.Len#1/5 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //DEBUG: s.Len#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoLongLine/4 s.Len#1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_False]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoLongLine/4 0/5 e.Line#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::number_term( 0UL, context[5] ) )
      continue;
    // closed e.Line#1 as range 6
    //DEBUG: e.Line#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoLongLine/4 0/5 e.Line#1/6 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_True]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoLongLine/4 s.Len#1/5 t.Next#1/6 e.Line#1/2 >/1
  context[7] = refalrts::tvar_left( context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  // closed e.Line#1 as range 2
  //DEBUG: s.Len#1: 5
  //DEBUG: t.Next#1: 6
  //DEBUG: e.Line#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} t.Next#1/6 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoLongLine/4 } </8 & Sub/9 Tile{ AsIs: s.Len#1/5 } 1/10 >/11 Tile{ AsIs: e.Line#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Sub]);
  refalrts::alloc_number(vm, context[10], 1UL);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoLongLine("DoLongLine", 2621574225U, 3109966432U, func_DoLongLine);


static refalrts::FnResult func_Function(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  // </0 & Function/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Function/4 (/7 e.new#1/5 )/8 s.new#2/9 s.new#3/10 e.new#4/2 >/1
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
    // </0 & Function/4 (/7 e.Name#1/11 )/8 s.Scope#1/9 # Sentences/10 e.Sentences#1/13 >/1
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
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: )/4 AsIs: (/7 } </15 Tile{ HalfReuse: & Entry/8 AsIs: s.Scope#1/9 } >/16 </17 & DisplayName/18 Tile{ AsIs: e.Name#1/11 } >/19" {"/20 )/22 </23 & Sentences/24 (/25"  "/26 Tile{ HalfReuse: )/10 AsIs: e.Sentences#1/13 AsIs: >/1 } (/28 '}'/29 )/30 (/31 )/32 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_close_call(vm, context[16]);
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[18], functions[efunc_DisplayName]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::alloc_chars(vm, context[20], context[21], " {", 2);
    refalrts::alloc_close_bracket(vm, context[22]);
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_name(vm, context[24], functions[efunc_Sentences]);
    refalrts::alloc_open_bracket(vm, context[25]);
    refalrts::alloc_chars(vm, context[26], context[27], "  ", 2);
    refalrts::alloc_open_bracket(vm, context[28]);
    refalrts::alloc_char(vm, context[29], '}');
    refalrts::alloc_close_bracket(vm, context[30]);
    refalrts::alloc_open_bracket(vm, context[31]);
    refalrts::alloc_close_bracket(vm, context[32]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_close_bracket(context[4]);
    refalrts::reinit_name(context[8], functions[efunc_Entry]);
    refalrts::reinit_close_bracket(context[10]);
    refalrts::link_brackets( context[31], context[32] );
    refalrts::link_brackets( context[28], context[30] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[23] );
    refalrts::link_brackets( context[25], context[10] );
    refalrts::link_brackets( context[7], context[22] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[15] );
    refalrts::link_brackets( context[0], context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[28], context[32] );
    res = refalrts::splice_evar( res, context[10], context[1] );
    res = refalrts::splice_evar( res, context[19], context[27] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[16], context[18] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Function/4 (/7 e.Name#1/5 )/8 s.Scope#1/9 # NativeBody/10 t.SrcPos#1/11 e.NativeBody#1/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_NativeBody], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 5
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  // closed e.NativeBody#1 as range 2
  //DEBUG: s.Scope#1: 9
  //DEBUG: e.Name#1: 5
  //DEBUG: t.SrcPos#1: 11
  //DEBUG: e.NativeBody#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SrcPos#1/11 e.NativeBody#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ } (/13 </14 Tile{ HalfReuse: & Entry/10 } Tile{ AsIs: s.Scope#1/9 } Tile{ HalfReuse: >/0 HalfReuse: </4 HalfReuse: & DisplayName/7 AsIs: e.Name#1/5 HalfReuse: >/8 }" { %% native %% }"/15 Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_open_bracket(vm, context[13]);
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::alloc_chars(vm, context[15], context[16], " { %% native %% }", 17);
  refalrts::reinit_name(context[10], functions[efunc_Entry]);
  refalrts::reinit_close_call(context[0]);
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_DisplayName]);
  refalrts::reinit_close_call(context[8]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[13], context[1] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[4] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Function("Function", 2621574225U, 3109966432U, func_Function);


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

static refalrts::NativeReference nat_ref_Entry("Entry", 2621574225U, 3109966432U, func_Entry);


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
    // </0 & Sentences/4 (/7 e.new#3/9 )/8 (/15 e.new#4/13 )/16 e.new#5/11 >/1
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
    // closed e.new#3 as range 9
    // closed e.new#4 as range 13
    // closed e.new#5 as range 11
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

static refalrts::NativeReference nat_ref_Sentences("Sentences", 2621574225U, 3109966432U, func_Sentences);


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

  // </0 & Sentence/4 (/7 e.new#4/5 )/8 (/9 e.new#5/11 )/10 e.new#6/2 >/1
  context[11] = 0;
  context[12] = 0;
  if( ! refalrts::brackets_term( context[11], context[12], context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 5
  // closed e.new#5 as range 11
  // closed e.new#6 as range 2
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

static refalrts::NativeReference nat_ref_Sentence("Sentence", 2621574225U, 3109966432U, func_Sentence);


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

static refalrts::NativeReference nat_ref_InlineExpr("InlineExpr", 2621574225U, 3109966432U, func_InlineExpr);


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

static refalrts::NativeReference nat_ref_PutComment("PutComment", 2621574225U, 3109966432U, func_PutComment);


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

static refalrts::NativeReference nat_ref_gen_Tail_S1B1("Tail$1:1", 2621574225U, 3109966432U, func_gen_Tail_S1B1);


static refalrts::FnResult func_gen_Tail_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </25 Tile{ HalfReuse: [*]/0 Reuse: & Tail$1:1/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Name#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Result#1/13 AsIs: )/16 AsIs: (/19 AsIs: e.Pattern#1/17 AsIs: )/20 AsIs: (/23 AsIs: e.Tail#1/21 AsIs: )/24 } (/26 Tile{ AsIs: e.OneLineCondition#2/2 } )/27 {*}/28 </29 & LongLine/30 e.OneLineCondition#2/2/31 >/33 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[25]);
  refalrts::alloc_open_bracket(vm, context[26]);
  refalrts::alloc_close_bracket(vm, context[27]);
  refalrts::alloc_unwrapped_closure(vm, context[28], context[0]);
  refalrts::alloc_open_call(vm, context[29]);
  refalrts::alloc_name(vm, context[30], functions[efunc_LongLine]);
  refalrts::copy_evar(vm, context[31], context[32], context[2], context[3]);
  refalrts::alloc_close_call(vm, context[33]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_Tail_S1B1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[33] );
  refalrts::push_stack( vm, context[29] );
  refalrts::link_brackets( context[26], context[27] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[27], context[33] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[26], context[26] );
  res = refalrts::splice_evar( res, context[0], context[24] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  refalrts::use( res );
  refalrts::wrap_closure( context[28] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Tail_S1A1("Tail$1=1", 2621574225U, 3109966432U, func_gen_Tail_S1A1);


static refalrts::FnResult func_Tail(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 49 elems
  refalrts::Iter context[49];
  refalrts::zeros( context, 49 );
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
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 HalfReuse: & Tail$1=1/7 } Tile{ AsIs: (/11 } Tile{ AsIs: e.Indent#1/13 } Tile{ HalfReuse: )/19 AsIs: (/22 AsIs: e.Name#1/20 AsIs: )/23 AsIs: (/26 AsIs: e.Result#1/24 AsIs: )/27 AsIs: (/30 AsIs: e.Pattern#1/28 AsIs: )/31 HalfReuse: (/12 AsIs: e.Tail#1/17 HalfReuse: )/1 } Tile{ HalfReuse: {*}/8 } e.Indent#1/13/32", "/34 </36 & InlineExpr/37 e.Result#1/24/38 >/40" : "/41 </43 & InlineExpr/44 e.Pattern#1/28/45 >/47 >/48 Tile{ ]] }
    refalrts::copy_evar(vm, context[32], context[33], context[13], context[14]);
    refalrts::alloc_chars(vm, context[34], context[35], ", ", 2);
    refalrts::alloc_open_call(vm, context[36]);
    refalrts::alloc_name(vm, context[37], functions[efunc_InlineExpr]);
    refalrts::copy_evar(vm, context[38], context[39], context[24], context[25]);
    refalrts::alloc_close_call(vm, context[40]);
    refalrts::alloc_chars(vm, context[41], context[42], " : ", 3);
    refalrts::alloc_open_call(vm, context[43]);
    refalrts::alloc_name(vm, context[44], functions[efunc_InlineExpr]);
    refalrts::copy_evar(vm, context[45], context[46], context[28], context[29]);
    refalrts::alloc_close_call(vm, context[47]);
    refalrts::alloc_close_call(vm, context[48]);
    refalrts::reinit_closure_head(context[4]);
    refalrts::reinit_name(context[7], functions[efunc_gen_Tail_S1A1]);
    refalrts::reinit_close_bracket(context[19]);
    refalrts::reinit_open_bracket(context[12]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::reinit_unwrapped_closure(context[8], context[4]);
    refalrts::push_stack( vm, context[48] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[47] );
    refalrts::push_stack( vm, context[43] );
    refalrts::push_stack( vm, context[40] );
    refalrts::push_stack( vm, context[36] );
    refalrts::link_brackets( context[12], context[1] );
    refalrts::link_brackets( context[30], context[31] );
    refalrts::link_brackets( context[26], context[27] );
    refalrts::link_brackets( context[22], context[23] );
    refalrts::link_brackets( context[11], context[19] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[34], context[48] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[19], context[1] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    refalrts::use( res );
    refalrts::wrap_closure( context[8] );
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

static refalrts::NativeReference nat_ref_Tail("Tail", 2621574225U, 3109966432U, func_Tail);


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

static refalrts::NativeReference nat_ref_Expression("Expression", 2621574225U, 3109966432U, func_Expression);


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
    // </0 & DoExpression$3:1$1:1/4 (/7 e.new#8/25 )/8 s.new#9/9 (/12 e.new#10/27 )/13 (/16 e.new#11/29 )/17 t.new#12/18 (/22 e.new#13/31 )/23 # True/24 >/1
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
    // closed e.new#8 as range 25
    // closed e.new#10 as range 27
    // closed e.new#11 as range 29
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

static refalrts::NativeReference nat_ref_gen_DoExpression_S3B1S1B1("DoExpression$3:1$1:1", 2621574225U, 3109966432U, func_gen_DoExpression_S3B1S1B1);


static refalrts::FnResult func_gen_DoExpression_S3B1S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </20 Tile{ HalfReuse: [*]/0 Reuse: & DoExpression$3:1$1:1/4 AsIs: (/7 AsIs: e.Expr#1/5 AsIs: )/8 AsIs: s.Pos#1/9 AsIs: (/12 AsIs: e.OutLine#1/10 AsIs: )/13 AsIs: (/16 AsIs: e.Indent#1/14 AsIs: )/17 AsIs: t.NextTerm#1/18 } (/21 Tile{ AsIs: e.OutLineTerm#5/2 } )/22 {*}/23 </24 & LongLine/25 e.OutLineTerm#5/2/26 >/28 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[20]);
  refalrts::alloc_open_bracket(vm, context[21]);
  refalrts::alloc_close_bracket(vm, context[22]);
  refalrts::alloc_unwrapped_closure(vm, context[23], context[0]);
  refalrts::alloc_open_call(vm, context[24]);
  refalrts::alloc_name(vm, context[25], functions[efunc_LongLine]);
  refalrts::copy_evar(vm, context[26], context[27], context[2], context[3]);
  refalrts::alloc_close_call(vm, context[28]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_DoExpression_S3B1S1B1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[28] );
  refalrts::push_stack( vm, context[24] );
  refalrts::link_brackets( context[21], context[22] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[22], context[28] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[0], context[19] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  refalrts::use( res );
  refalrts::wrap_closure( context[23] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoExpression_S3B1S1A1("DoExpression$3:1$1=1", 2621574225U, 3109966432U, func_gen_DoExpression_S3B1S1A1);


static refalrts::FnResult func_gen_DoExpression_S3B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
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
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/26 e.NewOutLine#3/37 )/27 # True/28 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </23 } Tile{ HalfReuse: [*]/0 Reuse: & DoExpression$3:1$1=1/4 AsIs: (/7 AsIs: e.Expr#1/29 AsIs: )/8 AsIs: s.Pos#1/9 AsIs: (/12 AsIs: e.OutLine#1/31 AsIs: )/13 AsIs: (/16 AsIs: e.Indent#1/33 AsIs: )/17 AsIs: t.NextTerm#1/18 HalfReuse: {*}/22 } e.Indent#1/33/39 Tile{ AsIs: e.TextualTerm#2/35 } Tile{ AsIs: >/1 ]] }
    refalrts::copy_evar(vm, context[39], context[40], context[33], context[34]);
    refalrts::reinit_open_call(context[23]);
    refalrts::reinit_closure_head(context[0]);
    refalrts::update_name(context[4], functions[efunc_gen_DoExpression_S3B1S1A1]);
    refalrts::reinit_unwrapped_closure(context[22], context[0]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[23] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[0], context[22] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    refalrts::wrap_closure( context[22] );
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

static refalrts::NativeReference nat_ref_gen_DoExpression_S3B1("DoExpression$3:1", 2621574225U, 3109966432U, func_gen_DoExpression_S3B1);


static refalrts::FnResult func_gen_DoExpression_S3A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </24 Tile{ HalfReuse: [*]/0 Reuse: & DoExpression$3:1/4 AsIs: (/7 AsIs: e.Expr#1/5 AsIs: )/8 AsIs: s.Pos#1/9 AsIs: (/12 AsIs: e.OutLine#1/10 AsIs: )/13 AsIs: (/16 AsIs: e.Indent#1/14 AsIs: )/17 AsIs: t.NextTerm#1/18 AsIs: (/22 AsIs: e.TextualTerm#2/20 AsIs: )/23 } (/25 Tile{ AsIs: e.NewOutLine#3/2 } )/26 {*}/27 </28 & LongLine/29 e.NewOutLine#3/2/30 >/32 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[24]);
  refalrts::alloc_open_bracket(vm, context[25]);
  refalrts::alloc_close_bracket(vm, context[26]);
  refalrts::alloc_unwrapped_closure(vm, context[27], context[0]);
  refalrts::alloc_open_call(vm, context[28]);
  refalrts::alloc_name(vm, context[29], functions[efunc_LongLine]);
  refalrts::copy_evar(vm, context[30], context[31], context[2], context[3]);
  refalrts::alloc_close_call(vm, context[32]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_DoExpression_S3B1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[24] );
  refalrts::push_stack( vm, context[32] );
  refalrts::push_stack( vm, context[28] );
  refalrts::link_brackets( context[25], context[26] );
  refalrts::link_brackets( context[22], context[23] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[26], context[32] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[0], context[23] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  refalrts::use( res );
  refalrts::wrap_closure( context[27] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoExpression_S3A2("DoExpression$3=2", 2621574225U, 3109966432U, func_gen_DoExpression_S3A2);


static refalrts::FnResult func_gen_DoExpression_S3A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </20 Tile{ HalfReuse: [*]/0 Reuse: & DoExpression$3=2/4 AsIs: (/7 AsIs: e.Expr#1/5 AsIs: )/8 AsIs: s.Pos#1/9 AsIs: (/12 AsIs: e.OutLine#1/10 AsIs: )/13 AsIs: (/16 AsIs: e.Indent#1/14 AsIs: )/17 AsIs: t.NextTerm#1/18 } (/21 Tile{ AsIs: e.TextualTerm#2/2 } )/22 {*}/23 </24 & AppendTerm/25 e.OutLine#1/10/26 (/28 e.TextualTerm#2/2/29 )/31 >/32 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[20]);
  refalrts::alloc_open_bracket(vm, context[21]);
  refalrts::alloc_close_bracket(vm, context[22]);
  refalrts::alloc_unwrapped_closure(vm, context[23], context[0]);
  refalrts::alloc_open_call(vm, context[24]);
  refalrts::alloc_name(vm, context[25], functions[efunc_AppendTerm]);
  refalrts::copy_evar(vm, context[26], context[27], context[10], context[11]);
  refalrts::alloc_open_bracket(vm, context[28]);
  refalrts::copy_evar(vm, context[29], context[30], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[31]);
  refalrts::alloc_close_call(vm, context[32]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_DoExpression_S3A2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[32] );
  refalrts::push_stack( vm, context[24] );
  refalrts::link_brackets( context[28], context[31] );
  refalrts::link_brackets( context[21], context[22] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[22], context[32] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[0], context[19] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  refalrts::use( res );
  refalrts::wrap_closure( context[23] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoExpression_S3A1("DoExpression$3=1", 2621574225U, 3109966432U, func_gen_DoExpression_S3A1);


static refalrts::FnResult func_DoExpression(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
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

  // </0 & DoExpression/4 s.new#5/5 (/8 e.new#6/6 )/9 (/12 e.new#7/10 )/13 t.new#8/14 e.new#9/2 >/1
  // closed e.new#6 as range 6
  // closed e.new#7 as range 10
  context[15] = refalrts::tvar_left( context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#9 as range 2
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
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & DoExpression$3=1/16 (/17 Tile{ AsIs: e.Expr#1/2 } )/18 Tile{ HalfReuse: s.Pos1 #5/9 AsIs: (/12 AsIs: e.OutLine#1/10 AsIs: )/13 } Tile{ AsIs: (/8 } Tile{ AsIs: e.Indent#1/6 } )/19 Tile{ AsIs: t.NextTerm#1/14 } {*}/20 </21 & InlineTerm/22 t.NextTerm#1/14/23 >/25 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[16], functions[efunc_gen_DoExpression_S3A1]);
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::alloc_close_bracket(vm, context[18]);
  refalrts::alloc_close_bracket(vm, context[19]);
  refalrts::alloc_unwrapped_closure(vm, context[20], context[4]);
  refalrts::alloc_open_call(vm, context[21]);
  refalrts::alloc_name(vm, context[22], functions[efunc_InlineTerm]);
  refalrts::copy_evar(vm, context[23], context[24], context[14], context[15]);
  refalrts::alloc_close_call(vm, context[25]);
  refalrts::reinit_closure_head(context[4]);
  refalrts::reinit_svar( context[9], context[5] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[21] );
  refalrts::link_brackets( context[8], context[19] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[20], context[25] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[9], context[13] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  refalrts::wrap_closure( context[20] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoExpression("DoExpression", 2621574225U, 3109966432U, func_DoExpression);


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
    // </0 & AppendTerm/4 e.new#4/9 s.new#5/13 (/7 e.new#3/11 )/8 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[11] = context[5];
    context[12] = context[6];
    // closed e.new#3 as range 11
    if( ! refalrts::svar_right( context[13], context[9], context[10] ) )
      continue;
    // closed e.new#4 as range 9
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

static refalrts::NativeReference nat_ref_AppendTerm("AppendTerm", 2621574225U, 3109966432U, func_AppendTerm);


static refalrts::FnResult func_InlineTerm(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
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
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & Mu/5 AsIs: s.Type#1/9 AsIs: e.Value#1/7 HalfReuse: >/6 } Tile{ ]] }
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_Mu]);
    refalrts::reinit_close_call(context[6]);
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[6] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
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

static refalrts::NativeReference nat_ref_InlineTerm("InlineTerm", 2621574225U, 3109966432U, func_InlineTerm);


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

static refalrts::NativeReference nat_ref_MultilineTerm("MultilineTerm", 2621574225U, 3109966432U, func_MultilineTerm);


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

    // </0 & MultilineTerm-Prefix:1/4 (/7 e.new#12/34 )/8 (/11 e.new#13/36 )/12 (/15 e.new#14/38 )/16 (/19 # CallBrackets/21 (/32 s.new#15/44 e.new#16/40 )/33 e.new#17/42 )/20 >/1
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
    // closed e.new#17 as range 42
    if( ! refalrts::svar_left( context[44], context[40], context[41] ) )
      continue;
    // closed e.new#16 as range 40
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
  //TRASH: {REMOVED TILE} & MultilineTerm-Prefix:1/4 (/7 {REMOVED TILE} )/8 (/11 e.Indent#1/9 )/12 (/15 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Prefix#1/5 } Tile{ HalfReuse: </16 HalfReuse: & Mu/19 AsIs: s.Type#2/21 AsIs: e.Value#2/17 HalfReuse: >/20 } Tile{ AsIs: e.Suffix#1/13 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_open_call(context[16]);
  refalrts::reinit_name(context[19], functions[efunc_Mu]);
  refalrts::reinit_close_call(context[20]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[16], context[20] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MultilineTermm_Prefix_B1("MultilineTerm-Prefix:1", 2621574225U, 3109966432U, func_gen_MultilineTermm_Prefix_B1);


static refalrts::FnResult func_MultilineTermm_Prefix(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & MultilineTerm-Prefix/4 (/7 e.Prefix#1/5 )/8 e.Indent#1/2 t.Term#1/13 (/11 e.Suffix#1/9 )/12 >/1
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
  context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.Prefix#1 as range 5
  // closed e.Suffix#1 as range 9
  context[14] = refalrts::tvar_right( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  // closed e.Indent#1 as range 2
  //DEBUG: e.Prefix#1: 5
  //DEBUG: e.Suffix#1: 9
  //DEBUG: t.Term#1: 13
  //DEBUG: e.Indent#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </15 Tile{ HalfReuse: [*]/0 Reuse: & MultilineTerm-Prefix:1/4 AsIs: (/7 AsIs: e.Prefix#1/5 AsIs: )/8 } (/16 Tile{ AsIs: e.Indent#1/2 } )/17 Tile{ AsIs: (/11 AsIs: e.Suffix#1/9 AsIs: )/12 HalfReuse: {*}/1 } Tile{ AsIs: t.Term#1/13 } >/18 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[15]);
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::alloc_close_bracket(vm, context[17]);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_MultilineTermm_Prefix_B1]);
  refalrts::reinit_unwrapped_closure(context[1], context[0]);
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[15] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[11], context[1] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  refalrts::use( res );
  refalrts::wrap_closure( context[1] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MultilineTermm_Prefix("MultilineTerm-Prefix", 2621574225U, 3109966432U, func_MultilineTermm_Prefix);


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

static refalrts::NativeReference nat_ref_Symbol("Symbol", 2621574225U, 3109966432U, func_Symbol);


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

static refalrts::NativeReference nat_ref_Compound("Compound", 2621574225U, 3109966432U, func_Compound);


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

static refalrts::NativeReference nat_ref_DoCompound("DoCompound", 2621574225U, 3109966432U, func_DoCompound);


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

static refalrts::NativeReference nat_ref_IsIdent("IsIdent", 2621574225U, 3109966432U, func_IsIdent);


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
    // </0 & DoIsIdent/4 (/7 e.new#3/9 )/8 s.new#4/13 e.new#5/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.new#3 as range 9
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    // closed e.new#5 as range 11
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

static refalrts::NativeReference nat_ref_DoIsIdent("DoIsIdent", 2621574225U, 3109966432U, func_DoIsIdent);


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

static refalrts::NativeReference nat_ref_CharRep("CharRep", 2621574225U, 3109966432U, func_CharRep);


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

static refalrts::NativeReference nat_ref_HexDigit("HexDigit", 2621574225U, 3109966432U, func_HexDigit);


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

static refalrts::NativeReference nat_ref_TkVariable("TkVariable", 2621574225U, 3109966432U, func_TkVariable);


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

static refalrts::NativeReference nat_ref_Brackets("Brackets", 2621574225U, 3109966432U, func_Brackets);


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

static refalrts::NativeReference nat_ref_ADTm_Brackets("ADT-Brackets", 2621574225U, 3109966432U, func_ADTm_Brackets);


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
      // </0 & CallBrackets/4 (/9 # Symbol/11 # Name/16 e.new#4/12 )/10 e.new#5/14 >/1
      context[12] = context[7];
      context[13] = context[8];
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::ident_term( identifiers[ident_Symbol], context[11] ) )
        continue;
      context[16] = refalrts::ident_left( identifiers[ident_Name], context[12], context[13] );
      if( ! context[16] )
        continue;
      // closed e.new#4 as range 12
      // closed e.new#5 as range 14
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

static refalrts::NativeReference nat_ref_CallBrackets("CallBrackets", 2621574225U, 3109966432U, func_CallBrackets);


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

static refalrts::NativeReference nat_ref_ColdCallBrackets("ColdCallBrackets", 2621574225U, 3109966432U, func_ColdCallBrackets);


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

static refalrts::NativeReference nat_ref_ClosureBrackets("ClosureBrackets", 2621574225U, 3109966432U, func_ClosureBrackets);


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

static refalrts::NativeReference nat_ref_InlineSubexpr("InlineSubexpr", 2621574225U, 3109966432U, func_InlineSubexpr);


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

static refalrts::NativeReference nat_ref_DoInlineExpr("DoInlineExpr", 2621574225U, 3109966432U, func_DoInlineExpr);


//End of file
