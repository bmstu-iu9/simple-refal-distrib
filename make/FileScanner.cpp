// This file automatically generated from 'FileScanner.ref'
// Don't edit! Edit 'FileScanner.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_3053603299_1970338463
#define COOKIE1_ 3053603299U
#define COOKIE2_ 1970338463U

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
  efunc_FindFileEx = 14,
  efunc_Map = 15,
  efunc_gen_CreateFileList_L1 = 16,
  efunc_DoCreateFileList = 17,
  efunc_FindImports = 18,
  efunc_gen_DoCreateFileList_S3A1 = 19,
  efunc_gen_FindImports_S4A2 = 20,
  efunc_FindImportsm_Aux = 21,
  efunc_gen_FindImports_S4A1 = 22,
  efunc_gen_PreludePseudoIncludeLine_S1B1 = 23,
  efunc_Configm_GetPrelude = 24,
  efunc_Inc = 25,
  efunc_Trim = 26,
  efunc_gen_FindImportsm_Aux_A4L1S2A1 = 27,
  efunc_UpdatePrefix = 28,
  efunc_gen_FindImportsm_Aux_A4L1S3A1 = 29,
  efunc_Configm_AddReference = 30,
  efunc_FindIncludeEx = 31,
  efunc_UnEscapeString = 32,
  efunc_gen_FindImportsm_Aux_A4 = 33,
  efunc_MapAccum = 34,
  efunc_gen_FindImportsm_Aux_A4L1 = 35,
  efunc_PreludePseudoIncludeLine = 36,
  efunc_gen_FindImportsm_Aux_A3 = 37,
  efunc_LoadFile = 38,
  efunc_gen_FindImportsm_Aux_A2 = 39,
  efunc_gen_FindImportsm_Aux_A2B1 = 40,
  efunc_ExistFile = 41,
  efunc_CommentForDialect = 42,
  efunc_gen_FindImportsm_Aux_A1 = 43,
  efunc_FindFiles = 44,
  efunc_GetFolders = 45,
  efunc_gen_FindFileEx_B1 = 46,
  efunc_Configm_GetTargetMode = 47,
  efunc_gen_FindFileEx_A1 = 48,
  efunc_gen_GetFolders_L1 = 49,
  efunc_Configm_GetFolders = 50,
  efunc_gen_UpdatePrefix_B1S1A1 = 51,
  efunc_Configm_SetPrefix = 52,
  efunc_Configm_GetPrefix = 53,
  efunc_gen_UpdatePrefix_B1 = 54,
  efunc_FormatEscapeError = 55,
  efunc_FindInclude = 56,
  efunc_gen_FindIncludeEx_S2B1 = 57,
  efunc_UnEscapeStringm_SR = 58,
  efunc_UnEscapeStringm_R5 = 59,
  efunc_DoUnEscapeStringm_R5 = 60,
  efunc_gen_DoUnEscapeStringm_R5_S1C1 = 61,
  efunc_gen_DoUnEscapeStringm_R5_S2C1 = 62,
  efunc_HexDigit = 63,
  efunc_gen_DoUnEscapeStringm_R5_S2C2 = 64,
  efunc_Chr = 65,
  efunc_Prefix3 = 66,
};


enum ident {
  ident_k43_ = 0,
  ident_k47_ = 1,
  ident_k37_ = 2,
  ident_k42_ = 3,
  ident_k63_ = 4,
  ident_m_ = 5,
  ident_CMDm_LINE = 6,
  ident_Ck43_k43_ = 7,
  ident_Source = 8,
  ident_RSL = 9,
  ident_Froms = 10,
  ident_Output = 11,
  ident_OutputWithNative = 12,
  ident_Include = 13,
  ident_Error = 14,
  ident_R5 = 15,
  ident_SR = 16,
  ident_Prelude = 17,
  ident_Success = 18,
  ident_True = 19,
  ident_False = 20,
  ident_NotFound = 21,
  ident_REF5RSL = 22,
  ident_NotSet = 23,
  ident_Fails = 24,
  ident_BadEscapeCode = 25,
  ident_BadEscapeSymbol = 26,
  ident_EOLAfterSlash = 27,
  ident_Fail = 28,
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

static refalrts::NativeReference nat_ref_Mu("Mu", COOKIE1_, COOKIE2_, func_Mu);


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
    refalrts::alloc_number(vm, context[9], 1970338463UL);
    refalrts::update_name(context[4], functions[efunc_u_u_FindMuPtr]);
    refalrts::reinit_number(context[5], 3053603299UL);
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
  refalrts::reinit_number(context[5], 3053603299UL);
  refalrts::reinit_number(context[7], 1970338463UL);
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

static refalrts::NativeReference nat_ref_gen_u_u_Mum_Aux_S13B1("__Mu-Aux$13:1", COOKIE1_, COOKIE2_, func_gen_u_u_Mum_Aux_S13B1);


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

static refalrts::NativeReference nat_ref_u_u_Mum_Aux("__Mu-Aux", COOKIE1_, COOKIE2_, func_u_u_Mum_Aux);


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

static refalrts::NativeReference nat_ref_Residue("Residue", COOKIE1_, COOKIE2_, func_Residue);


static refalrts::FnResult func_gen_CreateFileList_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & CreateFileList\1/4 t.Config#1/9 (/7 e.Unit#2/5 )/8 >/1
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
  // closed e.Unit#2 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Unit#2: 5
  //DEBUG: t.Config#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindFileEx/4 AsIs: t.Config#1/9 HalfReuse: # CMD-LINE/7 AsIs: e.Unit#2/5 HalfReuse: >/8 } Tile{ ]] }
  refalrts::update_name(context[4], functions[efunc_FindFileEx]);
  refalrts::reinit_ident(context[7], identifiers[ident_CMDm_LINE]);
  refalrts::reinit_close_call(context[8]);
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, context[8], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CreateFileList_L1("CreateFileList\\1", COOKIE1_, COOKIE2_, func_gen_CreateFileList_L1);


static refalrts::FnResult func_CreateFileList(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & CreateFileList/4 t.Config#1/5 e.Units#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Units#1 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: e.Units#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoCreateFileList/4 AsIs: t.Config#1/5 } (/7 )/8 </9 & Map/10 [*]/11 & CreateFileList\1/12 t.Config#1/5/13 {*}/15 Tile{ AsIs: e.Units#1/2 } >/16 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_close_bracket(vm, context[8]);
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_Map]);
  refalrts::alloc_closure_head(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_gen_CreateFileList_L1]);
  refalrts::copy_evar(vm, context[13], context[14], context[5], context[6]);
  refalrts::alloc_unwrapped_closure(vm, context[15], context[11]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::update_name(context[4], functions[efunc_DoCreateFileList]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[15] );
  refalrts::use( res );
  refalrts::wrap_closure( context[15] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CreateFileList("CreateFileList", 0U, 0U, func_CreateFileList);


static refalrts::FnResult func_gen_DoCreateFileList_S3A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & DoCreateFileList$3=1/4 (/7 e.Modules#1/5 )/8 (/11 e.NextModule#1/9 )/12 (/15 e.NotScanned#1/13 )/16 t.Config#2/17 e.NewNotScanned#2/2 >/1
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
  // closed e.Modules#1 as range 5
  // closed e.NextModule#1 as range 9
  // closed e.NotScanned#1 as range 13
  context[18] = refalrts::tvar_left( context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  // closed e.NewNotScanned#2 as range 2
  //DEBUG: e.Modules#1: 5
  //DEBUG: e.NextModule#1: 9
  //DEBUG: e.NotScanned#1: 13
  //DEBUG: t.Config#2: 17
  //DEBUG: e.NewNotScanned#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} )/16 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoCreateFileList/4 } Tile{ AsIs: t.Config#2/17 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Modules#1/5 } Tile{ AsIs: (/11 AsIs: e.NextModule#1/9 AsIs: )/12 HalfReuse: )/15 } Tile{ AsIs: e.NewNotScanned#2/2 } Tile{ AsIs: e.NotScanned#1/13 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_DoCreateFileList]);
  refalrts::reinit_close_bracket(context[15]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[15] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[15] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoCreateFileList_S3A1("DoCreateFileList$3=1", COOKIE1_, COOKIE2_, func_gen_DoCreateFileList_S3A1);


static refalrts::FnResult func_DoCreateFileList(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  // </0 & DoCreateFileList/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoCreateFileList/4 t.new#1/5 (/9 e.new#2/7 )/10 e.new#3/2 >/1
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
    // </0 & DoCreateFileList/4 t.Config#1/5 (/9 e.Modules#1/11 )/10 >/1
    context[11] = context[7];
    context[12] = context[8];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Modules#1 as range 11
    //DEBUG: t.Config#1: 5
    //DEBUG: e.Modules#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoCreateFileList/4 {REMOVED TILE} (/9 {REMOVED TILE} )/10 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Config#1/5 } Tile{ AsIs: e.Modules#1/11 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoCreateFileList/4 t.new#4/5 (/9 e.new#7/7 )/10 (/13 e.new#5/11 )/14 e.new#6/2 >/1
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.new#7 as range 7
  // closed e.new#5 as range 11
  // closed e.new#6 as range 2
  do {
    // </0 & DoCreateFileList/4 t.Config#1/5 (/9 e.Modules-B#1/21 (/27 e.NextModule#1/29 )/28 e.Modules-E#1/23 )/10 (/13 e.NextModule#1/17 )/14 e.NotScanned#1/19 >/1
    context[15] = context[7];
    context[16] = context[8];
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[2];
    context[20] = context[3];
    // closed e.NextModule#1 as range 17
    // closed e.NotScanned#1 as range 19
    context[21] = 0;
    context[22] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[23] = context[15];
      context[24] = context[16];
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[23], context[24] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      if( ! refalrts::repeated_evar_left( vm, context[29], context[30], context[17], context[18], context[25], context[26] ) )
        continue;
      if( ! refalrts::empty_seq( context[25], context[26] ) )
        continue;
      // closed e.Modules-E#1 as range 23
      //DEBUG: t.Config#1: 5
      //DEBUG: e.NextModule#1: 17
      //DEBUG: e.NotScanned#1: 19
      //DEBUG: e.Modules-B#1: 21
      //DEBUG: e.Modules-E#1: 23

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/13 e.NextModule#1/17 )/14 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoCreateFileList/4 AsIs: t.Config#1/5 AsIs: (/9 AsIs: e.Modules-B#1/21 AsIs: (/27 AsIs: e.NextModule#1/29 AsIs: )/28 AsIs: e.Modules-E#1/23 AsIs: )/10 } Tile{ AsIs: e.NotScanned#1/19 } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::link_brackets( context[27], context[28] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::splice_to_freelist_open( vm, context[10], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[21], context[22], context[15], context[16] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoCreateFileList/4 t.Config#1/5 (/9 e.Modules#1/7 )/10 (/13 e.NextModule#1/11 )/14 e.NotScanned#1/2 >/1
  // closed e.Modules#1 as range 7
  // closed e.NextModule#1 as range 11
  // closed e.NotScanned#1 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: e.Modules#1: 7
  //DEBUG: e.NextModule#1: 11
  //DEBUG: e.NotScanned#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoCreateFileList$3=1/4 } Tile{ AsIs: (/9 AsIs: e.Modules#1/7 AsIs: )/10 AsIs: (/13 AsIs: e.NextModule#1/11 AsIs: )/14 } (/15 Tile{ AsIs: e.NotScanned#1/2 } )/16 </17 & FindImports/18 Tile{ AsIs: t.Config#1/5 } e.NextModule#1/11/19 >/21 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::alloc_close_bracket(vm, context[16]);
  refalrts::alloc_open_call(vm, context[17]);
  refalrts::alloc_name(vm, context[18], functions[efunc_FindImports]);
  refalrts::copy_evar(vm, context[19], context[20], context[11], context[12]);
  refalrts::alloc_close_call(vm, context[21]);
  refalrts::update_name(context[4], functions[efunc_gen_DoCreateFileList_S3A1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[17] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[16], context[18] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[9], context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoCreateFileList("DoCreateFileList", COOKIE1_, COOKIE2_, func_DoCreateFileList);


static refalrts::FnResult func_gen_FindImports_S4A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & FindImports$4=2/4 (/7 e.FromsUnits#2/5 )/8 t.Config#3/9 e.NativeUnits#3/2 >/1
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
  // closed e.FromsUnits#2 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.NativeUnits#3 as range 2
  //DEBUG: e.FromsUnits#2: 5
  //DEBUG: t.Config#3: 9
  //DEBUG: e.NativeUnits#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & FindImports$4=2/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Config#3/9 } Tile{ AsIs: e.FromsUnits#2/5 } Tile{ AsIs: e.NativeUnits#3/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindImports_S4A2("FindImports$4=2", COOKIE1_, COOKIE2_, func_gen_FindImports_S4A2);


static refalrts::FnResult func_gen_FindImports_S4A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & FindImports$4=1/4 (/7 e.Native#1/5 )/8 t.Config#2/9 e.FromsUnits#2/2 >/1
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
  // closed e.Native#1 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.FromsUnits#2 as range 2
  //DEBUG: e.Native#1: 5
  //DEBUG: t.Config#2: 9
  //DEBUG: e.FromsUnits#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindImports$4=2/4 AsIs: (/7 } Tile{ AsIs: e.FromsUnits#2/2 } )/11 </12 Tile{ HalfReuse: & FindImports-Aux/8 AsIs: t.Config#2/9 } # C++/13 Tile{ AsIs: e.Native#1/5 } >/14 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::alloc_open_call(vm, context[12]);
  refalrts::alloc_ident(vm, context[13], identifiers[ident_Ck43_k43_]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::update_name(context[4], functions[efunc_gen_FindImports_S4A2]);
  refalrts::reinit_name(context[8], functions[efunc_FindImportsm_Aux]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[12] );
  refalrts::link_brackets( context[7], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[8], context[10] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindImports_S4A1("FindImports$4=1", COOKIE1_, COOKIE2_, func_gen_FindImports_S4A1);


static refalrts::FnResult func_FindImports(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & FindImports/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & FindImports/4 t.new#1/5 s.new#2/7 e.new#3/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & FindImports/4 t.new#4/5 # Source/7 (/12 s.new#5/14 e.new#6/10 )/13 e.new#7/8 >/1
    context[8] = context[2];
    context[9] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Source], context[7] ) )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[8], context[9] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    // closed e.new#7 as range 8
    if( ! refalrts::svar_left( context[14], context[10], context[11] ) )
      continue;
    // closed e.new#6 as range 10
    do {
      // </0 & FindImports/4 t.Config#1/5 # Source/7 (/12 # RSL/14 e.NextModule#1/15 )/13 e.Output#1/17 >/1
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[8];
      context[18] = context[9];
      if( ! refalrts::ident_term( identifiers[ident_RSL], context[14] ) )
        continue;
      // closed e.NextModule#1 as range 15
      // closed e.Output#1 as range 17
      //DEBUG: t.Config#1: 5
      //DEBUG: e.NextModule#1: 15
      //DEBUG: e.Output#1: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Output#1/17 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindImports-Aux/4 AsIs: t.Config#1/5 Reuse: # Froms/7 } Tile{ AsIs: e.NextModule#1/15 } '.'/19 Tile{ HalfReuse: 'f'/12 HalfReuse: 'r'/14 } Tile{ HalfReuse: 'o'/13 }"ms"/20 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[19], '.');
      refalrts::alloc_chars(vm, context[20], context[21], "ms", 2);
      refalrts::update_name(context[4], functions[efunc_FindImportsm_Aux]);
      refalrts::update_ident(context[7], identifiers[ident_Froms]);
      refalrts::reinit_char(context[12], 'f');
      refalrts::reinit_char(context[14], 'r');
      refalrts::reinit_char(context[13], 'o');
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[12], context[14] );
      res = refalrts::splice_evar( res, context[19], context[19] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & FindImports/4 t.Config#1/5 # Source/7 (/12 s.Dialect#1/14 e.NextModule#1/15 )/13 e.Output#1/17 >/1
    context[15] = context[10];
    context[16] = context[11];
    context[17] = context[8];
    context[18] = context[9];
    // closed e.NextModule#1 as range 15
    // closed e.Output#1 as range 17
    //DEBUG: t.Config#1: 5
    //DEBUG: s.Dialect#1: 14
    //DEBUG: e.NextModule#1: 15
    //DEBUG: e.Output#1: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/12 s.Dialect#1/14 {REMOVED TILE} )/13 e.Output#1/17 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindImports-Aux/4 AsIs: t.Config#1/5 HalfReuse: s.Dialect1 #14/7 } Tile{ AsIs: e.NextModule#1/15 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_FindImportsm_Aux]);
    refalrts::reinit_svar( context[7], context[14] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & FindImports/4 t.Config#1/5 # Output/7 e.Output#1/8 >/1
    context[8] = context[2];
    context[9] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Output], context[7] ) )
      continue;
    // closed e.Output#1 as range 8
    //DEBUG: t.Config#1: 5
    //DEBUG: e.Output#1: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindImports-Aux/4 AsIs: t.Config#1/5 Reuse: # Froms/7 AsIs: e.Output#1/8 HalfReuse: '.'/1 }"froms"/10 >/12 Tile{ ]] }
    refalrts::alloc_chars(vm, context[10], context[11], "froms", 5);
    refalrts::alloc_close_call(vm, context[12]);
    refalrts::update_name(context[4], functions[efunc_FindImportsm_Aux]);
    refalrts::update_ident(context[7], identifiers[ident_Froms]);
    refalrts::reinit_char(context[1], '.');
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[12] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FindImports/4 t.new#4/5 s.new#5/7 t.new#6/8 e.new#7/2 >/1
  context[9] = refalrts::tvar_left( context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#7 as range 2
  do {
    // </0 & FindImports/4 t.Config#1/5 # OutputWithNative/7 (/8 e.Output#1/12 )/9 e.Native#1/10 >/1
    context[10] = context[2];
    context[11] = context[3];
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_term( context[12], context[13], context[8] ) )
      continue;
    if( ! refalrts::ident_term( identifiers[ident_OutputWithNative], context[7] ) )
      continue;
    // closed e.Output#1 as range 12
    // closed e.Native#1 as range 10
    //DEBUG: t.Config#1: 5
    //DEBUG: e.Output#1: 12
    //DEBUG: e.Native#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </14 & FindImports$4=1/15 Tile{ AsIs: (/8 } Tile{ AsIs: e.Native#1/10 } Tile{ AsIs: )/9 } Tile{ AsIs: </0 Reuse: & FindImports-Aux/4 AsIs: t.Config#1/5 Reuse: # Froms/7 } Tile{ AsIs: e.Output#1/12 }".froms"/16 >/18 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_FindImports_S4A1]);
    refalrts::alloc_chars(vm, context[16], context[17], ".froms", 6);
    refalrts::alloc_close_call(vm, context[18]);
    refalrts::update_name(context[4], functions[efunc_FindImportsm_Aux]);
    refalrts::update_ident(context[7], identifiers[ident_Froms]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[18] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[16], context[18] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & FindImports/4 t.Config#1/5 # Include/7 s.Dialect#1/8 e.IncludeFile#1/10 >/1
    context[10] = context[2];
    context[11] = context[3];
    if( ! refalrts::svar_term( context[8], context[8] ) )
      continue;
    if( ! refalrts::ident_term( identifiers[ident_Include], context[7] ) )
      continue;
    // closed e.IncludeFile#1 as range 10
    //DEBUG: t.Config#1: 5
    //DEBUG: s.Dialect#1: 8
    //DEBUG: e.IncludeFile#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} # Include/7 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindImports-Aux/4 AsIs: t.Config#1/5 } Tile{ AsIs: s.Dialect#1/8 AsIs: e.IncludeFile#1/10 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_FindImportsm_Aux]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    refalrts::splice_to_freelist_open( vm, context[6], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FindImports/4 t.Config#1/5 # Error/7 t.SrcPos#1/8 e.Message#1/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_Error], context[7] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Message#1 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: t.SrcPos#1: 8
  //DEBUG: e.Message#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & FindImports/4 {REMOVED TILE} # Error/7 t.SrcPos#1/8 e.Message#1/2 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Config#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FindImports("FindImports", COOKIE1_, COOKIE2_, func_FindImports);


static refalrts::FnResult func_CommentForDialect(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & CommentForDialect/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CommentForDialect/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & CommentForDialect/4 # R5/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_R5], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CommentForDialect/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '*'/5 HalfReuse: '$'/1 ]] }
    refalrts::reinit_char(context[5], '*');
    refalrts::reinit_char(context[1], '$');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CommentForDialect/4 # SR/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_SR], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CommentForDialect/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '/'/5 HalfReuse: '/'/1 ]] }
    refalrts::reinit_char(context[5], '/');
    refalrts::reinit_char(context[1], '/');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CommentForDialect/4 # Froms/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_Froms], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CommentForDialect/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '/'/5 HalfReuse: '/'/1 ]] }
    refalrts::reinit_char(context[5], '/');
    refalrts::reinit_char(context[1], '/');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CommentForDialect/4 # C++/5 >/1
  if( ! refalrts::ident_term( identifiers[ident_Ck43_k43_], context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CommentForDialect/4 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: '/'/5 HalfReuse: '/'/1 ]] }
  refalrts::reinit_char(context[5], '/');
  refalrts::reinit_char(context[1], '/');
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[5];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CommentForDialect("CommentForDialect", COOKIE1_, COOKIE2_, func_CommentForDialect);


static refalrts::FnResult func_gen_PreludePseudoIncludeLine_S1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & PreludePseudoIncludeLine$1:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & PreludePseudoIncludeLine$1:1/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & PreludePseudoIncludeLine$1:1/4 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PreludePseudoIncludeLine$1:1/4 e.Prelude#2/2 >/1
  // closed e.Prelude#2 as range 2
  //DEBUG: e.Prelude#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Prelude/4 AsIs: e.Prelude#2/2 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_Prelude]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PreludePseudoIncludeLine_S1B1("PreludePseudoIncludeLine$1:1", COOKIE1_, COOKIE2_, func_gen_PreludePseudoIncludeLine_S1B1);


static refalrts::FnResult func_PreludePseudoIncludeLine(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & PreludePseudoIncludeLine/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & PreludePseudoIncludeLine/4 t.new#1/5 s.new#2/7 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & PreludePseudoIncludeLine/4 t.Config#1/5 # R5/7 >/1
    if( ! refalrts::ident_term( identifiers[ident_R5], context[7] ) )
      continue;
    //DEBUG: t.Config#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </8 & PreludePseudoIncludeLine$1:1/9 Tile{ AsIs: </0 Reuse: & Config-GetPrelude/4 AsIs: t.Config#1/5 HalfReuse: >/7 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[8]);
    refalrts::alloc_name(vm, context[9], functions[efunc_gen_PreludePseudoIncludeLine_S1B1]);
    refalrts::update_name(context[4], functions[efunc_Configm_GetPrelude]);
    refalrts::reinit_close_call(context[7]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PreludePseudoIncludeLine/4 t.Config#1/5 s.Other#1/7 >/1
  //DEBUG: t.Config#1: 5
  //DEBUG: s.Other#1: 7

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & PreludePseudoIncludeLine/4 t.Config#1/5 s.Other#1/7 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PreludePseudoIncludeLine("PreludePseudoIncludeLine", COOKIE1_, COOKIE2_, func_PreludePseudoIncludeLine);


static refalrts::FnResult func_gen_FindImportsm_Aux_A4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & FindImports-Aux=4/4 (/7 t.Config#5/9 s.LineNum#5/11 )/8 e.Units#5/2 >/1
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
  // closed e.Units#5 as range 2
  context[10] = refalrts::tvar_left( context[9], context[5], context[6] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Units#5: 2
  //DEBUG: t.Config#5: 9
  //DEBUG: s.LineNum#5: 11

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & FindImports-Aux=4/4 (/7 {REMOVED TILE} s.LineNum#5/11 )/8 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Config#5/9 } Tile{ AsIs: e.Units#5/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindImportsm_Aux_A4("FindImports-Aux=4", COOKIE1_, COOKIE2_, func_gen_FindImportsm_Aux_A4);


static refalrts::FnResult func_gen_FindImportsm_Aux_A4L1S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & FindImports-Aux=4\1$2=1/4 s.LineNum#5/5 t.Config#6/6 e.Error#6/2 >/1
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
  // closed e.Error#6 as range 2
  //DEBUG: s.LineNum#5: 5
  //DEBUG: t.Config#6: 6
  //DEBUG: e.Error#6: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/8 Tile{ AsIs: t.Config#6/6 } Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.LineNum#5/5 } Tile{ AsIs: >/1 } )/9 Tile{ AsIs: e.Error#6/2 } Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[8]);
  refalrts::alloc_close_bracket(vm, context[9]);
  refalrts::update_name(context[4], functions[efunc_Inc]);
  refalrts::link_brackets( context[8], context[9] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[0], context[5] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindImportsm_Aux_A4L1S2A1("FindImports-Aux=4\\1$2=1", COOKIE1_, COOKIE2_, func_gen_FindImportsm_Aux_A4L1S2A1);


static refalrts::FnResult func_gen_FindImportsm_Aux_A4L1S3A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & FindImports-Aux=4\1$3=1/4 s.LineNum#5/5 # Success/6 t.Config#6/7 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = refalrts::ident_left( identifiers[ident_Success], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.LineNum#5: 5
  //DEBUG: t.Config#6: 7

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 Tile{ AsIs: t.Config#6/7 } Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.LineNum#5/5 HalfReuse: >/6 } Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::update_name(context[4], functions[efunc_Inc]);
  refalrts::reinit_close_call(context[6]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[9], context[1] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindImportsm_Aux_A4L1S3A1("FindImports-Aux=4\\1$3=1", COOKIE1_, COOKIE2_, func_gen_FindImportsm_Aux_A4L1S3A1);


static refalrts::FnResult func_gen_FindImportsm_Aux_A4L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 51 elems
  refalrts::Iter context[51];
  refalrts::zeros( context, 51 );
  // </0 & FindImports-Aux=4\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & FindImports-Aux=4\1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 s.new#3/21 (/19 t.new#4/22 s.new#5/24 )/20 (/15 e.new#6/13 )/16 >/1
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
  context[15] = refalrts::brackets_right( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_right( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  // closed e.new#6 as range 13
  if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[23] = refalrts::tvar_left( context[22], context[17], context[18] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[24], context[17], context[18] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[17], context[18] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & FindImports-Aux=4\1/4 (/7 e.CommentPrefix#2/25 )/8 (/11 e.FileName#1/27 )/12 s.Dialect#1/21 (/19 t.Config#5/22 s.LineNum#5/24 )/20 (/15 e.CommentPrefix#2/31 'F'/33 'R'/34 'O'/35 'M'/36 ' '/37 e.Name#5/29 )/16 >/1
    context[25] = context[5];
    context[26] = context[6];
    context[27] = context[9];
    context[28] = context[10];
    context[29] = context[13];
    context[30] = context[14];
    // closed e.CommentPrefix#2 as range 25
    if( ! refalrts::repeated_evar_left( vm, context[31], context[32], context[25], context[26], context[29], context[30] ) )
      continue;
    context[33] = refalrts::char_left( 'F', context[29], context[30] );
    if( ! context[33] )
      continue;
    context[34] = refalrts::char_left( 'R', context[29], context[30] );
    if( ! context[34] )
      continue;
    context[35] = refalrts::char_left( 'O', context[29], context[30] );
    if( ! context[35] )
      continue;
    context[36] = refalrts::char_left( 'M', context[29], context[30] );
    if( ! context[36] )
      continue;
    context[37] = refalrts::char_left( ' ', context[29], context[30] );
    if( ! context[37] )
      continue;
    // closed e.FileName#1 as range 27
    // closed e.Name#5 as range 29
    //DEBUG: t.Config#5: 22
    //DEBUG: s.Dialect#1: 21
    //DEBUG: s.LineNum#5: 24
    //DEBUG: e.CommentPrefix#2: 25
    //DEBUG: e.FileName#1: 27
    //DEBUG: e.Name#5: 29

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} e.CommentPrefix#2/25 )/8 {REMOVED TILE} {REMOVED TILE} )/12 s.Dialect#1/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.CommentPrefix#2/31 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/19 AsIs: t.Config#5/22 } Tile{ AsIs: </0 Reuse: & Inc/4 HalfReuse: s.LineNum5 #24/7 } Tile{ HalfReuse: >/33 } Tile{ AsIs: )/20 HalfReuse: </15 } Tile{ HalfReuse: & FindFileEx/34 } t.Config#5/22/38 Tile{ AsIs: (/11 } Tile{ AsIs: s.LineNum#5/24 } Tile{ AsIs: e.FileName#1/27 } Tile{ HalfReuse: )/35 HalfReuse: </36 HalfReuse: & Trim/37 AsIs: e.Name#5/29 HalfReuse: >/16 AsIs: >/1 ]] }
    refalrts::copy_evar(vm, context[38], context[39], context[22], context[23]);
    refalrts::update_name(context[4], functions[efunc_Inc]);
    refalrts::reinit_svar( context[7], context[24] );
    refalrts::reinit_close_call(context[33]);
    refalrts::reinit_open_call(context[15]);
    refalrts::reinit_name(context[34], functions[efunc_FindFileEx]);
    refalrts::reinit_close_bracket(context[35]);
    refalrts::reinit_open_call(context[36]);
    refalrts::reinit_name(context[37], functions[efunc_Trim]);
    refalrts::reinit_close_call(context[16]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[36] );
    refalrts::link_brackets( context[11], context[35] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::push_stack( vm, context[33] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[35];
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[24], context[24] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[38], context[39] );
    res = refalrts::splice_evar( res, context[34], context[34] );
    res = refalrts::splice_evar( res, context[20], context[15] );
    res = refalrts::splice_evar( res, context[33], context[33] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[19], context[23] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & FindImports-Aux=4\1/4 (/7 e.CommentPrefix#2/25 )/8 (/11 e.FileName#1/27 )/12 s.Dialect#1/21 (/19 t.Config#5/22 s.LineNum#5/24 )/20 (/15 e.CommentPrefix#2/31 'P'/33 'R'/34 'E'/35 'F'/36 'I'/37 'X'/38 ' '/39 e.Name#5/29 )/16 >/1
    context[25] = context[5];
    context[26] = context[6];
    context[27] = context[9];
    context[28] = context[10];
    context[29] = context[13];
    context[30] = context[14];
    // closed e.CommentPrefix#2 as range 25
    if( ! refalrts::repeated_evar_left( vm, context[31], context[32], context[25], context[26], context[29], context[30] ) )
      continue;
    context[33] = refalrts::char_left( 'P', context[29], context[30] );
    if( ! context[33] )
      continue;
    context[34] = refalrts::char_left( 'R', context[29], context[30] );
    if( ! context[34] )
      continue;
    context[35] = refalrts::char_left( 'E', context[29], context[30] );
    if( ! context[35] )
      continue;
    context[36] = refalrts::char_left( 'F', context[29], context[30] );
    if( ! context[36] )
      continue;
    context[37] = refalrts::char_left( 'I', context[29], context[30] );
    if( ! context[37] )
      continue;
    context[38] = refalrts::char_left( 'X', context[29], context[30] );
    if( ! context[38] )
      continue;
    context[39] = refalrts::char_left( ' ', context[29], context[30] );
    if( ! context[39] )
      continue;
    // closed e.FileName#1 as range 27
    // closed e.Name#5 as range 29
    //DEBUG: t.Config#5: 22
    //DEBUG: s.Dialect#1: 21
    //DEBUG: s.LineNum#5: 24
    //DEBUG: e.CommentPrefix#2: 25
    //DEBUG: e.FileName#1: 27
    //DEBUG: e.Name#5: 29

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} e.CommentPrefix#2/25 )/8 (/11 {REMOVED TILE} )/12 s.Dialect#1/21 {REMOVED TILE} {REMOVED TILE} )/20 {REMOVED TILE} e.CommentPrefix#2/31 'P'/33 'R'/34 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindImports-Aux=4\1$2=1/4 HalfReuse: s.LineNum5 #24/7 } Tile{ HalfReuse: </35 } Tile{ HalfReuse: & UpdatePrefix/19 AsIs: t.Config#5/22 } Tile{ AsIs: (/15 } Tile{ AsIs: s.LineNum#5/24 } Tile{ AsIs: e.FileName#1/27 } Tile{ HalfReuse: )/37 HalfReuse: </38 HalfReuse: & Trim/39 AsIs: e.Name#5/29 HalfReuse: >/16 AsIs: >/1 } Tile{ HalfReuse: >/36 } Tile{ ]] }
    refalrts::update_name(context[4], functions[efunc_gen_FindImportsm_Aux_A4L1S2A1]);
    refalrts::reinit_svar( context[7], context[24] );
    refalrts::reinit_open_call(context[35]);
    refalrts::reinit_name(context[19], functions[efunc_UpdatePrefix]);
    refalrts::reinit_close_bracket(context[37]);
    refalrts::reinit_open_call(context[38]);
    refalrts::reinit_name(context[39], functions[efunc_Trim]);
    refalrts::reinit_close_call(context[16]);
    refalrts::reinit_close_call(context[36]);
    refalrts::push_stack( vm, context[36] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[35] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[38] );
    refalrts::link_brackets( context[15], context[37] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[36], context[36] );
    res = refalrts::splice_evar( res, context[37], context[1] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[24], context[24] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[19], context[23] );
    res = refalrts::splice_evar( res, context[35], context[35] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & FindImports-Aux=4\1/4 (/7 e.CommentPrefix#2/25 )/8 (/11 e.FileName#1/27 )/12 s.Dialect#1/21 (/19 t.Config#5/22 s.LineNum#5/24 )/20 (/15 e.CommentPrefix#2/31 'R'/33 'E'/34 'F'/35 'E'/36 'R'/37 'E'/38 'N'/39 'C'/40 'E'/41 ' '/42 e.Name#5/29 )/16 >/1
    context[25] = context[5];
    context[26] = context[6];
    context[27] = context[9];
    context[28] = context[10];
    context[29] = context[13];
    context[30] = context[14];
    // closed e.CommentPrefix#2 as range 25
    if( ! refalrts::repeated_evar_left( vm, context[31], context[32], context[25], context[26], context[29], context[30] ) )
      continue;
    context[33] = refalrts::char_left( 'R', context[29], context[30] );
    if( ! context[33] )
      continue;
    context[34] = refalrts::char_left( 'E', context[29], context[30] );
    if( ! context[34] )
      continue;
    context[35] = refalrts::char_left( 'F', context[29], context[30] );
    if( ! context[35] )
      continue;
    context[36] = refalrts::char_left( 'E', context[29], context[30] );
    if( ! context[36] )
      continue;
    context[37] = refalrts::char_left( 'R', context[29], context[30] );
    if( ! context[37] )
      continue;
    context[38] = refalrts::char_left( 'E', context[29], context[30] );
    if( ! context[38] )
      continue;
    context[39] = refalrts::char_left( 'N', context[29], context[30] );
    if( ! context[39] )
      continue;
    context[40] = refalrts::char_left( 'C', context[29], context[30] );
    if( ! context[40] )
      continue;
    context[41] = refalrts::char_left( 'E', context[29], context[30] );
    if( ! context[41] )
      continue;
    context[42] = refalrts::char_left( ' ', context[29], context[30] );
    if( ! context[42] )
      continue;
    // closed e.FileName#1 as range 27
    // closed e.Name#5 as range 29
    //DEBUG: t.Config#5: 22
    //DEBUG: s.Dialect#1: 21
    //DEBUG: s.LineNum#5: 24
    //DEBUG: e.CommentPrefix#2: 25
    //DEBUG: e.FileName#1: 27
    //DEBUG: e.Name#5: 29

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} e.CommentPrefix#2/25 )/8 (/11 e.FileName#1/27 )/12 s.Dialect#1/21 {REMOVED TILE} s.LineNum#5/24 )/20 (/15 e.CommentPrefix#2/31 'R'/33 'E'/34 'F'/35 'E'/36 {REMOVED TILE} 'E'/38 'N'/39 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindImports-Aux=4\1$3=1/4 HalfReuse: s.LineNum5 #24/7 } Tile{ HalfReuse: </37 } Tile{ HalfReuse: & Config-AddReference/19 AsIs: t.Config#5/22 } Tile{ HalfReuse: </41 HalfReuse: & Trim/42 AsIs: e.Name#5/29 HalfReuse: >/16 AsIs: >/1 } Tile{ HalfReuse: >/40 } Tile{ ]] }
    refalrts::update_name(context[4], functions[efunc_gen_FindImportsm_Aux_A4L1S3A1]);
    refalrts::reinit_svar( context[7], context[24] );
    refalrts::reinit_open_call(context[37]);
    refalrts::reinit_name(context[19], functions[efunc_Configm_AddReference]);
    refalrts::reinit_open_call(context[41]);
    refalrts::reinit_name(context[42], functions[efunc_Trim]);
    refalrts::reinit_close_call(context[16]);
    refalrts::reinit_close_call(context[40]);
    refalrts::push_stack( vm, context[40] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[37] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[41] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[40], context[40] );
    res = refalrts::splice_evar( res, context[41], context[1] );
    res = refalrts::splice_evar( res, context[19], context[23] );
    res = refalrts::splice_evar( res, context[37], context[37] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & FindImports-Aux=4\1/4 (/7 e.new#8/25 )/8 (/11 e.new#9/27 )/12 s.new#7/21 (/19 t.new#10/22 s.new#11/24 )/20 (/15 s.new#12/31 e.new#13/29 )/16 >/1
    context[25] = context[5];
    context[26] = context[6];
    context[27] = context[9];
    context[28] = context[10];
    context[29] = context[13];
    context[30] = context[14];
    // closed e.new#8 as range 25
    // closed e.new#9 as range 27
    if( ! refalrts::svar_left( context[31], context[29], context[30] ) )
      continue;
    // closed e.new#13 as range 29
    do {
      // </0 & FindImports-Aux=4\1/4 (/7 e.CommentPrefix#2/32 )/8 (/11 e.FileName#1/34 )/12 s.Dialect#1/21 (/19 t.Config#5/22 s.LineNum#5/24 )/20 (/15 '$'/31 'I'/38 'N'/39 'C'/40 'L'/41 'U'/42 'D'/43 'E'/44 ' '/45 '\"'/46 e.EscapedName#5/36 '\"'/48 ';'/47 )/16 >/1
      context[32] = context[25];
      context[33] = context[26];
      context[34] = context[27];
      context[35] = context[28];
      context[36] = context[29];
      context[37] = context[30];
      if( ! refalrts::char_term( '$', context[31] ) )
        continue;
      context[38] = refalrts::char_left( 'I', context[36], context[37] );
      if( ! context[38] )
        continue;
      context[39] = refalrts::char_left( 'N', context[36], context[37] );
      if( ! context[39] )
        continue;
      context[40] = refalrts::char_left( 'C', context[36], context[37] );
      if( ! context[40] )
        continue;
      context[41] = refalrts::char_left( 'L', context[36], context[37] );
      if( ! context[41] )
        continue;
      context[42] = refalrts::char_left( 'U', context[36], context[37] );
      if( ! context[42] )
        continue;
      context[43] = refalrts::char_left( 'D', context[36], context[37] );
      if( ! context[43] )
        continue;
      context[44] = refalrts::char_left( 'E', context[36], context[37] );
      if( ! context[44] )
        continue;
      context[45] = refalrts::char_left( ' ', context[36], context[37] );
      if( ! context[45] )
        continue;
      context[46] = refalrts::char_left( '\"', context[36], context[37] );
      if( ! context[46] )
        continue;
      context[47] = refalrts::char_right( ';', context[36], context[37] );
      if( ! context[47] )
        continue;
      context[48] = refalrts::char_right( '\"', context[36], context[37] );
      if( ! context[48] )
        continue;
      // closed e.CommentPrefix#2 as range 32
      // closed e.FileName#1 as range 34
      // closed e.EscapedName#5 as range 36
      //DEBUG: t.Config#5: 22
      //DEBUG: s.Dialect#1: 21
      //DEBUG: s.LineNum#5: 24
      //DEBUG: e.CommentPrefix#2: 32
      //DEBUG: e.FileName#1: 34
      //DEBUG: e.EscapedName#5: 36

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & FindImports-Aux=4\1/4 (/7 e.CommentPrefix#2/32 )/8 {REMOVED TILE} {REMOVED TILE} )/12 s.Dialect#1/21 {REMOVED TILE} {REMOVED TILE} )/20 {REMOVED TILE} {REMOVED TILE} )/16 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/19 AsIs: t.Config#5/22 } Tile{ HalfReuse: </15 HalfReuse: & Inc/31 HalfReuse: s.LineNum5 #24/38 HalfReuse: >/39 HalfReuse: )/40 HalfReuse: </41 HalfReuse: & FindIncludeEx/42 } t.Config#5/22/49 Tile{ AsIs: (/11 } Tile{ AsIs: s.LineNum#5/24 } Tile{ AsIs: e.FileName#1/34 } Tile{ HalfReuse: )/43 HalfReuse: </44 HalfReuse: & UnEscapeString/45 HalfReuse: s.Dialect1 #21/46 AsIs: e.EscapedName#5/36 HalfReuse: >/48 HalfReuse: >/47 } Tile{ ]] }
      refalrts::copy_evar(vm, context[49], context[50], context[22], context[23]);
      refalrts::reinit_open_call(context[15]);
      refalrts::reinit_name(context[31], functions[efunc_Inc]);
      refalrts::reinit_svar( context[38], context[24] );
      refalrts::reinit_close_call(context[39]);
      refalrts::reinit_close_bracket(context[40]);
      refalrts::reinit_open_call(context[41]);
      refalrts::reinit_name(context[42], functions[efunc_FindIncludeEx]);
      refalrts::reinit_close_bracket(context[43]);
      refalrts::reinit_open_call(context[44]);
      refalrts::reinit_name(context[45], functions[efunc_UnEscapeString]);
      refalrts::reinit_svar( context[46], context[21] );
      refalrts::reinit_close_call(context[48]);
      refalrts::reinit_close_call(context[47]);
      refalrts::push_stack( vm, context[47] );
      refalrts::push_stack( vm, context[41] );
      refalrts::push_stack( vm, context[48] );
      refalrts::push_stack( vm, context[44] );
      refalrts::link_brackets( context[11], context[43] );
      refalrts::link_brackets( context[19], context[40] );
      refalrts::push_stack( vm, context[39] );
      refalrts::push_stack( vm, context[15] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[43], context[47] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      res = refalrts::splice_evar( res, context[24], context[24] );
      res = refalrts::splice_evar( res, context[11], context[11] );
      res = refalrts::splice_evar( res, context[49], context[50] );
      res = refalrts::splice_evar( res, context[15], context[42] );
      res = refalrts::splice_evar( res, context[19], context[23] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & FindImports-Aux=4\1/4 (/7 e.CommentPrefix#2/32 )/8 (/11 e.FileName#1/34 )/12 s.Dialect#1/21 (/19 t.Config#5/22 s.LineNum#5/24 )/20 (/15 # Prelude/31 e.PreludeName#5/36 )/16 >/1
    context[32] = context[25];
    context[33] = context[26];
    context[34] = context[27];
    context[35] = context[28];
    context[36] = context[29];
    context[37] = context[30];
    if( ! refalrts::ident_term( identifiers[ident_Prelude], context[31] ) )
      continue;
    // closed e.CommentPrefix#2 as range 32
    // closed e.FileName#1 as range 34
    // closed e.PreludeName#5 as range 36
    //DEBUG: t.Config#5: 22
    //DEBUG: s.Dialect#1: 21
    //DEBUG: s.LineNum#5: 24
    //DEBUG: e.CommentPrefix#2: 32
    //DEBUG: e.FileName#1: 34
    //DEBUG: e.PreludeName#5: 36

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & FindImports-Aux=4\1/4 (/7 e.CommentPrefix#2/32 {REMOVED TILE} s.Dialect#1/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/19 AsIs: t.Config#5/22 AsIs: s.LineNum#5/24 AsIs: )/20 HalfReuse: </15 HalfReuse: & FindIncludeEx/31 } t.Config#5/22/38 Tile{ HalfReuse: (/8 HalfReuse: s.LineNum5 #24/11 AsIs: e.FileName#1/34 AsIs: )/12 } Tile{ HalfReuse: # Success/16 } Tile{ AsIs: e.PreludeName#5/36 } Tile{ AsIs: >/1 ]] }
    refalrts::copy_evar(vm, context[38], context[39], context[22], context[23]);
    refalrts::reinit_open_call(context[15]);
    refalrts::reinit_name(context[31], functions[efunc_FindIncludeEx]);
    refalrts::reinit_open_bracket(context[8]);
    refalrts::reinit_svar( context[11], context[24] );
    refalrts::reinit_ident(context[16], identifiers[ident_Success]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[15] );
    refalrts::link_brackets( context[8], context[12] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[36], context[37] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[8], context[12] );
    res = refalrts::splice_evar( res, context[38], context[39] );
    res = refalrts::splice_evar( res, context[19], context[31] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FindImports-Aux=4\1/4 (/7 e.CommentPrefix#2/5 )/8 (/11 e.FileName#1/9 )/12 s.Dialect#1/21 (/19 t.Config#5/22 s.LineNum#5/24 )/20 (/15 e.OtherLine#5/13 )/16 >/1
  // closed e.CommentPrefix#2 as range 5
  // closed e.FileName#1 as range 9
  // closed e.OtherLine#5 as range 13
  //DEBUG: t.Config#5: 22
  //DEBUG: s.Dialect#1: 21
  //DEBUG: s.LineNum#5: 24
  //DEBUG: e.CommentPrefix#2: 5
  //DEBUG: e.FileName#1: 9
  //DEBUG: e.OtherLine#5: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.CommentPrefix#2/5 )/8 (/11 e.FileName#1/9 )/12 s.Dialect#1/21 {REMOVED TILE} s.LineNum#5/24 )/20 (/15 e.OtherLine#5/13 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/19 AsIs: t.Config#5/22 } Tile{ AsIs: </0 Reuse: & Inc/4 HalfReuse: s.LineNum5 #24/7 } Tile{ HalfReuse: >/16 HalfReuse: )/1 ]] }
  refalrts::update_name(context[4], functions[efunc_Inc]);
  refalrts::reinit_svar( context[7], context[24] );
  refalrts::reinit_close_call(context[16]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[19], context[1] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[16];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[19], context[23] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindImportsm_Aux_A4L1("FindImports-Aux=4\\1", COOKIE1_, COOKIE2_, func_gen_FindImportsm_Aux_A4L1);


static refalrts::FnResult func_gen_FindImportsm_Aux_A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & FindImports-Aux=3/4 (/7 e.CommentPrefix#2/5 )/8 (/11 e.FileName#1/9 )/12 s.Dialect#1/13 t.OriginConfig#1/14 (/18 e.FileContents#3/16 )/19 e.PseudoLine#4/2 >/1
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
  // closed e.CommentPrefix#2 as range 5
  // closed e.FileName#1 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[15] = refalrts::tvar_left( context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  context[16] = 0;
  context[17] = 0;
  context[18] = refalrts::brackets_left( context[16], context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[18], context[19]);
  // closed e.FileContents#3 as range 16
  // closed e.PseudoLine#4 as range 2
  //DEBUG: e.CommentPrefix#2: 5
  //DEBUG: e.FileName#1: 9
  //DEBUG: s.Dialect#1: 13
  //DEBUG: t.OriginConfig#1: 14
  //DEBUG: e.FileContents#3: 16
  //DEBUG: e.PseudoLine#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </20 & FindImports-Aux=4/21 </22 & MapAccum/23 Tile{ HalfReuse: [*]/0 Reuse: & FindImports-Aux=4\1/4 AsIs: (/7 AsIs: e.CommentPrefix#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.FileName#1/9 AsIs: )/12 AsIs: s.Dialect#1/13 } {*}/24 (/25 Tile{ AsIs: t.OriginConfig#1/14 HalfReuse: 1/18 } Tile{ AsIs: )/19 } Tile{ AsIs: e.PseudoLine#4/2 } Tile{ AsIs: e.FileContents#3/16 } >/26 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[20]);
  refalrts::alloc_name(vm, context[21], functions[efunc_gen_FindImportsm_Aux_A4]);
  refalrts::alloc_open_call(vm, context[22]);
  refalrts::alloc_name(vm, context[23], functions[efunc_MapAccum]);
  refalrts::alloc_unwrapped_closure(vm, context[24], context[0]);
  refalrts::alloc_open_bracket(vm, context[25]);
  refalrts::alloc_close_call(vm, context[26]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_FindImportsm_Aux_A4L1]);
  refalrts::reinit_number(context[18], 1UL);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[26] );
  refalrts::push_stack( vm, context[22] );
  refalrts::link_brackets( context[25], context[19] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[26], context[26] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[14], context[18] );
  res = refalrts::splice_evar( res, context[24], context[25] );
  res = refalrts::splice_evar( res, context[0], context[13] );
  res = refalrts::splice_evar( res, context[20], context[23] );
  refalrts::use( res );
  refalrts::wrap_closure( context[24] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindImportsm_Aux_A3("FindImports-Aux=3", COOKIE1_, COOKIE2_, func_gen_FindImportsm_Aux_A3);


static refalrts::FnResult func_gen_FindImportsm_Aux_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & FindImports-Aux=2/4 (/7 e.CommentPrefix#2/5 )/8 (/11 e.FileName#1/9 )/12 s.Dialect#1/13 t.OriginConfig#1/14 e.FileContents#3/2 >/1
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
  // closed e.CommentPrefix#2 as range 5
  // closed e.FileName#1 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[15] = refalrts::tvar_left( context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  // closed e.FileContents#3 as range 2
  //DEBUG: e.CommentPrefix#2: 5
  //DEBUG: e.FileName#1: 9
  //DEBUG: s.Dialect#1: 13
  //DEBUG: t.OriginConfig#1: 14
  //DEBUG: e.FileContents#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindImports-Aux=3/4 AsIs: (/7 AsIs: e.CommentPrefix#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.FileName#1/9 AsIs: )/12 AsIs: s.Dialect#1/13 AsIs: t.OriginConfig#1/14 } (/16 Tile{ AsIs: e.FileContents#3/2 } )/17 </18 & PreludePseudoIncludeLine/19 t.OriginConfig#1/14/20 s.Dialect#1/13/22 >/23 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::alloc_close_bracket(vm, context[17]);
  refalrts::alloc_open_call(vm, context[18]);
  refalrts::alloc_name(vm, context[19], functions[efunc_PreludePseudoIncludeLine]);
  refalrts::copy_evar(vm, context[20], context[21], context[14], context[15]);
  refalrts::copy_stvar(vm, context[22], context[13]);
  refalrts::alloc_close_call(vm, context[23]);
  refalrts::update_name(context[4], functions[efunc_gen_FindImportsm_Aux_A3]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[18] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[17], context[23] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindImportsm_Aux_A2("FindImports-Aux=2", COOKIE1_, COOKIE2_, func_gen_FindImportsm_Aux_A2);


static refalrts::FnResult func_gen_FindImportsm_Aux_A2B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & FindImports-Aux=2:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & FindImports-Aux=2:1/4 (/7 e.new#1/5 )/8 s.new#2/9 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & FindImports-Aux=2:1/4 (/7 e.FileName#1/10 )/8 # True/9 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_True], context[9] ) )
      continue;
    // closed e.FileName#1 as range 10
    //DEBUG: e.FileName#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 # True/9 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & LoadFile/4 } Tile{ AsIs: e.FileName#1/10 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_LoadFile]);
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

  // </0 & FindImports-Aux=2:1/4 (/7 e.FileName#1/5 )/8 # False/9 >/1
  if( ! refalrts::ident_term( identifiers[ident_False], context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#1 as range 5
  //DEBUG: e.FileName#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & FindImports-Aux=2:1/4 (/7 e.FileName#1/5 )/8 # False/9 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindImportsm_Aux_A2B1("FindImports-Aux=2:1", COOKIE1_, COOKIE2_, func_gen_FindImportsm_Aux_A2B1);


static refalrts::FnResult func_gen_FindImportsm_Aux_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & FindImports-Aux=1/4 (/7 e.FileName#1/5 )/8 s.Dialect#1/9 t.OriginConfig#1/10 e.CommentPrefix#2/2 >/1
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
  // closed e.FileName#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.CommentPrefix#2 as range 2
  //DEBUG: e.FileName#1: 5
  //DEBUG: s.Dialect#1: 9
  //DEBUG: t.OriginConfig#1: 10
  //DEBUG: e.CommentPrefix#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 } & FindImports-Aux=2/12 (/13 Tile{ AsIs: e.CommentPrefix#2/2 } Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.FileName#1/5 AsIs: )/8 AsIs: s.Dialect#1/9 AsIs: t.OriginConfig#1/10 } </14 & FindImports-Aux=2:1/15 (/16 e.FileName#1/5/17 )/19 </20 & ExistFile/21 e.FileName#1/5/22 >/24 >/25 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[12], functions[efunc_gen_FindImportsm_Aux_A2]);
  refalrts::alloc_open_bracket(vm, context[13]);
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_FindImportsm_Aux_A2B1]);
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::copy_evar(vm, context[17], context[18], context[5], context[6]);
  refalrts::alloc_close_bracket(vm, context[19]);
  refalrts::alloc_open_call(vm, context[20]);
  refalrts::alloc_name(vm, context[21], functions[efunc_ExistFile]);
  refalrts::copy_evar(vm, context[22], context[23], context[5], context[6]);
  refalrts::alloc_close_call(vm, context[24]);
  refalrts::alloc_close_call(vm, context[25]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[24] );
  refalrts::push_stack( vm, context[20] );
  refalrts::link_brackets( context[16], context[19] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[13], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[14], context[25] );
  res = refalrts::splice_evar( res, context[4], context[11] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindImportsm_Aux_A1("FindImports-Aux=1", COOKIE1_, COOKIE2_, func_gen_FindImportsm_Aux_A1);


static refalrts::FnResult func_FindImportsm_Aux(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & FindImports-Aux/4 t.OriginConfig#1/5 s.Dialect#1/7 e.FileName#1/2 >/1
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
  // closed e.FileName#1 as range 2
  //DEBUG: t.OriginConfig#1: 5
  //DEBUG: s.Dialect#1: 7
  //DEBUG: e.FileName#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindImports-Aux=1/4 } (/8 Tile{ AsIs: e.FileName#1/2 } )/9 Tile{ AsIs: s.Dialect#1/7 } Tile{ AsIs: t.OriginConfig#1/5 } </10 & CommentForDialect/11 s.Dialect#1/7/12 >/13 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[8]);
  refalrts::alloc_close_bracket(vm, context[9]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_CommentForDialect]);
  refalrts::copy_stvar(vm, context[12], context[7]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_gen_FindImportsm_Aux_A1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[10] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[10], context[13] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FindImportsm_Aux("FindImports-Aux", COOKIE1_, COOKIE2_, func_FindImportsm_Aux);


static refalrts::FnResult func_gen_FindFileEx_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & FindFileEx:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & FindFileEx:1/4 t.new#1/5 t.new#2/7 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & FindFileEx:1/4 t.SrcPos#1/5 (/7 # NotFound/11 e.Unit#3/9 )/8 >/1
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[7] ) )
      continue;
    context[11] = refalrts::ident_left( identifiers[ident_NotFound], context[9], context[10] );
    if( ! context[11] )
      continue;
    // closed e.Unit#3 as range 9
    //DEBUG: t.SrcPos#1: 5
    //DEBUG: e.Unit#3: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Error/4 AsIs: t.SrcPos#1/5 HalfReuse: 'U'/7 HalfReuse: 'n'/11 }"it "/12 Tile{ AsIs: e.Unit#3/9 }" not foun"/14 Tile{ HalfReuse: 'd'/8 HalfReuse: )/1 ]] }
    refalrts::alloc_chars(vm, context[12], context[13], "it ", 3);
    refalrts::alloc_chars(vm, context[14], context[15], " not foun", 9);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_Error]);
    refalrts::reinit_char(context[7], 'U');
    refalrts::reinit_char(context[11], 'n');
    refalrts::reinit_char(context[8], 'd');
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FindFileEx:1/4 t.SrcPos#1/5 t.FoundUnit#3/7 >/1
  //DEBUG: t.SrcPos#1: 5
  //DEBUG: t.FoundUnit#3: 7

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & FindFileEx:1/4 t.SrcPos#1/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.FoundUnit#3/7 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindFileEx_B1("FindFileEx:1", COOKIE1_, COOKIE2_, func_gen_FindFileEx_B1);


static refalrts::FnResult func_gen_FindFileEx_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & FindFileEx=1/4 t.SrcPos#1/5 t.Config#1/7 (/11 e.UnitName#1/9 )/12 s.TargetMode#2/13 >/1
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
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.UnitName#1 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.SrcPos#1: 5
  //DEBUG: t.Config#1: 7
  //DEBUG: e.UnitName#1: 9
  //DEBUG: s.TargetMode#2: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindFileEx:1/4 AsIs: t.SrcPos#1/5 } </14 & FindFiles/15 Tile{ AsIs: s.TargetMode#2/13 } (/16 </17 & GetFolders/18 Tile{ AsIs: t.Config#1/7 } >/19 )/20 Tile{ AsIs: (/11 AsIs: e.UnitName#1/9 AsIs: )/12 } >/21 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_FindFiles]);
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::alloc_open_call(vm, context[17]);
  refalrts::alloc_name(vm, context[18], functions[efunc_GetFolders]);
  refalrts::alloc_close_call(vm, context[19]);
  refalrts::alloc_close_bracket(vm, context[20]);
  refalrts::alloc_close_call(vm, context[21]);
  refalrts::update_name(context[4], functions[efunc_gen_FindFileEx_B1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[14] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[16], context[20] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[17] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[16], context[18] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindFileEx_A1("FindFileEx=1", COOKIE1_, COOKIE2_, func_gen_FindFileEx_A1);


static refalrts::FnResult func_FindFileEx(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & FindFileEx/4 t.Config#1/5 t.SrcPos#1/7 e.UnitName#1/2 >/1
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
  // closed e.UnitName#1 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: t.SrcPos#1: 7
  //DEBUG: e.UnitName#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindFileEx=1/4 } Tile{ AsIs: t.SrcPos#1/7 } Tile{ AsIs: t.Config#1/5 } (/9 Tile{ AsIs: e.UnitName#1/2 } )/10 </11 & Config-GetTargetMode/12 t.Config#1/5/13 >/15 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_close_bracket(vm, context[10]);
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_Configm_GetTargetMode]);
  refalrts::copy_evar(vm, context[13], context[14], context[5], context[6]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::update_name(context[4], functions[efunc_gen_FindFileEx_A1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[10], context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FindFileEx("FindFileEx", COOKIE1_, COOKIE2_, func_FindFileEx);


static refalrts::FnResult func_gen_GetFolders_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & GetFolders\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & GetFolders\1/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & GetFolders\1/4 # REF5RSL/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_REF5RSL], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & GetFolders\1/4 # REF5RSL/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # REF5RSL/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_REF5RSL]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GetFolders\1/4 (/5 s.FolderTag#2/9 e.Folder#2/7 )/6 >/1
  context[7] = 0;
  context[8] = 0;
  if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Folder#2 as range 7
  //DEBUG: s.FolderTag#2: 9
  //DEBUG: e.Folder#2: 7

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} & GetFolders\1/4 (/5 s.FolderTag#2/9 {REMOVED TILE} )/6 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Folder#2/7 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GetFolders_L1("GetFolders\\1", COOKIE1_, COOKIE2_, func_gen_GetFolders_L1);


static refalrts::FnResult func_GetFolders(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & GetFolders/4 t.Config#1/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Config#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 & Map/8 & GetFolders\1/9 Tile{ AsIs: </0 Reuse: & Config-GetFolders/4 AsIs: t.Config#1/5 AsIs: >/1 } >/10 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_Map]);
  refalrts::alloc_name(vm, context[9], functions[efunc_gen_GetFolders_L1]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::update_name(context[4], functions[efunc_Configm_GetFolders]);
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[7], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GetFolders("GetFolders", COOKIE1_, COOKIE2_, func_GetFolders);


static refalrts::FnResult func_gen_UpdatePrefix_B1S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & UpdatePrefix:1$1=1/4 # Success/5 t.Config#3/6 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = refalrts::ident_left( identifiers[ident_Success], context[2], context[3] );
  if( ! context[5] )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::tvar_left( context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Config#3: 6

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & UpdatePrefix:1$1=1/4 # Success/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Config#3/6 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_UpdatePrefix_B1S1A1("UpdatePrefix:1$1=1", COOKIE1_, COOKIE2_, func_gen_UpdatePrefix_B1S1A1);


static refalrts::FnResult func_gen_UpdatePrefix_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & UpdatePrefix:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & UpdatePrefix:1/4 t.new#1/5 (/9 e.new#2/7 )/10 t.new#3/11 e.new#4/2 >/1
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
    // </0 & UpdatePrefix:1/4 t.Config#1/5 (/9 e.Prefix#1/13 )/10 t.SrcPos#1/11 # NotSet/17 >/1
    context[13] = context[7];
    context[14] = context[8];
    context[15] = context[2];
    context[16] = context[3];
    context[17] = refalrts::ident_left( identifiers[ident_NotSet], context[15], context[16] );
    if( ! context[17] )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    // closed e.Prefix#1 as range 13
    //DEBUG: t.Config#1: 5
    //DEBUG: t.SrcPos#1: 11
    //DEBUG: e.Prefix#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SrcPos#1/11 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & UpdatePrefix:1$1=1/4 } Tile{ HalfReuse: </9 } Tile{ HalfReuse: & Config-SetPrefix/10 } Tile{ AsIs: t.Config#1/5 } Tile{ AsIs: e.Prefix#1/13 } Tile{ HalfReuse: >/17 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_UpdatePrefix_B1S1A1]);
    refalrts::reinit_open_call(context[9]);
    refalrts::reinit_name(context[10], functions[efunc_Configm_SetPrefix]);
    refalrts::reinit_close_call(context[17]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[17];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & UpdatePrefix:1/4 t.Config#1/5 (/9 e.Prefix#1/13 )/10 t.SrcPos#1/11 e.Prefix#1/17 >/1
    context[13] = context[7];
    context[14] = context[8];
    context[15] = context[2];
    context[16] = context[3];
    // closed e.Prefix#1 as range 13
    if( ! refalrts::repeated_evar_left( vm, context[17], context[18], context[13], context[14], context[15], context[16] ) )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    //DEBUG: t.Config#1: 5
    //DEBUG: t.SrcPos#1: 11
    //DEBUG: e.Prefix#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & UpdatePrefix:1/4 {REMOVED TILE} (/9 e.Prefix#1/13 )/10 t.SrcPos#1/11 e.Prefix#1/17 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Config#1/5 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & UpdatePrefix:1/4 t.Config#1/5 (/9 e.Prefix#1/7 )/10 t.SrcPos#1/11 e.OtherPrefix#2/2 >/1
  // closed e.Prefix#1 as range 7
  // closed e.OtherPrefix#2 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: t.SrcPos#1: 11
  //DEBUG: e.Prefix#1: 7
  //DEBUG: e.OtherPrefix#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Prefix#1/7 {REMOVED TILE} e.OtherPrefix#2/2 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Config#1/5 AsIs: (/9 } Tile{ HalfReuse: # Error/10 AsIs: t.SrcPos#1/11 } 'p'/13 Tile{ HalfReuse: 'r'/0 HalfReuse: 'e'/4 }"fix already defined"/14 Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_char(vm, context[13], 'p');
  refalrts::alloc_chars(vm, context[14], context[15], "fix already defined", 19);
  refalrts::reinit_ident(context[10], identifiers[ident_Error]);
  refalrts::reinit_char(context[0], 'r');
  refalrts::reinit_char(context[4], 'e');
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[9], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[10], context[12] );
  res = refalrts::splice_evar( res, context[5], context[9] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_UpdatePrefix_B1("UpdatePrefix:1", COOKIE1_, COOKIE2_, func_gen_UpdatePrefix_B1);


static refalrts::FnResult func_UpdatePrefix(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & UpdatePrefix/4 t.Config#1/5 t.SrcPos#1/7 e.Prefix#1/2 >/1
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
  // closed e.Prefix#1 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: t.SrcPos#1: 7
  //DEBUG: e.Prefix#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UpdatePrefix:1/4 AsIs: t.Config#1/5 } (/9 Tile{ AsIs: e.Prefix#1/2 } )/10 Tile{ AsIs: t.SrcPos#1/7 } </11 & Config-GetPrefix/12 t.Config#1/5/13 >/15 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_close_bracket(vm, context[10]);
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_Configm_GetPrefix]);
  refalrts::copy_evar(vm, context[13], context[14], context[5], context[6]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::update_name(context[4], functions[efunc_gen_UpdatePrefix_B1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[11], context[15] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_UpdatePrefix("UpdatePrefix", COOKIE1_, COOKIE2_, func_UpdatePrefix);


static refalrts::FnResult func_gen_FindIncludeEx_S2B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & FindIncludeEx$2:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & FindIncludeEx$2:1/4 t.new#1/5 (/9 e.new#2/7 )/10 s.new#3/11 e.new#4/2 >/1
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
  // closed e.new#4 as range 2
  do {
    // </0 & FindIncludeEx$2:1/4 t.SrcPos#1/5 (/9 e.FileName#1/12 )/10 # Success/11 s.Dialect#2/16 e.FullPath#2/14 >/1
    context[12] = context[7];
    context[13] = context[8];
    context[14] = context[2];
    context[15] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Success], context[11] ) )
      continue;
    // closed e.FileName#1 as range 12
    if( ! refalrts::svar_left( context[16], context[14], context[15] ) )
      continue;
    // closed e.FullPath#2 as range 14
    //DEBUG: t.SrcPos#1: 5
    //DEBUG: e.FileName#1: 12
    //DEBUG: s.Dialect#2: 16
    //DEBUG: e.FullPath#2: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & FindIncludeEx$2:1/4 t.SrcPos#1/5 (/9 e.FileName#1/12 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/10 Reuse: # Include/11 AsIs: s.Dialect#2/16 AsIs: e.FullPath#2/14 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket(context[10]);
    refalrts::update_ident(context[11], identifiers[ident_Include]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[10], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FindIncludeEx$2:1/4 t.SrcPos#1/5 (/9 e.FileName#1/7 )/10 # Fails/11 >/1
  if( ! refalrts::ident_term( identifiers[ident_Fails], context[11] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#1 as range 7
  //DEBUG: t.SrcPos#1: 5
  //DEBUG: e.FileName#1: 7

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Error/4 AsIs: t.SrcPos#1/5 HalfReuse: 'I'/9 }"nclude "/12 Tile{ AsIs: e.FileName#1/7 }" not fou"/14 Tile{ HalfReuse: 'n'/10 HalfReuse: 'd'/11 HalfReuse: )/1 ]] }
  refalrts::alloc_chars(vm, context[12], context[13], "nclude ", 7);
  refalrts::alloc_chars(vm, context[14], context[15], " not fou", 8);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_Error]);
  refalrts::reinit_char(context[9], 'I');
  refalrts::reinit_char(context[10], 'n');
  refalrts::reinit_char(context[11], 'd');
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[10];
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindIncludeEx_S2B1("FindIncludeEx$2:1", COOKIE1_, COOKIE2_, func_gen_FindIncludeEx_S2B1);


static refalrts::FnResult func_FindIncludeEx(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & FindIncludeEx/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & FindIncludeEx/4 t.new#1/5 t.new#2/7 s.new#3/9 e.new#4/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 2
  do {
    // </0 & FindIncludeEx/4 t.Config#1/5 t.SrcPos#1/7 # Fails/9 e.ErrorMessage#1/10 >/1
    context[10] = context[2];
    context[11] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Fails], context[9] ) )
      continue;
    // closed e.ErrorMessage#1 as range 10
    //DEBUG: t.Config#1: 5
    //DEBUG: t.SrcPos#1: 7
    //DEBUG: e.ErrorMessage#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} t.Config#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Error/4 } Tile{ AsIs: t.SrcPos#1/7 } </12 Tile{ HalfReuse: & FormatEscapeError/9 AsIs: e.ErrorMessage#1/10 AsIs: >/1 } )/13 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_close_bracket(vm, context[13]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_Error]);
    refalrts::reinit_name(context[9], functions[efunc_FormatEscapeError]);
    refalrts::link_brackets( context[0], context[13] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[9], context[1] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FindIncludeEx/4 t.Config#1/5 t.SrcPos#1/7 # Success/9 e.FileName#1/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_Success], context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#1 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: t.SrcPos#1: 7
  //DEBUG: e.FileName#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindIncludeEx$2:1/4 } Tile{ AsIs: t.SrcPos#1/7 HalfReuse: (/9 AsIs: e.FileName#1/2 HalfReuse: )/1 } </10 & FindInclude/11 (/12 </13 & GetFolders/14 Tile{ AsIs: t.Config#1/5 } >/15 )/16 e.FileName#1/2/17 >/19 >/20 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_FindInclude]);
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_GetFolders]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::alloc_close_bracket(vm, context[16]);
  refalrts::copy_evar(vm, context[17], context[18], context[2], context[3]);
  refalrts::alloc_close_call(vm, context[19]);
  refalrts::alloc_close_call(vm, context[20]);
  refalrts::update_name(context[4], functions[efunc_gen_FindIncludeEx_S2B1]);
  refalrts::reinit_open_bracket(context[9]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[10] );
  refalrts::link_brackets( context[12], context[16] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[9], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[15], context[20] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[10], context[14] );
  res = refalrts::splice_evar( res, context[7], context[1] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FindIncludeEx("FindIncludeEx", COOKIE1_, COOKIE2_, func_FindIncludeEx);


static refalrts::FnResult func_UnEscapeString(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & UnEscapeString/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & UnEscapeString/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & UnEscapeString/4 # SR/5 e.EscapedName#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_SR], context[5] ) )
      continue;
    // closed e.EscapedName#1 as range 6
    //DEBUG: e.EscapedName#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & UnEscapeString-SR/5 AsIs: e.EscapedName#1/6 AsIs: >/1 ]] }
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_UnEscapeStringm_SR]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & UnEscapeString/4 # R5/5 e.EscapedName#1/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_R5], context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.EscapedName#1 as range 2
  //DEBUG: e.EscapedName#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & UnEscapeString-R5/5 AsIs: e.EscapedName#1/2 AsIs: >/1 ]] }
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[5], functions[efunc_UnEscapeStringm_R5]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[4];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_UnEscapeString("UnEscapeString", COOKIE1_, COOKIE2_, func_UnEscapeString);


static refalrts::FnResult func_FormatEscapeError(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & FormatEscapeError/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & FormatEscapeError/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & FormatEscapeError/4 # BadEscapeCode/5 e.Text#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_BadEscapeCode], context[5] ) )
      continue;
    // closed e.Text#1 as range 6
    //DEBUG: e.Text#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'B'/0 HalfReuse: 'a'/4 HalfReuse: 'd'/5 }" e"/8 Tile{ HalfReuse: 's'/1 }"cape code "/10 Tile{ AsIs: e.Text#1/6 } Tile{ ]] }
    refalrts::alloc_chars(vm, context[8], context[9], " e", 2);
    refalrts::alloc_chars(vm, context[10], context[11], "cape code ", 10);
    refalrts::reinit_char(context[0], 'B');
    refalrts::reinit_char(context[4], 'a');
    refalrts::reinit_char(context[5], 'd');
    refalrts::reinit_char(context[1], 's');
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
    // </0 & FormatEscapeError/4 # BadEscapeSymbol/5 e.BadSymbol#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_BadEscapeSymbol], context[5] ) )
      continue;
    // closed e.BadSymbol#1 as range 6
    //DEBUG: e.BadSymbol#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'B'/0 HalfReuse: 'a'/4 HalfReuse: 'd'/5 }" e"/8 Tile{ HalfReuse: 's'/1 }"caped symbol "/10 Tile{ AsIs: e.BadSymbol#1/6 } Tile{ ]] }
    refalrts::alloc_chars(vm, context[8], context[9], " e", 2);
    refalrts::alloc_chars(vm, context[10], context[11], "caped symbol ", 13);
    refalrts::reinit_char(context[0], 'B');
    refalrts::reinit_char(context[4], 'a');
    refalrts::reinit_char(context[5], 'd');
    refalrts::reinit_char(context[1], 's');
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

  // </0 & FormatEscapeError/4 # EOLAfterSlash/5 >/1
  if( ! refalrts::ident_term( identifiers[ident_EOLAfterSlash], context[5] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: 'E'/0 HalfReuse: 'n'/4 HalfReuse: 'd'/5 HalfReuse: '-'/1 }"of-line after \\"/6 Tile{ ]] }
  refalrts::alloc_chars(vm, context[6], context[7], "of-line after \\", 15);
  refalrts::reinit_char(context[0], 'E');
  refalrts::reinit_char(context[4], 'n');
  refalrts::reinit_char(context[5], 'd');
  refalrts::reinit_char(context[1], '-');
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FormatEscapeError("FormatEscapeError", COOKIE1_, COOKIE2_, func_FormatEscapeError);


static refalrts::FnResult func_UnEscapeStringm_R5(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & UnEscapeString-R5/4 e.String#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.String#1 as range 2
  //DEBUG: e.String#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & DoUnEscapeString-R5/6 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: e.String#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_DoUnEscapeStringm_R5]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::link_brackets( context[0], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_UnEscapeStringm_R5("UnEscapeString-R5", COOKIE1_, COOKIE2_, func_UnEscapeStringm_R5);


static refalrts::FnResult func_DoUnEscapeStringm_R5(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 66 elems
  refalrts::Iter context[66];
  refalrts::zeros( context, 66 );
  // </0 & DoUnEscapeString-R5/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoUnEscapeString-R5/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & DoUnEscapeString-R5/4 (/7 e.new#5/9 )/8 s.new#3/13 e.new#4/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.new#5 as range 9
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    // closed e.new#4 as range 11
    do {
      // </0 & DoUnEscapeString-R5/4 (/7 e.new#7/14 )/8 '\\'/13 e.new#6/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '\\', context[13] ) )
        continue;
      // closed e.new#7 as range 14
      // closed e.new#6 as range 16
      do {
        // </0 & DoUnEscapeString-R5/4 (/7 e.new#10/18 )/8 '\\'/13 s.new#8/22 e.new#9/20 >/1
        context[18] = context[14];
        context[19] = context[15];
        context[20] = context[16];
        context[21] = context[17];
        // closed e.new#10 as range 18
        if( ! refalrts::svar_left( context[22], context[20], context[21] ) )
          continue;
        // closed e.new#9 as range 20
        do {
          // </0 & DoUnEscapeString-R5/4 (/7 e.Scanned#1/23 )/8 '\\'/13 s.Escaped#1/22 e.Tail#1/25 >/1
          context[23] = context[18];
          context[24] = context[19];
          context[25] = context[20];
          context[26] = context[21];
          // closed e.Scanned#1 as range 23
          // closed e.Tail#1 as range 25
          //DEBUG: s.Escaped#1: 22
          //DEBUG: e.Scanned#1: 23
          //DEBUG: e.Tail#1: 25
          //22: s.Escaped#1
          //23: e.Scanned#1
          //25: e.Tail#1

          refalrts::reset_allocator(vm);
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          refalrts::alloc_open_call(vm, context[27]);
          refalrts::alloc_name(vm, context[29], functions[efunc_gen_DoUnEscapeStringm_R5_S1C1]);
          refalrts::alloc_open_bracket(vm, context[30]);
          refalrts::alloc_chars(vm, context[31], context[32], "\'\'", 2);
          refalrts::alloc_close_bracket(vm, context[33]);
          refalrts::alloc_open_bracket(vm, context[34]);
          refalrts::alloc_chars(vm, context[35], context[36], "\"\"", 2);
          refalrts::alloc_close_bracket(vm, context[37]);
          refalrts::alloc_open_bracket(vm, context[38]);
          refalrts::alloc_chars(vm, context[39], context[40], "n\n", 2);
          refalrts::alloc_close_bracket(vm, context[41]);
          refalrts::alloc_open_bracket(vm, context[42]);
          refalrts::alloc_chars(vm, context[43], context[44], "r\r", 2);
          refalrts::alloc_close_bracket(vm, context[45]);
          refalrts::alloc_open_bracket(vm, context[46]);
          refalrts::alloc_chars(vm, context[47], context[48], "t\t", 2);
          refalrts::alloc_close_bracket(vm, context[49]);
          refalrts::alloc_open_bracket(vm, context[50]);
          refalrts::alloc_chars(vm, context[51], context[52], "((", 2);
          refalrts::alloc_close_bracket(vm, context[53]);
          refalrts::alloc_open_bracket(vm, context[54]);
          refalrts::alloc_chars(vm, context[55], context[56], "))", 2);
          refalrts::alloc_close_bracket(vm, context[57]);
          refalrts::alloc_open_bracket(vm, context[58]);
          refalrts::alloc_chars(vm, context[59], context[60], "<<", 2);
          refalrts::alloc_close_bracket(vm, context[61]);
          refalrts::alloc_open_bracket(vm, context[62]);
          refalrts::alloc_chars(vm, context[63], context[64], ">>", 2);
          refalrts::alloc_close_bracket(vm, context[65]);
          refalrts::alloc_close_call(vm, context[28]);
          refalrts::push_stack( vm, context[28] );
          refalrts::push_stack( vm, context[27] );
          res = refalrts::splice_elem( res, context[28] );
          refalrts::link_brackets( context[62], context[65] );
          res = refalrts::splice_elem( res, context[65] );
          res = refalrts::splice_evar( res, context[63], context[64] );
          res = refalrts::splice_elem( res, context[62] );
          refalrts::link_brackets( context[58], context[61] );
          res = refalrts::splice_elem( res, context[61] );
          res = refalrts::splice_evar( res, context[59], context[60] );
          res = refalrts::splice_elem( res, context[58] );
          refalrts::link_brackets( context[54], context[57] );
          res = refalrts::splice_elem( res, context[57] );
          res = refalrts::splice_evar( res, context[55], context[56] );
          res = refalrts::splice_elem( res, context[54] );
          refalrts::link_brackets( context[50], context[53] );
          res = refalrts::splice_elem( res, context[53] );
          res = refalrts::splice_evar( res, context[51], context[52] );
          res = refalrts::splice_elem( res, context[50] );
          refalrts::link_brackets( context[46], context[49] );
          res = refalrts::splice_elem( res, context[49] );
          res = refalrts::splice_evar( res, context[47], context[48] );
          res = refalrts::splice_elem( res, context[46] );
          refalrts::link_brackets( context[42], context[45] );
          res = refalrts::splice_elem( res, context[45] );
          res = refalrts::splice_evar( res, context[43], context[44] );
          res = refalrts::splice_elem( res, context[42] );
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
          res = refalrts::splice_elem( res, context[29] );
          res = refalrts::splice_elem( res, context[27] );
          refalrts::use( res );
          refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
          if (rec_res != refalrts::cSuccess)
            return rec_res;
          refalrts::this_is_generated_function(vm);
          do {
            // </27 & DoUnEscapeString-R5$1?1/31 e.Begin#2/32 (/38 s.Escaped#1/40 s.Char#2/41 )/39 e.End#2/34 >/28
            context[29] = 0;
            context[30] = 0;
            context[31] = refalrts::call_left( context[29], context[30], context[27], context[28] );
            context[32] = 0;
            context[33] = 0;
            refalrts::start_e_loop(vm);
            do {
              context[34] = context[29];
              context[35] = context[30];
              context[36] = 0;
              context[37] = 0;
              context[38] = refalrts::brackets_left( context[36], context[37], context[34], context[35] );
              if( ! context[38] )
                continue;
              refalrts::bracket_pointers(context[38], context[39]);
              if( ! refalrts::repeated_stvar_left( vm, context[40], context[22], context[36], context[37] ) )
                continue;
              // closed e.End#2 as range 34
              if( ! refalrts::svar_left( context[41], context[36], context[37] ) )
                continue;
              if( ! refalrts::empty_seq( context[36], context[37] ) )
                continue;
              //DEBUG: s.Escaped#1: 22
              //DEBUG: e.Scanned#1: 23
              //DEBUG: e.Tail#1: 25
              //DEBUG: e.Begin#2: 32
              //DEBUG: e.End#2: 34
              //DEBUG: s.Char#2: 41

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} s.Escaped#1/22 {REMOVED TILE} </27 & DoUnEscapeString-R5$1?1/31 e.Begin#2/32 (/38 s.Escaped#1/40 s.Char#2/41 )/39 e.End#2/34 >/28 {REMOVED TILE}
              //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoUnEscapeString-R5/4 AsIs: (/7 AsIs: e.Scanned#1/23 HalfReuse: s.Char2 #41/8 HalfReuse: )/13 } Tile{ AsIs: e.Tail#1/25 } Tile{ AsIs: >/1 ]] }
              refalrts::reinit_svar( context[8], context[41] );
              refalrts::reinit_close_bracket(context[13]);
              refalrts::push_stack( vm, context[1] );
              refalrts::push_stack( vm, context[0] );
              refalrts::link_brackets( context[7], context[13] );
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = context[1];
              res = refalrts::splice_evar( res, context[25], context[26] );
              refalrts::splice_to_freelist_open( vm, context[13], res );
              return refalrts::cSuccess;
            } while ( refalrts::open_evar_advance( context[32], context[33], context[29], context[30] ) );
          } while ( 0 );
          refalrts::stop_sentence(vm);

          refalrts::splice_to_freelist(vm, context[27], context[28]);
          continue;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & DoUnEscapeString-R5/4 (/7 e.new#12/23 )/8 '\\'/13 'x'/22 e.new#11/25 >/1
          context[23] = context[18];
          context[24] = context[19];
          context[25] = context[20];
          context[26] = context[21];
          if( ! refalrts::char_term( 'x', context[22] ) )
            continue;
          // closed e.new#12 as range 23
          // closed e.new#11 as range 25
          do {
            // </0 & DoUnEscapeString-R5/4 (/7 e.Scanned#1/27 )/8 '\\'/13 'x'/22 s.Hex1#1/31 s.Hex2#1/32 e.Tail#1/29 >/1
            context[27] = context[23];
            context[28] = context[24];
            context[29] = context[25];
            context[30] = context[26];
            // closed e.Scanned#1 as range 27
            if( ! refalrts::svar_left( context[31], context[29], context[30] ) )
              continue;
            if( ! refalrts::svar_left( context[32], context[29], context[30] ) )
              continue;
            // closed e.Tail#1 as range 29
            //DEBUG: e.Scanned#1: 27
            //DEBUG: s.Hex1#1: 31
            //DEBUG: s.Hex2#1: 32
            //DEBUG: e.Tail#1: 29
            //27: e.Scanned#1
            //29: e.Tail#1
            //31: s.Hex1#1
            //32: s.Hex2#1
            //38: s.Hex1#1

            refalrts::reset_allocator(vm);
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            refalrts::alloc_open_call(vm, context[33]);
            refalrts::alloc_name(vm, context[35], functions[efunc_gen_DoUnEscapeStringm_R5_S2C1]);
            refalrts::alloc_open_call(vm, context[36]);
            refalrts::alloc_name(vm, context[37], functions[efunc_HexDigit]);
            refalrts::copy_stvar(vm, context[38], context[31]);
            refalrts::alloc_close_call(vm, context[39]);
            refalrts::alloc_close_call(vm, context[34]);
            refalrts::push_stack( vm, context[34] );
            refalrts::push_stack( vm, context[33] );
            res = refalrts::splice_elem( res, context[34] );
            refalrts::push_stack( vm, context[39] );
            refalrts::push_stack( vm, context[36] );
            res = refalrts::splice_elem( res, context[39] );
            res = refalrts::splice_stvar( res, context[38] );
            res = refalrts::splice_elem( res, context[37] );
            res = refalrts::splice_elem( res, context[36] );
            res = refalrts::splice_elem( res, context[35] );
            res = refalrts::splice_elem( res, context[33] );
            refalrts::use( res );
            refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
            if (rec_res != refalrts::cSuccess)
              return rec_res;
            refalrts::this_is_generated_function(vm);
            do {
              // </33 & DoUnEscapeString-R5$2?1/37 s.Num1#2/38 >/34
              context[35] = 0;
              context[36] = 0;
              context[37] = refalrts::call_left( context[35], context[36], context[33], context[34] );
              if( ! refalrts::svar_left( context[38], context[35], context[36] ) )
                continue;
              if( ! refalrts::empty_seq( context[35], context[36] ) )
                continue;
              //DEBUG: e.Scanned#1: 27
              //DEBUG: s.Hex1#1: 31
              //DEBUG: s.Hex2#1: 32
              //DEBUG: e.Tail#1: 29
              //DEBUG: s.Num1#2: 38
              //27: e.Scanned#1
              //29: e.Tail#1
              //31: s.Hex1#1
              //32: s.Hex2#1
              //38: s.Num1#2
              //44: s.Hex2#1

              refalrts::reset_allocator(vm);
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = context[1];
              refalrts::alloc_open_call(vm, context[39]);
              refalrts::alloc_name(vm, context[41], functions[efunc_gen_DoUnEscapeStringm_R5_S2C2]);
              refalrts::alloc_open_call(vm, context[42]);
              refalrts::alloc_name(vm, context[43], functions[efunc_HexDigit]);
              refalrts::copy_stvar(vm, context[44], context[32]);
              refalrts::alloc_close_call(vm, context[45]);
              refalrts::alloc_close_call(vm, context[40]);
              refalrts::push_stack( vm, context[40] );
              refalrts::push_stack( vm, context[39] );
              res = refalrts::splice_elem( res, context[40] );
              refalrts::push_stack( vm, context[45] );
              refalrts::push_stack( vm, context[42] );
              res = refalrts::splice_elem( res, context[45] );
              res = refalrts::splice_stvar( res, context[44] );
              res = refalrts::splice_elem( res, context[43] );
              res = refalrts::splice_elem( res, context[42] );
              res = refalrts::splice_elem( res, context[41] );
              res = refalrts::splice_elem( res, context[39] );
              refalrts::use( res );
              refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
              if (rec_res != refalrts::cSuccess)
                return rec_res;
              refalrts::this_is_generated_function(vm);
              do {
                // </39 & DoUnEscapeString-R5$2?2/43 s.Num2#3/44 >/40
                context[41] = 0;
                context[42] = 0;
                context[43] = refalrts::call_left( context[41], context[42], context[39], context[40] );
                if( ! refalrts::svar_left( context[44], context[41], context[42] ) )
                  continue;
                if( ! refalrts::empty_seq( context[41], context[42] ) )
                  continue;
                //DEBUG: e.Scanned#1: 27
                //DEBUG: s.Hex1#1: 31
                //DEBUG: s.Hex2#1: 32
                //DEBUG: e.Tail#1: 29
                //DEBUG: s.Num1#2: 38
                //DEBUG: s.Num2#3: 44

                refalrts::reset_allocator(vm);
                //TRASH: {REMOVED TILE} s.Hex1#1/31 s.Hex2#1/32 {REMOVED TILE} {REMOVED TILE} s.Num1#2/38 {REMOVED TILE} {REMOVED TILE}
                //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoUnEscapeString-R5/4 AsIs: (/7 AsIs: e.Scanned#1/27 HalfReuse: </8 HalfReuse: & Chr/13 HalfReuse: </22 } & Add/45 Tile{ AsIs: </33 Reuse: & Mul/37 } Tile{ HalfReuse: s.Num12 #38/34 HalfReuse: 16/39 HalfReuse: >/43 AsIs: s.Num2#3/44 AsIs: >/40 AsIs: >/1 } )/46 Tile{ AsIs: e.Tail#1/29 } >/47 Tile{ ]] }
                refalrts::alloc_name(vm, context[45], functions[efunc_Add]);
                refalrts::alloc_close_bracket(vm, context[46]);
                refalrts::alloc_close_call(vm, context[47]);
                refalrts::reinit_open_call(context[8]);
                refalrts::reinit_name(context[13], functions[efunc_Chr]);
                refalrts::reinit_open_call(context[22]);
                refalrts::update_name(context[37], functions[efunc_Mul]);
                refalrts::reinit_svar( context[34], context[38] );
                refalrts::reinit_number(context[39], 16UL);
                refalrts::reinit_close_call(context[43]);
                refalrts::push_stack( vm, context[47] );
                refalrts::push_stack( vm, context[0] );
                refalrts::link_brackets( context[7], context[46] );
                refalrts::push_stack( vm, context[1] );
                refalrts::push_stack( vm, context[8] );
                refalrts::push_stack( vm, context[40] );
                refalrts::push_stack( vm, context[22] );
                refalrts::push_stack( vm, context[43] );
                refalrts::push_stack( vm, context[33] );
                refalrts::Iter trash_prev = arg_begin->prev;
                refalrts::use(trash_prev);
                refalrts::Iter res = arg_end->next;
                res = refalrts::splice_evar( res, context[47], context[47] );
                res = refalrts::splice_evar( res, context[29], context[30] );
                res = refalrts::splice_evar( res, context[46], context[46] );
                res = refalrts::splice_evar( res, context[34], context[1] );
                res = refalrts::splice_evar( res, context[33], context[37] );
                res = refalrts::splice_evar( res, context[45], context[45] );
                refalrts::splice_to_freelist_open( vm, context[22], res );
                return refalrts::cSuccess;
              } while ( 0 );
              refalrts::stop_sentence(vm);

              refalrts::splice_to_freelist(vm, context[39], context[40]);
              continue;
            } while ( 0 );
            refalrts::stop_sentence(vm);

            refalrts::splice_to_freelist(vm, context[33], context[34]);
            continue;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & DoUnEscapeString-R5/4 (/7 e.Scanned#1/27 )/8 '\\'/13 'x'/22 e.Tail#1/29 >/1
          context[27] = context[23];
          context[28] = context[24];
          context[29] = context[25];
          context[30] = context[26];
          // closed e.Scanned#1 as range 27
          // closed e.Tail#1 as range 29
          //DEBUG: e.Scanned#1: 27
          //DEBUG: e.Tail#1: 29

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} e.Scanned#1/27 {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: # Fail/0 HalfReuse: # BadEscapeCode/4 HalfReuse: '\\'/7 } Tile{ HalfReuse: 'x'/8 HalfReuse: </13 HalfReuse: & Prefix3/22 AsIs: e.Tail#1/29 AsIs: >/1 ]] }
          refalrts::reinit_ident(context[0], identifiers[ident_Fail]);
          refalrts::reinit_ident(context[4], identifiers[ident_BadEscapeCode]);
          refalrts::reinit_char(context[7], '\\');
          refalrts::reinit_char(context[8], 'x');
          refalrts::reinit_open_call(context[13]);
          refalrts::reinit_name(context[22], functions[efunc_Prefix3]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[13] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[8];
          refalrts::splice_to_freelist_open( vm, context[7], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & DoUnEscapeString-R5/4 (/7 e.Scanned#1/23 )/8 '\\'/13 s.Next#1/22 e.Tail#1/25 >/1
        context[23] = context[18];
        context[24] = context[19];
        context[25] = context[20];
        context[26] = context[21];
        // closed e.Scanned#1 as range 23
        // closed e.Tail#1 as range 25
        //DEBUG: s.Next#1: 22
        //DEBUG: e.Scanned#1: 23
        //DEBUG: e.Tail#1: 25

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} & DoUnEscapeString-R5/4 (/7 e.Scanned#1/23 {REMOVED TILE} e.Tail#1/25 >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: # Fail/0 } Tile{ HalfReuse: # BadEscapeSymbol/8 AsIs: '\\'/13 AsIs: s.Next#1/22 } Tile{ ]] }
        refalrts::reinit_ident(context[0], identifiers[ident_Fail]);
        refalrts::reinit_ident(context[8], identifiers[ident_BadEscapeSymbol]);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[8], context[22] );
        refalrts::splice_to_freelist_open( vm, context[0], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoUnEscapeString-R5/4 (/7 e.Scanned#1/18 )/8 '\\'/13 >/1
      context[18] = context[14];
      context[19] = context[15];
      if( ! refalrts::empty_seq( context[16], context[17] ) )
        continue;
      // closed e.Scanned#1 as range 18
      //DEBUG: e.Scanned#1: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & DoUnEscapeString-R5/4 (/7 e.Scanned#1/18 )/8 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Fail/13 HalfReuse: # EOLAfterSlash/1 ]] }
      refalrts::reinit_ident(context[13], identifiers[ident_Fail]);
      refalrts::reinit_ident(context[1], identifiers[ident_EOLAfterSlash]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[13];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoUnEscapeString-R5/4 (/7 e.Scanned#1/14 )/8 s.Char#1/13 e.Tail#1/16 >/1
    context[14] = context[9];
    context[15] = context[10];
    context[16] = context[11];
    context[17] = context[12];
    // closed e.Scanned#1 as range 14
    // closed e.Tail#1 as range 16
    //DEBUG: s.Char#1: 13
    //DEBUG: e.Scanned#1: 14
    //DEBUG: e.Tail#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Char#1/13 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoUnEscapeString-R5/4 AsIs: (/7 AsIs: e.Scanned#1/14 HalfReuse: s.Char1 #13/8 } )/18 Tile{ AsIs: e.Tail#1/16 } Tile{ AsIs: >/1 ]] }
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

  // </0 & DoUnEscapeString-R5/4 (/7 e.Scanned#1/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Scanned#1 as range 5
  //DEBUG: e.Scanned#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} & DoUnEscapeString-R5/4 (/7 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: # Success/0 } Tile{ AsIs: e.Scanned#1/5 } Tile{ ]] }
  refalrts::reinit_ident(context[0], identifiers[ident_Success]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoUnEscapeStringm_R5("DoUnEscapeString-R5", COOKIE1_, COOKIE2_, func_DoUnEscapeStringm_R5);


static refalrts::FnResult func_HexDigit(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & HexDigit/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & HexDigit/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & HexDigit/4 '0'/5 >/1
    if( ! refalrts::char_term( '0', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & HexDigit/4 '0'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 0/1 ]] }
    refalrts::reinit_number(context[1], 0UL);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & HexDigit/4 '1'/5 >/1
    if( ! refalrts::char_term( '1', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & HexDigit/4 '1'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 1/1 ]] }
    refalrts::reinit_number(context[1], 1UL);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & HexDigit/4 '2'/5 >/1
    if( ! refalrts::char_term( '2', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & HexDigit/4 '2'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 2/1 ]] }
    refalrts::reinit_number(context[1], 2UL);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & HexDigit/4 '3'/5 >/1
    if( ! refalrts::char_term( '3', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & HexDigit/4 '3'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 3/1 ]] }
    refalrts::reinit_number(context[1], 3UL);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & HexDigit/4 '4'/5 >/1
    if( ! refalrts::char_term( '4', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & HexDigit/4 '4'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 4/1 ]] }
    refalrts::reinit_number(context[1], 4UL);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & HexDigit/4 '5'/5 >/1
    if( ! refalrts::char_term( '5', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & HexDigit/4 '5'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 5/1 ]] }
    refalrts::reinit_number(context[1], 5UL);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & HexDigit/4 '6'/5 >/1
    if( ! refalrts::char_term( '6', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & HexDigit/4 '6'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 6/1 ]] }
    refalrts::reinit_number(context[1], 6UL);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & HexDigit/4 '7'/5 >/1
    if( ! refalrts::char_term( '7', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & HexDigit/4 '7'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 7/1 ]] }
    refalrts::reinit_number(context[1], 7UL);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & HexDigit/4 '8'/5 >/1
    if( ! refalrts::char_term( '8', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & HexDigit/4 '8'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 8/1 ]] }
    refalrts::reinit_number(context[1], 8UL);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & HexDigit/4 '9'/5 >/1
    if( ! refalrts::char_term( '9', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & HexDigit/4 '9'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 9/1 ]] }
    refalrts::reinit_number(context[1], 9UL);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & HexDigit/4 'A'/5 >/1
    if( ! refalrts::char_term( 'A', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & HexDigit/4 'A'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 10/1 ]] }
    refalrts::reinit_number(context[1], 10UL);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & HexDigit/4 'B'/5 >/1
    if( ! refalrts::char_term( 'B', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & HexDigit/4 'B'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 11/1 ]] }
    refalrts::reinit_number(context[1], 11UL);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & HexDigit/4 'C'/5 >/1
    if( ! refalrts::char_term( 'C', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & HexDigit/4 'C'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 12/1 ]] }
    refalrts::reinit_number(context[1], 12UL);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & HexDigit/4 'D'/5 >/1
    if( ! refalrts::char_term( 'D', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & HexDigit/4 'D'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 13/1 ]] }
    refalrts::reinit_number(context[1], 13UL);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & HexDigit/4 'E'/5 >/1
    if( ! refalrts::char_term( 'E', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & HexDigit/4 'E'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 14/1 ]] }
    refalrts::reinit_number(context[1], 14UL);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & HexDigit/4 'F'/5 >/1
    if( ! refalrts::char_term( 'F', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & HexDigit/4 'F'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 15/1 ]] }
    refalrts::reinit_number(context[1], 15UL);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & HexDigit/4 'a'/5 >/1
    if( ! refalrts::char_term( 'a', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & HexDigit/4 'a'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 10/1 ]] }
    refalrts::reinit_number(context[1], 10UL);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & HexDigit/4 'b'/5 >/1
    if( ! refalrts::char_term( 'b', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & HexDigit/4 'b'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 11/1 ]] }
    refalrts::reinit_number(context[1], 11UL);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & HexDigit/4 'c'/5 >/1
    if( ! refalrts::char_term( 'c', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & HexDigit/4 'c'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 12/1 ]] }
    refalrts::reinit_number(context[1], 12UL);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & HexDigit/4 'd'/5 >/1
    if( ! refalrts::char_term( 'd', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & HexDigit/4 'd'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 13/1 ]] }
    refalrts::reinit_number(context[1], 13UL);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & HexDigit/4 'e'/5 >/1
    if( ! refalrts::char_term( 'e', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & HexDigit/4 'e'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 14/1 ]] }
    refalrts::reinit_number(context[1], 14UL);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & HexDigit/4 'f'/5 >/1
    if( ! refalrts::char_term( 'f', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & HexDigit/4 'f'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 15/1 ]] }
    refalrts::reinit_number(context[1], 15UL);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & HexDigit/4 s.Other#1/5 >/1
  //DEBUG: s.Other#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & HexDigit/4 s.Other#1/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_HexDigit("HexDigit", COOKIE1_, COOKIE2_, func_HexDigit);


static refalrts::FnResult func_Prefix3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & Prefix3/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Prefix3/4 s.1#1/7 s.2#1/8 s.3#1/9 s.4#1/10 e.Tail#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_left( context[7], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    // closed e.Tail#1 as range 5
    //DEBUG: s.1#1: 7
    //DEBUG: s.2#1: 8
    //DEBUG: s.3#1: 9
    //DEBUG: s.4#1: 10
    //DEBUG: e.Tail#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.4#1/10 e.Tail#1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: s.1#1/7 AsIs: s.2#1/8 AsIs: s.3#1/9 } Tile{ HalfReuse: '.'/0 HalfReuse: '.'/4 } Tile{ HalfReuse: '.'/1 ]] }
    refalrts::reinit_char(context[0], '.');
    refalrts::reinit_char(context[4], '.');
    refalrts::reinit_char(context[1], '.');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[9] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Prefix3/4 e.ShortExpr#1/2 >/1
  // closed e.ShortExpr#1 as range 2
  //DEBUG: e.ShortExpr#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Prefix3/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.ShortExpr#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Prefix3("Prefix3", COOKIE1_, COOKIE2_, func_Prefix3);


//End of file
