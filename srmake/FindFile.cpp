// This file automatically generated from '../common/FindFile.ref'
// Don't edit! Edit '../common/FindFile.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_4068349913_770554282

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
  efunc_AnalyzeFile = 14,
  efunc_Map = 15,
  efunc_AnalyzeFilem_CheckNotFound = 16,
  efunc_gen_FindFiles_L1L1 = 17,
  efunc_gen_FindFiles_L1 = 18,
  efunc_gen_FindFiles_A1 = 19,
  efunc_gen_FindFiles_A1B1 = 20,
  efunc_ExistFile = 21,
  efunc_ExistFilem_T = 22,
  efunc_gen_AnalyzeFile_S2B1S1B1 = 23,
  efunc_gen_AnalyzeFile_S1C1 = 24,
  efunc_gen_AnalyzeFile_S1C2 = 25,
  efunc_gen_AnalyzeFile_S1B1 = 26,
  efunc_gen_AnalyzeFile_S2B1 = 27,
  efunc_gen_AnalyzeFile_S3C1 = 28,
  efunc_SourceSuffixes = 29,
  efunc_gen_AnalyzeFile_S3C2 = 30,
  efunc_gen_AnalyzeFile_S4B1 = 31,
  efunc_AnalyzeInclude = 32,
  efunc_gen_FindInclude_L1 = 33,
  efunc_gen_FindInclude_B1 = 34,
  efunc_gen_AnalyzeInclude_S1B1 = 35,
  efunc_gen_AnalyzeInclude_S2B1 = 36,
  efunc_gen_AnalyzeInclude_S3B1 = 37,
};


enum ident {
  ident_k43_ = 0,
  ident_k47_ = 1,
  ident_k37_ = 2,
  ident_k42_ = 3,
  ident_k63_ = 4,
  ident_m_ = 5,
  ident_DefaultEXE = 6,
  ident_EXE = 7,
  ident_LIB = 8,
  ident_R = 9,
  ident_CompileOnly = 10,
  ident_Source = 11,
  ident_Output = 12,
  ident_OutputWithNative = 13,
  ident_NotFound = 14,
  ident_SR = 15,
  ident_RSL = 16,
  ident_R5 = 17,
  ident_True = 18,
  ident_False = 19,
  ident_Success = 20,
  ident_Fails = 21,
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

static refalrts::NativeReference nat_ref_Mu("Mu", 4068349913U, 770554282U, func_Mu);


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
    refalrts::alloc_number(vm, context[9], 770554282UL);
    refalrts::update_name(context[4], functions[efunc_u_u_FindMuPtr]);
    refalrts::reinit_number(context[5], 4068349913UL);
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
  refalrts::reinit_number(context[5], 4068349913UL);
  refalrts::reinit_number(context[7], 770554282UL);
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

static refalrts::NativeReference nat_ref_gen_u_u_Mum_Aux_S13B1("__Mu-Aux$13:1", 4068349913U, 770554282U, func_gen_u_u_Mum_Aux_S13B1);


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

static refalrts::NativeReference nat_ref_u_u_Mum_Aux("__Mu-Aux", 4068349913U, 770554282U, func_u_u_Mum_Aux);


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

static refalrts::NativeReference nat_ref_Residue("Residue", 4068349913U, 770554282U, func_Residue);


static refalrts::FnResult func_gen_FindFiles_L1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & FindFiles\1\1/4 (/7 e.Subdir#2/5 )/8 (/11 e.FileName#3/9 )/12 (/15 e.Folder#4/13 )/16 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Subdir#2 as range 5
  // closed e.FileName#3 as range 9
  // closed e.Folder#4 as range 13
  //DEBUG: e.Subdir#2: 5
  //DEBUG: e.FileName#3: 9
  //DEBUG: e.Folder#4: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & AnalyzeFile/4 } e.Folder#4/13/17 Tile{ HalfReuse: '/'/16 } Tile{ AsIs: e.Subdir#2/5 } Tile{ HalfReuse: '/'/11 AsIs: e.FileName#3/9 HalfReuse: >/12 HalfReuse: </15 } Tile{ HalfReuse: & AnalyzeFile/8 } Tile{ AsIs: e.Folder#4/13 } Tile{ HalfReuse: '/'/7 } e.FileName#3/9/19 Tile{ AsIs: >/1 ]] }
  refalrts::copy_evar(vm, context[17], context[18], context[13], context[14]);
  refalrts::copy_evar(vm, context[19], context[20], context[9], context[10]);
  refalrts::update_name(context[4], functions[efunc_AnalyzeFile]);
  refalrts::reinit_char(context[16], '/');
  refalrts::reinit_char(context[11], '/');
  refalrts::reinit_close_call(context[12]);
  refalrts::reinit_open_call(context[15]);
  refalrts::reinit_name(context[8], functions[efunc_AnalyzeFile]);
  refalrts::reinit_char(context[7], '/');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[11], context[15] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindFiles_L1L1("FindFiles\\1\\1", 4068349913U, 770554282U, func_gen_FindFiles_L1L1);


static refalrts::FnResult func_gen_FindFiles_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 38 elems
  refalrts::Iter context[38];
  refalrts::zeros( context, 38 );
  // </0 & FindFiles\1/4 (/7 e.Subdir#2/5 )/8 (/11 e.Folders#1/9 )/12 (/15 e.FileName#3/13 )/16 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Subdir#2 as range 5
  // closed e.Folders#1 as range 9
  // closed e.FileName#3 as range 13
  //DEBUG: e.Subdir#2: 5
  //DEBUG: e.Folders#1: 9
  //DEBUG: e.FileName#3: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </17 Tile{ HalfReuse: & AnalyzeFile-CheckNotFound/12 AsIs: (/15 AsIs: e.FileName#3/13 AsIs: )/16 HalfReuse: </1 } & AnalyzeFile/18 e.Subdir#2/5/19 '/'/21 e.FileName#3/13/22 >/24 </25 & AnalyzeFile/26 e.FileName#3/13/27 >/29 </30 & Map/31 Tile{ HalfReuse: [*]/0 Reuse: & FindFiles\1\1/4 AsIs: (/7 AsIs: e.Subdir#2/5 AsIs: )/8 AsIs: (/11 } e.FileName#3/13/32 )/34 {*}/35 Tile{ AsIs: e.Folders#1/9 } >/36 >/37 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[17]);
  refalrts::alloc_name(vm, context[18], functions[efunc_AnalyzeFile]);
  refalrts::copy_evar(vm, context[19], context[20], context[5], context[6]);
  refalrts::alloc_char(vm, context[21], '/');
  refalrts::copy_evar(vm, context[22], context[23], context[13], context[14]);
  refalrts::alloc_close_call(vm, context[24]);
  refalrts::alloc_open_call(vm, context[25]);
  refalrts::alloc_name(vm, context[26], functions[efunc_AnalyzeFile]);
  refalrts::copy_evar(vm, context[27], context[28], context[13], context[14]);
  refalrts::alloc_close_call(vm, context[29]);
  refalrts::alloc_open_call(vm, context[30]);
  refalrts::alloc_name(vm, context[31], functions[efunc_Map]);
  refalrts::copy_evar(vm, context[32], context[33], context[13], context[14]);
  refalrts::alloc_close_bracket(vm, context[34]);
  refalrts::alloc_unwrapped_closure(vm, context[35], context[0]);
  refalrts::alloc_close_call(vm, context[36]);
  refalrts::alloc_close_call(vm, context[37]);
  refalrts::reinit_name(context[12], functions[efunc_AnalyzeFilem_CheckNotFound]);
  refalrts::reinit_open_call(context[1]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_FindFiles_L1L1]);
  refalrts::push_stack( vm, context[37] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[36] );
  refalrts::push_stack( vm, context[30] );
  refalrts::link_brackets( context[11], context[34] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::push_stack( vm, context[29] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[24] );
  refalrts::push_stack( vm, context[1] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[36], context[37] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[34], context[35] );
  res = refalrts::splice_evar( res, context[32], context[33] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[18], context[31] );
  res = refalrts::splice_evar( res, context[12], context[1] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  refalrts::use( res );
  refalrts::wrap_closure( context[35] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindFiles_L1("FindFiles\\1", 4068349913U, 770554282U, func_gen_FindFiles_L1);


static refalrts::FnResult func_gen_FindFiles_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & FindFiles=1/4 (/7 e.Folders#1/5 )/8 (/11 e.Files#1/9 )/12 e.Subdir#2/2 >/1
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
  // closed e.Folders#1 as range 5
  // closed e.Files#1 as range 9
  // closed e.Subdir#2 as range 2
  //DEBUG: e.Folders#1: 5
  //DEBUG: e.Files#1: 9
  //DEBUG: e.Subdir#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 } & Map/13 [*]/14 & FindFiles\1/15 Tile{ HalfReuse: (/1 } Tile{ AsIs: e.Subdir#2/2 } Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.Folders#1/5 AsIs: )/8 HalfReuse: {*}/11 AsIs: e.Files#1/9 HalfReuse: >/12 } Tile{ ]] }
  refalrts::alloc_name(vm, context[13], functions[efunc_Map]);
  refalrts::alloc_closure_head(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_FindFiles_L1]);
  refalrts::reinit_open_bracket(context[1]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::reinit_unwrapped_closure(context[11], context[14]);
  refalrts::reinit_close_call(context[12]);
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[1], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[4], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[13], context[15] );
  refalrts::use( res );
  refalrts::wrap_closure( context[11] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindFiles_A1("FindFiles=1", 4068349913U, 770554282U, func_gen_FindFiles_A1);


static refalrts::FnResult func_gen_FindFiles_A1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & FindFiles=1:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & FindFiles=1:1/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & FindFiles=1:1/4 # DefaultEXE/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_DefaultEXE], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 'e'/4 HalfReuse: 'x'/5 HalfReuse: 'e'/1 ]] }
    refalrts::reinit_char(context[4], 'e');
    refalrts::reinit_char(context[5], 'x');
    refalrts::reinit_char(context[1], 'e');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & FindFiles=1:1/4 # EXE/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_EXE], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 'e'/4 HalfReuse: 'x'/5 HalfReuse: 'e'/1 ]] }
    refalrts::reinit_char(context[4], 'e');
    refalrts::reinit_char(context[5], 'x');
    refalrts::reinit_char(context[1], 'e');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & FindFiles=1:1/4 # LIB/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_LIB], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 'l'/4 HalfReuse: 'i'/5 HalfReuse: 'b'/1 ]] }
    refalrts::reinit_char(context[4], 'l');
    refalrts::reinit_char(context[5], 'i');
    refalrts::reinit_char(context[1], 'b');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & FindFiles=1:1/4 # R/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_R], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 'l'/4 HalfReuse: 'i'/5 HalfReuse: 'b'/1 ]] }
    refalrts::reinit_char(context[4], 'l');
    refalrts::reinit_char(context[5], 'i');
    refalrts::reinit_char(context[1], 'b');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FindFiles=1:1/4 # CompileOnly/5 >/1
  if( ! refalrts::ident_term( identifiers[ident_CompileOnly], context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: 'e'/4 HalfReuse: 'x'/5 HalfReuse: 'e'/1 ]] }
  refalrts::reinit_char(context[4], 'e');
  refalrts::reinit_char(context[5], 'x');
  refalrts::reinit_char(context[1], 'e');
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[4];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindFiles_A1B1("FindFiles=1:1", 4068349913U, 770554282U, func_gen_FindFiles_A1B1);


static refalrts::FnResult func_FindFiles(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & FindFiles/4 s.TargetMode#1/5 (/8 e.Folders#1/6 )/9 e.Files#1/2 >/1
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
  // closed e.Folders#1 as range 6
  // closed e.Files#1 as range 2
  //DEBUG: s.TargetMode#1: 5
  //DEBUG: e.Folders#1: 6
  //DEBUG: e.Files#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </10 [*]/11 & FindFiles=1/12 Tile{ AsIs: (/8 AsIs: e.Folders#1/6 AsIs: )/9 } (/13 Tile{ AsIs: e.Files#1/2 } )/14 {*}/15 Tile{ AsIs: </0 Reuse: & FindFiles=1:1/4 AsIs: s.TargetMode#1/5 } >/16 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_closure_head(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_gen_FindFiles_A1]);
  refalrts::alloc_open_bracket(vm, context[13]);
  refalrts::alloc_close_bracket(vm, context[14]);
  refalrts::alloc_unwrapped_closure(vm, context[15], context[11]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::update_name(context[4], functions[efunc_gen_FindFiles_A1B1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[0], context[5] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_evar( res, context[10], context[12] );
  refalrts::use( res );
  refalrts::wrap_closure( context[15] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FindFiles("FindFiles", 0U, 0U, func_FindFiles);


static refalrts::FnResult func_AnalyzeFilem_CheckNotFound(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & AnalyzeFile-CheckNotFound/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & AnalyzeFile-CheckNotFound/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & AnalyzeFile-CheckNotFound/4 (/7 e.new#3/5 )/8 (/13 s.new#4/15 e.new#5/11 )/14 e.new#6/9 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[9], context[10] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    // closed e.new#3 as range 5
    // closed e.new#6 as range 9
    if( ! refalrts::svar_left( context[15], context[11], context[12] ) )
      continue;
    // closed e.new#5 as range 11
    do {
      // </0 & AnalyzeFile-CheckNotFound/4 (/7 e.FileName#1/5 )/8 (/13 # Source/15 (/20 s.Dialect#1/22 e.Source#1/18 )/21 e.Output#1/16 )/14 e.Variants#1/9 >/1
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::ident_term( identifiers[ident_Source], context[15] ) )
        continue;
      context[18] = 0;
      context[19] = 0;
      context[20] = refalrts::brackets_left( context[18], context[19], context[16], context[17] );
      if( ! context[20] )
        continue;
      refalrts::bracket_pointers(context[20], context[21]);
      // closed e.FileName#1 as range 5
      // closed e.Output#1 as range 16
      // closed e.Variants#1 as range 9
      if( ! refalrts::svar_left( context[22], context[18], context[19] ) )
        continue;
      // closed e.Source#1 as range 18
      //DEBUG: e.FileName#1: 5
      //DEBUG: e.Output#1: 16
      //DEBUG: e.Variants#1: 9
      //DEBUG: s.Dialect#1: 22
      //DEBUG: e.Source#1: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & AnalyzeFile-CheckNotFound/4 (/7 e.FileName#1/5 )/8 {REMOVED TILE} e.Variants#1/9 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/13 AsIs: # Source/15 AsIs: (/20 AsIs: s.Dialect#1/22 AsIs: e.Source#1/18 AsIs: )/21 AsIs: e.Output#1/16 AsIs: )/14 } Tile{ ]] }
      refalrts::link_brackets( context[13], context[14] );
      refalrts::link_brackets( context[20], context[21] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[13], context[14] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & AnalyzeFile-CheckNotFound/4 (/7 e.FileName#1/5 )/8 (/13 # Output/15 e.Output#1/11 )/14 e.Variants#1/9 >/1
      if( ! refalrts::ident_term( identifiers[ident_Output], context[15] ) )
        continue;
      // closed e.FileName#1 as range 5
      // closed e.Output#1 as range 11
      // closed e.Variants#1 as range 9
      //DEBUG: e.FileName#1: 5
      //DEBUG: e.Output#1: 11
      //DEBUG: e.Variants#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & AnalyzeFile-CheckNotFound/4 (/7 e.FileName#1/5 )/8 {REMOVED TILE} e.Variants#1/9 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/13 AsIs: # Output/15 AsIs: e.Output#1/11 AsIs: )/14 } Tile{ ]] }
      refalrts::link_brackets( context[13], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[13], context[14] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & AnalyzeFile-CheckNotFound/4 (/7 e.FileName#1/5 )/8 (/13 # OutputWithNative/15 (/20 e.Output#1/18 )/21 e.Native#1/16 )/14 e.Variants#1/9 >/1
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::ident_term( identifiers[ident_OutputWithNative], context[15] ) )
        continue;
      context[18] = 0;
      context[19] = 0;
      context[20] = refalrts::brackets_left( context[18], context[19], context[16], context[17] );
      if( ! context[20] )
        continue;
      refalrts::bracket_pointers(context[20], context[21]);
      // closed e.FileName#1 as range 5
      // closed e.Output#1 as range 18
      // closed e.Native#1 as range 16
      // closed e.Variants#1 as range 9
      //DEBUG: e.FileName#1: 5
      //DEBUG: e.Output#1: 18
      //DEBUG: e.Native#1: 16
      //DEBUG: e.Variants#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & AnalyzeFile-CheckNotFound/4 (/7 e.FileName#1/5 )/8 {REMOVED TILE} e.Variants#1/9 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/13 AsIs: # OutputWithNative/15 AsIs: (/20 AsIs: e.Output#1/18 AsIs: )/21 AsIs: e.Native#1/16 AsIs: )/14 } Tile{ ]] }
      refalrts::link_brackets( context[13], context[14] );
      refalrts::link_brackets( context[20], context[21] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[13], context[14] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & AnalyzeFile-CheckNotFound/4 (/7 e.FileName#1/5 )/8 (/13 # NotFound/15 e.NotFoundPath#1/11 )/14 e.Variants#1/9 >/1
    if( ! refalrts::ident_term( identifiers[ident_NotFound], context[15] ) )
      continue;
    // closed e.FileName#1 as range 5
    // closed e.NotFoundPath#1 as range 11
    // closed e.Variants#1 as range 9
    //DEBUG: e.FileName#1: 5
    //DEBUG: e.NotFoundPath#1: 11
    //DEBUG: e.Variants#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/13 # NotFound/15 e.NotFoundPath#1/11 )/14 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & AnalyzeFile-CheckNotFound/4 AsIs: (/7 AsIs: e.FileName#1/5 AsIs: )/8 } Tile{ AsIs: e.Variants#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( vm, context[8], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AnalyzeFile-CheckNotFound/4 (/7 e.FileName#1/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#1 as range 5
  //DEBUG: e.FileName#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # NotFound/7 AsIs: e.FileName#1/5 AsIs: )/8 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_ident(context[7], identifiers[ident_NotFound]);
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_AnalyzeFilem_CheckNotFound("AnalyzeFile-CheckNotFound", 4068349913U, 770554282U, func_AnalyzeFilem_CheckNotFound);


static refalrts::FnResult func_ExistFilem_T(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & ExistFile-T/4 e.FileName#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.FileName#1 as range 2
  //DEBUG: e.FileName#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExistFile/4 AsIs: e.FileName#1/2 AsIs: >/1 } e.FileName#1/2/5 Tile{ ]] }
  refalrts::copy_evar(vm, context[5], context[6], context[2], context[3]);
  refalrts::update_name(context[4], functions[efunc_ExistFile]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExistFilem_T("ExistFile-T", 4068349913U, 770554282U, func_ExistFilem_T);


static refalrts::FnResult func_SourceSuffixes(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & SourceSuffixes/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # R5/4 HalfReuse: '.'/1 }"ref"/5 )/7 (/8 # SR/9".sref"/10 )/12 (/13 # RSL/14".rsl"/15 )/17 Tile{ ]] }
  refalrts::alloc_chars(vm, context[5], context[6], "ref", 3);
  refalrts::alloc_close_bracket(vm, context[7]);
  refalrts::alloc_open_bracket(vm, context[8]);
  refalrts::alloc_ident(vm, context[9], identifiers[ident_SR]);
  refalrts::alloc_chars(vm, context[10], context[11], ".sref", 5);
  refalrts::alloc_close_bracket(vm, context[12]);
  refalrts::alloc_open_bracket(vm, context[13]);
  refalrts::alloc_ident(vm, context[14], identifiers[ident_RSL]);
  refalrts::alloc_chars(vm, context[15], context[16], ".rsl", 4);
  refalrts::alloc_close_bracket(vm, context[17]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_R5]);
  refalrts::reinit_char(context[1], '.');
  refalrts::link_brackets( context[13], context[17] );
  refalrts::link_brackets( context[8], context[12] );
  refalrts::link_brackets( context[0], context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SourceSuffixes("SourceSuffixes", 4068349913U, 770554282U, func_SourceSuffixes);


static refalrts::FnResult func_gen_AnalyzeFile_S1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & AnalyzeFile$1:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & AnalyzeFile$1:1/4 s.new#1/5 (/8 e.new#2/6 )/9 (/12 e.new#3/10 )/13 s.new#4/14 >/1
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
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & AnalyzeFile$1:1/4 s.Dialect#3/5 (/8 e.FileName#1/6 )/9 (/12 e.UnitName#2/10 )/13 # True/14 >/1
    if( ! refalrts::ident_term( identifiers[ident_True], context[14] ) )
      continue;
    // closed e.FileName#1 as range 6
    // closed e.UnitName#2 as range 10
    //DEBUG: s.Dialect#3: 5
    //DEBUG: e.FileName#1: 6
    //DEBUG: e.UnitName#2: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Source/4 } Tile{ AsIs: (/8 } Tile{ AsIs: s.Dialect#3/5 } Tile{ AsIs: e.FileName#1/6 } Tile{ HalfReuse: )/12 AsIs: e.UnitName#2/10 HalfReuse: '.'/13 HalfReuse: 'r'/14 HalfReuse: 'a'/1 }"sl"/15 Tile{ AsIs: )/9 } Tile{ ]] }
    refalrts::alloc_chars(vm, context[15], context[16], "sl", 2);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_Source]);
    refalrts::reinit_close_bracket(context[12]);
    refalrts::reinit_char(context[13], '.');
    refalrts::reinit_char(context[14], 'r');
    refalrts::reinit_char(context[1], 'a');
    refalrts::link_brackets( context[0], context[9] );
    refalrts::link_brackets( context[8], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[12], context[1] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[5], context[5] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AnalyzeFile$1:1/4 s.Dialect#3/5 (/8 e.FileName#1/6 )/9 (/12 e.UnitName#2/10 )/13 # False/14 >/1
  if( ! refalrts::ident_term( identifiers[ident_False], context[14] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#1 as range 6
  // closed e.UnitName#2 as range 10
  //DEBUG: s.Dialect#3: 5
  //DEBUG: e.FileName#1: 6
  //DEBUG: e.UnitName#2: 10

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} & AnalyzeFile$1:1/4 s.Dialect#3/5 {REMOVED TILE} (/12 e.UnitName#2/10 )/13 # False/14 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ HalfReuse: # NotFound/8 AsIs: e.FileName#1/6 AsIs: )/9 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[8], identifiers[ident_NotFound]);
  refalrts::link_brackets( context[0], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[9] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_AnalyzeFile_S1B1("AnalyzeFile$1:1", 4068349913U, 770554282U, func_gen_AnalyzeFile_S1B1);


static refalrts::FnResult func_gen_AnalyzeFile_S2B1S1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & AnalyzeFile$2:1$1:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & AnalyzeFile$2:1$1:1/4 (/7 e.new#1/5 )/8 s.new#2/9 e.new#3/2 >/1
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
    // </0 & AnalyzeFile$2:1$1:1/4 (/7 e.OutName#2/5 )/8 # True/9 e.NativeName#3/2 >/1
    if( ! refalrts::ident_term( identifiers[ident_True], context[9] ) )
      continue;
    // closed e.OutName#2 as range 5
    // closed e.NativeName#3 as range 2
    //DEBUG: e.OutName#2: 5
    //DEBUG: e.NativeName#3: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} # True/9 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # OutputWithNative/4 AsIs: (/7 AsIs: e.OutName#2/5 AsIs: )/8 } Tile{ AsIs: e.NativeName#3/2 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_OutputWithNative]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[0], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::splice_to_freelist_open( vm, context[8], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AnalyzeFile$2:1$1:1/4 (/7 e.OutName#2/5 )/8 # False/9 e.NativeName#3/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_False], context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.OutName#2 as range 5
  // closed e.NativeName#3 as range 2
  //DEBUG: e.OutName#2: 5
  //DEBUG: e.NativeName#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} # False/9 e.NativeName#3/2 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Output/7 AsIs: e.OutName#2/5 AsIs: )/8 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_ident(context[7], identifiers[ident_Output]);
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_AnalyzeFile_S2B1S1B1("AnalyzeFile$2:1$1:1", 4068349913U, 770554282U, func_gen_AnalyzeFile_S2B1S1B1);


static refalrts::FnResult func_gen_AnalyzeFile_S2B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & AnalyzeFile$2:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & AnalyzeFile$2:1/4 (/7 e.new#1/5 )/8 s.new#2/9 e.new#3/2 >/1
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
    // </0 & AnalyzeFile$2:1/4 (/7 e.FileName#1/5 )/8 # True/9 e.OutName#2/2 >/1
    if( ! refalrts::ident_term( identifiers[ident_True], context[9] ) )
      continue;
    // closed e.FileName#1 as range 5
    // closed e.OutName#2 as range 2
    //DEBUG: e.FileName#1: 5
    //DEBUG: e.OutName#2: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 HalfReuse: & AnalyzeFile$2:1$1:1/7 } (/10 Tile{ AsIs: e.OutName#2/2 } Tile{ AsIs: )/8 HalfReuse: {*}/9 } </11 & ExistFile-T/12 Tile{ AsIs: e.FileName#1/5 }".cpp"/13 >/15 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[10]);
    refalrts::alloc_open_call(vm, context[11]);
    refalrts::alloc_name(vm, context[12], functions[efunc_ExistFilem_T]);
    refalrts::alloc_chars(vm, context[13], context[14], ".cpp", 4);
    refalrts::alloc_close_call(vm, context[15]);
    refalrts::reinit_closure_head(context[4]);
    refalrts::reinit_name(context[7], functions[efunc_gen_AnalyzeFile_S2B1S1B1]);
    refalrts::reinit_unwrapped_closure(context[9], context[4]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[11] );
    refalrts::link_brackets( context[10], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[13], context[15] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    refalrts::wrap_closure( context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AnalyzeFile$2:1/4 (/7 e.FileName#1/5 )/8 # False/9 e.OutName#2/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_False], context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#1 as range 5
  // closed e.OutName#2 as range 2
  //DEBUG: e.FileName#1: 5
  //DEBUG: e.OutName#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & AnalyzeFile$2:1/4 (/7 e.FileName#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/8 Reuse: # NotFound/9 AsIs: e.OutName#2/2 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[8]);
  refalrts::update_ident(context[9], identifiers[ident_NotFound]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[8], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_AnalyzeFile_S2B1("AnalyzeFile$2:1", 4068349913U, 770554282U, func_gen_AnalyzeFile_S2B1);


static refalrts::FnResult func_gen_AnalyzeFile_S4B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & AnalyzeFile$4:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & AnalyzeFile$4:1/4 (/7 s.new#1/13 e.new#2/5 )/8 (/11 s.new#3/14 e.new#4/9 )/12 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[13], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 5
  if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 9
  do {
    // </0 & AnalyzeFile$4:1/4 (/7 # True/13 e.new#5/5 )/8 (/11 s.new#6/14 e.new#7/9 )/12 >/1
    if( ! refalrts::ident_term( identifiers[ident_True], context[13] ) )
      continue;
    // closed e.new#5 as range 5
    // closed e.new#7 as range 9
    do {
      // </0 & AnalyzeFile$4:1/4 (/7 # True/13 e.OutName#2/5 )/8 (/11 # True/14 e.Native#2/9 )/12 >/1
      if( ! refalrts::ident_term( identifiers[ident_True], context[14] ) )
        continue;
      // closed e.OutName#2 as range 5
      // closed e.Native#2 as range 9
      //DEBUG: e.OutName#2: 5
      //DEBUG: e.Native#2: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} (/11 # True/14 {REMOVED TILE} )/12 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # OutputWithNative/7 HalfReuse: (/13 AsIs: e.OutName#2/5 AsIs: )/8 } Tile{ AsIs: e.Native#2/9 } Tile{ HalfReuse: )/1 ]] }
      refalrts::reinit_open_bracket(context[4]);
      refalrts::reinit_ident(context[7], identifiers[ident_OutputWithNative]);
      refalrts::reinit_open_bracket(context[13]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[4], context[1] );
      refalrts::link_brackets( context[13], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[4], context[8] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & AnalyzeFile$4:1/4 (/7 # True/13 e.OutName#2/5 )/8 (/11 # False/14 e.Native#2/9 )/12 >/1
    if( ! refalrts::ident_term( identifiers[ident_False], context[14] ) )
      continue;
    // closed e.OutName#2 as range 5
    // closed e.Native#2 as range 9
    //DEBUG: e.OutName#2: 5
    //DEBUG: e.Native#2: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & AnalyzeFile$4:1/4 {REMOVED TILE} (/11 # False/14 e.Native#2/9 )/12 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # Output/13 AsIs: e.OutName#2/5 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident(context[13], identifiers[ident_Output]);
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AnalyzeFile$4:1/4 (/7 # False/13 e.UnitName#2/5 '.'/19 'r'/18 'a'/17 's'/16 'l'/15 )/8 (/11 # False/14 e.UnitName#2/24 '.'/23 'c'/22 'p'/21 'p'/20 )/12 >/1
  if( ! refalrts::ident_term( identifiers[ident_False], context[13] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::ident_term( identifiers[ident_False], context[14] ) )
    return refalrts::cRecognitionImpossible;
  context[15] = refalrts::char_right( 'l', context[5], context[6] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  context[16] = refalrts::char_right( 's', context[5], context[6] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  context[17] = refalrts::char_right( 'a', context[5], context[6] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  context[18] = refalrts::char_right( 'r', context[5], context[6] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  context[19] = refalrts::char_right( '.', context[5], context[6] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  context[20] = refalrts::char_right( 'p', context[9], context[10] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  context[21] = refalrts::char_right( 'p', context[9], context[10] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  context[22] = refalrts::char_right( 'c', context[9], context[10] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  context[23] = refalrts::char_right( '.', context[9], context[10] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  // closed e.UnitName#2 as range 5
  if( ! refalrts::repeated_evar_left( vm, context[24], context[25], context[5], context[6], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.UnitName#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & AnalyzeFile$4:1/4 (/7 # False/13 e.UnitName#2/5 '.'/19 'r'/18 'a'/17 's'/16 'l'/15 )/8 {REMOVED TILE} 'c'/22 'p'/21 'p'/20 )/12 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 Reuse: # NotFound/14 AsIs: e.UnitName#2/24 HalfReuse: )/23 } Tile{ ]] }
  refalrts::update_ident(context[14], identifiers[ident_NotFound]);
  refalrts::reinit_close_bracket(context[23]);
  refalrts::link_brackets( context[11], context[23] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[23] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_AnalyzeFile_S4B1("AnalyzeFile$4:1", 4068349913U, 770554282U, func_gen_AnalyzeFile_S4B1);


static refalrts::FnResult func_AnalyzeFile(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  // </0 & AnalyzeFile/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & AnalyzeFile/4 e.FileName#1/2 >/1
    // closed e.FileName#1 as range 2
    //DEBUG: e.FileName#1: 2
    //2: e.FileName#1
    //8: e.FileName#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[5]);
    refalrts::alloc_name(vm, context[7], functions[efunc_gen_AnalyzeFile_S1C1]);
    refalrts::copy_evar(vm, context[8], context[9], context[2], context[3]);
    refalrts::alloc_close_call(vm, context[6]);
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[5] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_elem( res, context[5] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </5 & AnalyzeFile$1?1/9 e.UnitName#2/10 e.Suffix#2/7 >/6
      context[7] = 0;
      context[8] = 0;
      context[9] = refalrts::call_left( context[7], context[8], context[5], context[6] );
      context[10] = 0;
      context[11] = 0;
      refalrts::start_e_loop(vm);
      do {
        // closed e.Suffix#2 as range 7
        //DEBUG: e.FileName#1: 2
        //DEBUG: e.UnitName#2: 10
        //DEBUG: e.Suffix#2: 7
        //2: e.FileName#1
        //7: e.Suffix#2
        //10: e.UnitName#2

        refalrts::reset_allocator(vm);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::alloc_open_call(vm, context[12]);
        refalrts::alloc_name(vm, context[14], functions[efunc_gen_AnalyzeFile_S1C2]);
        refalrts::alloc_open_bracket(vm, context[15]);
        refalrts::alloc_ident(vm, context[16], identifiers[ident_R5]);
        refalrts::alloc_chars(vm, context[17], context[18], ".ref", 4);
        refalrts::alloc_close_bracket(vm, context[19]);
        refalrts::alloc_open_bracket(vm, context[20]);
        refalrts::alloc_ident(vm, context[21], identifiers[ident_SR]);
        refalrts::alloc_chars(vm, context[22], context[23], ".sref", 5);
        refalrts::alloc_close_bracket(vm, context[24]);
        refalrts::alloc_open_bracket(vm, context[25]);
        refalrts::alloc_ident(vm, context[26], identifiers[ident_RSL]);
        refalrts::alloc_chars(vm, context[27], context[28], ".rsl", 4);
        refalrts::alloc_close_bracket(vm, context[29]);
        refalrts::alloc_close_call(vm, context[13]);
        refalrts::push_stack( vm, context[13] );
        refalrts::push_stack( vm, context[12] );
        res = refalrts::splice_elem( res, context[13] );
        refalrts::link_brackets( context[25], context[29] );
        res = refalrts::splice_elem( res, context[29] );
        res = refalrts::splice_evar( res, context[27], context[28] );
        res = refalrts::splice_elem( res, context[26] );
        res = refalrts::splice_elem( res, context[25] );
        refalrts::link_brackets( context[20], context[24] );
        res = refalrts::splice_elem( res, context[24] );
        res = refalrts::splice_evar( res, context[22], context[23] );
        res = refalrts::splice_elem( res, context[21] );
        res = refalrts::splice_elem( res, context[20] );
        refalrts::link_brackets( context[15], context[19] );
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
          // </12 & AnalyzeFile$1?2/16 e.Suffixes-B#3/17 (/23 s.Dialect#3/27 e.Suffix#2/25 )/24 e.Suffixes-E#3/19 >/13
          context[14] = 0;
          context[15] = 0;
          context[16] = refalrts::call_left( context[14], context[15], context[12], context[13] );
          context[17] = 0;
          context[18] = 0;
          refalrts::start_e_loop(vm);
          do {
            context[19] = context[14];
            context[20] = context[15];
            context[21] = 0;
            context[22] = 0;
            context[23] = refalrts::brackets_left( context[21], context[22], context[19], context[20] );
            if( ! context[23] )
              continue;
            refalrts::bracket_pointers(context[23], context[24]);
            if( ! refalrts::repeated_evar_right( vm, context[25], context[26], context[7], context[8], context[21], context[22] ) )
              continue;
            // closed e.Suffixes-E#3 as range 19
            if( ! refalrts::svar_left( context[27], context[21], context[22] ) )
              continue;
            if( ! refalrts::empty_seq( context[21], context[22] ) )
              continue;
            //DEBUG: e.FileName#1: 2
            //DEBUG: e.UnitName#2: 10
            //DEBUG: e.Suffix#2: 7
            //DEBUG: e.Suffixes-B#3: 17
            //DEBUG: e.Suffixes-E#3: 19
            //DEBUG: s.Dialect#3: 27

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Suffix#2/7 {REMOVED TILE} {REMOVED TILE} e.Suffixes-B#3/17 {REMOVED TILE} e.Suffix#2/25 {REMOVED TILE} e.Suffixes-E#3/19 {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } Tile{ AsIs: </12 HalfReuse: [*]/16 } Tile{ HalfReuse: & AnalyzeFile$1:1/23 AsIs: s.Dialect#3/27 } Tile{ HalfReuse: (/6 } e.FileName#1/2/28 Tile{ HalfReuse: )/13 HalfReuse: (/1 } Tile{ AsIs: e.UnitName#2/10 } Tile{ AsIs: )/24 } {*}/30 Tile{ AsIs: </0 Reuse: & ExistFile/4 AsIs: e.FileName#1/2 HalfReuse: >/5 HalfReuse: >/9 } Tile{ ]] }
            refalrts::copy_evar(vm, context[28], context[29], context[2], context[3]);
            refalrts::alloc_unwrapped_closure(vm, context[30], context[16]);
            refalrts::reinit_closure_head(context[16]);
            refalrts::reinit_name(context[23], functions[efunc_gen_AnalyzeFile_S1B1]);
            refalrts::reinit_open_bracket(context[6]);
            refalrts::reinit_close_bracket(context[13]);
            refalrts::reinit_open_bracket(context[1]);
            refalrts::update_name(context[4], functions[efunc_ExistFile]);
            refalrts::reinit_close_call(context[5]);
            refalrts::reinit_close_call(context[9]);
            refalrts::push_stack( vm, context[9] );
            refalrts::push_stack( vm, context[12] );
            refalrts::push_stack( vm, context[5] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[1], context[24] );
            refalrts::link_brackets( context[6], context[13] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = arg_end->next;
            res = refalrts::splice_evar( res, context[0], context[9] );
            res = refalrts::splice_evar( res, context[30], context[30] );
            res = refalrts::splice_evar( res, context[24], context[24] );
            res = refalrts::splice_evar( res, context[10], context[11] );
            res = refalrts::splice_evar( res, context[13], context[1] );
            res = refalrts::splice_evar( res, context[28], context[29] );
            res = refalrts::splice_evar( res, context[6], context[6] );
            res = refalrts::splice_evar( res, context[23], context[27] );
            res = refalrts::splice_evar( res, context[12], context[16] );
            refalrts::splice_to_freelist_open( vm, trash_prev, res );
            refalrts::wrap_closure( context[30] );
            return refalrts::cSuccess;
          } while ( refalrts::open_evar_advance( context[17], context[18], context[14], context[15] ) );
        } while ( 0 );
        refalrts::stop_sentence(vm);

        refalrts::splice_to_freelist(vm, context[12], context[13]);
        continue;
      } while ( refalrts::open_evar_advance( context[10], context[11], context[7], context[8] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[5], context[6]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & AnalyzeFile/4 e.FileName#1/5 '.'/11 'r'/10 'a'/9 's'/8 'l'/7 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = refalrts::char_right( 'l', context[5], context[6] );
    if( ! context[7] )
      continue;
    context[8] = refalrts::char_right( 's', context[5], context[6] );
    if( ! context[8] )
      continue;
    context[9] = refalrts::char_right( 'a', context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::char_right( 'r', context[5], context[6] );
    if( ! context[10] )
      continue;
    context[11] = refalrts::char_right( '.', context[5], context[6] );
    if( ! context[11] )
      continue;
    // closed e.FileName#1 as range 5
    //DEBUG: e.FileName#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </12 [*]/13 & AnalyzeFile$2:1/14 (/15 e.FileName#1/5/16 )/18 {*}/19 Tile{ AsIs: </0 Reuse: & ExistFile-T/4 AsIs: e.FileName#1/5 AsIs: '.'/11 AsIs: 'r'/10 AsIs: 'a'/9 AsIs: 's'/8 AsIs: 'l'/7 AsIs: >/1 } >/20 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_closure_head(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_gen_AnalyzeFile_S2B1]);
    refalrts::alloc_open_bracket(vm, context[15]);
    refalrts::copy_evar(vm, context[16], context[17], context[5], context[6]);
    refalrts::alloc_close_bracket(vm, context[18]);
    refalrts::alloc_unwrapped_closure(vm, context[19], context[13]);
    refalrts::alloc_close_call(vm, context[20]);
    refalrts::update_name(context[4], functions[efunc_ExistFilem_T]);
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[15], context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[12], context[19] );
    refalrts::use( res );
    refalrts::wrap_closure( context[19] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & AnalyzeFile/4 e.FileName#1/2 >/1
    // closed e.FileName#1 as range 2
    //DEBUG: e.FileName#1: 2
    //2: e.FileName#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[5]);
    refalrts::alloc_name(vm, context[7], functions[efunc_gen_AnalyzeFile_S3C1]);
    refalrts::alloc_open_call(vm, context[8]);
    refalrts::alloc_name(vm, context[9], functions[efunc_SourceSuffixes]);
    refalrts::alloc_close_call(vm, context[10]);
    refalrts::alloc_close_call(vm, context[6]);
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[5] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[8] );
    res = refalrts::splice_elem( res, context[10] );
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
      // </5 & AnalyzeFile$3?1/9 e.Suffixes-B#2/10 (/16 s.Dialect#2/18 e.Suffix#2/14 )/17 e.Suffixes-E#2/12 >/6
      context[7] = 0;
      context[8] = 0;
      context[9] = refalrts::call_left( context[7], context[8], context[5], context[6] );
      context[10] = 0;
      context[11] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[12] = context[7];
        context[13] = context[8];
        context[14] = 0;
        context[15] = 0;
        context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
        if( ! context[16] )
          continue;
        refalrts::bracket_pointers(context[16], context[17]);
        // closed e.Suffixes-E#2 as range 12
        if( ! refalrts::svar_left( context[18], context[14], context[15] ) )
          continue;
        // closed e.Suffix#2 as range 14
        //DEBUG: e.FileName#1: 2
        //DEBUG: e.Suffixes-B#2: 10
        //DEBUG: e.Suffixes-E#2: 12
        //DEBUG: s.Dialect#2: 18
        //DEBUG: e.Suffix#2: 14
        //2: e.FileName#1
        //10: e.Suffixes-B#2
        //12: e.Suffixes-E#2
        //14: e.Suffix#2
        //18: s.Dialect#2
        //24: e.FileName#1
        //26: e.Suffix#2

        refalrts::reset_allocator(vm);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::alloc_open_call(vm, context[19]);
        refalrts::alloc_name(vm, context[21], functions[efunc_gen_AnalyzeFile_S3C2]);
        refalrts::alloc_open_call(vm, context[22]);
        refalrts::alloc_name(vm, context[23], functions[efunc_ExistFilem_T]);
        refalrts::copy_evar(vm, context[24], context[25], context[2], context[3]);
        refalrts::copy_evar(vm, context[26], context[27], context[14], context[15]);
        refalrts::alloc_close_call(vm, context[28]);
        refalrts::alloc_close_call(vm, context[20]);
        refalrts::push_stack( vm, context[20] );
        refalrts::push_stack( vm, context[19] );
        res = refalrts::splice_elem( res, context[20] );
        refalrts::push_stack( vm, context[28] );
        refalrts::push_stack( vm, context[22] );
        res = refalrts::splice_elem( res, context[28] );
        res = refalrts::splice_evar( res, context[26], context[27] );
        res = refalrts::splice_evar( res, context[24], context[25] );
        res = refalrts::splice_elem( res, context[23] );
        res = refalrts::splice_elem( res, context[22] );
        res = refalrts::splice_elem( res, context[21] );
        res = refalrts::splice_elem( res, context[19] );
        refalrts::use( res );
        refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
        if (rec_res != refalrts::cSuccess)
          return rec_res;
        refalrts::this_is_generated_function(vm);
        do {
          // </19 & AnalyzeFile$3?2/23 # True/24 e.SourceName#3/21 >/20
          context[21] = 0;
          context[22] = 0;
          context[23] = refalrts::call_left( context[21], context[22], context[19], context[20] );
          context[24] = refalrts::ident_left( identifiers[ident_True], context[21], context[22] );
          if( ! context[24] )
            continue;
          // closed e.SourceName#3 as range 21
          //DEBUG: e.FileName#1: 2
          //DEBUG: e.Suffixes-B#2: 10
          //DEBUG: e.Suffixes-E#2: 12
          //DEBUG: s.Dialect#2: 18
          //DEBUG: e.Suffix#2: 14
          //DEBUG: e.SourceName#3: 21

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Suffixes-B#2/10 (/16 s.Dialect#2/18 e.Suffix#2/14 {REMOVED TILE} e.Suffixes-E#2/12 {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: (/6 HalfReuse: # Source/19 HalfReuse: (/23 HalfReuse: s.Dialect2 #18/24 AsIs: e.SourceName#3/21 HalfReuse: )/20 } Tile{ AsIs: e.FileName#1/2 } Tile{ HalfReuse: '.'/5 HalfReuse: 'r'/9 } Tile{ HalfReuse: 'a'/0 HalfReuse: 's'/4 } Tile{ HalfReuse: 'l'/17 } Tile{ HalfReuse: )/1 ]] }
          refalrts::reinit_open_bracket(context[6]);
          refalrts::reinit_ident(context[19], identifiers[ident_Source]);
          refalrts::reinit_open_bracket(context[23]);
          refalrts::reinit_svar( context[24], context[18] );
          refalrts::reinit_close_bracket(context[20]);
          refalrts::reinit_char(context[5], '.');
          refalrts::reinit_char(context[9], 'r');
          refalrts::reinit_char(context[0], 'a');
          refalrts::reinit_char(context[4], 's');
          refalrts::reinit_char(context[17], 'l');
          refalrts::reinit_close_bracket(context[1]);
          refalrts::link_brackets( context[6], context[1] );
          refalrts::link_brackets( context[23], context[20] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[17], context[17] );
          res = refalrts::splice_evar( res, context[0], context[4] );
          res = refalrts::splice_evar( res, context[5], context[9] );
          res = refalrts::splice_evar( res, context[2], context[3] );
          res = refalrts::splice_evar( res, context[6], context[20] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        refalrts::splice_to_freelist(vm, context[19], context[20]);
        continue;
      } while ( refalrts::open_evar_advance( context[10], context[11], context[7], context[8] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[5], context[6]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AnalyzeFile/4 e.FileName#1/2 >/1
  // closed e.FileName#1 as range 2
  //DEBUG: e.FileName#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & AnalyzeFile$4:1/6 (/7 Tile{ AsIs: </0 Reuse: & ExistFile-T/4 AsIs: e.FileName#1/2 HalfReuse: '.'/1 }"rasl"/8 >/10 )/11 (/12 </13 & ExistFile-T/14 e.FileName#1/2/15".cpp"/17 >/19 )/20 >/21 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_AnalyzeFile_S4B1]);
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_chars(vm, context[8], context[9], "rasl", 4);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_ExistFilem_T]);
  refalrts::copy_evar(vm, context[15], context[16], context[2], context[3]);
  refalrts::alloc_chars(vm, context[17], context[18], ".cpp", 4);
  refalrts::alloc_close_call(vm, context[19]);
  refalrts::alloc_close_bracket(vm, context[20]);
  refalrts::alloc_close_call(vm, context[21]);
  refalrts::update_name(context[4], functions[efunc_ExistFilem_T]);
  refalrts::reinit_char(context[1], '.');
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[5] );
  refalrts::link_brackets( context[12], context[20] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[7], context[11] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[21] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_AnalyzeFile("AnalyzeFile", 4068349913U, 770554282U, func_AnalyzeFile);


static refalrts::FnResult func_gen_FindInclude_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & FindInclude:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & FindInclude:1/4 e.Variants-B#2/7 (/13 # Success/15 s.Dialect#2/16 e.FullPath#2/11 )/14 e.Variants-E#2/9 >/1
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
      context[15] = refalrts::ident_left( identifiers[ident_Success], context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.Variants-E#2 as range 9
      if( ! refalrts::svar_left( context[16], context[11], context[12] ) )
        continue;
      // closed e.FullPath#2 as range 11
      //DEBUG: e.Variants-B#2: 7
      //DEBUG: e.Variants-E#2: 9
      //DEBUG: s.Dialect#2: 16
      //DEBUG: e.FullPath#2: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & FindInclude:1/4 e.Variants-B#2/7 (/13 {REMOVED TILE} {REMOVED TILE} )/14 e.Variants-E#2/9 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: # Success/15 AsIs: s.Dialect#2/16 } Tile{ AsIs: e.FullPath#2/11 } Tile{ ]] }
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FindInclude:1/4 e.Variants#2/2 >/1
  // closed e.Variants#2 as range 2
  //DEBUG: e.Variants#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & FindInclude:1/4 e.Variants#2/2 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # Fails/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_Fails]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindInclude_B1("FindInclude:1", 4068349913U, 770554282U, func_gen_FindInclude_B1);


static refalrts::FnResult func_gen_FindInclude_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & FindInclude\1/4 (/7 e.FileName#1/5 )/8 (/11 e.Folder#2/9 )/12 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#1 as range 5
  // closed e.Folder#2 as range 9
  //DEBUG: e.FileName#1: 5
  //DEBUG: e.Folder#2: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} )/12 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & AnalyzeInclude/4 } Tile{ AsIs: e.Folder#2/9 } Tile{ HalfReuse: '/'/11 } Tile{ AsIs: e.FileName#1/5 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_AnalyzeInclude]);
  refalrts::reinit_char(context[11], '/');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindInclude_L1("FindInclude\\1", 4068349913U, 770554282U, func_gen_FindInclude_L1);


static refalrts::FnResult func_FindInclude(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & FindInclude/4 (/7 e.Folders#1/5 )/8 e.FileName#1/2 >/1
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
  // closed e.Folders#1 as range 5
  // closed e.FileName#1 as range 2
  //DEBUG: e.Folders#1: 5
  //DEBUG: e.FileName#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindInclude:1/4 HalfReuse: </7 } Tile{ HalfReuse: & AnalyzeInclude/8 AsIs: e.FileName#1/2 AsIs: >/1 } </9 & Map/10 [*]/11 & FindInclude\1/12 (/13 e.FileName#1/2/14 )/16 {*}/17 Tile{ AsIs: e.Folders#1/5 } >/18 >/19 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_Map]);
  refalrts::alloc_closure_head(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_gen_FindInclude_L1]);
  refalrts::alloc_open_bracket(vm, context[13]);
  refalrts::copy_evar(vm, context[14], context[15], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[16]);
  refalrts::alloc_unwrapped_closure(vm, context[17], context[11]);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::alloc_close_call(vm, context[19]);
  refalrts::update_name(context[4], functions[efunc_gen_FindInclude_B1]);
  refalrts::reinit_open_call(context[7]);
  refalrts::reinit_name(context[8], functions[efunc_AnalyzeInclude]);
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[13], context[16] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[17] );
  res = refalrts::splice_evar( res, context[8], context[1] );
  refalrts::use( res );
  refalrts::wrap_closure( context[17] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FindInclude("FindInclude", 0U, 0U, func_FindInclude);


static refalrts::FnResult func_gen_AnalyzeInclude_S1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & AnalyzeInclude$1:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & AnalyzeInclude$1:1/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & AnalyzeInclude$1:1/4 # True/5 e.FullPath#2/2 >/1
    if( ! refalrts::ident_term( identifiers[ident_True], context[5] ) )
      continue;
    // closed e.FullPath#2 as range 2
    //DEBUG: e.FullPath#2: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Success/4 Reuse: # R5/5 AsIs: e.FullPath#2/2 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_Success]);
    refalrts::update_ident(context[5], identifiers[ident_R5]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[0], context[1] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AnalyzeInclude$1:1/4 # False/5 e.FullPath#2/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_False], context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FullPath#2 as range 2
  //DEBUG: e.FullPath#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} e.FullPath#2/2 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Fails/4 HalfReuse: )/5 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_Fails]);
  refalrts::reinit_close_bracket(context[5]);
  refalrts::link_brackets( context[0], context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, context[5], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_AnalyzeInclude_S1B1("AnalyzeInclude$1:1", 4068349913U, 770554282U, func_gen_AnalyzeInclude_S1B1);


static refalrts::FnResult func_gen_AnalyzeInclude_S2B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & AnalyzeInclude$2:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & AnalyzeInclude$2:1/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & AnalyzeInclude$2:1/4 # True/5 e.FullPath#2/2 >/1
    if( ! refalrts::ident_term( identifiers[ident_True], context[5] ) )
      continue;
    // closed e.FullPath#2 as range 2
    //DEBUG: e.FullPath#2: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Success/4 Reuse: # SR/5 AsIs: e.FullPath#2/2 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_Success]);
    refalrts::update_ident(context[5], identifiers[ident_SR]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[0], context[1] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AnalyzeInclude$2:1/4 # False/5 e.FullPath#2/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_False], context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FullPath#2 as range 2
  //DEBUG: e.FullPath#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} e.FullPath#2/2 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Fails/4 HalfReuse: )/5 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_Fails]);
  refalrts::reinit_close_bracket(context[5]);
  refalrts::link_brackets( context[0], context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, context[5], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_AnalyzeInclude_S2B1("AnalyzeInclude$2:1", 4068349913U, 770554282U, func_gen_AnalyzeInclude_S2B1);


static refalrts::FnResult func_gen_AnalyzeInclude_S3B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & AnalyzeInclude$3:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & AnalyzeInclude$3:1/4 (/7 s.new#1/13 e.new#2/5 )/8 (/11 s.new#3/14 e.new#4/9 )/12 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[13], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 5
  if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 9
  do {
    // </0 & AnalyzeInclude$3:1/4 (/7 # True/13 e.R5-FullPath#2/5 )/8 (/11 s.ResSR#2/14 e.SR-FullPath#2/9 )/12 >/1
    if( ! refalrts::ident_term( identifiers[ident_True], context[13] ) )
      continue;
    // closed e.R5-FullPath#2 as range 5
    // closed e.SR-FullPath#2 as range 9
    //DEBUG: s.ResSR#2: 14
    //DEBUG: e.R5-FullPath#2: 5
    //DEBUG: e.SR-FullPath#2: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} (/11 s.ResSR#2/14 e.SR-FullPath#2/9 )/12 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Success/7 Reuse: # R5/13 AsIs: e.R5-FullPath#2/5 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket(context[4]);
    refalrts::reinit_ident(context[7], identifiers[ident_Success]);
    refalrts::update_ident(context[13], identifiers[ident_R5]);
    refalrts::link_brackets( context[4], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AnalyzeInclude$3:1/4 (/7 # False/13 e.new#5/5 )/8 (/11 s.new#6/14 e.new#7/9 )/12 >/1
  if( ! refalrts::ident_term( identifiers[ident_False], context[13] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#5 as range 5
  // closed e.new#7 as range 9
  do {
    // </0 & AnalyzeInclude$3:1/4 (/7 # False/13 e.R5-FullPath#2/5 )/8 (/11 # True/14 e.SR-FullPath#2/9 )/12 >/1
    if( ! refalrts::ident_term( identifiers[ident_True], context[14] ) )
      continue;
    // closed e.R5-FullPath#2 as range 5
    // closed e.SR-FullPath#2 as range 9
    //DEBUG: e.R5-FullPath#2: 5
    //DEBUG: e.SR-FullPath#2: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & AnalyzeInclude$3:1/4 (/7 # False/13 e.R5-FullPath#2/5 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/8 HalfReuse: # Success/11 Reuse: # SR/14 AsIs: e.SR-FullPath#2/9 AsIs: )/12 } Tile{ ]] }
    refalrts::reinit_open_bracket(context[8]);
    refalrts::reinit_ident(context[11], identifiers[ident_Success]);
    refalrts::update_ident(context[14], identifiers[ident_SR]);
    refalrts::link_brackets( context[8], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[12] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AnalyzeInclude$3:1/4 (/7 # False/13 e.R5-FullPath#2/5 )/8 (/11 # False/14 e.SR-FullPath#2/9 )/12 >/1
  if( ! refalrts::ident_term( identifiers[ident_False], context[14] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.R5-FullPath#2 as range 5
  // closed e.SR-FullPath#2 as range 9
  //DEBUG: e.R5-FullPath#2: 5
  //DEBUG: e.SR-FullPath#2: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} # False/13 e.R5-FullPath#2/5 )/8 (/11 # False/14 e.SR-FullPath#2/9 )/12 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Fails/4 HalfReuse: )/7 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_Fails]);
  refalrts::reinit_close_bracket(context[7]);
  refalrts::link_brackets( context[0], context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_AnalyzeInclude_S3B1("AnalyzeInclude$3:1", 4068349913U, 770554282U, func_gen_AnalyzeInclude_S3B1);


static refalrts::FnResult func_AnalyzeInclude(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & AnalyzeInclude/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & AnalyzeInclude/4 e.new#1/5 s.new#2/11 'r'/10 'e'/9 'f'/8 'i'/7 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = refalrts::char_right( 'i', context[5], context[6] );
    if( ! context[7] )
      continue;
    context[8] = refalrts::char_right( 'f', context[5], context[6] );
    if( ! context[8] )
      continue;
    context[9] = refalrts::char_right( 'e', context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::char_right( 'r', context[5], context[6] );
    if( ! context[10] )
      continue;
    if( ! refalrts::svar_right( context[11], context[5], context[6] ) )
      continue;
    // closed e.new#1 as range 5
    do {
      // </0 & AnalyzeInclude/4 e.FileName#1/5 '.'/11 'r'/10 'e'/9 'f'/8 'i'/7 >/1
      if( ! refalrts::char_term( '.', context[11] ) )
        continue;
      // closed e.FileName#1 as range 5
      //DEBUG: e.FileName#1: 5

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </12 & AnalyzeInclude$1:1/13 Tile{ AsIs: </0 Reuse: & ExistFile-T/4 AsIs: e.FileName#1/5 AsIs: '.'/11 AsIs: 'r'/10 AsIs: 'e'/9 AsIs: 'f'/8 AsIs: 'i'/7 AsIs: >/1 } >/14 Tile{ ]] }
      refalrts::alloc_open_call(vm, context[12]);
      refalrts::alloc_name(vm, context[13], functions[efunc_gen_AnalyzeInclude_S1B1]);
      refalrts::alloc_close_call(vm, context[14]);
      refalrts::update_name(context[4], functions[efunc_ExistFilem_T]);
      refalrts::push_stack( vm, context[14] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
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

    // </0 & AnalyzeInclude/4 e.FileName#1/12 '.'/14 's'/11 'r'/10 'e'/9 'f'/8 'i'/7 >/1
    context[12] = context[5];
    context[13] = context[6];
    if( ! refalrts::char_term( 's', context[11] ) )
      continue;
    context[14] = refalrts::char_right( '.', context[12], context[13] );
    if( ! context[14] )
      continue;
    // closed e.FileName#1 as range 12
    //DEBUG: e.FileName#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </15 & AnalyzeInclude$2:1/16 Tile{ AsIs: </0 Reuse: & ExistFile-T/4 AsIs: e.FileName#1/12 AsIs: '.'/14 AsIs: 's'/11 AsIs: 'r'/10 AsIs: 'e'/9 AsIs: 'f'/8 AsIs: 'i'/7 AsIs: >/1 } >/17 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_name(vm, context[16], functions[efunc_gen_AnalyzeInclude_S2B1]);
    refalrts::alloc_close_call(vm, context[17]);
    refalrts::update_name(context[4], functions[efunc_ExistFilem_T]);
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AnalyzeInclude/4 e.FileName#1/2 >/1
  // closed e.FileName#1 as range 2
  //DEBUG: e.FileName#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & AnalyzeInclude$3:1/6 (/7 Tile{ AsIs: </0 Reuse: & ExistFile-T/4 AsIs: e.FileName#1/2 HalfReuse: '.'/1 }"refi"/8 >/10 )/11 (/12 </13 & ExistFile-T/14 e.FileName#1/2/15".srefi"/17 >/19 )/20 >/21 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_AnalyzeInclude_S3B1]);
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_chars(vm, context[8], context[9], "refi", 4);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_ExistFilem_T]);
  refalrts::copy_evar(vm, context[15], context[16], context[2], context[3]);
  refalrts::alloc_chars(vm, context[17], context[18], ".srefi", 6);
  refalrts::alloc_close_call(vm, context[19]);
  refalrts::alloc_close_bracket(vm, context[20]);
  refalrts::alloc_close_call(vm, context[21]);
  refalrts::update_name(context[4], functions[efunc_ExistFilem_T]);
  refalrts::reinit_char(context[1], '.');
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[5] );
  refalrts::link_brackets( context[12], context[20] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[7], context[11] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[21] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_AnalyzeInclude("AnalyzeInclude", 4068349913U, 770554282U, func_AnalyzeInclude);


//End of file
