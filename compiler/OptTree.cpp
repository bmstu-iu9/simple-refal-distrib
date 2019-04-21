// This file automatically generated from 'OptTree.ref'
// Don't edit! Edit 'OptTree.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_1493607253_2715228496

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
  efunc_OptTreem_Aux = 14,
  efunc_gen_OptTree_A3 = 15,
  efunc_Configm_GetOptSpec = 16,
  efunc_Configm_GetOptDrive = 17,
  efunc_gen_OptTree_A2 = 18,
  efunc_gen_OptTree_A1 = 19,
  efunc_Configm_GetTreeOptCycles = 20,
  efunc_DisplayName = 21,
  efunc_Logm_PutLine = 22,
  efunc_Map = 23,
  efunc_gen_OptTreem_Aux_L1 = 24,
  efunc_DoOptTree = 25,
  efunc_gen_OptTreem_Aux_A3 = 26,
  efunc_OptTreem_Specm_ExtractOptInfo = 27,
  efunc_gen_OptTreem_Aux_A2 = 28,
  efunc_OptTreem_Drivem_ExtractOptInfo = 29,
  efunc_gen_OptTreem_Aux_A1 = 30,
  efunc_gen_DoOptTree_S1A3 = 31,
  efunc_OptTreem_Simplem_Finalize = 32,
  efunc_gen_DoOptTree_S1A2 = 33,
  efunc_OptTreem_Specm_Finalize = 34,
  efunc_Dec = 35,
  efunc_gen_DoOptTree_S2A6 = 36,
  efunc_gen_DoOptTree_S2A6B1 = 37,
  efunc_gen_DoOptTree_S2A5 = 38,
  efunc_OptTreem_Spec = 39,
  efunc_OptTreem_Drive = 40,
  efunc_gen_DoOptTree_S2A4 = 41,
  efunc_OptTreem_Simple = 42,
  efunc_gen_DoOptTree_S2A3 = 43,
  efunc_gen_DoOptTree_S2A2 = 44,
  efunc_OptTreem_Drivem_Finalize = 45,
  efunc_gen_DoOptTree_S1A1 = 46,
  efunc_gen_DoOptTree_S2A1 = 47,
  efunc_Logm_AST = 48,
  efunc_Symb = 49,
  efunc_OptBody = 50,
  efunc_gen_OptTreem_Simple_L1 = 51,
  efunc_OptSentence = 52,
  efunc_OptResult = 53,
  efunc_gen_OptSentence_L1 = 54,
  efunc_gen_OptResult_A1 = 55,
  efunc_OptResultRec = 56,
  efunc_OptResultTerm = 57,
  efunc_MapReduce = 58,
  efunc_gen_OptResultTerm_S1A1 = 59,
  efunc_gen_OptResultTerm_S2A1 = 60,
  efunc_gen_OptResultTerm_S3A1 = 61,
  efunc_gen_OptResultTerm_S4C1 = 62,
  efunc_gen_OptResultTerm_S4A2 = 63,
  efunc_gen_OptResultTerm_S5B1 = 64,
  efunc_CleanupColdm_Body = 65,
  efunc_gen_OptTreem_Simplem_Finalize_L1 = 66,
  efunc_CleanupColdm_Sentence = 67,
  efunc_CleanupColdm_Result = 68,
  efunc_gen_CleanupColdm_Sentence_L1 = 69,
  efunc_CleanupColdm_Term = 70,
};


enum ident {
  ident_k43_ = 0,
  ident_k47_ = 1,
  ident_k37_ = 2,
  ident_k42_ = 3,
  ident_k63_ = 4,
  ident_m_ = 5,
  ident_NoOpt = 6,
  ident_Function = 7,
  ident_Sentences = 8,
  ident_Condition = 9,
  ident_Cold = 10,
  ident_Brackets = 11,
  ident_ADTm_Brackets = 12,
  ident_Hot = 13,
  ident_CallBrackets = 14,
  ident_Symbol = 15,
  ident_Name = 16,
  ident_ColdCallBrackets = 17,
  ident_ClosureBrackets = 18,
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

static refalrts::NativeReference nat_ref_Mu("Mu", 1493607253U, 2715228496U, func_Mu);


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
    refalrts::alloc_number(vm, context[9], 2715228496UL);
    refalrts::update_name(context[4], functions[efunc_u_u_FindMuPtr]);
    refalrts::reinit_number(context[5], 1493607253UL);
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
  refalrts::reinit_number(context[5], 1493607253UL);
  refalrts::reinit_number(context[7], 2715228496UL);
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

static refalrts::NativeReference nat_ref_gen_u_u_Mum_Aux_S13B1("__Mu-Aux$13:1", 1493607253U, 2715228496U, func_gen_u_u_Mum_Aux_S13B1);


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

static refalrts::NativeReference nat_ref_u_u_Mum_Aux("__Mu-Aux", 1493607253U, 2715228496U, func_u_u_Mum_Aux);


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

static refalrts::NativeReference nat_ref_Residue("Residue", 1493607253U, 2715228496U, func_Residue);


static refalrts::FnResult func_gen_OptTree_A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & OptTree=3/4 s.Cycles#2/5 s.OptDrive#3/6 (/9 e.AST#1/7 )/10 s.OptSpec#4/11 >/1
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
  // closed e.AST#1 as range 7
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Cycles#2: 5
  //DEBUG: s.OptDrive#3: 6
  //DEBUG: e.AST#1: 7
  //DEBUG: s.OptSpec#4: 11

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.OptSpec#4/11 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & OptTree-Aux/4 AsIs: s.Cycles#2/5 AsIs: s.OptDrive#3/6 HalfReuse: s.OptSpec4 #11/9 AsIs: e.AST#1/7 HalfReuse: >/10 } Tile{ ]] }
  refalrts::update_name(context[4], functions[efunc_OptTreem_Aux]);
  refalrts::reinit_svar( context[9], context[11] );
  refalrts::reinit_close_call(context[10]);
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, context[10], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OptTree_A3("OptTree=3", 1493607253U, 2715228496U, func_gen_OptTree_A3);


static refalrts::FnResult func_gen_OptTree_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & OptTree=2/4 s.Cycles#2/5 (/8 e.AST#1/6 )/9 t.Config#1/10 s.OptDrive#3/12 >/1
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
  // closed e.AST#1 as range 6
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Cycles#2: 5
  //DEBUG: e.AST#1: 6
  //DEBUG: t.Config#1: 10
  //DEBUG: s.OptDrive#3: 12

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & OptTree=3/13 Tile{ AsIs: s.Cycles#2/5 } Tile{ AsIs: s.OptDrive#3/12 } Tile{ AsIs: (/8 AsIs: e.AST#1/6 AsIs: )/9 } {*}/14 </15 & Config-GetOptSpec/16 Tile{ AsIs: t.Config#1/10 } >/17 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_OptTree_A3]);
  refalrts::alloc_unwrapped_closure(vm, context[14], context[4]);
  refalrts::alloc_open_call(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_Configm_GetOptSpec]);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::reinit_closure_head(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[15] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[14], context[16] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  refalrts::use( res );
  refalrts::wrap_closure( context[14] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OptTree_A2("OptTree=2", 1493607253U, 2715228496U, func_gen_OptTree_A2);


static refalrts::FnResult func_gen_OptTree_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & OptTree=1/4 (/7 e.AST#1/5 )/8 t.Config#1/9 s.Cycles#2/11 >/1
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
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.AST#1: 5
  //DEBUG: t.Config#1: 9
  //DEBUG: s.Cycles#2: 11

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.Cycles#2/11 {REMOVED TILE}
  //RESULT: Tile{ [[ } </12 [*]/13 Tile{ HalfReuse: & OptTree=2/0 HalfReuse: s.Cycles2 #11/4 AsIs: (/7 AsIs: e.AST#1/5 AsIs: )/8 AsIs: t.Config#1/9 } {*}/14 </15 & Config-GetOptDrive/16 t.Config#1/9/17 >/19 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[12]);
  refalrts::alloc_closure_head(vm, context[13]);
  refalrts::alloc_unwrapped_closure(vm, context[14], context[13]);
  refalrts::alloc_open_call(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_Configm_GetOptDrive]);
  refalrts::copy_evar(vm, context[17], context[18], context[9], context[10]);
  refalrts::alloc_close_call(vm, context[19]);
  refalrts::reinit_name(context[0], functions[efunc_gen_OptTree_A2]);
  refalrts::reinit_svar( context[4], context[11] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[15] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[14], context[19] );
  res = refalrts::splice_evar( res, context[0], context[10] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  refalrts::wrap_closure( context[14] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OptTree_A1("OptTree=1", 1493607253U, 2715228496U, func_gen_OptTree_A1);


static refalrts::FnResult func_OptTree(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & OptTree/4 t.Config#1/5 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#1 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 [*]/8 & OptTree=1/9 (/10 Tile{ AsIs: e.AST#1/2 } )/11 t.Config#1/5/12 {*}/14 Tile{ AsIs: </0 Reuse: & Config-GetTreeOptCycles/4 AsIs: t.Config#1/5 } >/15 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_closure_head(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_gen_OptTree_A1]);
  refalrts::alloc_open_bracket(vm, context[10]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::copy_evar(vm, context[12], context[13], context[5], context[6]);
  refalrts::alloc_unwrapped_closure(vm, context[14], context[8]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::update_name(context[4], functions[efunc_Configm_GetTreeOptCycles]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[11], context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[10] );
  refalrts::use( res );
  refalrts::wrap_closure( context[14] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OptTree("OptTree", 0U, 0U, func_OptTree);


static refalrts::FnResult func_gen_OptTreem_Aux_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & OptTree-Aux\1/4 (/7 e.FuncName#5/5 )/8 >/1
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
  // closed e.FuncName#5 as range 5
  //DEBUG: e.FuncName#5: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: </4 HalfReuse: & DisplayName/7 AsIs: e.FuncName#5/5 HalfReuse: >/8 } Tile{ ]] }
  refalrts::reinit_char(context[0], ' ');
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_DisplayName]);
  refalrts::reinit_close_call(context[8]);
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, context[8], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OptTreem_Aux_L1("OptTree-Aux\\1", 1493607253U, 2715228496U, func_gen_OptTreem_Aux_L1);


static refalrts::FnResult func_gen_OptTreem_Aux_A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 39 elems
  refalrts::Iter context[39];
  refalrts::zeros( context, 39 );
  // </0 & OptTree-Aux=3/4 s.Cycles#1/5 s.OptDrive#1/6 s.OptSpec#1/7 (/10 e.DriveFuncNames#2/8 )/11 (/14 e.DriveInfo-Specific#2/12 )/15 (/18 e.SpecFuncNames#3/16 )/19 (/22 e.SpecInfo-Specific#3/20 )/23 (/26 e.AST#3/24 )/27 e.OptimizableFunctions#4/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
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
  context[16] = 0;
  context[17] = 0;
  context[18] = refalrts::brackets_left( context[16], context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[18], context[19]);
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
  // closed e.DriveFuncNames#2 as range 8
  // closed e.DriveInfo-Specific#2 as range 12
  // closed e.SpecFuncNames#3 as range 16
  // closed e.SpecInfo-Specific#3 as range 20
  // closed e.AST#3 as range 24
  // closed e.OptimizableFunctions#4 as range 2
  //DEBUG: s.Cycles#1: 5
  //DEBUG: s.OptDrive#1: 6
  //DEBUG: s.OptSpec#1: 7
  //DEBUG: e.DriveFuncNames#2: 8
  //DEBUG: e.DriveInfo-Specific#2: 12
  //DEBUG: e.SpecFuncNames#3: 16
  //DEBUG: e.SpecInfo-Specific#3: 20
  //DEBUG: e.AST#3: 24
  //DEBUG: e.OptimizableFunctions#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </11 } & Log-PutLine/28"Optimizable functions:"/29 </31 & Map/32 Tile{ HalfReuse: & OptTree-Aux\1/27 AsIs: e.OptimizableFunctions#4/2 AsIs: >/1 } >/33 Tile{ AsIs: </0 Reuse: & DoOptTree/4 AsIs: s.Cycles#1/5 AsIs: s.OptDrive#1/6 AsIs: s.OptSpec#1/7 AsIs: (/10 } (/34 Tile{ AsIs: e.DriveFuncNames#2/8 } Tile{ HalfReuse: )/14 AsIs: e.DriveInfo-Specific#2/12 AsIs: )/15 AsIs: (/18 } (/35 Tile{ AsIs: e.SpecFuncNames#3/16 } Tile{ HalfReuse: )/22 AsIs: e.SpecInfo-Specific#3/20 AsIs: )/23 AsIs: (/26 } e.OptimizableFunctions#4/2/36 Tile{ AsIs: )/19 } Tile{ AsIs: e.AST#3/24 } >/38 Tile{ ]] }
  refalrts::alloc_name(vm, context[28], functions[efunc_Logm_PutLine]);
  refalrts::alloc_chars(vm, context[29], context[30], "Optimizable functions:", 22);
  refalrts::alloc_open_call(vm, context[31]);
  refalrts::alloc_name(vm, context[32], functions[efunc_Map]);
  refalrts::alloc_close_call(vm, context[33]);
  refalrts::alloc_open_bracket(vm, context[34]);
  refalrts::alloc_open_bracket(vm, context[35]);
  refalrts::copy_evar(vm, context[36], context[37], context[2], context[3]);
  refalrts::alloc_close_call(vm, context[38]);
  refalrts::reinit_open_call(context[11]);
  refalrts::reinit_name(context[27], functions[efunc_gen_OptTreem_Aux_L1]);
  refalrts::update_name(context[4], functions[efunc_DoOptTree]);
  refalrts::reinit_close_bracket(context[14]);
  refalrts::reinit_close_bracket(context[22]);
  refalrts::push_stack( vm, context[38] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[26], context[19] );
  refalrts::link_brackets( context[18], context[23] );
  refalrts::link_brackets( context[35], context[22] );
  refalrts::link_brackets( context[10], context[15] );
  refalrts::link_brackets( context[34], context[14] );
  refalrts::push_stack( vm, context[33] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[31] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[38], context[38] );
  res = refalrts::splice_evar( res, context[24], context[25] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[36], context[37] );
  res = refalrts::splice_evar( res, context[22], context[26] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[35], context[35] );
  res = refalrts::splice_evar( res, context[14], context[18] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_evar( res, context[34], context[34] );
  res = refalrts::splice_evar( res, context[0], context[10] );
  res = refalrts::splice_evar( res, context[33], context[33] );
  res = refalrts::splice_evar( res, context[27], context[1] );
  res = refalrts::splice_evar( res, context[28], context[32] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OptTreem_Aux_A3("OptTree-Aux=3", 1493607253U, 2715228496U, func_gen_OptTreem_Aux_A3);


static refalrts::FnResult func_gen_OptTreem_Aux_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  // </0 & OptTree-Aux=2/4 s.Cycles#1/5 s.OptDrive#1/6 s.OptSpec#1/7 (/10 e.DriveFuncNames#2/8 )/11 (/14 e.DriveInfo-Specific#2/12 )/15 (/18 (/22 e.SpecFuncNames#3/20 )/23 e.SpecInfo-Specific#3/16 )/19 e.AST#3/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
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
  context[16] = 0;
  context[17] = 0;
  context[18] = refalrts::brackets_left( context[16], context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[18], context[19]);
  context[20] = 0;
  context[21] = 0;
  context[22] = refalrts::brackets_left( context[20], context[21], context[16], context[17] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[22], context[23]);
  // closed e.DriveFuncNames#2 as range 8
  // closed e.DriveInfo-Specific#2 as range 12
  // closed e.SpecFuncNames#3 as range 20
  // closed e.SpecInfo-Specific#3 as range 16
  // closed e.AST#3 as range 2
  //DEBUG: s.Cycles#1: 5
  //DEBUG: s.OptDrive#1: 6
  //DEBUG: s.OptSpec#1: 7
  //DEBUG: e.DriveFuncNames#2: 8
  //DEBUG: e.DriveInfo-Specific#2: 12
  //DEBUG: e.SpecFuncNames#3: 20
  //DEBUG: e.SpecInfo-Specific#3: 16
  //DEBUG: e.AST#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </24 Tile{ HalfReuse: [*]/0 Reuse: & OptTree-Aux=3/4 AsIs: s.Cycles#1/5 AsIs: s.OptDrive#1/6 AsIs: s.OptSpec#1/7 AsIs: (/10 AsIs: e.DriveFuncNames#2/8 AsIs: )/11 AsIs: (/14 AsIs: e.DriveInfo-Specific#2/12 AsIs: )/15 AsIs: (/18 } Tile{ AsIs: e.SpecFuncNames#3/20 } )/25 Tile{ HalfReuse: (/23 AsIs: e.SpecInfo-Specific#3/16 AsIs: )/19 } Tile{ AsIs: (/22 } Tile{ AsIs: e.AST#3/2 } )/26 {*}/27 e.DriveFuncNames#2/8/28 e.SpecFuncNames#3/20/30 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[24]);
  refalrts::alloc_close_bracket(vm, context[25]);
  refalrts::alloc_close_bracket(vm, context[26]);
  refalrts::alloc_unwrapped_closure(vm, context[27], context[0]);
  refalrts::copy_evar(vm, context[28], context[29], context[8], context[9]);
  refalrts::copy_evar(vm, context[30], context[31], context[20], context[21]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_OptTreem_Aux_A3]);
  refalrts::reinit_open_bracket(context[23]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[24] );
  refalrts::link_brackets( context[22], context[26] );
  refalrts::link_brackets( context[23], context[19] );
  refalrts::link_brackets( context[18], context[25] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[30], context[31] );
  res = refalrts::splice_evar( res, context[28], context[29] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[23], context[19] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[0], context[18] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  refalrts::use( res );
  refalrts::wrap_closure( context[27] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OptTreem_Aux_A2("OptTree-Aux=2", 1493607253U, 2715228496U, func_gen_OptTreem_Aux_A2);


static refalrts::FnResult func_gen_OptTreem_Aux_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & OptTree-Aux=1/4 s.Cycles#1/5 s.OptDrive#1/6 s.OptSpec#1/7 (/10 (/14 e.DriveFuncNames#2/12 )/15 e.DriveInfo-Specific#2/8 )/11 e.AST#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
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
  context[14] = refalrts::brackets_left( context[12], context[13], context[8], context[9] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[14], context[15]);
  // closed e.DriveFuncNames#2 as range 12
  // closed e.DriveInfo-Specific#2 as range 8
  // closed e.AST#2 as range 2
  //DEBUG: s.Cycles#1: 5
  //DEBUG: s.OptDrive#1: 6
  //DEBUG: s.OptSpec#1: 7
  //DEBUG: e.DriveFuncNames#2: 12
  //DEBUG: e.DriveInfo-Specific#2: 8
  //DEBUG: e.AST#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </14 } Tile{ HalfReuse: [*]/0 Reuse: & OptTree-Aux=2/4 AsIs: s.Cycles#1/5 AsIs: s.OptDrive#1/6 AsIs: s.OptSpec#1/7 AsIs: (/10 } Tile{ AsIs: e.DriveFuncNames#2/12 } )/16 Tile{ HalfReuse: (/15 AsIs: e.DriveInfo-Specific#2/8 AsIs: )/11 } {*}/17 </18 & OptTree-Spec-ExtractOptInfo/19 s.OptSpec#1/7/20 Tile{ AsIs: e.AST#2/2 } >/21 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[16]);
  refalrts::alloc_unwrapped_closure(vm, context[17], context[0]);
  refalrts::alloc_open_call(vm, context[18]);
  refalrts::alloc_name(vm, context[19], functions[efunc_OptTreem_Specm_ExtractOptInfo]);
  refalrts::copy_stvar(vm, context[20], context[7]);
  refalrts::alloc_close_call(vm, context[21]);
  refalrts::reinit_open_call(context[14]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_OptTreem_Aux_A2]);
  refalrts::reinit_open_bracket(context[15]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[18] );
  refalrts::link_brackets( context[15], context[11] );
  refalrts::link_brackets( context[10], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[17], context[20] );
  res = refalrts::splice_evar( res, context[15], context[11] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[0], context[10] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  refalrts::use( res );
  refalrts::wrap_closure( context[17] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OptTreem_Aux_A1("OptTree-Aux=1", 1493607253U, 2715228496U, func_gen_OptTreem_Aux_A1);


static refalrts::FnResult func_OptTreem_Aux(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & OptTree-Aux/4 s.Cycles#1/5 s.OptDrive#1/6 s.OptSpec#1/7 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#1 as range 2
  //DEBUG: s.Cycles#1: 5
  //DEBUG: s.OptDrive#1: 6
  //DEBUG: s.OptSpec#1: 7
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </8 Tile{ HalfReuse: [*]/0 Reuse: & OptTree-Aux=1/4 AsIs: s.Cycles#1/5 AsIs: s.OptDrive#1/6 AsIs: s.OptSpec#1/7 } {*}/9 </10 & OptTree-Drive-ExtractOptInfo/11 s.OptDrive#1/6/12 Tile{ AsIs: e.AST#1/2 } >/13 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_unwrapped_closure(vm, context[9], context[0]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_OptTreem_Drivem_ExtractOptInfo]);
  refalrts::copy_stvar(vm, context[12], context[6]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_OptTreem_Aux_A1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[12] );
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  refalrts::use( res );
  refalrts::wrap_closure( context[9] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OptTreem_Aux("OptTree-Aux", 1493607253U, 2715228496U, func_OptTreem_Aux);


static refalrts::FnResult func_gen_DoOptTree_S1A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & DoOptTree$1=3/4 e.AST#4/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#4 as range 2
  //DEBUG: e.AST#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DoOptTree$1=3/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.AST#4/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoOptTree_S1A3("DoOptTree$1=3", 1493607253U, 2715228496U, func_gen_DoOptTree_S1A3);


static refalrts::FnResult func_gen_DoOptTree_S1A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & DoOptTree$1=2/4 e.AST#3/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#3 as range 2
  //DEBUG: e.AST#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & DoOptTree$1=3/6 Tile{ AsIs: </0 Reuse: & OptTree-Simple-Finalize/4 AsIs: e.AST#3/2 AsIs: >/1 } >/7 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_DoOptTree_S1A3]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_OptTreem_Simplem_Finalize]);
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

static refalrts::NativeReference nat_ref_gen_DoOptTree_S1A2("DoOptTree$1=2", 1493607253U, 2715228496U, func_gen_DoOptTree_S1A2);


static refalrts::FnResult func_gen_DoOptTree_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & DoOptTree$1=1/4 s.OptSpec#1/5 (/8 e.SpecInfo#1/6 )/9 e.AST#2/2 >/1
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
  // closed e.SpecInfo#1 as range 6
  // closed e.AST#2 as range 2
  //DEBUG: s.OptSpec#1: 5
  //DEBUG: e.SpecInfo#1: 6
  //DEBUG: e.AST#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </10 & DoOptTree$1=2/11 Tile{ AsIs: </0 Reuse: & OptTree-Spec-Finalize/4 AsIs: s.OptSpec#1/5 AsIs: (/8 AsIs: e.SpecInfo#1/6 AsIs: )/9 AsIs: e.AST#2/2 AsIs: >/1 } >/12 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_DoOptTree_S1A2]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::update_name(context[4], functions[efunc_OptTreem_Specm_Finalize]);
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoOptTree_S1A1("DoOptTree$1=1", 1493607253U, 2715228496U, func_gen_DoOptTree_S1A1);


static refalrts::FnResult func_gen_DoOptTree_S2A6(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & DoOptTree$2=6/4 s.OptDrive#1/5 s.OptSpec#1/6 (/9 e.DriveInfo#5/7 )/10 (/13 e.SpecInfo#6/11 )/14 (/17 e.OptimizableFunctions#1/15 )/18 s.Cycles#7/19 e.AST#7/2 >/1
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
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  // closed e.DriveInfo#5 as range 7
  // closed e.SpecInfo#6 as range 11
  // closed e.OptimizableFunctions#1 as range 15
  if( ! refalrts::svar_left( context[19], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#7 as range 2
  //DEBUG: s.OptDrive#1: 5
  //DEBUG: s.OptSpec#1: 6
  //DEBUG: e.DriveInfo#5: 7
  //DEBUG: e.SpecInfo#6: 11
  //DEBUG: e.OptimizableFunctions#1: 15
  //DEBUG: s.Cycles#7: 19
  //DEBUG: e.AST#7: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.Cycles#7/19 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </20 Tile{ HalfReuse: & DoOptTree/0 HalfReuse: s.Cycles7 #19/4 AsIs: s.OptDrive#1/5 AsIs: s.OptSpec#1/6 AsIs: (/9 AsIs: e.DriveInfo#5/7 AsIs: )/10 AsIs: (/13 AsIs: e.SpecInfo#6/11 AsIs: )/14 AsIs: (/17 AsIs: e.OptimizableFunctions#1/15 AsIs: )/18 } Tile{ AsIs: e.AST#7/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[20]);
  refalrts::reinit_name(context[0], functions[efunc_DoOptTree]);
  refalrts::reinit_svar( context[4], context[19] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[20] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[18] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoOptTree_S2A6("DoOptTree$2=6", 1493607253U, 2715228496U, func_gen_DoOptTree_S2A6);


static refalrts::FnResult func_gen_DoOptTree_S2A6B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & DoOptTree$2=6:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoOptTree$2=6:1/4 (/7 e.new#1/5 )/8 s.new#2/9 e.new#3/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & DoOptTree$2=6:1/4 (/7 e.OriginAST#3/5 )/8 s.Cycles#1/9 e.OriginAST#3/10 >/1
    // closed e.OriginAST#3 as range 5
    if( ! refalrts::repeated_evar_left( vm, context[10], context[11], context[5], context[6], context[2], context[3] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //DEBUG: s.Cycles#1: 9
    //DEBUG: e.OriginAST#3: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} & DoOptTree$2=6:1/4 (/7 e.OriginAST#3/5 )/8 s.Cycles#1/9 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 0/0 } Tile{ AsIs: e.OriginAST#3/10 } Tile{ ]] }
    refalrts::reinit_number(context[0], 0UL);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::splice_to_freelist_open( vm, context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoOptTree$2=6:1/4 (/7 e.OriginAST#3/5 )/8 s.Cycles#1/9 e.AST#7/2 >/1
  // closed e.OriginAST#3 as range 5
  // closed e.AST#7 as range 2
  //DEBUG: s.Cycles#1: 9
  //DEBUG: e.OriginAST#3: 5
  //DEBUG: e.AST#7: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} e.OriginAST#3/5 )/8 s.Cycles#1/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Dec/4 HalfReuse: s.Cycles1 #9/7 } Tile{ AsIs: >/1 } Tile{ AsIs: e.AST#7/2 } Tile{ ]] }
  refalrts::update_name(context[4], functions[efunc_Dec]);
  refalrts::reinit_svar( context[7], context[9] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoOptTree_S2A6B1("DoOptTree$2=6:1", 1493607253U, 2715228496U, func_gen_DoOptTree_S2A6B1);


static refalrts::FnResult func_gen_DoOptTree_S2A5(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  // </0 & DoOptTree$2=5/4 s.OptDrive#1/5 s.OptSpec#1/6 (/9 e.DriveInfo#5/7 )/10 (/13 e.OptimizableFunctions#1/11 )/14 (/17 e.OriginAST#3/15 )/18 s.Cycles#1/19 (/22 e.SpecInfo#6/20 )/23 e.AST#6/2 >/1
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
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  // closed e.DriveInfo#5 as range 7
  // closed e.OptimizableFunctions#1 as range 11
  // closed e.OriginAST#3 as range 15
  if( ! refalrts::svar_left( context[19], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[20] = 0;
  context[21] = 0;
  context[22] = refalrts::brackets_left( context[20], context[21], context[2], context[3] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[22], context[23]);
  // closed e.SpecInfo#6 as range 20
  // closed e.AST#6 as range 2
  //DEBUG: s.OptDrive#1: 5
  //DEBUG: s.OptSpec#1: 6
  //DEBUG: e.DriveInfo#5: 7
  //DEBUG: e.OptimizableFunctions#1: 11
  //DEBUG: e.OriginAST#3: 15
  //DEBUG: s.Cycles#1: 19
  //DEBUG: e.SpecInfo#6: 20
  //DEBUG: e.AST#6: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </24 Tile{ HalfReuse: [*]/0 Reuse: & DoOptTree$2=6/4 AsIs: s.OptDrive#1/5 AsIs: s.OptSpec#1/6 AsIs: (/9 AsIs: e.DriveInfo#5/7 AsIs: )/10 AsIs: (/13 } Tile{ AsIs: e.SpecInfo#6/20 } Tile{ AsIs: )/23 } (/25 Tile{ AsIs: e.OptimizableFunctions#1/11 } )/26 {*}/27 </28 [*]/29 Tile{ HalfReuse: & DoOptTree$2=6:1/14 AsIs: (/17 AsIs: e.OriginAST#3/15 AsIs: )/18 AsIs: s.Cycles#1/19 HalfReuse: {*}/22 } Tile{ AsIs: e.AST#6/2 } >/30 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[24]);
  refalrts::alloc_open_bracket(vm, context[25]);
  refalrts::alloc_close_bracket(vm, context[26]);
  refalrts::alloc_unwrapped_closure(vm, context[27], context[0]);
  refalrts::alloc_open_call(vm, context[28]);
  refalrts::alloc_closure_head(vm, context[29]);
  refalrts::alloc_close_call(vm, context[30]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_DoOptTree_S2A6]);
  refalrts::reinit_name(context[14], functions[efunc_gen_DoOptTree_S2A6B1]);
  refalrts::reinit_unwrapped_closure(context[22], context[29]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[24] );
  refalrts::push_stack( vm, context[30] );
  refalrts::push_stack( vm, context[28] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[25], context[26] );
  refalrts::link_brackets( context[13], context[23] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[30], context[30] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[14], context[22] );
  res = refalrts::splice_evar( res, context[26], context[29] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[0], context[13] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  refalrts::use( res );
  refalrts::wrap_closure( context[27] );
  refalrts::wrap_closure( context[22] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoOptTree_S2A5("DoOptTree$2=5", 1493607253U, 2715228496U, func_gen_DoOptTree_S2A5);


static refalrts::FnResult func_gen_DoOptTree_S2A4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & DoOptTree$2=4/4 s.OptDrive#1/5 s.OptSpec#1/6 (/9 e.OptimizableFunctions#1/7 )/10 (/13 e.OriginAST#3/11 )/14 s.Cycles#1/15 (/18 e.SpecInfo#1/16 )/19 (/22 e.DriveInfo#5/20 )/23 e.AST#5/2 >/1
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
  // closed e.OptimizableFunctions#1 as range 7
  // closed e.OriginAST#3 as range 11
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[16] = 0;
  context[17] = 0;
  context[18] = refalrts::brackets_left( context[16], context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[18], context[19]);
  context[20] = 0;
  context[21] = 0;
  context[22] = refalrts::brackets_left( context[20], context[21], context[2], context[3] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[22], context[23]);
  // closed e.SpecInfo#1 as range 16
  // closed e.DriveInfo#5 as range 20
  // closed e.AST#5 as range 2
  //DEBUG: s.OptDrive#1: 5
  //DEBUG: s.OptSpec#1: 6
  //DEBUG: e.OptimizableFunctions#1: 7
  //DEBUG: e.OriginAST#3: 11
  //DEBUG: s.Cycles#1: 15
  //DEBUG: e.SpecInfo#1: 16
  //DEBUG: e.DriveInfo#5: 20
  //DEBUG: e.AST#5: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & DoOptTree$2=5/24 Tile{ AsIs: s.OptDrive#1/5 } Tile{ HalfReuse: s.OptSpec1 #6/19 AsIs: (/22 AsIs: e.DriveInfo#5/20 AsIs: )/23 } Tile{ AsIs: (/9 AsIs: e.OptimizableFunctions#1/7 AsIs: )/10 AsIs: (/13 AsIs: e.OriginAST#3/11 AsIs: )/14 AsIs: s.Cycles#1/15 HalfReuse: {*}/18 } </25 & OptTree-Spec/26 Tile{ AsIs: s.OptSpec#1/6 } (/27 Tile{ AsIs: e.SpecInfo#1/16 } )/28 Tile{ AsIs: e.AST#5/2 } >/29 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[24], functions[efunc_gen_DoOptTree_S2A5]);
  refalrts::alloc_open_call(vm, context[25]);
  refalrts::alloc_name(vm, context[26], functions[efunc_OptTreem_Spec]);
  refalrts::alloc_open_bracket(vm, context[27]);
  refalrts::alloc_close_bracket(vm, context[28]);
  refalrts::alloc_close_call(vm, context[29]);
  refalrts::reinit_closure_head(context[4]);
  refalrts::reinit_svar( context[19], context[6] );
  refalrts::reinit_unwrapped_closure(context[18], context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[29] );
  refalrts::push_stack( vm, context[25] );
  refalrts::link_brackets( context[27], context[28] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::link_brackets( context[22], context[23] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[29], context[29] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[28], context[28] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[27], context[27] );
  res = refalrts::splice_evar( res, context[6], context[6] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[9], context[18] );
  res = refalrts::splice_evar( res, context[19], context[23] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  refalrts::use( res );
  refalrts::wrap_closure( context[18] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoOptTree_S2A4("DoOptTree$2=4", 1493607253U, 2715228496U, func_gen_DoOptTree_S2A4);


static refalrts::FnResult func_gen_DoOptTree_S2A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & DoOptTree$2=3/4 s.OptDrive#1/5 s.OptSpec#1/6 (/9 e.OptimizableFunctions#1/7 )/10 (/13 e.OriginAST#3/11 )/14 s.Cycles#1/15 (/18 e.SpecInfo#1/16 )/19 (/22 e.DriveInfo#1/20 )/23 e.AST#4/2 >/1
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
  // closed e.OptimizableFunctions#1 as range 7
  // closed e.OriginAST#3 as range 11
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[16] = 0;
  context[17] = 0;
  context[18] = refalrts::brackets_left( context[16], context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[18], context[19]);
  context[20] = 0;
  context[21] = 0;
  context[22] = refalrts::brackets_left( context[20], context[21], context[2], context[3] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[22], context[23]);
  // closed e.SpecInfo#1 as range 16
  // closed e.DriveInfo#1 as range 20
  // closed e.AST#4 as range 2
  //DEBUG: s.OptDrive#1: 5
  //DEBUG: s.OptSpec#1: 6
  //DEBUG: e.OptimizableFunctions#1: 7
  //DEBUG: e.OriginAST#3: 11
  //DEBUG: s.Cycles#1: 15
  //DEBUG: e.SpecInfo#1: 16
  //DEBUG: e.DriveInfo#1: 20
  //DEBUG: e.AST#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </24 Tile{ HalfReuse: [*]/0 Reuse: & DoOptTree$2=4/4 AsIs: s.OptDrive#1/5 AsIs: s.OptSpec#1/6 AsIs: (/9 AsIs: e.OptimizableFunctions#1/7 AsIs: )/10 AsIs: (/13 AsIs: e.OriginAST#3/11 AsIs: )/14 AsIs: s.Cycles#1/15 AsIs: (/18 AsIs: e.SpecInfo#1/16 AsIs: )/19 HalfReuse: {*}/22 } </25 & OptTree-Drive/26 s.OptDrive#1/5/27 (/28 Tile{ AsIs: e.DriveInfo#1/20 } Tile{ AsIs: )/23 AsIs: e.AST#4/2 AsIs: >/1 } >/29 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[24]);
  refalrts::alloc_open_call(vm, context[25]);
  refalrts::alloc_name(vm, context[26], functions[efunc_OptTreem_Drive]);
  refalrts::copy_stvar(vm, context[27], context[5]);
  refalrts::alloc_open_bracket(vm, context[28]);
  refalrts::alloc_close_call(vm, context[29]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_DoOptTree_S2A4]);
  refalrts::reinit_unwrapped_closure(context[22], context[0]);
  refalrts::push_stack( vm, context[29] );
  refalrts::push_stack( vm, context[24] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[25] );
  refalrts::link_brackets( context[28], context[23] );
  refalrts::link_brackets( context[18], context[19] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[29], context[29] );
  res = refalrts::splice_evar( res, context[23], context[1] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[25], context[28] );
  res = refalrts::splice_evar( res, context[0], context[22] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  refalrts::use( res );
  refalrts::wrap_closure( context[22] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoOptTree_S2A3("DoOptTree$2=3", 1493607253U, 2715228496U, func_gen_DoOptTree_S2A3);


static refalrts::FnResult func_gen_DoOptTree_S2A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  // </0 & DoOptTree$2=2/4 s.OptDrive#1/5 s.OptSpec#1/6 (/9 e.OptimizableFunctions#1/7 )/10 s.Cycles#1/11 (/14 e.SpecInfo#1/12 )/15 (/18 e.DriveInfo#1/16 )/19 (/22 e.AST#2/20 )/23 e.OriginAST#3/2 >/1
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
  // closed e.OptimizableFunctions#1 as range 7
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
  context[20] = 0;
  context[21] = 0;
  context[22] = refalrts::brackets_left( context[20], context[21], context[2], context[3] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[22], context[23]);
  // closed e.SpecInfo#1 as range 12
  // closed e.DriveInfo#1 as range 16
  // closed e.AST#2 as range 20
  // closed e.OriginAST#3 as range 2
  //DEBUG: s.OptDrive#1: 5
  //DEBUG: s.OptSpec#1: 6
  //DEBUG: e.OptimizableFunctions#1: 7
  //DEBUG: s.Cycles#1: 11
  //DEBUG: e.SpecInfo#1: 12
  //DEBUG: e.DriveInfo#1: 16
  //DEBUG: e.AST#2: 20
  //DEBUG: e.OriginAST#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </24 Tile{ HalfReuse: [*]/0 Reuse: & DoOptTree$2=3/4 AsIs: s.OptDrive#1/5 AsIs: s.OptSpec#1/6 AsIs: (/9 } Tile{ AsIs: e.OptimizableFunctions#1/7 } Tile{ AsIs: )/23 } (/25 Tile{ AsIs: e.OriginAST#3/2 } Tile{ AsIs: )/10 AsIs: s.Cycles#1/11 AsIs: (/14 AsIs: e.SpecInfo#1/12 AsIs: )/15 AsIs: (/18 AsIs: e.DriveInfo#1/16 AsIs: )/19 HalfReuse: {*}/22 } </26 & OptTree-Simple/27 (/28 e.OptimizableFunctions#1/7/29 )/31 Tile{ AsIs: e.AST#2/20 } >/32 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[24]);
  refalrts::alloc_open_bracket(vm, context[25]);
  refalrts::alloc_open_call(vm, context[26]);
  refalrts::alloc_name(vm, context[27], functions[efunc_OptTreem_Simple]);
  refalrts::alloc_open_bracket(vm, context[28]);
  refalrts::copy_evar(vm, context[29], context[30], context[7], context[8]);
  refalrts::alloc_close_bracket(vm, context[31]);
  refalrts::alloc_close_call(vm, context[32]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_DoOptTree_S2A3]);
  refalrts::reinit_unwrapped_closure(context[22], context[0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[24] );
  refalrts::push_stack( vm, context[32] );
  refalrts::push_stack( vm, context[26] );
  refalrts::link_brackets( context[28], context[31] );
  refalrts::link_brackets( context[18], context[19] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::link_brackets( context[25], context[10] );
  refalrts::link_brackets( context[9], context[23] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[32], context[32] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[26], context[31] );
  res = refalrts::splice_evar( res, context[10], context[22] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  refalrts::use( res );
  refalrts::wrap_closure( context[22] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoOptTree_S2A2("DoOptTree$2=2", 1493607253U, 2715228496U, func_gen_DoOptTree_S2A2);


static refalrts::FnResult func_gen_DoOptTree_S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & DoOptTree$2=1/4 s.OptDrive#1/5 s.OptSpec#1/6 (/9 e.OptimizableFunctions#1/7 )/10 s.Cycles#1/11 (/14 e.SpecInfo#1/12 )/15 (/18 e.DriveInfo#1/16 )/19 e.AST#2/2 >/1
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
  // closed e.OptimizableFunctions#1 as range 7
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
  // closed e.SpecInfo#1 as range 12
  // closed e.DriveInfo#1 as range 16
  // closed e.AST#2 as range 2
  //DEBUG: s.OptDrive#1: 5
  //DEBUG: s.OptSpec#1: 6
  //DEBUG: e.OptimizableFunctions#1: 7
  //DEBUG: s.Cycles#1: 11
  //DEBUG: e.SpecInfo#1: 12
  //DEBUG: e.DriveInfo#1: 16
  //DEBUG: e.AST#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </20 Tile{ HalfReuse: [*]/0 Reuse: & DoOptTree$2=2/4 AsIs: s.OptDrive#1/5 AsIs: s.OptSpec#1/6 AsIs: (/9 AsIs: e.OptimizableFunctions#1/7 AsIs: )/10 AsIs: s.Cycles#1/11 AsIs: (/14 AsIs: e.SpecInfo#1/12 AsIs: )/15 AsIs: (/18 AsIs: e.DriveInfo#1/16 AsIs: )/19 } (/21 Tile{ AsIs: e.AST#2/2 } )/22 {*}/23 e.AST#2/2/24 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[20]);
  refalrts::alloc_open_bracket(vm, context[21]);
  refalrts::alloc_close_bracket(vm, context[22]);
  refalrts::alloc_unwrapped_closure(vm, context[23], context[0]);
  refalrts::copy_evar(vm, context[24], context[25], context[2], context[3]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_DoOptTree_S2A2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[20] );
  refalrts::link_brackets( context[21], context[22] );
  refalrts::link_brackets( context[18], context[19] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[24], context[25] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[0], context[19] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  refalrts::use( res );
  refalrts::wrap_closure( context[23] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoOptTree_S2A1("DoOptTree$2=1", 1493607253U, 2715228496U, func_gen_DoOptTree_S2A1);


static refalrts::FnResult func_DoOptTree(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  // </0 & DoOptTree/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoOptTree/4 s.new#1/5 s.new#2/6 s.new#3/7 (/10 e.new#4/8 )/11 (/14 e.new#5/12 )/15 (/18 e.new#6/16 )/19 e.new#7/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
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
  context[16] = 0;
  context[17] = 0;
  context[18] = refalrts::brackets_left( context[16], context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[18], context[19]);
  // closed e.new#4 as range 8
  // closed e.new#5 as range 12
  // closed e.new#6 as range 16
  // closed e.new#7 as range 2
  do {
    // </0 & DoOptTree/4 0/5 s.OptDrive#1/6 s.OptSpec#1/7 (/10 e.DriveInfo#1/8 )/11 (/14 e.SpecInfo#1/12 )/15 (/18 e.OptimizableFunctions#1/16 )/19 e.AST#1/2 >/1
    if( ! refalrts::number_term( 0UL, context[5] ) )
      continue;
    // closed e.DriveInfo#1 as range 8
    // closed e.SpecInfo#1 as range 12
    // closed e.OptimizableFunctions#1 as range 16
    // closed e.AST#1 as range 2
    //DEBUG: s.OptDrive#1: 6
    //DEBUG: s.OptSpec#1: 7
    //DEBUG: e.DriveInfo#1: 8
    //DEBUG: e.SpecInfo#1: 12
    //DEBUG: e.OptimizableFunctions#1: 16
    //DEBUG: e.AST#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.OptSpec#1/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.OptimizableFunctions#1/16 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 HalfReuse: & DoOptTree$1=1/5 } Tile{ HalfReuse: s.OptSpec1 #7/11 AsIs: (/14 AsIs: e.SpecInfo#1/12 AsIs: )/15 HalfReuse: {*}/18 } </20 & OptTree-Drive-Finalize/21 Tile{ AsIs: s.OptDrive#1/6 } Tile{ AsIs: (/10 } Tile{ AsIs: e.DriveInfo#1/8 } Tile{ AsIs: )/19 AsIs: e.AST#1/2 AsIs: >/1 } >/22 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[20]);
    refalrts::alloc_name(vm, context[21], functions[efunc_OptTreem_Drivem_Finalize]);
    refalrts::alloc_close_call(vm, context[22]);
    refalrts::reinit_closure_head(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_gen_DoOptTree_S1A1]);
    refalrts::reinit_svar( context[11], context[7] );
    refalrts::reinit_unwrapped_closure(context[18], context[4]);
    refalrts::push_stack( vm, context[22] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[20] );
    refalrts::link_brackets( context[10], context[19] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[19], context[1] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[6], context[6] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[11], context[18] );
    refalrts::splice_to_freelist_open( vm, context[5], res );
    refalrts::wrap_closure( context[18] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoOptTree/4 s.Cycles#1/5 s.OptDrive#1/6 s.OptSpec#1/7 (/10 e.DriveInfo#1/8 )/11 (/14 e.SpecInfo#1/12 )/15 (/18 e.OptimizableFunctions#1/16 )/19 e.AST#1/2 >/1
  // closed e.DriveInfo#1 as range 8
  // closed e.SpecInfo#1 as range 12
  // closed e.OptimizableFunctions#1 as range 16
  // closed e.AST#1 as range 2
  //DEBUG: s.Cycles#1: 5
  //DEBUG: s.OptDrive#1: 6
  //DEBUG: s.OptSpec#1: 7
  //DEBUG: e.DriveInfo#1: 8
  //DEBUG: e.SpecInfo#1: 12
  //DEBUG: e.OptimizableFunctions#1: 16
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </20 [*]/21 & DoOptTree$2=1/22 Tile{ AsIs: s.OptDrive#1/6 AsIs: s.OptSpec#1/7 AsIs: (/10 } Tile{ AsIs: e.OptimizableFunctions#1/16 } )/23 Tile{ HalfReuse: s.Cycles1 #5/11 AsIs: (/14 AsIs: e.SpecInfo#1/12 AsIs: )/15 AsIs: (/18 } Tile{ AsIs: e.DriveInfo#1/8 } )/24 {*}/25 </26 & Log-AST/27 (/28"Pass "/29 Tile{ AsIs: </0 Reuse: & Symb/4 AsIs: s.Cycles#1/5 } >/31 Tile{ AsIs: )/19 AsIs: e.AST#1/2 AsIs: >/1 } >/32 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[20]);
  refalrts::alloc_closure_head(vm, context[21]);
  refalrts::alloc_name(vm, context[22], functions[efunc_gen_DoOptTree_S2A1]);
  refalrts::alloc_close_bracket(vm, context[23]);
  refalrts::alloc_close_bracket(vm, context[24]);
  refalrts::alloc_unwrapped_closure(vm, context[25], context[21]);
  refalrts::alloc_open_call(vm, context[26]);
  refalrts::alloc_name(vm, context[27], functions[efunc_Logm_AST]);
  refalrts::alloc_open_bracket(vm, context[28]);
  refalrts::alloc_chars(vm, context[29], context[30], "Pass ", 5);
  refalrts::alloc_close_call(vm, context[31]);
  refalrts::alloc_close_call(vm, context[32]);
  refalrts::reinit_svar( context[11], context[5] );
  refalrts::update_name(context[4], functions[efunc_Symb]);
  refalrts::push_stack( vm, context[32] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[26] );
  refalrts::link_brackets( context[28], context[19] );
  refalrts::push_stack( vm, context[31] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[18], context[24] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::link_brackets( context[10], context[23] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[32], context[32] );
  res = refalrts::splice_evar( res, context[19], context[1] );
  res = refalrts::splice_evar( res, context[31], context[31] );
  res = refalrts::splice_evar( res, context[0], context[5] );
  res = refalrts::splice_evar( res, context[24], context[30] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_evar( res, context[11], context[18] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[6], context[10] );
  res = refalrts::splice_evar( res, context[20], context[22] );
  refalrts::use( res );
  refalrts::wrap_closure( context[25] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoOptTree("DoOptTree", 1493607253U, 2715228496U, func_DoOptTree);


static refalrts::FnResult func_OptTreem_CleanupMarkup(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & OptTree-CleanupMarkup/4 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#1 as range 2
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & OptTree-Aux/6 0/7 Tile{ HalfReuse: # NoOpt/0 HalfReuse: # NoOpt/4 AsIs: e.AST#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_OptTreem_Aux]);
  refalrts::alloc_number(vm, context[7], 0UL);
  refalrts::reinit_ident(context[0], identifiers[ident_NoOpt]);
  refalrts::reinit_ident(context[4], identifiers[ident_NoOpt]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OptTreem_CleanupMarkup("OptTree-CleanupMarkup", 0U, 0U, func_OptTreem_CleanupMarkup);


static refalrts::FnResult func_gen_OptTreem_Simple_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & OptTree-Simple\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & OptTree-Simple\1/4 (/7 e.new#1/5 )/8 t.new#2/9 >/1
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
    // </0 & OptTree-Simple\1/4 (/7 e.OptimizableFunctions#1/5 )/8 (/9 # Function/13 s.ScopeClass#2/14 (/17 e.Name#2/15 )/18 # Sentences/19 e.Body#2/11 )/10 >/1
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_term( context[11], context[12], context[9] ) )
      continue;
    context[13] = refalrts::ident_left( identifiers[ident_Function], context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.OptimizableFunctions#1 as range 5
    if( ! refalrts::svar_left( context[14], context[11], context[12] ) )
      continue;
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[11], context[12] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    context[19] = refalrts::ident_left( identifiers[ident_Sentences], context[11], context[12] );
    if( ! context[19] )
      continue;
    // closed e.Name#2 as range 15
    // closed e.Body#2 as range 11
    //DEBUG: e.OptimizableFunctions#1: 5
    //DEBUG: s.ScopeClass#2: 14
    //DEBUG: e.Name#2: 15
    //DEBUG: e.Body#2: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # Function/13 AsIs: s.ScopeClass#2/14 AsIs: (/17 AsIs: e.Name#2/15 AsIs: )/18 AsIs: # Sentences/19 } Tile{ AsIs: </0 Reuse: & OptBody/4 AsIs: (/7 AsIs: e.OptimizableFunctions#1/5 AsIs: )/8 } Tile{ AsIs: e.Body#2/11 } Tile{ HalfReuse: >/10 HalfReuse: )/1 ]] }
    refalrts::update_name(context[4], functions[efunc_OptBody]);
    refalrts::reinit_close_call(context[10]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[9], context[1] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[9], context[19] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & OptTree-Simple\1/4 (/7 e.OptimizableFunctions#1/5 )/8 t.OtherItem#2/9 >/1
  // closed e.OptimizableFunctions#1 as range 5
  //DEBUG: t.OtherItem#2: 9
  //DEBUG: e.OptimizableFunctions#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & OptTree-Simple\1/4 (/7 e.OptimizableFunctions#1/5 )/8 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherItem#2/9 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OptTreem_Simple_L1("OptTree-Simple\\1", 1493607253U, 2715228496U, func_gen_OptTreem_Simple_L1);


static refalrts::FnResult func_OptTreem_Simple(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & OptTree-Simple/4 (/7 e.OptimizableFunctions#1/5 )/8 e.AST#1/2 >/1
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
  // closed e.OptimizableFunctions#1 as range 5
  // closed e.AST#1 as range 2
  //DEBUG: e.OptimizableFunctions#1: 5
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & Map/10 Tile{ HalfReuse: [*]/0 Reuse: & OptTree-Simple\1/4 AsIs: (/7 AsIs: e.OptimizableFunctions#1/5 AsIs: )/8 } {*}/11 Tile{ AsIs: e.AST#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_Map]);
  refalrts::alloc_unwrapped_closure(vm, context[11], context[0]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_OptTreem_Simple_L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  refalrts::wrap_closure( context[11] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OptTreem_Simple("OptTree-Simple", 1493607253U, 2715228496U, func_OptTreem_Simple);


static refalrts::FnResult func_OptBody(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & OptBody/4 (/7 e.OptimizableFunctions#1/5 )/8 e.Sentences#1/2 >/1
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
  // closed e.OptimizableFunctions#1 as range 5
  // closed e.Sentences#1 as range 2
  //DEBUG: e.OptimizableFunctions#1: 5
  //DEBUG: e.Sentences#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 Tile{ HalfReuse: & Map/0 HalfReuse: (/4 HalfReuse: & OptSentence/7 AsIs: e.OptimizableFunctions#1/5 AsIs: )/8 AsIs: e.Sentences#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::reinit_name(context[0], functions[efunc_Map]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_OptSentence]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OptBody("OptBody", 1493607253U, 2715228496U, func_OptBody);


static refalrts::FnResult func_gen_OptSentence_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & OptSentence\1/4 (/7 e.OptimizableFunctions#1/5 )/8 (/11 # Condition/13 (/16 e.Name#2/14 )/17 (/20 e.Result#2/18 )/21 (/24 e.Pattern#2/22 )/25 )/12 >/1
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
  context[13] = refalrts::ident_left( identifiers[ident_Condition], context[9], context[10] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[9], context[10] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[9], context[10] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  context[22] = 0;
  context[23] = 0;
  context[24] = refalrts::brackets_left( context[22], context[23], context[9], context[10] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[24], context[25]);
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.OptimizableFunctions#1 as range 5
  // closed e.Name#2 as range 14
  // closed e.Result#2 as range 18
  // closed e.Pattern#2 as range 22
  //DEBUG: e.OptimizableFunctions#1: 5
  //DEBUG: e.Name#2: 14
  //DEBUG: e.Result#2: 18
  //DEBUG: e.Pattern#2: 22

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # Condition/13 AsIs: (/16 AsIs: e.Name#2/14 AsIs: )/17 AsIs: (/20 } Tile{ AsIs: </0 Reuse: & OptResult/4 AsIs: (/7 AsIs: e.OptimizableFunctions#1/5 AsIs: )/8 } Tile{ AsIs: e.Result#2/18 } Tile{ AsIs: >/1 } Tile{ AsIs: )/21 AsIs: (/24 AsIs: e.Pattern#2/22 AsIs: )/25 AsIs: )/12 } Tile{ ]] }
  refalrts::update_name(context[4], functions[efunc_OptResult]);
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[24], context[25] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[21], context[12] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[11], context[20] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OptSentence_L1("OptSentence\\1", 1493607253U, 2715228496U, func_gen_OptSentence_L1);


static refalrts::FnResult func_OptSentence(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & OptSentence/4 e.OptimizableFunctions#1/2 (/7 (/11 e.Pattern#1/9 )/12 e.Conditions#1/5 (/15 e.Result#1/13 )/16 )/8 >/1
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
  // closed e.OptimizableFunctions#1 as range 2
  // closed e.Pattern#1 as range 9
  // closed e.Conditions#1 as range 5
  // closed e.Result#1 as range 13
  //DEBUG: e.OptimizableFunctions#1: 2
  //DEBUG: e.Pattern#1: 9
  //DEBUG: e.Conditions#1: 5
  //DEBUG: e.Result#1: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/11 AsIs: e.Pattern#1/9 AsIs: )/12 } Tile{ AsIs: </0 Reuse: & Map/4 } [*]/17 & OptSentence\1/18 (/19 Tile{ AsIs: e.OptimizableFunctions#1/2 } )/20 {*}/21 Tile{ AsIs: e.Conditions#1/5 } >/22 (/23 </24 & OptResult/25 (/26 e.OptimizableFunctions#1/2/27 Tile{ HalfReuse: )/15 AsIs: e.Result#1/13 HalfReuse: >/16 AsIs: )/8 HalfReuse: )/1 ]] }
  refalrts::alloc_closure_head(vm, context[17]);
  refalrts::alloc_name(vm, context[18], functions[efunc_gen_OptSentence_L1]);
  refalrts::alloc_open_bracket(vm, context[19]);
  refalrts::alloc_close_bracket(vm, context[20]);
  refalrts::alloc_unwrapped_closure(vm, context[21], context[17]);
  refalrts::alloc_close_call(vm, context[22]);
  refalrts::alloc_open_bracket(vm, context[23]);
  refalrts::alloc_open_call(vm, context[24]);
  refalrts::alloc_name(vm, context[25], functions[efunc_OptResult]);
  refalrts::alloc_open_bracket(vm, context[26]);
  refalrts::copy_evar(vm, context[27], context[28], context[2], context[3]);
  refalrts::update_name(context[4], functions[efunc_Map]);
  refalrts::reinit_close_bracket(context[15]);
  refalrts::reinit_close_call(context[16]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[7], context[1] );
  refalrts::link_brackets( context[23], context[8] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[24] );
  refalrts::link_brackets( context[26], context[15] );
  refalrts::push_stack( vm, context[22] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[15];
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_evar( res, context[22], context[26] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[17], context[19] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::use( res );
  refalrts::wrap_closure( context[21] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OptSentence("OptSentence", 1493607253U, 2715228496U, func_OptSentence);


static refalrts::FnResult func_gen_OptResult_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & OptResult=1/4 s.Temp#2/5 e.Result#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Result#2 as range 2
  //DEBUG: s.Temp#2: 5
  //DEBUG: e.Result#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & OptResult=1/4 s.Temp#2/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Result#2/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OptResult_A1("OptResult=1", 1493607253U, 2715228496U, func_gen_OptResult_A1);


static refalrts::FnResult func_OptResult(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & OptResult/4 (/7 e.OptimizableFunctions#1/5 )/8 e.Result#1/2 >/1
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
  // closed e.OptimizableFunctions#1 as range 5
  // closed e.Result#1 as range 2
  //DEBUG: e.OptimizableFunctions#1: 5
  //DEBUG: e.Result#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & OptResult=1/10 Tile{ AsIs: </0 Reuse: & OptResultRec/4 AsIs: (/7 AsIs: e.OptimizableFunctions#1/5 AsIs: )/8 } # Cold/11 Tile{ AsIs: e.Result#1/2 } >/12 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_OptResult_A1]);
  refalrts::alloc_ident(vm, context[11], identifiers[ident_Cold]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::update_name(context[4], functions[efunc_OptResultRec]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OptResult("OptResult", 1493607253U, 2715228496U, func_OptResult);


static refalrts::FnResult func_OptResultRec(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & OptResultRec/4 (/7 e.OptimizableFunctions#1/5 )/8 s.Temp#1/9 e.Result#1/2 >/1
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
  // closed e.OptimizableFunctions#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Result#1 as range 2
  //DEBUG: e.OptimizableFunctions#1: 5
  //DEBUG: s.Temp#1: 9
  //DEBUG: e.Result#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Temp#1/9 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MapReduce/4 AsIs: (/7 } & OptResultTerm/10 Tile{ AsIs: e.OptimizableFunctions#1/5 } Tile{ AsIs: )/8 } # Cold/11 Tile{ AsIs: e.Result#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[10], functions[efunc_OptResultTerm]);
  refalrts::alloc_ident(vm, context[11], identifiers[ident_Cold]);
  refalrts::update_name(context[4], functions[efunc_MapReduce]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OptResultRec("OptResultRec", 1493607253U, 2715228496U, func_OptResultRec);


static refalrts::FnResult func_gen_OptResultTerm_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & OptResultTerm$1=1/4 s.Temp#2/5 e.Expr#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Expr#2 as range 2
  //DEBUG: s.Temp#2: 5
  //DEBUG: e.Expr#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Temp#2/5 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: s.Temp2 #5/0 HalfReuse: (/4 } # Brackets/6 Tile{ AsIs: e.Expr#2/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_ident(vm, context[6], identifiers[ident_Brackets]);
  refalrts::reinit_svar( context[0], context[5] );
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[4], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[6], context[6] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OptResultTerm_S1A1("OptResultTerm$1=1", 1493607253U, 2715228496U, func_gen_OptResultTerm_S1A1);


static refalrts::FnResult func_gen_OptResultTerm_S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & OptResultTerm$2=1/4 (/7 e.Name#1/5 )/8 s.Temp#2/9 e.Expr#2/2 >/1
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
  // closed e.Expr#2 as range 2
  //DEBUG: e.Name#1: 5
  //DEBUG: s.Temp#2: 9
  //DEBUG: e.Expr#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: s.Temp#2/9 } Tile{ HalfReuse: (/0 HalfReuse: # ADT-Brackets/4 AsIs: (/7 AsIs: e.Name#1/5 AsIs: )/8 } Tile{ AsIs: e.Expr#2/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_ADTm_Brackets]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OptResultTerm_S2A1("OptResultTerm$2=1", 1493607253U, 2715228496U, func_gen_OptResultTerm_S2A1);


static refalrts::FnResult func_gen_OptResultTerm_S3A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & OptResultTerm$3=1/4 (/7 e.Content#1/5 )/8 s.Temp#2/9 e.Expr#2/2 >/1
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
  // closed e.Content#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Expr#2 as range 2
  //DEBUG: e.Content#1: 5
  //DEBUG: s.Temp#2: 9
  //DEBUG: e.Expr#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} )/8 s.Temp#2/9 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: # Hot/0 HalfReuse: (/4 HalfReuse: # CallBrackets/7 } Tile{ AsIs: e.Content#1/5 } Tile{ AsIs: e.Expr#2/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_ident(context[0], identifiers[ident_Hot]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_ident(context[7], identifiers[ident_CallBrackets]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[4], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OptResultTerm_S3A1("OptResultTerm$3=1", 1493607253U, 2715228496U, func_gen_OptResultTerm_S3A1);


static refalrts::FnResult func_gen_OptResultTerm_S4A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & OptResultTerm$4=2/4 (/7 e.FuncName#1/5 )/8 s.Temp#3/9 e.Expr#3/2 >/1
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
  // closed e.FuncName#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Expr#3 as range 2
  //DEBUG: e.FuncName#1: 5
  //DEBUG: s.Temp#3: 9
  //DEBUG: e.Expr#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.Temp#3/9 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } # Hot/10 (/11 # CallBrackets/12 Tile{ HalfReuse: (/0 HalfReuse: # Symbol/4 HalfReuse: # Name/7 AsIs: e.FuncName#1/5 AsIs: )/8 } Tile{ AsIs: e.Expr#3/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_ident(vm, context[10], identifiers[ident_Hot]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_ident(vm, context[12], identifiers[ident_CallBrackets]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_Symbol]);
  refalrts::reinit_ident(context[7], identifiers[ident_Name]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[11], context[1] );
  refalrts::link_brackets( context[0], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[10], context[12] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OptResultTerm_S4A2("OptResultTerm$4=2", 1493607253U, 2715228496U, func_gen_OptResultTerm_S4A2);


static refalrts::FnResult func_gen_OptResultTerm_S5B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & OptResultTerm$5:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & OptResultTerm$5:1/4 s.new#1/5 s.new#2/6 e.new#3/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & OptResultTerm$5:1/4 s.Temp#1/5 # Hot/6 e.Expr#2/2 >/1
    if( ! refalrts::ident_term( identifiers[ident_Hot], context[6] ) )
      continue;
    // closed e.Expr#2 as range 2
    //DEBUG: s.Temp#1: 5
    //DEBUG: e.Expr#2: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Temp#1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: # Hot/0 HalfReuse: (/4 } Tile{ Reuse: # CallBrackets/6 AsIs: e.Expr#2/2 HalfReuse: )/1 ]] }
    refalrts::reinit_ident(context[0], identifiers[ident_Hot]);
    refalrts::reinit_open_bracket(context[4]);
    refalrts::update_ident(context[6], identifiers[ident_CallBrackets]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[4], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & OptResultTerm$5:1/4 s.Temp#1/5 # Cold/6 e.Expr#2/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_Cold], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Expr#2 as range 2
  //DEBUG: s.Temp#1: 5
  //DEBUG: e.Expr#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Temp#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: s.Temp1 #5/0 HalfReuse: (/4 } Tile{ Reuse: # ColdCallBrackets/6 AsIs: e.Expr#2/2 HalfReuse: )/1 ]] }
  refalrts::reinit_svar( context[0], context[5] );
  refalrts::reinit_open_bracket(context[4]);
  refalrts::update_ident(context[6], identifiers[ident_ColdCallBrackets]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[4], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[6];
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OptResultTerm_S5B1("OptResultTerm$5:1", 1493607253U, 2715228496U, func_gen_OptResultTerm_S5B1);


static refalrts::FnResult func_OptResultTerm(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 38 elems
  refalrts::Iter context[38];
  refalrts::zeros( context, 38 );
  // </0 & OptResultTerm/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & OptResultTerm/4 e.new#1/2 s.new#2/7 t.new#3/5 >/1
  context[6] = refalrts::tvar_right( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 2
  do {
    // </0 & OptResultTerm/4 e.new#7/2 s.new#6/7 (/5 s.new#4/10 e.new#5/8 )/6 >/1
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_term( context[8], context[9], context[5] ) )
      continue;
    // closed e.new#7 as range 2
    if( ! refalrts::svar_left( context[10], context[8], context[9] ) )
      continue;
    // closed e.new#5 as range 8
    do {
      // </0 & OptResultTerm/4 e.OptimizableFunctions#1/2 s.Temp#1/7 (/5 # Brackets/10 e.Expr#1/8 )/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_Brackets], context[10] ) )
        continue;
      // closed e.OptimizableFunctions#1 as range 2
      // closed e.Expr#1 as range 8
      //DEBUG: s.Temp#1: 7
      //DEBUG: e.OptimizableFunctions#1: 2
      //DEBUG: e.Expr#1: 8

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.Temp#1/7 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & OptResultTerm$1=1/4 } </11 & OptResultRec/12 (/13 Tile{ AsIs: e.OptimizableFunctions#1/2 } Tile{ HalfReuse: )/5 HalfReuse: s.Temp1 #7/10 AsIs: e.Expr#1/8 HalfReuse: >/6 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[11]);
      refalrts::alloc_name(vm, context[12], functions[efunc_OptResultRec]);
      refalrts::alloc_open_bracket(vm, context[13]);
      refalrts::update_name(context[4], functions[efunc_gen_OptResultTerm_S1A1]);
      refalrts::reinit_close_bracket(context[5]);
      refalrts::reinit_svar( context[10], context[7] );
      refalrts::reinit_close_call(context[6]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[6] );
      refalrts::push_stack( vm, context[11] );
      refalrts::link_brackets( context[13], context[5] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[5];
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_evar( res, context[11], context[13] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & OptResultTerm/4 e.new#12/2 s.new#11/7 (/5 s.new#8/10 (/15 e.new#9/13 )/16 e.new#10/11 )/6 >/1
      context[11] = context[8];
      context[12] = context[9];
      context[13] = 0;
      context[14] = 0;
      context[15] = refalrts::brackets_left( context[13], context[14], context[11], context[12] );
      if( ! context[15] )
        continue;
      refalrts::bracket_pointers(context[15], context[16]);
      // closed e.new#12 as range 2
      // closed e.new#9 as range 13
      // closed e.new#10 as range 11
      do {
        // </0 & OptResultTerm/4 e.OptimizableFunctions#1/2 s.Temp#1/7 (/5 # ADT-Brackets/10 (/15 e.Name#1/13 )/16 e.Expr#1/11 )/6 >/1
        if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[10] ) )
          continue;
        // closed e.OptimizableFunctions#1 as range 2
        // closed e.Name#1 as range 13
        // closed e.Expr#1 as range 11
        //DEBUG: s.Temp#1: 7
        //DEBUG: e.OptimizableFunctions#1: 2
        //DEBUG: e.Name#1: 13
        //DEBUG: e.Expr#1: 11

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: [*]/5 HalfReuse: & OptResultTerm$2=1/10 AsIs: (/15 AsIs: e.Name#1/13 AsIs: )/16 } {*}/17 </18 Tile{ Reuse: & OptResultRec/4 } (/19 Tile{ AsIs: e.OptimizableFunctions#1/2 } )/20 Tile{ AsIs: s.Temp#1/7 } Tile{ AsIs: e.Expr#1/11 } Tile{ HalfReuse: >/6 AsIs: >/1 ]] }
        refalrts::alloc_unwrapped_closure(vm, context[17], context[5]);
        refalrts::alloc_open_call(vm, context[18]);
        refalrts::alloc_open_bracket(vm, context[19]);
        refalrts::alloc_close_bracket(vm, context[20]);
        refalrts::reinit_closure_head(context[5]);
        refalrts::reinit_name(context[10], functions[efunc_gen_OptResultTerm_S2A1]);
        refalrts::update_name(context[4], functions[efunc_OptResultRec]);
        refalrts::reinit_close_call(context[6]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[6] );
        refalrts::push_stack( vm, context[18] );
        refalrts::link_brackets( context[19], context[20] );
        refalrts::link_brackets( context[15], context[16] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[6];
        res = refalrts::splice_evar( res, context[11], context[12] );
        res = refalrts::splice_evar( res, context[7], context[7] );
        res = refalrts::splice_evar( res, context[20], context[20] );
        res = refalrts::splice_evar( res, context[2], context[3] );
        res = refalrts::splice_evar( res, context[19], context[19] );
        res = refalrts::splice_evar( res, context[4], context[4] );
        res = refalrts::splice_evar( res, context[17], context[18] );
        res = refalrts::splice_evar( res, context[5], context[16] );
        refalrts::use( res );
        refalrts::wrap_closure( context[17] );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & OptResultTerm/4 e.new#17/2 s.new#16/7 (/5 # CallBrackets/10 (/15 s.new#13/19 e.new#14/17 )/16 e.new#15/11 )/6 >/1
      context[17] = context[13];
      context[18] = context[14];
      if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[10] ) )
        continue;
      // closed e.new#17 as range 2
      // closed e.new#15 as range 11
      if( ! refalrts::svar_left( context[19], context[17], context[18] ) )
        continue;
      // closed e.new#14 as range 17
      do {
        // </0 & OptResultTerm/4 e.OptimizableFunctions#1/2 s.Temp#1/7 (/5 # CallBrackets/10 (/15 # ClosureBrackets/19 e.Content#1/17 )/16 e.Expr#1/11 )/6 >/1
        if( ! refalrts::ident_term( identifiers[ident_ClosureBrackets], context[19] ) )
          continue;
        // closed e.OptimizableFunctions#1 as range 2
        // closed e.Content#1 as range 17
        // closed e.Expr#1 as range 11
        //DEBUG: s.Temp#1: 7
        //DEBUG: e.OptimizableFunctions#1: 2
        //DEBUG: e.Content#1: 17
        //DEBUG: e.Expr#1: 11

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.Temp#1/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & OptResultTerm$3=1/20 (/21 Tile{ AsIs: e.Content#1/17 } )/22 Tile{ HalfReuse: {*}/19 } Tile{ HalfReuse: </5 HalfReuse: & OptResultRec/10 AsIs: (/15 } Tile{ AsIs: e.OptimizableFunctions#1/2 } )/23 Tile{ HalfReuse: # Cold/16 AsIs: e.Expr#1/11 HalfReuse: >/6 AsIs: >/1 ]] }
        refalrts::alloc_name(vm, context[20], functions[efunc_gen_OptResultTerm_S3A1]);
        refalrts::alloc_open_bracket(vm, context[21]);
        refalrts::alloc_close_bracket(vm, context[22]);
        refalrts::alloc_close_bracket(vm, context[23]);
        refalrts::reinit_closure_head(context[4]);
        refalrts::reinit_unwrapped_closure(context[19], context[4]);
        refalrts::reinit_open_call(context[5]);
        refalrts::reinit_name(context[10], functions[efunc_OptResultRec]);
        refalrts::reinit_ident(context[16], identifiers[ident_Cold]);
        refalrts::reinit_close_call(context[6]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[6] );
        refalrts::push_stack( vm, context[5] );
        refalrts::link_brackets( context[15], context[23] );
        refalrts::link_brackets( context[21], context[22] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[16];
        res = refalrts::splice_evar( res, context[23], context[23] );
        res = refalrts::splice_evar( res, context[2], context[3] );
        res = refalrts::splice_evar( res, context[5], context[15] );
        res = refalrts::splice_evar( res, context[19], context[19] );
        res = refalrts::splice_evar( res, context[22], context[22] );
        res = refalrts::splice_evar( res, context[17], context[18] );
        res = refalrts::splice_evar( res, context[20], context[21] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
        refalrts::wrap_closure( context[19] );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & OptResultTerm/4 e.OptimizableFunctions#1/2 s.Temp#1/7 (/5 # CallBrackets/10 (/15 # Symbol/19 # Name/22 e.FuncName#1/20 )/16 e.Expr#1/11 )/6 >/1
      context[20] = context[17];
      context[21] = context[18];
      if( ! refalrts::ident_term( identifiers[ident_Symbol], context[19] ) )
        continue;
      context[22] = refalrts::ident_left( identifiers[ident_Name], context[20], context[21] );
      if( ! context[22] )
        continue;
      // closed e.OptimizableFunctions#1 as range 2
      // closed e.FuncName#1 as range 20
      // closed e.Expr#1 as range 11
      //DEBUG: s.Temp#1: 7
      //DEBUG: e.OptimizableFunctions#1: 2
      //DEBUG: e.FuncName#1: 20
      //DEBUG: e.Expr#1: 11
      //2: e.OptimizableFunctions#1
      //7: s.Temp#1
      //11: e.Expr#1
      //20: e.FuncName#1
      //26: e.OptimizableFunctions#1

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[23]);
      refalrts::alloc_name(vm, context[25], functions[efunc_gen_OptResultTerm_S4C1]);
      refalrts::copy_evar(vm, context[26], context[27], context[2], context[3]);
      refalrts::alloc_close_call(vm, context[24]);
      refalrts::push_stack( vm, context[24] );
      refalrts::push_stack( vm, context[23] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_elem( res, context[23] );
      refalrts::use( res );
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function(vm);
      do {
        // </23 & OptResultTerm$4?1/27 e.Funcs-B#2/28 (/34 e.FuncName#1/36 )/35 e.Funcs-E#2/30 >/24
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
          if( ! refalrts::repeated_evar_left( vm, context[36], context[37], context[20], context[21], context[32], context[33] ) )
            continue;
          if( ! refalrts::empty_seq( context[32], context[33] ) )
            continue;
          // closed e.Funcs-E#2 as range 30
          //DEBUG: s.Temp#1: 7
          //DEBUG: e.OptimizableFunctions#1: 2
          //DEBUG: e.FuncName#1: 20
          //DEBUG: e.Expr#1: 11
          //DEBUG: e.Funcs-B#2: 28
          //DEBUG: e.Funcs-E#2: 30

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 & OptResultTerm/4 {REMOVED TILE} s.Temp#1/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Funcs-B#2/28 {REMOVED TILE} e.FuncName#1/36 {REMOVED TILE} e.Funcs-E#2/30 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: </10 HalfReuse: [*]/15 HalfReuse: & OptResultTerm$4=2/19 HalfReuse: (/22 AsIs: e.FuncName#1/20 AsIs: )/16 } Tile{ HalfReuse: {*}/6 AsIs: </23 Reuse: & OptResultRec/27 } Tile{ AsIs: (/34 } Tile{ AsIs: e.OptimizableFunctions#1/2 } Tile{ AsIs: )/35 } Tile{ HalfReuse: # Cold/5 } Tile{ AsIs: e.Expr#1/11 } Tile{ AsIs: >/24 AsIs: >/1 ]] }
          refalrts::reinit_open_call(context[10]);
          refalrts::reinit_closure_head(context[15]);
          refalrts::reinit_name(context[19], functions[efunc_gen_OptResultTerm_S4A2]);
          refalrts::reinit_open_bracket(context[22]);
          refalrts::reinit_unwrapped_closure(context[6], context[15]);
          refalrts::update_name(context[27], functions[efunc_OptResultRec]);
          refalrts::reinit_ident(context[5], identifiers[ident_Cold]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[10] );
          refalrts::push_stack( vm, context[24] );
          refalrts::push_stack( vm, context[23] );
          refalrts::link_brackets( context[34], context[35] );
          refalrts::link_brackets( context[22], context[16] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[24];
          res = refalrts::splice_evar( res, context[11], context[12] );
          res = refalrts::splice_evar( res, context[5], context[5] );
          res = refalrts::splice_evar( res, context[35], context[35] );
          res = refalrts::splice_evar( res, context[2], context[3] );
          res = refalrts::splice_evar( res, context[34], context[34] );
          res = refalrts::splice_evar( res, context[6], context[27] );
          res = refalrts::splice_evar( res, context[10], context[16] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          refalrts::wrap_closure( context[6] );
          return refalrts::cSuccess;
        } while ( refalrts::open_evar_advance( context[28], context[29], context[25], context[26] ) );
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[23], context[24]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & OptResultTerm/4 e.OptimizableFunctions#1/2 s.Temp#1/7 (/5 # CallBrackets/10 e.Expr#1/8 )/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[10] ) )
        continue;
      // closed e.OptimizableFunctions#1 as range 2
      // closed e.Expr#1 as range 8
      //DEBUG: s.Temp#1: 7
      //DEBUG: e.OptimizableFunctions#1: 2
      //DEBUG: e.Expr#1: 8

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & OptResultTerm$5:1/11 Tile{ AsIs: s.Temp#1/7 } {*}/12 </13 & OptResultRec/14 (/15 Tile{ AsIs: e.OptimizableFunctions#1/2 } Tile{ HalfReuse: )/5 Reuse: # Cold/10 AsIs: e.Expr#1/8 HalfReuse: >/6 AsIs: >/1 ]] }
      refalrts::alloc_name(vm, context[11], functions[efunc_gen_OptResultTerm_S5B1]);
      refalrts::alloc_unwrapped_closure(vm, context[12], context[4]);
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_OptResultRec]);
      refalrts::alloc_open_bracket(vm, context[15]);
      refalrts::reinit_closure_head(context[4]);
      refalrts::reinit_close_bracket(context[5]);
      refalrts::update_ident(context[10], identifiers[ident_Cold]);
      refalrts::reinit_close_call(context[6]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[6] );
      refalrts::push_stack( vm, context[13] );
      refalrts::link_brackets( context[15], context[5] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[5];
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_evar( res, context[12], context[15] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[11], context[11] );
      refalrts::use( res );
      refalrts::wrap_closure( context[12] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & OptResultTerm/4 e.OptimizableFunctions#1/2 s.Temp#1/7 (/5 # ColdCallBrackets/10 e.Expr#1/8 )/6 >/1
    if( ! refalrts::ident_term( identifiers[ident_ColdCallBrackets], context[10] ) )
      continue;
    // closed e.OptimizableFunctions#1 as range 2
    // closed e.Expr#1 as range 8
    //DEBUG: s.Temp#1: 7
    //DEBUG: e.OptimizableFunctions#1: 2
    //DEBUG: e.Expr#1: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & OptResultTerm/4 e.OptimizableFunctions#1/2 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Temp#1/7 AsIs: (/5 AsIs: # ColdCallBrackets/10 AsIs: e.Expr#1/8 AsIs: )/6 } Tile{ ]] }
    refalrts::link_brackets( context[5], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[6] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & OptResultTerm/4 e.OptimizableFunctions#1/2 s.Temp#1/7 t.OtherTerm#1/5 >/1
  // closed e.OptimizableFunctions#1 as range 2
  //DEBUG: t.OtherTerm#1: 5
  //DEBUG: s.Temp#1: 7
  //DEBUG: e.OptimizableFunctions#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & OptResultTerm/4 e.OptimizableFunctions#1/2 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: s.Temp#1/7 AsIs: t.OtherTerm#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OptResultTerm("OptResultTerm", 1493607253U, 2715228496U, func_OptResultTerm);


static refalrts::FnResult func_gen_OptTreem_Simplem_Finalize_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & OptTree-Simple-Finalize\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & OptTree-Simple-Finalize\1/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & OptTree-Simple-Finalize\1/4 (/5 # Function/9 s.ScopeClass#2/10 (/13 e.Name#2/11 )/14 # Sentences/15 e.Body#2/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left( identifiers[ident_Function], context[7], context[8] );
    if( ! context[9] )
      continue;
    if( ! refalrts::svar_left( context[10], context[7], context[8] ) )
      continue;
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[7], context[8] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    context[15] = refalrts::ident_left( identifiers[ident_Sentences], context[7], context[8] );
    if( ! context[15] )
      continue;
    // closed e.Name#2 as range 11
    // closed e.Body#2 as range 7
    //DEBUG: s.ScopeClass#2: 10
    //DEBUG: e.Name#2: 11
    //DEBUG: e.Body#2: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # Function/9 AsIs: s.ScopeClass#2/10 AsIs: (/13 AsIs: e.Name#2/11 AsIs: )/14 AsIs: # Sentences/15 } Tile{ AsIs: </0 Reuse: & CleanupCold-Body/4 } Tile{ AsIs: e.Body#2/7 } Tile{ HalfReuse: >/6 HalfReuse: )/1 ]] }
    refalrts::update_name(context[4], functions[efunc_CleanupColdm_Body]);
    refalrts::reinit_close_call(context[6]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[5], context[1] );
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[5], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & OptTree-Simple-Finalize\1/4 t.OtherItem#2/5 >/1
  //DEBUG: t.OtherItem#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & OptTree-Simple-Finalize\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherItem#2/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OptTreem_Simplem_Finalize_L1("OptTree-Simple-Finalize\\1", 1493607253U, 2715228496U, func_gen_OptTreem_Simplem_Finalize_L1);


static refalrts::FnResult func_OptTreem_Simplem_Finalize(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & OptTree-Simple-Finalize/4 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#1 as range 2
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & OptTree-Simple-Finalize\1/4 AsIs: e.AST#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_Map]);
  refalrts::update_name(context[4], functions[efunc_gen_OptTreem_Simplem_Finalize_L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OptTreem_Simplem_Finalize("OptTree-Simple-Finalize", 1493607253U, 2715228496U, func_OptTreem_Simplem_Finalize);


static refalrts::FnResult func_CleanupColdm_Body(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & CleanupCold-Body/4 e.Sentences#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Sentences#1 as range 2
  //DEBUG: e.Sentences#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & CleanupCold-Sentence/4 AsIs: e.Sentences#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_Map]);
  refalrts::update_name(context[4], functions[efunc_CleanupColdm_Sentence]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CleanupColdm_Body("CleanupCold-Body", 1493607253U, 2715228496U, func_CleanupColdm_Body);


static refalrts::FnResult func_gen_CleanupColdm_Sentence_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & CleanupCold-Sentence\1/4 (/7 # Condition/9 (/12 e.Name#2/10 )/13 (/16 e.Result#2/14 )/17 (/20 e.Pattern#2/18 )/21 )/8 >/1
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
  context[9] = refalrts::ident_left( identifiers[ident_Condition], context[5], context[6] );
  if( ! context[9] )
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
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[5], context[6] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#2 as range 10
  // closed e.Result#2 as range 14
  // closed e.Pattern#2 as range 18
  //DEBUG: e.Name#2: 10
  //DEBUG: e.Result#2: 14
  //DEBUG: e.Pattern#2: 18

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Condition/9 AsIs: (/12 AsIs: e.Name#2/10 AsIs: )/13 AsIs: (/16 } Tile{ AsIs: </0 Reuse: & CleanupCold-Result/4 } Tile{ AsIs: e.Result#2/14 } Tile{ AsIs: >/1 } Tile{ AsIs: )/17 AsIs: (/20 AsIs: e.Pattern#2/18 AsIs: )/21 AsIs: )/8 } Tile{ ]] }
  refalrts::update_name(context[4], functions[efunc_CleanupColdm_Result]);
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[17], context[8] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CleanupColdm_Sentence_L1("CleanupCold-Sentence\\1", 1493607253U, 2715228496U, func_gen_CleanupColdm_Sentence_L1);


static refalrts::FnResult func_CleanupColdm_Sentence(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & CleanupCold-Sentence/4 (/7 (/11 e.Pattern#1/9 )/12 e.Conditions#1/5 (/15 e.Result#1/13 )/16 )/8 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Pattern#1 as range 9
  // closed e.Conditions#1 as range 5
  // closed e.Result#1 as range 13
  //DEBUG: e.Pattern#1: 9
  //DEBUG: e.Conditions#1: 5
  //DEBUG: e.Result#1: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/11 AsIs: e.Pattern#1/9 AsIs: )/12 } Tile{ AsIs: </0 Reuse: & Map/4 } & CleanupCold-Sentence\1/17 Tile{ AsIs: e.Conditions#1/5 } >/18 (/19 </20 Tile{ HalfReuse: & CleanupCold-Result/15 AsIs: e.Result#1/13 HalfReuse: >/16 AsIs: )/8 HalfReuse: )/1 ]] }
  refalrts::alloc_name(vm, context[17], functions[efunc_gen_CleanupColdm_Sentence_L1]);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::alloc_open_bracket(vm, context[19]);
  refalrts::alloc_open_call(vm, context[20]);
  refalrts::update_name(context[4], functions[efunc_Map]);
  refalrts::reinit_name(context[15], functions[efunc_CleanupColdm_Result]);
  refalrts::reinit_close_call(context[16]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[7], context[1] );
  refalrts::link_brackets( context[19], context[8] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[15];
  res = refalrts::splice_evar( res, context[18], context[20] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CleanupColdm_Sentence("CleanupCold-Sentence", 1493607253U, 2715228496U, func_CleanupColdm_Sentence);


static refalrts::FnResult func_CleanupColdm_Result(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & CleanupCold-Result/4 e.Result#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Result#1 as range 2
  //DEBUG: e.Result#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & CleanupCold-Term/4 AsIs: e.Result#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_Map]);
  refalrts::update_name(context[4], functions[efunc_CleanupColdm_Term]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CleanupColdm_Result("CleanupCold-Result", 1493607253U, 2715228496U, func_CleanupColdm_Result);


static refalrts::FnResult func_CleanupColdm_Term(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & CleanupCold-Term/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CleanupCold-Term/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & CleanupCold-Term/4 (/5 s.new#2/9 e.new#3/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    // closed e.new#3 as range 7
    do {
      // </0 & CleanupCold-Term/4 (/5 # Brackets/9 e.Expr#1/7 )/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_Brackets], context[9] ) )
        continue;
      // closed e.Expr#1 as range 7
      //DEBUG: e.Expr#1: 7

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Brackets/4 HalfReuse: </5 HalfReuse: & CleanupCold-Result/9 AsIs: e.Expr#1/7 HalfReuse: >/6 HalfReuse: )/1 ]] }
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_Brackets]);
      refalrts::reinit_open_call(context[5]);
      refalrts::reinit_name(context[9], functions[efunc_CleanupColdm_Result]);
      refalrts::reinit_close_call(context[6]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[0], context[1] );
      refalrts::push_stack( vm, context[6] );
      refalrts::push_stack( vm, context[5] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & CleanupCold-Term/4 (/5 # ADT-Brackets/9 (/14 e.Name#1/12 )/15 e.Expr#1/10 )/6 >/1
      context[10] = context[7];
      context[11] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[9] ) )
        continue;
      context[12] = 0;
      context[13] = 0;
      context[14] = refalrts::brackets_left( context[12], context[13], context[10], context[11] );
      if( ! context[14] )
        continue;
      refalrts::bracket_pointers(context[14], context[15]);
      // closed e.Name#1 as range 12
      // closed e.Expr#1 as range 10
      //DEBUG: e.Name#1: 12
      //DEBUG: e.Expr#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # ADT-Brackets/9 AsIs: (/14 AsIs: e.Name#1/12 AsIs: )/15 } Tile{ AsIs: </0 Reuse: & CleanupCold-Result/4 } Tile{ AsIs: e.Expr#1/10 } Tile{ HalfReuse: >/6 HalfReuse: )/1 ]] }
      refalrts::update_name(context[4], functions[efunc_CleanupColdm_Result]);
      refalrts::reinit_close_call(context[6]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[5], context[1] );
      refalrts::push_stack( vm, context[6] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[14], context[15] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[6];
      res = refalrts::splice_evar( res, context[10], context[11] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[5], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & CleanupCold-Term/4 (/5 # CallBrackets/9 e.Expr#1/7 )/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[9] ) )
        continue;
      // closed e.Expr#1 as range 7
      //DEBUG: e.Expr#1: 7

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CallBrackets/4 HalfReuse: </5 HalfReuse: & CleanupCold-Result/9 AsIs: e.Expr#1/7 HalfReuse: >/6 HalfReuse: )/1 ]] }
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_CallBrackets]);
      refalrts::reinit_open_call(context[5]);
      refalrts::reinit_name(context[9], functions[efunc_CleanupColdm_Result]);
      refalrts::reinit_close_call(context[6]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[0], context[1] );
      refalrts::push_stack( vm, context[6] );
      refalrts::push_stack( vm, context[5] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & CleanupCold-Term/4 (/5 # ColdCallBrackets/9 e.Expr#1/7 )/6 >/1
    if( ! refalrts::ident_term( identifiers[ident_ColdCallBrackets], context[9] ) )
      continue;
    // closed e.Expr#1 as range 7
    //DEBUG: e.Expr#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CallBrackets/4 HalfReuse: </5 HalfReuse: & CleanupCold-Result/9 AsIs: e.Expr#1/7 HalfReuse: >/6 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_CallBrackets]);
    refalrts::reinit_open_call(context[5]);
    refalrts::reinit_name(context[9], functions[efunc_CleanupColdm_Result]);
    refalrts::reinit_close_call(context[6]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[0], context[1] );
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[5] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CleanupCold-Term/4 t.OtherTerm#1/5 >/1
  //DEBUG: t.OtherTerm#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CleanupCold-Term/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherTerm#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CleanupColdm_Term("CleanupCold-Term", 1493607253U, 2715228496U, func_CleanupColdm_Term);


//End of file
