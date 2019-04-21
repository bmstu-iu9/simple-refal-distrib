// This file automatically generated from 'Log.ref'
// Don't edit! Edit 'Log.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_1461706403_3198807150

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
  efunc_Logm_PutLine = 14,
  efunc_gen_Logm_Init_S2A2 = 15,
  efunc_Gu_LogFile = 16,
  efunc_FOpen = 17,
  efunc_gen_Logm_Init_S2A1 = 18,
  efunc_FClose = 19,
  efunc_gen_Logm_Final_B1 = 20,
  efunc_gen_Logm_Final_A1 = 21,
  efunc_gen_LogHandle_B1 = 22,
  efunc_Putout = 23,
  efunc_Time = 24,
  efunc_gen_Logm_PutLine_B1 = 25,
  efunc_LogHandle = 26,
  efunc_Map = 27,
  efunc_gen_Logm_AST_B1S2L1 = 28,
  efunc_Logm_TextFromAST = 29,
  efunc_gen_Logm_AST_B1 = 30,
  efunc_PutProgramElement = 31,
  efunc_gen_Logm_HighLevelRASL_B1 = 32,
  efunc_PutRASLFunction = 33,
  efunc_PutCode = 34,
  efunc_FnName = 35,
  efunc_DisplayName = 36,
  efunc_PutRASLCommands = 37,
  efunc_Symb = 38,
  efunc_gen_PutRASLCommands_L1 = 39,
  efunc_SrcPos = 40,
  efunc_gen_PutCode_L1 = 41,
  efunc_EscapeString = 42,
};


enum ident {
  ident_k43_ = 0,
  ident_k47_ = 1,
  ident_k37_ = 2,
  ident_k42_ = 3,
  ident_k63_ = 4,
  ident_m_ = 5,
  ident_w = 6,
  ident_Function = 7,
  ident_CmdNativeFunction = 8,
  ident_CmdEnum = 9,
  ident_CmdSwap = 10,
  ident_CmdConditionFunc = 11,
  ident_CmdDeclaration = 12,
  ident_CmdDefineIdent = 13,
  ident_CmdEmitNativeCode = 14,
  ident_GNm_Local = 15,
  ident_GNm_Entry = 16,
  ident_CmdSentence = 17,
  ident_CmdOpenELoop = 18,
  ident_AlgLeft = 19,
  ident_CmdComment = 20,
  ident_FileLine = 21,
  ident_RowCol = 22,
  ident_FileRowCol = 23,
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

static refalrts::NativeReference nat_ref_Mu("Mu", 1461706403U, 3198807150U, func_Mu);


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
    refalrts::alloc_number(vm, context[9], 3198807150UL);
    refalrts::update_name(context[4], functions[efunc_u_u_FindMuPtr]);
    refalrts::reinit_number(context[5], 1461706403UL);
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
  refalrts::reinit_number(context[5], 1461706403UL);
  refalrts::reinit_number(context[7], 3198807150UL);
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

static refalrts::NativeReference nat_ref_gen_u_u_Mum_Aux_S13B1("__Mu-Aux$13:1", 1461706403U, 3198807150U, func_gen_u_u_Mum_Aux_S13B1);


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

static refalrts::NativeReference nat_ref_u_u_Mum_Aux("__Mu-Aux", 1461706403U, 3198807150U, func_u_u_Mum_Aux);


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

static refalrts::NativeReference nat_ref_Residue("Residue", 1461706403U, 3198807150U, func_Residue);


static refalrts::FnResult func_gen_Logm_Init_S2A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & Log-Init$2=2/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Log-PutLine/4 HalfReuse: 'C'/1 }"ompilation starts"/5 >/7 Tile{ ]] }
  refalrts::alloc_chars(vm, context[5], context[6], "ompilation starts", 17);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_Logm_PutLine]);
  refalrts::reinit_char(context[1], 'C');
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Logm_Init_S2A2("Log-Init$2=2", 1461706403U, 3198807150U, func_gen_Logm_Init_S2A2);


static refalrts::FnResult func_gen_Logm_Init_S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & Log-Init$2=1/4 s.FileHandle#2/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.FileHandle#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </6 & Log-Init$2=2/7 Tile{ AsIs: </0 Reuse: & G_LogFile/4 AsIs: s.FileHandle#2/5 AsIs: >/1 } >/8 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_Logm_Init_S2A2]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::update_name(context[4], functions[efunc_Gu_LogFile]);
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

static refalrts::NativeReference nat_ref_gen_Logm_Init_S2A1("Log-Init$2=1", 1461706403U, 3198807150U, func_gen_Logm_Init_S2A1);


static refalrts::FnResult func_Logm_Init(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & Log-Init/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Log-Init/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Log-Init/4 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Log-Init/4 e.LogFileName#1/2 >/1
  // closed e.LogFileName#1 as range 2
  //DEBUG: e.LogFileName#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Log-Init$2=1/4 } </5 & FOpen/6 # w/7 Tile{ AsIs: e.LogFileName#1/2 } >/8 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_FOpen]);
  refalrts::alloc_ident(vm, context[7], identifiers[ident_w]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::update_name(context[4], functions[efunc_gen_Logm_Init_S2A1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Logm_Init("Log-Init", 0U, 0U, func_Logm_Init);


static refalrts::FnResult func_gen_Logm_Final_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & Log-Final:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Log-Final:1/4 s.FileHandle#3/7 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_left( context[7], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    //DEBUG: s.FileHandle#3: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FClose/4 AsIs: s.FileHandle#3/7 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_FClose]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Log-Final:1/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Log-Final:1/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Logm_Final_B1("Log-Final:1", 1461706403U, 3198807150U, func_gen_Logm_Final_B1);


static refalrts::FnResult func_gen_Logm_Final_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & Log-Final=1/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Log-Final:1/4 HalfReuse: </1 } & G_LogFile/5 >/6 >/7 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_Gu_LogFile]);
  refalrts::alloc_close_call(vm, context[6]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_gen_Logm_Final_B1]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Logm_Final_A1("Log-Final=1", 1461706403U, 3198807150U, func_gen_Logm_Final_A1);


static refalrts::FnResult func_Logm_Final(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & Log-Final/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Log-Final=1/4 HalfReuse: </1 } & Log-PutLine/5"Compilation ends"/6 >/8 >/9 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_Logm_PutLine]);
  refalrts::alloc_chars(vm, context[6], context[7], "Compilation ends", 16);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::alloc_close_call(vm, context[9]);
  refalrts::update_name(context[4], functions[efunc_gen_Logm_Final_A1]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Logm_Final("Log-Final", 0U, 0U, func_Logm_Final);


static refalrts::FnResult func_gen_LogHandle_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & LogHandle:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & LogHandle:1/4 s.FileHandle#2/7 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_left( context[7], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    //DEBUG: s.FileHandle#2: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } s.FileHandle#2/7/8 Tile{ AsIs: </0 Reuse: & G_LogFile/4 AsIs: s.FileHandle#2/7 AsIs: >/1 ]] }
    refalrts::copy_stvar(vm, context[8], context[7]);
    refalrts::update_name(context[4], functions[efunc_Gu_LogFile]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[8], context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & LogHandle:1/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & LogHandle:1/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LogHandle_B1("LogHandle:1", 1461706403U, 3198807150U, func_gen_LogHandle_B1);


static refalrts::FnResult func_LogHandle(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & LogHandle/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & LogHandle:1/4 HalfReuse: </1 } & G_LogFile/5 >/6 >/7 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_Gu_LogFile]);
  refalrts::alloc_close_call(vm, context[6]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_gen_LogHandle_B1]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_LogHandle("LogHandle", 1461706403U, 3198807150U, func_LogHandle);


static refalrts::FnResult func_gen_Logm_PutLine_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & Log-PutLine:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Log-PutLine:1/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Log-PutLine:1/4 (/7 e.Message#1/5 )/8 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Message#1 as range 5
    //DEBUG: e.Message#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Log-PutLine:1/4 (/7 e.Message#1/5 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Log-PutLine:1/4 (/7 e.Message#1/5 )/8 s.FileHandle#2/9 >/1
  // closed e.Message#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Message#1: 5
  //DEBUG: s.FileHandle#2: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.FileHandle#2/9 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 HalfReuse: s.FileHandle2 #9/7 } </10 Tile{ HalfReuse: & Time/8 } >/11": "/12 Tile{ AsIs: e.Message#1/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::alloc_chars(vm, context[12], context[13], ": ", 2);
  refalrts::update_name(context[4], functions[efunc_Putout]);
  refalrts::reinit_svar( context[7], context[9] );
  refalrts::reinit_name(context[8], functions[efunc_Time]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[13] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Logm_PutLine_B1("Log-PutLine:1", 1461706403U, 3198807150U, func_gen_Logm_PutLine_B1);


static refalrts::FnResult func_Logm_PutLine(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & Log-PutLine/4 e.Message#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Message#1 as range 2
  //DEBUG: e.Message#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & Log-PutLine:1/5 (/6 Tile{ AsIs: e.Message#1/2 } )/7 {*}/8 </9 & LogHandle/10 >/11 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_gen_Logm_PutLine_B1]);
  refalrts::alloc_open_bracket(vm, context[6]);
  refalrts::alloc_close_bracket(vm, context[7]);
  refalrts::alloc_unwrapped_closure(vm, context[8], context[4]);
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_LogHandle]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::reinit_closure_head(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[6], context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[7], context[11] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::wrap_closure( context[8] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Logm_PutLine("Log-PutLine", 0U, 0U, func_Logm_PutLine);


static refalrts::FnResult func_gen_Logm_AST_B1S2L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & Log-AST:1$2\1/4 s.FileHandle#2/9 (/7 e.Line#3/5 )/8 >/1
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
  // closed e.Line#3 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Line#3: 5
  //DEBUG: s.FileHandle#2: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle#2/9 HalfReuse: ' '/7 } Tile{ HalfReuse: ' '/8 } Tile{ AsIs: e.Line#3/5 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_Putout]);
  refalrts::reinit_char(context[7], ' ');
  refalrts::reinit_char(context[8], ' ');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Logm_AST_B1S2L1("Log-AST:1$2\\1", 1461706403U, 3198807150U, func_gen_Logm_AST_B1S2L1);


static refalrts::FnResult func_gen_Logm_AST_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & Log-AST:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Log-AST:1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 e.new#3/2 >/1
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
    // </0 & Log-AST:1/4 (/7 e.AST#1/5 )/8 (/11 e.Message#1/9 )/12 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.AST#1 as range 5
    // closed e.Message#1 as range 9
    //DEBUG: e.AST#1: 5
    //DEBUG: e.Message#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Log-AST:1/4 (/7 {REMOVED TILE} )/8 (/11 e.Message#1/9 )/12 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.AST#1/5 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Log-AST:1/4 (/7 e.AST#1/5 )/8 (/11 e.Message#1/9 )/12 s.FileHandle#2/13 >/1
  // closed e.AST#1 as range 5
  // closed e.Message#1 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.AST#1: 5
  //DEBUG: e.Message#1: 9
  //DEBUG: s.FileHandle#2: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Log-PutLine/4 HalfReuse: 'A'/7 }"ST of fil"/14 Tile{ HalfReuse: 'e'/8 HalfReuse: ' '/11 AsIs: e.Message#1/9 HalfReuse: ':'/12 } >/16 </17 & Map/18 [*]/19 & Log-AST:1$2\1/20 Tile{ AsIs: s.FileHandle#2/13 HalfReuse: {*}/1 } </21 & Log-TextFromAST/22 Tile{ AsIs: e.AST#1/5 } >/23 >/24 e.AST#1/5/25 Tile{ ]] }
  refalrts::alloc_chars(vm, context[14], context[15], "ST of fil", 9);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::alloc_open_call(vm, context[17]);
  refalrts::alloc_name(vm, context[18], functions[efunc_Map]);
  refalrts::alloc_closure_head(vm, context[19]);
  refalrts::alloc_name(vm, context[20], functions[efunc_gen_Logm_AST_B1S2L1]);
  refalrts::alloc_open_call(vm, context[21]);
  refalrts::alloc_name(vm, context[22], functions[efunc_Logm_TextFromAST]);
  refalrts::alloc_close_call(vm, context[23]);
  refalrts::alloc_close_call(vm, context[24]);
  refalrts::copy_evar(vm, context[25], context[26], context[5], context[6]);
  refalrts::update_name(context[4], functions[efunc_Logm_PutLine]);
  refalrts::reinit_char(context[7], 'A');
  refalrts::reinit_char(context[8], 'e');
  refalrts::reinit_char(context[11], ' ');
  refalrts::reinit_char(context[12], ':');
  refalrts::reinit_unwrapped_closure(context[1], context[19]);
  refalrts::push_stack( vm, context[24] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[13], context[1] );
  res = refalrts::splice_evar( res, context[16], context[20] );
  res = refalrts::splice_evar( res, context[8], context[12] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  refalrts::use( res );
  refalrts::wrap_closure( context[1] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Logm_AST_B1("Log-AST:1", 1461706403U, 3198807150U, func_gen_Logm_AST_B1);


static refalrts::FnResult func_Logm_AST(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & Log-AST/4 (/7 e.Message#1/5 )/8 e.AST#1/2 >/1
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
  // closed e.Message#1 as range 5
  // closed e.AST#1 as range 2
  //DEBUG: e.Message#1: 5
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 } [*]/9 & Log-AST:1/10 (/11 Tile{ AsIs: e.AST#1/2 } Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.Message#1/5 AsIs: )/8 } {*}/12 </13 & LogHandle/14 >/15 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_closure_head(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_Logm_AST_B1]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_unwrapped_closure(vm, context[12], context[9]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_LogHandle]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[11], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[4], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[11] );
  refalrts::use( res );
  refalrts::wrap_closure( context[12] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Logm_AST("Log-AST", 0U, 0U, func_Logm_AST);


static refalrts::FnResult func_gen_Logm_HighLevelRASL_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & Log-HighLevelRASL:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Log-HighLevelRASL:1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 e.new#3/2 >/1
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
    // </0 & Log-HighLevelRASL:1/4 (/7 e.RASL#1/5 )/8 (/11 e.SrcName#1/9 )/12 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.RASL#1 as range 5
    // closed e.SrcName#1 as range 9
    //DEBUG: e.RASL#1: 5
    //DEBUG: e.SrcName#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Log-HighLevelRASL:1/4 (/7 {REMOVED TILE} )/8 (/11 e.SrcName#1/9 )/12 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.RASL#1/5 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Log-HighLevelRASL:1/4 (/7 e.RASL#1/5 )/8 (/11 e.SrcName#1/9 )/12 s.FileHandle#2/13 >/1
  // closed e.RASL#1 as range 5
  // closed e.SrcName#1 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.RASL#1: 5
  //DEBUG: e.SrcName#1: 9
  //DEBUG: s.FileHandle#2: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Log-PutLine/4 HalfReuse: 'H'/7 }"ighLevelRASL code of fil"/14 Tile{ HalfReuse: 'e'/8 HalfReuse: ' '/11 AsIs: e.SrcName#1/9 HalfReuse: ':'/12 } >/16 </17 & Map/18 (/19 & PutProgramElement/20 Tile{ AsIs: s.FileHandle#2/13 HalfReuse: )/1 } Tile{ AsIs: e.RASL#1/5 } >/21 e.RASL#1/5/22 Tile{ ]] }
  refalrts::alloc_chars(vm, context[14], context[15], "ighLevelRASL code of fil", 24);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::alloc_open_call(vm, context[17]);
  refalrts::alloc_name(vm, context[18], functions[efunc_Map]);
  refalrts::alloc_open_bracket(vm, context[19]);
  refalrts::alloc_name(vm, context[20], functions[efunc_PutProgramElement]);
  refalrts::alloc_close_call(vm, context[21]);
  refalrts::copy_evar(vm, context[22], context[23], context[5], context[6]);
  refalrts::update_name(context[4], functions[efunc_Logm_PutLine]);
  refalrts::reinit_char(context[7], 'H');
  refalrts::reinit_char(context[8], 'e');
  refalrts::reinit_char(context[11], ' ');
  refalrts::reinit_char(context[12], ':');
  refalrts::reinit_close_bracket(context[1]);
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[17] );
  refalrts::link_brackets( context[19], context[1] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[13], context[1] );
  res = refalrts::splice_evar( res, context[16], context[20] );
  res = refalrts::splice_evar( res, context[8], context[12] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Logm_HighLevelRASL_B1("Log-HighLevelRASL:1", 1461706403U, 3198807150U, func_gen_Logm_HighLevelRASL_B1);


static refalrts::FnResult func_Logm_HighLevelRASL(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & Log-HighLevelRASL/4 (/7 e.SrcName#1/5 )/8 e.RASL#1/2 >/1
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
  // closed e.RASL#1 as range 2
  //DEBUG: e.SrcName#1: 5
  //DEBUG: e.RASL#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 } [*]/9 & Log-HighLevelRASL:1/10 (/11 Tile{ AsIs: e.RASL#1/2 } Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.SrcName#1/5 AsIs: )/8 } {*}/12 </13 & LogHandle/14 >/15 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_closure_head(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_Logm_HighLevelRASL_B1]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_unwrapped_closure(vm, context[12], context[9]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_LogHandle]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[11], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[4], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[11] );
  refalrts::use( res );
  refalrts::wrap_closure( context[12] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Logm_HighLevelRASL("Log-HighLevelRASL", 0U, 0U, func_Logm_HighLevelRASL);


static refalrts::FnResult func_PutProgramElement(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
  // </0 & PutProgramElement/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & PutProgramElement/4 s.new#1/9 (/7 s.new#2/10 e.new#3/5 )/8 >/1
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
    // </0 & PutProgramElement/4 s.new#4/9 (/7 s.new#5/10 s.new#6/13 e.new#7/11 )/8 >/1
    context[11] = context[5];
    context[12] = context[6];
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    // closed e.new#7 as range 11
    do {
      // </0 & PutProgramElement/4 s.new#8/9 (/7 s.new#9/10 s.new#10/13 (/18 e.new#11/16 )/19 e.new#12/14 )/8 >/1
      context[14] = context[11];
      context[15] = context[12];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[14], context[15] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      // closed e.new#11 as range 16
      // closed e.new#12 as range 14
      do {
        // </0 & PutProgramElement/4 s.FileHandle#1/9 (/7 # Function/10 s.ScopeClass#1/13 (/18 e.Name#1/16 )/19 e.Commands#1/14 )/8 >/1
        if( ! refalrts::ident_term( identifiers[ident_Function], context[10] ) )
          continue;
        // closed e.Name#1 as range 16
        // closed e.Commands#1 as range 14
        //DEBUG: s.FileHandle#1: 9
        //DEBUG: s.ScopeClass#1: 13
        //DEBUG: e.Name#1: 16
        //DEBUG: e.Commands#1: 14

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} & PutProgramElement/4 s.FileHandle#1/9 {REMOVED TILE} >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & PutRASLFunction/7 HalfReuse: s.FileHandle1 #9/10 AsIs: s.ScopeClass#1/13 AsIs: (/18 AsIs: e.Name#1/16 AsIs: )/19 AsIs: e.Commands#1/14 HalfReuse: >/8 } Tile{ ]] }
        refalrts::reinit_name(context[7], functions[efunc_PutRASLFunction]);
        refalrts::reinit_svar( context[10], context[9] );
        refalrts::reinit_close_call(context[8]);
        refalrts::push_stack( vm, context[8] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[18], context[19] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[7], context[8] );
        refalrts::splice_to_freelist_open( vm, context[0], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & PutProgramElement/4 s.FileHandle#1/9 (/7 # CmdNativeFunction/10 s.ScopeClass#1/13 (/18 e.Name#1/16 )/19 t.SrcPos#1/22 e.Code#1/20 )/8 >/1
      context[20] = context[14];
      context[21] = context[15];
      if( ! refalrts::ident_term( identifiers[ident_CmdNativeFunction], context[10] ) )
        continue;
      // closed e.Name#1 as range 16
      context[23] = refalrts::tvar_left( context[22], context[20], context[21] );
      if( ! context[23] )
        continue;
      // closed e.Code#1 as range 20
      //DEBUG: s.FileHandle#1: 9
      //DEBUG: s.ScopeClass#1: 13
      //DEBUG: e.Name#1: 16
      //DEBUG: t.SrcPos#1: 22
      //DEBUG: e.Code#1: 20

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle#1/9 HalfReuse: </7 HalfReuse: & FnName/10 AsIs: s.ScopeClass#1/13 } Tile{ AsIs: e.Name#1/16 } >/24 Tile{ HalfReuse: ' '/18 }":: native {"/25 >/27 </28 & PutCode/29 Tile{ HalfReuse: s.FileHandle1 #9/19 AsIs: t.SrcPos#1/22 AsIs: e.Code#1/20 HalfReuse: >/8 HalfReuse: </1 } & Putout/30 s.FileHandle#1/9/31"  }\n"/32 >/34 Tile{ ]] }
      refalrts::alloc_close_call(vm, context[24]);
      refalrts::alloc_chars(vm, context[25], context[26], ":: native {", 11);
      refalrts::alloc_close_call(vm, context[27]);
      refalrts::alloc_open_call(vm, context[28]);
      refalrts::alloc_name(vm, context[29], functions[efunc_PutCode]);
      refalrts::alloc_name(vm, context[30], functions[efunc_Putout]);
      refalrts::copy_stvar(vm, context[31], context[9]);
      refalrts::alloc_chars(vm, context[32], context[33], "  }\n", 4);
      refalrts::alloc_close_call(vm, context[34]);
      refalrts::update_name(context[4], functions[efunc_Putout]);
      refalrts::reinit_open_call(context[7]);
      refalrts::reinit_name(context[10], functions[efunc_FnName]);
      refalrts::reinit_char(context[18], ' ');
      refalrts::reinit_svar( context[19], context[9] );
      refalrts::reinit_close_call(context[8]);
      refalrts::reinit_open_call(context[1]);
      refalrts::push_stack( vm, context[34] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[28] );
      refalrts::push_stack( vm, context[27] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[24] );
      refalrts::push_stack( vm, context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[30], context[34] );
      res = refalrts::splice_evar( res, context[19], context[1] );
      res = refalrts::splice_evar( res, context[25], context[29] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[24], context[24] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & PutProgramElement/4 s.FileHandle#1/9 (/7 # CmdEnum/10 s.ScopeClass#1/13 e.Name#1/11 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdEnum], context[10] ) )
        continue;
      // closed e.Name#1 as range 11
      //DEBUG: s.FileHandle#1: 9
      //DEBUG: s.ScopeClass#1: 13
      //DEBUG: e.Name#1: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle#1/9 HalfReuse: </7 HalfReuse: & FnName/10 AsIs: s.ScopeClass#1/13 AsIs: e.Name#1/11 HalfReuse: >/8 HalfReuse: ' '/1 }":: enum"/14 >/16 Tile{ ]] }
      refalrts::alloc_chars(vm, context[14], context[15], ":: enum", 7);
      refalrts::alloc_close_call(vm, context[16]);
      refalrts::update_name(context[4], functions[efunc_Putout]);
      refalrts::reinit_open_call(context[7]);
      refalrts::reinit_name(context[10], functions[efunc_FnName]);
      refalrts::reinit_close_call(context[8]);
      refalrts::reinit_char(context[1], ' ');
      refalrts::push_stack( vm, context[16] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[14], context[16] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & PutProgramElement/4 s.FileHandle#1/9 (/7 # CmdSwap/10 s.ScopeClass#1/13 e.Name#1/11 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdSwap], context[10] ) )
        continue;
      // closed e.Name#1 as range 11
      //DEBUG: s.FileHandle#1: 9
      //DEBUG: s.ScopeClass#1: 13
      //DEBUG: e.Name#1: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle#1/9 HalfReuse: </7 HalfReuse: & FnName/10 AsIs: s.ScopeClass#1/13 AsIs: e.Name#1/11 HalfReuse: >/8 HalfReuse: ' '/1 }":: swap"/14 >/16 Tile{ ]] }
      refalrts::alloc_chars(vm, context[14], context[15], ":: swap", 7);
      refalrts::alloc_close_call(vm, context[16]);
      refalrts::update_name(context[4], functions[efunc_Putout]);
      refalrts::reinit_open_call(context[7]);
      refalrts::reinit_name(context[10], functions[efunc_FnName]);
      refalrts::reinit_close_call(context[8]);
      refalrts::reinit_char(context[1], ' ');
      refalrts::push_stack( vm, context[16] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[14], context[16] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & PutProgramElement/4 s.FileHandle#1/9 (/7 # CmdConditionFunc/10 s.ScopeClass#1/13 e.Name#1/11 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdConditionFunc], context[10] ) )
        continue;
      // closed e.Name#1 as range 11
      //DEBUG: s.FileHandle#1: 9
      //DEBUG: s.ScopeClass#1: 13
      //DEBUG: e.Name#1: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle#1/9 HalfReuse: </7 HalfReuse: & FnName/10 AsIs: s.ScopeClass#1/13 AsIs: e.Name#1/11 HalfReuse: >/8 HalfReuse: ' '/1 }":: condition"/14 >/16 Tile{ ]] }
      refalrts::alloc_chars(vm, context[14], context[15], ":: condition", 12);
      refalrts::alloc_close_call(vm, context[16]);
      refalrts::update_name(context[4], functions[efunc_Putout]);
      refalrts::reinit_open_call(context[7]);
      refalrts::reinit_name(context[10], functions[efunc_FnName]);
      refalrts::reinit_close_call(context[8]);
      refalrts::reinit_char(context[1], ' ');
      refalrts::push_stack( vm, context[16] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[14], context[16] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & PutProgramElement/4 s.FileHandle#1/9 (/7 # CmdDeclaration/10 s.ScopeClass#1/13 e.Name#1/11 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_CmdDeclaration], context[10] ) )
      continue;
    // closed e.Name#1 as range 11
    //DEBUG: s.FileHandle#1: 9
    //DEBUG: s.ScopeClass#1: 13
    //DEBUG: e.Name#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle#1/9 HalfReuse: </7 HalfReuse: & FnName/10 AsIs: s.ScopeClass#1/13 AsIs: e.Name#1/11 HalfReuse: >/8 HalfReuse: ' '/1 }":: extern"/14 >/16 Tile{ ]] }
    refalrts::alloc_chars(vm, context[14], context[15], ":: extern", 9);
    refalrts::alloc_close_call(vm, context[16]);
    refalrts::update_name(context[4], functions[efunc_Putout]);
    refalrts::reinit_open_call(context[7]);
    refalrts::reinit_name(context[10], functions[efunc_FnName]);
    refalrts::reinit_close_call(context[8]);
    refalrts::reinit_char(context[1], ' ');
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & PutProgramElement/4 s.FileHandle#1/9 (/7 # CmdDefineIdent/10 e.Name#1/5 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_CmdDefineIdent], context[10] ) )
      continue;
    // closed e.Name#1 as range 5
    //DEBUG: s.FileHandle#1: 9
    //DEBUG: e.Name#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle#1/9 HalfReuse: '$'/7 HalfReuse: 'L'/10 }"ABEL "/11 </13 & DisplayName/14 Tile{ AsIs: e.Name#1/5 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[11], context[12], "ABEL ", 5);
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_DisplayName]);
    refalrts::update_name(context[4], functions[efunc_Putout]);
    refalrts::reinit_char(context[7], '$');
    refalrts::reinit_char(context[10], 'L');
    refalrts::reinit_close_call(context[8]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[11], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PutProgramElement/4 s.FileHandle#1/9 (/7 # CmdEmitNativeCode/10 t.SrcPos#1/11 e.Code#1/5 )/8 >/1
  if( ! refalrts::ident_term( identifiers[ident_CmdEmitNativeCode], context[10] ) )
    return refalrts::cRecognitionImpossible;
  context[12] = refalrts::tvar_left( context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  // closed e.Code#1 as range 5
  //DEBUG: s.FileHandle#1: 9
  //DEBUG: t.SrcPos#1: 11
  //DEBUG: e.Code#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle#1/9 HalfReuse: 'N'/7 HalfReuse: 'a'/10 }"tive code:"/13 >/15 </16 & PutCode/17 s.FileHandle#1/9/18 Tile{ AsIs: t.SrcPos#1/11 AsIs: e.Code#1/5 HalfReuse: >/8 HalfReuse: </1 } & Putout/19 s.FileHandle#1/9/20 >/21 Tile{ ]] }
  refalrts::alloc_chars(vm, context[13], context[14], "tive code:", 10);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::alloc_open_call(vm, context[16]);
  refalrts::alloc_name(vm, context[17], functions[efunc_PutCode]);
  refalrts::copy_stvar(vm, context[18], context[9]);
  refalrts::alloc_name(vm, context[19], functions[efunc_Putout]);
  refalrts::copy_stvar(vm, context[20], context[9]);
  refalrts::alloc_close_call(vm, context[21]);
  refalrts::update_name(context[4], functions[efunc_Putout]);
  refalrts::reinit_char(context[7], 'N');
  refalrts::reinit_char(context[10], 'a');
  refalrts::reinit_close_call(context[8]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[19], context[21] );
  res = refalrts::splice_evar( res, context[11], context[1] );
  res = refalrts::splice_evar( res, context[13], context[18] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PutProgramElement("PutProgramElement", 1461706403U, 3198807150U, func_PutProgramElement);


static refalrts::FnResult func_PutRASLFunction(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & PutRASLFunction/4 s.FileHandle#1/5 s.ScopeClass#1/6 (/9 e.Name#1/7 )/10 e.Commands#1/2 >/1
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
  // closed e.Name#1 as range 7
  // closed e.Commands#1 as range 2
  //DEBUG: s.FileHandle#1: 5
  //DEBUG: s.ScopeClass#1: 6
  //DEBUG: e.Name#1: 7
  //DEBUG: e.Commands#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle#1/5 } </11 & FnName/12 Tile{ AsIs: s.ScopeClass#1/6 } Tile{ AsIs: e.Name#1/7 } >/13" {"/14 >/16 </17 & PutRASLCommands/18 s.FileHandle#1/5/19 Tile{ AsIs: (/9 }"    "/20 Tile{ AsIs: )/10 AsIs: e.Commands#1/2 AsIs: >/1 } </22 & Putout/23 s.FileHandle#1/5/24"  }\n"/25 >/27 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_FnName]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::alloc_chars(vm, context[14], context[15], " {", 2);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::alloc_open_call(vm, context[17]);
  refalrts::alloc_name(vm, context[18], functions[efunc_PutRASLCommands]);
  refalrts::copy_stvar(vm, context[19], context[5]);
  refalrts::alloc_chars(vm, context[20], context[21], "    ", 4);
  refalrts::alloc_open_call(vm, context[22]);
  refalrts::alloc_name(vm, context[23], functions[efunc_Putout]);
  refalrts::copy_stvar(vm, context[24], context[5]);
  refalrts::alloc_chars(vm, context[25], context[26], "  }\n", 4);
  refalrts::alloc_close_call(vm, context[27]);
  refalrts::update_name(context[4], functions[efunc_Putout]);
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[22] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[17] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[22], context[27] );
  res = refalrts::splice_evar( res, context[10], context[1] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[13], context[19] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[6], context[6] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PutRASLFunction("PutRASLFunction", 1461706403U, 3198807150U, func_PutRASLFunction);


static refalrts::FnResult func_FnName(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & FnName/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & FnName/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & FnName/4 # GN-Local/5 e.Name#1/2 >/1
    if( ! refalrts::ident_term( identifiers[ident_GNm_Local], context[5] ) )
      continue;
    // closed e.Name#1 as range 2
    //DEBUG: e.Name#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } ' '/6 Tile{ HalfReuse: ' '/0 HalfReuse: </4 HalfReuse: & DisplayName/5 AsIs: e.Name#1/2 AsIs: >/1 ]] }
    refalrts::alloc_char(vm, context[6], ' ');
    refalrts::reinit_char(context[0], ' ');
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_DisplayName]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[6], context[6] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FnName/4 # GN-Entry/5 e.Name#1/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 2
  //DEBUG: e.Name#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ }"  $ENTRY"/6 Tile{ HalfReuse: ' '/0 HalfReuse: </4 HalfReuse: & DisplayName/5 AsIs: e.Name#1/2 AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[6], context[7], "  $ENTRY", 8);
  refalrts::reinit_char(context[0], ' ');
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[5], functions[efunc_DisplayName]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FnName("FnName", 1461706403U, 3198807150U, func_FnName);


static refalrts::FnResult func_gen_PutRASLCommands_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 44 elems
  refalrts::Iter context[44];
  refalrts::zeros( context, 44 );
  // </0 & PutRASLCommands\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & PutRASLCommands\1/4 s.new#1/13 (/11 e.new#2/9 )/12 (/7 s.new#3/14 e.new#4/5 )/8 >/1
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
  // closed e.new#2 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 5
  do {
    // </0 & PutRASLCommands\1/4 s.FileHandle#1/13 (/11 e.Indent#1/9 )/12 (/7 # CmdSentence/14 e.SubCommands#2/5 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_CmdSentence], context[14] ) )
      continue;
    // closed e.Indent#1 as range 9
    // closed e.SubCommands#2 as range 5
    //DEBUG: s.FileHandle#1: 13
    //DEBUG: e.Indent#1: 9
    //DEBUG: e.SubCommands#2: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </15 & Putout/16 s.FileHandle#1/13/17 e.Indent#1/9/18"(CmdSentence"/20 >/22 Tile{ AsIs: </0 Reuse: & PutRASLCommands/4 AsIs: s.FileHandle#1/13 AsIs: (/11 AsIs: e.Indent#1/9 HalfReuse: ' '/12 HalfReuse: ' '/7 HalfReuse: )/14 AsIs: e.SubCommands#2/5 HalfReuse: >/8 HalfReuse: </1 } & Putout/23 s.FileHandle#1/13/24 e.Indent#1/9/25")  // CmdSentence"/27 >/29 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_name(vm, context[16], functions[efunc_Putout]);
    refalrts::copy_stvar(vm, context[17], context[13]);
    refalrts::copy_evar(vm, context[18], context[19], context[9], context[10]);
    refalrts::alloc_chars(vm, context[20], context[21], "(CmdSentence", 12);
    refalrts::alloc_close_call(vm, context[22]);
    refalrts::alloc_name(vm, context[23], functions[efunc_Putout]);
    refalrts::copy_stvar(vm, context[24], context[13]);
    refalrts::copy_evar(vm, context[25], context[26], context[9], context[10]);
    refalrts::alloc_chars(vm, context[27], context[28], ")  // CmdSentence", 17);
    refalrts::alloc_close_call(vm, context[29]);
    refalrts::update_name(context[4], functions[efunc_PutRASLCommands]);
    refalrts::reinit_char(context[12], ' ');
    refalrts::reinit_char(context[7], ' ');
    refalrts::reinit_close_bracket(context[14]);
    refalrts::reinit_close_call(context[8]);
    refalrts::reinit_open_call(context[1]);
    refalrts::push_stack( vm, context[29] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[11], context[14] );
    refalrts::push_stack( vm, context[22] );
    refalrts::push_stack( vm, context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[23], context[29] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[15], context[22] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & PutRASLCommands\1/4 s.FileHandle#1/13 (/11 e.Indent#1/9 )/12 (/7 # CmdOpenELoop/14 # AlgLeft/17 s.BracketNum#2/18 s.VarNumber#2/19 e.SubCommands#2/15 )/8 >/1
    context[15] = context[5];
    context[16] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_CmdOpenELoop], context[14] ) )
      continue;
    context[17] = refalrts::ident_left( identifiers[ident_AlgLeft], context[15], context[16] );
    if( ! context[17] )
      continue;
    // closed e.Indent#1 as range 9
    if( ! refalrts::svar_left( context[18], context[15], context[16] ) )
      continue;
    if( ! refalrts::svar_left( context[19], context[15], context[16] ) )
      continue;
    // closed e.SubCommands#2 as range 15
    //DEBUG: s.FileHandle#1: 13
    //DEBUG: e.Indent#1: 9
    //DEBUG: s.BracketNum#2: 18
    //DEBUG: s.VarNumber#2: 19
    //DEBUG: e.SubCommands#2: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </20 & Putout/21 s.FileHandle#1/13/22 e.Indent#1/9/23"(CmdOpenELoop e."/25 </27 & Symb/28 Tile{ AsIs: s.VarNumber#2/19 } >/29" <- ["/30 </32 Tile{ HalfReuse: & Symb/17 AsIs: s.BracketNum#2/18 } >/33 ']'/34 >/35 Tile{ AsIs: </0 Reuse: & PutRASLCommands/4 AsIs: s.FileHandle#1/13 AsIs: (/11 AsIs: e.Indent#1/9 HalfReuse: ' '/12 HalfReuse: ' '/7 HalfReuse: )/14 } Tile{ AsIs: e.SubCommands#2/15 } >/36 </37 & Putout/38 s.FileHandle#1/13/39 e.Indent#1/9/40")  // CmdOpenELoo"/42 Tile{ HalfReuse: 'p'/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[20]);
    refalrts::alloc_name(vm, context[21], functions[efunc_Putout]);
    refalrts::copy_stvar(vm, context[22], context[13]);
    refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
    refalrts::alloc_chars(vm, context[25], context[26], "(CmdOpenELoop e.", 16);
    refalrts::alloc_open_call(vm, context[27]);
    refalrts::alloc_name(vm, context[28], functions[efunc_Symb]);
    refalrts::alloc_close_call(vm, context[29]);
    refalrts::alloc_chars(vm, context[30], context[31], " <- [", 5);
    refalrts::alloc_open_call(vm, context[32]);
    refalrts::alloc_close_call(vm, context[33]);
    refalrts::alloc_char(vm, context[34], ']');
    refalrts::alloc_close_call(vm, context[35]);
    refalrts::alloc_close_call(vm, context[36]);
    refalrts::alloc_open_call(vm, context[37]);
    refalrts::alloc_name(vm, context[38], functions[efunc_Putout]);
    refalrts::copy_stvar(vm, context[39], context[13]);
    refalrts::copy_evar(vm, context[40], context[41], context[9], context[10]);
    refalrts::alloc_chars(vm, context[42], context[43], ")  // CmdOpenELoo", 17);
    refalrts::reinit_name(context[17], functions[efunc_Symb]);
    refalrts::update_name(context[4], functions[efunc_PutRASLCommands]);
    refalrts::reinit_char(context[12], ' ');
    refalrts::reinit_char(context[7], ' ');
    refalrts::reinit_close_bracket(context[14]);
    refalrts::reinit_char(context[8], 'p');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[37] );
    refalrts::push_stack( vm, context[36] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[11], context[14] );
    refalrts::push_stack( vm, context[35] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[33] );
    refalrts::push_stack( vm, context[32] );
    refalrts::push_stack( vm, context[29] );
    refalrts::push_stack( vm, context[27] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[36], context[43] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[0], context[14] );
    res = refalrts::splice_evar( res, context[33], context[35] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[29], context[32] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[20], context[28] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & PutRASLCommands\1/4 s.FileHandle#1/13 (/11 e.Indent#1/9 )/12 (/7 # CmdComment/14 e.Message#2/5 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_CmdComment], context[14] ) )
      continue;
    // closed e.Indent#1 as range 9
    // closed e.Message#2 as range 5
    //DEBUG: s.FileHandle#1: 13
    //DEBUG: e.Indent#1: 9
    //DEBUG: e.Message#2: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.FileHandle#1/13 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 } Tile{ HalfReuse: s.FileHandle1 #13/11 AsIs: e.Indent#1/9 HalfReuse: '/'/12 HalfReuse: '/'/7 HalfReuse: ' '/14 AsIs: e.Message#2/5 HalfReuse: >/8 } Tile{ ]] }
    refalrts::update_name(context[4], functions[efunc_Putout]);
    refalrts::reinit_svar( context[11], context[13] );
    refalrts::reinit_char(context[12], '/');
    refalrts::reinit_char(context[7], '/');
    refalrts::reinit_char(context[14], ' ');
    refalrts::reinit_close_call(context[8]);
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[8] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PutRASLCommands\1/4 s.FileHandle#1/13 (/11 e.Indent#1/9 )/12 (/7 s.Command#2/14 e.Args#2/5 )/8 >/1
  // closed e.Indent#1 as range 9
  // closed e.Args#2 as range 5
  //DEBUG: s.FileHandle#1: 13
  //DEBUG: s.Command#2: 14
  //DEBUG: e.Indent#1: 9
  //DEBUG: e.Args#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/11 {REMOVED TILE} )/12 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle#1/13 } Tile{ AsIs: e.Indent#1/9 } Tile{ HalfReuse: '('/7 AsIs: s.Command#2/14 AsIs: e.Args#2/5 HalfReuse: ')'/8 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_Putout]);
  refalrts::reinit_char(context[7], '(');
  refalrts::reinit_char(context[8], ')');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[7];
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, context[13], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PutRASLCommands_L1("PutRASLCommands\\1", 1461706403U, 3198807150U, func_gen_PutRASLCommands_L1);


static refalrts::FnResult func_PutRASLCommands(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & PutRASLCommands/4 s.FileHandle#1/5 (/8 e.Indent#1/6 )/9 e.Commands#1/2 >/1
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
  // closed e.Indent#1 as range 6
  // closed e.Commands#1 as range 2
  //DEBUG: s.FileHandle#1: 5
  //DEBUG: e.Indent#1: 6
  //DEBUG: e.Commands#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </10 & Map/11 Tile{ HalfReuse: [*]/0 Reuse: & PutRASLCommands\1/4 AsIs: s.FileHandle#1/5 AsIs: (/8 AsIs: e.Indent#1/6 AsIs: )/9 } {*}/12 Tile{ AsIs: e.Commands#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_Map]);
  refalrts::alloc_unwrapped_closure(vm, context[12], context[0]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_PutRASLCommands_L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[10] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  refalrts::wrap_closure( context[12] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PutRASLCommands("PutRASLCommands", 1461706403U, 3198807150U, func_PutRASLCommands);


static refalrts::FnResult func_gen_PutCode_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & PutCode\1/4 s.FileHandle#1/9 (/7 e.Line#2/5 )/8 >/1
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
  // closed e.Line#2 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Line#2: 5
  //DEBUG: s.FileHandle#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle#1/9 HalfReuse: ' '/7 }"  "/10 Tile{ HalfReuse: ' '/8 }"| "/12 Tile{ AsIs: e.Line#2/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[10], context[11], "  ", 2);
  refalrts::alloc_chars(vm, context[12], context[13], "| ", 2);
  refalrts::update_name(context[4], functions[efunc_Putout]);
  refalrts::reinit_char(context[7], ' ');
  refalrts::reinit_char(context[8], ' ');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PutCode_L1("PutCode\\1", 1461706403U, 3198807150U, func_gen_PutCode_L1);


static refalrts::FnResult func_PutCode(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  // </0 & PutCode/4 s.FileHandle#1/5 t.SrcPos#1/6 e.Code#1/2 >/1
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
  // closed e.Code#1 as range 2
  //DEBUG: s.FileHandle#1: 5
  //DEBUG: t.SrcPos#1: 6
  //DEBUG: e.Code#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle#1/5 }"  "/8 </10 & SrcPos/11 Tile{ AsIs: t.SrcPos#1/6 } >/12 >/13 </14 & Putout/15 s.FileHandle#1/5/16"    ======================================"/17 >/19 </20 & Map/21 [*]/22 & PutCode\1/23 s.FileHandle#1/5/24 {*}/25 Tile{ AsIs: e.Code#1/2 } >/26 </27 & Putout/28 s.FileHandle#1/5/29"    ======================================"/30 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[8], context[9], "  ", 2);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_SrcPos]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_Putout]);
  refalrts::copy_stvar(vm, context[16], context[5]);
  refalrts::alloc_chars(vm, context[17], context[18], "    ======================================", 42);
  refalrts::alloc_close_call(vm, context[19]);
  refalrts::alloc_open_call(vm, context[20]);
  refalrts::alloc_name(vm, context[21], functions[efunc_Map]);
  refalrts::alloc_closure_head(vm, context[22]);
  refalrts::alloc_name(vm, context[23], functions[efunc_gen_PutCode_L1]);
  refalrts::copy_stvar(vm, context[24], context[5]);
  refalrts::alloc_unwrapped_closure(vm, context[25], context[22]);
  refalrts::alloc_close_call(vm, context[26]);
  refalrts::alloc_open_call(vm, context[27]);
  refalrts::alloc_name(vm, context[28], functions[efunc_Putout]);
  refalrts::copy_stvar(vm, context[29], context[5]);
  refalrts::alloc_chars(vm, context[30], context[31], "    ======================================", 42);
  refalrts::update_name(context[4], functions[efunc_Putout]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[26] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[26], context[31] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[25] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  refalrts::use( res );
  refalrts::wrap_closure( context[25] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PutCode("PutCode", 1461706403U, 3198807150U, func_PutCode);


static refalrts::FnResult func_SrcPos(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & SrcPos/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & SrcPos/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & SrcPos/4 s.LineNumber#1/5 >/1
    if( ! refalrts::svar_term( context[5], context[5] ) )
      continue;
    //DEBUG: s.LineNumber#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ }"#line "/7 Tile{ AsIs: </0 Reuse: & Symb/4 AsIs: s.LineNumber#1/5 AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[7], context[8], "#line ", 6);
    refalrts::update_name(context[4], functions[efunc_Symb]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SrcPos/4 (/5 s.new#2/9 t.new#3/10 e.new#4/7 )/6 >/1
  context[7] = 0;
  context[8] = 0;
  if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 7
  do {
    // </0 & SrcPos/4 (/5 s.new#5/9 s.new#6/10 e.new#7/7 )/6 >/1
    if( ! refalrts::svar_term( context[10], context[10] ) )
      continue;
    // closed e.new#7 as range 7
    do {
      // </0 & SrcPos/4 (/5 # FileLine/9 s.Line#1/10 e.FileName#1/7 )/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_FileLine], context[9] ) )
        continue;
      // closed e.FileName#1 as range 7
      //DEBUG: s.Line#1: 10
      //DEBUG: e.FileName#1: 7

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: '#'/0 HalfReuse: 'l'/4 HalfReuse: 'i'/5 HalfReuse: 'n'/9 }"e "/12 </14 & Symb/15 Tile{ AsIs: s.Line#1/10 } >/16" \""/17 </19 & EscapeString/20 Tile{ AsIs: e.FileName#1/7 } Tile{ HalfReuse: >/6 HalfReuse: '\"'/1 ]] }
      refalrts::alloc_chars(vm, context[12], context[13], "e ", 2);
      refalrts::alloc_open_call(vm, context[14]);
      refalrts::alloc_name(vm, context[15], functions[efunc_Symb]);
      refalrts::alloc_close_call(vm, context[16]);
      refalrts::alloc_chars(vm, context[17], context[18], " \"", 2);
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::alloc_name(vm, context[20], functions[efunc_EscapeString]);
      refalrts::reinit_char(context[0], '#');
      refalrts::reinit_char(context[4], 'l');
      refalrts::reinit_char(context[5], 'i');
      refalrts::reinit_char(context[9], 'n');
      refalrts::reinit_close_call(context[6]);
      refalrts::reinit_char(context[1], '\"');
      refalrts::push_stack( vm, context[6] );
      refalrts::push_stack( vm, context[19] );
      refalrts::push_stack( vm, context[16] );
      refalrts::push_stack( vm, context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[6];
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_evar( res, context[16], context[20] );
      res = refalrts::splice_evar( res, context[10], context[10] );
      res = refalrts::splice_evar( res, context[12], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & SrcPos/4 (/5 # RowCol/9 s.Row#1/10 s.Col#1/14 )/6 >/1
    context[12] = context[7];
    context[13] = context[8];
    if( ! refalrts::ident_term( identifiers[ident_RowCol], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
      continue;
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;
    //DEBUG: s.Row#1: 10
    //DEBUG: s.Col#1: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Col#1/14 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: '#'/0 HalfReuse: 'l'/4 HalfReuse: 'i'/5 HalfReuse: 'n'/9 }"e "/15 </17 & Symb/18 Tile{ AsIs: s.Row#1/10 } >/19 ':'/20 </21 & Symb/22 Tile{ HalfReuse: s.Col1 #14/6 AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[15], context[16], "e ", 2);
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[18], functions[efunc_Symb]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::alloc_char(vm, context[20], ':');
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_Symb]);
    refalrts::reinit_char(context[0], '#');
    refalrts::reinit_char(context[4], 'l');
    refalrts::reinit_char(context[5], 'i');
    refalrts::reinit_char(context[9], 'n');
    refalrts::reinit_svar( context[6], context[14] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    res = refalrts::splice_evar( res, context[19], context[22] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[15], context[18] );
    refalrts::splice_to_freelist_open( vm, context[9], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SrcPos/4 (/5 # FileRowCol/9 (/10 s.Row#1/14 s.Col#1/15 )/11 e.FileName#1/7 )/6 >/1
  context[12] = 0;
  context[13] = 0;
  if( ! refalrts::brackets_term( context[12], context[13], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::ident_term( identifiers[ident_FileRowCol], context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#1 as range 7
  if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[15], context[12], context[13] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[12], context[13] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.FileName#1: 7
  //DEBUG: s.Row#1: 14
  //DEBUG: s.Col#1: 15

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ }"#li"/16 Tile{ HalfReuse: 'n'/0 HalfReuse: 'e'/4 HalfReuse: ' '/5 HalfReuse: </9 HalfReuse: & Symb/10 AsIs: s.Row#1/14 } >/18 ':'/19 </20 & Symb/21 Tile{ AsIs: s.Col#1/15 } >/22" \""/23 </25 Tile{ HalfReuse: & EscapeString/11 AsIs: e.FileName#1/7 HalfReuse: >/6 HalfReuse: '\"'/1 ]] }
  refalrts::alloc_chars(vm, context[16], context[17], "#li", 3);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::alloc_char(vm, context[19], ':');
  refalrts::alloc_open_call(vm, context[20]);
  refalrts::alloc_name(vm, context[21], functions[efunc_Symb]);
  refalrts::alloc_close_call(vm, context[22]);
  refalrts::alloc_chars(vm, context[23], context[24], " \"", 2);
  refalrts::alloc_open_call(vm, context[25]);
  refalrts::reinit_char(context[0], 'n');
  refalrts::reinit_char(context[4], 'e');
  refalrts::reinit_char(context[5], ' ');
  refalrts::reinit_open_call(context[9]);
  refalrts::reinit_name(context[10], functions[efunc_Symb]);
  refalrts::reinit_name(context[11], functions[efunc_EscapeString]);
  refalrts::reinit_close_call(context[6]);
  refalrts::reinit_char(context[1], '\"');
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[22] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[11];
  res = refalrts::splice_evar( res, context[22], context[25] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[18], context[21] );
  res = refalrts::splice_evar( res, context[0], context[14] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SrcPos("SrcPos", 1461706403U, 3198807150U, func_SrcPos);


//End of file
