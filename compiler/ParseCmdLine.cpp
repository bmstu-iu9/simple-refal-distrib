// This file automatically generated from 'ParseCmdLine.ref'
// Don't edit! Edit 'ParseCmdLine.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_774774095_3141496024
#define COOKIE1_ 774774095U
#define COOKIE2_ 3141496024U

enum efunc {
  efunc_u_u_Stepm_Drop = 0,
  efunc_u_u_Metau_Mu = 1,
  efunc_d_table = 2,
  efunc_Map = 3,
  efunc_gen_Apply_Z3 = 4,
  efunc_gen_Apply_Z0 = 5,
  efunc_Reduce = 6,
  efunc_gen_Reduce_S1A1 = 7,
  efunc_gen_Apply_Z2 = 8,
  efunc_Apply = 9,
  efunc_DoMapAccum = 10,
  efunc_gen_DoMapAccum_S1A1 = 11,
  efunc_Add = 12,
  efunc_Sub = 13,
  efunc_Fetch = 14,
  efunc_Pipe = 15,
  efunc_gen_Pipe_S2L1 = 16,
  efunc_gen_Pipe_S3L1 = 17,
  efunc_Configm_SetKeepRasls = 18,
  efunc_gen_Update_B1 = 19,
  efunc_Configm_SetCppCompiler = 20,
  efunc_Configm_SetCompilerFlags = 21,
  efunc_Configm_SetDebugInfo = 22,
  efunc_Configm_SetErrorFile = 23,
  efunc_Configm_SetGrammarCheck = 24,
  efunc_Configm_AddIncorporated = 25,
  efunc_Configm_SetMarkupContext = 26,
  efunc_Configm_SetOptFlags = 27,
  efunc_Configm_SetWarning = 28,
  efunc_Configm_SetPrefix = 29,
  efunc_Configm_AddReference = 30,
  efunc_Configm_SetTargetFileName = 31,
  efunc_Configm_SetTargetMode = 32,
  efunc_gen_ParseCommandLine_L2S19A1 = 33,
  efunc_Configm_SetTargetSuffix = 34,
  efunc_Configm_SetChmodXCommand = 35,
  efunc_Configm_SetPrelude = 36,
  efunc_Configm_SetR5Mode = 37,
  efunc_Configm_SetLogFile = 38,
  efunc_Configm_SetTreeOptCycles = 39,
  efunc_Prout = 40,
  efunc_PrintVersion = 41,
  efunc_Configm_SetTempDir = 42,
  efunc_Configm_SetOverwriteExistRasls = 43,
  efunc_Configm_SetCppCompilerSuf = 44,
  efunc_Configm_SetNoSources = 45,
  efunc_Configm_IncVerbose = 46,
  efunc_Configm_SetVerbose = 47,
  efunc_Configm_SetSearchFolder = 48,
  efunc_GetOpt = 49,
  efunc_gen_Fetch_Z1 = 50,
  efunc_Mu = 51,
  efunc_Up = 52,
  efunc_Evm_met = 53,
  efunc_Residue = 54,
  efunc_u_u_Metau_Residue = 55,
  efunc_MapAccum = 56,
  efunc_UnBracket = 57,
  efunc_DelAccumulator = 58,
  efunc_Inc = 59,
  efunc_Dec = 60,
  efunc_ParseCommandLine = 61,
  efunc_Update = 62,
  efunc_PrintHelp = 63,
  efunc_gen_Apply_Z4 = 64,
  efunc_gen_Map_Z1 = 65,
  efunc_gen_ParseCommandLine_L4S2L1D8 = 66,
  efunc_gen_Map_Z0 = 67,
  efunc_gen_ParseCommandLine_L4S2L1Z0 = 68,
  efunc_gen_Fetch_Z2 = 69,
  efunc_Configm_Create = 70,
  efunc_gen_ParseCommandLine_L1D1 = 71,
  efunc_gen_Pipe_S2L1Z0 = 72,
  efunc_gen_ParseCommandLine_L1Z0 = 73,
  efunc_gen_MapAccum_Z0 = 74,
  efunc_gen_ParseCommandLine_L2Z0 = 75,
  efunc_gen_ParseCommandLine_L3Z0 = 76,
  efunc_gen_ParseCommandLine_L4Z0 = 77,
  efunc_gen_Fetch_Z0 = 78,
  efunc_gen_Fetch_Z3 = 79,
  efunc_gen_ParseCommandLine_L2 = 80,
  efunc_gen_Fetch_Z4 = 81,
  efunc_gen_ParseCommandLine_L3 = 82,
  efunc_gen_ParseCommandLine_L4D2 = 83,
};


enum ident {
  ident_True = 0,
  ident_CppCompilerm_Exe = 1,
  ident_EXE = 2,
  ident_CppCompilerm_Lib = 3,
  ident_LIB = 4,
  ident_CppFlag = 5,
  ident_CppFlags = 6,
  ident_DebugInfo = 7,
  ident_ErrorFile = 8,
  ident_GrammarCheck = 9,
  ident_Incorporated = 10,
  ident_MarkupContext = 11,
  ident_Opt = 12,
  ident_Warning = 13,
  ident_Prefix = 14,
  ident_Reference = 15,
  ident_RuntimeFolder = 16,
  ident_SearchFolder = 17,
  ident_TargetFileName = 18,
  ident_TargetModem_Exe = 19,
  ident_TargetModem_Lib = 20,
  ident_TargetModem_R = 21,
  ident_R = 22,
  ident_TargetModem_C = 23,
  ident_CompileOnly = 24,
  ident_TargetSuffixm_Exe = 25,
  ident_TargetSuffixm_Lib = 26,
  ident_ChmodXCommand = 27,
  ident_Prelude = 28,
  ident_ClassicMode = 29,
  ident_Classic = 30,
  ident_ExtendedMode = 31,
  ident_Extended = 32,
  ident_Log = 33,
  ident_TreeOptCycles = 34,
  ident_Help = 35,
  ident_Version = 36,
  ident_KeepRasls = 37,
  ident_DontKeepRasls = 38,
  ident_False = 39,
  ident_TempDir = 40,
  ident_REF5RSLm_Env = 41,
  ident_OverwriteExistRasls = 42,
  ident_DontOverwriteExistRasls = 43,
  ident_CppCompilerSufm_Exe = 44,
  ident_CppCompilerSufm_Lib = 45,
  ident_NoSources = 46,
  ident_VerboseInc = 47,
  ident_VerboseSet = 48,
  ident_REF5RSL = 49,
  ident_FILE = 50,
  ident_Required = 51,
  ident_None = 52,
  ident_Success = 53,
  ident_Fails = 54,
  ident_Mu = 55,
  ident_Up = 56,
  ident_Evm_met = 57,
  ident_Residue = 58,
  ident_u_u_Metau_Residue = 59,
  ident_Apply = 60,
  ident_Map = 61,
  ident_Reduce = 62,
  ident_Fetch = 63,
  ident_MapAccum = 64,
  ident_DoMapAccum = 65,
  ident_UnBracket = 66,
  ident_DelAccumulator = 67,
  ident_Inc = 68,
  ident_Dec = 69,
  ident_Pipe = 70,
  ident_ParseCommandLine = 71,
  ident_Update = 72,
  ident_PrintHelp = 73,
  ident_NoRequiredParam = 74,
  ident_UnknownShortOption = 75,
  ident_UnknownLongOption = 76,
  ident_BadValuem_Opt = 77,
  ident_BadValuem_Warning = 78,
  ident_EmptyErrorFileName = 79,
  ident_TargetModeAlreadySet = 80,
  ident_BadValuem_MustBeNumber = 81,
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
  res = refalrts::splice_elem( res, context[8] );
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
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
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
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[7] );
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
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: s.Fn#1/5 AsIs: e.Argument#1/7 HalfReuse: & $table/1 } >/9 Tile{ ]] }
    refalrts::alloc_close_call(vm, context[9]);
    refalrts::update_name(context[4], functions[efunc_u_u_Metau_Mu]);
    refalrts::reinit_name(context[1], functions[efunc_d_table]);
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_elem( res, context[9] );
    refalrts::use( res );
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
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
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
    // </0 & Map/4 t.new#3/5 t.new#4/9 e.new#5/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[10] = refalrts::tvar_left( context[9], context[7], context[8] );
    if( ! context[10] )
      continue;
    // closed e.new#5 as range 7
    do {
      // </0 & Map/4 s.Fn#1/5 t.Next#1/9 e.Tail#1/11 >/1
      context[11] = context[7];
      context[12] = context[8];
      if( ! refalrts::svar_term( context[5], context[5] ) )
        continue;
      // closed e.Tail#1 as range 11
      //DEBUG: t.Next#1: 9
      //DEBUG: s.Fn#1: 5
      //DEBUG: e.Tail#1: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: s.Fn#1/5 AsIs: t.Next#1/9 } & $table/13 >/14 </15 & Map/16 s.Fn#1/5/17 Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_name(vm, context[13], functions[efunc_d_table]);
      refalrts::alloc_close_call(vm, context[14]);
      refalrts::alloc_open_call(vm, context[15]);
      refalrts::alloc_name(vm, context[16], functions[efunc_Map]);
      refalrts::copy_stvar(vm, context[17], context[5]);
      refalrts::update_name(context[4], functions[efunc_u_u_Metau_Mu]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[15] );
      refalrts::push_stack( vm, context[14] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[13], context[17] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Map/4 (/5 t.#0/15 e.0#0/13 )/6 t.Next#1/9 e.Tail#1/11 >/1
      context[11] = context[7];
      context[12] = context[8];
      context[13] = 0;
      context[14] = 0;
      if( ! refalrts::brackets_term( context[13], context[14], context[5] ) )
        continue;
      // closed e.Tail#1 as range 11
      context[16] = refalrts::tvar_left( context[15], context[13], context[14] );
      if( ! context[16] )
        continue;
      // closed e.0#0 as range 13
      //DEBUG: t.Next#1: 9
      //DEBUG: e.Tail#1: 11
      //DEBUG: t.#0: 15
      //DEBUG: e.0#0: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </17 & Apply@3/18 t.#0/15/19 e.0#0/13/21 Tile{ AsIs: t.Next#1/9 } >/23 Tile{ AsIs: </0 AsIs: & Map/4 AsIs: (/5 AsIs: t.#0/15 AsIs: e.0#0/13 AsIs: )/6 } Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[17]);
      refalrts::alloc_name(vm, context[18], functions[efunc_gen_Apply_Z3]);
      refalrts::copy_evar(vm, context[19], context[20], context[15], context[16]);
      refalrts::copy_evar(vm, context[21], context[22], context[13], context[14]);
      refalrts::alloc_close_call(vm, context[23]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[5], context[6] );
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[17] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[0], context[6] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[17], context[20] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map/4 t.Fn#1/5 t.Next#1/9 e.Tail#1/11 >/1
    context[11] = context[7];
    context[12] = context[8];
    // closed e.Tail#1 as range 11
    //DEBUG: t.Fn#1: 5
    //DEBUG: t.Next#1: 9
    //DEBUG: e.Tail#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Apply@0/4 AsIs: t.Fn#1/5 AsIs: t.Next#1/9 } >/13 </14 & Map/15 t.Fn#1/5/16 Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::alloc_open_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_Map]);
    refalrts::copy_evar(vm, context[16], context[17], context[5], context[6]);
    refalrts::update_name(context[4], functions[efunc_gen_Apply_Z0]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[13], context[17] );
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
    //RESULT: Tile{ [[ } </13 & Reduce$1=1/14 t.Fn#1/5/15 (/17 Tile{ AsIs: e.Tail#1/9 } )/18 Tile{ AsIs: </0 Reuse: & Apply@2/4 AsIs: t.Fn#1/5 AsIs: t.Acc#1/7 AsIs: t.Next#1/11 } >/19 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_gen_Reduce_S1A1]);
    refalrts::copy_evar(vm, context[15], context[16], context[5], context[6]);
    refalrts::alloc_open_bracket(vm, context[17]);
    refalrts::alloc_close_bracket(vm, context[18]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::update_name(context[4], functions[efunc_gen_Apply_Z2]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_evar( res, context[0], context[12] );
    res = refalrts::splice_elem( res, context[18] );
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
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_elem( res, context[13] );
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1/4 AsIs: t.Fn#1/5 } Tile{ AsIs: (/11 AsIs: e.Scanned#1/13 AsIs: )/12 } (/19 Tile{ AsIs: e.Tail#1/15 } )/20 </21 & Apply@2/22 t.Fn#1/5/23 Tile{ AsIs: t.Acc#1/7 } Tile{ AsIs: t.Next#1/17 } >/25 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[19]);
    refalrts::alloc_close_bracket(vm, context[20]);
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_gen_Apply_Z2]);
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
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[20], context[24] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_elem( res, context[19] );
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
  res = refalrts::splice_elem( res, context[5] );
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
    res = refalrts::splice_elem( res, context[8] );
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
  res = refalrts::splice_elem( res, context[5] );
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
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_elem( res, context[11] );
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


static refalrts::FnResult func_gen_ParseCommandLine_L2S19A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & ParseCommandLine\2$19=1/4 s.Num#2/9 (/7 t.Config#3/10 e.Errors#3/5 )/8 >/1
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 } (/12 Tile{ AsIs: e.Errors#3/5 } )/13 t.Config#3/10/14 Tile{ AsIs: s.Num#2/9 HalfReuse: </7 } & Config-SetKeepRasls/16 Tile{ AsIs: t.Config#3/10 } # True/17 Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::copy_evar(vm, context[14], context[15], context[10], context[11]);
  refalrts::alloc_name(vm, context[16], functions[efunc_Configm_SetKeepRasls]);
  refalrts::alloc_ident(vm, context[17], identifiers[ident_True]);
  refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
  refalrts::reinit_open_call(context[7]);
  refalrts::reinit_close_call(context[8]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[7] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_evar( res, context[9], context[7] );
  res = refalrts::splice_evar( res, context[13], context[15] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_elem( res, context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseCommandLine_L2S19A1("ParseCommandLine\\2$19=1", COOKIE1_, COOKIE2_, func_gen_ParseCommandLine_L2S19A1);


static refalrts::FnResult func_gen_ParseCommandLine_L2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
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
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: s.Num#2/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-SetCppCompiler/17 } t.Config#2/9/23 # EXE/25 Tile{ AsIs: e.CppCompiler#2/21 } Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
      refalrts::alloc_ident(vm, context[25], identifiers[ident_EXE]);
      refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
      refalrts::reinit_open_call(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetCppCompiler]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[11] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[23], context[25] );
      res = refalrts::splice_evar( res, context[11], context[17] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::use( res );
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
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: s.Num#2/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-SetCppCompiler/17 } t.Config#2/9/23 # LIB/25 Tile{ AsIs: e.CppCompiler#2/21 } Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
      refalrts::alloc_ident(vm, context[25], identifiers[ident_LIB]);
      refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
      refalrts::reinit_open_call(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetCppCompiler]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[11] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[23], context[25] );
      res = refalrts::splice_evar( res, context[11], context[17] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::use( res );
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
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: s.Num#2/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-SetCompilerFlags/17 } t.Config#2/9/23" \""/25 Tile{ AsIs: e.Flag#2/21 } '\"'/27 Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
      refalrts::alloc_chars(vm, context[25], context[26], " \"", 2);
      refalrts::alloc_char(vm, context[27], '\"');
      refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
      refalrts::reinit_open_call(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetCompilerFlags]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[11] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[23], context[26] );
      res = refalrts::splice_evar( res, context[11], context[17] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::use( res );
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
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: s.Num#2/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-SetCompilerFlags/17 } t.Config#2/9/23 ' '/25 Tile{ AsIs: e.Flags#2/21 } Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
      refalrts::alloc_char(vm, context[25], ' ');
      refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
      refalrts::reinit_open_call(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetCompilerFlags]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[11] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[23], context[25] );
      res = refalrts::splice_evar( res, context[11], context[17] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::use( res );
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
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: s.Num#2/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-SetDebugInfo/17 } t.Config#2/9/21 Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[21], context[22], context[9], context[10]);
      refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
      refalrts::reinit_open_call(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetDebugInfo]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[11] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[11], context[17] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::use( res );
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
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: s.Num#2/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-SetErrorFile/17 } t.Config#2/9/23 Tile{ AsIs: e.FileName#2/21 } Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
      refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
      refalrts::reinit_open_call(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetErrorFile]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[11] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[11], context[17] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::use( res );
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
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: s.Num#2/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-SetGrammarCheck/17 } t.Config#2/9/21 Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[21], context[22], context[9], context[10]);
      refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
      refalrts::reinit_open_call(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetGrammarCheck]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[11] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[11], context[17] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::use( res );
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
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: s.Num#2/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-AddIncorporated/17 } t.Config#2/9/23 Tile{ AsIs: e.LibName#2/21 } Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
      refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
      refalrts::reinit_open_call(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_AddIncorporated]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[11] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[11], context[17] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::use( res );
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
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: s.Num#2/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-SetMarkupContext/17 } t.Config#2/9/21 Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[21], context[22], context[9], context[10]);
      refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
      refalrts::reinit_open_call(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetMarkupContext]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[11] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[11], context[17] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::use( res );
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
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: s.Num#2/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-SetOptFlags/17 } t.Config#2/9/23 Tile{ AsIs: e.Flags#2/21 } Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
      refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
      refalrts::reinit_open_call(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetOptFlags]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[11] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[11], context[17] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/19 )/8 (/11 # Warning/17 s.Num#2/18 e.WarningName#2/21 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      if( ! refalrts::ident_term( identifiers[ident_Warning], context[17] ) )
        continue;
      // closed e.Errors#2 as range 19
      // closed e.WarningName#2 as range 21
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 18
      //DEBUG: e.Errors#2: 19
      //DEBUG: e.WarningName#2: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: s.Num#2/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-SetWarning/17 } t.Config#2/9/23 Tile{ AsIs: e.WarningName#2/21 } Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
      refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
      refalrts::reinit_open_call(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetWarning]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[11] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[11], context[17] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::use( res );
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
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: s.Num#2/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-SetPrefix/17 } t.Config#2/9/23 Tile{ AsIs: e.Prefix#2/21 } Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
      refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
      refalrts::reinit_open_call(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetPrefix]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[11] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[11], context[17] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::use( res );
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
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: s.Num#2/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-AddReference/17 } t.Config#2/9/23 Tile{ AsIs: e.Reference#2/21 } Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
      refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
      refalrts::reinit_open_call(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_AddReference]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[11] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[11], context[17] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::use( res );
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
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } )/23 Tile{ AsIs: t.Config#2/9 } s.Num#2/18/24 </25 & Config-SetCompilerFlags/26 t.Config#2/9/27" -I\""/29 e.Path#2/21/31 '\"'/33 Tile{ AsIs: >/1 } Tile{ HalfReuse: >/8 AsIs: (/11 Reuse: # SearchFolder/17 AsIs: s.Num#2/18 AsIs: e.Path#2/21 AsIs: )/12 } Tile{ ]] }
      refalrts::alloc_close_bracket(vm, context[23]);
      refalrts::copy_stvar(vm, context[24], context[18]);
      refalrts::alloc_open_call(vm, context[25]);
      refalrts::alloc_name(vm, context[26], functions[efunc_Configm_SetCompilerFlags]);
      refalrts::copy_evar(vm, context[27], context[28], context[9], context[10]);
      refalrts::alloc_chars(vm, context[29], context[30], " -I\"", 4);
      refalrts::copy_evar(vm, context[31], context[32], context[21], context[22]);
      refalrts::alloc_char(vm, context[33], '\"');
      refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
      refalrts::reinit_close_call(context[8]);
      refalrts::update_ident(context[17], identifiers[ident_SearchFolder]);
      refalrts::link_brackets( context[11], context[12] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[25] );
      refalrts::link_brackets( context[7], context[23] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[8], context[12] );
      res = refalrts::splice_elem( res, context[1] );
      res = refalrts::splice_evar( res, context[24], context[33] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[19], context[20] );
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
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: s.Num#2/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-SetTargetFileName/17 } t.Config#2/9/23 Tile{ AsIs: e.FileName#2/21 } Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
      refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
      refalrts::reinit_open_call(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetTargetFileName]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[11] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[11], context[17] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::use( res );
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
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors#2/21 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: s.Num#2/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-SetTargetMode/17 } t.Config#2/9/23 # EXE/25 Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
        refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
        refalrts::alloc_ident(vm, context[25], identifiers[ident_EXE]);
        refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
        refalrts::reinit_open_call(context[11]);
        refalrts::reinit_name(context[17], functions[efunc_Configm_SetTargetMode]);
        refalrts::reinit_close_call(context[12]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[12] );
        refalrts::push_stack( vm, context[11] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[12];
        res = refalrts::splice_evar( res, context[23], context[25] );
        res = refalrts::splice_evar( res, context[11], context[17] );
        res = refalrts::splice_elem( res, context[18] );
        res = refalrts::splice_evar( res, context[9], context[10] );
        res = refalrts::splice_elem( res, context[8] );
        res = refalrts::splice_evar( res, context[21], context[22] );
        refalrts::use( res );
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
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors#2/21 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: s.Num#2/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-SetTargetMode/17 } t.Config#2/9/23 # LIB/25 Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
        refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
        refalrts::alloc_ident(vm, context[25], identifiers[ident_LIB]);
        refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
        refalrts::reinit_open_call(context[11]);
        refalrts::reinit_name(context[17], functions[efunc_Configm_SetTargetMode]);
        refalrts::reinit_close_call(context[12]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[12] );
        refalrts::push_stack( vm, context[11] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[12];
        res = refalrts::splice_evar( res, context[23], context[25] );
        res = refalrts::splice_evar( res, context[11], context[17] );
        res = refalrts::splice_elem( res, context[18] );
        res = refalrts::splice_evar( res, context[9], context[10] );
        res = refalrts::splice_elem( res, context[8] );
        res = refalrts::splice_evar( res, context[21], context[22] );
        refalrts::use( res );
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
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors#2/21 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: s.Num#2/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-SetTargetMode/17 } t.Config#2/9/23 # R/25 Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
        refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
        refalrts::alloc_ident(vm, context[25], identifiers[ident_R]);
        refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
        refalrts::reinit_open_call(context[11]);
        refalrts::reinit_name(context[17], functions[efunc_Configm_SetTargetMode]);
        refalrts::reinit_close_call(context[12]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[12] );
        refalrts::push_stack( vm, context[11] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[12];
        res = refalrts::splice_evar( res, context[23], context[25] );
        res = refalrts::splice_evar( res, context[11], context[17] );
        res = refalrts::splice_elem( res, context[18] );
        res = refalrts::splice_evar( res, context[9], context[10] );
        res = refalrts::splice_elem( res, context[8] );
        res = refalrts::splice_evar( res, context[21], context[22] );
        refalrts::use( res );
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
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseCommandLine\2$19=1/4 HalfReuse: s.Num2 #18/7 } </23 Tile{ HalfReuse: & Update:1/8 AsIs: (/11 } Tile{ AsIs: e.Errors#2/21 } )/24 Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: s.Num#2/18 } </25 & Config-SetTargetMode/26 t.Config#2/9/27 Tile{ Reuse: # CompileOnly/17 } >/29 Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[23]);
      refalrts::alloc_close_bracket(vm, context[24]);
      refalrts::alloc_open_call(vm, context[25]);
      refalrts::alloc_name(vm, context[26], functions[efunc_Configm_SetTargetMode]);
      refalrts::copy_evar(vm, context[27], context[28], context[9], context[10]);
      refalrts::alloc_close_call(vm, context[29]);
      refalrts::update_name(context[4], functions[efunc_gen_ParseCommandLine_L2S19A1]);
      refalrts::reinit_svar( context[7], context[18] );
      refalrts::reinit_name(context[8], functions[efunc_gen_Update_B1]);
      refalrts::update_ident(context[17], identifiers[ident_CompileOnly]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[29] );
      refalrts::push_stack( vm, context[25] );
      refalrts::link_brackets( context[11], context[24] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_elem( res, context[29] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_evar( res, context[25], context[28] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[8], context[11] );
      res = refalrts::splice_elem( res, context[23] );
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
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: s.Num#2/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-SetTargetSuffix/17 } t.Config#2/9/23 # EXE/25 Tile{ AsIs: e.Suffix#2/21 } Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
      refalrts::alloc_ident(vm, context[25], identifiers[ident_EXE]);
      refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
      refalrts::reinit_open_call(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetTargetSuffix]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[11] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[23], context[25] );
      res = refalrts::splice_evar( res, context[11], context[17] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::use( res );
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
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: s.Num#2/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-SetTargetSuffix/17 } t.Config#2/9/23 # LIB/25 Tile{ AsIs: e.Suffix#2/21 } Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
      refalrts::alloc_ident(vm, context[25], identifiers[ident_LIB]);
      refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
      refalrts::reinit_open_call(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetTargetSuffix]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[11] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[23], context[25] );
      res = refalrts::splice_evar( res, context[11], context[17] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::use( res );
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
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: s.Num#2/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-SetChmodXCommand/17 } t.Config#2/9/23 Tile{ AsIs: e.Command#2/21 } Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
      refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
      refalrts::reinit_open_call(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetChmodXCommand]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[11] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[11], context[17] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::use( res );
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
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: s.Num#2/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-SetPrelude/17 } t.Config#2/9/23 Tile{ AsIs: e.Prelude#2/21 } Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
      refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
      refalrts::reinit_open_call(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetPrelude]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[11] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[11], context[17] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::use( res );
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
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors#2/21 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: s.Num#2/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-SetR5Mode/17 } t.Config#2/9/23 # Classic/25 Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
        refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
        refalrts::alloc_ident(vm, context[25], identifiers[ident_Classic]);
        refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
        refalrts::reinit_open_call(context[11]);
        refalrts::reinit_name(context[17], functions[efunc_Configm_SetR5Mode]);
        refalrts::reinit_close_call(context[12]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[12] );
        refalrts::push_stack( vm, context[11] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[12];
        res = refalrts::splice_evar( res, context[23], context[25] );
        res = refalrts::splice_evar( res, context[11], context[17] );
        res = refalrts::splice_elem( res, context[18] );
        res = refalrts::splice_evar( res, context[9], context[10] );
        res = refalrts::splice_elem( res, context[8] );
        res = refalrts::splice_evar( res, context[21], context[22] );
        refalrts::use( res );
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
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors#2/21 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: s.Num#2/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-SetR5Mode/17 } t.Config#2/9/23 # Extended/25 Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
      refalrts::alloc_ident(vm, context[25], identifiers[ident_Extended]);
      refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
      refalrts::reinit_open_call(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetR5Mode]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[11] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[23], context[25] );
      res = refalrts::splice_evar( res, context[11], context[17] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      refalrts::use( res );
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
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: s.Num#2/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-SetLogFile/17 } t.Config#2/9/23 Tile{ AsIs: e.LogFile#2/21 } Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
      refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
      refalrts::reinit_open_call(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetLogFile]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[11] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[11], context[17] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::use( res );
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
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: s.Num#2/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-SetTreeOptCycles/17 } t.Config#2/9/23 Tile{ AsIs: e.Cycles#2/21 } Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
      refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
      refalrts::reinit_open_call(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetTreeOptCycles]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[11] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[11], context[17] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::use( res );
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
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Num#2/18 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: </11 HalfReuse: & Prout/17 } 'r'/23 Tile{ HalfReuse: 'l'/12 HalfReuse: 'c'/1 }"-core flags... filenames...\nrlc-core @flag-list-file.txt\n\n-c, --cpp-command, --cpp-command-exe command-line\n        C++ command line prefix for building executable module\n--cpp-command-lib command-line\n        C++ command line prefix for building library module\n-f, --cpp-flag flag\n        Additional flag for C++ compiler, quoted in command line\n-F, --cpp-flags flags\n        Additional flags for C++ compiler, don\'t quoted in command line\n-g, --debug-info\n        Information of variable table for step-by-step debugger\n-e, --error-file filename\n        Compiler creates empty file with this name if compilation failed\n--grammar-check\n        Dont compile sources, only syntax (w/o semantic) check for sources\n--incorporated filename\n        Marks that a module with the name is statically linked to this module\n--markup-context\n        Save catched variable names in closure content\n-O keys[change]\n        Optimization keys:\n          -OP - conjoint pattern optimization\n          -OR - building result optimization\n          -Od - use direct code generation instead interpretation code,\n                compile functions to C++ instead RASL\n          -OT - tree optimization (expands direct calls for closures)\n          -OD - drive functions with $DRIVE, inline functions with $INLINE\n          -OI - inline functions with $DRIVE and $INLINE\n          -OS - specialize functions with $SPEC\n          -OA - automatically markup optimizable functions\n          -Oi - optimize intrinsic functions\n          -OG - global optimization\n          -Ox, -Oy, -Oz - experimental keys, do nothing in release\n        Flags D, I, S, A, i implicitly contain T\n        Change key mode (optional):\n          -O...+ - set the flags with previous setted\n          -O...- - reject the flags from previous setted\n          -O...= - assign the flags, previous setted will be skipped\n-W keywords\n        Warning keywords:\n          -Wall - show all warnings\n          -Wscreening, -Wno-... - check/don\'t screening sentences\n                                  (disabled by default)\n          -Wnul-in-compound, -Wno-... - check/don\'t nuls in compounds\n                                        (enabled by default)\n          -Wpseudofunctions, -Wno-... - check/don\'t pseudofunction\n                                        correctness (enabled by default)\n          -Werror[=...], -Wno-error[=...] - treat/don\'t all or only provided\n                                            warning(s) as error(s)\n-p, --prefix prefix-name\n        set prefix file name\n-r, --reference reference-name\n        Compiled module depends from the reference\n-D, --runtime-dir, --runtime-directory dir\n        Add the directory to search list and include list for C++ compiler\n-d, --dir, --directory dir\n        Add the directory to search list\n-o, --target-file target-file-name\n        Name of target file\n-x, --makeexe\n        Compile to executable file\n-l, --makelib\n        Compile to library file (with or w/o native code)\n-R      Compile to library RASL module (w/o native code)\n-C, --compile-only\n        Compile sources w/o linking\n--targsuffix, --targetsuffix, --targsuf, --exesuffix, --exesuf suffix\n        Suffix for executable file (for example, .exe)\n--libsuffix, --libsuf suffix\n        Suffix for library file (for example, .dll or .so)\n--chmod-x, --chmod-x-command command\n        Must be empty on Windws, \"chmod +x\" on POSIX\n--prelude filename.refi\n        Prelude file with builtin functions declarations\n--classic, --extended\n        Switch Refal-5-lambda syntax analyzer to full compatibility\n        with classic Refal-5 or not. Default is --extended\n--log logfile.log\n        Logs compilation process. Compiler writes to log syntax tree\n        after desugaring, after tree optimization, high-leve RASL\n--opt-tree-cycles number\n        Max number of tree optimization passes\n--help  Print this help\n--version\n        Print version\n--keep-rasl, --keep-rasls, --dont-keep-rasl, --dont-keep-rasls\n        Save or don\'t save temporary .rasl after compilation\n--tmp-dir, --temp-dir directory\n        Directory for intermediate .rasl files, current is default\n--ref5rsl\n        Use environment variable REF5RSL as search path\n--overwrite-exist-rasls, --dont-overwrite-exist-rasls,\n--overwrite-exist-rasl, --dont-overwrite-exist-rasl\n        If tmp-dir already contain file with name that being produced\n        new file use new name\n--no-sources\n        Don\'t show error when there are no sources in command line\n-v      Increment log level\n--verbose=N\n        Set log level to N.\n\nLong keys with params may be used with equation:\n--tmp-dir dirname or --tmp-dir=dirname\n\nEach line of arg-list-file.txt is interpreted as independed key"/24 Tile{ HalfReuse: '\n'/0 HalfReuse: >/4 AsIs: (/7 AsIs: t.Config#2/9 AsIs: e.Errors#2/21 AsIs: )/8 } Tile{ ]] }
        refalrts::alloc_char(vm, context[23], 'r');
        refalrts::alloc_chars(vm, context[24], context[25], "-core flags... filenames...\nrlc-core @flag-list-file.txt\n\n-c, --cpp-command, --cpp-command-exe command-line\n        C++ command line prefix for building executable module\n--cpp-command-lib command-line\n        C++ command line prefix for building library module\n-f, --cpp-flag flag\n        Additional flag for C++ compiler, quoted in command line\n-F, --cpp-flags flags\n        Additional flags for C++ compiler, don\'t quoted in command line\n-g, --debug-info\n        Information of variable table for step-by-step debugger\n-e, --error-file filename\n        Compiler creates empty file with this name if compilation failed\n--grammar-check\n        Dont compile sources, only syntax (w/o semantic) check for sources\n--incorporated filename\n        Marks that a module with the name is statically linked to this module\n--markup-context\n        Save catched variable names in closure content\n-O keys[change]\n        Optimization keys:\n          -OP - conjoint pattern optimization\n          -OR - building result optimization\n          -Od - use direct code generation instead interpretation code,\n                compile functions to C++ instead RASL\n          -OT - tree optimization (expands direct calls for closures)\n          -OD - drive functions with $DRIVE, inline functions with $INLINE\n          -OI - inline functions with $DRIVE and $INLINE\n          -OS - specialize functions with $SPEC\n          -OA - automatically markup optimizable functions\n          -Oi - optimize intrinsic functions\n          -OG - global optimization\n          -Ox, -Oy, -Oz - experimental keys, do nothing in release\n        Flags D, I, S, A, i implicitly contain T\n        Change key mode (optional):\n          -O...+ - set the flags with previous setted\n          -O...- - reject the flags from previous setted\n          -O...= - assign the flags, previous setted will be skipped\n-W keywords\n        Warning keywords:\n          -Wall - show all warnings\n          -Wscreening, -Wno-... - check/don\'t screening sentences\n                                  (disabled by default)\n          -Wnul-in-compound, -Wno-... - check/don\'t nuls in compounds\n                                        (enabled by default)\n          -Wpseudofunctions, -Wno-... - check/don\'t pseudofunction\n                                        correctness (enabled by default)\n          -Werror[=...], -Wno-error[=...] - treat/don\'t all or only provided\n                                            warning(s) as error(s)\n-p, --prefix prefix-name\n        set prefix file name\n-r, --reference reference-name\n        Compiled module depends from the reference\n-D, --runtime-dir, --runtime-directory dir\n        Add the directory to search list and include list for C++ compiler\n-d, --dir, --directory dir\n        Add the directory to search list\n-o, --target-file target-file-name\n        Name of target file\n-x, --makeexe\n        Compile to executable file\n-l, --makelib\n        Compile to library file (with or w/o native code)\n-R      Compile to library RASL module (w/o native code)\n-C, --compile-only\n        Compile sources w/o linking\n--targsuffix, --targetsuffix, --targsuf, --exesuffix, --exesuf suffix\n        Suffix for executable file (for example, .exe)\n--libsuffix, --libsuf suffix\n        Suffix for library file (for example, .dll or .so)\n--chmod-x, --chmod-x-command command\n        Must be empty on Windws, \"chmod +x\" on POSIX\n--prelude filename.refi\n        Prelude file with builtin functions declarations\n--classic, --extended\n        Switch Refal-5-lambda syntax analyzer to full compatibility\n        with classic Refal-5 or not. Default is --extended\n--log logfile.log\n        Logs compilation process. Compiler writes to log syntax tree\n        after desugaring, after tree optimization, high-leve RASL\n--opt-tree-cycles number\n        Max number of tree optimization passes\n--help  Print this help\n--version\n        Print version\n--keep-rasl, --keep-rasls, --dont-keep-rasl, --dont-keep-rasls\n        Save or don\'t save temporary .rasl after compilation\n--tmp-dir, --temp-dir directory\n        Directory for intermediate .rasl files, current is default\n--ref5rsl\n        Use environment variable REF5RSL as search path\n--overwrite-exist-rasls, --dont-overwrite-exist-rasls,\n--overwrite-exist-rasl, --dont-overwrite-exist-rasl\n        If tmp-dir already contain file with name that being produced\n        new file use new name\n--no-sources\n        Don\'t show error when there are no sources in command line\n-v      Increment log level\n--verbose=N\n        Set log level to N.\n\nLong keys with params may be used with equation:\n--tmp-dir dirname or --tmp-dir=dirname\n\nEach line of arg-list-file.txt is interpreted as independed key", 4708);
        refalrts::reinit_open_call(context[11]);
        refalrts::reinit_name(context[17], functions[efunc_Prout]);
        refalrts::reinit_char(context[12], 'l');
        refalrts::reinit_char(context[1], 'c');
        refalrts::reinit_char(context[0], '\n');
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
        res = refalrts::splice_elem( res, context[23] );
        res = refalrts::splice_evar( res, context[11], context[17] );
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
        //RESULT: Tile{ [[ } Tile{ HalfReuse: </11 HalfReuse: & PrintVersion/17 } Tile{ HalfReuse: 'r'/12 HalfReuse: 'l'/1 } Tile{ HalfReuse: 'c'/0 HalfReuse: >/4 AsIs: (/7 AsIs: t.Config#2/9 AsIs: e.Errors#2/21 AsIs: )/8 } Tile{ ]] }
        refalrts::reinit_open_call(context[11]);
        refalrts::reinit_name(context[17], functions[efunc_PrintVersion]);
        refalrts::reinit_char(context[12], 'r');
        refalrts::reinit_char(context[1], 'l');
        refalrts::reinit_char(context[0], 'c');
        refalrts::reinit_close_call(context[4]);
        refalrts::link_brackets( context[7], context[8] );
        refalrts::push_stack( vm, context[4] );
        refalrts::push_stack( vm, context[11] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[0], context[8] );
        res = refalrts::splice_evar( res, context[12], context[1] );
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
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors#2/21 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: s.Num#2/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-SetKeepRasls/17 } t.Config#2/9/23 # True/25 Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
        refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
        refalrts::alloc_ident(vm, context[25], identifiers[ident_True]);
        refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
        refalrts::reinit_open_call(context[11]);
        refalrts::reinit_name(context[17], functions[efunc_Configm_SetKeepRasls]);
        refalrts::reinit_close_call(context[12]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[12] );
        refalrts::push_stack( vm, context[11] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[12];
        res = refalrts::splice_evar( res, context[23], context[25] );
        res = refalrts::splice_evar( res, context[11], context[17] );
        res = refalrts::splice_elem( res, context[18] );
        res = refalrts::splice_evar( res, context[9], context[10] );
        res = refalrts::splice_elem( res, context[8] );
        res = refalrts::splice_evar( res, context[21], context[22] );
        refalrts::use( res );
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
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors#2/21 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: s.Num#2/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-SetKeepRasls/17 } t.Config#2/9/23 # False/25 Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
      refalrts::alloc_ident(vm, context[25], identifiers[ident_False]);
      refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
      refalrts::reinit_open_call(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetKeepRasls]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[11] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[23], context[25] );
      res = refalrts::splice_evar( res, context[11], context[17] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      refalrts::use( res );
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
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: s.Num#2/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-SetTempDir/17 } t.Config#2/9/23 Tile{ AsIs: e.Name#2/21 } Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
      refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
      refalrts::reinit_open_call(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetTempDir]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[11] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[11], context[17] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::use( res );
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
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors#2/21 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: s.Num#2/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-SetOverwriteExistRasls/17 } t.Config#2/9/23 # True/25 Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
        refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
        refalrts::alloc_ident(vm, context[25], identifiers[ident_True]);
        refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
        refalrts::reinit_open_call(context[11]);
        refalrts::reinit_name(context[17], functions[efunc_Configm_SetOverwriteExistRasls]);
        refalrts::reinit_close_call(context[12]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[12] );
        refalrts::push_stack( vm, context[11] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[12];
        res = refalrts::splice_evar( res, context[23], context[25] );
        res = refalrts::splice_evar( res, context[11], context[17] );
        res = refalrts::splice_elem( res, context[18] );
        res = refalrts::splice_evar( res, context[9], context[10] );
        res = refalrts::splice_elem( res, context[8] );
        res = refalrts::splice_evar( res, context[21], context[22] );
        refalrts::use( res );
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
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors#2/21 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: s.Num#2/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-SetOverwriteExistRasls/17 } t.Config#2/9/23 # False/25 Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
      refalrts::alloc_ident(vm, context[25], identifiers[ident_False]);
      refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
      refalrts::reinit_open_call(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetOverwriteExistRasls]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[11] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[23], context[25] );
      res = refalrts::splice_evar( res, context[11], context[17] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      refalrts::use( res );
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
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: s.Num#2/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-SetCppCompilerSuf/17 } t.Config#2/9/23 # EXE/25 Tile{ AsIs: e.CppCompilerSuf#2/21 } Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
      refalrts::alloc_ident(vm, context[25], identifiers[ident_EXE]);
      refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
      refalrts::reinit_open_call(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetCppCompilerSuf]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[11] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[23], context[25] );
      res = refalrts::splice_evar( res, context[11], context[17] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::use( res );
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
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: s.Num#2/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-SetCppCompilerSuf/17 } t.Config#2/9/23 # LIB/25 Tile{ AsIs: e.CppCompilerSuf#2/21 } Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
      refalrts::alloc_ident(vm, context[25], identifiers[ident_LIB]);
      refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
      refalrts::reinit_open_call(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_SetCppCompilerSuf]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[11] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[23], context[25] );
      res = refalrts::splice_evar( res, context[11], context[17] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::use( res );
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
        // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/21 )/8 (/11 # NoSources/17 s.Num#2/18 )/12 >/1
        context[21] = context[19];
        context[22] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_NoSources], context[17] ) )
          continue;
        // closed e.Errors#2 as range 21
        //DEBUG: t.Config#2: 9
        //DEBUG: s.Num#2: 18
        //DEBUG: e.Errors#2: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors#2/21 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: s.Num#2/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-SetNoSources/17 } t.Config#2/9/23 # True/25 Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
        refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
        refalrts::alloc_ident(vm, context[25], identifiers[ident_True]);
        refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
        refalrts::reinit_open_call(context[11]);
        refalrts::reinit_name(context[17], functions[efunc_Configm_SetNoSources]);
        refalrts::reinit_close_call(context[12]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[12] );
        refalrts::push_stack( vm, context[11] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[12];
        res = refalrts::splice_evar( res, context[23], context[25] );
        res = refalrts::splice_evar( res, context[11], context[17] );
        res = refalrts::splice_elem( res, context[18] );
        res = refalrts::splice_evar( res, context[9], context[10] );
        res = refalrts::splice_elem( res, context[8] );
        res = refalrts::splice_evar( res, context[21], context[22] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/21 )/8 (/11 # VerboseInc/17 s.Num#2/18 )/12 >/1
      context[21] = context[19];
      context[22] = context[20];
      if( ! refalrts::ident_term( identifiers[ident_VerboseInc], context[17] ) )
        continue;
      // closed e.Errors#2 as range 21
      //DEBUG: t.Config#2: 9
      //DEBUG: s.Num#2: 18
      //DEBUG: e.Errors#2: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors#2/21 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: s.Num#2/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-IncVerbose/17 } t.Config#2/9/23 Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
      refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
      refalrts::reinit_open_call(context[11]);
      refalrts::reinit_name(context[17], functions[efunc_Configm_IncVerbose]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[11] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[11], context[17] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ParseCommandLine\2/4 (/7 t.Config#2/9 e.Errors#2/19 )/8 (/11 # VerboseSet/17 s.Num#2/18 e.Value#2/21 )/12 >/1
    context[19] = context[13];
    context[20] = context[14];
    context[21] = context[15];
    context[22] = context[16];
    if( ! refalrts::ident_term( identifiers[ident_VerboseSet], context[17] ) )
      continue;
    // closed e.Errors#2 as range 19
    // closed e.Value#2 as range 21
    //DEBUG: t.Config#2: 9
    //DEBUG: s.Num#2: 18
    //DEBUG: e.Errors#2: 19
    //DEBUG: e.Value#2: 21

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Update:1/4 AsIs: (/7 } Tile{ AsIs: e.Errors#2/19 } Tile{ AsIs: )/8 } Tile{ AsIs: t.Config#2/9 } Tile{ AsIs: s.Num#2/18 } Tile{ HalfReuse: </11 HalfReuse: & Config-SetVerbose/17 } t.Config#2/9/23 Tile{ AsIs: e.Value#2/21 } Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
    refalrts::copy_evar(vm, context[23], context[24], context[9], context[10]);
    refalrts::update_name(context[4], functions[efunc_gen_Update_B1]);
    refalrts::reinit_open_call(context[11]);
    refalrts::reinit_name(context[17], functions[efunc_Configm_SetVerbose]);
    refalrts::reinit_close_call(context[12]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[11] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[11], context[17] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::use( res );
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
    res = refalrts::splice_elem( res, context[13] );
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
    res = refalrts::splice_elem( res, context[8] );
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

static refalrts::NativeReference nat_ref_gen_ParseCommandLine_L3("ParseCommandLine\\3", COOKIE1_, COOKIE2_, func_gen_ParseCommandLine_L3);


static refalrts::FnResult func_ParseCommandLine(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 397 elems
  refalrts::Iter context[397];
  refalrts::zeros( context, 397 );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch@1/4 } </5 & GetOpt/6 (/7 (/8 # CppCompiler-Exe/9 # Required/10 'c'/11 (/12"cpp-command"/13 )/15 (/16"cpp-command-exe"/17 )/19 )/20 (/21 # CppCompiler-Lib/22 # Required/23 (/24"cpp-command-lib"/25 )/27 )/28 (/29 # CppFlag/30 # Required/31 'f'/32 (/33"cppflag"/34 )/36 )/37 (/38 # CppFlags/39 # Required/40 'F'/41 (/42"cppflags"/43 )/45 )/46 (/47 # DebugInfo/48 # None/49 'g'/50 (/51"debug-info"/52 )/54 )/55 (/56 # ErrorFile/57 # Required/58 'e'/59 (/60"error-file"/61 )/63 )/64 (/65 # GrammarCheck/66 # None/67 (/68"grammar-check"/69 )/71 )/72 (/73 # Incorporated/74 # Required/75 (/76"incorporated"/77 )/79 )/80 (/81 # MarkupContext/82 # None/83 (/84"markup-context"/85 )/87 )/88 (/89 # Opt/90 # Required/91 'O'/92 )/93 (/94 # Warning/95 # Required/96 'W'/97 )/98 (/99 # Prefix/100 # Required/101 'p'/102 (/103"prefix"/104 )/106 )/107 (/108 # Reference/109 # Required/110 'r'/111 (/112"reference"/113 )/115 )/116 (/117 # RuntimeFolder/118 # Required/119 'D'/120 (/121"runtime-dir"/122 )/124 (/125"runtime-directory"/126 )/128 )/129 (/130 # SearchFolder/131 # Required/132 'd'/133 (/134"dir"/135 )/137 (/138"directory"/139 )/141 )/142 (/143 # TargetFileName/144 # Required/145 'o'/146 (/147"target-file"/148 )/150 )/151 (/152 # TargetMode-Exe/153 # None/154 'x'/155 (/156"makeexe"/157 )/159 )/160 (/161 # TargetMode-Lib/162 # None/163 'l'/164 (/165"makelib"/166 )/168 )/169 (/170 # TargetMode-R/171 # None/172 'R'/173 )/174 (/175 # TargetMode-C/176 # None/177 'C'/178 (/179"compile-only"/180 )/182 )/183 (/184 # TargetSuffix-Exe/185 # Required/186 (/187"targsuffix"/188 )/190 (/191"targetsuffix"/192 )/194 (/195"targsuf"/196 )/198 (/199"exesuffix"/200 )/202 (/203"exesuf"/204 )/206 )/207 (/208 # TargetSuffix-Lib/209 # Required/210 (/211"libsuffix"/212 )/214 (/215"libsuf"/216 )/218 )/219 (/220 # ChmodXCommand/221 # Required/222 (/223"chmod-x"/224 )/226 (/227"chmod-x-command"/228 )/230 )/231 (/232 # Prelude/233 # Required/234 (/235"prelude"/236 )/238 )/239 (/240 # ClassicMode/241 # None/242 (/243"classic"/244 )/246 )/247 (/248 # ExtendedMode/249 # None/250 (/251"extended"/252 )/254 )/255 (/256 # Log/257 # Required/258 (/259"log"/260 )/262 )/263 (/264 # TreeOptCycles/265 # Required/266 (/267"opt-tree-cycles"/268 )/270 )/271 (/272 # Help/273 # None/274"h?"/275 (/277"help"/278 )/280 )/281 (/282 # Version/283 # None/284 (/285"version"/286 )/288 )/289 (/290 # KeepRasls/291 # None/292 (/293"keep-rasl"/294 )/296 (/297"keep-rasls"/298 )/300 )/301 (/302 # DontKeepRasls/303 # None/304 (/305"dont-keep-rasl"/306 )/308 (/309"dont-keep-rasls"/310 )/312 )/313 (/314 # TempDir/315 # Required/316 (/317"tmp-dir"/318 )/320 (/321"temp-dir"/322 )/324 )/325 (/326 # REF5RSL-Env/327 # None/328 (/329"ref5rsl"/330 )/332 )/333 (/334 # OverwriteExistRasls/335 # None/336 (/337"overwrite-exist-rasls"/338 )/340 (/341"overwrite-exist-rasl"/342 )/344 )/345 (/346 # DontOverwriteExistRasls/347 # None/348 (/349"dont-overwrite-exist-rasls"/350 )/352 (/353"dont-overwrite-exist-rasl"/354 )/356 )/357 (/358 # CppCompilerSuf-Exe/359 # Required/360 (/361"cpp-command-exe-suf"/362 )/364 )/365 (/366 # CppCompilerSuf-Lib/367 # Required/368 (/369"cpp-command-lib-suf"/370 )/372 )/373 (/374 # NoSources/375 # None/376 (/377"no-sources"/378 )/380 )/381 (/382 # VerboseInc/383 # None/384 'v'/385 )/386 (/387 # VerboseSet/388 # Required/389 (/390"verbose"/391 )/393 )/394 )/395 Tile{ AsIs: e.Arguments#1/2 } >/396 Tile{ AsIs: >/1 ]] }
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
  refalrts::alloc_ident(vm, context[95], identifiers[ident_Warning]);
  refalrts::alloc_ident(vm, context[96], identifiers[ident_Required]);
  refalrts::alloc_char(vm, context[97], 'W');
  refalrts::alloc_close_bracket(vm, context[98]);
  refalrts::alloc_open_bracket(vm, context[99]);
  refalrts::alloc_ident(vm, context[100], identifiers[ident_Prefix]);
  refalrts::alloc_ident(vm, context[101], identifiers[ident_Required]);
  refalrts::alloc_char(vm, context[102], 'p');
  refalrts::alloc_open_bracket(vm, context[103]);
  refalrts::alloc_chars(vm, context[104], context[105], "prefix", 6);
  refalrts::alloc_close_bracket(vm, context[106]);
  refalrts::alloc_close_bracket(vm, context[107]);
  refalrts::alloc_open_bracket(vm, context[108]);
  refalrts::alloc_ident(vm, context[109], identifiers[ident_Reference]);
  refalrts::alloc_ident(vm, context[110], identifiers[ident_Required]);
  refalrts::alloc_char(vm, context[111], 'r');
  refalrts::alloc_open_bracket(vm, context[112]);
  refalrts::alloc_chars(vm, context[113], context[114], "reference", 9);
  refalrts::alloc_close_bracket(vm, context[115]);
  refalrts::alloc_close_bracket(vm, context[116]);
  refalrts::alloc_open_bracket(vm, context[117]);
  refalrts::alloc_ident(vm, context[118], identifiers[ident_RuntimeFolder]);
  refalrts::alloc_ident(vm, context[119], identifiers[ident_Required]);
  refalrts::alloc_char(vm, context[120], 'D');
  refalrts::alloc_open_bracket(vm, context[121]);
  refalrts::alloc_chars(vm, context[122], context[123], "runtime-dir", 11);
  refalrts::alloc_close_bracket(vm, context[124]);
  refalrts::alloc_open_bracket(vm, context[125]);
  refalrts::alloc_chars(vm, context[126], context[127], "runtime-directory", 17);
  refalrts::alloc_close_bracket(vm, context[128]);
  refalrts::alloc_close_bracket(vm, context[129]);
  refalrts::alloc_open_bracket(vm, context[130]);
  refalrts::alloc_ident(vm, context[131], identifiers[ident_SearchFolder]);
  refalrts::alloc_ident(vm, context[132], identifiers[ident_Required]);
  refalrts::alloc_char(vm, context[133], 'd');
  refalrts::alloc_open_bracket(vm, context[134]);
  refalrts::alloc_chars(vm, context[135], context[136], "dir", 3);
  refalrts::alloc_close_bracket(vm, context[137]);
  refalrts::alloc_open_bracket(vm, context[138]);
  refalrts::alloc_chars(vm, context[139], context[140], "directory", 9);
  refalrts::alloc_close_bracket(vm, context[141]);
  refalrts::alloc_close_bracket(vm, context[142]);
  refalrts::alloc_open_bracket(vm, context[143]);
  refalrts::alloc_ident(vm, context[144], identifiers[ident_TargetFileName]);
  refalrts::alloc_ident(vm, context[145], identifiers[ident_Required]);
  refalrts::alloc_char(vm, context[146], 'o');
  refalrts::alloc_open_bracket(vm, context[147]);
  refalrts::alloc_chars(vm, context[148], context[149], "target-file", 11);
  refalrts::alloc_close_bracket(vm, context[150]);
  refalrts::alloc_close_bracket(vm, context[151]);
  refalrts::alloc_open_bracket(vm, context[152]);
  refalrts::alloc_ident(vm, context[153], identifiers[ident_TargetModem_Exe]);
  refalrts::alloc_ident(vm, context[154], identifiers[ident_None]);
  refalrts::alloc_char(vm, context[155], 'x');
  refalrts::alloc_open_bracket(vm, context[156]);
  refalrts::alloc_chars(vm, context[157], context[158], "makeexe", 7);
  refalrts::alloc_close_bracket(vm, context[159]);
  refalrts::alloc_close_bracket(vm, context[160]);
  refalrts::alloc_open_bracket(vm, context[161]);
  refalrts::alloc_ident(vm, context[162], identifiers[ident_TargetModem_Lib]);
  refalrts::alloc_ident(vm, context[163], identifiers[ident_None]);
  refalrts::alloc_char(vm, context[164], 'l');
  refalrts::alloc_open_bracket(vm, context[165]);
  refalrts::alloc_chars(vm, context[166], context[167], "makelib", 7);
  refalrts::alloc_close_bracket(vm, context[168]);
  refalrts::alloc_close_bracket(vm, context[169]);
  refalrts::alloc_open_bracket(vm, context[170]);
  refalrts::alloc_ident(vm, context[171], identifiers[ident_TargetModem_R]);
  refalrts::alloc_ident(vm, context[172], identifiers[ident_None]);
  refalrts::alloc_char(vm, context[173], 'R');
  refalrts::alloc_close_bracket(vm, context[174]);
  refalrts::alloc_open_bracket(vm, context[175]);
  refalrts::alloc_ident(vm, context[176], identifiers[ident_TargetModem_C]);
  refalrts::alloc_ident(vm, context[177], identifiers[ident_None]);
  refalrts::alloc_char(vm, context[178], 'C');
  refalrts::alloc_open_bracket(vm, context[179]);
  refalrts::alloc_chars(vm, context[180], context[181], "compile-only", 12);
  refalrts::alloc_close_bracket(vm, context[182]);
  refalrts::alloc_close_bracket(vm, context[183]);
  refalrts::alloc_open_bracket(vm, context[184]);
  refalrts::alloc_ident(vm, context[185], identifiers[ident_TargetSuffixm_Exe]);
  refalrts::alloc_ident(vm, context[186], identifiers[ident_Required]);
  refalrts::alloc_open_bracket(vm, context[187]);
  refalrts::alloc_chars(vm, context[188], context[189], "targsuffix", 10);
  refalrts::alloc_close_bracket(vm, context[190]);
  refalrts::alloc_open_bracket(vm, context[191]);
  refalrts::alloc_chars(vm, context[192], context[193], "targetsuffix", 12);
  refalrts::alloc_close_bracket(vm, context[194]);
  refalrts::alloc_open_bracket(vm, context[195]);
  refalrts::alloc_chars(vm, context[196], context[197], "targsuf", 7);
  refalrts::alloc_close_bracket(vm, context[198]);
  refalrts::alloc_open_bracket(vm, context[199]);
  refalrts::alloc_chars(vm, context[200], context[201], "exesuffix", 9);
  refalrts::alloc_close_bracket(vm, context[202]);
  refalrts::alloc_open_bracket(vm, context[203]);
  refalrts::alloc_chars(vm, context[204], context[205], "exesuf", 6);
  refalrts::alloc_close_bracket(vm, context[206]);
  refalrts::alloc_close_bracket(vm, context[207]);
  refalrts::alloc_open_bracket(vm, context[208]);
  refalrts::alloc_ident(vm, context[209], identifiers[ident_TargetSuffixm_Lib]);
  refalrts::alloc_ident(vm, context[210], identifiers[ident_Required]);
  refalrts::alloc_open_bracket(vm, context[211]);
  refalrts::alloc_chars(vm, context[212], context[213], "libsuffix", 9);
  refalrts::alloc_close_bracket(vm, context[214]);
  refalrts::alloc_open_bracket(vm, context[215]);
  refalrts::alloc_chars(vm, context[216], context[217], "libsuf", 6);
  refalrts::alloc_close_bracket(vm, context[218]);
  refalrts::alloc_close_bracket(vm, context[219]);
  refalrts::alloc_open_bracket(vm, context[220]);
  refalrts::alloc_ident(vm, context[221], identifiers[ident_ChmodXCommand]);
  refalrts::alloc_ident(vm, context[222], identifiers[ident_Required]);
  refalrts::alloc_open_bracket(vm, context[223]);
  refalrts::alloc_chars(vm, context[224], context[225], "chmod-x", 7);
  refalrts::alloc_close_bracket(vm, context[226]);
  refalrts::alloc_open_bracket(vm, context[227]);
  refalrts::alloc_chars(vm, context[228], context[229], "chmod-x-command", 15);
  refalrts::alloc_close_bracket(vm, context[230]);
  refalrts::alloc_close_bracket(vm, context[231]);
  refalrts::alloc_open_bracket(vm, context[232]);
  refalrts::alloc_ident(vm, context[233], identifiers[ident_Prelude]);
  refalrts::alloc_ident(vm, context[234], identifiers[ident_Required]);
  refalrts::alloc_open_bracket(vm, context[235]);
  refalrts::alloc_chars(vm, context[236], context[237], "prelude", 7);
  refalrts::alloc_close_bracket(vm, context[238]);
  refalrts::alloc_close_bracket(vm, context[239]);
  refalrts::alloc_open_bracket(vm, context[240]);
  refalrts::alloc_ident(vm, context[241], identifiers[ident_ClassicMode]);
  refalrts::alloc_ident(vm, context[242], identifiers[ident_None]);
  refalrts::alloc_open_bracket(vm, context[243]);
  refalrts::alloc_chars(vm, context[244], context[245], "classic", 7);
  refalrts::alloc_close_bracket(vm, context[246]);
  refalrts::alloc_close_bracket(vm, context[247]);
  refalrts::alloc_open_bracket(vm, context[248]);
  refalrts::alloc_ident(vm, context[249], identifiers[ident_ExtendedMode]);
  refalrts::alloc_ident(vm, context[250], identifiers[ident_None]);
  refalrts::alloc_open_bracket(vm, context[251]);
  refalrts::alloc_chars(vm, context[252], context[253], "extended", 8);
  refalrts::alloc_close_bracket(vm, context[254]);
  refalrts::alloc_close_bracket(vm, context[255]);
  refalrts::alloc_open_bracket(vm, context[256]);
  refalrts::alloc_ident(vm, context[257], identifiers[ident_Log]);
  refalrts::alloc_ident(vm, context[258], identifiers[ident_Required]);
  refalrts::alloc_open_bracket(vm, context[259]);
  refalrts::alloc_chars(vm, context[260], context[261], "log", 3);
  refalrts::alloc_close_bracket(vm, context[262]);
  refalrts::alloc_close_bracket(vm, context[263]);
  refalrts::alloc_open_bracket(vm, context[264]);
  refalrts::alloc_ident(vm, context[265], identifiers[ident_TreeOptCycles]);
  refalrts::alloc_ident(vm, context[266], identifiers[ident_Required]);
  refalrts::alloc_open_bracket(vm, context[267]);
  refalrts::alloc_chars(vm, context[268], context[269], "opt-tree-cycles", 15);
  refalrts::alloc_close_bracket(vm, context[270]);
  refalrts::alloc_close_bracket(vm, context[271]);
  refalrts::alloc_open_bracket(vm, context[272]);
  refalrts::alloc_ident(vm, context[273], identifiers[ident_Help]);
  refalrts::alloc_ident(vm, context[274], identifiers[ident_None]);
  refalrts::alloc_chars(vm, context[275], context[276], "h?", 2);
  refalrts::alloc_open_bracket(vm, context[277]);
  refalrts::alloc_chars(vm, context[278], context[279], "help", 4);
  refalrts::alloc_close_bracket(vm, context[280]);
  refalrts::alloc_close_bracket(vm, context[281]);
  refalrts::alloc_open_bracket(vm, context[282]);
  refalrts::alloc_ident(vm, context[283], identifiers[ident_Version]);
  refalrts::alloc_ident(vm, context[284], identifiers[ident_None]);
  refalrts::alloc_open_bracket(vm, context[285]);
  refalrts::alloc_chars(vm, context[286], context[287], "version", 7);
  refalrts::alloc_close_bracket(vm, context[288]);
  refalrts::alloc_close_bracket(vm, context[289]);
  refalrts::alloc_open_bracket(vm, context[290]);
  refalrts::alloc_ident(vm, context[291], identifiers[ident_KeepRasls]);
  refalrts::alloc_ident(vm, context[292], identifiers[ident_None]);
  refalrts::alloc_open_bracket(vm, context[293]);
  refalrts::alloc_chars(vm, context[294], context[295], "keep-rasl", 9);
  refalrts::alloc_close_bracket(vm, context[296]);
  refalrts::alloc_open_bracket(vm, context[297]);
  refalrts::alloc_chars(vm, context[298], context[299], "keep-rasls", 10);
  refalrts::alloc_close_bracket(vm, context[300]);
  refalrts::alloc_close_bracket(vm, context[301]);
  refalrts::alloc_open_bracket(vm, context[302]);
  refalrts::alloc_ident(vm, context[303], identifiers[ident_DontKeepRasls]);
  refalrts::alloc_ident(vm, context[304], identifiers[ident_None]);
  refalrts::alloc_open_bracket(vm, context[305]);
  refalrts::alloc_chars(vm, context[306], context[307], "dont-keep-rasl", 14);
  refalrts::alloc_close_bracket(vm, context[308]);
  refalrts::alloc_open_bracket(vm, context[309]);
  refalrts::alloc_chars(vm, context[310], context[311], "dont-keep-rasls", 15);
  refalrts::alloc_close_bracket(vm, context[312]);
  refalrts::alloc_close_bracket(vm, context[313]);
  refalrts::alloc_open_bracket(vm, context[314]);
  refalrts::alloc_ident(vm, context[315], identifiers[ident_TempDir]);
  refalrts::alloc_ident(vm, context[316], identifiers[ident_Required]);
  refalrts::alloc_open_bracket(vm, context[317]);
  refalrts::alloc_chars(vm, context[318], context[319], "tmp-dir", 7);
  refalrts::alloc_close_bracket(vm, context[320]);
  refalrts::alloc_open_bracket(vm, context[321]);
  refalrts::alloc_chars(vm, context[322], context[323], "temp-dir", 8);
  refalrts::alloc_close_bracket(vm, context[324]);
  refalrts::alloc_close_bracket(vm, context[325]);
  refalrts::alloc_open_bracket(vm, context[326]);
  refalrts::alloc_ident(vm, context[327], identifiers[ident_REF5RSLm_Env]);
  refalrts::alloc_ident(vm, context[328], identifiers[ident_None]);
  refalrts::alloc_open_bracket(vm, context[329]);
  refalrts::alloc_chars(vm, context[330], context[331], "ref5rsl", 7);
  refalrts::alloc_close_bracket(vm, context[332]);
  refalrts::alloc_close_bracket(vm, context[333]);
  refalrts::alloc_open_bracket(vm, context[334]);
  refalrts::alloc_ident(vm, context[335], identifiers[ident_OverwriteExistRasls]);
  refalrts::alloc_ident(vm, context[336], identifiers[ident_None]);
  refalrts::alloc_open_bracket(vm, context[337]);
  refalrts::alloc_chars(vm, context[338], context[339], "overwrite-exist-rasls", 21);
  refalrts::alloc_close_bracket(vm, context[340]);
  refalrts::alloc_open_bracket(vm, context[341]);
  refalrts::alloc_chars(vm, context[342], context[343], "overwrite-exist-rasl", 20);
  refalrts::alloc_close_bracket(vm, context[344]);
  refalrts::alloc_close_bracket(vm, context[345]);
  refalrts::alloc_open_bracket(vm, context[346]);
  refalrts::alloc_ident(vm, context[347], identifiers[ident_DontOverwriteExistRasls]);
  refalrts::alloc_ident(vm, context[348], identifiers[ident_None]);
  refalrts::alloc_open_bracket(vm, context[349]);
  refalrts::alloc_chars(vm, context[350], context[351], "dont-overwrite-exist-rasls", 26);
  refalrts::alloc_close_bracket(vm, context[352]);
  refalrts::alloc_open_bracket(vm, context[353]);
  refalrts::alloc_chars(vm, context[354], context[355], "dont-overwrite-exist-rasl", 25);
  refalrts::alloc_close_bracket(vm, context[356]);
  refalrts::alloc_close_bracket(vm, context[357]);
  refalrts::alloc_open_bracket(vm, context[358]);
  refalrts::alloc_ident(vm, context[359], identifiers[ident_CppCompilerSufm_Exe]);
  refalrts::alloc_ident(vm, context[360], identifiers[ident_Required]);
  refalrts::alloc_open_bracket(vm, context[361]);
  refalrts::alloc_chars(vm, context[362], context[363], "cpp-command-exe-suf", 19);
  refalrts::alloc_close_bracket(vm, context[364]);
  refalrts::alloc_close_bracket(vm, context[365]);
  refalrts::alloc_open_bracket(vm, context[366]);
  refalrts::alloc_ident(vm, context[367], identifiers[ident_CppCompilerSufm_Lib]);
  refalrts::alloc_ident(vm, context[368], identifiers[ident_Required]);
  refalrts::alloc_open_bracket(vm, context[369]);
  refalrts::alloc_chars(vm, context[370], context[371], "cpp-command-lib-suf", 19);
  refalrts::alloc_close_bracket(vm, context[372]);
  refalrts::alloc_close_bracket(vm, context[373]);
  refalrts::alloc_open_bracket(vm, context[374]);
  refalrts::alloc_ident(vm, context[375], identifiers[ident_NoSources]);
  refalrts::alloc_ident(vm, context[376], identifiers[ident_None]);
  refalrts::alloc_open_bracket(vm, context[377]);
  refalrts::alloc_chars(vm, context[378], context[379], "no-sources", 10);
  refalrts::alloc_close_bracket(vm, context[380]);
  refalrts::alloc_close_bracket(vm, context[381]);
  refalrts::alloc_open_bracket(vm, context[382]);
  refalrts::alloc_ident(vm, context[383], identifiers[ident_VerboseInc]);
  refalrts::alloc_ident(vm, context[384], identifiers[ident_None]);
  refalrts::alloc_char(vm, context[385], 'v');
  refalrts::alloc_close_bracket(vm, context[386]);
  refalrts::alloc_open_bracket(vm, context[387]);
  refalrts::alloc_ident(vm, context[388], identifiers[ident_VerboseSet]);
  refalrts::alloc_ident(vm, context[389], identifiers[ident_Required]);
  refalrts::alloc_open_bracket(vm, context[390]);
  refalrts::alloc_chars(vm, context[391], context[392], "verbose", 7);
  refalrts::alloc_close_bracket(vm, context[393]);
  refalrts::alloc_close_bracket(vm, context[394]);
  refalrts::alloc_close_bracket(vm, context[395]);
  refalrts::alloc_close_call(vm, context[396]);
  refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[396] );
  refalrts::push_stack( vm, context[5] );
  refalrts::link_brackets( context[7], context[395] );
  refalrts::link_brackets( context[387], context[394] );
  refalrts::link_brackets( context[390], context[393] );
  refalrts::link_brackets( context[382], context[386] );
  refalrts::link_brackets( context[374], context[381] );
  refalrts::link_brackets( context[377], context[380] );
  refalrts::link_brackets( context[366], context[373] );
  refalrts::link_brackets( context[369], context[372] );
  refalrts::link_brackets( context[358], context[365] );
  refalrts::link_brackets( context[361], context[364] );
  refalrts::link_brackets( context[346], context[357] );
  refalrts::link_brackets( context[353], context[356] );
  refalrts::link_brackets( context[349], context[352] );
  refalrts::link_brackets( context[334], context[345] );
  refalrts::link_brackets( context[341], context[344] );
  refalrts::link_brackets( context[337], context[340] );
  refalrts::link_brackets( context[326], context[333] );
  refalrts::link_brackets( context[329], context[332] );
  refalrts::link_brackets( context[314], context[325] );
  refalrts::link_brackets( context[321], context[324] );
  refalrts::link_brackets( context[317], context[320] );
  refalrts::link_brackets( context[302], context[313] );
  refalrts::link_brackets( context[309], context[312] );
  refalrts::link_brackets( context[305], context[308] );
  refalrts::link_brackets( context[290], context[301] );
  refalrts::link_brackets( context[297], context[300] );
  refalrts::link_brackets( context[293], context[296] );
  refalrts::link_brackets( context[282], context[289] );
  refalrts::link_brackets( context[285], context[288] );
  refalrts::link_brackets( context[272], context[281] );
  refalrts::link_brackets( context[277], context[280] );
  refalrts::link_brackets( context[264], context[271] );
  refalrts::link_brackets( context[267], context[270] );
  refalrts::link_brackets( context[256], context[263] );
  refalrts::link_brackets( context[259], context[262] );
  refalrts::link_brackets( context[248], context[255] );
  refalrts::link_brackets( context[251], context[254] );
  refalrts::link_brackets( context[240], context[247] );
  refalrts::link_brackets( context[243], context[246] );
  refalrts::link_brackets( context[232], context[239] );
  refalrts::link_brackets( context[235], context[238] );
  refalrts::link_brackets( context[220], context[231] );
  refalrts::link_brackets( context[227], context[230] );
  refalrts::link_brackets( context[223], context[226] );
  refalrts::link_brackets( context[208], context[219] );
  refalrts::link_brackets( context[215], context[218] );
  refalrts::link_brackets( context[211], context[214] );
  refalrts::link_brackets( context[184], context[207] );
  refalrts::link_brackets( context[203], context[206] );
  refalrts::link_brackets( context[199], context[202] );
  refalrts::link_brackets( context[195], context[198] );
  refalrts::link_brackets( context[191], context[194] );
  refalrts::link_brackets( context[187], context[190] );
  refalrts::link_brackets( context[175], context[183] );
  refalrts::link_brackets( context[179], context[182] );
  refalrts::link_brackets( context[170], context[174] );
  refalrts::link_brackets( context[161], context[169] );
  refalrts::link_brackets( context[165], context[168] );
  refalrts::link_brackets( context[152], context[160] );
  refalrts::link_brackets( context[156], context[159] );
  refalrts::link_brackets( context[143], context[151] );
  refalrts::link_brackets( context[147], context[150] );
  refalrts::link_brackets( context[130], context[142] );
  refalrts::link_brackets( context[138], context[141] );
  refalrts::link_brackets( context[134], context[137] );
  refalrts::link_brackets( context[117], context[129] );
  refalrts::link_brackets( context[125], context[128] );
  refalrts::link_brackets( context[121], context[124] );
  refalrts::link_brackets( context[108], context[116] );
  refalrts::link_brackets( context[112], context[115] );
  refalrts::link_brackets( context[99], context[107] );
  refalrts::link_brackets( context[103], context[106] );
  refalrts::link_brackets( context[94], context[98] );
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
  res = refalrts::splice_elem( res, context[396] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[395] );
  refalrts::use( res );
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
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_evar( res, context[12], context[1] );
  res = refalrts::splice_elem( res, context[7] );
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
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Prout/4 HalfReuse: 'r'/1 }"lc-core flags... filenames...\nrlc-core @flag-list-file.txt\n\n-c, --cpp-command, --cpp-command-exe command-line\n        C++ command line prefix for building executable module\n--cpp-command-lib command-line\n        C++ command line prefix for building library module\n-f, --cpp-flag flag\n        Additional flag for C++ compiler, quoted in command line\n-F, --cpp-flags flags\n        Additional flags for C++ compiler, don\'t quoted in command line\n-g, --debug-info\n        Information of variable table for step-by-step debugger\n-e, --error-file filename\n        Compiler creates empty file with this name if compilation failed\n--grammar-check\n        Dont compile sources, only syntax (w/o semantic) check for sources\n--incorporated filename\n        Marks that a module with the name is statically linked to this module\n--markup-context\n        Save catched variable names in closure content\n-O keys[change]\n        Optimization keys:\n          -OP - conjoint pattern optimization\n          -OR - building result optimization\n          -Od - use direct code generation instead interpretation code,\n                compile functions to C++ instead RASL\n          -OT - tree optimization (expands direct calls for closures)\n          -OD - drive functions with $DRIVE, inline functions with $INLINE\n          -OI - inline functions with $DRIVE and $INLINE\n          -OS - specialize functions with $SPEC\n          -OA - automatically markup optimizable functions\n          -Oi - optimize intrinsic functions\n          -OG - global optimization\n          -Ox, -Oy, -Oz - experimental keys, do nothing in release\n        Flags D, I, S, A, i implicitly contain T\n        Change key mode (optional):\n          -O...+ - set the flags with previous setted\n          -O...- - reject the flags from previous setted\n          -O...= - assign the flags, previous setted will be skipped\n-W keywords\n        Warning keywords:\n          -Wall - show all warnings\n          -Wscreening, -Wno-... - check/don\'t screening sentences\n                                  (disabled by default)\n          -Wnul-in-compound, -Wno-... - check/don\'t nuls in compounds\n                                        (enabled by default)\n          -Wpseudofunctions, -Wno-... - check/don\'t pseudofunction\n                                        correctness (enabled by default)\n          -Werror[=...], -Wno-error[=...] - treat/don\'t all or only provided\n                                            warning(s) as error(s)\n-p, --prefix prefix-name\n        set prefix file name\n-r, --reference reference-name\n        Compiled module depends from the reference\n-D, --runtime-dir, --runtime-directory dir\n        Add the directory to search list and include list for C++ compiler\n-d, --dir, --directory dir\n        Add the directory to search list\n-o, --target-file target-file-name\n        Name of target file\n-x, --makeexe\n        Compile to executable file\n-l, --makelib\n        Compile to library file (with or w/o native code)\n-R      Compile to library RASL module (w/o native code)\n-C, --compile-only\n        Compile sources w/o linking\n--targsuffix, --targetsuffix, --targsuf, --exesuffix, --exesuf suffix\n        Suffix for executable file (for example, .exe)\n--libsuffix, --libsuf suffix\n        Suffix for library file (for example, .dll or .so)\n--chmod-x, --chmod-x-command command\n        Must be empty on Windws, \"chmod +x\" on POSIX\n--prelude filename.refi\n        Prelude file with builtin functions declarations\n--classic, --extended\n        Switch Refal-5-lambda syntax analyzer to full compatibility\n        with classic Refal-5 or not. Default is --extended\n--log logfile.log\n        Logs compilation process. Compiler writes to log syntax tree\n        after desugaring, after tree optimization, high-leve RASL\n--opt-tree-cycles number\n        Max number of tree optimization passes\n--help  Print this help\n--version\n        Print version\n--keep-rasl, --keep-rasls, --dont-keep-rasl, --dont-keep-rasls\n        Save or don\'t save temporary .rasl after compilation\n--tmp-dir, --temp-dir directory\n        Directory for intermediate .rasl files, current is default\n--ref5rsl\n        Use environment variable REF5RSL as search path\n--overwrite-exist-rasls, --dont-overwrite-exist-rasls,\n--overwrite-exist-rasl, --dont-overwrite-exist-rasl\n        If tmp-dir already contain file with name that being produced\n        new file use new name\n--no-sources\n        Don\'t show error when there are no sources in command line\n-v      Increment log level\n--verbose=N\n        Set log level to N.\n\nLong keys with params may be used with equation:\n--tmp-dir dirname or --tmp-dir=dirname\n\nEach line of arg-list-file.txt is interpreted as independed key\n"/5 >/7 Tile{ ]] }
  refalrts::alloc_chars(vm, context[5], context[6], "lc-core flags... filenames...\nrlc-core @flag-list-file.txt\n\n-c, --cpp-command, --cpp-command-exe command-line\n        C++ command line prefix for building executable module\n--cpp-command-lib command-line\n        C++ command line prefix for building library module\n-f, --cpp-flag flag\n        Additional flag for C++ compiler, quoted in command line\n-F, --cpp-flags flags\n        Additional flags for C++ compiler, don\'t quoted in command line\n-g, --debug-info\n        Information of variable table for step-by-step debugger\n-e, --error-file filename\n        Compiler creates empty file with this name if compilation failed\n--grammar-check\n        Dont compile sources, only syntax (w/o semantic) check for sources\n--incorporated filename\n        Marks that a module with the name is statically linked to this module\n--markup-context\n        Save catched variable names in closure content\n-O keys[change]\n        Optimization keys:\n          -OP - conjoint pattern optimization\n          -OR - building result optimization\n          -Od - use direct code generation instead interpretation code,\n                compile functions to C++ instead RASL\n          -OT - tree optimization (expands direct calls for closures)\n          -OD - drive functions with $DRIVE, inline functions with $INLINE\n          -OI - inline functions with $DRIVE and $INLINE\n          -OS - specialize functions with $SPEC\n          -OA - automatically markup optimizable functions\n          -Oi - optimize intrinsic functions\n          -OG - global optimization\n          -Ox, -Oy, -Oz - experimental keys, do nothing in release\n        Flags D, I, S, A, i implicitly contain T\n        Change key mode (optional):\n          -O...+ - set the flags with previous setted\n          -O...- - reject the flags from previous setted\n          -O...= - assign the flags, previous setted will be skipped\n-W keywords\n        Warning keywords:\n          -Wall - show all warnings\n          -Wscreening, -Wno-... - check/don\'t screening sentences\n                                  (disabled by default)\n          -Wnul-in-compound, -Wno-... - check/don\'t nuls in compounds\n                                        (enabled by default)\n          -Wpseudofunctions, -Wno-... - check/don\'t pseudofunction\n                                        correctness (enabled by default)\n          -Werror[=...], -Wno-error[=...] - treat/don\'t all or only provided\n                                            warning(s) as error(s)\n-p, --prefix prefix-name\n        set prefix file name\n-r, --reference reference-name\n        Compiled module depends from the reference\n-D, --runtime-dir, --runtime-directory dir\n        Add the directory to search list and include list for C++ compiler\n-d, --dir, --directory dir\n        Add the directory to search list\n-o, --target-file target-file-name\n        Name of target file\n-x, --makeexe\n        Compile to executable file\n-l, --makelib\n        Compile to library file (with or w/o native code)\n-R      Compile to library RASL module (w/o native code)\n-C, --compile-only\n        Compile sources w/o linking\n--targsuffix, --targetsuffix, --targsuf, --exesuffix, --exesuf suffix\n        Suffix for executable file (for example, .exe)\n--libsuffix, --libsuf suffix\n        Suffix for library file (for example, .dll or .so)\n--chmod-x, --chmod-x-command command\n        Must be empty on Windws, \"chmod +x\" on POSIX\n--prelude filename.refi\n        Prelude file with builtin functions declarations\n--classic, --extended\n        Switch Refal-5-lambda syntax analyzer to full compatibility\n        with classic Refal-5 or not. Default is --extended\n--log logfile.log\n        Logs compilation process. Compiler writes to log syntax tree\n        after desugaring, after tree optimization, high-leve RASL\n--opt-tree-cycles number\n        Max number of tree optimization passes\n--help  Print this help\n--version\n        Print version\n--keep-rasl, --keep-rasls, --dont-keep-rasl, --dont-keep-rasls\n        Save or don\'t save temporary .rasl after compilation\n--tmp-dir, --temp-dir directory\n        Directory for intermediate .rasl files, current is default\n--ref5rsl\n        Use environment variable REF5RSL as search path\n--overwrite-exist-rasls, --dont-overwrite-exist-rasls,\n--overwrite-exist-rasl, --dont-overwrite-exist-rasl\n        If tmp-dir already contain file with name that being produced\n        new file use new name\n--no-sources\n        Don\'t show error when there are no sources in command line\n-v      Increment log level\n--verbose=N\n        Set log level to N.\n\nLong keys with params may be used with equation:\n--tmp-dir dirname or --tmp-dir=dirname\n\nEach line of arg-list-file.txt is interpreted as independed key\n", 4711);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_Prout]);
  refalrts::reinit_char(context[1], 'r');
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrintHelp("PrintHelp", COOKIE1_, COOKIE2_, func_PrintHelp);


static refalrts::FnResult func_gen_Apply_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & Apply@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Apply@2/4 t.new#1/5 t.new#2/7 t.new#3/9 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & Apply@2/4 s.Fn#1/5 t.Acc#1/7 t.Next#1/9 >/1
    if( ! refalrts::svar_term( context[5], context[5] ) )
      continue;
    //DEBUG: t.Acc#1: 7
    //DEBUG: t.Next#1: 9
    //DEBUG: s.Fn#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: s.Fn#1/5 AsIs: t.Acc#1/7 AsIs: t.Next#1/9 HalfReuse: & $table/1 } >/11 Tile{ ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::update_name(context[4], functions[efunc_u_u_Metau_Mu]);
    refalrts::reinit_name(context[1], functions[efunc_d_table]);
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_elem( res, context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Apply@2/4 (/5 t.Closure#1/13 e.Bounded#1/11 )/6 t.Acc#1/7 t.Next#1/9 >/1
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_term( context[11], context[12], context[5] ) )
      continue;
    context[14] = refalrts::tvar_left( context[13], context[11], context[12] );
    if( ! context[14] )
      continue;
    // closed e.Bounded#1 as range 11
    //DEBUG: t.Acc#1: 7
    //DEBUG: t.Next#1: 9
    //DEBUG: t.Closure#1: 13
    //DEBUG: e.Bounded#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/5 {REMOVED TILE} {REMOVED TILE} )/6 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Apply@4/4 } Tile{ AsIs: t.Closure#1/13 } Tile{ AsIs: e.Bounded#1/11 } Tile{ AsIs: t.Acc#1/7 AsIs: t.Next#1/9 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_Apply_Z4]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Apply@2/4 t.dyn#0/5 t.Acc#1/7 t.Next#1/9 >/1
  //DEBUG: t.dyn#0: 5
  //DEBUG: t.Acc#1: 7
  //DEBUG: t.Next#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Apply@0/4 AsIs: t.dyn#0/5 AsIs: t.Acc#1/7 AsIs: t.Next#1/9 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Apply_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Apply_Z2("Apply@2", COOKIE1_, COOKIE2_, func_gen_Apply_Z2);


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
        res = refalrts::splice_elem( res, context[0] );
        res = refalrts::splice_evar( res, context[21], context[23] );
        res = refalrts::splice_evar( res, context[15], context[16] );
        res = refalrts::splice_evar( res, context[19], context[20] );
        res = refalrts::splice_elem( res, context[4] );
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
        res = refalrts::splice_elem( res, context[0] );
        res = refalrts::splice_elem( res, context[22] );
        res = refalrts::splice_elem( res, context[19] );
        res = refalrts::splice_evar( res, context[20], context[21] );
        res = refalrts::splice_elem( res, context[4] );
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
        res = refalrts::splice_elem( res, context[0] );
        res = refalrts::splice_elem( res, context[21] );
        res = refalrts::splice_evar( res, context[15], context[16] );
        res = refalrts::splice_evar( res, context[19], context[20] );
        res = refalrts::splice_elem( res, context[4] );
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
        res = refalrts::splice_elem( res, context[0] );
        res = refalrts::splice_evar( res, context[21], context[22] );
        res = refalrts::splice_evar( res, context[15], context[16] );
        res = refalrts::splice_evar( res, context[19], context[20] );
        res = refalrts::splice_elem( res, context[4] );
        res = refalrts::splice_evar( res, context[7], context[14] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@1/4 (/7 s.Pos#3/13 # BadValue-Warning/14 e.1#0/15 )/8 e.Tail#1/17 >/1
        context[15] = context[11];
        context[16] = context[12];
        context[17] = context[9];
        context[18] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_BadValuem_Warning], context[14] ) )
          continue;
        // closed e.1#0 as range 15
        // closed e.Tail#1 as range 17
        //DEBUG: s.Pos#3: 13
        //DEBUG: e.1#0: 15
        //DEBUG: e.Tail#1: 17

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#3/13 HalfReuse: 'o'/14 } Tile{ HalfReuse: 'p'/4 }"tion -W expects \'all\', \'[no-]error[=...]\', \'[no-]screening\', \'[no-]pseudofunctions\' \'[no-]nul-in-compound\', but got \'"/19 Tile{ AsIs: e.1#0/15 } '\''/21 )/22 Tile{ AsIs: </0 } Tile{ HalfReuse: & Map@1/8 AsIs: e.Tail#1/17 AsIs: >/1 ]] }
        refalrts::alloc_chars(vm, context[19], context[20], "tion -W expects \'all\', \'[no-]error[=...]\', \'[no-]screening\', \'[no-]pseudofunctions\' \'[no-]nul-in-compound\', but got \'", 117);
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
        res = refalrts::splice_elem( res, context[0] );
        res = refalrts::splice_evar( res, context[21], context[22] );
        res = refalrts::splice_evar( res, context[15], context[16] );
        res = refalrts::splice_evar( res, context[19], context[20] );
        res = refalrts::splice_elem( res, context[4] );
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
          //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: s.Pos3 #13/4 HalfReuse: 'o'/7 }"ption --error-file expects a non-empty argument"/19 )/21 Tile{ HalfReuse: </14 HalfReuse: & Map@1/8 AsIs: e.Tail#1/17 AsIs: >/1 ]] }
          refalrts::alloc_chars(vm, context[19], context[20], "ption --error-file expects a non-empty argument", 47);
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
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: s.Pos3 #13/4 HalfReuse: 'o'/7 }"ptions --makeexe (-x), --makelib (-l) and -R should appear once"/19 )/21 Tile{ HalfReuse: </14 HalfReuse: & Map@1/8 AsIs: e.Tail#1/17 AsIs: >/1 ]] }
        refalrts::alloc_chars(vm, context[19], context[20], "ptions --makeexe (-x), --makelib (-l) and -R should appear once", 63);
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
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#3/13 HalfReuse: 'o'/14 } Tile{ HalfReuse: 'p'/4 }"tion --opt-tree-cycles expects a number parameter"/19 )/21 Tile{ AsIs: </0 } Tile{ HalfReuse: & Map@1/8 AsIs: e.Tail#1/17 AsIs: >/1 ]] }
      refalrts::alloc_chars(vm, context[19], context[20], "tion --opt-tree-cycles expects a number parameter", 49);
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
      res = refalrts::splice_elem( res, context[0] );
      res = refalrts::splice_evar( res, context[19], context[21] );
      res = refalrts::splice_elem( res, context[4] );
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseCommandLine\4$2\1*8/4 AsIs: t.Next#1/7 } >/11 </12 & Map@1/13 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z1]);
    refalrts::update_name(context[4], functions[efunc_gen_ParseCommandLine_L4S2L1D8]);
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
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & ParseCommandLine\4$2\1@0/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_ParseCommandLine_L4S2L1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z1("Map@1", COOKIE1_, COOKIE2_, func_gen_Map_Z1);


static refalrts::FnResult func_gen_Fetch_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & Fetch@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Fetch@1/4 (/9 e.0#0/7 )/10 e.#0/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    // closed e.0#0 as range 7
    // closed e.#0 as range 5
    //DEBUG: e.0#0: 7
    //DEBUG: e.#0: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </11 & Fetch@2/12 (/13 Tile{ AsIs: </0 Reuse: & Config-Create/4 HalfReuse: >/9 AsIs: e.0#0/7 AsIs: )/10 AsIs: e.#0/5 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[11]);
    refalrts::alloc_name(vm, context[12], functions[efunc_gen_Fetch_Z2]);
    refalrts::alloc_open_bracket(vm, context[13]);
    refalrts::update_name(context[4], functions[efunc_Configm_Create]);
    refalrts::reinit_close_call(context[9]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[11] );
    refalrts::link_brackets( context[13], context[10] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[11], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Fetch@1/4 e.Argument#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Argument#1 as range 5
    //DEBUG: e.Argument#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </7 & Fetch@2/8 Tile{ AsIs: </0 Reuse: & ParseCommandLine\1*1/4 AsIs: e.Argument#1/5 AsIs: >/1 } >/9 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[8], functions[efunc_gen_Fetch_Z2]);
    refalrts::alloc_close_call(vm, context[9]);
    refalrts::update_name(context[4], functions[efunc_gen_ParseCommandLine_L1D1]);
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Fetch@1/4 e.arg#0/2 >/1
  // closed e.arg#0 as range 2
  //DEBUG: e.arg#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch@0/4 AsIs: e.arg#0/2 HalfReuse: [*]/1 } & Pipe$2\1@0/5 & ParseCommandLine\1@0/6 (/7 (/8 & MapAccum@0/9 & ParseCommandLine\2@0/10 )/11 (/12 & MapAccum@0/13 & ParseCommandLine\3@0/14 )/15 & ParseCommandLine\4@0/16 )/17 {*}/18 >/19 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_gen_Pipe_S2L1Z0]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_ParseCommandLine_L1Z0]);
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_open_bracket(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_gen_MapAccum_Z0]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_ParseCommandLine_L2Z0]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_MapAccum_Z0]);
  refalrts::alloc_name(vm, context[14], functions[efunc_gen_ParseCommandLine_L3Z0]);
  refalrts::alloc_close_bracket(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_gen_ParseCommandLine_L4Z0]);
  refalrts::alloc_close_bracket(vm, context[17]);
  refalrts::alloc_unwrapped_closure(vm, context[18], context[1]);
  refalrts::alloc_close_call(vm, context[19]);
  refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z0]);
  refalrts::reinit_closure_head(context[1]);
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[17] );
  refalrts::link_brackets( context[12], context[15] );
  refalrts::link_brackets( context[8], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[19] );
  refalrts::use( res );
  refalrts::wrap_closure( context[18] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Fetch_Z1("Fetch@1", COOKIE1_, COOKIE2_, func_gen_Fetch_Z1);


static refalrts::FnResult func_gen_Apply_Z3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & Apply@3/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Apply@3/4 t.new#1/5 e.new#2/2 t.new#3/7 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_right( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Apply@3/4 s.Fn#1/5 e.X#0/9 t.X#0/7 >/1
    context[9] = context[2];
    context[10] = context[3];
    if( ! refalrts::svar_term( context[5], context[5] ) )
      continue;
    // closed e.X#0 as range 9
    //DEBUG: t.X#0: 7
    //DEBUG: s.Fn#1: 5
    //DEBUG: e.X#0: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: s.Fn#1/5 AsIs: e.X#0/9 AsIs: t.X#0/7 HalfReuse: & $table/1 } >/11 Tile{ ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::update_name(context[4], functions[efunc_u_u_Metau_Mu]);
    refalrts::reinit_name(context[1], functions[efunc_d_table]);
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_elem( res, context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Apply@3/4 (/5 t.Closure#1/13 e.Bounded#1/11 )/6 e.X#0/9 t.X#0/7 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_term( context[11], context[12], context[5] ) )
      continue;
    // closed e.X#0 as range 9
    context[14] = refalrts::tvar_left( context[13], context[11], context[12] );
    if( ! context[14] )
      continue;
    // closed e.Bounded#1 as range 11
    //DEBUG: t.X#0: 7
    //DEBUG: e.X#0: 9
    //DEBUG: t.Closure#1: 13
    //DEBUG: e.Bounded#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/5 {REMOVED TILE} {REMOVED TILE} )/6 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Apply@3/4 } Tile{ AsIs: t.Closure#1/13 } Tile{ AsIs: e.Bounded#1/11 } Tile{ AsIs: e.X#0/9 } Tile{ AsIs: t.X#0/7 AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Apply@3/4 t.dyn#0/5 e.X#0/2 t.X#0/7 >/1
  // closed e.X#0 as range 2
  //DEBUG: t.dyn#0: 5
  //DEBUG: t.X#0: 7
  //DEBUG: e.X#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Apply@0/4 AsIs: t.dyn#0/5 AsIs: e.X#0/2 AsIs: t.X#0/7 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Apply_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Apply_Z3("Apply@3", COOKIE1_, COOKIE2_, func_gen_Apply_Z3);


static refalrts::FnResult func_gen_Apply_Z4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & Apply@4/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Apply@4/4 t.new#1/5 e.new#2/2 t.new#3/9 t.new#4/7 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_right( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  context[10] = refalrts::tvar_right( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Apply@4/4 s.Fn#1/5 e.X#0/11 t.X#0/9 t.X0#0/7 >/1
    context[11] = context[2];
    context[12] = context[3];
    if( ! refalrts::svar_term( context[5], context[5] ) )
      continue;
    // closed e.X#0 as range 11
    //DEBUG: t.X#0: 9
    //DEBUG: t.X0#0: 7
    //DEBUG: s.Fn#1: 5
    //DEBUG: e.X#0: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: s.Fn#1/5 AsIs: e.X#0/11 AsIs: t.X#0/9 AsIs: t.X0#0/7 HalfReuse: & $table/1 } >/13 Tile{ ]] }
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::update_name(context[4], functions[efunc_u_u_Metau_Mu]);
    refalrts::reinit_name(context[1], functions[efunc_d_table]);
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_elem( res, context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Apply@4/4 (/5 t.Closure#1/15 e.Bounded#1/13 )/6 e.X#0/11 t.X#0/9 t.X0#0/7 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[13] = 0;
    context[14] = 0;
    if( ! refalrts::brackets_term( context[13], context[14], context[5] ) )
      continue;
    // closed e.X#0 as range 11
    context[16] = refalrts::tvar_left( context[15], context[13], context[14] );
    if( ! context[16] )
      continue;
    // closed e.Bounded#1 as range 13
    //DEBUG: t.X#0: 9
    //DEBUG: t.X0#0: 7
    //DEBUG: e.X#0: 11
    //DEBUG: t.Closure#1: 15
    //DEBUG: e.Bounded#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/5 {REMOVED TILE} {REMOVED TILE} )/6 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Apply@4/4 } Tile{ AsIs: t.Closure#1/15 } Tile{ AsIs: e.Bounded#1/13 } Tile{ AsIs: e.X#0/11 } Tile{ AsIs: t.X#0/9 AsIs: t.X0#0/7 AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Apply@4/4 t.dyn#0/5 e.X#0/2 t.X#0/9 t.X0#0/7 >/1
  // closed e.X#0 as range 2
  //DEBUG: t.dyn#0: 5
  //DEBUG: t.X#0: 9
  //DEBUG: t.X0#0: 7
  //DEBUG: e.X#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Apply@0/4 AsIs: t.dyn#0/5 AsIs: e.X#0/2 AsIs: t.X#0/9 AsIs: t.X0#0/7 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Apply_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Apply_Z4("Apply@4", COOKIE1_, COOKIE2_, func_gen_Apply_Z4);


static refalrts::FnResult func_gen_Fetch_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Fetch@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Fetch@2/4 e.Argument#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Argument#1 as range 5
    //DEBUG: e.Argument#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </7 & Fetch@3/8 </9 Tile{ HalfReuse: & MapAccum/0 Reuse: & ParseCommandLine\2/4 AsIs: e.Argument#1/5 AsIs: >/1 } >/10 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[8], functions[efunc_gen_Fetch_Z3]);
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::alloc_close_call(vm, context[10]);
    refalrts::reinit_name(context[0], functions[efunc_MapAccum]);
    refalrts::update_name(context[4], functions[efunc_gen_ParseCommandLine_L2]);
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[7], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Fetch@2/4 e.arg#0/2 >/1
  // closed e.arg#0 as range 2
  //DEBUG: e.arg#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch@0/4 AsIs: e.arg#0/2 HalfReuse: [*]/1 } & Pipe$2\1@0/5 (/6 & MapAccum@0/7 & ParseCommandLine\2@0/8 )/9 (/10 (/11 & MapAccum@0/12 & ParseCommandLine\3@0/13 )/14 & ParseCommandLine\4@0/15 )/16 {*}/17 >/18 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_gen_Pipe_S2L1Z0]);
  refalrts::alloc_open_bracket(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_MapAccum_Z0]);
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_ParseCommandLine_L2Z0]);
  refalrts::alloc_close_bracket(vm, context[9]);
  refalrts::alloc_open_bracket(vm, context[10]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_gen_MapAccum_Z0]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_ParseCommandLine_L3Z0]);
  refalrts::alloc_close_bracket(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_ParseCommandLine_L4Z0]);
  refalrts::alloc_close_bracket(vm, context[16]);
  refalrts::alloc_unwrapped_closure(vm, context[17], context[1]);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z0]);
  refalrts::reinit_closure_head(context[1]);
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[10], context[16] );
  refalrts::link_brackets( context[11], context[14] );
  refalrts::link_brackets( context[6], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[18] );
  refalrts::use( res );
  refalrts::wrap_closure( context[17] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Fetch_Z2("Fetch@2", COOKIE1_, COOKIE2_, func_gen_Fetch_Z2);


static refalrts::FnResult func_gen_Fetch_Z3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & Fetch@3/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Fetch@3/4 e.Argument#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Argument#1 as range 5
    //DEBUG: e.Argument#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </7 & Fetch@4/8 </9 Tile{ HalfReuse: & MapAccum/0 Reuse: & ParseCommandLine\3/4 AsIs: e.Argument#1/5 AsIs: >/1 } >/10 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[8], functions[efunc_gen_Fetch_Z4]);
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::alloc_close_call(vm, context[10]);
    refalrts::reinit_name(context[0], functions[efunc_MapAccum]);
    refalrts::update_name(context[4], functions[efunc_gen_ParseCommandLine_L3]);
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[7], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Fetch@3/4 e.arg#0/2 >/1
  // closed e.arg#0 as range 2
  //DEBUG: e.arg#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch@0/4 AsIs: e.arg#0/2 HalfReuse: [*]/1 } & Pipe$2\1@0/5 (/6 & MapAccum@0/7 & ParseCommandLine\3@0/8 )/9 (/10 & ParseCommandLine\4@0/11 )/12 {*}/13 >/14 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_gen_Pipe_S2L1Z0]);
  refalrts::alloc_open_bracket(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_MapAccum_Z0]);
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_ParseCommandLine_L3Z0]);
  refalrts::alloc_close_bracket(vm, context[9]);
  refalrts::alloc_open_bracket(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_ParseCommandLine_L4Z0]);
  refalrts::alloc_close_bracket(vm, context[12]);
  refalrts::alloc_unwrapped_closure(vm, context[13], context[1]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z0]);
  refalrts::reinit_closure_head(context[1]);
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[10], context[12] );
  refalrts::link_brackets( context[6], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[14] );
  refalrts::use( res );
  refalrts::wrap_closure( context[13] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Fetch_Z3("Fetch@3", COOKIE1_, COOKIE2_, func_gen_Fetch_Z3);


static refalrts::FnResult func_gen_Fetch_Z4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & Fetch@4/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Fetch@4/4 (/9 t.new#1/11 e.new#2/7 )/10 e.new#3/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    // closed e.new#3 as range 5
    context[12] = refalrts::tvar_left( context[11], context[7], context[8] );
    if( ! context[12] )
      continue;
    // closed e.new#2 as range 7
    do {
      // </0 & Fetch@4/4 (/9 t.0#0/11 )/10 e.#0/13 >/1
      context[13] = context[5];
      context[14] = context[6];
      if( ! refalrts::empty_seq( context[7], context[8] ) )
        continue;
      // closed e.#0 as range 13
      //DEBUG: t.0#0: 11
      //DEBUG: e.#0: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & Fetch@4/4 {REMOVED TILE} )/10 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/9 AsIs: t.0#0/11 } Tile{ AsIs: e.#0/13 } Tile{ ]] }
      refalrts::reinit_ident(context[9], identifiers[ident_Success]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[9], context[12] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Fetch@4/4 (/9 t.0#0/11 e.1#0/13 )/10 e.#0/15 >/1
    context[13] = context[7];
    context[14] = context[8];
    context[15] = context[5];
    context[16] = context[6];
    // closed e.1#0 as range 13
    // closed e.#0 as range 15
    //DEBUG: t.0#0: 11
    //DEBUG: e.1#0: 13
    //DEBUG: e.#0: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} t.0#0/11 {REMOVED TILE} )/10 e.#0/15 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: # Fails/0 HalfReuse: </4 HalfReuse: & Map@1/9 } Tile{ AsIs: e.1#0/13 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_ident(context[0], identifiers[ident_Fails]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[9], functions[efunc_gen_Map_Z1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::splice_to_freelist_open( vm, context[9], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Fetch@4/4 e.Argument#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Argument#1 as range 5
    //DEBUG: e.Argument#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseCommandLine\4*2/4 AsIs: e.Argument#1/5 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_ParseCommandLine_L4D2]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Fetch@4/4 e.arg#0/2 >/1
  // closed e.arg#0 as range 2
  //DEBUG: e.arg#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch@0/4 AsIs: e.arg#0/2 HalfReuse: & ParseCommandLine\4@0/1 } >/5 Tile{ ]] }
  refalrts::alloc_close_call(vm, context[5]);
  refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z0]);
  refalrts::reinit_name(context[1], functions[efunc_gen_ParseCommandLine_L4Z0]);
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Fetch_Z4("Fetch@4", COOKIE1_, COOKIE2_, func_gen_Fetch_Z4);


//End of file
