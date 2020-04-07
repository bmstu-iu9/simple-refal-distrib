// This file automatically generated from 'ParseCmdLine.ref'
// Don't edit! Edit 'ParseCmdLine.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_1222538501_3718213459
#define COOKIE1_ 1222538501U
#define COOKIE2_ 3718213459U

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
  efunc_Configm_Create = 14,
  efunc_Update = 15,
  efunc_Configm_SetCppCompilerExe = 16,
  efunc_Configm_SetCppCompilerLib = 17,
  efunc_Configm_SetPrefix = 18,
  efunc_Configm_AddReference = 19,
  efunc_Configm_AddFolder = 20,
  efunc_Configm_SetSrefCompiler = 21,
  efunc_Configm_AddSrefCompilerFlag = 22,
  efunc_Configm_SetTargetFileName = 23,
  efunc_Configm_SetTargetMode = 24,
  efunc_Configm_SetPrelude = 25,
  efunc_Configm_AddRuntimeFile = 26,
  efunc_Configm_AddIncorporated = 27,
  efunc_Configm_SetSourceFile = 28,
  efunc_PrintHelp = 29,
  efunc_PrintVersion = 30,
  efunc_Configm_SetKeepRasls = 31,
  efunc_Configm_SetTempDir = 32,
  efunc_Configm_SetOverwriteExistRasls = 33,
  efunc_Configm_SetCppCompilerExeSuf = 34,
  efunc_Configm_SetCppCompilerLibSuf = 35,
  efunc_Map = 36,
  efunc_gen_ParseCommandLine_L3S2L1 = 37,
  efunc_GetOpt = 38,
  efunc_Pipe = 39,
  efunc_CheckRequiredOptions = 40,
  efunc_gen_ParseCommandLine_L1 = 41,
  efunc_MapAccum = 42,
  efunc_gen_ParseCommandLine_L2 = 43,
  efunc_gen_ParseCommandLine_L3 = 44,
  efunc_Fetch = 45,
  efunc_gen_Update_B1 = 46,
  efunc_Prout = 47,
};


enum ident {
  ident_k43_ = 0,
  ident_k47_ = 1,
  ident_k37_ = 2,
  ident_k42_ = 3,
  ident_k63_ = 4,
  ident_m_ = 5,
  ident_CppCompilerExe = 6,
  ident_CppCompilerLib = 7,
  ident_Prefix = 8,
  ident_Reference = 9,
  ident_RuntimeFolder = 10,
  ident_Runtime = 11,
  ident_SearchFolder = 12,
  ident_Search = 13,
  ident_SrefCompiler = 14,
  ident_SrefCompilerOption = 15,
  ident_TargetFileName = 16,
  ident_TargetModem_Exe = 17,
  ident_EXE = 18,
  ident_TargetModem_Lib = 19,
  ident_LIB = 20,
  ident_TargetModem_R = 21,
  ident_R = 22,
  ident_TargetModem_C = 23,
  ident_CompileOnly = 24,
  ident_Prelude = 25,
  ident_Incorporated = 26,
  ident_FILE = 27,
  ident_Help = 28,
  ident_Version = 29,
  ident_KeepRasls = 30,
  ident_True = 31,
  ident_DontKeepRasls = 32,
  ident_False = 33,
  ident_TempDir = 34,
  ident_REF5RSLm_Env = 35,
  ident_REF5RSL = 36,
  ident_OverwriteExistRasls = 37,
  ident_DontOverwriteExistRasls = 38,
  ident_CppCompilerExeSuf = 39,
  ident_CppCompilerLibSuf = 40,
  ident_NoRequiredParam = 41,
  ident_UnknownShortOption = 42,
  ident_UnknownLongOption = 43,
  ident_ManySourceFiles = 44,
  ident_No = 45,
  ident_TargetModeAlreadySet = 46,
  ident_Success = 47,
  ident_Fails = 48,
  ident_Required = 49,
  ident_None = 50,
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
    refalrts::alloc_number(vm, context[9], 3718213459UL);
    refalrts::update_name(context[4], functions[efunc_u_u_FindMuPtr]);
    refalrts::reinit_number(context[5], 1222538501UL);
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
  refalrts::reinit_number(context[5], 1222538501UL);
  refalrts::reinit_number(context[7], 3718213459UL);
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


static refalrts::FnResult func_gen_ParseCommandLine_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & ParseCommandLine\1/4 (/7 e.Errors#2/5 )/8 e.Options#2/2 >/1
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
  // closed e.Errors#2 as range 5
  // closed e.Options#2 as range 2
  //DEBUG: e.Errors#2: 5
  //DEBUG: e.Options#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/1 } Tile{ AsIs: </0 Reuse: & Config-Create/4 HalfReuse: >/7 AsIs: e.Errors#2/5 AsIs: )/8 } Tile{ AsIs: e.Options#2/2 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[1]);
  refalrts::update_name(context[4], functions[efunc_Configm_Create]);
  refalrts::reinit_close_call(context[7]);
  refalrts::link_brackets( context[1], context[8] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseCommandLine_L1("ParseCommandLine\\1", COOKIE1_, COOKIE2_, func_gen_ParseCommandLine_L1);


static refalrts::FnResult func_gen_ParseCommandLine_L2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & ParseCommandLine\2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseCommandLine\2/4 (/7 t.new#1/9 e.new#2/5 )/8 t.new#3/11 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[10] = refalrts::tvar_left( context[9], context[5], context[6] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 5
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ParseCommandLine\2/4 (/7 t.new#7/9 e.new#8/13 )/8 (/11 s.new#4/17 s.new#5/18 e.new#6/15 )/12 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = 0;
    context[16] = 0;
    if( ! refalrts::brackets_term( context[15], context[16], context[11] ) )
      continue;
    // closed e.new#8 as range 13
    if( ! refalrts::svar_left( context[17], context[15], context[16] ) )
      continue;
    if( ! refalrts::svar_left( context[18], context[15], context[16] ) )
      continue;
    // closed e.new#6 as range 15
    do {
      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/19 )/8 (/11 # CppCompilerExe/17 s.Num#2/18 e.CppCompilerExe#2/21 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      if( ! refalrts::ident_term( identifiers[ident_CppCompilerExe], context[17] ) )
        continue;
      // closed e.Errors#2 as range 19
      // closed e.CppCompilerExe#2 as range 21
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 18
      //DEBUG: e.Errors#2: 19
      //DEBUG: e.CppCompilerExe#2: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetCppCompilerExe/17 AsIs: s.Num#2/18 AsIs: e.CppCompilerExe#2/21 HalfReuse: >/12 } Tile{ ]] }
      refalrts::update_name(context[4], functions[efunc_Update]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetCppCompilerExe]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/19 )/8 (/11 # CppCompilerLib/17 s.Num#2/18 e.CppCompilerLib#2/21 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      if( ! refalrts::ident_term( identifiers[ident_CppCompilerLib], context[17] ) )
        continue;
      // closed e.Errors#2 as range 19
      // closed e.CppCompilerLib#2 as range 21
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 18
      //DEBUG: e.Errors#2: 19
      //DEBUG: e.CppCompilerLib#2: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetCppCompilerLib/17 AsIs: s.Num#2/18 AsIs: e.CppCompilerLib#2/21 HalfReuse: >/12 } Tile{ ]] }
      refalrts::update_name(context[4], functions[efunc_Update]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetCppCompilerLib]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/19 )/8 (/11 # Prefix/17 s.Num#2/18 e.Prefix#2/21 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      if( ! refalrts::ident_term( identifiers[ident_Prefix], context[17] ) )
        continue;
      // closed e.Errors#2 as range 19
      // closed e.Prefix#2 as range 21
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 18
      //DEBUG: e.Errors#2: 19
      //DEBUG: e.Prefix#2: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetPrefix/17 AsIs: s.Num#2/18 AsIs: e.Prefix#2/21 HalfReuse: >/12 } Tile{ ]] }
      refalrts::update_name(context[4], functions[efunc_Update]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetPrefix]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/19 )/8 (/11 # Reference/17 s.Num#2/18 e.Reference#2/21 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      if( ! refalrts::ident_term( identifiers[ident_Reference], context[17] ) )
        continue;
      // closed e.Errors#2 as range 19
      // closed e.Reference#2 as range 21
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 18
      //DEBUG: e.Errors#2: 19
      //DEBUG: e.Reference#2: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ HalfReuse: )/11 HalfReuse: & Config-AddReference/17 AsIs: s.Num#2/18 AsIs: e.Reference#2/21 HalfReuse: >/12 } Tile{ ]] }
      refalrts::update_name(context[4], functions[efunc_Update]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_AddReference]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/19 )/8 (/11 # RuntimeFolder/17 s.Num#2/18 e.Folder#2/21 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      if( ! refalrts::ident_term( identifiers[ident_RuntimeFolder], context[17] ) )
        continue;
      // closed e.Errors#2 as range 19
      // closed e.Folder#2 as range 21
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 18
      //DEBUG: e.Errors#2: 19
      //DEBUG: e.Folder#2: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ HalfReuse: )/11 HalfReuse: & Config-AddFolder/17 AsIs: s.Num#2/18 } Tile{ HalfReuse: # Runtime/12 } Tile{ AsIs: e.Folder#2/21 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Update]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_AddFolder]);
      refalrts::reinit_ident(context[12], identifiers[ident_Runtime]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[11], context[18] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/19 )/8 (/11 # SearchFolder/17 s.Num#2/18 e.Folder#2/21 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      if( ! refalrts::ident_term( identifiers[ident_SearchFolder], context[17] ) )
        continue;
      // closed e.Errors#2 as range 19
      // closed e.Folder#2 as range 21
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 18
      //DEBUG: e.Errors#2: 19
      //DEBUG: e.Folder#2: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ HalfReuse: )/11 HalfReuse: & Config-AddFolder/17 AsIs: s.Num#2/18 } Tile{ HalfReuse: # Search/12 } Tile{ AsIs: e.Folder#2/21 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Update]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_AddFolder]);
      refalrts::reinit_ident(context[12], identifiers[ident_Search]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[11], context[18] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/19 )/8 (/11 # SrefCompiler/17 s.Num#2/18 e.SrefCompiler#2/21 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      if( ! refalrts::ident_term( identifiers[ident_SrefCompiler], context[17] ) )
        continue;
      // closed e.Errors#2 as range 19
      // closed e.SrefCompiler#2 as range 21
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 18
      //DEBUG: e.Errors#2: 19
      //DEBUG: e.SrefCompiler#2: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetSrefCompiler/17 AsIs: s.Num#2/18 AsIs: e.SrefCompiler#2/21 HalfReuse: >/12 } Tile{ ]] }
      refalrts::update_name(context[4], functions[efunc_Update]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetSrefCompiler]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/19 )/8 (/11 # SrefCompilerOption/17 s.Num#2/18 e.Flag#2/21 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      if( ! refalrts::ident_term( identifiers[ident_SrefCompilerOption], context[17] ) )
        continue;
      // closed e.Errors#2 as range 19
      // closed e.Flag#2 as range 21
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 18
      //DEBUG: e.Errors#2: 19
      //DEBUG: e.Flag#2: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ HalfReuse: )/11 HalfReuse: & Config-AddSrefCompilerFlag/17 AsIs: s.Num#2/18 AsIs: e.Flag#2/21 HalfReuse: >/12 } Tile{ ]] }
      refalrts::update_name(context[4], functions[efunc_Update]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_AddSrefCompilerFlag]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/19 )/8 (/11 # TargetFileName/17 s.Num#2/18 e.TargetFile#2/21 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      if( ! refalrts::ident_term( identifiers[ident_TargetFileName], context[17] ) )
        continue;
      // closed e.Errors#2 as range 19
      // closed e.TargetFile#2 as range 21
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 18
      //DEBUG: e.Errors#2: 19
      //DEBUG: e.TargetFile#2: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetTargetFileName/17 AsIs: s.Num#2/18 AsIs: e.TargetFile#2/21 HalfReuse: >/12 } Tile{ ]] }
      refalrts::update_name(context[4], functions[efunc_Update]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetTargetFileName]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.new#11/9 e.new#12/19 )/8 (/11 s.new#9/17 s.new#10/18 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      if( ! refalrts::empty_seq( context[15], context[16] ) )
        continue;
      // closed e.new#12 as range 19
      do {
        // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/21 )/8 (/11 # TargetMode-Exe/17 s.Num#2/18 )/12 >/1
        context[21] = context[19];
        context[22] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_TargetModem_Exe], context[17] ) )
          continue;
        // closed e.Errors#2 as range 21
        //DEBUG: t.Config#2: 9
        //DEBUG: s.Num#2: 18
        //DEBUG: e.Errors#2: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/21 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetTargetMode/17 AsIs: s.Num#2/18 HalfReuse: # EXE/12 AsIs: >/1 ]] }
        refalrts::update_name(context[4], functions[efunc_Update]);
        refalrts::reinit_close_bracket(context[11]);
        refalrts::reinit_name(context[17], functions[efunc_Configm_SetTargetMode]);
        refalrts::reinit_ident(context[12], identifiers[ident_EXE]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[11] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[11];
        res = refalrts::splice_evar( res, context[21], context[22] );
        res = refalrts::splice_evar( res, context[7], context[7] );
        res = refalrts::splice_evar( res, context[9], context[10] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/21 )/8 (/11 # TargetMode-Lib/17 s.Num#2/18 )/12 >/1
        context[21] = context[19];
        context[22] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_TargetModem_Lib], context[17] ) )
          continue;
        // closed e.Errors#2 as range 21
        //DEBUG: t.Config#2: 9
        //DEBUG: s.Num#2: 18
        //DEBUG: e.Errors#2: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/21 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetTargetMode/17 AsIs: s.Num#2/18 HalfReuse: # LIB/12 AsIs: >/1 ]] }
        refalrts::update_name(context[4], functions[efunc_Update]);
        refalrts::reinit_close_bracket(context[11]);
        refalrts::reinit_name(context[17], functions[efunc_Configm_SetTargetMode]);
        refalrts::reinit_ident(context[12], identifiers[ident_LIB]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[11] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[11];
        res = refalrts::splice_evar( res, context[21], context[22] );
        res = refalrts::splice_evar( res, context[7], context[7] );
        res = refalrts::splice_evar( res, context[9], context[10] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/21 )/8 (/11 # TargetMode-R/17 s.Num#2/18 )/12 >/1
        context[21] = context[19];
        context[22] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_TargetModem_R], context[17] ) )
          continue;
        // closed e.Errors#2 as range 21
        //DEBUG: t.Config#2: 9
        //DEBUG: s.Num#2: 18
        //DEBUG: e.Errors#2: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/21 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetTargetMode/17 AsIs: s.Num#2/18 HalfReuse: # R/12 AsIs: >/1 ]] }
        refalrts::update_name(context[4], functions[efunc_Update]);
        refalrts::reinit_close_bracket(context[11]);
        refalrts::reinit_name(context[17], functions[efunc_Configm_SetTargetMode]);
        refalrts::reinit_ident(context[12], identifiers[ident_R]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[11] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[11];
        res = refalrts::splice_evar( res, context[21], context[22] );
        res = refalrts::splice_evar( res, context[7], context[7] );
        res = refalrts::splice_evar( res, context[9], context[10] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/21 )/8 (/11 # TargetMode-C/17 s.Num#2/18 )/12 >/1
      context[21] = context[19];
      context[22] = context[20];
      if( ! refalrts::ident_term( identifiers[ident_TargetModem_C], context[17] ) )
        continue;
      // closed e.Errors#2 as range 21
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 18
      //DEBUG: e.Errors#2: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/21 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetTargetMode/17 AsIs: s.Num#2/18 HalfReuse: # CompileOnly/12 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Update]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetTargetMode]);
      refalrts::reinit_ident(context[12], identifiers[ident_CompileOnly]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[11];
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/19 )/8 (/11 # Prelude/17 s.Num#2/18 e.Prelude#2/21 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      if( ! refalrts::ident_term( identifiers[ident_Prelude], context[17] ) )
        continue;
      // closed e.Errors#2 as range 19
      // closed e.Prelude#2 as range 21
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 18
      //DEBUG: e.Errors#2: 19
      //DEBUG: e.Prelude#2: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetPrelude/17 AsIs: s.Num#2/18 AsIs: e.Prelude#2/21 HalfReuse: >/12 } Tile{ ]] }
      refalrts::update_name(context[4], functions[efunc_Update]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetPrelude]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/19 )/8 (/11 # Runtime/17 s.Num#2/18 e.File#2/21 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      if( ! refalrts::ident_term( identifiers[ident_Runtime], context[17] ) )
        continue;
      // closed e.Errors#2 as range 19
      // closed e.File#2 as range 21
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 18
      //DEBUG: e.Errors#2: 19
      //DEBUG: e.File#2: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ HalfReuse: )/11 HalfReuse: & Config-AddRuntimeFile/17 AsIs: s.Num#2/18 AsIs: e.File#2/21 HalfReuse: >/12 } Tile{ ]] }
      refalrts::update_name(context[4], functions[efunc_Update]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_AddRuntimeFile]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/19 )/8 (/11 # Incorporated/17 s.Num#2/18 e.LibName#2/21 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      if( ! refalrts::ident_term( identifiers[ident_Incorporated], context[17] ) )
        continue;
      // closed e.Errors#2 as range 19
      // closed e.LibName#2 as range 21
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 18
      //DEBUG: e.Errors#2: 19
      //DEBUG: e.LibName#2: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ HalfReuse: )/11 HalfReuse: & Config-AddIncorporated/17 AsIs: s.Num#2/18 AsIs: e.LibName#2/21 HalfReuse: >/12 } Tile{ ]] }
      refalrts::update_name(context[4], functions[efunc_Update]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_AddIncorporated]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/19 )/8 (/11 # FILE/17 s.Num#2/18 e.SourceFile#2/21 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      if( ! refalrts::ident_term( identifiers[ident_FILE], context[17] ) )
        continue;
      // closed e.Errors#2 as range 19
      // closed e.SourceFile#2 as range 21
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 18
      //DEBUG: e.Errors#2: 19
      //DEBUG: e.SourceFile#2: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetSourceFile/17 AsIs: s.Num#2/18 AsIs: e.SourceFile#2/21 HalfReuse: >/12 } Tile{ ]] }
      refalrts::update_name(context[4], functions[efunc_Update]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetSourceFile]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.new#11/9 e.new#12/19 )/8 (/11 s.new#9/17 s.new#10/18 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      if( ! refalrts::empty_seq( context[15], context[16] ) )
        continue;
      // closed e.new#12 as range 19
      do {
        // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/21 )/8 (/11 # Help/17 s.Num#2/18 )/12 >/1
        context[21] = context[19];
        context[22] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_Help], context[17] ) )
          continue;
        // closed e.Errors#2 as range 21
        //DEBUG: t.Config#2: 9
        //DEBUG: s.Num#2: 18
        //DEBUG: e.Errors#2: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} (/11 {REMOVED TILE} s.Num#2/18 )/12 >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: </17 } Tile{ HalfReuse: & PrintHelp/0 HalfReuse: >/4 AsIs: (/7 AsIs: t.Config#2/9 AsIs: e.Errors#2/21 AsIs: )/8 } Tile{ ]] }
        refalrts::reinit_open_call(context[17]);
        refalrts::reinit_name(context[0], functions[efunc_PrintHelp]);
        refalrts::reinit_close_call(context[4]);
        refalrts::link_brackets( context[7], context[8] );
        refalrts::push_stack( vm, context[4] );
        refalrts::push_stack( vm, context[17] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[0], context[8] );
        res = refalrts::splice_evar( res, context[17], context[17] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/21 )/8 (/11 # Version/17 s.Num#2/18 )/12 >/1
        context[21] = context[19];
        context[22] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_Version], context[17] ) )
          continue;
        // closed e.Errors#2 as range 21
        //DEBUG: t.Config#2: 9
        //DEBUG: s.Num#2: 18
        //DEBUG: e.Errors#2: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Num#2/18 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: </11 HalfReuse: & PrintVersion/17 } 'r'/23 Tile{ HalfReuse: 'l'/12 HalfReuse: 'm'/1 }"ak"/24 Tile{ HalfReuse: 'e'/0 HalfReuse: >/4 AsIs: (/7 AsIs: t.Config#2/9 AsIs: e.Errors#2/21 AsIs: )/8 } Tile{ ]] }
        refalrts::alloc_char(vm, context[23], 'r');
        refalrts::alloc_chars(vm, context[24], context[25], "ak", 2);
        refalrts::reinit_open_call(context[11]);
        refalrts::reinit_name(context[17], functions[efunc_PrintVersion]);
        refalrts::reinit_char(context[12], 'l');
        refalrts::reinit_char(context[1], 'm');
        refalrts::reinit_char(context[0], 'e');
        refalrts::reinit_close_call(context[4]);
        refalrts::link_brackets( context[7], context[8] );
        refalrts::push_stack( vm, context[4] );
        refalrts::push_stack( vm, context[11] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[0], context[8] );
        res = refalrts::splice_evar( res, context[24], context[25] );
        res = refalrts::splice_evar( res, context[12], context[1] );
        res = refalrts::splice_evar( res, context[23], context[23] );
        res = refalrts::splice_evar( res, context[11], context[17] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/21 )/8 (/11 # KeepRasls/17 s.Num#2/18 )/12 >/1
        context[21] = context[19];
        context[22] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_KeepRasls], context[17] ) )
          continue;
        // closed e.Errors#2 as range 21
        //DEBUG: t.Config#2: 9
        //DEBUG: s.Num#2: 18
        //DEBUG: e.Errors#2: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/21 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetKeepRasls/17 AsIs: s.Num#2/18 HalfReuse: # True/12 AsIs: >/1 ]] }
        refalrts::update_name(context[4], functions[efunc_Update]);
        refalrts::reinit_close_bracket(context[11]);
        refalrts::reinit_name(context[17], functions[efunc_Configm_SetKeepRasls]);
        refalrts::reinit_ident(context[12], identifiers[ident_True]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[11] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[11];
        res = refalrts::splice_evar( res, context[21], context[22] );
        res = refalrts::splice_evar( res, context[7], context[7] );
        res = refalrts::splice_evar( res, context[9], context[10] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/21 )/8 (/11 # DontKeepRasls/17 s.Num#2/18 )/12 >/1
      context[21] = context[19];
      context[22] = context[20];
      if( ! refalrts::ident_term( identifiers[ident_DontKeepRasls], context[17] ) )
        continue;
      // closed e.Errors#2 as range 21
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 18
      //DEBUG: e.Errors#2: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/21 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetKeepRasls/17 AsIs: s.Num#2/18 HalfReuse: # False/12 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Update]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetKeepRasls]);
      refalrts::reinit_ident(context[12], identifiers[ident_False]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[11];
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/19 )/8 (/11 # TempDir/17 s.Num#2/18 e.Name#2/21 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      if( ! refalrts::ident_term( identifiers[ident_TempDir], context[17] ) )
        continue;
      // closed e.Errors#2 as range 19
      // closed e.Name#2 as range 21
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 18
      //DEBUG: e.Errors#2: 19
      //DEBUG: e.Name#2: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetTempDir/17 AsIs: s.Num#2/18 AsIs: e.Name#2/21 HalfReuse: >/12 } Tile{ ]] }
      refalrts::update_name(context[4], functions[efunc_Update]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetTempDir]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.new#11/9 e.new#12/19 )/8 (/11 s.new#9/17 s.new#10/18 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      if( ! refalrts::empty_seq( context[15], context[16] ) )
        continue;
      // closed e.new#12 as range 19
      do {
        // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/21 )/8 (/11 # REF5RSL-Env/17 s.Num#2/18 )/12 >/1
        context[21] = context[19];
        context[22] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_REF5RSLm_Env], context[17] ) )
          continue;
        // closed e.Errors#2 as range 21
        //DEBUG: t.Config#2: 9
        //DEBUG: s.Num#2: 18
        //DEBUG: e.Errors#2: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/21 } Tile{ HalfReuse: )/11 HalfReuse: & Config-AddFolder/17 AsIs: s.Num#2/18 HalfReuse: # REF5RSL/12 AsIs: >/1 ]] }
        refalrts::update_name(context[4], functions[efunc_Update]);
        refalrts::reinit_close_bracket(context[11]);
        refalrts::reinit_name(context[17], functions[efunc_Configm_AddFolder]);
        refalrts::reinit_ident(context[12], identifiers[ident_REF5RSL]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[11] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[11];
        res = refalrts::splice_evar( res, context[21], context[22] );
        res = refalrts::splice_evar( res, context[7], context[7] );
        res = refalrts::splice_evar( res, context[9], context[10] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/21 )/8 (/11 # OverwriteExistRasls/17 s.Num#2/18 )/12 >/1
        context[21] = context[19];
        context[22] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_OverwriteExistRasls], context[17] ) )
          continue;
        // closed e.Errors#2 as range 21
        //DEBUG: t.Config#2: 9
        //DEBUG: s.Num#2: 18
        //DEBUG: e.Errors#2: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/21 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetOverwriteExistRasls/17 AsIs: s.Num#2/18 HalfReuse: # True/12 AsIs: >/1 ]] }
        refalrts::update_name(context[4], functions[efunc_Update]);
        refalrts::reinit_close_bracket(context[11]);
        refalrts::reinit_name(context[17], functions[efunc_Configm_SetOverwriteExistRasls]);
        refalrts::reinit_ident(context[12], identifiers[ident_True]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[11] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[11];
        res = refalrts::splice_evar( res, context[21], context[22] );
        res = refalrts::splice_evar( res, context[7], context[7] );
        res = refalrts::splice_evar( res, context[9], context[10] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/21 )/8 (/11 # DontOverwriteExistRasls/17 s.Num#2/18 )/12 >/1
      context[21] = context[19];
      context[22] = context[20];
      if( ! refalrts::ident_term( identifiers[ident_DontOverwriteExistRasls], context[17] ) )
        continue;
      // closed e.Errors#2 as range 21
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 18
      //DEBUG: e.Errors#2: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/21 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetOverwriteExistRasls/17 AsIs: s.Num#2/18 HalfReuse: # False/12 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Update]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetOverwriteExistRasls]);
      refalrts::reinit_ident(context[12], identifiers[ident_False]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[11];
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/19 )/8 (/11 # CppCompilerExeSuf/17 s.Num#2/18 e.CppCompilerExeSuf#2/21 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      if( ! refalrts::ident_term( identifiers[ident_CppCompilerExeSuf], context[17] ) )
        continue;
      // closed e.Errors#2 as range 19
      // closed e.CppCompilerExeSuf#2 as range 21
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 18
      //DEBUG: e.Errors#2: 19
      //DEBUG: e.CppCompilerExeSuf#2: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetCppCompilerExeSuf/17 AsIs: s.Num#2/18 AsIs: e.CppCompilerExeSuf#2/21 HalfReuse: >/12 } Tile{ ]] }
      refalrts::update_name(context[4], functions[efunc_Update]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetCppCompilerExeSuf]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/19 )/8 (/11 # CppCompilerLibSuf/17 s.Num#2/18 e.CppCompilerLibSuf#2/21 )/12 >/1
    context[19] = context[13];
    context[20] = context[14];
    context[21] = context[15];
    context[22] = context[16];
    if( ! refalrts::ident_term( identifiers[ident_CppCompilerLibSuf], context[17] ) )
      continue;
    // closed e.Errors#2 as range 19
    // closed e.CppCompilerLibSuf#2 as range 21
    //DEBUG: t.Config#2: 9
    //DEBUG: s.Num#2: 18
    //DEBUG: e.Errors#2: 19
    //DEBUG: e.CppCompilerLibSuf#2: 21

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetCppCompilerLibSuf/17 AsIs: s.Num#2/18 AsIs: e.CppCompilerLibSuf#2/21 HalfReuse: >/12 } Tile{ ]] }
    refalrts::update_name(context[4], functions[efunc_Update]);
    refalrts::reinit_close_bracket(context[11]);
    refalrts::reinit_name(context[17], functions[efunc_Configm_SetCppCompilerLibSuf]);
    refalrts::reinit_close_call(context[12]);
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/5 )/8 t.Option#2/11 >/1
  // closed e.Errors#2 as range 5
  //DEBUG: t.Config#2: 9
  //DEBUG: t.Option#2: 11
  //DEBUG: e.Errors#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ParseCommandLine\2/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: t.Config#2/9 AsIs: e.Errors#2/5 AsIs: )/8 AsIs: t.Option#2/11 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseCommandLine_L2("ParseCommandLine\\2", COOKIE1_, COOKIE2_, func_gen_ParseCommandLine_L2);


static refalrts::FnResult func_gen_ParseCommandLine_L3S2L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & ParseCommandLine\3$2\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseCommandLine\3$2\1/4 (/7 s.new#1/9 s.new#2/10 e.new#3/5 )/8 >/1
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
  // closed e.new#3 as range 5
  do {
    // </0 & ParseCommandLine\3$2\1/4 (/7 s.Pos#3/9 # NoRequiredParam/10 e.Param#3/11 )/8 >/1
    context[11] = context[5];
    context[12] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_NoRequiredParam], context[10] ) )
      continue;
    // closed e.Param#3 as range 11
    //DEBUG: s.Pos#3: 9
    //DEBUG: e.Param#3: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#3/9 HalfReuse: 'o'/10 } Tile{ HalfReuse: 'p'/0 HalfReuse: 't'/4 }"ion "/13 Tile{ AsIs: e.Param#3/11 }" expects paramete"/15 Tile{ HalfReuse: 'r'/8 HalfReuse: )/1 ]] }
    refalrts::alloc_chars(vm, context[13], context[14], "ion ", 4);
    refalrts::alloc_chars(vm, context[15], context[16], " expects paramete", 17);
    refalrts::reinit_char(context[10], 'o');
    refalrts::reinit_char(context[0], 'p');
    refalrts::reinit_char(context[4], 't');
    refalrts::reinit_char(context[8], 'r');
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ParseCommandLine\3$2\1/4 (/7 s.Pos#3/9 # UnknownShortOption/10 s.Option#3/13 )/8 >/1
    context[11] = context[5];
    context[12] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_UnknownShortOption], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    //DEBUG: s.Pos#3: 9
    //DEBUG: s.Option#3: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#3/9 HalfReuse: 'u'/10 } 'n'/14 Tile{ HalfReuse: 'k'/1 } Tile{ HalfReuse: 'n'/0 HalfReuse: 'o'/4 }"wn option -"/15 Tile{ AsIs: s.Option#3/13 AsIs: )/8 } Tile{ ]] }
    refalrts::alloc_char(vm, context[14], 'n');
    refalrts::alloc_chars(vm, context[15], context[16], "wn option -", 11);
    refalrts::reinit_char(context[10], 'u');
    refalrts::reinit_char(context[1], 'k');
    refalrts::reinit_char(context[0], 'n');
    refalrts::reinit_char(context[4], 'o');
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[13], context[8] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[7], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ParseCommandLine\3$2\1/4 (/7 s.Pos#3/9 # UnknownLongOption/10 e.Option#3/11 )/8 >/1
    context[11] = context[5];
    context[12] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_UnknownLongOption], context[10] ) )
      continue;
    // closed e.Option#3 as range 11
    //DEBUG: s.Pos#3: 9
    //DEBUG: e.Option#3: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#3/9 HalfReuse: 'u'/10 }"nk"/13 Tile{ HalfReuse: 'n'/0 HalfReuse: 'o'/4 } Tile{ HalfReuse: 'w'/8 }"n option --"/15 Tile{ AsIs: e.Option#3/11 } Tile{ HalfReuse: )/1 ]] }
    refalrts::alloc_chars(vm, context[13], context[14], "nk", 2);
    refalrts::alloc_chars(vm, context[15], context[16], "n option --", 11);
    refalrts::reinit_char(context[10], 'u');
    refalrts::reinit_char(context[0], 'n');
    refalrts::reinit_char(context[4], 'o');
    refalrts::reinit_char(context[8], 'w');
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[7], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ParseCommandLine\3$2\1/4 (/7 s.Pos#3/9 # ManySourceFiles/10 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_ManySourceFiles], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    //DEBUG: s.Pos#3: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#3/9 HalfReuse: 'm'/10 HalfReuse: 'a'/8 HalfReuse: 'n'/1 } 'y'/11 Tile{ HalfReuse: ' '/0 HalfReuse: 's'/4 }"ource files in command line"/12 )/14 Tile{ ]] }
    refalrts::alloc_char(vm, context[11], 'y');
    refalrts::alloc_chars(vm, context[12], context[13], "ource files in command line", 27);
    refalrts::alloc_close_bracket(vm, context[14]);
    refalrts::reinit_char(context[10], 'm');
    refalrts::reinit_char(context[8], 'a');
    refalrts::reinit_char(context[1], 'n');
    refalrts::reinit_char(context[0], ' ');
    refalrts::reinit_char(context[4], 's');
    refalrts::link_brackets( context[7], context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[14] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ParseCommandLine\3$2\1/4 (/7 s.Pos#3/9 # No/10 # FILE/13 )/8 >/1
    context[11] = context[5];
    context[12] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_No], context[10] ) )
      continue;
    context[13] = refalrts::ident_left( identifiers[ident_FILE], context[11], context[12] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    //DEBUG: s.Pos#3: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#3/9 HalfReuse: 'e'/10 HalfReuse: 'x'/13 HalfReuse: 'p'/8 HalfReuse: 'e'/1 } 'c'/14 Tile{ HalfReuse: 't'/0 HalfReuse: 'e'/4 }"d source filename in command line"/15 )/17 Tile{ ]] }
    refalrts::alloc_char(vm, context[14], 'c');
    refalrts::alloc_chars(vm, context[15], context[16], "d source filename in command line", 33);
    refalrts::alloc_close_bracket(vm, context[17]);
    refalrts::reinit_char(context[10], 'e');
    refalrts::reinit_char(context[13], 'x');
    refalrts::reinit_char(context[8], 'p');
    refalrts::reinit_char(context[1], 'e');
    refalrts::reinit_char(context[0], 't');
    refalrts::reinit_char(context[4], 'e');
    refalrts::link_brackets( context[7], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[15], context[17] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseCommandLine\3$2\1/4 (/7 s.Pos#3/9 # TargetModeAlreadySet/10 )/8 >/1
  if( ! refalrts::ident_term( identifiers[ident_TargetModeAlreadySet], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Pos#3: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#3/9 HalfReuse: 'o'/10 HalfReuse: 'p'/8 HalfReuse: 't'/1 } 'i'/11 Tile{ HalfReuse: 'o'/0 HalfReuse: 'n'/4 }"s --makeexe (-x), --makelib (-l) and -R must appear one time"/12 )/14 Tile{ ]] }
  refalrts::alloc_char(vm, context[11], 'i');
  refalrts::alloc_chars(vm, context[12], context[13], "s --makeexe (-x), --makelib (-l) and -R must appear one time", 60);
  refalrts::alloc_close_bracket(vm, context[14]);
  refalrts::reinit_char(context[10], 'o');
  refalrts::reinit_char(context[8], 'p');
  refalrts::reinit_char(context[1], 't');
  refalrts::reinit_char(context[0], 'o');
  refalrts::reinit_char(context[4], 'n');
  refalrts::link_brackets( context[7], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[12], context[14] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[7], context[1] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseCommandLine_L3S2L1("ParseCommandLine\\3$2\\1", COOKIE1_, COOKIE2_, func_gen_ParseCommandLine_L3S2L1);


static refalrts::FnResult func_gen_ParseCommandLine_L3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & ParseCommandLine\3/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseCommandLine\3/4 (/7 t.new#1/9 e.new#2/5 )/8 >/1
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
  // closed e.new#2 as range 5
  do {
    // </0 & ParseCommandLine\3/4 (/7 t.Config#2/9 )/8 >/1
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    //DEBUG: t.Config#2: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & ParseCommandLine\3/4 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/7 AsIs: t.Config#2/9 } Tile{ ]] }
    refalrts::reinit_ident(context[7], identifiers[ident_Success]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[10] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseCommandLine\3/4 (/7 t.Config#2/9 e.Errors#2/5 )/8 >/1
  // closed e.Errors#2 as range 5
  //DEBUG: t.Config#2: 9
  //DEBUG: e.Errors#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} t.Config#2/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: # Fails/0 HalfReuse: </4 HalfReuse: & Map/7 } Tile{ HalfReuse: & ParseCommandLine\3$2\1/8 } Tile{ AsIs: e.Errors#2/5 } Tile{ AsIs: >/1 ]] }
  refalrts::reinit_ident(context[0], identifiers[ident_Fails]);
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_Map]);
  refalrts::reinit_name(context[8], functions[efunc_gen_ParseCommandLine_L3S2L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseCommandLine_L3("ParseCommandLine\\3", COOKIE1_, COOKIE2_, func_gen_ParseCommandLine_L3);


static refalrts::FnResult func_ParseCommandLine(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 288 elems
  refalrts::Iter context[288];
  refalrts::zeros( context, 288 );
  // </0 & ParseCommandLine/4 e.Arguments#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Arguments#1 as range 2
  //DEBUG: e.Arguments#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </5 & GetOpt/6 (/7 (/8 # CppCompilerExe/9 # Required/10 'c'/11 (/12"cpp-command"/13 )/15 (/16"cpp-command-exe"/17 )/19 )/20 (/21 # CppCompilerLib/22 # Required/23 (/24"cpp-command-lib"/25 )/27 )/28 (/29 # Prefix/30 # Required/31 'p'/32 (/33"prefix"/34 )/36 )/37 (/38 # Reference/39 # Required/40 'r'/41 (/42"reference"/43 )/45 )/46 (/47 # RuntimeFolder/48 # Required/49 'D'/50 (/51"runtime-dir"/52 )/54 (/55"runtime-directory"/56 )/58 )/59 (/60 # SearchFolder/61 # Required/62 'd'/63 (/64"dir"/65 )/67 (/68"directory"/69 )/71 )/72 (/73 # SrefCompiler/74 # Required/75 's'/76 (/77"sref-command"/78 )/80 (/81"srefc-command"/82 )/84 (/85"rlc-command"/86 )/88 )/89 (/90 # SrefCompilerOption/91 # Required/92 'X'/93 (/94"thru"/95 )/97 (/98"through"/99 )/101 )/102 (/103 # TargetFileName/104 # Required/105 'o'/106 (/107"target-file"/108 )/110 )/111 (/112 # TargetMode-Exe/113 # None/114 'x'/115 (/116"makeexe"/117 )/119 )/120 (/121 # TargetMode-Lib/122 # None/123 'l'/124 (/125"makelib"/126 )/128 )/129 (/130 # TargetMode-R/131 # None/132 'R'/133 )/134 (/135 # TargetMode-C/136 # None/137 'C'/138 (/139"compile-only"/140 )/142 )/143 (/144 # Prelude/145 # Required/146 (/147"prelude"/148 )/150 )/151 (/152 # Runtime/153 # Required/154 (/155"runtime"/156 )/158 )/159 (/160 # Incorporated/161 # Required/162 (/163"incorporated"/164 )/166 )/167 (/168 # Help/169 # None/170"h?"/171 (/173"help"/174 )/176 )/177 (/178 # Version/179 # None/180 'v'/181 (/182"version"/183 )/185 )/186 (/187 # KeepRasls/188 # None/189 (/190"keep-rasl"/191 )/193 (/194"keep-rasls"/195 )/197 )/198 (/199 # DontKeepRasls/200 # None/201 (/202"dont-keep-rasl"/203 )/205 (/206"dont-keep-rasls"/207 )/209 )/210 (/211 # TempDir/212 # Required/213 (/214"tmp-dir"/215 )/217 (/218"temp-dir"/219 )/221 )/222 (/223 # REF5RSL-Env/224 # None/225 (/226"ref5rsl"/227 )/229 )/230 (/231 # OverwriteExistRasls/232 # None/233 (/234"overwrite-exist-rasls"/235 )/237 (/238"overwrite-exist-rasl"/239 )/241 )/242 (/243 # DontOverwriteExistRasls/244 # None/245 (/246"dont-overwrite-exist-rasls"/247 )/249 (/250"dont-overwrite-exist-rasl"/251 )/253 )/254 (/255 # CppCompilerExeSuf/256 # Required/257 (/258"cpp-command-exe-suf"/259 )/261 )/262 (/263 # CppCompilerLibSuf/264 # Required/265 (/266"cpp-command-lib-suf"/267 )/269 )/270 )/271 Tile{ AsIs: e.Arguments#1/2 } >/272 </273 & Pipe/274 (/275 & CheckRequiredOptions/276 (/277 # FILE/278 )/279 )/280 & ParseCommandLine\1/281 (/282 & MapAccum/283 & ParseCommandLine\2/284 )/285 & ParseCommandLine\3/286 >/287 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_GetOpt]);
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_open_bracket(vm, context[8]);
  refalrts::alloc_ident(vm, context[9], identifiers[ident_CppCompilerExe]);
  refalrts::alloc_ident(vm, context[10], identifiers[ident_Required]);
  refalrts::alloc_char(vm, context[11], 'c');
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_chars(vm, context[13], context[14], "cpp-command", 11);
  refalrts::alloc_close_bracket(vm, context[15]);
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::alloc_chars(vm, context[17], context[18], "cpp-command-exe", 15);
  refalrts::alloc_close_bracket(vm, context[19]);
  refalrts::alloc_close_bracket(vm, context[20]);
  refalrts::alloc_open_bracket(vm, context[21]);
  refalrts::alloc_ident(vm, context[22], identifiers[ident_CppCompilerLib]);
  refalrts::alloc_ident(vm, context[23], identifiers[ident_Required]);
  refalrts::alloc_open_bracket(vm, context[24]);
  refalrts::alloc_chars(vm, context[25], context[26], "cpp-command-lib", 15);
  refalrts::alloc_close_bracket(vm, context[27]);
  refalrts::alloc_close_bracket(vm, context[28]);
  refalrts::alloc_open_bracket(vm, context[29]);
  refalrts::alloc_ident(vm, context[30], identifiers[ident_Prefix]);
  refalrts::alloc_ident(vm, context[31], identifiers[ident_Required]);
  refalrts::alloc_char(vm, context[32], 'p');
  refalrts::alloc_open_bracket(vm, context[33]);
  refalrts::alloc_chars(vm, context[34], context[35], "prefix", 6);
  refalrts::alloc_close_bracket(vm, context[36]);
  refalrts::alloc_close_bracket(vm, context[37]);
  refalrts::alloc_open_bracket(vm, context[38]);
  refalrts::alloc_ident(vm, context[39], identifiers[ident_Reference]);
  refalrts::alloc_ident(vm, context[40], identifiers[ident_Required]);
  refalrts::alloc_char(vm, context[41], 'r');
  refalrts::alloc_open_bracket(vm, context[42]);
  refalrts::alloc_chars(vm, context[43], context[44], "reference", 9);
  refalrts::alloc_close_bracket(vm, context[45]);
  refalrts::alloc_close_bracket(vm, context[46]);
  refalrts::alloc_open_bracket(vm, context[47]);
  refalrts::alloc_ident(vm, context[48], identifiers[ident_RuntimeFolder]);
  refalrts::alloc_ident(vm, context[49], identifiers[ident_Required]);
  refalrts::alloc_char(vm, context[50], 'D');
  refalrts::alloc_open_bracket(vm, context[51]);
  refalrts::alloc_chars(vm, context[52], context[53], "runtime-dir", 11);
  refalrts::alloc_close_bracket(vm, context[54]);
  refalrts::alloc_open_bracket(vm, context[55]);
  refalrts::alloc_chars(vm, context[56], context[57], "runtime-directory", 17);
  refalrts::alloc_close_bracket(vm, context[58]);
  refalrts::alloc_close_bracket(vm, context[59]);
  refalrts::alloc_open_bracket(vm, context[60]);
  refalrts::alloc_ident(vm, context[61], identifiers[ident_SearchFolder]);
  refalrts::alloc_ident(vm, context[62], identifiers[ident_Required]);
  refalrts::alloc_char(vm, context[63], 'd');
  refalrts::alloc_open_bracket(vm, context[64]);
  refalrts::alloc_chars(vm, context[65], context[66], "dir", 3);
  refalrts::alloc_close_bracket(vm, context[67]);
  refalrts::alloc_open_bracket(vm, context[68]);
  refalrts::alloc_chars(vm, context[69], context[70], "directory", 9);
  refalrts::alloc_close_bracket(vm, context[71]);
  refalrts::alloc_close_bracket(vm, context[72]);
  refalrts::alloc_open_bracket(vm, context[73]);
  refalrts::alloc_ident(vm, context[74], identifiers[ident_SrefCompiler]);
  refalrts::alloc_ident(vm, context[75], identifiers[ident_Required]);
  refalrts::alloc_char(vm, context[76], 's');
  refalrts::alloc_open_bracket(vm, context[77]);
  refalrts::alloc_chars(vm, context[78], context[79], "sref-command", 12);
  refalrts::alloc_close_bracket(vm, context[80]);
  refalrts::alloc_open_bracket(vm, context[81]);
  refalrts::alloc_chars(vm, context[82], context[83], "srefc-command", 13);
  refalrts::alloc_close_bracket(vm, context[84]);
  refalrts::alloc_open_bracket(vm, context[85]);
  refalrts::alloc_chars(vm, context[86], context[87], "rlc-command", 11);
  refalrts::alloc_close_bracket(vm, context[88]);
  refalrts::alloc_close_bracket(vm, context[89]);
  refalrts::alloc_open_bracket(vm, context[90]);
  refalrts::alloc_ident(vm, context[91], identifiers[ident_SrefCompilerOption]);
  refalrts::alloc_ident(vm, context[92], identifiers[ident_Required]);
  refalrts::alloc_char(vm, context[93], 'X');
  refalrts::alloc_open_bracket(vm, context[94]);
  refalrts::alloc_chars(vm, context[95], context[96], "thru", 4);
  refalrts::alloc_close_bracket(vm, context[97]);
  refalrts::alloc_open_bracket(vm, context[98]);
  refalrts::alloc_chars(vm, context[99], context[100], "through", 7);
  refalrts::alloc_close_bracket(vm, context[101]);
  refalrts::alloc_close_bracket(vm, context[102]);
  refalrts::alloc_open_bracket(vm, context[103]);
  refalrts::alloc_ident(vm, context[104], identifiers[ident_TargetFileName]);
  refalrts::alloc_ident(vm, context[105], identifiers[ident_Required]);
  refalrts::alloc_char(vm, context[106], 'o');
  refalrts::alloc_open_bracket(vm, context[107]);
  refalrts::alloc_chars(vm, context[108], context[109], "target-file", 11);
  refalrts::alloc_close_bracket(vm, context[110]);
  refalrts::alloc_close_bracket(vm, context[111]);
  refalrts::alloc_open_bracket(vm, context[112]);
  refalrts::alloc_ident(vm, context[113], identifiers[ident_TargetModem_Exe]);
  refalrts::alloc_ident(vm, context[114], identifiers[ident_None]);
  refalrts::alloc_char(vm, context[115], 'x');
  refalrts::alloc_open_bracket(vm, context[116]);
  refalrts::alloc_chars(vm, context[117], context[118], "makeexe", 7);
  refalrts::alloc_close_bracket(vm, context[119]);
  refalrts::alloc_close_bracket(vm, context[120]);
  refalrts::alloc_open_bracket(vm, context[121]);
  refalrts::alloc_ident(vm, context[122], identifiers[ident_TargetModem_Lib]);
  refalrts::alloc_ident(vm, context[123], identifiers[ident_None]);
  refalrts::alloc_char(vm, context[124], 'l');
  refalrts::alloc_open_bracket(vm, context[125]);
  refalrts::alloc_chars(vm, context[126], context[127], "makelib", 7);
  refalrts::alloc_close_bracket(vm, context[128]);
  refalrts::alloc_close_bracket(vm, context[129]);
  refalrts::alloc_open_bracket(vm, context[130]);
  refalrts::alloc_ident(vm, context[131], identifiers[ident_TargetModem_R]);
  refalrts::alloc_ident(vm, context[132], identifiers[ident_None]);
  refalrts::alloc_char(vm, context[133], 'R');
  refalrts::alloc_close_bracket(vm, context[134]);
  refalrts::alloc_open_bracket(vm, context[135]);
  refalrts::alloc_ident(vm, context[136], identifiers[ident_TargetModem_C]);
  refalrts::alloc_ident(vm, context[137], identifiers[ident_None]);
  refalrts::alloc_char(vm, context[138], 'C');
  refalrts::alloc_open_bracket(vm, context[139]);
  refalrts::alloc_chars(vm, context[140], context[141], "compile-only", 12);
  refalrts::alloc_close_bracket(vm, context[142]);
  refalrts::alloc_close_bracket(vm, context[143]);
  refalrts::alloc_open_bracket(vm, context[144]);
  refalrts::alloc_ident(vm, context[145], identifiers[ident_Prelude]);
  refalrts::alloc_ident(vm, context[146], identifiers[ident_Required]);
  refalrts::alloc_open_bracket(vm, context[147]);
  refalrts::alloc_chars(vm, context[148], context[149], "prelude", 7);
  refalrts::alloc_close_bracket(vm, context[150]);
  refalrts::alloc_close_bracket(vm, context[151]);
  refalrts::alloc_open_bracket(vm, context[152]);
  refalrts::alloc_ident(vm, context[153], identifiers[ident_Runtime]);
  refalrts::alloc_ident(vm, context[154], identifiers[ident_Required]);
  refalrts::alloc_open_bracket(vm, context[155]);
  refalrts::alloc_chars(vm, context[156], context[157], "runtime", 7);
  refalrts::alloc_close_bracket(vm, context[158]);
  refalrts::alloc_close_bracket(vm, context[159]);
  refalrts::alloc_open_bracket(vm, context[160]);
  refalrts::alloc_ident(vm, context[161], identifiers[ident_Incorporated]);
  refalrts::alloc_ident(vm, context[162], identifiers[ident_Required]);
  refalrts::alloc_open_bracket(vm, context[163]);
  refalrts::alloc_chars(vm, context[164], context[165], "incorporated", 12);
  refalrts::alloc_close_bracket(vm, context[166]);
  refalrts::alloc_close_bracket(vm, context[167]);
  refalrts::alloc_open_bracket(vm, context[168]);
  refalrts::alloc_ident(vm, context[169], identifiers[ident_Help]);
  refalrts::alloc_ident(vm, context[170], identifiers[ident_None]);
  refalrts::alloc_chars(vm, context[171], context[172], "h?", 2);
  refalrts::alloc_open_bracket(vm, context[173]);
  refalrts::alloc_chars(vm, context[174], context[175], "help", 4);
  refalrts::alloc_close_bracket(vm, context[176]);
  refalrts::alloc_close_bracket(vm, context[177]);
  refalrts::alloc_open_bracket(vm, context[178]);
  refalrts::alloc_ident(vm, context[179], identifiers[ident_Version]);
  refalrts::alloc_ident(vm, context[180], identifiers[ident_None]);
  refalrts::alloc_char(vm, context[181], 'v');
  refalrts::alloc_open_bracket(vm, context[182]);
  refalrts::alloc_chars(vm, context[183], context[184], "version", 7);
  refalrts::alloc_close_bracket(vm, context[185]);
  refalrts::alloc_close_bracket(vm, context[186]);
  refalrts::alloc_open_bracket(vm, context[187]);
  refalrts::alloc_ident(vm, context[188], identifiers[ident_KeepRasls]);
  refalrts::alloc_ident(vm, context[189], identifiers[ident_None]);
  refalrts::alloc_open_bracket(vm, context[190]);
  refalrts::alloc_chars(vm, context[191], context[192], "keep-rasl", 9);
  refalrts::alloc_close_bracket(vm, context[193]);
  refalrts::alloc_open_bracket(vm, context[194]);
  refalrts::alloc_chars(vm, context[195], context[196], "keep-rasls", 10);
  refalrts::alloc_close_bracket(vm, context[197]);
  refalrts::alloc_close_bracket(vm, context[198]);
  refalrts::alloc_open_bracket(vm, context[199]);
  refalrts::alloc_ident(vm, context[200], identifiers[ident_DontKeepRasls]);
  refalrts::alloc_ident(vm, context[201], identifiers[ident_None]);
  refalrts::alloc_open_bracket(vm, context[202]);
  refalrts::alloc_chars(vm, context[203], context[204], "dont-keep-rasl", 14);
  refalrts::alloc_close_bracket(vm, context[205]);
  refalrts::alloc_open_bracket(vm, context[206]);
  refalrts::alloc_chars(vm, context[207], context[208], "dont-keep-rasls", 15);
  refalrts::alloc_close_bracket(vm, context[209]);
  refalrts::alloc_close_bracket(vm, context[210]);
  refalrts::alloc_open_bracket(vm, context[211]);
  refalrts::alloc_ident(vm, context[212], identifiers[ident_TempDir]);
  refalrts::alloc_ident(vm, context[213], identifiers[ident_Required]);
  refalrts::alloc_open_bracket(vm, context[214]);
  refalrts::alloc_chars(vm, context[215], context[216], "tmp-dir", 7);
  refalrts::alloc_close_bracket(vm, context[217]);
  refalrts::alloc_open_bracket(vm, context[218]);
  refalrts::alloc_chars(vm, context[219], context[220], "temp-dir", 8);
  refalrts::alloc_close_bracket(vm, context[221]);
  refalrts::alloc_close_bracket(vm, context[222]);
  refalrts::alloc_open_bracket(vm, context[223]);
  refalrts::alloc_ident(vm, context[224], identifiers[ident_REF5RSLm_Env]);
  refalrts::alloc_ident(vm, context[225], identifiers[ident_None]);
  refalrts::alloc_open_bracket(vm, context[226]);
  refalrts::alloc_chars(vm, context[227], context[228], "ref5rsl", 7);
  refalrts::alloc_close_bracket(vm, context[229]);
  refalrts::alloc_close_bracket(vm, context[230]);
  refalrts::alloc_open_bracket(vm, context[231]);
  refalrts::alloc_ident(vm, context[232], identifiers[ident_OverwriteExistRasls]);
  refalrts::alloc_ident(vm, context[233], identifiers[ident_None]);
  refalrts::alloc_open_bracket(vm, context[234]);
  refalrts::alloc_chars(vm, context[235], context[236], "overwrite-exist-rasls", 21);
  refalrts::alloc_close_bracket(vm, context[237]);
  refalrts::alloc_open_bracket(vm, context[238]);
  refalrts::alloc_chars(vm, context[239], context[240], "overwrite-exist-rasl", 20);
  refalrts::alloc_close_bracket(vm, context[241]);
  refalrts::alloc_close_bracket(vm, context[242]);
  refalrts::alloc_open_bracket(vm, context[243]);
  refalrts::alloc_ident(vm, context[244], identifiers[ident_DontOverwriteExistRasls]);
  refalrts::alloc_ident(vm, context[245], identifiers[ident_None]);
  refalrts::alloc_open_bracket(vm, context[246]);
  refalrts::alloc_chars(vm, context[247], context[248], "dont-overwrite-exist-rasls", 26);
  refalrts::alloc_close_bracket(vm, context[249]);
  refalrts::alloc_open_bracket(vm, context[250]);
  refalrts::alloc_chars(vm, context[251], context[252], "dont-overwrite-exist-rasl", 25);
  refalrts::alloc_close_bracket(vm, context[253]);
  refalrts::alloc_close_bracket(vm, context[254]);
  refalrts::alloc_open_bracket(vm, context[255]);
  refalrts::alloc_ident(vm, context[256], identifiers[ident_CppCompilerExeSuf]);
  refalrts::alloc_ident(vm, context[257], identifiers[ident_Required]);
  refalrts::alloc_open_bracket(vm, context[258]);
  refalrts::alloc_chars(vm, context[259], context[260], "cpp-command-exe-suf", 19);
  refalrts::alloc_close_bracket(vm, context[261]);
  refalrts::alloc_close_bracket(vm, context[262]);
  refalrts::alloc_open_bracket(vm, context[263]);
  refalrts::alloc_ident(vm, context[264], identifiers[ident_CppCompilerLibSuf]);
  refalrts::alloc_ident(vm, context[265], identifiers[ident_Required]);
  refalrts::alloc_open_bracket(vm, context[266]);
  refalrts::alloc_chars(vm, context[267], context[268], "cpp-command-lib-suf", 19);
  refalrts::alloc_close_bracket(vm, context[269]);
  refalrts::alloc_close_bracket(vm, context[270]);
  refalrts::alloc_close_bracket(vm, context[271]);
  refalrts::alloc_close_call(vm, context[272]);
  refalrts::alloc_open_call(vm, context[273]);
  refalrts::alloc_name(vm, context[274], functions[efunc_Pipe]);
  refalrts::alloc_open_bracket(vm, context[275]);
  refalrts::alloc_name(vm, context[276], functions[efunc_CheckRequiredOptions]);
  refalrts::alloc_open_bracket(vm, context[277]);
  refalrts::alloc_ident(vm, context[278], identifiers[ident_FILE]);
  refalrts::alloc_close_bracket(vm, context[279]);
  refalrts::alloc_close_bracket(vm, context[280]);
  refalrts::alloc_name(vm, context[281], functions[efunc_gen_ParseCommandLine_L1]);
  refalrts::alloc_open_bracket(vm, context[282]);
  refalrts::alloc_name(vm, context[283], functions[efunc_MapAccum]);
  refalrts::alloc_name(vm, context[284], functions[efunc_gen_ParseCommandLine_L2]);
  refalrts::alloc_close_bracket(vm, context[285]);
  refalrts::alloc_name(vm, context[286], functions[efunc_gen_ParseCommandLine_L3]);
  refalrts::alloc_close_call(vm, context[287]);
  refalrts::update_name(context[4], functions[efunc_Fetch]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[287] );
  refalrts::push_stack( vm, context[273] );
  refalrts::link_brackets( context[282], context[285] );
  refalrts::link_brackets( context[275], context[280] );
  refalrts::link_brackets( context[277], context[279] );
  refalrts::push_stack( vm, context[272] );
  refalrts::push_stack( vm, context[5] );
  refalrts::link_brackets( context[7], context[271] );
  refalrts::link_brackets( context[263], context[270] );
  refalrts::link_brackets( context[266], context[269] );
  refalrts::link_brackets( context[255], context[262] );
  refalrts::link_brackets( context[258], context[261] );
  refalrts::link_brackets( context[243], context[254] );
  refalrts::link_brackets( context[250], context[253] );
  refalrts::link_brackets( context[246], context[249] );
  refalrts::link_brackets( context[231], context[242] );
  refalrts::link_brackets( context[238], context[241] );
  refalrts::link_brackets( context[234], context[237] );
  refalrts::link_brackets( context[223], context[230] );
  refalrts::link_brackets( context[226], context[229] );
  refalrts::link_brackets( context[211], context[222] );
  refalrts::link_brackets( context[218], context[221] );
  refalrts::link_brackets( context[214], context[217] );
  refalrts::link_brackets( context[199], context[210] );
  refalrts::link_brackets( context[206], context[209] );
  refalrts::link_brackets( context[202], context[205] );
  refalrts::link_brackets( context[187], context[198] );
  refalrts::link_brackets( context[194], context[197] );
  refalrts::link_brackets( context[190], context[193] );
  refalrts::link_brackets( context[178], context[186] );
  refalrts::link_brackets( context[182], context[185] );
  refalrts::link_brackets( context[168], context[177] );
  refalrts::link_brackets( context[173], context[176] );
  refalrts::link_brackets( context[160], context[167] );
  refalrts::link_brackets( context[163], context[166] );
  refalrts::link_brackets( context[152], context[159] );
  refalrts::link_brackets( context[155], context[158] );
  refalrts::link_brackets( context[144], context[151] );
  refalrts::link_brackets( context[147], context[150] );
  refalrts::link_brackets( context[135], context[143] );
  refalrts::link_brackets( context[139], context[142] );
  refalrts::link_brackets( context[130], context[134] );
  refalrts::link_brackets( context[121], context[129] );
  refalrts::link_brackets( context[125], context[128] );
  refalrts::link_brackets( context[112], context[120] );
  refalrts::link_brackets( context[116], context[119] );
  refalrts::link_brackets( context[103], context[111] );
  refalrts::link_brackets( context[107], context[110] );
  refalrts::link_brackets( context[90], context[102] );
  refalrts::link_brackets( context[98], context[101] );
  refalrts::link_brackets( context[94], context[97] );
  refalrts::link_brackets( context[73], context[89] );
  refalrts::link_brackets( context[85], context[88] );
  refalrts::link_brackets( context[81], context[84] );
  refalrts::link_brackets( context[77], context[80] );
  refalrts::link_brackets( context[60], context[72] );
  refalrts::link_brackets( context[68], context[71] );
  refalrts::link_brackets( context[64], context[67] );
  refalrts::link_brackets( context[47], context[59] );
  refalrts::link_brackets( context[55], context[58] );
  refalrts::link_brackets( context[51], context[54] );
  refalrts::link_brackets( context[38], context[46] );
  refalrts::link_brackets( context[42], context[45] );
  refalrts::link_brackets( context[29], context[37] );
  refalrts::link_brackets( context[33], context[36] );
  refalrts::link_brackets( context[21], context[28] );
  refalrts::link_brackets( context[24], context[27] );
  refalrts::link_brackets( context[8], context[20] );
  refalrts::link_brackets( context[16], context[19] );
  refalrts::link_brackets( context[12], context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[272], context[287] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[271] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseCommandLine("ParseCommandLine", 0U, 0U, func_ParseCommandLine);


static refalrts::FnResult func_CheckRequiredOptions(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 36 elems
  refalrts::Iter context[36];
  refalrts::zeros( context, 36 );
  // </0 & CheckRequiredOptions/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CheckRequiredOptions/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 e.new#3/2 >/1
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
    // </0 & CheckRequiredOptions/4 (/7 s.new#5/19 e.new#6/13 )/8 (/11 e.new#7/15 )/12 e.new#4/17 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[2];
    context[18] = context[3];
    // closed e.new#7 as range 15
    // closed e.new#4 as range 17
    if( ! refalrts::svar_left( context[19], context[13], context[14] ) )
      continue;
    // closed e.new#6 as range 13
    do {
      // </0 & CheckRequiredOptions/4 (/7 s.Flag#1/19 e.Required#1/20 )/8 (/11 e.Errors#1/22 )/12 e.Options-B#1/26 (/32 s.Flag#1/34 s.Num#1/35 e.Value#1/30 )/33 e.Options-E#1/28 >/1
      context[20] = context[13];
      context[21] = context[14];
      context[22] = context[15];
      context[23] = context[16];
      context[24] = context[17];
      context[25] = context[18];
      // closed e.Required#1 as range 20
      // closed e.Errors#1 as range 22
      context[26] = 0;
      context[27] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[28] = context[24];
        context[29] = context[25];
        context[30] = 0;
        context[31] = 0;
        context[32] = refalrts::brackets_left( context[30], context[31], context[28], context[29] );
        if( ! context[32] )
          continue;
        refalrts::bracket_pointers(context[32], context[33]);
        if( ! refalrts::repeated_stvar_left( vm, context[34], context[19], context[30], context[31] ) )
          continue;
        // closed e.Options-E#1 as range 28
        if( ! refalrts::svar_left( context[35], context[30], context[31] ) )
          continue;
        // closed e.Value#1 as range 30
        //DEBUG: s.Flag#1: 19
        //DEBUG: e.Required#1: 20
        //DEBUG: e.Errors#1: 22
        //DEBUG: e.Options-B#1: 26
        //DEBUG: e.Options-E#1: 28
        //DEBUG: s.Num#1: 35
        //DEBUG: e.Value#1: 30

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.Flag#1/19 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & CheckRequiredOptions/4 AsIs: (/7 } Tile{ AsIs: e.Required#1/20 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.Errors#1/22 AsIs: )/12 AsIs: e.Options-B#1/26 AsIs: (/32 AsIs: s.Flag#1/34 AsIs: s.Num#1/35 AsIs: e.Value#1/30 AsIs: )/33 AsIs: e.Options-E#1/28 AsIs: >/1 ]] }
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[32], context[33] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[20], context[21] );
        refalrts::splice_to_freelist_open( vm, context[7], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[26], context[27], context[24], context[25] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & CheckRequiredOptions/4 (/7 s.Flag#1/19 e.Required#1/20 )/8 (/11 e.Errors#1/22 )/12 e.Options#1/24 >/1
    context[20] = context[13];
    context[21] = context[14];
    context[22] = context[15];
    context[23] = context[16];
    context[24] = context[17];
    context[25] = context[18];
    // closed e.Required#1 as range 20
    // closed e.Errors#1 as range 22
    // closed e.Options#1 as range 24
    //DEBUG: s.Flag#1: 19
    //DEBUG: e.Required#1: 20
    //DEBUG: e.Errors#1: 22
    //DEBUG: e.Options#1: 24

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & CheckRequiredOptions/4 AsIs: (/7 } Tile{ AsIs: e.Required#1/20 } Tile{ AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Errors#1/22 } (/26 1/27 # No/28 Tile{ AsIs: s.Flag#1/19 } )/29 Tile{ AsIs: )/12 AsIs: e.Options#1/24 AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[26]);
    refalrts::alloc_number(vm, context[27], 1UL);
    refalrts::alloc_ident(vm, context[28], identifiers[ident_No]);
    refalrts::alloc_close_bracket(vm, context[29]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[26], context[29] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[29], context[29] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[26], context[28] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[8], context[11] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CheckRequiredOptions/4 (/7 )/8 (/11 e.Errors#1/9 )/12 e.Options#1/2 >/1
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Errors#1 as range 9
  // closed e.Options#1 as range 2
  //DEBUG: e.Errors#1: 9
  //DEBUG: e.Options#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CheckRequiredOptions/4 (/7 )/8 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: e.Errors#1/9 AsIs: )/12 } Tile{ AsIs: e.Options#1/2 } Tile{ ]] }
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckRequiredOptions("CheckRequiredOptions", COOKIE1_, COOKIE2_, func_CheckRequiredOptions);


static refalrts::FnResult func_gen_Update_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Update:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Update:1/4 (/7 e.new#1/5 )/8 t.new#2/9 s.new#3/11 s.new#4/12 e.new#5/2 >/1
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
  // closed e.new#5 as range 2
  do {
    // </0 & Update:1/4 (/7 e.Errors#1/13 )/8 t.Config#1/9 s.LineNum#1/11 # Success/12 t.Config#2/17 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[2];
    context[16] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Success], context[12] ) )
      continue;
    // closed e.Errors#1 as range 13
    context[18] = refalrts::tvar_left( context[17], context[15], context[16] );
    if( ! context[18] )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    //DEBUG: t.Config#1: 9
    //DEBUG: s.LineNum#1: 11
    //DEBUG: e.Errors#1: 13
    //DEBUG: t.Config#2: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Update:1/4 (/7 {REMOVED TILE} )/8 t.Config#1/9 s.LineNum#1/11 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/12 AsIs: t.Config#2/17 } Tile{ AsIs: e.Errors#1/13 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket(context[12]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[12], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[12], context[18] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Update:1/4 (/7 e.Errors#1/5 )/8 t.Config#1/9 s.LineNum#1/11 # Fails/12 e.ErrorMessage#2/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_Fails], context[12] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Errors#1 as range 5
  // closed e.ErrorMessage#2 as range 2
  //DEBUG: t.Config#1: 9
  //DEBUG: s.LineNum#1: 11
  //DEBUG: e.Errors#1: 5
  //DEBUG: e.ErrorMessage#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.LineNum#1/11 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/8 AsIs: t.Config#1/9 } Tile{ AsIs: e.Errors#1/5 } Tile{ AsIs: (/7 } Tile{ HalfReuse: s.LineNum1 #11/12 AsIs: e.ErrorMessage#2/2 HalfReuse: )/1 } Tile{ HalfReuse: )/4 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[8]);
  refalrts::reinit_svar( context[12], context[11] );
  refalrts::reinit_close_bracket(context[1]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::link_brackets( context[8], context[4] );
  refalrts::link_brackets( context[7], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[4], context[4] );
  res = refalrts::splice_evar( res, context[12], context[1] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[10] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Update_B1("Update:1", COOKIE1_, COOKIE2_, func_gen_Update_B1);


static refalrts::FnResult func_Update(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & Update/4 t.Config#1/5 (/9 e.Errors#1/7 )/10 s.Updater#1/11 s.LineNum#1/12 e.Option#1/2 >/1
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
  // closed e.Errors#1 as range 7
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Option#1 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: e.Errors#1: 7
  //DEBUG: s.Updater#1: 11
  //DEBUG: s.LineNum#1: 12
  //DEBUG: e.Option#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 } Tile{ AsIs: (/9 AsIs: e.Errors#1/7 AsIs: )/10 } Tile{ AsIs: t.Config#1/5 } Tile{ AsIs: s.LineNum#1/12 } </13 Tile{ AsIs: s.Updater#1/11 } t.Config#1/5/14 Tile{ AsIs: e.Option#1/2 } >/16 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::copy_evar(vm, context[14], context[15], context[5], context[6]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Update("Update", COOKIE1_, COOKIE2_, func_Update);


static refalrts::FnResult func_PrintHelp(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & PrintHelp/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Prout/4 HalfReuse: ' '/1 }" rlmake flags... MainFileName[.ref]\n\nflags:\n-c, --cpp-command, --cpp-command-exe command-line\n        C++ command line prefix for building executable module\n--cpp-command-lib command-line\n        C++ command line prefix for building library module\n-p, --prefix prefix-name\n        set prefix file name\n-r, --reference reference-name\n        Compiled module depends from the reference\n-D, --runtime-dir, --runtime-directory dir\n        Add the directory to search list and include list for C++ compiler\n-d, --dir, --directory dir\n        Add the directory to search list\n-s, --rlc-command, --sref-command, --srefc-command command-line\n        rlc command line prefix for run Refal-5-Lambda compiler\n-X, --thru, --through rlc-command\n        Additional flags for rlc compiler, don\'t quoted in command line\n-o, --target-file target-file-name\n        Name of target file\n-x, --makeexe\n        Compile to executable file\n-l, --makelib\n        Compile to library file (with or w/o native code)\n-R      Compile to library RASL module (w/o native code)\n-C, --compile-only\n        Compile sources w/o linking\n--prelude filename.refi\n        Prelude file with builtin functions declarations\n--runtime filename.ref\n        Auxiliary files -- search roots\n--incorporated filename\n        Marks that a module with the name is statically linked to this module\n--help  Print this help\n--version\n        Print version\n--keep-rasl, --keep-rasls, --dont-keep-rasl, --dont-keep-rasls\n        Save or don\'t save temporary .rasl after compilation\n--tmp-dir, --temp-dir directory\n        Directory for intermediate .rasl files, current is default\n--ref5rsl\n        Use environment variable REF5RSL as search path\n--overwrite-exist-rasls, --dont-overwrite-exist-rasls,\n--overwrite-exist-rasl, --dont-overwrite-exist-rasl\n        If tmp-dir already contain file with name that being produced\n        new file use new name\n"/5 >/7 Tile{ ]] }
  refalrts::alloc_chars(vm, context[5], context[6], " rlmake flags... MainFileName[.ref]\n\nflags:\n-c, --cpp-command, --cpp-command-exe command-line\n        C++ command line prefix for building executable module\n--cpp-command-lib command-line\n        C++ command line prefix for building library module\n-p, --prefix prefix-name\n        set prefix file name\n-r, --reference reference-name\n        Compiled module depends from the reference\n-D, --runtime-dir, --runtime-directory dir\n        Add the directory to search list and include list for C++ compiler\n-d, --dir, --directory dir\n        Add the directory to search list\n-s, --rlc-command, --sref-command, --srefc-command command-line\n        rlc command line prefix for run Refal-5-Lambda compiler\n-X, --thru, --through rlc-command\n        Additional flags for rlc compiler, don\'t quoted in command line\n-o, --target-file target-file-name\n        Name of target file\n-x, --makeexe\n        Compile to executable file\n-l, --makelib\n        Compile to library file (with or w/o native code)\n-R      Compile to library RASL module (w/o native code)\n-C, --compile-only\n        Compile sources w/o linking\n--prelude filename.refi\n        Prelude file with builtin functions declarations\n--runtime filename.ref\n        Auxiliary files -- search roots\n--incorporated filename\n        Marks that a module with the name is statically linked to this module\n--help  Print this help\n--version\n        Print version\n--keep-rasl, --keep-rasls, --dont-keep-rasl, --dont-keep-rasls\n        Save or don\'t save temporary .rasl after compilation\n--tmp-dir, --temp-dir directory\n        Directory for intermediate .rasl files, current is default\n--ref5rsl\n        Use environment variable REF5RSL as search path\n--overwrite-exist-rasls, --dont-overwrite-exist-rasls,\n--overwrite-exist-rasl, --dont-overwrite-exist-rasl\n        If tmp-dir already contain file with name that being produced\n        new file use new name\n", 1898);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_Prout]);
  refalrts::reinit_char(context[1], ' ');
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrintHelp("PrintHelp", 0U, 0U, func_PrintHelp);


//End of file
