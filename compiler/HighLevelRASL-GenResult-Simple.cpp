// This file automatically generated from 'HighLevelRASL-GenResult-Simple.ref'
// Don't edit! Edit 'HighLevelRASL-GenResult-Simple.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_2847441005_670997308

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
  efunc_MakeVariableCommentTable = 14,
  efunc_gen_GenResultm_Simple_B1 = 15,
  efunc_GenResult = 16,
  efunc_MakeVarTablem_Simple = 17,
  efunc_MakeVarTablem_Conditions = 18,
  efunc_gen_GenResultm_Condition_A1 = 19,
  efunc_DoGenResult = 20,
  efunc_CollectStrings = 21,
  efunc_gen_GenResult_A1 = 22,
  efunc_Map = 23,
  efunc_Dec = 24,
  efunc_Inc = 25,
  efunc_IncVarOffset = 26,
  efunc_Pipe = 27,
  efunc_ReplicateVar = 28,
  efunc_Sort = 29,
  efunc_MakeVariableComment = 30,
  efunc_Fetch = 31,
  efunc_gen_ReplicateVar_L1 = 32,
  efunc_PrintVar = 33,
};


enum ident {
  ident_k43_ = 0,
  ident_k47_ = 1,
  ident_k37_ = 2,
  ident_k42_ = 3,
  ident_k63_ = 4,
  ident_m_ = 5,
  ident_CmdSpliceToFreeList = 6,
  ident_CmdNextStep = 7,
  ident_CmdResetAllocator = 8,
  ident_CmdSetRes = 9,
  ident_ARGm_BEGIN = 10,
  ident_CmdUseRes = 11,
  ident_TkOpenCallCond = 12,
  ident_Allocate = 13,
  ident_ElOpenCall = 14,
  ident_CmdCreateElem = 15,
  ident_CmdInsertElem = 16,
  ident_TkCloseCallCond = 17,
  ident_ElCloseCall = 18,
  ident_CmdPushStack = 19,
  ident_Symbol = 20,
  ident_Char = 21,
  ident_ElChar = 22,
  ident_Name = 23,
  ident_ElName = 24,
  ident_Number = 25,
  ident_ElNumber = 26,
  ident_Identifier = 27,
  ident_ElIdent = 28,
  ident_TkString = 29,
  ident_ElString = 30,
  ident_CmdInsertRange = 31,
  ident_Brackets = 32,
  ident_TkCloseBracket = 33,
  ident_ElOpenBracket = 34,
  ident_CallBrackets = 35,
  ident_TkCloseCall = 36,
  ident_ADTm_Brackets = 37,
  ident_ElOpenADT = 38,
  ident_TkCloseADT = 39,
  ident_ClosureBrackets = 40,
  ident_TkUnwrappedClosure = 41,
  ident_ElClosureHead = 42,
  ident_ElCloseBracket = 43,
  ident_CmdLinkBrackets = 44,
  ident_ElCloseADT = 45,
  ident_CmdWrapClosure = 46,
  ident_ElUnwrappedClosure = 47,
  ident_TkVariable = 48,
  ident_CmdInsertVar = 49,
  ident_CmdCopyVar = 50,
  ident_CmdComment = 51,
  ident_Offset = 52,
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

static refalrts::NativeReference nat_ref_Mu("Mu", 2847441005U, 670997308U, func_Mu);


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
    refalrts::alloc_number(vm, context[9], 670997308UL);
    refalrts::update_name(context[4], functions[efunc_u_u_FindMuPtr]);
    refalrts::reinit_number(context[5], 2847441005UL);
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
  refalrts::reinit_number(context[5], 2847441005UL);
  refalrts::reinit_number(context[7], 670997308UL);
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

static refalrts::NativeReference nat_ref_gen_u_u_Mum_Aux_S13B1("__Mu-Aux$13:1", 2847441005U, 670997308U, func_gen_u_u_Mum_Aux_S13B1);


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

static refalrts::NativeReference nat_ref_u_u_Mum_Aux("__Mu-Aux", 2847441005U, 670997308U, func_u_u_Mum_Aux);


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

static refalrts::NativeReference nat_ref_Residue("Residue", 2847441005U, 670997308U, func_Residue);


static refalrts::FnResult func_gen_GenResultm_Simple_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & GenResult-Simple:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & GenResult-Simple:1/4 s.new#1/5 (/8 e.new#2/6 )/9 e.new#3/2 >/1
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
    // </0 & GenResult-Simple:1/4 s.ContextOffset#2/5 (/8 e.CommonVars#2/6 )/9 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.CommonVars#2 as range 6
    //DEBUG: s.ContextOffset#2: 5
    //DEBUG: e.CommonVars#2: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.ContextOffset#2/5 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: s.ContextOffset2 #5/0 HalfReuse: </4 } Tile{ HalfReuse: & MakeVariableCommentTable/8 AsIs: e.CommonVars#2/6 HalfReuse: >/9 HalfReuse: (/1 } # CmdSpliceToFreeList/10 )/11 (/12 # CmdNextStep/13 )/14 Tile{ ]] }
    refalrts::alloc_ident(vm, context[10], identifiers[ident_CmdSpliceToFreeList]);
    refalrts::alloc_close_bracket(vm, context[11]);
    refalrts::alloc_open_bracket(vm, context[12]);
    refalrts::alloc_ident(vm, context[13], identifiers[ident_CmdNextStep]);
    refalrts::alloc_close_bracket(vm, context[14]);
    refalrts::reinit_svar( context[0], context[5] );
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[8], functions[efunc_MakeVariableCommentTable]);
    refalrts::reinit_close_call(context[9]);
    refalrts::reinit_open_bracket(context[1]);
    refalrts::link_brackets( context[12], context[14] );
    refalrts::link_brackets( context[1], context[11] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[14] );
    res = refalrts::splice_evar( res, context[8], context[1] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenResult-Simple:1/4 s.ContextOffset#2/5 (/8 e.CommonVars#2/6 )/9 e.ResultCommands#2/2 >/1
  // closed e.CommonVars#2 as range 6
  // closed e.ResultCommands#2 as range 2
  //DEBUG: s.ContextOffset#2: 5
  //DEBUG: e.CommonVars#2: 6
  //DEBUG: e.ResultCommands#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.ContextOffset#2/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: s.ContextOffset2 #5/0 HalfReuse: </4 } & MakeVariableCommentTable/10 Tile{ AsIs: e.CommonVars#2/6 } >/11 Tile{ AsIs: (/8 } # CmdResetAllocator/12 )/13 (/14 # CmdSetRes/15 # ARG-BEGIN/16 Tile{ AsIs: )/9 AsIs: e.ResultCommands#2/2 HalfReuse: (/1 } # CmdUseRes/17 )/18 (/19 # CmdSpliceToFreeList/20 )/21 (/22 # CmdNextStep/23 )/24 Tile{ ]] }
  refalrts::alloc_name(vm, context[10], functions[efunc_MakeVariableCommentTable]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::alloc_ident(vm, context[12], identifiers[ident_CmdResetAllocator]);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::alloc_open_bracket(vm, context[14]);
  refalrts::alloc_ident(vm, context[15], identifiers[ident_CmdSetRes]);
  refalrts::alloc_ident(vm, context[16], identifiers[ident_ARGm_BEGIN]);
  refalrts::alloc_ident(vm, context[17], identifiers[ident_CmdUseRes]);
  refalrts::alloc_close_bracket(vm, context[18]);
  refalrts::alloc_open_bracket(vm, context[19]);
  refalrts::alloc_ident(vm, context[20], identifiers[ident_CmdSpliceToFreeList]);
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::alloc_open_bracket(vm, context[22]);
  refalrts::alloc_ident(vm, context[23], identifiers[ident_CmdNextStep]);
  refalrts::alloc_close_bracket(vm, context[24]);
  refalrts::reinit_svar( context[0], context[5] );
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_open_bracket(context[1]);
  refalrts::link_brackets( context[22], context[24] );
  refalrts::link_brackets( context[19], context[21] );
  refalrts::link_brackets( context[1], context[18] );
  refalrts::link_brackets( context[14], context[9] );
  refalrts::link_brackets( context[8], context[13] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[17], context[24] );
  res = refalrts::splice_evar( res, context[9], context[1] );
  res = refalrts::splice_evar( res, context[12], context[16] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenResultm_Simple_B1("GenResult-Simple:1", 2847441005U, 670997308U, func_gen_GenResultm_Simple_B1);


static refalrts::FnResult func_GenResultm_Simple(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & GenResult-Simple/4 s.ContextOffset#1/5 (/8 e.PatternVars#1/6 )/9 (/12 e.MarkedPattern#1/10 )/13 e.Result#1/2 >/1
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
  // closed e.PatternVars#1 as range 6
  // closed e.MarkedPattern#1 as range 10
  // closed e.Result#1 as range 2
  //DEBUG: s.ContextOffset#1: 5
  //DEBUG: e.PatternVars#1: 6
  //DEBUG: e.MarkedPattern#1: 10
  //DEBUG: e.Result#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.MarkedPattern#1/10 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </9 } & GenResult-Simple:1/14 Tile{ AsIs: </0 Reuse: & GenResult/4 AsIs: s.ContextOffset#1/5 HalfReuse: & MakeVarTable-Simple/8 } Tile{ AsIs: (/12 } Tile{ AsIs: e.PatternVars#1/6 } Tile{ AsIs: )/13 AsIs: e.Result#1/2 AsIs: >/1 } >/15 Tile{ ]] }
  refalrts::alloc_name(vm, context[14], functions[efunc_gen_GenResultm_Simple_B1]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::reinit_open_call(context[9]);
  refalrts::update_name(context[4], functions[efunc_GenResult]);
  refalrts::reinit_name(context[8], functions[efunc_MakeVarTablem_Simple]);
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[13], context[1] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenResultm_Simple("GenResult-Simple", 0U, 0U, func_GenResultm_Simple);


static refalrts::FnResult func_gen_GenResultm_Condition_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & GenResult-Condition=1/4 s.ContextOffset#2/5 (/8 e.CommonVars#2/6 )/9 e.ResultCommands#2/2 >/1
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
  // closed e.CommonVars#2 as range 6
  // closed e.ResultCommands#2 as range 2
  //DEBUG: s.ContextOffset#2: 5
  //DEBUG: e.CommonVars#2: 6
  //DEBUG: e.ResultCommands#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.ContextOffset#2/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: s.ContextOffset2 #5/0 HalfReuse: </4 } & MakeVariableCommentTable/10 Tile{ AsIs: e.CommonVars#2/6 } >/11 Tile{ AsIs: (/8 } # CmdResetAllocator/12 )/13 (/14 # CmdSetRes/15 1/16 Tile{ AsIs: )/9 AsIs: e.ResultCommands#2/2 HalfReuse: (/1 } # CmdUseRes/17 )/18 Tile{ ]] }
  refalrts::alloc_name(vm, context[10], functions[efunc_MakeVariableCommentTable]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::alloc_ident(vm, context[12], identifiers[ident_CmdResetAllocator]);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::alloc_open_bracket(vm, context[14]);
  refalrts::alloc_ident(vm, context[15], identifiers[ident_CmdSetRes]);
  refalrts::alloc_number(vm, context[16], 1UL);
  refalrts::alloc_ident(vm, context[17], identifiers[ident_CmdUseRes]);
  refalrts::alloc_close_bracket(vm, context[18]);
  refalrts::reinit_svar( context[0], context[5] );
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_open_bracket(context[1]);
  refalrts::link_brackets( context[1], context[18] );
  refalrts::link_brackets( context[14], context[9] );
  refalrts::link_brackets( context[8], context[13] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[9], context[1] );
  res = refalrts::splice_evar( res, context[12], context[16] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenResultm_Condition_A1("GenResult-Condition=1", 2847441005U, 670997308U, func_gen_GenResultm_Condition_A1);


static refalrts::FnResult func_GenResultm_Condition(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & GenResult-Condition/4 s.ContextOffset#1/5 (/8 e.PatternVars#1/6 )/9 e.CondResult#1/2 >/1
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
  // closed e.PatternVars#1 as range 6
  // closed e.CondResult#1 as range 2
  //DEBUG: s.ContextOffset#1: 5
  //DEBUG: e.PatternVars#1: 6
  //DEBUG: e.CondResult#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenResult-Condition=1/4 } </10 & GenResult/11 Tile{ AsIs: s.ContextOffset#1/5 } & MakeVarTable-Conditions/12 Tile{ AsIs: (/8 AsIs: e.PatternVars#1/6 AsIs: )/9 AsIs: e.CondResult#1/2 AsIs: >/1 } >/13 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_GenResult]);
  refalrts::alloc_name(vm, context[12], functions[efunc_MakeVarTablem_Conditions]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_gen_GenResultm_Condition_A1]);
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[10] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[8], context[1] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenResultm_Condition("GenResult-Condition", 0U, 0U, func_GenResultm_Condition);


static refalrts::FnResult func_MakeVarTablem_Simple(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & MakeVarTable-Simple/4 (/7 s.Mode#1/9 (/12 e.Index#1/10 )/13 e.Offsets#1/5 )/8 >/1
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
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.Index#1 as range 10
  // closed e.Offsets#1 as range 5
  //DEBUG: s.Mode#1: 9
  //DEBUG: e.Index#1: 10
  //DEBUG: e.Offsets#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Mode#1/9 AsIs: (/12 AsIs: e.Index#1/10 AsIs: )/13 } Tile{ HalfReuse: (/4 } Tile{ AsIs: )/8 } Tile{ AsIs: e.Offsets#1/5 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[7], context[1] );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[4], context[4] );
  res = refalrts::splice_evar( res, context[7], context[13] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MakeVarTablem_Simple("MakeVarTable-Simple", 2847441005U, 670997308U, func_MakeVarTablem_Simple);


static refalrts::FnResult func_MakeVarTablem_Conditions(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & MakeVarTable-Conditions/4 (/7 s.Mode#1/9 (/12 e.Index#1/10 )/13 e.Offsets#1/5 )/8 >/1
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
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.Index#1 as range 10
  // closed e.Offsets#1 as range 5
  //DEBUG: s.Mode#1: 9
  //DEBUG: e.Index#1: 10
  //DEBUG: e.Offsets#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Mode#1/9 AsIs: (/12 AsIs: e.Index#1/10 AsIs: )/13 } Tile{ HalfReuse: (/4 } Tile{ AsIs: e.Offsets#1/5 } Tile{ AsIs: )/8 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[7], context[1] );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[4], context[4] );
  res = refalrts::splice_evar( res, context[7], context[13] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MakeVarTablem_Conditions("MakeVarTable-Conditions", 2847441005U, 670997308U, func_MakeVarTablem_Conditions);


static refalrts::FnResult func_gen_GenResult_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & GenResult=1/4 s.ContextOffset#1/5 (/8 e.Result#1/6 )/9 e.PatternVars#2/2 >/1
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
  // closed e.Result#1 as range 6
  // closed e.PatternVars#2 as range 2
  //DEBUG: s.ContextOffset#1: 5
  //DEBUG: e.Result#1: 6
  //DEBUG: e.PatternVars#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenResult/4 } (/10 Tile{ AsIs: e.PatternVars#2/2 } )/11 (/12 )/13 (/14 )/15 Tile{ AsIs: s.ContextOffset#1/5 } </16 Tile{ HalfReuse: & CollectStrings/8 AsIs: e.Result#1/6 HalfReuse: >/9 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[10]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::alloc_open_bracket(vm, context[14]);
  refalrts::alloc_close_bracket(vm, context[15]);
  refalrts::alloc_open_call(vm, context[16]);
  refalrts::update_name(context[4], functions[efunc_DoGenResult]);
  refalrts::reinit_name(context[8], functions[efunc_CollectStrings]);
  refalrts::reinit_close_call(context[9]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[16] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[11], context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenResult_A1("GenResult=1", 2847441005U, 670997308U, func_gen_GenResult_A1);


static refalrts::FnResult func_GenResult(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & GenResult/4 s.ContextOffset#1/5 s.FnMakeVarTable#1/6 (/9 e.PatternVars#1/7 )/10 e.Result#1/2 >/1
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
  // closed e.PatternVars#1 as range 7
  // closed e.Result#1 as range 2
  //DEBUG: s.ContextOffset#1: 5
  //DEBUG: s.FnMakeVarTable#1: 6
  //DEBUG: e.PatternVars#1: 7
  //DEBUG: e.Result#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.FnMakeVarTable#1/6 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & GenResult=1/11 Tile{ AsIs: s.ContextOffset#1/5 } (/12 Tile{ AsIs: e.Result#1/2 } )/13 {*}/14 </15 & Map/16 Tile{ HalfReuse: s.FnMakeVarTable1 #6/9 AsIs: e.PatternVars#1/7 HalfReuse: >/10 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_GenResult_A1]);
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::alloc_unwrapped_closure(vm, context[14], context[4]);
  refalrts::alloc_open_call(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_Map]);
  refalrts::reinit_closure_head(context[4]);
  refalrts::reinit_svar( context[9], context[6] );
  refalrts::reinit_close_call(context[10]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[15] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[13], context[16] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  refalrts::wrap_closure( context[14] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenResult("GenResult", 2847441005U, 670997308U, func_GenResult);


static refalrts::FnResult func_DoGenResult(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 62 elems
  refalrts::Iter context[62];
  refalrts::zeros( context, 62 );
  // </0 & DoGenResult/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoGenResult/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 (/15 e.new#3/13 )/16 s.new#4/17 e.new#5/2 >/1
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
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  // closed e.new#3 as range 13
  if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#5 as range 2
  do {
    // </0 & DoGenResult/4 (/7 e.new#6/5 )/8 (/11 e.new#7/9 )/12 (/15 e.new#8/13 )/16 s.new#9/17 (/22 s.new#10/24 e.new#11/20 )/23 e.new#12/18 >/1
    context[18] = context[2];
    context[19] = context[3];
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_left( context[20], context[21], context[18], context[19] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    // closed e.new#6 as range 5
    // closed e.new#7 as range 9
    // closed e.new#8 as range 13
    // closed e.new#12 as range 18
    if( ! refalrts::svar_left( context[24], context[20], context[21] ) )
      continue;
    // closed e.new#11 as range 20
    do {
      // </0 & DoGenResult/4 (/7 e.new#13/5 )/8 (/11 e.new#14/9 )/12 (/15 e.new#15/13 )/16 s.new#16/17 (/22 s.new#17/24 s.new#18/27 e.new#19/25 )/23 e.new#20/18 >/1
      context[25] = context[20];
      context[26] = context[21];
      // closed e.new#13 as range 5
      // closed e.new#14 as range 9
      // closed e.new#15 as range 13
      // closed e.new#20 as range 18
      if( ! refalrts::svar_left( context[27], context[25], context[26] ) )
        continue;
      // closed e.new#19 as range 25
      do {
        // </0 & DoGenResult/4 (/7 e.new#21/5 )/8 (/11 e.new#22/9 )/12 (/15 e.new#23/13 )/16 s.new#24/17 (/22 s.new#25/24 s.new#26/27 )/23 e.new#27/18 >/1
        if( ! refalrts::empty_seq( context[25], context[26] ) )
          continue;
        // closed e.new#21 as range 5
        // closed e.new#22 as range 9
        // closed e.new#23 as range 13
        // closed e.new#27 as range 18
        do {
          // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/22 # TkOpenCallCond/24 s.Offset#1/27 )/23 e.Result#1/18 >/1
          if( ! refalrts::ident_term( identifiers[ident_TkOpenCallCond], context[24] ) )
            continue;
          // closed e.Vars#1 as range 5
          // closed e.AllocCommands#1 as range 9
          // closed e.Commands#1 as range 13
          // closed e.Result#1 as range 18
          //DEBUG: s.Counter#1: 17
          //DEBUG: s.Offset#1: 27
          //DEBUG: e.Vars#1: 5
          //DEBUG: e.AllocCommands#1: 9
          //DEBUG: e.Commands#1: 13
          //DEBUG: e.Result#1: 18

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdCreateElem/15 } # Allocate/28 s.Offset#1/27/29 # ElOpenCall/30 )/31 )/32 (/33 Tile{ AsIs: (/22 Reuse: # CmdInsertElem/24 AsIs: s.Offset#1/27 AsIs: )/23 } Tile{ AsIs: e.Commands#1/13 } Tile{ AsIs: )/16 AsIs: s.Counter#1/17 } Tile{ AsIs: e.Result#1/18 } Tile{ AsIs: >/1 ]] }
          refalrts::alloc_ident(vm, context[28], identifiers[ident_Allocate]);
          refalrts::copy_stvar(vm, context[29], context[27]);
          refalrts::alloc_ident(vm, context[30], identifiers[ident_ElOpenCall]);
          refalrts::alloc_close_bracket(vm, context[31]);
          refalrts::alloc_close_bracket(vm, context[32]);
          refalrts::alloc_open_bracket(vm, context[33]);
          refalrts::reinit_open_bracket(context[12]);
          refalrts::reinit_ident(context[15], identifiers[ident_CmdCreateElem]);
          refalrts::update_ident(context[24], identifiers[ident_CmdInsertElem]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[33], context[16] );
          refalrts::link_brackets( context[22], context[23] );
          refalrts::link_brackets( context[11], context[32] );
          refalrts::link_brackets( context[12], context[31] );
          refalrts::link_brackets( context[7], context[8] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[18], context[19] );
          res = refalrts::splice_evar( res, context[16], context[17] );
          res = refalrts::splice_evar( res, context[13], context[14] );
          res = refalrts::splice_evar( res, context[22], context[23] );
          res = refalrts::splice_evar( res, context[28], context[33] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/22 # TkCloseCallCond/24 s.Offset#1/27 )/23 e.Result#1/18 >/1
        if( ! refalrts::ident_term( identifiers[ident_TkCloseCallCond], context[24] ) )
          continue;
        // closed e.Vars#1 as range 5
        // closed e.AllocCommands#1 as range 9
        // closed e.Commands#1 as range 13
        // closed e.Result#1 as range 18
        //DEBUG: s.Counter#1: 17
        //DEBUG: s.Offset#1: 27
        //DEBUG: e.Vars#1: 5
        //DEBUG: e.AllocCommands#1: 9
        //DEBUG: e.Commands#1: 13
        //DEBUG: e.Result#1: 18

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdCreateElem/15 } # Allocate/28 s.Offset#1/27/29 # ElCloseCall/30 )/31 )/32 (/33 Tile{ AsIs: (/22 Reuse: # CmdPushStack/24 AsIs: s.Offset#1/27 AsIs: )/23 } (/34 # CmdPushStack/35 </36 & Dec/37 s.Offset#1/27/38 >/39 )/40 (/41 # CmdInsertElem/42 s.Offset#1/27/43 )/44 Tile{ AsIs: e.Commands#1/13 } Tile{ AsIs: )/16 AsIs: s.Counter#1/17 } Tile{ AsIs: e.Result#1/18 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_ident(vm, context[28], identifiers[ident_Allocate]);
        refalrts::copy_stvar(vm, context[29], context[27]);
        refalrts::alloc_ident(vm, context[30], identifiers[ident_ElCloseCall]);
        refalrts::alloc_close_bracket(vm, context[31]);
        refalrts::alloc_close_bracket(vm, context[32]);
        refalrts::alloc_open_bracket(vm, context[33]);
        refalrts::alloc_open_bracket(vm, context[34]);
        refalrts::alloc_ident(vm, context[35], identifiers[ident_CmdPushStack]);
        refalrts::alloc_open_call(vm, context[36]);
        refalrts::alloc_name(vm, context[37], functions[efunc_Dec]);
        refalrts::copy_stvar(vm, context[38], context[27]);
        refalrts::alloc_close_call(vm, context[39]);
        refalrts::alloc_close_bracket(vm, context[40]);
        refalrts::alloc_open_bracket(vm, context[41]);
        refalrts::alloc_ident(vm, context[42], identifiers[ident_CmdInsertElem]);
        refalrts::copy_stvar(vm, context[43], context[27]);
        refalrts::alloc_close_bracket(vm, context[44]);
        refalrts::reinit_open_bracket(context[12]);
        refalrts::reinit_ident(context[15], identifiers[ident_CmdCreateElem]);
        refalrts::update_ident(context[24], identifiers[ident_CmdPushStack]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[33], context[16] );
        refalrts::link_brackets( context[41], context[44] );
        refalrts::link_brackets( context[34], context[40] );
        refalrts::push_stack( vm, context[39] );
        refalrts::push_stack( vm, context[36] );
        refalrts::link_brackets( context[22], context[23] );
        refalrts::link_brackets( context[11], context[32] );
        refalrts::link_brackets( context[12], context[31] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[18], context[19] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[13], context[14] );
        res = refalrts::splice_evar( res, context[34], context[44] );
        res = refalrts::splice_evar( res, context[22], context[23] );
        res = refalrts::splice_evar( res, context[28], context[33] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoGenResult/4 (/7 e.new#21/5 )/8 (/11 e.new#22/9 )/12 (/15 e.new#23/13 )/16 s.new#24/17 (/22 # Symbol/24 s.new#25/27 e.new#26/25 )/23 e.new#27/18 >/1
      if( ! refalrts::ident_term( identifiers[ident_Symbol], context[24] ) )
        continue;
      // closed e.new#21 as range 5
      // closed e.new#22 as range 9
      // closed e.new#23 as range 13
      // closed e.new#26 as range 25
      // closed e.new#27 as range 18
      do {
        // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/22 # Symbol/24 # Char/27 s.Value#1/30 )/23 e.Result#1/18 >/1
        context[28] = context[25];
        context[29] = context[26];
        if( ! refalrts::ident_term( identifiers[ident_Char], context[27] ) )
          continue;
        // closed e.Vars#1 as range 5
        // closed e.AllocCommands#1 as range 9
        // closed e.Commands#1 as range 13
        // closed e.Result#1 as range 18
        if( ! refalrts::svar_left( context[30], context[28], context[29] ) )
          continue;
        if( ! refalrts::empty_seq( context[28], context[29] ) )
          continue;
        //DEBUG: s.Counter#1: 17
        //DEBUG: e.Vars#1: 5
        //DEBUG: e.AllocCommands#1: 9
        //DEBUG: e.Commands#1: 13
        //DEBUG: e.Result#1: 18
        //DEBUG: s.Value#1: 30

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdCreateElem/15 } Tile{ HalfReuse: # Allocate/22 HalfReuse: s.Counter1 #17/24 Reuse: # ElChar/27 AsIs: s.Value#1/30 AsIs: )/23 } )/31 (/32 (/33 Tile{ HalfReuse: # CmdInsertElem/16 AsIs: s.Counter#1/17 } )/34 Tile{ AsIs: e.Commands#1/13 } )/35 </36 & Inc/37 s.Counter#1/17/38 >/39 Tile{ AsIs: e.Result#1/18 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_close_bracket(vm, context[31]);
        refalrts::alloc_open_bracket(vm, context[32]);
        refalrts::alloc_open_bracket(vm, context[33]);
        refalrts::alloc_close_bracket(vm, context[34]);
        refalrts::alloc_close_bracket(vm, context[35]);
        refalrts::alloc_open_call(vm, context[36]);
        refalrts::alloc_name(vm, context[37], functions[efunc_Inc]);
        refalrts::copy_stvar(vm, context[38], context[17]);
        refalrts::alloc_close_call(vm, context[39]);
        refalrts::reinit_open_bracket(context[12]);
        refalrts::reinit_ident(context[15], identifiers[ident_CmdCreateElem]);
        refalrts::reinit_ident(context[22], identifiers[ident_Allocate]);
        refalrts::reinit_svar( context[24], context[17] );
        refalrts::update_ident(context[27], identifiers[ident_ElChar]);
        refalrts::reinit_ident(context[16], identifiers[ident_CmdInsertElem]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[39] );
        refalrts::push_stack( vm, context[36] );
        refalrts::link_brackets( context[32], context[35] );
        refalrts::link_brackets( context[33], context[34] );
        refalrts::link_brackets( context[11], context[31] );
        refalrts::link_brackets( context[12], context[23] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[18], context[19] );
        res = refalrts::splice_evar( res, context[35], context[39] );
        res = refalrts::splice_evar( res, context[13], context[14] );
        res = refalrts::splice_evar( res, context[34], context[34] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[31], context[33] );
        res = refalrts::splice_evar( res, context[22], context[23] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/22 # Symbol/24 # Name/27 e.Name#1/25 )/23 e.Result#1/18 >/1
        if( ! refalrts::ident_term( identifiers[ident_Name], context[27] ) )
          continue;
        // closed e.Vars#1 as range 5
        // closed e.AllocCommands#1 as range 9
        // closed e.Commands#1 as range 13
        // closed e.Name#1 as range 25
        // closed e.Result#1 as range 18
        //DEBUG: s.Counter#1: 17
        //DEBUG: e.Vars#1: 5
        //DEBUG: e.AllocCommands#1: 9
        //DEBUG: e.Commands#1: 13
        //DEBUG: e.Name#1: 25
        //DEBUG: e.Result#1: 18

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdCreateElem/15 } Tile{ HalfReuse: # Allocate/22 HalfReuse: s.Counter1 #17/24 Reuse: # ElName/27 AsIs: e.Name#1/25 AsIs: )/23 } )/28 (/29 (/30 Tile{ HalfReuse: # CmdInsertElem/16 AsIs: s.Counter#1/17 } )/31 Tile{ AsIs: e.Commands#1/13 } )/32 </33 & Inc/34 s.Counter#1/17/35 >/36 Tile{ AsIs: e.Result#1/18 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_close_bracket(vm, context[28]);
        refalrts::alloc_open_bracket(vm, context[29]);
        refalrts::alloc_open_bracket(vm, context[30]);
        refalrts::alloc_close_bracket(vm, context[31]);
        refalrts::alloc_close_bracket(vm, context[32]);
        refalrts::alloc_open_call(vm, context[33]);
        refalrts::alloc_name(vm, context[34], functions[efunc_Inc]);
        refalrts::copy_stvar(vm, context[35], context[17]);
        refalrts::alloc_close_call(vm, context[36]);
        refalrts::reinit_open_bracket(context[12]);
        refalrts::reinit_ident(context[15], identifiers[ident_CmdCreateElem]);
        refalrts::reinit_ident(context[22], identifiers[ident_Allocate]);
        refalrts::reinit_svar( context[24], context[17] );
        refalrts::update_ident(context[27], identifiers[ident_ElName]);
        refalrts::reinit_ident(context[16], identifiers[ident_CmdInsertElem]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[36] );
        refalrts::push_stack( vm, context[33] );
        refalrts::link_brackets( context[29], context[32] );
        refalrts::link_brackets( context[30], context[31] );
        refalrts::link_brackets( context[11], context[28] );
        refalrts::link_brackets( context[12], context[23] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[18], context[19] );
        res = refalrts::splice_evar( res, context[32], context[36] );
        res = refalrts::splice_evar( res, context[13], context[14] );
        res = refalrts::splice_evar( res, context[31], context[31] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[28], context[30] );
        res = refalrts::splice_evar( res, context[22], context[23] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/22 # Symbol/24 # Number/27 s.Number#1/30 )/23 e.Result#1/18 >/1
        context[28] = context[25];
        context[29] = context[26];
        if( ! refalrts::ident_term( identifiers[ident_Number], context[27] ) )
          continue;
        // closed e.Vars#1 as range 5
        // closed e.AllocCommands#1 as range 9
        // closed e.Commands#1 as range 13
        // closed e.Result#1 as range 18
        if( ! refalrts::svar_left( context[30], context[28], context[29] ) )
          continue;
        if( ! refalrts::empty_seq( context[28], context[29] ) )
          continue;
        //DEBUG: s.Counter#1: 17
        //DEBUG: e.Vars#1: 5
        //DEBUG: e.AllocCommands#1: 9
        //DEBUG: e.Commands#1: 13
        //DEBUG: e.Result#1: 18
        //DEBUG: s.Number#1: 30

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdCreateElem/15 } Tile{ HalfReuse: # Allocate/22 HalfReuse: s.Counter1 #17/24 Reuse: # ElNumber/27 AsIs: s.Number#1/30 AsIs: )/23 } )/31 (/32 (/33 Tile{ HalfReuse: # CmdInsertElem/16 AsIs: s.Counter#1/17 } )/34 Tile{ AsIs: e.Commands#1/13 } )/35 </36 & Inc/37 s.Counter#1/17/38 >/39 Tile{ AsIs: e.Result#1/18 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_close_bracket(vm, context[31]);
        refalrts::alloc_open_bracket(vm, context[32]);
        refalrts::alloc_open_bracket(vm, context[33]);
        refalrts::alloc_close_bracket(vm, context[34]);
        refalrts::alloc_close_bracket(vm, context[35]);
        refalrts::alloc_open_call(vm, context[36]);
        refalrts::alloc_name(vm, context[37], functions[efunc_Inc]);
        refalrts::copy_stvar(vm, context[38], context[17]);
        refalrts::alloc_close_call(vm, context[39]);
        refalrts::reinit_open_bracket(context[12]);
        refalrts::reinit_ident(context[15], identifiers[ident_CmdCreateElem]);
        refalrts::reinit_ident(context[22], identifiers[ident_Allocate]);
        refalrts::reinit_svar( context[24], context[17] );
        refalrts::update_ident(context[27], identifiers[ident_ElNumber]);
        refalrts::reinit_ident(context[16], identifiers[ident_CmdInsertElem]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[39] );
        refalrts::push_stack( vm, context[36] );
        refalrts::link_brackets( context[32], context[35] );
        refalrts::link_brackets( context[33], context[34] );
        refalrts::link_brackets( context[11], context[31] );
        refalrts::link_brackets( context[12], context[23] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[18], context[19] );
        res = refalrts::splice_evar( res, context[35], context[39] );
        res = refalrts::splice_evar( res, context[13], context[14] );
        res = refalrts::splice_evar( res, context[34], context[34] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[31], context[33] );
        res = refalrts::splice_evar( res, context[22], context[23] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/22 # Symbol/24 # Identifier/27 e.Name#1/25 )/23 e.Result#1/18 >/1
      if( ! refalrts::ident_term( identifiers[ident_Identifier], context[27] ) )
        continue;
      // closed e.Vars#1 as range 5
      // closed e.AllocCommands#1 as range 9
      // closed e.Commands#1 as range 13
      // closed e.Name#1 as range 25
      // closed e.Result#1 as range 18
      //DEBUG: s.Counter#1: 17
      //DEBUG: e.Vars#1: 5
      //DEBUG: e.AllocCommands#1: 9
      //DEBUG: e.Commands#1: 13
      //DEBUG: e.Name#1: 25
      //DEBUG: e.Result#1: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdCreateElem/15 } Tile{ HalfReuse: # Allocate/22 HalfReuse: s.Counter1 #17/24 Reuse: # ElIdent/27 AsIs: e.Name#1/25 AsIs: )/23 } )/28 (/29 (/30 Tile{ HalfReuse: # CmdInsertElem/16 AsIs: s.Counter#1/17 } )/31 Tile{ AsIs: e.Commands#1/13 } )/32 </33 & Inc/34 s.Counter#1/17/35 >/36 Tile{ AsIs: e.Result#1/18 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[28]);
      refalrts::alloc_open_bracket(vm, context[29]);
      refalrts::alloc_open_bracket(vm, context[30]);
      refalrts::alloc_close_bracket(vm, context[31]);
      refalrts::alloc_close_bracket(vm, context[32]);
      refalrts::alloc_open_call(vm, context[33]);
      refalrts::alloc_name(vm, context[34], functions[efunc_Inc]);
      refalrts::copy_stvar(vm, context[35], context[17]);
      refalrts::alloc_close_call(vm, context[36]);
      refalrts::reinit_open_bracket(context[12]);
      refalrts::reinit_ident(context[15], identifiers[ident_CmdCreateElem]);
      refalrts::reinit_ident(context[22], identifiers[ident_Allocate]);
      refalrts::reinit_svar( context[24], context[17] );
      refalrts::update_ident(context[27], identifiers[ident_ElIdent]);
      refalrts::reinit_ident(context[16], identifiers[ident_CmdInsertElem]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[36] );
      refalrts::push_stack( vm, context[33] );
      refalrts::link_brackets( context[29], context[32] );
      refalrts::link_brackets( context[30], context[31] );
      refalrts::link_brackets( context[11], context[28] );
      refalrts::link_brackets( context[12], context[23] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[32], context[36] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[31], context[31] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[28], context[30] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/22 # TkString/24 e.Chars#1/20 )/23 e.Result#1/18 >/1
      if( ! refalrts::ident_term( identifiers[ident_TkString], context[24] ) )
        continue;
      // closed e.Vars#1 as range 5
      // closed e.AllocCommands#1 as range 9
      // closed e.Commands#1 as range 13
      // closed e.Chars#1 as range 20
      // closed e.Result#1 as range 18
      //DEBUG: s.Counter#1: 17
      //DEBUG: e.Vars#1: 5
      //DEBUG: e.AllocCommands#1: 9
      //DEBUG: e.Commands#1: 13
      //DEBUG: e.Chars#1: 20
      //DEBUG: e.Result#1: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdCreateElem/15 } Tile{ HalfReuse: # Allocate/16 AsIs: s.Counter#1/17 HalfReuse: # ElString/22 } Tile{ AsIs: e.Chars#1/20 } )/25 )/26 (/27 (/28 Tile{ Reuse: # CmdInsertRange/24 } s.Counter#1/17/29 )/30 Tile{ AsIs: e.Commands#1/13 } )/31 </32 & Add/33 s.Counter#1/17/34 2/35 Tile{ HalfReuse: >/23 AsIs: e.Result#1/18 AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[25]);
      refalrts::alloc_close_bracket(vm, context[26]);
      refalrts::alloc_open_bracket(vm, context[27]);
      refalrts::alloc_open_bracket(vm, context[28]);
      refalrts::copy_stvar(vm, context[29], context[17]);
      refalrts::alloc_close_bracket(vm, context[30]);
      refalrts::alloc_close_bracket(vm, context[31]);
      refalrts::alloc_open_call(vm, context[32]);
      refalrts::alloc_name(vm, context[33], functions[efunc_Add]);
      refalrts::copy_stvar(vm, context[34], context[17]);
      refalrts::alloc_number(vm, context[35], 2UL);
      refalrts::reinit_open_bracket(context[12]);
      refalrts::reinit_ident(context[15], identifiers[ident_CmdCreateElem]);
      refalrts::reinit_ident(context[16], identifiers[ident_Allocate]);
      refalrts::reinit_ident(context[22], identifiers[ident_ElString]);
      refalrts::update_ident(context[24], identifiers[ident_CmdInsertRange]);
      refalrts::reinit_close_call(context[23]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[32] );
      refalrts::link_brackets( context[27], context[31] );
      refalrts::link_brackets( context[28], context[30] );
      refalrts::link_brackets( context[11], context[26] );
      refalrts::link_brackets( context[12], context[25] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[23];
      res = refalrts::splice_evar( res, context[31], context[35] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[29], context[30] );
      res = refalrts::splice_evar( res, context[24], context[24] );
      res = refalrts::splice_evar( res, context[25], context[28] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[16], context[22] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/22 # Brackets/24 e.InBrackets#1/20 )/23 e.Result#1/18 >/1
      if( ! refalrts::ident_term( identifiers[ident_Brackets], context[24] ) )
        continue;
      // closed e.Vars#1 as range 5
      // closed e.AllocCommands#1 as range 9
      // closed e.Commands#1 as range 13
      // closed e.InBrackets#1 as range 20
      // closed e.Result#1 as range 18
      //DEBUG: s.Counter#1: 17
      //DEBUG: e.Vars#1: 5
      //DEBUG: e.AllocCommands#1: 9
      //DEBUG: e.Commands#1: 13
      //DEBUG: e.InBrackets#1: 20
      //DEBUG: e.Result#1: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdCreateElem/15 } Tile{ HalfReuse: # Allocate/16 AsIs: s.Counter#1/17 HalfReuse: # ElOpenBracket/22 HalfReuse: )/24 } )/25 (/26 (/27 # CmdInsertElem/28 s.Counter#1/17/29 )/30 Tile{ AsIs: e.Commands#1/13 } )/31 </32 & Inc/33 s.Counter#1/17/34 >/35 Tile{ AsIs: e.InBrackets#1/20 } (/36 # TkCloseBracket/37 s.Counter#1/17/38 Tile{ AsIs: )/23 AsIs: e.Result#1/18 AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[25]);
      refalrts::alloc_open_bracket(vm, context[26]);
      refalrts::alloc_open_bracket(vm, context[27]);
      refalrts::alloc_ident(vm, context[28], identifiers[ident_CmdInsertElem]);
      refalrts::copy_stvar(vm, context[29], context[17]);
      refalrts::alloc_close_bracket(vm, context[30]);
      refalrts::alloc_close_bracket(vm, context[31]);
      refalrts::alloc_open_call(vm, context[32]);
      refalrts::alloc_name(vm, context[33], functions[efunc_Inc]);
      refalrts::copy_stvar(vm, context[34], context[17]);
      refalrts::alloc_close_call(vm, context[35]);
      refalrts::alloc_open_bracket(vm, context[36]);
      refalrts::alloc_ident(vm, context[37], identifiers[ident_TkCloseBracket]);
      refalrts::copy_stvar(vm, context[38], context[17]);
      refalrts::reinit_open_bracket(context[12]);
      refalrts::reinit_ident(context[15], identifiers[ident_CmdCreateElem]);
      refalrts::reinit_ident(context[16], identifiers[ident_Allocate]);
      refalrts::reinit_ident(context[22], identifiers[ident_ElOpenBracket]);
      refalrts::reinit_close_bracket(context[24]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[36], context[23] );
      refalrts::push_stack( vm, context[35] );
      refalrts::push_stack( vm, context[32] );
      refalrts::link_brackets( context[26], context[31] );
      refalrts::link_brackets( context[27], context[30] );
      refalrts::link_brackets( context[11], context[25] );
      refalrts::link_brackets( context[12], context[24] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[23];
      res = refalrts::splice_evar( res, context[36], context[38] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[31], context[35] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[25], context[30] );
      res = refalrts::splice_evar( res, context[16], context[24] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/22 # CallBrackets/24 e.InBrackets#1/20 )/23 e.Result#1/18 >/1
      if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[24] ) )
        continue;
      // closed e.Vars#1 as range 5
      // closed e.AllocCommands#1 as range 9
      // closed e.Commands#1 as range 13
      // closed e.InBrackets#1 as range 20
      // closed e.Result#1 as range 18
      //DEBUG: s.Counter#1: 17
      //DEBUG: e.Vars#1: 5
      //DEBUG: e.AllocCommands#1: 9
      //DEBUG: e.Commands#1: 13
      //DEBUG: e.InBrackets#1: 20
      //DEBUG: e.Result#1: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdCreateElem/15 } Tile{ HalfReuse: # Allocate/16 AsIs: s.Counter#1/17 HalfReuse: # ElOpenCall/22 HalfReuse: )/24 } )/25 (/26 (/27 # CmdInsertElem/28 s.Counter#1/17/29 )/30 Tile{ AsIs: e.Commands#1/13 } )/31 </32 & Inc/33 s.Counter#1/17/34 >/35 Tile{ AsIs: e.InBrackets#1/20 } (/36 # TkCloseCall/37 s.Counter#1/17/38 Tile{ AsIs: )/23 AsIs: e.Result#1/18 AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[25]);
      refalrts::alloc_open_bracket(vm, context[26]);
      refalrts::alloc_open_bracket(vm, context[27]);
      refalrts::alloc_ident(vm, context[28], identifiers[ident_CmdInsertElem]);
      refalrts::copy_stvar(vm, context[29], context[17]);
      refalrts::alloc_close_bracket(vm, context[30]);
      refalrts::alloc_close_bracket(vm, context[31]);
      refalrts::alloc_open_call(vm, context[32]);
      refalrts::alloc_name(vm, context[33], functions[efunc_Inc]);
      refalrts::copy_stvar(vm, context[34], context[17]);
      refalrts::alloc_close_call(vm, context[35]);
      refalrts::alloc_open_bracket(vm, context[36]);
      refalrts::alloc_ident(vm, context[37], identifiers[ident_TkCloseCall]);
      refalrts::copy_stvar(vm, context[38], context[17]);
      refalrts::reinit_open_bracket(context[12]);
      refalrts::reinit_ident(context[15], identifiers[ident_CmdCreateElem]);
      refalrts::reinit_ident(context[16], identifiers[ident_Allocate]);
      refalrts::reinit_ident(context[22], identifiers[ident_ElOpenCall]);
      refalrts::reinit_close_bracket(context[24]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[36], context[23] );
      refalrts::push_stack( vm, context[35] );
      refalrts::push_stack( vm, context[32] );
      refalrts::link_brackets( context[26], context[31] );
      refalrts::link_brackets( context[27], context[30] );
      refalrts::link_brackets( context[11], context[25] );
      refalrts::link_brackets( context[12], context[24] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[23];
      res = refalrts::splice_evar( res, context[36], context[38] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[31], context[35] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[25], context[30] );
      res = refalrts::splice_evar( res, context[16], context[24] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/22 # ADT-Brackets/24 (/29 e.Name#1/27 )/30 e.InBrackets#1/25 )/23 e.Result#1/18 >/1
      context[25] = context[20];
      context[26] = context[21];
      if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[24] ) )
        continue;
      context[27] = 0;
      context[28] = 0;
      context[29] = refalrts::brackets_left( context[27], context[28], context[25], context[26] );
      if( ! context[29] )
        continue;
      refalrts::bracket_pointers(context[29], context[30]);
      // closed e.Vars#1 as range 5
      // closed e.AllocCommands#1 as range 9
      // closed e.Commands#1 as range 13
      // closed e.Name#1 as range 27
      // closed e.InBrackets#1 as range 25
      // closed e.Result#1 as range 18
      //DEBUG: s.Counter#1: 17
      //DEBUG: e.Vars#1: 5
      //DEBUG: e.AllocCommands#1: 9
      //DEBUG: e.Commands#1: 13
      //DEBUG: e.Name#1: 27
      //DEBUG: e.InBrackets#1: 25
      //DEBUG: e.Result#1: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdCreateElem/15 } # Allocate/31 s.Counter#1/17/32 # ElOpenADT/33 )/34 )/35 (/36 (/37 # CmdInsertElem/38 s.Counter#1/17/39 )/40 Tile{ AsIs: e.Commands#1/13 } )/41 </42 Tile{ HalfReuse: & Inc/16 AsIs: s.Counter#1/17 } >/43 Tile{ AsIs: (/22 Reuse: # Symbol/24 HalfReuse: # Name/29 AsIs: e.Name#1/27 AsIs: )/30 AsIs: e.InBrackets#1/25 HalfReuse: (/23 } # TkCloseADT/44 s.Counter#1/17/45 )/46 Tile{ AsIs: e.Result#1/18 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[31], identifiers[ident_Allocate]);
      refalrts::copy_stvar(vm, context[32], context[17]);
      refalrts::alloc_ident(vm, context[33], identifiers[ident_ElOpenADT]);
      refalrts::alloc_close_bracket(vm, context[34]);
      refalrts::alloc_close_bracket(vm, context[35]);
      refalrts::alloc_open_bracket(vm, context[36]);
      refalrts::alloc_open_bracket(vm, context[37]);
      refalrts::alloc_ident(vm, context[38], identifiers[ident_CmdInsertElem]);
      refalrts::copy_stvar(vm, context[39], context[17]);
      refalrts::alloc_close_bracket(vm, context[40]);
      refalrts::alloc_close_bracket(vm, context[41]);
      refalrts::alloc_open_call(vm, context[42]);
      refalrts::alloc_close_call(vm, context[43]);
      refalrts::alloc_ident(vm, context[44], identifiers[ident_TkCloseADT]);
      refalrts::copy_stvar(vm, context[45], context[17]);
      refalrts::alloc_close_bracket(vm, context[46]);
      refalrts::reinit_open_bracket(context[12]);
      refalrts::reinit_ident(context[15], identifiers[ident_CmdCreateElem]);
      refalrts::reinit_name(context[16], functions[efunc_Inc]);
      refalrts::update_ident(context[24], identifiers[ident_Symbol]);
      refalrts::reinit_ident(context[29], identifiers[ident_Name]);
      refalrts::reinit_open_bracket(context[23]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[23], context[46] );
      refalrts::link_brackets( context[22], context[30] );
      refalrts::push_stack( vm, context[43] );
      refalrts::push_stack( vm, context[42] );
      refalrts::link_brackets( context[36], context[41] );
      refalrts::link_brackets( context[37], context[40] );
      refalrts::link_brackets( context[11], context[35] );
      refalrts::link_brackets( context[12], context[34] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[44], context[46] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[43], context[43] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[41], context[42] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[31], context[40] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/22 # ClosureBrackets/24 e.InBrackets#1/20 )/23 e.Result#1/18 >/1
      if( ! refalrts::ident_term( identifiers[ident_ClosureBrackets], context[24] ) )
        continue;
      // closed e.Vars#1 as range 5
      // closed e.AllocCommands#1 as range 9
      // closed e.Commands#1 as range 13
      // closed e.InBrackets#1 as range 20
      // closed e.Result#1 as range 18
      //DEBUG: s.Counter#1: 17
      //DEBUG: e.Vars#1: 5
      //DEBUG: e.AllocCommands#1: 9
      //DEBUG: e.Commands#1: 13
      //DEBUG: e.InBrackets#1: 20
      //DEBUG: e.Result#1: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdCreateElem/15 } Tile{ HalfReuse: # Allocate/16 AsIs: s.Counter#1/17 HalfReuse: # ElClosureHead/22 HalfReuse: )/24 } )/25 (/26 (/27 # CmdInsertElem/28 s.Counter#1/17/29 )/30 Tile{ AsIs: e.Commands#1/13 } )/31 </32 & Inc/33 s.Counter#1/17/34 >/35 Tile{ AsIs: e.InBrackets#1/20 } (/36 # TkUnwrappedClosure/37 s.Counter#1/17/38 Tile{ AsIs: )/23 AsIs: e.Result#1/18 AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[25]);
      refalrts::alloc_open_bracket(vm, context[26]);
      refalrts::alloc_open_bracket(vm, context[27]);
      refalrts::alloc_ident(vm, context[28], identifiers[ident_CmdInsertElem]);
      refalrts::copy_stvar(vm, context[29], context[17]);
      refalrts::alloc_close_bracket(vm, context[30]);
      refalrts::alloc_close_bracket(vm, context[31]);
      refalrts::alloc_open_call(vm, context[32]);
      refalrts::alloc_name(vm, context[33], functions[efunc_Inc]);
      refalrts::copy_stvar(vm, context[34], context[17]);
      refalrts::alloc_close_call(vm, context[35]);
      refalrts::alloc_open_bracket(vm, context[36]);
      refalrts::alloc_ident(vm, context[37], identifiers[ident_TkUnwrappedClosure]);
      refalrts::copy_stvar(vm, context[38], context[17]);
      refalrts::reinit_open_bracket(context[12]);
      refalrts::reinit_ident(context[15], identifiers[ident_CmdCreateElem]);
      refalrts::reinit_ident(context[16], identifiers[ident_Allocate]);
      refalrts::reinit_ident(context[22], identifiers[ident_ElClosureHead]);
      refalrts::reinit_close_bracket(context[24]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[36], context[23] );
      refalrts::push_stack( vm, context[35] );
      refalrts::push_stack( vm, context[32] );
      refalrts::link_brackets( context[26], context[31] );
      refalrts::link_brackets( context[27], context[30] );
      refalrts::link_brackets( context[11], context[25] );
      refalrts::link_brackets( context[12], context[24] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[23];
      res = refalrts::splice_evar( res, context[36], context[38] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[31], context[35] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[25], context[30] );
      res = refalrts::splice_evar( res, context[16], context[24] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoGenResult/4 (/7 e.new#13/5 )/8 (/11 e.new#14/9 )/12 (/15 e.new#15/13 )/16 s.new#16/17 (/22 s.new#17/24 s.new#18/27 e.new#19/25 )/23 e.new#20/18 >/1
    context[25] = context[20];
    context[26] = context[21];
    // closed e.new#13 as range 5
    // closed e.new#14 as range 9
    // closed e.new#15 as range 13
    // closed e.new#20 as range 18
    if( ! refalrts::svar_left( context[27], context[25], context[26] ) )
      continue;
    // closed e.new#19 as range 25
    do {
      // </0 & DoGenResult/4 (/7 e.new#21/5 )/8 (/11 e.new#22/9 )/12 (/15 e.new#23/13 )/16 s.new#24/17 (/22 s.new#25/24 s.new#26/27 )/23 e.new#27/18 >/1
      if( ! refalrts::empty_seq( context[25], context[26] ) )
        continue;
      // closed e.new#21 as range 5
      // closed e.new#22 as range 9
      // closed e.new#23 as range 13
      // closed e.new#27 as range 18
      do {
        // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/22 # TkCloseBracket/24 s.OpenCounter#1/27 )/23 e.Result#1/18 >/1
        if( ! refalrts::ident_term( identifiers[ident_TkCloseBracket], context[24] ) )
          continue;
        // closed e.Vars#1 as range 5
        // closed e.AllocCommands#1 as range 9
        // closed e.Commands#1 as range 13
        // closed e.Result#1 as range 18
        //DEBUG: s.Counter#1: 17
        //DEBUG: s.OpenCounter#1: 27
        //DEBUG: e.Vars#1: 5
        //DEBUG: e.AllocCommands#1: 9
        //DEBUG: e.Commands#1: 13
        //DEBUG: e.Result#1: 18

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdCreateElem/15 } # Allocate/28 s.Counter#1/17/29 # ElCloseBracket/30 )/31 )/32 (/33 Tile{ AsIs: (/22 Reuse: # CmdLinkBrackets/24 AsIs: s.OpenCounter#1/27 } s.Counter#1/17/34 )/35 (/36 Tile{ HalfReuse: # CmdInsertElem/16 AsIs: s.Counter#1/17 } )/37 Tile{ AsIs: e.Commands#1/13 } )/38 </39 & Inc/40 s.Counter#1/17/41 Tile{ HalfReuse: >/23 AsIs: e.Result#1/18 AsIs: >/1 ]] }
        refalrts::alloc_ident(vm, context[28], identifiers[ident_Allocate]);
        refalrts::copy_stvar(vm, context[29], context[17]);
        refalrts::alloc_ident(vm, context[30], identifiers[ident_ElCloseBracket]);
        refalrts::alloc_close_bracket(vm, context[31]);
        refalrts::alloc_close_bracket(vm, context[32]);
        refalrts::alloc_open_bracket(vm, context[33]);
        refalrts::copy_stvar(vm, context[34], context[17]);
        refalrts::alloc_close_bracket(vm, context[35]);
        refalrts::alloc_open_bracket(vm, context[36]);
        refalrts::alloc_close_bracket(vm, context[37]);
        refalrts::alloc_close_bracket(vm, context[38]);
        refalrts::alloc_open_call(vm, context[39]);
        refalrts::alloc_name(vm, context[40], functions[efunc_Inc]);
        refalrts::copy_stvar(vm, context[41], context[17]);
        refalrts::reinit_open_bracket(context[12]);
        refalrts::reinit_ident(context[15], identifiers[ident_CmdCreateElem]);
        refalrts::update_ident(context[24], identifiers[ident_CmdLinkBrackets]);
        refalrts::reinit_ident(context[16], identifiers[ident_CmdInsertElem]);
        refalrts::reinit_close_call(context[23]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[23] );
        refalrts::push_stack( vm, context[39] );
        refalrts::link_brackets( context[33], context[38] );
        refalrts::link_brackets( context[36], context[37] );
        refalrts::link_brackets( context[22], context[35] );
        refalrts::link_brackets( context[11], context[32] );
        refalrts::link_brackets( context[12], context[31] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[23];
        res = refalrts::splice_evar( res, context[38], context[41] );
        res = refalrts::splice_evar( res, context[13], context[14] );
        res = refalrts::splice_evar( res, context[37], context[37] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[34], context[36] );
        res = refalrts::splice_evar( res, context[22], context[27] );
        res = refalrts::splice_evar( res, context[28], context[33] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/22 # TkCloseADT/24 s.OpenCounter#1/27 )/23 e.Result#1/18 >/1
        if( ! refalrts::ident_term( identifiers[ident_TkCloseADT], context[24] ) )
          continue;
        // closed e.Vars#1 as range 5
        // closed e.AllocCommands#1 as range 9
        // closed e.Commands#1 as range 13
        // closed e.Result#1 as range 18
        //DEBUG: s.Counter#1: 17
        //DEBUG: s.OpenCounter#1: 27
        //DEBUG: e.Vars#1: 5
        //DEBUG: e.AllocCommands#1: 9
        //DEBUG: e.Commands#1: 13
        //DEBUG: e.Result#1: 18

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdCreateElem/15 } # Allocate/28 s.Counter#1/17/29 # ElCloseADT/30 )/31 )/32 (/33 Tile{ AsIs: (/22 Reuse: # CmdLinkBrackets/24 AsIs: s.OpenCounter#1/27 } s.Counter#1/17/34 )/35 (/36 Tile{ HalfReuse: # CmdInsertElem/16 AsIs: s.Counter#1/17 } )/37 Tile{ AsIs: e.Commands#1/13 } )/38 </39 & Inc/40 s.Counter#1/17/41 Tile{ HalfReuse: >/23 AsIs: e.Result#1/18 AsIs: >/1 ]] }
        refalrts::alloc_ident(vm, context[28], identifiers[ident_Allocate]);
        refalrts::copy_stvar(vm, context[29], context[17]);
        refalrts::alloc_ident(vm, context[30], identifiers[ident_ElCloseADT]);
        refalrts::alloc_close_bracket(vm, context[31]);
        refalrts::alloc_close_bracket(vm, context[32]);
        refalrts::alloc_open_bracket(vm, context[33]);
        refalrts::copy_stvar(vm, context[34], context[17]);
        refalrts::alloc_close_bracket(vm, context[35]);
        refalrts::alloc_open_bracket(vm, context[36]);
        refalrts::alloc_close_bracket(vm, context[37]);
        refalrts::alloc_close_bracket(vm, context[38]);
        refalrts::alloc_open_call(vm, context[39]);
        refalrts::alloc_name(vm, context[40], functions[efunc_Inc]);
        refalrts::copy_stvar(vm, context[41], context[17]);
        refalrts::reinit_open_bracket(context[12]);
        refalrts::reinit_ident(context[15], identifiers[ident_CmdCreateElem]);
        refalrts::update_ident(context[24], identifiers[ident_CmdLinkBrackets]);
        refalrts::reinit_ident(context[16], identifiers[ident_CmdInsertElem]);
        refalrts::reinit_close_call(context[23]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[23] );
        refalrts::push_stack( vm, context[39] );
        refalrts::link_brackets( context[33], context[38] );
        refalrts::link_brackets( context[36], context[37] );
        refalrts::link_brackets( context[22], context[35] );
        refalrts::link_brackets( context[11], context[32] );
        refalrts::link_brackets( context[12], context[31] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[23];
        res = refalrts::splice_evar( res, context[38], context[41] );
        res = refalrts::splice_evar( res, context[13], context[14] );
        res = refalrts::splice_evar( res, context[37], context[37] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[34], context[36] );
        res = refalrts::splice_evar( res, context[22], context[27] );
        res = refalrts::splice_evar( res, context[28], context[33] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/22 # TkCloseCall/24 s.OpenCounter#1/27 )/23 e.Result#1/18 >/1
        if( ! refalrts::ident_term( identifiers[ident_TkCloseCall], context[24] ) )
          continue;
        // closed e.Vars#1 as range 5
        // closed e.AllocCommands#1 as range 9
        // closed e.Commands#1 as range 13
        // closed e.Result#1 as range 18
        //DEBUG: s.Counter#1: 17
        //DEBUG: s.OpenCounter#1: 27
        //DEBUG: e.Vars#1: 5
        //DEBUG: e.AllocCommands#1: 9
        //DEBUG: e.Commands#1: 13
        //DEBUG: e.Result#1: 18

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdCreateElem/15 } Tile{ HalfReuse: # Allocate/16 AsIs: s.Counter#1/17 } # ElCloseCall/28 )/29 )/30 (/31 (/32 # CmdPushStack/33 s.Counter#1/17/34 )/35 Tile{ AsIs: (/22 Reuse: # CmdPushStack/24 AsIs: s.OpenCounter#1/27 AsIs: )/23 } (/36 # CmdInsertElem/37 s.Counter#1/17/38 )/39 Tile{ AsIs: e.Commands#1/13 } )/40 </41 & Inc/42 s.Counter#1/17/43 >/44 Tile{ AsIs: e.Result#1/18 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_ident(vm, context[28], identifiers[ident_ElCloseCall]);
        refalrts::alloc_close_bracket(vm, context[29]);
        refalrts::alloc_close_bracket(vm, context[30]);
        refalrts::alloc_open_bracket(vm, context[31]);
        refalrts::alloc_open_bracket(vm, context[32]);
        refalrts::alloc_ident(vm, context[33], identifiers[ident_CmdPushStack]);
        refalrts::copy_stvar(vm, context[34], context[17]);
        refalrts::alloc_close_bracket(vm, context[35]);
        refalrts::alloc_open_bracket(vm, context[36]);
        refalrts::alloc_ident(vm, context[37], identifiers[ident_CmdInsertElem]);
        refalrts::copy_stvar(vm, context[38], context[17]);
        refalrts::alloc_close_bracket(vm, context[39]);
        refalrts::alloc_close_bracket(vm, context[40]);
        refalrts::alloc_open_call(vm, context[41]);
        refalrts::alloc_name(vm, context[42], functions[efunc_Inc]);
        refalrts::copy_stvar(vm, context[43], context[17]);
        refalrts::alloc_close_call(vm, context[44]);
        refalrts::reinit_open_bracket(context[12]);
        refalrts::reinit_ident(context[15], identifiers[ident_CmdCreateElem]);
        refalrts::reinit_ident(context[16], identifiers[ident_Allocate]);
        refalrts::update_ident(context[24], identifiers[ident_CmdPushStack]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[44] );
        refalrts::push_stack( vm, context[41] );
        refalrts::link_brackets( context[31], context[40] );
        refalrts::link_brackets( context[36], context[39] );
        refalrts::link_brackets( context[22], context[23] );
        refalrts::link_brackets( context[32], context[35] );
        refalrts::link_brackets( context[11], context[30] );
        refalrts::link_brackets( context[12], context[29] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[18], context[19] );
        res = refalrts::splice_evar( res, context[40], context[44] );
        res = refalrts::splice_evar( res, context[13], context[14] );
        res = refalrts::splice_evar( res, context[36], context[39] );
        res = refalrts::splice_evar( res, context[22], context[23] );
        res = refalrts::splice_evar( res, context[28], context[35] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/22 # TkUnwrappedClosure/24 s.HeadCounter#1/27 )/23 e.Result#1/18 >/1
      if( ! refalrts::ident_term( identifiers[ident_TkUnwrappedClosure], context[24] ) )
        continue;
      // closed e.Vars#1 as range 5
      // closed e.AllocCommands#1 as range 9
      // closed e.Commands#1 as range 13
      // closed e.Result#1 as range 18
      //DEBUG: s.Counter#1: 17
      //DEBUG: s.HeadCounter#1: 27
      //DEBUG: e.Vars#1: 5
      //DEBUG: e.AllocCommands#1: 9
      //DEBUG: e.Commands#1: 13
      //DEBUG: e.Result#1: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.HeadCounter#1/27 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdCreateElem/15 } Tile{ HalfReuse: # Allocate/16 AsIs: s.Counter#1/17 HalfReuse: # ElUnwrappedClosure/22 HalfReuse: s.HeadCounter1 #27/24 } )/28 )/29 (/30 (/31 # CmdInsertElem/32 s.Counter#1/17/33 )/34 Tile{ AsIs: e.Commands#1/13 } (/35 # CmdWrapClosure/36 s.Counter#1/17/37 )/38 )/39 </40 & Inc/41 s.Counter#1/17/42 Tile{ HalfReuse: >/23 AsIs: e.Result#1/18 AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[28]);
      refalrts::alloc_close_bracket(vm, context[29]);
      refalrts::alloc_open_bracket(vm, context[30]);
      refalrts::alloc_open_bracket(vm, context[31]);
      refalrts::alloc_ident(vm, context[32], identifiers[ident_CmdInsertElem]);
      refalrts::copy_stvar(vm, context[33], context[17]);
      refalrts::alloc_close_bracket(vm, context[34]);
      refalrts::alloc_open_bracket(vm, context[35]);
      refalrts::alloc_ident(vm, context[36], identifiers[ident_CmdWrapClosure]);
      refalrts::copy_stvar(vm, context[37], context[17]);
      refalrts::alloc_close_bracket(vm, context[38]);
      refalrts::alloc_close_bracket(vm, context[39]);
      refalrts::alloc_open_call(vm, context[40]);
      refalrts::alloc_name(vm, context[41], functions[efunc_Inc]);
      refalrts::copy_stvar(vm, context[42], context[17]);
      refalrts::reinit_open_bracket(context[12]);
      refalrts::reinit_ident(context[15], identifiers[ident_CmdCreateElem]);
      refalrts::reinit_ident(context[16], identifiers[ident_Allocate]);
      refalrts::reinit_ident(context[22], identifiers[ident_ElUnwrappedClosure]);
      refalrts::reinit_svar( context[24], context[27] );
      refalrts::reinit_close_call(context[23]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[40] );
      refalrts::link_brackets( context[30], context[39] );
      refalrts::link_brackets( context[35], context[38] );
      refalrts::link_brackets( context[31], context[34] );
      refalrts::link_brackets( context[11], context[29] );
      refalrts::link_brackets( context[12], context[28] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[23];
      res = refalrts::splice_evar( res, context[35], context[42] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[28], context[34] );
      res = refalrts::splice_evar( res, context[16], context[24] );
      refalrts::splice_to_freelist_open( vm, context[15], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoGenResult/4 (/7 e.new#21/5 )/8 (/11 e.new#22/9 )/12 (/15 e.new#23/13 )/16 s.new#24/17 (/22 # TkVariable/24 s.new#25/27 e.new#26/25 )/23 e.new#27/18 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[24] ) )
      continue;
    // closed e.new#21 as range 5
    // closed e.new#22 as range 9
    // closed e.new#23 as range 13
    // closed e.new#26 as range 25
    // closed e.new#27 as range 18
    do {
      // </0 & DoGenResult/4 (/7 e.Vars-B#1/30 (/36 s.Mode#1/38 (/41 e.Index#1/47 )/42 (/45 e.ResultVars#1/43 )/46 s.NextPatternVar#1/49 e.PatternVars#1/34 )/37 e.Vars-E#1/32 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/22 # TkVariable/24 s.Mode#1/27 e.Index#1/25 )/23 e.Result#1/18 >/1
      context[28] = context[5];
      context[29] = context[6];
      // closed e.AllocCommands#1 as range 9
      // closed e.Commands#1 as range 13
      // closed e.Index#1 as range 25
      // closed e.Result#1 as range 18
      context[30] = 0;
      context[31] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[32] = context[28];
        context[33] = context[29];
        context[34] = 0;
        context[35] = 0;
        context[36] = refalrts::brackets_left( context[34], context[35], context[32], context[33] );
        if( ! context[36] )
          continue;
        refalrts::bracket_pointers(context[36], context[37]);
        if( ! refalrts::repeated_stvar_left( vm, context[38], context[27], context[34], context[35] ) )
          continue;
        context[39] = 0;
        context[40] = 0;
        context[41] = refalrts::brackets_left( context[39], context[40], context[34], context[35] );
        if( ! context[41] )
          continue;
        refalrts::bracket_pointers(context[41], context[42]);
        context[43] = 0;
        context[44] = 0;
        context[45] = refalrts::brackets_left( context[43], context[44], context[34], context[35] );
        if( ! context[45] )
          continue;
        refalrts::bracket_pointers(context[45], context[46]);
        if( ! refalrts::repeated_evar_left( vm, context[47], context[48], context[25], context[26], context[39], context[40] ) )
          continue;
        if( ! refalrts::empty_seq( context[39], context[40] ) )
          continue;
        // closed e.ResultVars#1 as range 43
        // closed e.Vars-E#1 as range 32
        if( ! refalrts::svar_left( context[49], context[34], context[35] ) )
          continue;
        // closed e.PatternVars#1 as range 34
        //DEBUG: s.Counter#1: 17
        //DEBUG: s.Mode#1: 27
        //DEBUG: e.AllocCommands#1: 9
        //DEBUG: e.Commands#1: 13
        //DEBUG: e.Index#1: 25
        //DEBUG: e.Result#1: 18
        //DEBUG: e.Vars-B#1: 30
        //DEBUG: e.ResultVars#1: 43
        //DEBUG: e.Vars-E#1: 32
        //DEBUG: s.NextPatternVar#1: 49
        //DEBUG: e.PatternVars#1: 34

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Counter#1/17 {REMOVED TILE} e.Index#1/25 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars-B#1/30 AsIs: (/36 AsIs: s.Mode#1/38 AsIs: (/41 AsIs: e.Index#1/47 AsIs: )/42 AsIs: (/45 AsIs: e.ResultVars#1/43 HalfReuse: s.NextPatternVar1 #49/46 } Tile{ AsIs: )/16 } Tile{ AsIs: e.PatternVars#1/34 } Tile{ AsIs: )/37 AsIs: e.Vars-E#1/32 AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 AsIs: )/12 AsIs: (/15 } Tile{ AsIs: (/22 Reuse: # CmdInsertVar/24 AsIs: s.Mode#1/27 } Tile{ AsIs: s.NextPatternVar#1/49 } )/50 Tile{ AsIs: e.Commands#1/13 } )/51 Tile{ HalfReuse: s.Counter1 #17/23 AsIs: e.Result#1/18 AsIs: >/1 ]] }
        refalrts::alloc_close_bracket(vm, context[50]);
        refalrts::alloc_close_bracket(vm, context[51]);
        refalrts::reinit_svar( context[46], context[49] );
        refalrts::update_ident(context[24], identifiers[ident_CmdInsertVar]);
        refalrts::reinit_svar( context[23], context[17] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[15], context[51] );
        refalrts::link_brackets( context[22], context[50] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[36], context[37] );
        refalrts::link_brackets( context[45], context[16] );
        refalrts::link_brackets( context[41], context[42] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[23];
        res = refalrts::splice_evar( res, context[51], context[51] );
        res = refalrts::splice_evar( res, context[13], context[14] );
        res = refalrts::splice_evar( res, context[50], context[50] );
        res = refalrts::splice_evar( res, context[49], context[49] );
        res = refalrts::splice_evar( res, context[22], context[27] );
        res = refalrts::splice_evar( res, context[37], context[15] );
        res = refalrts::splice_evar( res, context[34], context[35] );
        res = refalrts::splice_evar( res, context[16], context[16] );
        refalrts::splice_to_freelist_open( vm, context[46], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[30], context[31], context[28], context[29] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoGenResult/4 (/7 e.Vars-B#1/30 (/36 s.Mode#1/46 (/44 e.Index#1/47 )/45 (/40 e.ResultVars#1/38 s.Sample#1/49 )/41 )/37 e.Vars-E#1/32 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 (/22 # TkVariable/24 s.Mode#1/27 e.Index#1/25 )/23 e.Result#1/18 >/1
    context[28] = context[5];
    context[29] = context[6];
    // closed e.AllocCommands#1 as range 9
    // closed e.Commands#1 as range 13
    // closed e.Index#1 as range 25
    // closed e.Result#1 as range 18
    context[30] = 0;
    context[31] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[32] = context[28];
      context[33] = context[29];
      context[34] = 0;
      context[35] = 0;
      context[36] = refalrts::brackets_left( context[34], context[35], context[32], context[33] );
      if( ! context[36] )
        continue;
      refalrts::bracket_pointers(context[36], context[37]);
      context[38] = 0;
      context[39] = 0;
      context[40] = refalrts::brackets_right( context[38], context[39], context[34], context[35] );
      if( ! context[40] )
        continue;
      refalrts::bracket_pointers(context[40], context[41]);
      context[42] = 0;
      context[43] = 0;
      context[44] = refalrts::brackets_right( context[42], context[43], context[34], context[35] );
      if( ! context[44] )
        continue;
      refalrts::bracket_pointers(context[44], context[45]);
      if( ! refalrts::repeated_stvar_left( vm, context[46], context[27], context[34], context[35] ) )
        continue;
      if( ! refalrts::empty_seq( context[34], context[35] ) )
        continue;
      if( ! refalrts::repeated_evar_left( vm, context[47], context[48], context[25], context[26], context[42], context[43] ) )
        continue;
      if( ! refalrts::empty_seq( context[42], context[43] ) )
        continue;
      // closed e.Vars-E#1 as range 32
      if( ! refalrts::svar_right( context[49], context[38], context[39] ) )
        continue;
      // closed e.ResultVars#1 as range 38
      //DEBUG: s.Counter#1: 17
      //DEBUG: s.Mode#1: 27
      //DEBUG: e.AllocCommands#1: 9
      //DEBUG: e.Commands#1: 13
      //DEBUG: e.Index#1: 25
      //DEBUG: e.Result#1: 18
      //DEBUG: e.Vars-B#1: 30
      //DEBUG: e.Vars-E#1: 32
      //DEBUG: s.Sample#1: 49
      //DEBUG: e.ResultVars#1: 38

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Index#1/25 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenResult/4 AsIs: (/7 AsIs: e.Vars-B#1/30 AsIs: (/36 AsIs: s.Mode#1/46 AsIs: (/44 AsIs: e.Index#1/47 AsIs: )/45 AsIs: (/40 AsIs: e.ResultVars#1/38 AsIs: s.Sample#1/49 HalfReuse: s.Counter1 #17/41 AsIs: )/37 } )/50 Tile{ AsIs: e.Vars-E#1/32 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.AllocCommands#1/9 HalfReuse: (/12 HalfReuse: # CmdCopyVar/15 } Tile{ HalfReuse: s.Mode1 #46/16 AsIs: s.Counter#1/17 } s.Sample#1/49/51 )/52 )/53 (/54 Tile{ AsIs: (/22 Reuse: # CmdInsertVar/24 AsIs: s.Mode#1/27 } s.Counter#1/17/55 )/56 Tile{ AsIs: e.Commands#1/13 } )/57 </58 & IncVarOffset/59 s.Counter#1/17/60 s.Mode#1/46/61 Tile{ HalfReuse: >/23 AsIs: e.Result#1/18 AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[50]);
      refalrts::copy_stvar(vm, context[51], context[49]);
      refalrts::alloc_close_bracket(vm, context[52]);
      refalrts::alloc_close_bracket(vm, context[53]);
      refalrts::alloc_open_bracket(vm, context[54]);
      refalrts::copy_stvar(vm, context[55], context[17]);
      refalrts::alloc_close_bracket(vm, context[56]);
      refalrts::alloc_close_bracket(vm, context[57]);
      refalrts::alloc_open_call(vm, context[58]);
      refalrts::alloc_name(vm, context[59], functions[efunc_IncVarOffset]);
      refalrts::copy_stvar(vm, context[60], context[17]);
      refalrts::copy_stvar(vm, context[61], context[46]);
      refalrts::reinit_svar( context[41], context[17] );
      refalrts::reinit_open_bracket(context[12]);
      refalrts::reinit_ident(context[15], identifiers[ident_CmdCopyVar]);
      refalrts::reinit_svar( context[16], context[46] );
      refalrts::update_ident(context[24], identifiers[ident_CmdInsertVar]);
      refalrts::reinit_close_call(context[23]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[58] );
      refalrts::link_brackets( context[54], context[57] );
      refalrts::link_brackets( context[22], context[56] );
      refalrts::link_brackets( context[11], context[53] );
      refalrts::link_brackets( context[12], context[52] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[36], context[50] );
      refalrts::link_brackets( context[40], context[37] );
      refalrts::link_brackets( context[44], context[45] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[23];
      res = refalrts::splice_evar( res, context[57], context[61] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[55], context[56] );
      res = refalrts::splice_evar( res, context[22], context[27] );
      res = refalrts::splice_evar( res, context[51], context[54] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[8], context[15] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_evar( res, context[50], context[50] );
      refalrts::splice_to_freelist_open( vm, context[37], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[30], context[31], context[28], context[29] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoGenResult/4 (/7 e.Vars#1/5 )/8 (/11 e.AllocCommands#1/9 )/12 (/15 e.Commands#1/13 )/16 s.Counter#1/17 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Vars#1 as range 5
  // closed e.AllocCommands#1 as range 9
  // closed e.Commands#1 as range 13
  //DEBUG: s.Counter#1: 17
  //DEBUG: e.Vars#1: 5
  //DEBUG: e.AllocCommands#1: 9
  //DEBUG: e.Commands#1: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} (/11 {REMOVED TILE} )/12 (/15 {REMOVED TILE} )/16 s.Counter#1/17 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Counter1 #17/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 } Tile{ AsIs: e.AllocCommands#1/9 } Tile{ AsIs: e.Commands#1/13 } Tile{ ]] }
  refalrts::reinit_svar( context[4], context[17] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoGenResult("DoGenResult", 2847441005U, 670997308U, func_DoGenResult);


static refalrts::FnResult func_MakeVariableCommentTable(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & MakeVariableCommentTable/4 e.Vars#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Vars#1 as range 2
  //DEBUG: e.Vars#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 AsIs: e.Vars#1/2 HalfReuse: </1 } & Pipe/5 (/6 & Map/7 & ReplicateVar/8 )/9 & Sort/10 (/11 & Map/12 & MakeVariableComment/13 )/14 >/15 >/16 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_Pipe]);
  refalrts::alloc_open_bracket(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Map]);
  refalrts::alloc_name(vm, context[8], functions[efunc_ReplicateVar]);
  refalrts::alloc_close_bracket(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_Sort]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_Map]);
  refalrts::alloc_name(vm, context[13], functions[efunc_MakeVariableComment]);
  refalrts::alloc_close_bracket(vm, context[14]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::update_name(context[4], functions[efunc_Fetch]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[1] );
  refalrts::link_brackets( context[11], context[14] );
  refalrts::link_brackets( context[6], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MakeVariableCommentTable("MakeVariableCommentTable", 0U, 0U, func_MakeVariableCommentTable);


static refalrts::FnResult func_gen_ReplicateVar_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & ReplicateVar\1/4 s.Mode#1/5 (/8 e.Index#1/6 )/9 s.ContextOffset#2/10 >/1
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
  // closed e.Index#1 as range 6
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Mode#1: 5
  //DEBUG: e.Index#1: 6
  //DEBUG: s.ContextOffset#2: 10

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/8 {REMOVED TILE} )/9 s.ContextOffset#2/10 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: s.ContextOffset2 #10/4 AsIs: s.Mode#1/5 } Tile{ AsIs: e.Index#1/6 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_svar( context[4], context[10] );
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::splice_to_freelist_open( vm, context[5], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ReplicateVar_L1("ReplicateVar\\1", 2847441005U, 670997308U, func_gen_ReplicateVar_L1);


static refalrts::FnResult func_ReplicateVar(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & ReplicateVar/4 (/7 s.Mode#1/9 (/12 e.Index#1/10 )/13 (/16 e.ResultOccurences#1/14 )/17 e.PatternOccurences#1/5 )/8 >/1
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
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[5], context[6] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  // closed e.Index#1 as range 10
  // closed e.ResultOccurences#1 as range 14
  // closed e.PatternOccurences#1 as range 5
  //DEBUG: s.Mode#1: 9
  //DEBUG: e.Index#1: 10
  //DEBUG: e.ResultOccurences#1: 14
  //DEBUG: e.PatternOccurences#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/17 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </8 } Tile{ HalfReuse: & Map/0 HalfReuse: [*]/4 HalfReuse: & ReplicateVar\1/7 AsIs: s.Mode#1/9 AsIs: (/12 AsIs: e.Index#1/10 AsIs: )/13 HalfReuse: {*}/16 } Tile{ AsIs: e.ResultOccurences#1/14 } Tile{ AsIs: e.PatternOccurences#1/5 } Tile{ AsIs: >/1 ]] }
  refalrts::reinit_open_call(context[8]);
  refalrts::reinit_name(context[0], functions[efunc_Map]);
  refalrts::reinit_closure_head(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_gen_ReplicateVar_L1]);
  refalrts::reinit_unwrapped_closure(context[16], context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[8] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[0], context[16] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  refalrts::wrap_closure( context[16] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ReplicateVar("ReplicateVar", 2847441005U, 670997308U, func_ReplicateVar);


static refalrts::FnResult func_MakeVariableComment(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & MakeVariableComment/4 (/7 s.Offset#1/9 s.Mode#1/10 e.Index#1/5 s.Depth#1/11 )/8 >/1
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
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[11], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Index#1 as range 5
  //DEBUG: s.Offset#1: 9
  //DEBUG: s.Mode#1: 10
  //DEBUG: s.Depth#1: 11
  //DEBUG: e.Index#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdComment/4 HalfReuse: # Offset/7 AsIs: s.Offset#1/9 }": "/12 </14 & PrintVar/15 Tile{ AsIs: s.Mode#1/10 AsIs: e.Index#1/5 AsIs: s.Depth#1/11 HalfReuse: >/8 HalfReuse: )/1 ]] }
  refalrts::alloc_chars(vm, context[12], context[13], ": ", 2);
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_PrintVar]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_CmdComment]);
  refalrts::reinit_ident(context[7], identifiers[ident_Offset]);
  refalrts::reinit_close_call(context[8]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[10];
  res = refalrts::splice_evar( res, context[12], context[15] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MakeVariableComment("MakeVariableComment", 2847441005U, 670997308U, func_MakeVariableComment);


//End of file
