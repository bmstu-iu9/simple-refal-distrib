// This file automatically generated from 'ParseCmdLine.ref'
// Don't edit! Edit 'ParseCmdLine.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_831796028_262638704

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
  efunc_Map = 14,
  efunc_Apply = 15,
  efunc_Reduce = 16,
  efunc_DoMapAccum = 17,
  efunc_DoMapAccumm_Aux = 18,
  efunc_MapAccum = 19,
  efunc_Fetch = 20,
  efunc_Pipe = 21,
  efunc_gen_Pipe_S2L1 = 22,
  efunc_gen_Pipe_S3L1 = 23,
  efunc_Configm_Create = 24,
  efunc_Configm_SetKeepRasls = 25,
  efunc_Update = 26,
  efunc_Configm_SetCppCompiler = 27,
  efunc_Configm_SetCompilerFlags = 28,
  efunc_Configm_SetDebugInfo = 29,
  efunc_Configm_SetErrorFile = 30,
  efunc_Configm_SetGrammarCheck = 31,
  efunc_Configm_AddIncorporated = 32,
  efunc_Configm_SetMarkupContext = 33,
  efunc_Configm_SetOptFlags = 34,
  efunc_Configm_SetPrefix = 35,
  efunc_Configm_AddReference = 36,
  efunc_Configm_SetTargetFileName = 37,
  efunc_Configm_SetTargetMode = 38,
  efunc_gen_ParseCommandLine_L2S18A1 = 39,
  efunc_Configm_SetTargetSuffix = 40,
  efunc_Configm_SetChmodXCommand = 41,
  efunc_Configm_SetPrelude = 42,
  efunc_Configm_SetR5Mode = 43,
  efunc_Configm_SetLogFile = 44,
  efunc_Configm_SetTreeOptCycles = 45,
  efunc_PrintHelp = 46,
  efunc_PrintVersion = 47,
  efunc_Configm_SetTempDir = 48,
  efunc_Configm_SetOverwriteExistRasls = 49,
  efunc_Configm_SetCppCompilerSuf = 50,
  efunc_Configm_SetNoSources = 51,
  efunc_Configm_SetSearchFolder = 52,
  efunc_gen_Map_Z1 = 53,
  efunc_GetOpt = 54,
  efunc_gen_ParseCommandLine_L1 = 55,
  efunc_MapReduce = 56,
  efunc_gen_ParseCommandLine_L2 = 57,
  efunc_gen_ParseCommandLine_L3 = 58,
  efunc_gen_ParseCommandLine_L4 = 59,
  efunc_gen_Update_B1 = 60,
  efunc_Prout = 61,
  efunc_gen_ParseCommandLine_L4S2L1D7 = 62,
};


enum ident {
  ident_k43_ = 0,
  ident_k47_ = 1,
  ident_k37_ = 2,
  ident_k42_ = 3,
  ident_k63_ = 4,
  ident_m_ = 5,
  ident_True = 6,
  ident_CppCompilerm_Exe = 7,
  ident_EXE = 8,
  ident_CppCompilerm_Lib = 9,
  ident_LIB = 10,
  ident_CppFlag = 11,
  ident_CppFlags = 12,
  ident_DebugInfo = 13,
  ident_ErrorFile = 14,
  ident_GrammarCheck = 15,
  ident_Incorporated = 16,
  ident_MarkupContext = 17,
  ident_Opt = 18,
  ident_Prefix = 19,
  ident_Reference = 20,
  ident_RuntimeFolder = 21,
  ident_SearchFolder = 22,
  ident_TargetFileName = 23,
  ident_TargetModem_Exe = 24,
  ident_TargetModem_Lib = 25,
  ident_TargetModem_R = 26,
  ident_R = 27,
  ident_TargetModem_C = 28,
  ident_CompileOnly = 29,
  ident_TargetSuffixm_Exe = 30,
  ident_TargetSuffixm_Lib = 31,
  ident_ChmodXCommand = 32,
  ident_Prelude = 33,
  ident_ClassicMode = 34,
  ident_Classic = 35,
  ident_ExtendedMode = 36,
  ident_Extended = 37,
  ident_Log = 38,
  ident_TreeOptCycles = 39,
  ident_Help = 40,
  ident_Version = 41,
  ident_KeepRasls = 42,
  ident_DontKeepRasls = 43,
  ident_False = 44,
  ident_TempDir = 45,
  ident_REF5RSLm_Env = 46,
  ident_OverwriteExistRasls = 47,
  ident_DontOverwriteExistRasls = 48,
  ident_CppCompilerSufm_Exe = 49,
  ident_CppCompilerSufm_Lib = 50,
  ident_NoSources = 51,
  ident_REF5RSL = 52,
  ident_FILE = 53,
  ident_NoRequiredParam = 54,
  ident_UnknownShortOption = 55,
  ident_UnknownLongOption = 56,
  ident_BadValuem_Opt = 57,
  ident_EmptyErrorFileName = 58,
  ident_TargetModeAlreadySet = 59,
  ident_BadValuem_MustBeNumber = 60,
  ident_Success = 61,
  ident_Fails = 62,
  ident_Required = 63,
  ident_None = 64,
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

static refalrts::NativeReference nat_ref_Mu("Mu", 831796028U, 262638704U, func_Mu);


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
    refalrts::alloc_number(vm, context[9], 262638704UL);
    refalrts::update_name(context[4], functions[efunc_u_u_FindMuPtr]);
    refalrts::reinit_number(context[5], 831796028UL);
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
  refalrts::reinit_number(context[5], 831796028UL);
  refalrts::reinit_number(context[7], 262638704UL);
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

static refalrts::NativeReference nat_ref_gen_u_u_Mum_Aux_S13B1("__Mu-Aux$13:1", 831796028U, 262638704U, func_gen_u_u_Mum_Aux_S13B1);


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

static refalrts::NativeReference nat_ref_u_u_Mum_Aux("__Mu-Aux", 831796028U, 262638704U, func_u_u_Mum_Aux);


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

static refalrts::NativeReference nat_ref_Residue("Residue", 831796028U, 262638704U, func_Residue);


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

static refalrts::NativeReference nat_ref_Apply("Apply", 831796028U, 262638704U, func_Apply);


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

static refalrts::NativeReference nat_ref_Map("Map", 831796028U, 262638704U, func_Map);


static refalrts::FnResult func_Reduce(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
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
    //RESULT: Tile{ [[ } </13 & Reduce/14 t.Fn#1/5/15 Tile{ AsIs: </0 Reuse: & Apply/4 AsIs: t.Fn#1/5 AsIs: t.Acc#1/7 AsIs: t.Next#1/11 } >/17 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_Reduce]);
    refalrts::copy_evar(vm, context[15], context[16], context[5], context[6]);
    refalrts::alloc_close_call(vm, context[17]);
    refalrts::update_name(context[4], functions[efunc_Apply]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[0], context[12] );
    res = refalrts::splice_evar( res, context[13], context[16] );
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

static refalrts::NativeReference nat_ref_Reduce("Reduce", 831796028U, 262638704U, func_Reduce);


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

static refalrts::NativeReference nat_ref_Fetch("Fetch", 831796028U, 262638704U, func_Fetch);


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

static refalrts::NativeReference nat_ref_MapAccum("MapAccum", 831796028U, 262638704U, func_MapAccum);


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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum-Aux/4 AsIs: t.Fn#1/5 } Tile{ AsIs: (/11 AsIs: e.Scanned#1/13 AsIs: )/12 } (/19 </20 & Apply/21 t.Fn#1/5/22 Tile{ AsIs: t.Acc#1/7 } Tile{ AsIs: t.Next#1/17 } >/24 )/25 Tile{ AsIs: e.Tail#1/15 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[19]);
    refalrts::alloc_open_call(vm, context[20]);
    refalrts::alloc_name(vm, context[21], functions[efunc_Apply]);
    refalrts::copy_evar(vm, context[22], context[23], context[5], context[6]);
    refalrts::alloc_close_call(vm, context[24]);
    refalrts::alloc_close_bracket(vm, context[25]);
    refalrts::update_name(context[4], functions[efunc_DoMapAccumm_Aux]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[19], context[25] );
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[20] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[19], context[23] );
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

static refalrts::NativeReference nat_ref_DoMapAccum("DoMapAccum", 831796028U, 262638704U, func_DoMapAccum);


static refalrts::FnResult func_DoMapAccumm_Aux(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & DoMapAccum-Aux/4 t.Fn#1/5 (/9 e.Scanned#1/7 )/10 (/13 t.Acc#1/15 e.StepScanned#1/11 )/14 e.Tail#1/2 >/1
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
  // closed e.Tail#1 as range 2
  context[16] = refalrts::tvar_left( context[15], context[11], context[12] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  // closed e.StepScanned#1 as range 11
  //DEBUG: t.Fn#1: 5
  //DEBUG: e.Scanned#1: 7
  //DEBUG: e.Tail#1: 2
  //DEBUG: t.Acc#1: 15
  //DEBUG: e.StepScanned#1: 11

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/9 {REMOVED TILE} )/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum/4 AsIs: t.Fn#1/5 } Tile{ AsIs: t.Acc#1/15 } Tile{ AsIs: (/13 } Tile{ AsIs: e.Scanned#1/7 } Tile{ AsIs: e.StepScanned#1/11 } Tile{ AsIs: )/14 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_DoMapAccum]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[14];
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::splice_to_freelist_open( vm, context[6], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoMapAccumm_Aux("DoMapAccum-Aux", 831796028U, 262638704U, func_DoMapAccumm_Aux);


static refalrts::FnResult func_MapReduce(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & MapReduce/4 t.Fn#1/5 t.Acc#1/7 e.Tail#1/2 >/1
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
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MapAccum/4 AsIs: t.Fn#1/5 AsIs: t.Acc#1/7 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_MapAccum]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MapReduce("MapReduce", 831796028U, 262638704U, func_MapReduce);


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

static refalrts::NativeReference nat_ref_UnBracket("UnBracket", 831796028U, 262638704U, func_UnBracket);


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

static refalrts::NativeReference nat_ref_DelAccumulator("DelAccumulator", 831796028U, 262638704U, func_DelAccumulator);


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

static refalrts::NativeReference nat_ref_Inc("Inc", 831796028U, 262638704U, func_Inc);


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

static refalrts::NativeReference nat_ref_Dec("Dec", 831796028U, 262638704U, func_Dec);


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

static refalrts::NativeReference nat_ref_gen_Pipe_S2L1("Pipe$2\\1", 831796028U, 262638704U, func_gen_Pipe_S2L1);


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

static refalrts::NativeReference nat_ref_gen_Pipe_S3L1("Pipe$3\\1", 831796028U, 262638704U, func_gen_Pipe_S3L1);


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

static refalrts::NativeReference nat_ref_Pipe("Pipe", 831796028U, 262638704U, func_Pipe);


static refalrts::FnResult func_Seq(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & Seq/4 e.Funcs#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Funcs#1 as range 2
  //DEBUG: e.Funcs#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Pipe/4 AsIs: e.Funcs#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_Pipe]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Seq("Seq", 831796028U, 262638704U, func_Seq);


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

static refalrts::NativeReference nat_ref_gen_ParseCommandLine_L1("ParseCommandLine\\1", 831796028U, 262638704U, func_gen_ParseCommandLine_L1);


static refalrts::FnResult func_gen_ParseCommandLine_L2S18A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & ParseCommandLine\2$18=1/4 s.Num#2/9 (/7 t.Config#3/10 e.Errors#3/5 )/8 >/1
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
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = refalrts::tvar_left( context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.Errors#3 as range 5
  //DEBUG: s.Num#2: 9
  //DEBUG: t.Config#3: 10
  //DEBUG: e.Errors#3: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#3/10 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#3/5 } )/12 & Config-SetKeepRasls/13 Tile{ AsIs: s.Num#2/9 } Tile{ HalfReuse: # True/8 AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_Configm_SetKeepRasls]);
  refalrts::update_name(context[4], functions[efunc_Update]);
  refalrts::reinit_ident(context[8], identifiers[ident_True]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseCommandLine_L2S18A1("ParseCommandLine\\2$18=1", 831796028U, 262638704U, func_gen_ParseCommandLine_L2S18A1);


static refalrts::FnResult func_gen_ParseCommandLine_L2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
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
      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/19 )/8 (/11 # CppCompiler-Exe/17 s.Num#2/18 e.CppCompiler#2/21 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      if( ! refalrts::ident_term( identifiers[ident_CppCompilerm_Exe], context[17] ) )
        continue;
      // closed e.Errors#2 as range 19
      // closed e.CppCompiler#2 as range 21
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 18
      //DEBUG: e.Errors#2: 19
      //DEBUG: e.CppCompiler#2: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetCppCompiler/17 AsIs: s.Num#2/18 } Tile{ HalfReuse: # EXE/12 } Tile{ AsIs: e.CppCompiler#2/21 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Update]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetCppCompiler]);
      refalrts::reinit_ident(context[12], identifiers[ident_EXE]);
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
      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/19 )/8 (/11 # CppCompiler-Lib/17 s.Num#2/18 e.CppCompiler#2/21 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      if( ! refalrts::ident_term( identifiers[ident_CppCompilerm_Lib], context[17] ) )
        continue;
      // closed e.Errors#2 as range 19
      // closed e.CppCompiler#2 as range 21
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 18
      //DEBUG: e.Errors#2: 19
      //DEBUG: e.CppCompiler#2: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetCppCompiler/17 AsIs: s.Num#2/18 } Tile{ HalfReuse: # LIB/12 } Tile{ AsIs: e.CppCompiler#2/21 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Update]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetCppCompiler]);
      refalrts::reinit_ident(context[12], identifiers[ident_LIB]);
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
      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/19 )/8 (/11 # CppFlag/17 s.Num#2/18 e.Flag#2/21 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      if( ! refalrts::ident_term( identifiers[ident_CppFlag], context[17] ) )
        continue;
      // closed e.Errors#2 as range 19
      // closed e.Flag#2 as range 21
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 18
      //DEBUG: e.Errors#2: 19
      //DEBUG: e.Flag#2: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Num#2/18 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ AsIs: )/8 HalfReuse: & Config-SetCompilerFlags/11 HalfReuse: s.Num2 #18/17 }" \""/23 Tile{ AsIs: e.Flag#2/21 } Tile{ HalfReuse: '\"'/12 AsIs: >/1 ]] }
      refalrts::alloc_chars(vm, context[23], context[24], " \"", 2);
      refalrts::update_name(context[4], functions[efunc_Update]);
      refalrts::reinit_name(context[11], functions[efunc_Configm_SetCompilerFlags]);
      refalrts::reinit_svar( context[17], context[18] );
      refalrts::reinit_char(context[12], '\"');
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[8], context[17] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/19 )/8 (/11 # CppFlags/17 s.Num#2/18 e.Flags#2/21 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      if( ! refalrts::ident_term( identifiers[ident_CppFlags], context[17] ) )
        continue;
      // closed e.Errors#2 as range 19
      // closed e.Flags#2 as range 21
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 18
      //DEBUG: e.Errors#2: 19
      //DEBUG: e.Flags#2: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetCompilerFlags/17 AsIs: s.Num#2/18 } Tile{ HalfReuse: ' '/12 } Tile{ AsIs: e.Flags#2/21 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Update]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetCompilerFlags]);
      refalrts::reinit_char(context[12], ' ');
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
      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/19 )/8 (/11 # DebugInfo/17 s.Num#2/18 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      if( ! refalrts::ident_term( identifiers[ident_DebugInfo], context[17] ) )
        continue;
      if( ! refalrts::empty_seq( context[15], context[16] ) )
        continue;
      // closed e.Errors#2 as range 19
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 18
      //DEBUG: e.Errors#2: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # DebugInfo/17 s.Num#2/18 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ AsIs: )/8 HalfReuse: & Config-SetDebugInfo/11 } Tile{ HalfReuse: s.Num2 #18/12 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Update]);
      refalrts::reinit_name(context[11], functions[efunc_Configm_SetDebugInfo]);
      refalrts::reinit_svar( context[12], context[18] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[8], context[11] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/19 )/8 (/11 # ErrorFile/17 s.Num#2/18 e.FileName#2/21 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      if( ! refalrts::ident_term( identifiers[ident_ErrorFile], context[17] ) )
        continue;
      // closed e.Errors#2 as range 19
      // closed e.FileName#2 as range 21
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 18
      //DEBUG: e.Errors#2: 19
      //DEBUG: e.FileName#2: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetErrorFile/17 AsIs: s.Num#2/18 AsIs: e.FileName#2/21 HalfReuse: >/12 } Tile{ ]] }
      refalrts::update_name(context[4], functions[efunc_Update]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetErrorFile]);
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
      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/19 )/8 (/11 # GrammarCheck/17 s.Num#2/18 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      if( ! refalrts::ident_term( identifiers[ident_GrammarCheck], context[17] ) )
        continue;
      if( ! refalrts::empty_seq( context[15], context[16] ) )
        continue;
      // closed e.Errors#2 as range 19
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 18
      //DEBUG: e.Errors#2: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # GrammarCheck/17 s.Num#2/18 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ AsIs: )/8 HalfReuse: & Config-SetGrammarCheck/11 } Tile{ HalfReuse: s.Num2 #18/12 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Update]);
      refalrts::reinit_name(context[11], functions[efunc_Configm_SetGrammarCheck]);
      refalrts::reinit_svar( context[12], context[18] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[8], context[11] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/19 )/8 (/11 # Incorporated/17 s.Num#2/18 e.Name#2/21 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      if( ! refalrts::ident_term( identifiers[ident_Incorporated], context[17] ) )
        continue;
      // closed e.Errors#2 as range 19
      // closed e.Name#2 as range 21
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 18
      //DEBUG: e.Errors#2: 19
      //DEBUG: e.Name#2: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ HalfReuse: )/11 HalfReuse: & Config-AddIncorporated/17 AsIs: s.Num#2/18 AsIs: e.Name#2/21 HalfReuse: >/12 } Tile{ ]] }
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
      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/19 )/8 (/11 # MarkupContext/17 s.Num#2/18 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      if( ! refalrts::ident_term( identifiers[ident_MarkupContext], context[17] ) )
        continue;
      if( ! refalrts::empty_seq( context[15], context[16] ) )
        continue;
      // closed e.Errors#2 as range 19
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 18
      //DEBUG: e.Errors#2: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # MarkupContext/17 s.Num#2/18 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ AsIs: )/8 HalfReuse: & Config-SetMarkupContext/11 } Tile{ HalfReuse: s.Num2 #18/12 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Update]);
      refalrts::reinit_name(context[11], functions[efunc_Configm_SetMarkupContext]);
      refalrts::reinit_svar( context[12], context[18] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[8], context[11] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/19 )/8 (/11 # Opt/17 s.Num#2/18 e.Flags#2/21 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      if( ! refalrts::ident_term( identifiers[ident_Opt], context[17] ) )
        continue;
      // closed e.Errors#2 as range 19
      // closed e.Flags#2 as range 21
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 18
      //DEBUG: e.Errors#2: 19
      //DEBUG: e.Flags#2: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetOptFlags/17 AsIs: s.Num#2/18 AsIs: e.Flags#2/21 HalfReuse: >/12 } Tile{ ]] }
      refalrts::update_name(context[4], functions[efunc_Update]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetOptFlags]);
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
      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/19 )/8 (/11 # RuntimeFolder/17 s.Num#2/18 e.Path#2/21 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      if( ! refalrts::ident_term( identifiers[ident_RuntimeFolder], context[17] ) )
        continue;
      // closed e.Errors#2 as range 19
      // closed e.Path#2 as range 21
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 18
      //DEBUG: e.Errors#2: 19
      //DEBUG: e.Path#2: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } )/23 & Config-SetCompilerFlags/24 s.Num#2/18/25 ' '/26 Tile{ HalfReuse: '-'/1 }"I\""/27 e.Path#2/21/29 '\"'/31 Tile{ HalfReuse: >/8 AsIs: (/11 Reuse: # SearchFolder/17 AsIs: s.Num#2/18 AsIs: e.Path#2/21 AsIs: )/12 } Tile{ ]] }
      refalrts::alloc_close_bracket(vm, context[23]);
      refalrts::alloc_name(vm, context[24], functions[efunc_Configm_SetCompilerFlags]);
      refalrts::copy_stvar(vm, context[25], context[18]);
      refalrts::alloc_char(vm, context[26], ' ');
      refalrts::alloc_chars(vm, context[27], context[28], "I\"", 2);
      refalrts::copy_evar(vm, context[29], context[30], context[21], context[22]);
      refalrts::alloc_char(vm, context[31], '\"');
      refalrts::update_name(context[4], functions[efunc_Update]);
      refalrts::reinit_char(context[1], '-');
      refalrts::reinit_close_call(context[8]);
      refalrts::update_ident(context[17], identifiers[ident_SearchFolder]);
      refalrts::link_brackets( context[11], context[12] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[23] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[8], context[12] );
      res = refalrts::splice_evar( res, context[27], context[31] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[23], context[26] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/19 )/8 (/11 # TargetFileName/17 s.Num#2/18 e.FileName#2/21 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      if( ! refalrts::ident_term( identifiers[ident_TargetFileName], context[17] ) )
        continue;
      // closed e.Errors#2 as range 19
      // closed e.FileName#2 as range 21
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 18
      //DEBUG: e.Errors#2: 19
      //DEBUG: e.FileName#2: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetTargetFileName/17 AsIs: s.Num#2/18 AsIs: e.FileName#2/21 HalfReuse: >/12 } Tile{ ]] }
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
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseCommandLine\2$18=1/4 HalfReuse: s.Num2 #18/7 } Tile{ HalfReuse: </8 } & Update/23 Tile{ AsIs: t.Config#2/9 } (/24 Tile{ AsIs: e.Errors#2/21 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetTargetMode/17 AsIs: s.Num#2/18 HalfReuse: # CompileOnly/12 AsIs: >/1 } >/25 Tile{ ]] }
      refalrts::alloc_name(vm, context[23], functions[efunc_Update]);
      refalrts::alloc_open_bracket(vm, context[24]);
      refalrts::alloc_close_call(vm, context[25]);
      refalrts::update_name(context[4], functions[efunc_gen_ParseCommandLine_L2S18A1]);
      refalrts::reinit_svar( context[7], context[18] );
      refalrts::reinit_open_call(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetTargetMode]);
      refalrts::reinit_ident(context[12], identifiers[ident_CompileOnly]);
      refalrts::push_stack( vm, context[25] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[8] );
      refalrts::link_brackets( context[24], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[25], context[25] );
      res = refalrts::splice_evar( res, context[11], context[1] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[24], context[24] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[23], context[23] );
      res = refalrts::splice_evar( res, context[8], context[8] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/19 )/8 (/11 # TargetSuffix-Exe/17 s.Num#2/18 e.Suffix#2/21 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      if( ! refalrts::ident_term( identifiers[ident_TargetSuffixm_Exe], context[17] ) )
        continue;
      // closed e.Errors#2 as range 19
      // closed e.Suffix#2 as range 21
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 18
      //DEBUG: e.Errors#2: 19
      //DEBUG: e.Suffix#2: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetTargetSuffix/17 AsIs: s.Num#2/18 } Tile{ HalfReuse: # EXE/12 } Tile{ AsIs: e.Suffix#2/21 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Update]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetTargetSuffix]);
      refalrts::reinit_ident(context[12], identifiers[ident_EXE]);
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
      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/19 )/8 (/11 # TargetSuffix-Lib/17 s.Num#2/18 e.Suffix#2/21 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      if( ! refalrts::ident_term( identifiers[ident_TargetSuffixm_Lib], context[17] ) )
        continue;
      // closed e.Errors#2 as range 19
      // closed e.Suffix#2 as range 21
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 18
      //DEBUG: e.Errors#2: 19
      //DEBUG: e.Suffix#2: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetTargetSuffix/17 AsIs: s.Num#2/18 } Tile{ HalfReuse: # LIB/12 } Tile{ AsIs: e.Suffix#2/21 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Update]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetTargetSuffix]);
      refalrts::reinit_ident(context[12], identifiers[ident_LIB]);
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
      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/19 )/8 (/11 # ChmodXCommand/17 s.Num#2/18 e.Command#2/21 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      if( ! refalrts::ident_term( identifiers[ident_ChmodXCommand], context[17] ) )
        continue;
      // closed e.Errors#2 as range 19
      // closed e.Command#2 as range 21
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 18
      //DEBUG: e.Errors#2: 19
      //DEBUG: e.Command#2: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetChmodXCommand/17 AsIs: s.Num#2/18 AsIs: e.Command#2/21 HalfReuse: >/12 } Tile{ ]] }
      refalrts::update_name(context[4], functions[efunc_Update]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetChmodXCommand]);
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
      // </0 & ParseCommandLine\2/4 (/7 t.new#11/9 e.new#12/19 )/8 (/11 s.new#9/17 s.new#10/18 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      if( ! refalrts::empty_seq( context[15], context[16] ) )
        continue;
      // closed e.new#12 as range 19
      do {
        // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/21 )/8 (/11 # ClassicMode/17 s.Num#2/18 )/12 >/1
        context[21] = context[19];
        context[22] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_ClassicMode], context[17] ) )
          continue;
        // closed e.Errors#2 as range 21
        //DEBUG: t.Config#2: 9
        //DEBUG: s.Num#2: 18
        //DEBUG: e.Errors#2: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/21 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetR5Mode/17 AsIs: s.Num#2/18 HalfReuse: # Classic/12 AsIs: >/1 ]] }
        refalrts::update_name(context[4], functions[efunc_Update]);
        refalrts::reinit_close_bracket(context[11]);
        refalrts::reinit_name(context[17], functions[efunc_Configm_SetR5Mode]);
        refalrts::reinit_ident(context[12], identifiers[ident_Classic]);
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

      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/21 )/8 (/11 # ExtendedMode/17 s.Num#2/18 )/12 >/1
      context[21] = context[19];
      context[22] = context[20];
      if( ! refalrts::ident_term( identifiers[ident_ExtendedMode], context[17] ) )
        continue;
      // closed e.Errors#2 as range 21
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 18
      //DEBUG: e.Errors#2: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/21 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetR5Mode/17 AsIs: s.Num#2/18 HalfReuse: # Extended/12 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Update]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetR5Mode]);
      refalrts::reinit_ident(context[12], identifiers[ident_Extended]);
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
      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/19 )/8 (/11 # Log/17 s.Num#2/18 e.LogFile#2/21 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      if( ! refalrts::ident_term( identifiers[ident_Log], context[17] ) )
        continue;
      // closed e.Errors#2 as range 19
      // closed e.LogFile#2 as range 21
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 18
      //DEBUG: e.Errors#2: 19
      //DEBUG: e.LogFile#2: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetLogFile/17 AsIs: s.Num#2/18 AsIs: e.LogFile#2/21 HalfReuse: >/12 } Tile{ ]] }
      refalrts::update_name(context[4], functions[efunc_Update]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetLogFile]);
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
      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/19 )/8 (/11 # TreeOptCycles/17 s.Num#2/18 e.Cycles#2/21 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      if( ! refalrts::ident_term( identifiers[ident_TreeOptCycles], context[17] ) )
        continue;
      // closed e.Errors#2 as range 19
      // closed e.Cycles#2 as range 21
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 18
      //DEBUG: e.Errors#2: 19
      //DEBUG: e.Cycles#2: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetTreeOptCycles/17 AsIs: s.Num#2/18 AsIs: e.Cycles#2/21 HalfReuse: >/12 } Tile{ ]] }
      refalrts::update_name(context[4], functions[efunc_Update]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetTreeOptCycles]);
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
        //RESULT: Tile{ [[ } Tile{ HalfReuse: </11 HalfReuse: & PrintVersion/17 } 'S'/23 Tile{ HalfReuse: 'r'/12 HalfReuse: 'e'/1 } 'f'/24 Tile{ HalfReuse: 'c'/0 HalfReuse: >/4 AsIs: (/7 AsIs: t.Config#2/9 AsIs: e.Errors#2/21 AsIs: )/8 } Tile{ ]] }
        refalrts::alloc_char(vm, context[23], 'S');
        refalrts::alloc_char(vm, context[24], 'f');
        refalrts::reinit_open_call(context[11]);
        refalrts::reinit_name(context[17], functions[efunc_PrintVersion]);
        refalrts::reinit_char(context[12], 'r');
        refalrts::reinit_char(context[1], 'e');
        refalrts::reinit_char(context[0], 'c');
        refalrts::reinit_close_call(context[4]);
        refalrts::link_brackets( context[7], context[8] );
        refalrts::push_stack( vm, context[4] );
        refalrts::push_stack( vm, context[11] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[0], context[8] );
        res = refalrts::splice_evar( res, context[24], context[24] );
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
        //TRASH: {REMOVED TILE} </0 & ParseCommandLine\2/4 {REMOVED TILE} >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: t.Config#2/9 AsIs: e.Errors#2/21 AsIs: )/8 AsIs: (/11 AsIs: # REF5RSL-Env/17 AsIs: s.Num#2/18 AsIs: )/12 } Tile{ ]] }
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[7], context[12] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
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
      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/19 )/8 (/11 # CppCompilerSuf-Exe/17 s.Num#2/18 e.CppCompilerSuf#2/21 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      if( ! refalrts::ident_term( identifiers[ident_CppCompilerSufm_Exe], context[17] ) )
        continue;
      // closed e.Errors#2 as range 19
      // closed e.CppCompilerSuf#2 as range 21
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 18
      //DEBUG: e.Errors#2: 19
      //DEBUG: e.CppCompilerSuf#2: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetCppCompilerSuf/17 AsIs: s.Num#2/18 } Tile{ HalfReuse: # EXE/12 } Tile{ AsIs: e.CppCompilerSuf#2/21 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Update]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetCppCompilerSuf]);
      refalrts::reinit_ident(context[12], identifiers[ident_EXE]);
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
      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/19 )/8 (/11 # CppCompilerSuf-Lib/17 s.Num#2/18 e.CppCompilerSuf#2/21 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      if( ! refalrts::ident_term( identifiers[ident_CppCompilerSufm_Lib], context[17] ) )
        continue;
      // closed e.Errors#2 as range 19
      // closed e.CppCompilerSuf#2 as range 21
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 18
      //DEBUG: e.Errors#2: 19
      //DEBUG: e.CppCompilerSuf#2: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetCppCompilerSuf/17 AsIs: s.Num#2/18 } Tile{ HalfReuse: # LIB/12 } Tile{ AsIs: e.CppCompilerSuf#2/21 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Update]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetCppCompilerSuf]);
      refalrts::reinit_ident(context[12], identifiers[ident_LIB]);
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

    // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/19 )/8 (/11 # NoSources/17 s.Num#2/18 )/12 >/1
    context[19] = context[13];
    context[20] = context[14];
    if( ! refalrts::ident_term( identifiers[ident_NoSources], context[17] ) )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    // closed e.Errors#2 as range 19
    //DEBUG: t.Config#2: 9
    //DEBUG: s.Num#2: 18
    //DEBUG: e.Errors#2: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update/4 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ HalfReuse: )/11 HalfReuse: & Config-SetNoSources/17 AsIs: s.Num#2/18 HalfReuse: # True/12 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_Update]);
    refalrts::reinit_close_bracket(context[11]);
    refalrts::reinit_name(context[17], functions[efunc_Configm_SetNoSources]);
    refalrts::reinit_ident(context[12], identifiers[ident_True]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[11];
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

static refalrts::NativeReference nat_ref_gen_ParseCommandLine_L2("ParseCommandLine\\2", 831796028U, 262638704U, func_gen_ParseCommandLine_L2);


static refalrts::FnResult func_gen_ParseCommandLine_L3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & ParseCommandLine\3/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseCommandLine\3/4 (/7 t.new#1/15 e.new#2/5 )/8 (/11 s.new#3/13 s.new#4/14 e.new#5/9 )/12 >/1
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
  if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#5 as range 9
  context[16] = refalrts::tvar_left( context[15], context[5], context[6] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 5
  do {
    // </0 & ParseCommandLine\3/4 (/7 t.Config#2/15 e.Errors#2/17 )/8 (/11 # SearchFolder/13 s.Num#2/14 e.Folder#2/19 )/12 >/1
    context[17] = context[5];
    context[18] = context[6];
    context[19] = context[9];
    context[20] = context[10];
    if( ! refalrts::ident_term( identifiers[ident_SearchFolder], context[13] ) )
      continue;
    // closed e.Errors#2 as range 17
    // closed e.Folder#2 as range 19
    //DEBUG: t.Config#2: 15
    //DEBUG: s.Num#2: 14
    //DEBUG: e.Errors#2: 17
    //DEBUG: e.Folder#2: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} )/8 (/11 {REMOVED TILE} s.Num#2/14 {REMOVED TILE} )/12 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & Config-SetSearchFolder/7 AsIs: t.Config#2/15 } Tile{ AsIs: e.Folder#2/19 } Tile{ HalfReuse: >/13 } Tile{ AsIs: e.Errors#2/17 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[7], functions[efunc_Configm_SetSearchFolder]);
    refalrts::reinit_close_call(context[13]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[0], context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::splice_to_freelist_open( vm, context[16], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ParseCommandLine\3/4 (/7 t.Config#2/15 e.Errors#2/17 )/8 (/11 # REF5RSL-Env/13 s.Num#2/14 )/12 >/1
    context[17] = context[5];
    context[18] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_REF5RSLm_Env], context[13] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    // closed e.Errors#2 as range 17
    //DEBUG: t.Config#2: 15
    //DEBUG: s.Num#2: 14
    //DEBUG: e.Errors#2: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/11 # REF5RSL-Env/13 s.Num#2/14 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & Config-SetSearchFolder/7 AsIs: t.Config#2/15 } Tile{ HalfReuse: # REF5RSL/12 AsIs: >/1 } Tile{ AsIs: e.Errors#2/17 } Tile{ AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[7], functions[efunc_Configm_SetSearchFolder]);
    refalrts::reinit_ident(context[12], identifiers[ident_REF5RSL]);
    refalrts::link_brackets( context[0], context[8] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[12], context[1] );
    refalrts::splice_to_freelist_open( vm, context[16], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseCommandLine\3/4 (/7 t.Config#2/15 e.Errors#2/5 )/8 (/11 # FILE/13 s.Num#2/14 e.FileName#2/9 )/12 >/1
  if( ! refalrts::ident_term( identifiers[ident_FILE], context[13] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Errors#2 as range 5
  // closed e.FileName#2 as range 9
  //DEBUG: t.Config#2: 15
  //DEBUG: s.Num#2: 14
  //DEBUG: e.Errors#2: 5
  //DEBUG: e.FileName#2: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ParseCommandLine\3/4 {REMOVED TILE} s.Num#2/14 {REMOVED TILE} )/12 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: t.Config#2/15 AsIs: e.Errors#2/5 AsIs: )/8 AsIs: (/11 HalfReuse: s.Num2 #14/13 } Tile{ AsIs: e.FileName#2/9 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_svar( context[13], context[14] );
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[11], context[1] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[7], context[13] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseCommandLine_L3("ParseCommandLine\\3", 831796028U, 262638704U, func_gen_ParseCommandLine_L3);


static refalrts::FnResult func_gen_ParseCommandLine_L4S2L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ParseCommandLine\4$2\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseCommandLine\4$2\1/4 (/7 s.new#1/9 s.new#2/10 e.new#3/5 )/8 >/1
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
    // </0 & ParseCommandLine\4$2\1/4 (/7 s.Pos#3/9 # NoRequiredParam/10 e.Param#3/11 )/8 >/1
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
    // </0 & ParseCommandLine\4$2\1/4 (/7 s.Pos#3/9 # UnknownShortOption/10 s.Option#3/13 )/8 >/1
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
    // </0 & ParseCommandLine\4$2\1/4 (/7 s.Pos#3/9 # UnknownLongOption/10 e.Option#3/11 )/8 >/1
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
    // </0 & ParseCommandLine\4$2\1/4 (/7 s.Pos#3/9 # BadValue-Opt/10 e.BadValue#3/11 )/8 >/1
    context[11] = context[5];
    context[12] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_BadValuem_Opt], context[10] ) )
      continue;
    // closed e.BadValue#3 as range 11
    //DEBUG: s.Pos#3: 9
    //DEBUG: e.BadValue#3: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Pos#3/9 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: s.Pos3 #9/4 HalfReuse: 'o'/7 }"ption -O expects \'d\', \'C\', \'D\', \'I\', \'P\', \'R\', \'S\', \'T\' or it\'s combination, but got "/13 Tile{ HalfReuse: '\''/10 AsIs: e.BadValue#3/11 HalfReuse: '\''/8 HalfReuse: )/1 ]] }
    refalrts::alloc_chars(vm, context[13], context[14], "ption -O expects \'d\', \'C\', \'D\', \'I\', \'P\', \'R\', \'S\', \'T\' or it\'s combination, but got ", 85);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_svar( context[4], context[9] );
    refalrts::reinit_char(context[7], 'o');
    refalrts::reinit_char(context[10], '\'');
    refalrts::reinit_char(context[8], '\'');
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ParseCommandLine\4$2\1/4 (/7 s.new#4/9 s.new#5/10 )/8 >/1
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    do {
      // </0 & ParseCommandLine\4$2\1/4 (/7 s.Pos#3/9 # EmptyErrorFileName/10 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_EmptyErrorFileName], context[10] ) )
        continue;
      //DEBUG: s.Pos#3: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#3/9 HalfReuse: 'o'/10 HalfReuse: 'p'/8 HalfReuse: 't'/1 } 'i'/11 Tile{ HalfReuse: 'o'/0 HalfReuse: 'n'/4 }" --error-file expects non-empty argument"/12 )/14 Tile{ ]] }
      refalrts::alloc_char(vm, context[11], 'i');
      refalrts::alloc_chars(vm, context[12], context[13], " --error-file expects non-empty argument", 40);
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
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ParseCommandLine\4$2\1/4 (/7 s.Pos#3/9 # TargetModeAlreadySet/10 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_TargetModeAlreadySet], context[10] ) )
      continue;
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
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseCommandLine\4$2\1/4 (/7 s.Pos#3/9 # BadValue-MustBeNumber/10 e.Cycles#3/5 )/8 >/1
  if( ! refalrts::ident_term( identifiers[ident_BadValuem_MustBeNumber], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Cycles#3 as range 5
  //DEBUG: s.Pos#3: 9
  //DEBUG: e.Cycles#3: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Cycles#3/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#3/9 HalfReuse: 'o'/10 } 'p'/11 Tile{ HalfReuse: 't'/0 HalfReuse: 'i'/4 }"on --opt-tree-cycles expects number paramete"/12 Tile{ HalfReuse: 'r'/8 HalfReuse: )/1 ]] }
  refalrts::alloc_char(vm, context[11], 'p');
  refalrts::alloc_chars(vm, context[12], context[13], "on --opt-tree-cycles expects number paramete", 44);
  refalrts::reinit_char(context[10], 'o');
  refalrts::reinit_char(context[0], 't');
  refalrts::reinit_char(context[4], 'i');
  refalrts::reinit_char(context[8], 'r');
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[7], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[7], context[10] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseCommandLine_L4S2L1("ParseCommandLine\\4$2\\1", 831796028U, 262638704U, func_gen_ParseCommandLine_L4S2L1);


static refalrts::FnResult func_gen_ParseCommandLine_L4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & ParseCommandLine\4/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseCommandLine\4/4 (/7 t.new#1/9 e.new#2/5 )/8 e.new#3/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#3 as range 2
  context[10] = refalrts::tvar_left( context[9], context[5], context[6] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 5
  do {
    // </0 & ParseCommandLine\4/4 (/7 t.Config#2/9 )/8 e.FileNames#2/11 >/1
    context[11] = context[2];
    context[12] = context[3];
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.FileNames#2 as range 11
    //DEBUG: t.Config#2: 9
    //DEBUG: e.FileNames#2: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & ParseCommandLine\4/4 {REMOVED TILE} )/8 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/7 AsIs: t.Config#2/9 } Tile{ AsIs: e.FileNames#2/11 } Tile{ ]] }
    refalrts::reinit_ident(context[7], identifiers[ident_Success]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[7], context[10] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseCommandLine\4/4 (/7 t.Config#2/9 e.Errors#2/5 )/8 e.FileNames#2/2 >/1
  // closed e.Errors#2 as range 5
  // closed e.FileNames#2 as range 2
  //DEBUG: t.Config#2: 9
  //DEBUG: e.Errors#2: 5
  //DEBUG: e.FileNames#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} t.Config#2/9 {REMOVED TILE} )/8 e.FileNames#2/2 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: # Fails/0 HalfReuse: </4 HalfReuse: & Map@1/7 } Tile{ AsIs: e.Errors#2/5 } Tile{ AsIs: >/1 ]] }
  refalrts::reinit_ident(context[0], identifiers[ident_Fails]);
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_gen_Map_Z1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseCommandLine_L4("ParseCommandLine\\4", 831796028U, 262638704U, func_gen_ParseCommandLine_L4);


static refalrts::FnResult func_ParseCommandLine(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 403 elems
  refalrts::Iter context[403];
  refalrts::zeros( context, 403 );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </5 & GetOpt/6 (/7 (/8 # CppCompiler-Exe/9 # Required/10 'c'/11 (/12"cpp-command"/13 )/15 (/16"cpp-command-exe"/17 )/19 )/20 (/21 # CppCompiler-Lib/22 # Required/23 (/24"cpp-command-lib"/25 )/27 )/28 (/29 # CppFlag/30 # Required/31 'f'/32 (/33"cppflag"/34 )/36 )/37 (/38 # CppFlags/39 # Required/40 'F'/41 (/42"cppflags"/43 )/45 )/46 (/47 # DebugInfo/48 # None/49 'g'/50 (/51"debug-info"/52 )/54 )/55 (/56 # ErrorFile/57 # Required/58 'e'/59 (/60"error-file"/61 )/63 )/64 (/65 # GrammarCheck/66 # None/67 (/68"grammar-check"/69 )/71 )/72 (/73 # Incorporated/74 # Required/75 (/76"incorporated"/77 )/79 )/80 (/81 # MarkupContext/82 # None/83 (/84"markup-context"/85 )/87 )/88 (/89 # Opt/90 # Required/91 'O'/92 )/93 (/94 # Prefix/95 # Required/96 'p'/97 (/98"prefix"/99 )/101 )/102 (/103 # Reference/104 # Required/105 'r'/106 (/107"reference"/108 )/110 )/111 (/112 # RuntimeFolder/113 # Required/114 'D'/115 (/116"runtime-dir"/117 )/119 (/120"runtime-directory"/121 )/123 )/124 (/125 # SearchFolder/126 # Required/127 'd'/128 (/129"dir"/130 )/132 (/133"directory"/134 )/136 )/137 (/138 # TargetFileName/139 # Required/140 'o'/141 (/142"target-file"/143 )/145 )/146 (/147 # TargetMode-Exe/148 # None/149 'x'/150 (/151"makeexe"/152 )/154 )/155 (/156 # TargetMode-Lib/157 # None/158 'l'/159 (/160"makelib"/161 )/163 )/164 (/165 # TargetMode-R/166 # None/167 'R'/168 )/169 (/170 # TargetMode-C/171 # None/172 'C'/173 (/174"compile-only"/175 )/177 )/178 (/179 # TargetSuffix-Exe/180 # Required/181 (/182"targsuffix"/183 )/185 (/186"targetsuffix"/187 )/189 (/190"targsuf"/191 )/193 (/194"exesuffix"/195 )/197 (/198"exesuf"/199 )/201 )/202 (/203 # TargetSuffix-Lib/204 # Required/205 (/206"libsuffix"/207 )/209 (/210"libsuf"/211 )/213 )/214 (/215 # ChmodXCommand/216 # Required/217 (/218"chmod-x"/219 )/221 (/222"chmod-x-command"/223 )/225 )/226 (/227 # Prelude/228 # Required/229 (/230"prelude"/231 )/233 )/234 (/235 # ClassicMode/236 # None/237 (/238"classic"/239 )/241 )/242 (/243 # ExtendedMode/244 # None/245 (/246"extended"/247 )/249 )/250 (/251 # Log/252 # Required/253 (/254"log"/255 )/257 )/258 (/259 # TreeOptCycles/260 # Required/261 (/262"opt-tree-cycles"/263 )/265 )/266 (/267 # Incorporated/268 # Required/269 (/270"incorporated"/271 )/273 )/274 (/275 # Help/276 # None/277"h?"/278 (/280"help"/281 )/283 )/284 (/285 # Version/286 # None/287 'v'/288 (/289"version"/290 )/292 )/293 (/294 # KeepRasls/295 # None/296 (/297"keep-rasl"/298 )/300 (/301"keep-rasls"/302 )/304 )/305 (/306 # DontKeepRasls/307 # None/308 (/309"dont-keep-rasl"/310 )/312 (/313"dont-keep-rasls"/314 )/316 )/317 (/318 # TempDir/319 # Required/320 (/321"tmp-dir"/322 )/324 (/325"temp-dir"/326 )/328 )/329 (/330 # REF5RSL-Env/331 # None/332 (/333"ref5rsl"/334 )/336 )/337 (/338 # OverwriteExistRasls/339 # None/340 (/341"overwrite-exist-rasls"/342 )/344 (/345"overwrite-exist-rasl"/346 )/348 )/349 (/350 # DontOverwriteExistRasls/351 # None/352 (/353"dont-overwrite-exist-rasls"/354 )/356 (/357"dont-overwrite-exist-rasl"/358 )/360 )/361 (/362 # CppCompilerSuf-Exe/363 # Required/364 (/365"cpp-command-exe-suf"/366 )/368 )/369 (/370 # CppCompilerSuf-Lib/371 # Required/372 (/373"cpp-command-lib-suf"/374 )/376 )/377 (/378 # NoSources/379 # None/380 (/381"no-sources"/382 )/384 )/385 )/386 Tile{ AsIs: e.Arguments#1/2 } >/387 [*]/388 & Pipe$2\1/389 & ParseCommandLine\1/390 (/391 (/392 & MapReduce/393 & ParseCommandLine\2/394 )/395 (/396 & MapReduce/397 & ParseCommandLine\3/398 )/399 & ParseCommandLine\4/400 )/401 {*}/402 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_GetOpt]);
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_open_bracket(vm, context[8]);
  refalrts::alloc_ident(vm, context[9], identifiers[ident_CppCompilerm_Exe]);
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
  refalrts::alloc_ident(vm, context[22], identifiers[ident_CppCompilerm_Lib]);
  refalrts::alloc_ident(vm, context[23], identifiers[ident_Required]);
  refalrts::alloc_open_bracket(vm, context[24]);
  refalrts::alloc_chars(vm, context[25], context[26], "cpp-command-lib", 15);
  refalrts::alloc_close_bracket(vm, context[27]);
  refalrts::alloc_close_bracket(vm, context[28]);
  refalrts::alloc_open_bracket(vm, context[29]);
  refalrts::alloc_ident(vm, context[30], identifiers[ident_CppFlag]);
  refalrts::alloc_ident(vm, context[31], identifiers[ident_Required]);
  refalrts::alloc_char(vm, context[32], 'f');
  refalrts::alloc_open_bracket(vm, context[33]);
  refalrts::alloc_chars(vm, context[34], context[35], "cppflag", 7);
  refalrts::alloc_close_bracket(vm, context[36]);
  refalrts::alloc_close_bracket(vm, context[37]);
  refalrts::alloc_open_bracket(vm, context[38]);
  refalrts::alloc_ident(vm, context[39], identifiers[ident_CppFlags]);
  refalrts::alloc_ident(vm, context[40], identifiers[ident_Required]);
  refalrts::alloc_char(vm, context[41], 'F');
  refalrts::alloc_open_bracket(vm, context[42]);
  refalrts::alloc_chars(vm, context[43], context[44], "cppflags", 8);
  refalrts::alloc_close_bracket(vm, context[45]);
  refalrts::alloc_close_bracket(vm, context[46]);
  refalrts::alloc_open_bracket(vm, context[47]);
  refalrts::alloc_ident(vm, context[48], identifiers[ident_DebugInfo]);
  refalrts::alloc_ident(vm, context[49], identifiers[ident_None]);
  refalrts::alloc_char(vm, context[50], 'g');
  refalrts::alloc_open_bracket(vm, context[51]);
  refalrts::alloc_chars(vm, context[52], context[53], "debug-info", 10);
  refalrts::alloc_close_bracket(vm, context[54]);
  refalrts::alloc_close_bracket(vm, context[55]);
  refalrts::alloc_open_bracket(vm, context[56]);
  refalrts::alloc_ident(vm, context[57], identifiers[ident_ErrorFile]);
  refalrts::alloc_ident(vm, context[58], identifiers[ident_Required]);
  refalrts::alloc_char(vm, context[59], 'e');
  refalrts::alloc_open_bracket(vm, context[60]);
  refalrts::alloc_chars(vm, context[61], context[62], "error-file", 10);
  refalrts::alloc_close_bracket(vm, context[63]);
  refalrts::alloc_close_bracket(vm, context[64]);
  refalrts::alloc_open_bracket(vm, context[65]);
  refalrts::alloc_ident(vm, context[66], identifiers[ident_GrammarCheck]);
  refalrts::alloc_ident(vm, context[67], identifiers[ident_None]);
  refalrts::alloc_open_bracket(vm, context[68]);
  refalrts::alloc_chars(vm, context[69], context[70], "grammar-check", 13);
  refalrts::alloc_close_bracket(vm, context[71]);
  refalrts::alloc_close_bracket(vm, context[72]);
  refalrts::alloc_open_bracket(vm, context[73]);
  refalrts::alloc_ident(vm, context[74], identifiers[ident_Incorporated]);
  refalrts::alloc_ident(vm, context[75], identifiers[ident_Required]);
  refalrts::alloc_open_bracket(vm, context[76]);
  refalrts::alloc_chars(vm, context[77], context[78], "incorporated", 12);
  refalrts::alloc_close_bracket(vm, context[79]);
  refalrts::alloc_close_bracket(vm, context[80]);
  refalrts::alloc_open_bracket(vm, context[81]);
  refalrts::alloc_ident(vm, context[82], identifiers[ident_MarkupContext]);
  refalrts::alloc_ident(vm, context[83], identifiers[ident_None]);
  refalrts::alloc_open_bracket(vm, context[84]);
  refalrts::alloc_chars(vm, context[85], context[86], "markup-context", 14);
  refalrts::alloc_close_bracket(vm, context[87]);
  refalrts::alloc_close_bracket(vm, context[88]);
  refalrts::alloc_open_bracket(vm, context[89]);
  refalrts::alloc_ident(vm, context[90], identifiers[ident_Opt]);
  refalrts::alloc_ident(vm, context[91], identifiers[ident_Required]);
  refalrts::alloc_char(vm, context[92], 'O');
  refalrts::alloc_close_bracket(vm, context[93]);
  refalrts::alloc_open_bracket(vm, context[94]);
  refalrts::alloc_ident(vm, context[95], identifiers[ident_Prefix]);
  refalrts::alloc_ident(vm, context[96], identifiers[ident_Required]);
  refalrts::alloc_char(vm, context[97], 'p');
  refalrts::alloc_open_bracket(vm, context[98]);
  refalrts::alloc_chars(vm, context[99], context[100], "prefix", 6);
  refalrts::alloc_close_bracket(vm, context[101]);
  refalrts::alloc_close_bracket(vm, context[102]);
  refalrts::alloc_open_bracket(vm, context[103]);
  refalrts::alloc_ident(vm, context[104], identifiers[ident_Reference]);
  refalrts::alloc_ident(vm, context[105], identifiers[ident_Required]);
  refalrts::alloc_char(vm, context[106], 'r');
  refalrts::alloc_open_bracket(vm, context[107]);
  refalrts::alloc_chars(vm, context[108], context[109], "reference", 9);
  refalrts::alloc_close_bracket(vm, context[110]);
  refalrts::alloc_close_bracket(vm, context[111]);
  refalrts::alloc_open_bracket(vm, context[112]);
  refalrts::alloc_ident(vm, context[113], identifiers[ident_RuntimeFolder]);
  refalrts::alloc_ident(vm, context[114], identifiers[ident_Required]);
  refalrts::alloc_char(vm, context[115], 'D');
  refalrts::alloc_open_bracket(vm, context[116]);
  refalrts::alloc_chars(vm, context[117], context[118], "runtime-dir", 11);
  refalrts::alloc_close_bracket(vm, context[119]);
  refalrts::alloc_open_bracket(vm, context[120]);
  refalrts::alloc_chars(vm, context[121], context[122], "runtime-directory", 17);
  refalrts::alloc_close_bracket(vm, context[123]);
  refalrts::alloc_close_bracket(vm, context[124]);
  refalrts::alloc_open_bracket(vm, context[125]);
  refalrts::alloc_ident(vm, context[126], identifiers[ident_SearchFolder]);
  refalrts::alloc_ident(vm, context[127], identifiers[ident_Required]);
  refalrts::alloc_char(vm, context[128], 'd');
  refalrts::alloc_open_bracket(vm, context[129]);
  refalrts::alloc_chars(vm, context[130], context[131], "dir", 3);
  refalrts::alloc_close_bracket(vm, context[132]);
  refalrts::alloc_open_bracket(vm, context[133]);
  refalrts::alloc_chars(vm, context[134], context[135], "directory", 9);
  refalrts::alloc_close_bracket(vm, context[136]);
  refalrts::alloc_close_bracket(vm, context[137]);
  refalrts::alloc_open_bracket(vm, context[138]);
  refalrts::alloc_ident(vm, context[139], identifiers[ident_TargetFileName]);
  refalrts::alloc_ident(vm, context[140], identifiers[ident_Required]);
  refalrts::alloc_char(vm, context[141], 'o');
  refalrts::alloc_open_bracket(vm, context[142]);
  refalrts::alloc_chars(vm, context[143], context[144], "target-file", 11);
  refalrts::alloc_close_bracket(vm, context[145]);
  refalrts::alloc_close_bracket(vm, context[146]);
  refalrts::alloc_open_bracket(vm, context[147]);
  refalrts::alloc_ident(vm, context[148], identifiers[ident_TargetModem_Exe]);
  refalrts::alloc_ident(vm, context[149], identifiers[ident_None]);
  refalrts::alloc_char(vm, context[150], 'x');
  refalrts::alloc_open_bracket(vm, context[151]);
  refalrts::alloc_chars(vm, context[152], context[153], "makeexe", 7);
  refalrts::alloc_close_bracket(vm, context[154]);
  refalrts::alloc_close_bracket(vm, context[155]);
  refalrts::alloc_open_bracket(vm, context[156]);
  refalrts::alloc_ident(vm, context[157], identifiers[ident_TargetModem_Lib]);
  refalrts::alloc_ident(vm, context[158], identifiers[ident_None]);
  refalrts::alloc_char(vm, context[159], 'l');
  refalrts::alloc_open_bracket(vm, context[160]);
  refalrts::alloc_chars(vm, context[161], context[162], "makelib", 7);
  refalrts::alloc_close_bracket(vm, context[163]);
  refalrts::alloc_close_bracket(vm, context[164]);
  refalrts::alloc_open_bracket(vm, context[165]);
  refalrts::alloc_ident(vm, context[166], identifiers[ident_TargetModem_R]);
  refalrts::alloc_ident(vm, context[167], identifiers[ident_None]);
  refalrts::alloc_char(vm, context[168], 'R');
  refalrts::alloc_close_bracket(vm, context[169]);
  refalrts::alloc_open_bracket(vm, context[170]);
  refalrts::alloc_ident(vm, context[171], identifiers[ident_TargetModem_C]);
  refalrts::alloc_ident(vm, context[172], identifiers[ident_None]);
  refalrts::alloc_char(vm, context[173], 'C');
  refalrts::alloc_open_bracket(vm, context[174]);
  refalrts::alloc_chars(vm, context[175], context[176], "compile-only", 12);
  refalrts::alloc_close_bracket(vm, context[177]);
  refalrts::alloc_close_bracket(vm, context[178]);
  refalrts::alloc_open_bracket(vm, context[179]);
  refalrts::alloc_ident(vm, context[180], identifiers[ident_TargetSuffixm_Exe]);
  refalrts::alloc_ident(vm, context[181], identifiers[ident_Required]);
  refalrts::alloc_open_bracket(vm, context[182]);
  refalrts::alloc_chars(vm, context[183], context[184], "targsuffix", 10);
  refalrts::alloc_close_bracket(vm, context[185]);
  refalrts::alloc_open_bracket(vm, context[186]);
  refalrts::alloc_chars(vm, context[187], context[188], "targetsuffix", 12);
  refalrts::alloc_close_bracket(vm, context[189]);
  refalrts::alloc_open_bracket(vm, context[190]);
  refalrts::alloc_chars(vm, context[191], context[192], "targsuf", 7);
  refalrts::alloc_close_bracket(vm, context[193]);
  refalrts::alloc_open_bracket(vm, context[194]);
  refalrts::alloc_chars(vm, context[195], context[196], "exesuffix", 9);
  refalrts::alloc_close_bracket(vm, context[197]);
  refalrts::alloc_open_bracket(vm, context[198]);
  refalrts::alloc_chars(vm, context[199], context[200], "exesuf", 6);
  refalrts::alloc_close_bracket(vm, context[201]);
  refalrts::alloc_close_bracket(vm, context[202]);
  refalrts::alloc_open_bracket(vm, context[203]);
  refalrts::alloc_ident(vm, context[204], identifiers[ident_TargetSuffixm_Lib]);
  refalrts::alloc_ident(vm, context[205], identifiers[ident_Required]);
  refalrts::alloc_open_bracket(vm, context[206]);
  refalrts::alloc_chars(vm, context[207], context[208], "libsuffix", 9);
  refalrts::alloc_close_bracket(vm, context[209]);
  refalrts::alloc_open_bracket(vm, context[210]);
  refalrts::alloc_chars(vm, context[211], context[212], "libsuf", 6);
  refalrts::alloc_close_bracket(vm, context[213]);
  refalrts::alloc_close_bracket(vm, context[214]);
  refalrts::alloc_open_bracket(vm, context[215]);
  refalrts::alloc_ident(vm, context[216], identifiers[ident_ChmodXCommand]);
  refalrts::alloc_ident(vm, context[217], identifiers[ident_Required]);
  refalrts::alloc_open_bracket(vm, context[218]);
  refalrts::alloc_chars(vm, context[219], context[220], "chmod-x", 7);
  refalrts::alloc_close_bracket(vm, context[221]);
  refalrts::alloc_open_bracket(vm, context[222]);
  refalrts::alloc_chars(vm, context[223], context[224], "chmod-x-command", 15);
  refalrts::alloc_close_bracket(vm, context[225]);
  refalrts::alloc_close_bracket(vm, context[226]);
  refalrts::alloc_open_bracket(vm, context[227]);
  refalrts::alloc_ident(vm, context[228], identifiers[ident_Prelude]);
  refalrts::alloc_ident(vm, context[229], identifiers[ident_Required]);
  refalrts::alloc_open_bracket(vm, context[230]);
  refalrts::alloc_chars(vm, context[231], context[232], "prelude", 7);
  refalrts::alloc_close_bracket(vm, context[233]);
  refalrts::alloc_close_bracket(vm, context[234]);
  refalrts::alloc_open_bracket(vm, context[235]);
  refalrts::alloc_ident(vm, context[236], identifiers[ident_ClassicMode]);
  refalrts::alloc_ident(vm, context[237], identifiers[ident_None]);
  refalrts::alloc_open_bracket(vm, context[238]);
  refalrts::alloc_chars(vm, context[239], context[240], "classic", 7);
  refalrts::alloc_close_bracket(vm, context[241]);
  refalrts::alloc_close_bracket(vm, context[242]);
  refalrts::alloc_open_bracket(vm, context[243]);
  refalrts::alloc_ident(vm, context[244], identifiers[ident_ExtendedMode]);
  refalrts::alloc_ident(vm, context[245], identifiers[ident_None]);
  refalrts::alloc_open_bracket(vm, context[246]);
  refalrts::alloc_chars(vm, context[247], context[248], "extended", 8);
  refalrts::alloc_close_bracket(vm, context[249]);
  refalrts::alloc_close_bracket(vm, context[250]);
  refalrts::alloc_open_bracket(vm, context[251]);
  refalrts::alloc_ident(vm, context[252], identifiers[ident_Log]);
  refalrts::alloc_ident(vm, context[253], identifiers[ident_Required]);
  refalrts::alloc_open_bracket(vm, context[254]);
  refalrts::alloc_chars(vm, context[255], context[256], "log", 3);
  refalrts::alloc_close_bracket(vm, context[257]);
  refalrts::alloc_close_bracket(vm, context[258]);
  refalrts::alloc_open_bracket(vm, context[259]);
  refalrts::alloc_ident(vm, context[260], identifiers[ident_TreeOptCycles]);
  refalrts::alloc_ident(vm, context[261], identifiers[ident_Required]);
  refalrts::alloc_open_bracket(vm, context[262]);
  refalrts::alloc_chars(vm, context[263], context[264], "opt-tree-cycles", 15);
  refalrts::alloc_close_bracket(vm, context[265]);
  refalrts::alloc_close_bracket(vm, context[266]);
  refalrts::alloc_open_bracket(vm, context[267]);
  refalrts::alloc_ident(vm, context[268], identifiers[ident_Incorporated]);
  refalrts::alloc_ident(vm, context[269], identifiers[ident_Required]);
  refalrts::alloc_open_bracket(vm, context[270]);
  refalrts::alloc_chars(vm, context[271], context[272], "incorporated", 12);
  refalrts::alloc_close_bracket(vm, context[273]);
  refalrts::alloc_close_bracket(vm, context[274]);
  refalrts::alloc_open_bracket(vm, context[275]);
  refalrts::alloc_ident(vm, context[276], identifiers[ident_Help]);
  refalrts::alloc_ident(vm, context[277], identifiers[ident_None]);
  refalrts::alloc_chars(vm, context[278], context[279], "h?", 2);
  refalrts::alloc_open_bracket(vm, context[280]);
  refalrts::alloc_chars(vm, context[281], context[282], "help", 4);
  refalrts::alloc_close_bracket(vm, context[283]);
  refalrts::alloc_close_bracket(vm, context[284]);
  refalrts::alloc_open_bracket(vm, context[285]);
  refalrts::alloc_ident(vm, context[286], identifiers[ident_Version]);
  refalrts::alloc_ident(vm, context[287], identifiers[ident_None]);
  refalrts::alloc_char(vm, context[288], 'v');
  refalrts::alloc_open_bracket(vm, context[289]);
  refalrts::alloc_chars(vm, context[290], context[291], "version", 7);
  refalrts::alloc_close_bracket(vm, context[292]);
  refalrts::alloc_close_bracket(vm, context[293]);
  refalrts::alloc_open_bracket(vm, context[294]);
  refalrts::alloc_ident(vm, context[295], identifiers[ident_KeepRasls]);
  refalrts::alloc_ident(vm, context[296], identifiers[ident_None]);
  refalrts::alloc_open_bracket(vm, context[297]);
  refalrts::alloc_chars(vm, context[298], context[299], "keep-rasl", 9);
  refalrts::alloc_close_bracket(vm, context[300]);
  refalrts::alloc_open_bracket(vm, context[301]);
  refalrts::alloc_chars(vm, context[302], context[303], "keep-rasls", 10);
  refalrts::alloc_close_bracket(vm, context[304]);
  refalrts::alloc_close_bracket(vm, context[305]);
  refalrts::alloc_open_bracket(vm, context[306]);
  refalrts::alloc_ident(vm, context[307], identifiers[ident_DontKeepRasls]);
  refalrts::alloc_ident(vm, context[308], identifiers[ident_None]);
  refalrts::alloc_open_bracket(vm, context[309]);
  refalrts::alloc_chars(vm, context[310], context[311], "dont-keep-rasl", 14);
  refalrts::alloc_close_bracket(vm, context[312]);
  refalrts::alloc_open_bracket(vm, context[313]);
  refalrts::alloc_chars(vm, context[314], context[315], "dont-keep-rasls", 15);
  refalrts::alloc_close_bracket(vm, context[316]);
  refalrts::alloc_close_bracket(vm, context[317]);
  refalrts::alloc_open_bracket(vm, context[318]);
  refalrts::alloc_ident(vm, context[319], identifiers[ident_TempDir]);
  refalrts::alloc_ident(vm, context[320], identifiers[ident_Required]);
  refalrts::alloc_open_bracket(vm, context[321]);
  refalrts::alloc_chars(vm, context[322], context[323], "tmp-dir", 7);
  refalrts::alloc_close_bracket(vm, context[324]);
  refalrts::alloc_open_bracket(vm, context[325]);
  refalrts::alloc_chars(vm, context[326], context[327], "temp-dir", 8);
  refalrts::alloc_close_bracket(vm, context[328]);
  refalrts::alloc_close_bracket(vm, context[329]);
  refalrts::alloc_open_bracket(vm, context[330]);
  refalrts::alloc_ident(vm, context[331], identifiers[ident_REF5RSLm_Env]);
  refalrts::alloc_ident(vm, context[332], identifiers[ident_None]);
  refalrts::alloc_open_bracket(vm, context[333]);
  refalrts::alloc_chars(vm, context[334], context[335], "ref5rsl", 7);
  refalrts::alloc_close_bracket(vm, context[336]);
  refalrts::alloc_close_bracket(vm, context[337]);
  refalrts::alloc_open_bracket(vm, context[338]);
  refalrts::alloc_ident(vm, context[339], identifiers[ident_OverwriteExistRasls]);
  refalrts::alloc_ident(vm, context[340], identifiers[ident_None]);
  refalrts::alloc_open_bracket(vm, context[341]);
  refalrts::alloc_chars(vm, context[342], context[343], "overwrite-exist-rasls", 21);
  refalrts::alloc_close_bracket(vm, context[344]);
  refalrts::alloc_open_bracket(vm, context[345]);
  refalrts::alloc_chars(vm, context[346], context[347], "overwrite-exist-rasl", 20);
  refalrts::alloc_close_bracket(vm, context[348]);
  refalrts::alloc_close_bracket(vm, context[349]);
  refalrts::alloc_open_bracket(vm, context[350]);
  refalrts::alloc_ident(vm, context[351], identifiers[ident_DontOverwriteExistRasls]);
  refalrts::alloc_ident(vm, context[352], identifiers[ident_None]);
  refalrts::alloc_open_bracket(vm, context[353]);
  refalrts::alloc_chars(vm, context[354], context[355], "dont-overwrite-exist-rasls", 26);
  refalrts::alloc_close_bracket(vm, context[356]);
  refalrts::alloc_open_bracket(vm, context[357]);
  refalrts::alloc_chars(vm, context[358], context[359], "dont-overwrite-exist-rasl", 25);
  refalrts::alloc_close_bracket(vm, context[360]);
  refalrts::alloc_close_bracket(vm, context[361]);
  refalrts::alloc_open_bracket(vm, context[362]);
  refalrts::alloc_ident(vm, context[363], identifiers[ident_CppCompilerSufm_Exe]);
  refalrts::alloc_ident(vm, context[364], identifiers[ident_Required]);
  refalrts::alloc_open_bracket(vm, context[365]);
  refalrts::alloc_chars(vm, context[366], context[367], "cpp-command-exe-suf", 19);
  refalrts::alloc_close_bracket(vm, context[368]);
  refalrts::alloc_close_bracket(vm, context[369]);
  refalrts::alloc_open_bracket(vm, context[370]);
  refalrts::alloc_ident(vm, context[371], identifiers[ident_CppCompilerSufm_Lib]);
  refalrts::alloc_ident(vm, context[372], identifiers[ident_Required]);
  refalrts::alloc_open_bracket(vm, context[373]);
  refalrts::alloc_chars(vm, context[374], context[375], "cpp-command-lib-suf", 19);
  refalrts::alloc_close_bracket(vm, context[376]);
  refalrts::alloc_close_bracket(vm, context[377]);
  refalrts::alloc_open_bracket(vm, context[378]);
  refalrts::alloc_ident(vm, context[379], identifiers[ident_NoSources]);
  refalrts::alloc_ident(vm, context[380], identifiers[ident_None]);
  refalrts::alloc_open_bracket(vm, context[381]);
  refalrts::alloc_chars(vm, context[382], context[383], "no-sources", 10);
  refalrts::alloc_close_bracket(vm, context[384]);
  refalrts::alloc_close_bracket(vm, context[385]);
  refalrts::alloc_close_bracket(vm, context[386]);
  refalrts::alloc_close_call(vm, context[387]);
  refalrts::alloc_closure_head(vm, context[388]);
  refalrts::alloc_name(vm, context[389], functions[efunc_gen_Pipe_S2L1]);
  refalrts::alloc_name(vm, context[390], functions[efunc_gen_ParseCommandLine_L1]);
  refalrts::alloc_open_bracket(vm, context[391]);
  refalrts::alloc_open_bracket(vm, context[392]);
  refalrts::alloc_name(vm, context[393], functions[efunc_MapReduce]);
  refalrts::alloc_name(vm, context[394], functions[efunc_gen_ParseCommandLine_L2]);
  refalrts::alloc_close_bracket(vm, context[395]);
  refalrts::alloc_open_bracket(vm, context[396]);
  refalrts::alloc_name(vm, context[397], functions[efunc_MapReduce]);
  refalrts::alloc_name(vm, context[398], functions[efunc_gen_ParseCommandLine_L3]);
  refalrts::alloc_close_bracket(vm, context[399]);
  refalrts::alloc_name(vm, context[400], functions[efunc_gen_ParseCommandLine_L4]);
  refalrts::alloc_close_bracket(vm, context[401]);
  refalrts::alloc_unwrapped_closure(vm, context[402], context[388]);
  refalrts::update_name(context[4], functions[efunc_Fetch]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[391], context[401] );
  refalrts::link_brackets( context[396], context[399] );
  refalrts::link_brackets( context[392], context[395] );
  refalrts::push_stack( vm, context[387] );
  refalrts::push_stack( vm, context[5] );
  refalrts::link_brackets( context[7], context[386] );
  refalrts::link_brackets( context[378], context[385] );
  refalrts::link_brackets( context[381], context[384] );
  refalrts::link_brackets( context[370], context[377] );
  refalrts::link_brackets( context[373], context[376] );
  refalrts::link_brackets( context[362], context[369] );
  refalrts::link_brackets( context[365], context[368] );
  refalrts::link_brackets( context[350], context[361] );
  refalrts::link_brackets( context[357], context[360] );
  refalrts::link_brackets( context[353], context[356] );
  refalrts::link_brackets( context[338], context[349] );
  refalrts::link_brackets( context[345], context[348] );
  refalrts::link_brackets( context[341], context[344] );
  refalrts::link_brackets( context[330], context[337] );
  refalrts::link_brackets( context[333], context[336] );
  refalrts::link_brackets( context[318], context[329] );
  refalrts::link_brackets( context[325], context[328] );
  refalrts::link_brackets( context[321], context[324] );
  refalrts::link_brackets( context[306], context[317] );
  refalrts::link_brackets( context[313], context[316] );
  refalrts::link_brackets( context[309], context[312] );
  refalrts::link_brackets( context[294], context[305] );
  refalrts::link_brackets( context[301], context[304] );
  refalrts::link_brackets( context[297], context[300] );
  refalrts::link_brackets( context[285], context[293] );
  refalrts::link_brackets( context[289], context[292] );
  refalrts::link_brackets( context[275], context[284] );
  refalrts::link_brackets( context[280], context[283] );
  refalrts::link_brackets( context[267], context[274] );
  refalrts::link_brackets( context[270], context[273] );
  refalrts::link_brackets( context[259], context[266] );
  refalrts::link_brackets( context[262], context[265] );
  refalrts::link_brackets( context[251], context[258] );
  refalrts::link_brackets( context[254], context[257] );
  refalrts::link_brackets( context[243], context[250] );
  refalrts::link_brackets( context[246], context[249] );
  refalrts::link_brackets( context[235], context[242] );
  refalrts::link_brackets( context[238], context[241] );
  refalrts::link_brackets( context[227], context[234] );
  refalrts::link_brackets( context[230], context[233] );
  refalrts::link_brackets( context[215], context[226] );
  refalrts::link_brackets( context[222], context[225] );
  refalrts::link_brackets( context[218], context[221] );
  refalrts::link_brackets( context[203], context[214] );
  refalrts::link_brackets( context[210], context[213] );
  refalrts::link_brackets( context[206], context[209] );
  refalrts::link_brackets( context[179], context[202] );
  refalrts::link_brackets( context[198], context[201] );
  refalrts::link_brackets( context[194], context[197] );
  refalrts::link_brackets( context[190], context[193] );
  refalrts::link_brackets( context[186], context[189] );
  refalrts::link_brackets( context[182], context[185] );
  refalrts::link_brackets( context[170], context[178] );
  refalrts::link_brackets( context[174], context[177] );
  refalrts::link_brackets( context[165], context[169] );
  refalrts::link_brackets( context[156], context[164] );
  refalrts::link_brackets( context[160], context[163] );
  refalrts::link_brackets( context[147], context[155] );
  refalrts::link_brackets( context[151], context[154] );
  refalrts::link_brackets( context[138], context[146] );
  refalrts::link_brackets( context[142], context[145] );
  refalrts::link_brackets( context[125], context[137] );
  refalrts::link_brackets( context[133], context[136] );
  refalrts::link_brackets( context[129], context[132] );
  refalrts::link_brackets( context[112], context[124] );
  refalrts::link_brackets( context[120], context[123] );
  refalrts::link_brackets( context[116], context[119] );
  refalrts::link_brackets( context[103], context[111] );
  refalrts::link_brackets( context[107], context[110] );
  refalrts::link_brackets( context[94], context[102] );
  refalrts::link_brackets( context[98], context[101] );
  refalrts::link_brackets( context[89], context[93] );
  refalrts::link_brackets( context[81], context[88] );
  refalrts::link_brackets( context[84], context[87] );
  refalrts::link_brackets( context[73], context[80] );
  refalrts::link_brackets( context[76], context[79] );
  refalrts::link_brackets( context[65], context[72] );
  refalrts::link_brackets( context[68], context[71] );
  refalrts::link_brackets( context[56], context[64] );
  refalrts::link_brackets( context[60], context[63] );
  refalrts::link_brackets( context[47], context[55] );
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
  res = refalrts::splice_evar( res, context[387], context[402] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[386] );
  refalrts::use( res );
  refalrts::wrap_closure( context[402] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseCommandLine("ParseCommandLine", 0U, 0U, func_ParseCommandLine);


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

static refalrts::NativeReference nat_ref_gen_Update_B1("Update:1", 831796028U, 262638704U, func_gen_Update_B1);


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

static refalrts::NativeReference nat_ref_Update("Update", 831796028U, 262638704U, func_Update);


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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Prout/4 HalfReuse: 's'/1 }"refc-core flags... filenames...\nsrefc-core @flag-list-file.txt\n\n-c, --cpp-command, --cpp-command-exe command-line\n        C++ command line prefix for building executable module\n--cpp-command-lib command-line\n        C++ command line prefix for building library module\n-f, --cpp-flag flag\n        Additional flag for C++ compiler, quoted in command line\n-F, --cpp-flags flags\n        Additional flags for C++ compiler, don\'t quoted in command line\n-g, --debug-info\n        Information of variable table for step-by-step debugger\n-e, --error-file filename\n        Compiler creates empty file with this name if compilation failed\n--grammar-check\n        Dont compile sources, only syntax (w/o semantic) check for sources\n--incorporated filename\n        Marks that a module with the name is statically linked to this module\n--markup-context\n        Save catched variable names in closure content\n-O keys[change]\n        Optimization keys:\n          -OP - conjoint pattern optimization\n          -OQ - extended conjoint pattern optimization\n          -OR - building result optimization\n          -Od - use direct code generation instead interpretation code,\n                compile functions to C++ instead RASL\n          -OT - tree optimization (expands direct calls for closures)\n          -OD - drive functions with $DRIVE, inline functions with $INLINE\n          -OI - inline functions with $DRIVE and $INLINE\n          -OS - specialize functions with $SPEC\n        Flags D, I, S implicitly contain T\n        Change key mode (optional):\n          -O...+ - set the flags with previous setted\n          -O...- - reject the flags from previous setted\n          -O...= - assign the flags, previous setted will be skipped\n-p, --prefix prefix-name\n        set prefix file name\n-r, --reference reference-name\n        Compiled module depends from the reference\n-D, --runtime-dir, --runtime-directory dir\n        Add the directory to search list and include list for C++ compiler\n-d, --dir, --directory dir\n        Add the directory to search list\n-o, --target-file target-file-name\n        Name of target file\n-x, --makeexe\n        Compile to executable file\n-l, --makelib\n        Compile to library file (with or w/o native code)\n-R      Compile to library RASL module (w/o native code)\n-C, --compile-only\n        Compile sources w/o linking\n--targsuffix, --targetsuffix, --targsuf, --exesuffix, --exesuf suffix\n        Suffix for executable file (for example, .exe)\n--libsuffix, --libsuf suffix\n        Suffix for library file (for example, .dll or .so)\n--chmod-x, --chmod-x-command command\n        Must be empty on Windws, \"chmod +x\" on POSIX\n--prelude filename.refi\n        Prelude file with builtin functions declarations\n--classic, --extended\n        Switch Refal-5-lambda syntax analyzer to full compatibility\n        with classic Refal-5 or not. Default is --extended\n--log logfile.log\n        Logs compilation process. Compiler writes to log syntax tree\n        after desugaring, after tree optimization, high-leve RASL\n--opt-tree-cycles number\n        Max number of tree optimization passes\n--help  Print this help\n--version\n        Print version\n--keep-rasl, --keep-rasls, --dont-keep-rasl, --dont-keep-rasls\n        Save or don\'t save temporary .rasl after compilation\n--tmp-dir, --temp-dir directory\n        Directory for intermediate .rasl files, current is default\n--ref5rsl\n        Use environment variable REF5RSL as search path\n--overwrite-exist-rasls, --dont-overwrite-exist-rasls,\n--overwrite-exist-rasl, --dont-overwrite-exist-rasl\n        If tmp-dir already contain file with name that being produced\n        new file use new name\n--no-sources\n        Don\'t show error when there are no sources in command line\n\nLong keys with params may be used with equation:\n--tmp-dir dirname or --tmp-dir=dirname\n\nEach line of arg-list-file.txt is interpreted as independed key\n"/5 >/7 Tile{ ]] }
  refalrts::alloc_chars(vm, context[5], context[6], "refc-core flags... filenames...\nsrefc-core @flag-list-file.txt\n\n-c, --cpp-command, --cpp-command-exe command-line\n        C++ command line prefix for building executable module\n--cpp-command-lib command-line\n        C++ command line prefix for building library module\n-f, --cpp-flag flag\n        Additional flag for C++ compiler, quoted in command line\n-F, --cpp-flags flags\n        Additional flags for C++ compiler, don\'t quoted in command line\n-g, --debug-info\n        Information of variable table for step-by-step debugger\n-e, --error-file filename\n        Compiler creates empty file with this name if compilation failed\n--grammar-check\n        Dont compile sources, only syntax (w/o semantic) check for sources\n--incorporated filename\n        Marks that a module with the name is statically linked to this module\n--markup-context\n        Save catched variable names in closure content\n-O keys[change]\n        Optimization keys:\n          -OP - conjoint pattern optimization\n          -OQ - extended conjoint pattern optimization\n          -OR - building result optimization\n          -Od - use direct code generation instead interpretation code,\n                compile functions to C++ instead RASL\n          -OT - tree optimization (expands direct calls for closures)\n          -OD - drive functions with $DRIVE, inline functions with $INLINE\n          -OI - inline functions with $DRIVE and $INLINE\n          -OS - specialize functions with $SPEC\n        Flags D, I, S implicitly contain T\n        Change key mode (optional):\n          -O...+ - set the flags with previous setted\n          -O...- - reject the flags from previous setted\n          -O...= - assign the flags, previous setted will be skipped\n-p, --prefix prefix-name\n        set prefix file name\n-r, --reference reference-name\n        Compiled module depends from the reference\n-D, --runtime-dir, --runtime-directory dir\n        Add the directory to search list and include list for C++ compiler\n-d, --dir, --directory dir\n        Add the directory to search list\n-o, --target-file target-file-name\n        Name of target file\n-x, --makeexe\n        Compile to executable file\n-l, --makelib\n        Compile to library file (with or w/o native code)\n-R      Compile to library RASL module (w/o native code)\n-C, --compile-only\n        Compile sources w/o linking\n--targsuffix, --targetsuffix, --targsuf, --exesuffix, --exesuf suffix\n        Suffix for executable file (for example, .exe)\n--libsuffix, --libsuf suffix\n        Suffix for library file (for example, .dll or .so)\n--chmod-x, --chmod-x-command command\n        Must be empty on Windws, \"chmod +x\" on POSIX\n--prelude filename.refi\n        Prelude file with builtin functions declarations\n--classic, --extended\n        Switch Refal-5-lambda syntax analyzer to full compatibility\n        with classic Refal-5 or not. Default is --extended\n--log logfile.log\n        Logs compilation process. Compiler writes to log syntax tree\n        after desugaring, after tree optimization, high-leve RASL\n--opt-tree-cycles number\n        Max number of tree optimization passes\n--help  Print this help\n--version\n        Print version\n--keep-rasl, --keep-rasls, --dont-keep-rasl, --dont-keep-rasls\n        Save or don\'t save temporary .rasl after compilation\n--tmp-dir, --temp-dir directory\n        Directory for intermediate .rasl files, current is default\n--ref5rsl\n        Use environment variable REF5RSL as search path\n--overwrite-exist-rasls, --dont-overwrite-exist-rasls,\n--overwrite-exist-rasl, --dont-overwrite-exist-rasl\n        If tmp-dir already contain file with name that being produced\n        new file use new name\n--no-sources\n        Don\'t show error when there are no sources in command line\n\nLong keys with params may be used with equation:\n--tmp-dir dirname or --tmp-dir=dirname\n\nEach line of arg-list-file.txt is interpreted as independed key\n", 3878);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_Prout]);
  refalrts::reinit_char(context[1], 's');
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrintHelp("PrintHelp", 831796028U, 262638704U, func_PrintHelp);


static refalrts::FnResult func_gen_Map_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
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
      // </0 & Map@1/4 (/7 s.new#3/13 s.new#4/14 e.new#5/11 )/8 e.new#6/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      // closed e.new#6 as range 9
      if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
        continue;
      if( ! refalrts::svar_left( context[14], context[11], context[12] ) )
        continue;
      // closed e.new#5 as range 11
      do {
        // </0 & Map@1/4 (/7 s.Pos#3/13 # NoRequiredParam/14 e.1#0/15 )/8 e.Tail#1/17 >/1
        context[15] = context[11];
        context[16] = context[12];
        context[17] = context[9];
        context[18] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_NoRequiredParam], context[14] ) )
          continue;
        // closed e.1#0 as range 15
        // closed e.Tail#1 as range 17
        //DEBUG: s.Pos#3: 13
        //DEBUG: e.1#0: 15
        //DEBUG: e.Tail#1: 17

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#3/13 HalfReuse: 'o'/14 } Tile{ HalfReuse: 'p'/4 }"tion "/19 Tile{ AsIs: e.1#0/15 }" expects parameter"/21 )/23 Tile{ AsIs: </0 } Tile{ HalfReuse: & Map@1/8 AsIs: e.Tail#1/17 AsIs: >/1 ]] }
        refalrts::alloc_chars(vm, context[19], context[20], "tion ", 5);
        refalrts::alloc_chars(vm, context[21], context[22], " expects parameter", 18);
        refalrts::alloc_close_bracket(vm, context[23]);
        refalrts::reinit_char(context[14], 'o');
        refalrts::reinit_char(context[4], 'p');
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z1]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[23] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[0], context[0] );
        res = refalrts::splice_evar( res, context[21], context[23] );
        res = refalrts::splice_evar( res, context[15], context[16] );
        res = refalrts::splice_evar( res, context[19], context[20] );
        res = refalrts::splice_evar( res, context[4], context[4] );
        res = refalrts::splice_evar( res, context[7], context[14] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@1/4 (/7 s.Pos#3/13 # UnknownShortOption/14 s.Option#3/19 )/8 e.Tail#1/17 >/1
        context[15] = context[11];
        context[16] = context[12];
        context[17] = context[9];
        context[18] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_UnknownShortOption], context[14] ) )
          continue;
        // closed e.Tail#1 as range 17
        if( ! refalrts::svar_left( context[19], context[15], context[16] ) )
          continue;
        if( ! refalrts::empty_seq( context[15], context[16] ) )
          continue;
        //DEBUG: s.Pos#3: 13
        //DEBUG: e.Tail#1: 17
        //DEBUG: s.Option#3: 19

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#3/13 HalfReuse: 'u'/14 } Tile{ HalfReuse: 'n'/4 }"known option -"/20 Tile{ AsIs: s.Option#3/19 } )/22 Tile{ AsIs: </0 } Tile{ HalfReuse: & Map@1/8 AsIs: e.Tail#1/17 AsIs: >/1 ]] }
        refalrts::alloc_chars(vm, context[20], context[21], "known option -", 14);
        refalrts::alloc_close_bracket(vm, context[22]);
        refalrts::reinit_char(context[14], 'u');
        refalrts::reinit_char(context[4], 'n');
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z1]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[22] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[0], context[0] );
        res = refalrts::splice_evar( res, context[22], context[22] );
        res = refalrts::splice_evar( res, context[19], context[19] );
        res = refalrts::splice_evar( res, context[20], context[21] );
        res = refalrts::splice_evar( res, context[4], context[4] );
        res = refalrts::splice_evar( res, context[7], context[14] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@1/4 (/7 s.Pos#3/13 # UnknownLongOption/14 e.1#0/15 )/8 e.Tail#1/17 >/1
        context[15] = context[11];
        context[16] = context[12];
        context[17] = context[9];
        context[18] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_UnknownLongOption], context[14] ) )
          continue;
        // closed e.1#0 as range 15
        // closed e.Tail#1 as range 17
        //DEBUG: s.Pos#3: 13
        //DEBUG: e.1#0: 15
        //DEBUG: e.Tail#1: 17

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#3/13 HalfReuse: 'u'/14 } Tile{ HalfReuse: 'n'/4 }"known option --"/19 Tile{ AsIs: e.1#0/15 } )/21 Tile{ AsIs: </0 } Tile{ HalfReuse: & Map@1/8 AsIs: e.Tail#1/17 AsIs: >/1 ]] }
        refalrts::alloc_chars(vm, context[19], context[20], "known option --", 15);
        refalrts::alloc_close_bracket(vm, context[21]);
        refalrts::reinit_char(context[14], 'u');
        refalrts::reinit_char(context[4], 'n');
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z1]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[21] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[0], context[0] );
        res = refalrts::splice_evar( res, context[21], context[21] );
        res = refalrts::splice_evar( res, context[15], context[16] );
        res = refalrts::splice_evar( res, context[19], context[20] );
        res = refalrts::splice_evar( res, context[4], context[4] );
        res = refalrts::splice_evar( res, context[7], context[14] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@1/4 (/7 s.Pos#3/13 # BadValue-Opt/14 e.1#0/15 )/8 e.Tail#1/17 >/1
        context[15] = context[11];
        context[16] = context[12];
        context[17] = context[9];
        context[18] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_BadValuem_Opt], context[14] ) )
          continue;
        // closed e.1#0 as range 15
        // closed e.Tail#1 as range 17
        //DEBUG: s.Pos#3: 13
        //DEBUG: e.1#0: 15
        //DEBUG: e.Tail#1: 17

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#3/13 HalfReuse: 'o'/14 } Tile{ HalfReuse: 'p'/4 }"tion -O expects \'d\', \'C\', \'D\', \'I\', \'P\', \'R\', \'S\', \'T\' or it\'s combination, but got \'"/19 Tile{ AsIs: e.1#0/15 } '\''/21 )/22 Tile{ AsIs: </0 } Tile{ HalfReuse: & Map@1/8 AsIs: e.Tail#1/17 AsIs: >/1 ]] }
        refalrts::alloc_chars(vm, context[19], context[20], "tion -O expects \'d\', \'C\', \'D\', \'I\', \'P\', \'R\', \'S\', \'T\' or it\'s combination, but got \'", 85);
        refalrts::alloc_char(vm, context[21], '\'');
        refalrts::alloc_close_bracket(vm, context[22]);
        refalrts::reinit_char(context[14], 'o');
        refalrts::reinit_char(context[4], 'p');
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z1]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[22] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[0], context[0] );
        res = refalrts::splice_evar( res, context[21], context[22] );
        res = refalrts::splice_evar( res, context[15], context[16] );
        res = refalrts::splice_evar( res, context[19], context[20] );
        res = refalrts::splice_evar( res, context[4], context[4] );
        res = refalrts::splice_evar( res, context[7], context[14] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@1/4 (/7 s.new#7/13 s.new#8/14 )/8 e.new#9/15 >/1
        context[15] = context[9];
        context[16] = context[10];
        if( ! refalrts::empty_seq( context[11], context[12] ) )
          continue;
        // closed e.new#9 as range 15
        do {
          // </0 & Map@1/4 (/7 s.Pos#3/13 # EmptyErrorFileName/14 )/8 e.Tail#1/17 >/1
          context[17] = context[15];
          context[18] = context[16];
          if( ! refalrts::ident_term( identifiers[ident_EmptyErrorFileName], context[14] ) )
            continue;
          // closed e.Tail#1 as range 17
          //DEBUG: s.Pos#3: 13
          //DEBUG: e.Tail#1: 17

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} s.Pos#3/13 {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: s.Pos3 #13/4 HalfReuse: 'o'/7 }"ption --error-file expects non-empty argument"/19 )/21 Tile{ HalfReuse: </14 HalfReuse: & Map@1/8 AsIs: e.Tail#1/17 AsIs: >/1 ]] }
          refalrts::alloc_chars(vm, context[19], context[20], "ption --error-file expects non-empty argument", 45);
          refalrts::alloc_close_bracket(vm, context[21]);
          refalrts::reinit_open_bracket(context[0]);
          refalrts::reinit_svar( context[4], context[13] );
          refalrts::reinit_char(context[7], 'o');
          refalrts::reinit_open_call(context[14]);
          refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z1]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[14] );
          refalrts::link_brackets( context[0], context[21] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[14];
          res = refalrts::splice_evar( res, context[19], context[21] );
          refalrts::splice_to_freelist_open( vm, context[7], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Map@1/4 (/7 s.Pos#3/13 # TargetModeAlreadySet/14 )/8 e.Tail#1/17 >/1
        context[17] = context[15];
        context[18] = context[16];
        if( ! refalrts::ident_term( identifiers[ident_TargetModeAlreadySet], context[14] ) )
          continue;
        // closed e.Tail#1 as range 17
        //DEBUG: s.Pos#3: 13
        //DEBUG: e.Tail#1: 17

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.Pos#3/13 {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: s.Pos3 #13/4 HalfReuse: 'o'/7 }"ptions --makeexe (-x), --makelib (-l) and -R must appear one time"/19 )/21 Tile{ HalfReuse: </14 HalfReuse: & Map@1/8 AsIs: e.Tail#1/17 AsIs: >/1 ]] }
        refalrts::alloc_chars(vm, context[19], context[20], "ptions --makeexe (-x), --makelib (-l) and -R must appear one time", 65);
        refalrts::alloc_close_bracket(vm, context[21]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_svar( context[4], context[13] );
        refalrts::reinit_char(context[7], 'o');
        refalrts::reinit_open_call(context[14]);
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z1]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[14] );
        refalrts::link_brackets( context[0], context[21] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[14];
        res = refalrts::splice_evar( res, context[19], context[21] );
        refalrts::splice_to_freelist_open( vm, context[7], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@1/4 (/7 s.Pos#3/13 # BadValue-MustBeNumber/14 e.1#0/15 )/8 e.Tail#1/17 >/1
      context[15] = context[11];
      context[16] = context[12];
      context[17] = context[9];
      context[18] = context[10];
      if( ! refalrts::ident_term( identifiers[ident_BadValuem_MustBeNumber], context[14] ) )
        continue;
      // closed e.1#0 as range 15
      // closed e.Tail#1 as range 17
      //DEBUG: s.Pos#3: 13
      //DEBUG: e.1#0: 15
      //DEBUG: e.Tail#1: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.1#0/15 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#3/13 HalfReuse: 'o'/14 } Tile{ HalfReuse: 'p'/4 }"tion --opt-tree-cycles expects number parameter"/19 )/21 Tile{ AsIs: </0 } Tile{ HalfReuse: & Map@1/8 AsIs: e.Tail#1/17 AsIs: >/1 ]] }
      refalrts::alloc_chars(vm, context[19], context[20], "tion --opt-tree-cycles expects number parameter", 47);
      refalrts::alloc_close_bracket(vm, context[21]);
      refalrts::reinit_char(context[14], 'o');
      refalrts::reinit_char(context[4], 'p');
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z1]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[21] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[0], context[0] );
      res = refalrts::splice_evar( res, context[19], context[21] );
      res = refalrts::splice_evar( res, context[4], context[4] );
      res = refalrts::splice_evar( res, context[7], context[14] );
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseCommandLine\4$2\1*7/4 AsIs: t.Next#1/7 } >/11 </12 & Map@1/13 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z1]);
    refalrts::update_name(context[4], functions[efunc_gen_ParseCommandLine_L4S2L1D7]);
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

  // </0 & Map@1/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map@1/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z1("Map@1", 831796028U, 262638704U, func_gen_Map_Z1);


//End of file
