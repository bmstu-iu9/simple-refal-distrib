// This file automatically generated from 'main.ref'
// Don't edit! Edit 'main.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_3339448756_1492215491
#define COOKIE1_ 3339448756U
#define COOKIE2_ 1492215491U

enum efunc {
  efunc_u_u_Stepm_Drop = 0,
  efunc_u_u_Metau_Mu = 1,
  efunc_d_table = 2,
  efunc_ArgList = 3,
  efunc_Main = 4,
  efunc_PrintHelp = 5,
  efunc_MakeProject = 6,
  efunc_ParseCommandLine = 7,
  efunc_RunRLCompiler = 8,
  efunc_gen_MakeProject_S1A3 = 9,
  efunc_CreateFileList = 10,
  efunc_Configm_GetRuntimeFiles = 11,
  efunc_gen_MakeProject_S1A2 = 12,
  efunc_Symb = 13,
  efunc_Prout = 14,
  efunc_gen_MakeProject_S1A1 = 15,
  efunc_Configm_GetSourceFile = 16,
  efunc_Exit = 17,
  efunc_Map = 18,
  efunc_gen_MakeProject_S2L1 = 19,
  efunc_PrintSrcPos = 20,
  efunc_gen_RunRLCompiler_S2L2 = 21,
  efunc_gen_RunRLCompiler_S2B1 = 22,
  efunc_System = 23,
  efunc_gen_RunRLCompiler_S2L1 = 24,
  efunc_gen_RunRLCompiler_S2L3 = 25,
  efunc_MakeOptionalFlag = 26,
  efunc_gen_RunRLCompiler_S2A15 = 27,
  efunc_Configm_GetCppCompilerLibSuf = 28,
  efunc_Configm_GetCppCompilerExeSuf = 29,
  efunc_gen_RunRLCompiler_S2A14 = 30,
  efunc_MakeBoolFlag = 31,
  efunc_Configm_GetOverwriteExistRasls = 32,
  efunc_gen_RunRLCompiler_S2A13 = 33,
  efunc_Configm_GetTempDir = 34,
  efunc_gen_RunRLCompiler_S2A12 = 35,
  efunc_Configm_GetKeepRasls = 36,
  efunc_gen_RunRLCompiler_S2A11 = 37,
  efunc_Configm_GetPrelude = 38,
  efunc_gen_RunRLCompiler_S2A10 = 39,
  efunc_Configm_GetIncorporateds = 40,
  efunc_gen_RunRLCompiler_S2A9 = 41,
  efunc_Configm_GetReferences = 42,
  efunc_gen_RunRLCompiler_S2A8 = 43,
  efunc_GetPrefix = 44,
  efunc_gen_RunRLCompiler_S2A7 = 45,
  efunc_MakeSearchFolderFlags = 46,
  efunc_gen_RunRLCompiler_S2A6 = 47,
  efunc_MakeTargetFileFlag = 48,
  efunc_gen_RunRLCompiler_S2A5 = 49,
  efunc_MakeTargetModeFlag = 50,
  efunc_gen_RunRLCompiler_S2A4 = 51,
  efunc_Configm_GetCppCompilerLib = 52,
  efunc_gen_RunRLCompiler_S2A3 = 53,
  efunc_gen_RunRLCompiler_S2A2 = 54,
  efunc_Configm_GetCppCompilerExe = 55,
  efunc_gen_RunRLCompiler_S1L1 = 56,
  efunc_Configm_GetRLCompiler = 57,
  efunc_gen_RunRLCompiler_S2A1 = 58,
  efunc_gen_MakeOptionalFlag_B1 = 59,
  efunc_gen_MakeTargetModeFlag_B1 = 60,
  efunc_Configm_GetTargetMode = 61,
  efunc_gen_MakeTargetFileFlag_B1 = 62,
  efunc_Configm_GetTargetFileName = 63,
  efunc_gen_MakeSearchFolderFlags_L1 = 64,
  efunc_Configm_GetFolders = 65,
  efunc_gen_GetPrefix_B1 = 66,
  efunc_Configm_GetPrefix = 67,
  efunc_Mu = 68,
  efunc_Up = 69,
  efunc_Evm_met = 70,
  efunc_Residue = 71,
  efunc_u_u_Metau_Residue = 72,
  efunc_Go = 73,
};


enum ident {
  ident_Success = 0,
  ident_Fails = 1,
  ident_CMDm_LINE = 2,
  ident_Error = 3,
  ident_Output = 4,
  ident_OutputWithNative = 5,
  ident_Source = 6,
  ident_Include = 7,
  ident_DefaultEXE = 8,
  ident_EXE = 9,
  ident_LIB = 10,
  ident_R = 11,
  ident_CompileOnly = 12,
  ident_DefaultTarget = 13,
  ident_Search = 14,
  ident_Runtime = 15,
  ident_REF5RSL = 16,
  ident_True = 17,
  ident_False = 18,
  ident_NotSet = 19,
  ident_Mu = 20,
  ident_Up = 21,
  ident_Evm_met = 22,
  ident_Residue = 23,
  ident_u_u_Metau_Residue = 24,
  ident_Go = 25,
  ident_Main = 26,
  ident_MakeProject = 27,
  ident_PrintSrcPos = 28,
  ident_RunRLCompiler = 29,
  ident_MakeOptionalFlag = 30,
  ident_MakeTargetModeFlag = 31,
  ident_MakeTargetFileFlag = 32,
  ident_MakeSearchFolderFlags = 33,
  ident_MakeBoolFlag = 34,
  ident_GetPrefix = 35,
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


static refalrts::FnResult func_Go(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & Go/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Main/4 HalfReuse: </1 } & ArgList/5 >/6 >/7 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_ArgList]);
  refalrts::alloc_close_call(vm, context[6]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_Main]);
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

static refalrts::NativeReference nat_ref_Go("Go", 0U, 0U, func_Go);


static refalrts::FnResult func_Main(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & Main/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Main/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Main/4 (/7 e.Program#1/9 )/8 >/1
    context[9] = context[5];
    context[10] = context[6];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Program#1 as range 9
    //DEBUG: e.Program#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} e.Program#1/9 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintHelp/4 HalfReuse: >/7 } Tile{ ]] }
    refalrts::update_name(context[4], functions[efunc_PrintHelp]);
    refalrts::reinit_close_call(context[7]);
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Main/4 (/7 e.Program#1/5 )/8 e.Arguments#1/2 >/1
  // closed e.Program#1 as range 5
  // closed e.Arguments#1 as range 2
  //DEBUG: e.Program#1: 5
  //DEBUG: e.Arguments#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} e.Program#1/5 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MakeProject/4 HalfReuse: </7 } Tile{ HalfReuse: & ParseCommandLine/8 AsIs: e.Arguments#1/2 AsIs: >/1 } >/9 Tile{ ]] }
  refalrts::alloc_close_call(vm, context[9]);
  refalrts::update_name(context[4], functions[efunc_MakeProject]);
  refalrts::reinit_open_call(context[7]);
  refalrts::reinit_name(context[8], functions[efunc_ParseCommandLine]);
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[8], context[1] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Main("Main", COOKIE1_, COOKIE2_, func_Main);


static refalrts::FnResult func_gen_MakeProject_S1A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & MakeProject$1=3/4 t.Config#4/5 e.Units#4/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Units#4 as range 2
  //DEBUG: t.Config#4: 5
  //DEBUG: e.Units#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & RunRLCompiler/4 AsIs: t.Config#4/5 AsIs: e.Units#4/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_RunRLCompiler]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MakeProject_S1A3("MakeProject$1=3", COOKIE1_, COOKIE2_, func_gen_MakeProject_S1A3);


static refalrts::FnResult func_gen_MakeProject_S1A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & MakeProject$1=2/4 t.Config#1/5 (/9 e.SourceFile#2/7 )/10 e.RuntimeFiles#3/2 >/1
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
  // closed e.SourceFile#2 as range 7
  // closed e.RuntimeFiles#3 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: e.SourceFile#2: 7
  //DEBUG: e.RuntimeFiles#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </11 & MakeProject$1=3/12 Tile{ AsIs: </0 Reuse: & CreateFileList/4 AsIs: t.Config#1/5 AsIs: (/9 AsIs: e.SourceFile#2/7 AsIs: )/10 AsIs: e.RuntimeFiles#3/2 AsIs: >/1 } >/13 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_gen_MakeProject_S1A3]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_CreateFileList]);
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MakeProject_S1A2("MakeProject$1=2", COOKIE1_, COOKIE2_, func_gen_MakeProject_S1A2);


static refalrts::FnResult func_gen_MakeProject_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & MakeProject$1=1/4 t.Config#1/5 e.SourceFile#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.SourceFile#2 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: e.SourceFile#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MakeProject$1=2/4 AsIs: t.Config#1/5 } (/7 Tile{ AsIs: e.SourceFile#2/2 } )/8 </9 & Config-GetRuntimeFiles/10 t.Config#1/5/11 >/13 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_close_bracket(vm, context[8]);
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_Configm_GetRuntimeFiles]);
  refalrts::copy_evar(vm, context[11], context[12], context[5], context[6]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_gen_MakeProject_S1A2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[8], context[13] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MakeProject_S1A1("MakeProject$1=1", COOKIE1_, COOKIE2_, func_gen_MakeProject_S1A1);


static refalrts::FnResult func_gen_MakeProject_S2L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & MakeProject$2\1/4 (/7 s.Pos#2/9 e.Message#2/5 )/8 >/1
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
  // closed e.Message#2 as range 5
  //DEBUG: s.Pos#2: 9
  //DEBUG: e.Message#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Prout/4 HalfReuse: 'C'/7 }"omm"/10 Tile{ HalfReuse: 'a'/8 }"nd line argument "/12 </14 & Symb/15 Tile{ AsIs: s.Pos#2/9 } >/16": "/17 Tile{ AsIs: e.Message#2/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[10], context[11], "omm", 3);
  refalrts::alloc_chars(vm, context[12], context[13], "nd line argument ", 17);
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_Symb]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::alloc_chars(vm, context[17], context[18], ": ", 2);
  refalrts::update_name(context[4], functions[efunc_Prout]);
  refalrts::reinit_char(context[7], 'C');
  refalrts::reinit_char(context[8], 'a');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[16], context[18] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MakeProject_S2L1("MakeProject$2\\1", COOKIE1_, COOKIE2_, func_gen_MakeProject_S2L1);


static refalrts::FnResult func_MakeProject(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & MakeProject/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & MakeProject/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & MakeProject/4 # Success/5 t.Config#1/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Success], context[5] ) )
      continue;
    context[9] = refalrts::tvar_left( context[8], context[6], context[7] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;
    //DEBUG: t.Config#1: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & MakeProject$1=1/4 } t.Config#1/8/10 </12 Tile{ HalfReuse: & Config-GetSourceFile/5 AsIs: t.Config#1/8 AsIs: >/1 } >/13 Tile{ ]] }
    refalrts::copy_evar(vm, context[10], context[11], context[8], context[9]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::update_name(context[4], functions[efunc_gen_MakeProject_S1A1]);
    refalrts::reinit_name(context[5], functions[efunc_Configm_GetSourceFile]);
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[5], context[1] );
    res = refalrts::splice_evar( res, context[10], context[12] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MakeProject/4 # Fails/5 e.Errors#1/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_Fails], context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Errors#1 as range 2
  //DEBUG: e.Errors#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 HalfReuse: & MakeProject$2\1/5 AsIs: e.Errors#1/2 AsIs: >/1 } </6 & Exit/7 1/8 >/9 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Exit]);
  refalrts::alloc_number(vm, context[8], 1UL);
  refalrts::alloc_close_call(vm, context[9]);
  refalrts::update_name(context[4], functions[efunc_Map]);
  refalrts::reinit_name(context[5], functions[efunc_gen_MakeProject_S2L1]);
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MakeProject("MakeProject", COOKIE1_, COOKIE2_, func_MakeProject);


static refalrts::FnResult func_PrintSrcPos(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & PrintSrcPos/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & PrintSrcPos/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & PrintSrcPos/4 # CMD-LINE/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_CMDm_LINE], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'c'/0 HalfReuse: 'o'/4 HalfReuse: 'm'/5 HalfReuse: 'm'/1 }"and line"/7 Tile{ ]] }
    refalrts::alloc_chars(vm, context[7], context[8], "and line", 8);
    refalrts::reinit_char(context[0], 'c');
    refalrts::reinit_char(context[4], 'o');
    refalrts::reinit_char(context[5], 'm');
    refalrts::reinit_char(context[1], 'm');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PrintSrcPos/4 (/5 s.LineNum#1/9 e.FileName#1/7 )/6 >/1
  context[7] = 0;
  context[8] = 0;
  if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#1 as range 7
  //DEBUG: s.LineNum#1: 9
  //DEBUG: e.FileName#1: 7

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.LineNum#1/9 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.FileName#1/7 } Tile{ HalfReuse: ':'/5 } Tile{ AsIs: </0 Reuse: & Symb/4 } Tile{ HalfReuse: s.LineNum1 #9/6 AsIs: >/1 ]] }
  refalrts::reinit_char(context[5], ':');
  refalrts::update_name(context[4], functions[efunc_Symb]);
  refalrts::reinit_svar( context[6], context[9] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[6];
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrintSrcPos("PrintSrcPos", COOKIE1_, COOKIE2_, func_PrintSrcPos);


static refalrts::FnResult func_gen_RunRLCompiler_S1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & RunRLCompiler$1\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & RunRLCompiler$1\1/4 (/7 s.new#1/9 e.new#2/5 )/8 >/1
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
    // </0 & RunRLCompiler$1\1/4 (/7 # Error/9 t.SrcPos#2/12 e.Message#2/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_Error], context[9] ) )
      continue;
    context[13] = refalrts::tvar_left( context[12], context[10], context[11] );
    if( ! context[13] )
      continue;
    // closed e.Message#2 as range 10
    //DEBUG: t.SrcPos#2: 12
    //DEBUG: e.Message#2: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Prout/4 HalfReuse: </7 HalfReuse: & PrintSrcPos/9 AsIs: t.SrcPos#2/12 } >/14 Tile{ HalfReuse: ':'/8 } ' '/15 Tile{ AsIs: e.Message#2/10 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::alloc_char(vm, context[15], ' ');
    refalrts::update_name(context[4], functions[efunc_Prout]);
    refalrts::reinit_open_call(context[7]);
    refalrts::reinit_name(context[9], functions[efunc_PrintSrcPos]);
    refalrts::reinit_char(context[8], ':');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & RunRLCompiler$1\1/4 (/7 # Output/9 e.Output#2/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_Output], context[9] ) )
      continue;
    // closed e.Output#2 as range 10
    //DEBUG: e.Output#2: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & RunRLCompiler$1\1/4 (/7 # Output/9 e.Output#2/10 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & RunRLCompiler$1\1/4 (/7 s.new#3/9 (/14 e.new#4/12 )/15 e.new#5/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[10], context[11] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    // closed e.new#4 as range 12
    // closed e.new#5 as range 10
    do {
      // </0 & RunRLCompiler$1\1/4 (/7 # OutputWithNative/9 (/14 e.Output#2/16 )/15 e.Native#2/18 )/8 >/1
      context[16] = context[12];
      context[17] = context[13];
      context[18] = context[10];
      context[19] = context[11];
      if( ! refalrts::ident_term( identifiers[ident_OutputWithNative], context[9] ) )
        continue;
      // closed e.Output#2 as range 16
      // closed e.Native#2 as range 18
      //DEBUG: e.Output#2: 16
      //DEBUG: e.Native#2: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & RunRLCompiler$1\1/4 (/7 # OutputWithNative/9 (/14 e.Output#2/16 )/15 e.Native#2/18 )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & RunRLCompiler$1\1/4 (/7 # Source/9 (/14 s.Dialect#2/20 e.Source#2/16 )/15 e.Output#2/18 )/8 >/1
    context[16] = context[12];
    context[17] = context[13];
    context[18] = context[10];
    context[19] = context[11];
    if( ! refalrts::ident_term( identifiers[ident_Source], context[9] ) )
      continue;
    // closed e.Output#2 as range 18
    if( ! refalrts::svar_left( context[20], context[16], context[17] ) )
      continue;
    // closed e.Source#2 as range 16
    //DEBUG: e.Output#2: 18
    //DEBUG: s.Dialect#2: 20
    //DEBUG: e.Source#2: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & RunRLCompiler$1\1/4 (/7 # Source/9 (/14 s.Dialect#2/20 e.Source#2/16 )/15 e.Output#2/18 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & RunRLCompiler$1\1/4 (/7 # Include/9 e.Include#2/5 )/8 >/1
  if( ! refalrts::ident_term( identifiers[ident_Include], context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Include#2 as range 5
  //DEBUG: e.Include#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & RunRLCompiler$1\1/4 (/7 # Include/9 e.Include#2/5 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RunRLCompiler_S1L1("RunRLCompiler$1\\1", COOKIE1_, COOKIE2_, func_gen_RunRLCompiler_S1L1);


static refalrts::FnResult func_gen_RunRLCompiler_S2B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & RunRLCompiler$2:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & RunRLCompiler$2:1/4 0/7 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = refalrts::number_left( 0UL, context[5], context[6] );
    if( ! context[7] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & RunRLCompiler$2:1/4 0/7 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & RunRLCompiler$2:1/4 e.RetCode#17/2 >/1
  // closed e.RetCode#17 as range 2
  //DEBUG: e.RetCode#17: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Prout/6"ERROR: rlc-core returned code "/7 Tile{ AsIs: </0 Reuse: & Symb/4 AsIs: e.RetCode#17/2 AsIs: >/1 } >/9 </10 & Exit/11 1/12 >/13 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_Prout]);
  refalrts::alloc_chars(vm, context[7], context[8], "ERROR: rlc-core returned code ", 30);
  refalrts::alloc_close_call(vm, context[9]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_Exit]);
  refalrts::alloc_number(vm, context[12], 1UL);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_Symb]);
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[13] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RunRLCompiler_S2B1("RunRLCompiler$2:1", COOKIE1_, COOKIE2_, func_gen_RunRLCompiler_S2B1);


static refalrts::FnResult func_gen_RunRLCompiler_S2L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & RunRLCompiler$2\1/4 (/7 e.Reference#17/5 )/8 >/1
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
  // closed e.Reference#17 as range 5
  //DEBUG: e.Reference#17: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ }" --"/9 Tile{ HalfReuse: 'r'/1 }"eferenc"/11 Tile{ HalfReuse: 'e'/0 HalfReuse: '='/4 HalfReuse: '\"'/7 AsIs: e.Reference#17/5 HalfReuse: '\"'/8 } Tile{ ]] }
  refalrts::alloc_chars(vm, context[9], context[10], " --", 3);
  refalrts::alloc_chars(vm, context[11], context[12], "eferenc", 7);
  refalrts::reinit_char(context[1], 'r');
  refalrts::reinit_char(context[0], 'e');
  refalrts::reinit_char(context[4], '=');
  refalrts::reinit_char(context[7], '\"');
  refalrts::reinit_char(context[8], '\"');
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RunRLCompiler_S2L1("RunRLCompiler$2\\1", COOKIE1_, COOKIE2_, func_gen_RunRLCompiler_S2L1);


static refalrts::FnResult func_gen_RunRLCompiler_S2L2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & RunRLCompiler$2\2/4 (/7 e.LibName#17/5 )/8 >/1
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
  // closed e.LibName#17 as range 5
  //DEBUG: e.LibName#17: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ }" --"/9 Tile{ HalfReuse: 'i'/1 }"ncorporate"/11 Tile{ HalfReuse: 'd'/0 HalfReuse: '='/4 HalfReuse: '\"'/7 AsIs: e.LibName#17/5 HalfReuse: '\"'/8 } Tile{ ]] }
  refalrts::alloc_chars(vm, context[9], context[10], " --", 3);
  refalrts::alloc_chars(vm, context[11], context[12], "ncorporate", 10);
  refalrts::reinit_char(context[1], 'i');
  refalrts::reinit_char(context[0], 'd');
  refalrts::reinit_char(context[4], '=');
  refalrts::reinit_char(context[7], '\"');
  refalrts::reinit_char(context[8], '\"');
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RunRLCompiler_S2L2("RunRLCompiler$2\\2", COOKIE1_, COOKIE2_, func_gen_RunRLCompiler_S2L2);


static refalrts::FnResult func_gen_RunRLCompiler_S2L3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & RunRLCompiler$2\3/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & RunRLCompiler$2\3/4 (/7 s.new#1/9 e.new#2/5 )/8 >/1
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
    // </0 & RunRLCompiler$2\3/4 (/7 # Output/9 e.Output#17/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_Output], context[9] ) )
      continue;
    // closed e.Output#17 as range 10
    //DEBUG: e.Output#17: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & RunRLCompiler$2\3/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/7 HalfReuse: '\"'/9 AsIs: e.Output#17/10 HalfReuse: '\"'/8 } Tile{ ]] }
    refalrts::reinit_char(context[7], ' ');
    refalrts::reinit_char(context[9], '\"');
    refalrts::reinit_char(context[8], '\"');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & RunRLCompiler$2\3/4 (/7 s.new#3/9 (/14 e.new#4/12 )/15 e.new#5/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[10], context[11] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    // closed e.new#4 as range 12
    // closed e.new#5 as range 10
    do {
      // </0 & RunRLCompiler$2\3/4 (/7 # OutputWithNative/9 (/14 e.Output#17/16 )/15 e.Native#17/18 )/8 >/1
      context[16] = context[12];
      context[17] = context[13];
      context[18] = context[10];
      context[19] = context[11];
      if( ! refalrts::ident_term( identifiers[ident_OutputWithNative], context[9] ) )
        continue;
      // closed e.Output#17 as range 16
      // closed e.Native#17 as range 18
      //DEBUG: e.Output#17: 16
      //DEBUG: e.Native#17: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & RunRLCompiler$2\3/4 (/7 {REMOVED TILE} e.Native#17/18 )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/9 HalfReuse: '\"'/14 AsIs: e.Output#17/16 HalfReuse: '\"'/15 } Tile{ ]] }
      refalrts::reinit_char(context[9], ' ');
      refalrts::reinit_char(context[14], '\"');
      refalrts::reinit_char(context[15], '\"');
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[9], context[15] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & RunRLCompiler$2\3/4 (/7 # Source/9 (/14 s.Dialect#17/20 e.Source#17/16 )/15 e.Output#17/18 )/8 >/1
    context[16] = context[12];
    context[17] = context[13];
    context[18] = context[10];
    context[19] = context[11];
    if( ! refalrts::ident_term( identifiers[ident_Source], context[9] ) )
      continue;
    // closed e.Output#17 as range 18
    if( ! refalrts::svar_left( context[20], context[16], context[17] ) )
      continue;
    // closed e.Source#17 as range 16
    //DEBUG: e.Output#17: 18
    //DEBUG: s.Dialect#17: 20
    //DEBUG: e.Source#17: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/7 # Source/9 (/14 s.Dialect#17/20 {REMOVED TILE} )/15 e.Output#17/18 )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '\"'/4 } Tile{ AsIs: e.Source#17/16 } Tile{ HalfReuse: '\"'/1 ]] }
    refalrts::reinit_char(context[0], ' ');
    refalrts::reinit_char(context[4], '\"');
    refalrts::reinit_char(context[1], '\"');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[16], context[17] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & RunRLCompiler$2\3/4 (/7 # Include/9 e.Include#17/5 )/8 >/1
  if( ! refalrts::ident_term( identifiers[ident_Include], context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Include#17 as range 5
  //DEBUG: e.Include#17: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & RunRLCompiler$2\3/4 (/7 # Include/9 e.Include#17/5 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RunRLCompiler_S2L3("RunRLCompiler$2\\3", COOKIE1_, COOKIE2_, func_gen_RunRLCompiler_S2L3);


static refalrts::FnResult func_gen_RunRLCompiler_S2A15(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 77 elems
  refalrts::Iter context[77];
  refalrts::zeros( context, 77 );
  // </0 & RunRLCompiler$2=15/4 (/7 e.RLCompiler#2/5 )/8 (/11 e.TargetModeFlag#5/9 )/12 (/15 e.CppCompilerExe#3/13 )/16 (/19 e.CppCompilerLib#4/17 )/20 (/23 e.TargetFileFlag#6/21 )/24 (/27 e.SearchFolderFlags#7/25 )/28 (/31 e.Prefix#8/29 )/32 (/35 e.Prelude#11/33 )/36 (/39 e.References#9/37 )/40 (/43 e.IncorporatedLibs#10/41 )/44 (/47 e.KeepRasls#12/45 )/48 (/51 e.TempDir#13/49 )/52 (/55 e.OverwriteExistRasls#14/53 )/56 (/59 e.CppCompilerExeSuf#15/57 )/60 (/63 e.Units#1/61 )/64 e.CppCompilerLibSuf#16/2 >/1
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
  context[25] = 0;
  context[26] = 0;
  context[27] = refalrts::brackets_left( context[25], context[26], context[2], context[3] );
  if( ! context[27] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[27], context[28]);
  context[29] = 0;
  context[30] = 0;
  context[31] = refalrts::brackets_left( context[29], context[30], context[2], context[3] );
  if( ! context[31] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[31], context[32]);
  context[33] = 0;
  context[34] = 0;
  context[35] = refalrts::brackets_left( context[33], context[34], context[2], context[3] );
  if( ! context[35] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[35], context[36]);
  context[37] = 0;
  context[38] = 0;
  context[39] = refalrts::brackets_left( context[37], context[38], context[2], context[3] );
  if( ! context[39] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[39], context[40]);
  context[41] = 0;
  context[42] = 0;
  context[43] = refalrts::brackets_left( context[41], context[42], context[2], context[3] );
  if( ! context[43] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[43], context[44]);
  context[45] = 0;
  context[46] = 0;
  context[47] = refalrts::brackets_left( context[45], context[46], context[2], context[3] );
  if( ! context[47] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[47], context[48]);
  context[49] = 0;
  context[50] = 0;
  context[51] = refalrts::brackets_left( context[49], context[50], context[2], context[3] );
  if( ! context[51] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[51], context[52]);
  context[53] = 0;
  context[54] = 0;
  context[55] = refalrts::brackets_left( context[53], context[54], context[2], context[3] );
  if( ! context[55] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[55], context[56]);
  context[57] = 0;
  context[58] = 0;
  context[59] = refalrts::brackets_left( context[57], context[58], context[2], context[3] );
  if( ! context[59] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[59], context[60]);
  context[61] = 0;
  context[62] = 0;
  context[63] = refalrts::brackets_left( context[61], context[62], context[2], context[3] );
  if( ! context[63] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[63], context[64]);
  // closed e.RLCompiler#2 as range 5
  // closed e.TargetModeFlag#5 as range 9
  // closed e.CppCompilerExe#3 as range 13
  // closed e.CppCompilerLib#4 as range 17
  // closed e.TargetFileFlag#6 as range 21
  // closed e.SearchFolderFlags#7 as range 25
  // closed e.Prefix#8 as range 29
  // closed e.Prelude#11 as range 33
  // closed e.References#9 as range 37
  // closed e.IncorporatedLibs#10 as range 41
  // closed e.KeepRasls#12 as range 45
  // closed e.TempDir#13 as range 49
  // closed e.OverwriteExistRasls#14 as range 53
  // closed e.CppCompilerExeSuf#15 as range 57
  // closed e.Units#1 as range 61
  // closed e.CppCompilerLibSuf#16 as range 2
  //DEBUG: e.RLCompiler#2: 5
  //DEBUG: e.TargetModeFlag#5: 9
  //DEBUG: e.CppCompilerExe#3: 13
  //DEBUG: e.CppCompilerLib#4: 17
  //DEBUG: e.TargetFileFlag#6: 21
  //DEBUG: e.SearchFolderFlags#7: 25
  //DEBUG: e.Prefix#8: 29
  //DEBUG: e.Prelude#11: 33
  //DEBUG: e.References#9: 37
  //DEBUG: e.IncorporatedLibs#10: 41
  //DEBUG: e.KeepRasls#12: 45
  //DEBUG: e.TempDir#13: 49
  //DEBUG: e.OverwriteExistRasls#14: 53
  //DEBUG: e.CppCompilerExeSuf#15: 57
  //DEBUG: e.Units#1: 61
  //DEBUG: e.CppCompilerLibSuf#16: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & RunRLCompiler$2:1/4 HalfReuse: </7 } Tile{ HalfReuse: & System/44 } Tile{ AsIs: e.RLCompiler#2/5 } Tile{ AsIs: e.TargetModeFlag#5/9 } Tile{ AsIs: e.CppCompilerExe#3/13 } Tile{ AsIs: e.CppCompilerLib#4/17 } Tile{ AsIs: e.TargetFileFlag#6/21 } Tile{ AsIs: e.SearchFolderFlags#7/25 } Tile{ HalfReuse: ' '/24 HalfReuse: '-'/27 } Tile{ HalfReuse: '-'/20 HalfReuse: 'p'/23 } Tile{ HalfReuse: 'r'/16 HalfReuse: 'e'/19 } Tile{ HalfReuse: 'f'/52 HalfReuse: 'i'/55 } 'x'/65 Tile{ HalfReuse: '='/28 HalfReuse: '\"'/31 AsIs: e.Prefix#8/29 HalfReuse: '\"'/32 HalfReuse: ' '/35 } Tile{ HalfReuse: '-'/56 HalfReuse: '-'/59 } Tile{ HalfReuse: 'p'/12 HalfReuse: 'r'/15 } Tile{ HalfReuse: 'e'/8 HalfReuse: 'l'/11 }"ude=\""/66 Tile{ AsIs: e.Prelude#11/33 } '\"'/68 </69 Tile{ HalfReuse: & Map/36 HalfReuse: & RunRLCompiler$2\1/39 AsIs: e.References#9/37 HalfReuse: >/40 HalfReuse: </43 } & Map/70 & RunRLCompiler$2\2/71 Tile{ AsIs: e.IncorporatedLibs#10/41 } Tile{ HalfReuse: >/47 AsIs: e.KeepRasls#12/45 HalfReuse: ' '/48 HalfReuse: '-'/51 }"-temp-dir=\""/72 Tile{ AsIs: e.TempDir#13/49 } '\"'/74 Tile{ AsIs: e.OverwriteExistRasls#14/53 } Tile{ AsIs: e.CppCompilerExeSuf#15/57 } Tile{ AsIs: e.CppCompilerLibSuf#16/2 } </75 Tile{ HalfReuse: & Map/60 HalfReuse: & RunRLCompiler$2\3/63 AsIs: e.Units#1/61 HalfReuse: >/64 } >/76 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_char(vm, context[65], 'x');
  refalrts::alloc_chars(vm, context[66], context[67], "ude=\"", 5);
  refalrts::alloc_char(vm, context[68], '\"');
  refalrts::alloc_open_call(vm, context[69]);
  refalrts::alloc_name(vm, context[70], functions[efunc_Map]);
  refalrts::alloc_name(vm, context[71], functions[efunc_gen_RunRLCompiler_S2L2]);
  refalrts::alloc_chars(vm, context[72], context[73], "-temp-dir=\"", 11);
  refalrts::alloc_char(vm, context[74], '\"');
  refalrts::alloc_open_call(vm, context[75]);
  refalrts::alloc_close_call(vm, context[76]);
  refalrts::update_name(context[4], functions[efunc_gen_RunRLCompiler_S2B1]);
  refalrts::reinit_open_call(context[7]);
  refalrts::reinit_name(context[44], functions[efunc_System]);
  refalrts::reinit_char(context[24], ' ');
  refalrts::reinit_char(context[27], '-');
  refalrts::reinit_char(context[20], '-');
  refalrts::reinit_char(context[23], 'p');
  refalrts::reinit_char(context[16], 'r');
  refalrts::reinit_char(context[19], 'e');
  refalrts::reinit_char(context[52], 'f');
  refalrts::reinit_char(context[55], 'i');
  refalrts::reinit_char(context[28], '=');
  refalrts::reinit_char(context[31], '\"');
  refalrts::reinit_char(context[32], '\"');
  refalrts::reinit_char(context[35], ' ');
  refalrts::reinit_char(context[56], '-');
  refalrts::reinit_char(context[59], '-');
  refalrts::reinit_char(context[12], 'p');
  refalrts::reinit_char(context[15], 'r');
  refalrts::reinit_char(context[8], 'e');
  refalrts::reinit_char(context[11], 'l');
  refalrts::reinit_name(context[36], functions[efunc_Map]);
  refalrts::reinit_name(context[39], functions[efunc_gen_RunRLCompiler_S2L1]);
  refalrts::reinit_close_call(context[40]);
  refalrts::reinit_open_call(context[43]);
  refalrts::reinit_close_call(context[47]);
  refalrts::reinit_char(context[48], ' ');
  refalrts::reinit_char(context[51], '-');
  refalrts::reinit_name(context[60], functions[efunc_Map]);
  refalrts::reinit_name(context[63], functions[efunc_gen_RunRLCompiler_S2L3]);
  refalrts::reinit_close_call(context[64]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[76] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[64] );
  refalrts::push_stack( vm, context[75] );
  refalrts::push_stack( vm, context[47] );
  refalrts::push_stack( vm, context[43] );
  refalrts::push_stack( vm, context[40] );
  refalrts::push_stack( vm, context[69] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[76], context[76] );
  res = refalrts::splice_evar( res, context[60], context[64] );
  res = refalrts::splice_evar( res, context[75], context[75] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[57], context[58] );
  res = refalrts::splice_evar( res, context[53], context[54] );
  res = refalrts::splice_evar( res, context[74], context[74] );
  res = refalrts::splice_evar( res, context[49], context[50] );
  res = refalrts::splice_evar( res, context[72], context[73] );
  res = refalrts::splice_evar( res, context[47], context[51] );
  res = refalrts::splice_evar( res, context[41], context[42] );
  res = refalrts::splice_evar( res, context[70], context[71] );
  res = refalrts::splice_evar( res, context[36], context[43] );
  res = refalrts::splice_evar( res, context[68], context[69] );
  res = refalrts::splice_evar( res, context[33], context[34] );
  res = refalrts::splice_evar( res, context[66], context[67] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[56], context[59] );
  res = refalrts::splice_evar( res, context[28], context[35] );
  res = refalrts::splice_evar( res, context[65], context[65] );
  res = refalrts::splice_evar( res, context[52], context[55] );
  res = refalrts::splice_evar( res, context[16], context[19] );
  res = refalrts::splice_evar( res, context[20], context[23] );
  res = refalrts::splice_evar( res, context[24], context[27] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[44], context[44] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RunRLCompiler_S2A15("RunRLCompiler$2=15", COOKIE1_, COOKIE2_, func_gen_RunRLCompiler_S2A15);


static refalrts::FnResult func_gen_RunRLCompiler_S2A14(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 71 elems
  refalrts::Iter context[71];
  refalrts::zeros( context, 71 );
  // </0 & RunRLCompiler$2=14/4 (/7 e.RLCompiler#2/5 )/8 (/11 e.TargetModeFlag#5/9 )/12 (/15 e.CppCompilerExe#3/13 )/16 (/19 e.CppCompilerLib#4/17 )/20 (/23 e.TargetFileFlag#6/21 )/24 (/27 e.SearchFolderFlags#7/25 )/28 (/31 e.Prefix#8/29 )/32 (/35 e.Prelude#11/33 )/36 (/39 e.References#9/37 )/40 (/43 e.IncorporatedLibs#10/41 )/44 (/47 e.KeepRasls#12/45 )/48 (/51 e.TempDir#13/49 )/52 (/55 e.OverwriteExistRasls#14/53 )/56 (/59 e.Units#1/57 )/60 t.Config#1/61 e.CppCompilerExeSuf#15/2 >/1
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
  context[25] = 0;
  context[26] = 0;
  context[27] = refalrts::brackets_left( context[25], context[26], context[2], context[3] );
  if( ! context[27] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[27], context[28]);
  context[29] = 0;
  context[30] = 0;
  context[31] = refalrts::brackets_left( context[29], context[30], context[2], context[3] );
  if( ! context[31] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[31], context[32]);
  context[33] = 0;
  context[34] = 0;
  context[35] = refalrts::brackets_left( context[33], context[34], context[2], context[3] );
  if( ! context[35] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[35], context[36]);
  context[37] = 0;
  context[38] = 0;
  context[39] = refalrts::brackets_left( context[37], context[38], context[2], context[3] );
  if( ! context[39] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[39], context[40]);
  context[41] = 0;
  context[42] = 0;
  context[43] = refalrts::brackets_left( context[41], context[42], context[2], context[3] );
  if( ! context[43] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[43], context[44]);
  context[45] = 0;
  context[46] = 0;
  context[47] = refalrts::brackets_left( context[45], context[46], context[2], context[3] );
  if( ! context[47] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[47], context[48]);
  context[49] = 0;
  context[50] = 0;
  context[51] = refalrts::brackets_left( context[49], context[50], context[2], context[3] );
  if( ! context[51] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[51], context[52]);
  context[53] = 0;
  context[54] = 0;
  context[55] = refalrts::brackets_left( context[53], context[54], context[2], context[3] );
  if( ! context[55] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[55], context[56]);
  context[57] = 0;
  context[58] = 0;
  context[59] = refalrts::brackets_left( context[57], context[58], context[2], context[3] );
  if( ! context[59] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[59], context[60]);
  // closed e.RLCompiler#2 as range 5
  // closed e.TargetModeFlag#5 as range 9
  // closed e.CppCompilerExe#3 as range 13
  // closed e.CppCompilerLib#4 as range 17
  // closed e.TargetFileFlag#6 as range 21
  // closed e.SearchFolderFlags#7 as range 25
  // closed e.Prefix#8 as range 29
  // closed e.Prelude#11 as range 33
  // closed e.References#9 as range 37
  // closed e.IncorporatedLibs#10 as range 41
  // closed e.KeepRasls#12 as range 45
  // closed e.TempDir#13 as range 49
  // closed e.OverwriteExistRasls#14 as range 53
  // closed e.Units#1 as range 57
  context[62] = refalrts::tvar_left( context[61], context[2], context[3] );
  if( ! context[62] )
    return refalrts::cRecognitionImpossible;
  // closed e.CppCompilerExeSuf#15 as range 2
  //DEBUG: e.RLCompiler#2: 5
  //DEBUG: e.TargetModeFlag#5: 9
  //DEBUG: e.CppCompilerExe#3: 13
  //DEBUG: e.CppCompilerLib#4: 17
  //DEBUG: e.TargetFileFlag#6: 21
  //DEBUG: e.SearchFolderFlags#7: 25
  //DEBUG: e.Prefix#8: 29
  //DEBUG: e.Prelude#11: 33
  //DEBUG: e.References#9: 37
  //DEBUG: e.IncorporatedLibs#10: 41
  //DEBUG: e.KeepRasls#12: 45
  //DEBUG: e.TempDir#13: 49
  //DEBUG: e.OverwriteExistRasls#14: 53
  //DEBUG: e.Units#1: 57
  //DEBUG: t.Config#1: 61
  //DEBUG: e.CppCompilerExeSuf#15: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & RunRLCompiler$2=15/4 AsIs: (/7 AsIs: e.RLCompiler#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.TargetModeFlag#5/9 AsIs: )/12 AsIs: (/15 AsIs: e.CppCompilerExe#3/13 AsIs: )/16 AsIs: (/19 AsIs: e.CppCompilerLib#4/17 AsIs: )/20 AsIs: (/23 AsIs: e.TargetFileFlag#6/21 AsIs: )/24 AsIs: (/27 AsIs: e.SearchFolderFlags#7/25 AsIs: )/28 AsIs: (/31 AsIs: e.Prefix#8/29 AsIs: )/32 AsIs: (/35 AsIs: e.Prelude#11/33 AsIs: )/36 AsIs: (/39 AsIs: e.References#9/37 AsIs: )/40 AsIs: (/43 AsIs: e.IncorporatedLibs#10/41 AsIs: )/44 AsIs: (/47 AsIs: e.KeepRasls#12/45 AsIs: )/48 AsIs: (/51 AsIs: e.TempDir#13/49 AsIs: )/52 AsIs: (/55 AsIs: e.OverwriteExistRasls#14/53 AsIs: )/56 AsIs: (/59 } Tile{ AsIs: e.CppCompilerExeSuf#15/2 } )/63 (/64 Tile{ AsIs: e.Units#1/57 } )/65 </66 & MakeOptionalFlag/67 Tile{ HalfReuse: & Config-GetCppCompilerLibSuf/60 AsIs: t.Config#1/61 }"cpp-command-lib-suf"/68 >/70 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[63]);
  refalrts::alloc_open_bracket(vm, context[64]);
  refalrts::alloc_close_bracket(vm, context[65]);
  refalrts::alloc_open_call(vm, context[66]);
  refalrts::alloc_name(vm, context[67], functions[efunc_MakeOptionalFlag]);
  refalrts::alloc_chars(vm, context[68], context[69], "cpp-command-lib-suf", 19);
  refalrts::alloc_close_call(vm, context[70]);
  refalrts::update_name(context[4], functions[efunc_gen_RunRLCompiler_S2A15]);
  refalrts::reinit_name(context[60], functions[efunc_Configm_GetCppCompilerLibSuf]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[70] );
  refalrts::push_stack( vm, context[66] );
  refalrts::link_brackets( context[64], context[65] );
  refalrts::link_brackets( context[59], context[63] );
  refalrts::link_brackets( context[55], context[56] );
  refalrts::link_brackets( context[51], context[52] );
  refalrts::link_brackets( context[47], context[48] );
  refalrts::link_brackets( context[43], context[44] );
  refalrts::link_brackets( context[39], context[40] );
  refalrts::link_brackets( context[35], context[36] );
  refalrts::link_brackets( context[31], context[32] );
  refalrts::link_brackets( context[27], context[28] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[68], context[70] );
  res = refalrts::splice_evar( res, context[60], context[62] );
  res = refalrts::splice_evar( res, context[65], context[67] );
  res = refalrts::splice_evar( res, context[57], context[58] );
  res = refalrts::splice_evar( res, context[63], context[64] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RunRLCompiler_S2A14("RunRLCompiler$2=14", COOKIE1_, COOKIE2_, func_gen_RunRLCompiler_S2A14);


static refalrts::FnResult func_gen_RunRLCompiler_S2A13(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 69 elems
  refalrts::Iter context[69];
  refalrts::zeros( context, 69 );
  // </0 & RunRLCompiler$2=13/4 (/7 e.RLCompiler#2/5 )/8 (/11 e.TargetModeFlag#5/9 )/12 (/15 e.CppCompilerExe#3/13 )/16 (/19 e.CppCompilerLib#4/17 )/20 (/23 e.TargetFileFlag#6/21 )/24 (/27 e.SearchFolderFlags#7/25 )/28 (/31 e.Prefix#8/29 )/32 (/35 e.Prelude#11/33 )/36 (/39 e.References#9/37 )/40 (/43 e.IncorporatedLibs#10/41 )/44 (/47 e.KeepRasls#12/45 )/48 (/51 e.TempDir#13/49 )/52 (/55 e.Units#1/53 )/56 t.Config#1/57 e.OverwriteExistRasls#14/2 >/1
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
  context[25] = 0;
  context[26] = 0;
  context[27] = refalrts::brackets_left( context[25], context[26], context[2], context[3] );
  if( ! context[27] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[27], context[28]);
  context[29] = 0;
  context[30] = 0;
  context[31] = refalrts::brackets_left( context[29], context[30], context[2], context[3] );
  if( ! context[31] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[31], context[32]);
  context[33] = 0;
  context[34] = 0;
  context[35] = refalrts::brackets_left( context[33], context[34], context[2], context[3] );
  if( ! context[35] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[35], context[36]);
  context[37] = 0;
  context[38] = 0;
  context[39] = refalrts::brackets_left( context[37], context[38], context[2], context[3] );
  if( ! context[39] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[39], context[40]);
  context[41] = 0;
  context[42] = 0;
  context[43] = refalrts::brackets_left( context[41], context[42], context[2], context[3] );
  if( ! context[43] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[43], context[44]);
  context[45] = 0;
  context[46] = 0;
  context[47] = refalrts::brackets_left( context[45], context[46], context[2], context[3] );
  if( ! context[47] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[47], context[48]);
  context[49] = 0;
  context[50] = 0;
  context[51] = refalrts::brackets_left( context[49], context[50], context[2], context[3] );
  if( ! context[51] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[51], context[52]);
  context[53] = 0;
  context[54] = 0;
  context[55] = refalrts::brackets_left( context[53], context[54], context[2], context[3] );
  if( ! context[55] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[55], context[56]);
  // closed e.RLCompiler#2 as range 5
  // closed e.TargetModeFlag#5 as range 9
  // closed e.CppCompilerExe#3 as range 13
  // closed e.CppCompilerLib#4 as range 17
  // closed e.TargetFileFlag#6 as range 21
  // closed e.SearchFolderFlags#7 as range 25
  // closed e.Prefix#8 as range 29
  // closed e.Prelude#11 as range 33
  // closed e.References#9 as range 37
  // closed e.IncorporatedLibs#10 as range 41
  // closed e.KeepRasls#12 as range 45
  // closed e.TempDir#13 as range 49
  // closed e.Units#1 as range 53
  context[58] = refalrts::tvar_left( context[57], context[2], context[3] );
  if( ! context[58] )
    return refalrts::cRecognitionImpossible;
  // closed e.OverwriteExistRasls#14 as range 2
  //DEBUG: e.RLCompiler#2: 5
  //DEBUG: e.TargetModeFlag#5: 9
  //DEBUG: e.CppCompilerExe#3: 13
  //DEBUG: e.CppCompilerLib#4: 17
  //DEBUG: e.TargetFileFlag#6: 21
  //DEBUG: e.SearchFolderFlags#7: 25
  //DEBUG: e.Prefix#8: 29
  //DEBUG: e.Prelude#11: 33
  //DEBUG: e.References#9: 37
  //DEBUG: e.IncorporatedLibs#10: 41
  //DEBUG: e.KeepRasls#12: 45
  //DEBUG: e.TempDir#13: 49
  //DEBUG: e.Units#1: 53
  //DEBUG: t.Config#1: 57
  //DEBUG: e.OverwriteExistRasls#14: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & RunRLCompiler$2=14/4 AsIs: (/7 AsIs: e.RLCompiler#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.TargetModeFlag#5/9 AsIs: )/12 AsIs: (/15 AsIs: e.CppCompilerExe#3/13 AsIs: )/16 AsIs: (/19 AsIs: e.CppCompilerLib#4/17 AsIs: )/20 AsIs: (/23 AsIs: e.TargetFileFlag#6/21 AsIs: )/24 AsIs: (/27 AsIs: e.SearchFolderFlags#7/25 AsIs: )/28 AsIs: (/31 AsIs: e.Prefix#8/29 AsIs: )/32 AsIs: (/35 AsIs: e.Prelude#11/33 AsIs: )/36 AsIs: (/39 AsIs: e.References#9/37 AsIs: )/40 AsIs: (/43 AsIs: e.IncorporatedLibs#10/41 AsIs: )/44 AsIs: (/47 AsIs: e.KeepRasls#12/45 AsIs: )/48 AsIs: (/51 AsIs: e.TempDir#13/49 AsIs: )/52 AsIs: (/55 } Tile{ AsIs: e.OverwriteExistRasls#14/2 } )/59 (/60 Tile{ AsIs: e.Units#1/53 } Tile{ AsIs: )/56 AsIs: t.Config#1/57 } </61 & MakeOptionalFlag/62 & Config-GetCppCompilerExeSuf/63 t.Config#1/57/64"cpp-command-exe-suf"/66 >/68 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[59]);
  refalrts::alloc_open_bracket(vm, context[60]);
  refalrts::alloc_open_call(vm, context[61]);
  refalrts::alloc_name(vm, context[62], functions[efunc_MakeOptionalFlag]);
  refalrts::alloc_name(vm, context[63], functions[efunc_Configm_GetCppCompilerExeSuf]);
  refalrts::copy_evar(vm, context[64], context[65], context[57], context[58]);
  refalrts::alloc_chars(vm, context[66], context[67], "cpp-command-exe-suf", 19);
  refalrts::alloc_close_call(vm, context[68]);
  refalrts::update_name(context[4], functions[efunc_gen_RunRLCompiler_S2A14]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[68] );
  refalrts::push_stack( vm, context[61] );
  refalrts::link_brackets( context[60], context[56] );
  refalrts::link_brackets( context[55], context[59] );
  refalrts::link_brackets( context[51], context[52] );
  refalrts::link_brackets( context[47], context[48] );
  refalrts::link_brackets( context[43], context[44] );
  refalrts::link_brackets( context[39], context[40] );
  refalrts::link_brackets( context[35], context[36] );
  refalrts::link_brackets( context[31], context[32] );
  refalrts::link_brackets( context[27], context[28] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[61], context[68] );
  res = refalrts::splice_evar( res, context[56], context[58] );
  res = refalrts::splice_evar( res, context[53], context[54] );
  res = refalrts::splice_evar( res, context[59], context[60] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RunRLCompiler_S2A13("RunRLCompiler$2=13", COOKIE1_, COOKIE2_, func_gen_RunRLCompiler_S2A13);


static refalrts::FnResult func_gen_RunRLCompiler_S2A12(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 67 elems
  refalrts::Iter context[67];
  refalrts::zeros( context, 67 );
  // </0 & RunRLCompiler$2=12/4 (/7 e.RLCompiler#2/5 )/8 (/11 e.TargetModeFlag#5/9 )/12 (/15 e.CppCompilerExe#3/13 )/16 (/19 e.CppCompilerLib#4/17 )/20 (/23 e.TargetFileFlag#6/21 )/24 (/27 e.SearchFolderFlags#7/25 )/28 (/31 e.Prefix#8/29 )/32 (/35 e.Prelude#11/33 )/36 (/39 e.References#9/37 )/40 (/43 e.IncorporatedLibs#10/41 )/44 (/47 e.KeepRasls#12/45 )/48 (/51 e.Units#1/49 )/52 t.Config#1/53 e.TempDir#13/2 >/1
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
  context[25] = 0;
  context[26] = 0;
  context[27] = refalrts::brackets_left( context[25], context[26], context[2], context[3] );
  if( ! context[27] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[27], context[28]);
  context[29] = 0;
  context[30] = 0;
  context[31] = refalrts::brackets_left( context[29], context[30], context[2], context[3] );
  if( ! context[31] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[31], context[32]);
  context[33] = 0;
  context[34] = 0;
  context[35] = refalrts::brackets_left( context[33], context[34], context[2], context[3] );
  if( ! context[35] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[35], context[36]);
  context[37] = 0;
  context[38] = 0;
  context[39] = refalrts::brackets_left( context[37], context[38], context[2], context[3] );
  if( ! context[39] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[39], context[40]);
  context[41] = 0;
  context[42] = 0;
  context[43] = refalrts::brackets_left( context[41], context[42], context[2], context[3] );
  if( ! context[43] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[43], context[44]);
  context[45] = 0;
  context[46] = 0;
  context[47] = refalrts::brackets_left( context[45], context[46], context[2], context[3] );
  if( ! context[47] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[47], context[48]);
  context[49] = 0;
  context[50] = 0;
  context[51] = refalrts::brackets_left( context[49], context[50], context[2], context[3] );
  if( ! context[51] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[51], context[52]);
  // closed e.RLCompiler#2 as range 5
  // closed e.TargetModeFlag#5 as range 9
  // closed e.CppCompilerExe#3 as range 13
  // closed e.CppCompilerLib#4 as range 17
  // closed e.TargetFileFlag#6 as range 21
  // closed e.SearchFolderFlags#7 as range 25
  // closed e.Prefix#8 as range 29
  // closed e.Prelude#11 as range 33
  // closed e.References#9 as range 37
  // closed e.IncorporatedLibs#10 as range 41
  // closed e.KeepRasls#12 as range 45
  // closed e.Units#1 as range 49
  context[54] = refalrts::tvar_left( context[53], context[2], context[3] );
  if( ! context[54] )
    return refalrts::cRecognitionImpossible;
  // closed e.TempDir#13 as range 2
  //DEBUG: e.RLCompiler#2: 5
  //DEBUG: e.TargetModeFlag#5: 9
  //DEBUG: e.CppCompilerExe#3: 13
  //DEBUG: e.CppCompilerLib#4: 17
  //DEBUG: e.TargetFileFlag#6: 21
  //DEBUG: e.SearchFolderFlags#7: 25
  //DEBUG: e.Prefix#8: 29
  //DEBUG: e.Prelude#11: 33
  //DEBUG: e.References#9: 37
  //DEBUG: e.IncorporatedLibs#10: 41
  //DEBUG: e.KeepRasls#12: 45
  //DEBUG: e.Units#1: 49
  //DEBUG: t.Config#1: 53
  //DEBUG: e.TempDir#13: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & RunRLCompiler$2=13/4 AsIs: (/7 AsIs: e.RLCompiler#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.TargetModeFlag#5/9 AsIs: )/12 AsIs: (/15 AsIs: e.CppCompilerExe#3/13 AsIs: )/16 AsIs: (/19 AsIs: e.CppCompilerLib#4/17 AsIs: )/20 AsIs: (/23 AsIs: e.TargetFileFlag#6/21 AsIs: )/24 AsIs: (/27 AsIs: e.SearchFolderFlags#7/25 AsIs: )/28 AsIs: (/31 AsIs: e.Prefix#8/29 AsIs: )/32 AsIs: (/35 AsIs: e.Prelude#11/33 AsIs: )/36 AsIs: (/39 AsIs: e.References#9/37 AsIs: )/40 AsIs: (/43 AsIs: e.IncorporatedLibs#10/41 AsIs: )/44 AsIs: (/47 AsIs: e.KeepRasls#12/45 AsIs: )/48 AsIs: (/51 } Tile{ AsIs: e.TempDir#13/2 } )/55 (/56 Tile{ AsIs: e.Units#1/49 } Tile{ AsIs: )/52 AsIs: t.Config#1/53 } </57 & MakeBoolFlag/58 </59 & Config-GetOverwriteExistRasls/60 t.Config#1/53/61 >/63"overwrite-exist-rasls"/64 >/66 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[55]);
  refalrts::alloc_open_bracket(vm, context[56]);
  refalrts::alloc_open_call(vm, context[57]);
  refalrts::alloc_name(vm, context[58], functions[efunc_MakeBoolFlag]);
  refalrts::alloc_open_call(vm, context[59]);
  refalrts::alloc_name(vm, context[60], functions[efunc_Configm_GetOverwriteExistRasls]);
  refalrts::copy_evar(vm, context[61], context[62], context[53], context[54]);
  refalrts::alloc_close_call(vm, context[63]);
  refalrts::alloc_chars(vm, context[64], context[65], "overwrite-exist-rasls", 21);
  refalrts::alloc_close_call(vm, context[66]);
  refalrts::update_name(context[4], functions[efunc_gen_RunRLCompiler_S2A13]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[66] );
  refalrts::push_stack( vm, context[57] );
  refalrts::push_stack( vm, context[63] );
  refalrts::push_stack( vm, context[59] );
  refalrts::link_brackets( context[56], context[52] );
  refalrts::link_brackets( context[51], context[55] );
  refalrts::link_brackets( context[47], context[48] );
  refalrts::link_brackets( context[43], context[44] );
  refalrts::link_brackets( context[39], context[40] );
  refalrts::link_brackets( context[35], context[36] );
  refalrts::link_brackets( context[31], context[32] );
  refalrts::link_brackets( context[27], context[28] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[57], context[66] );
  res = refalrts::splice_evar( res, context[52], context[54] );
  res = refalrts::splice_evar( res, context[49], context[50] );
  res = refalrts::splice_evar( res, context[55], context[56] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RunRLCompiler_S2A12("RunRLCompiler$2=12", COOKIE1_, COOKIE2_, func_gen_RunRLCompiler_S2A12);


static refalrts::FnResult func_gen_RunRLCompiler_S2A11(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 58 elems
  refalrts::Iter context[58];
  refalrts::zeros( context, 58 );
  // </0 & RunRLCompiler$2=11/4 (/7 e.RLCompiler#2/5 )/8 (/11 e.TargetModeFlag#5/9 )/12 (/15 e.CppCompilerExe#3/13 )/16 (/19 e.CppCompilerLib#4/17 )/20 (/23 e.TargetFileFlag#6/21 )/24 (/27 e.SearchFolderFlags#7/25 )/28 (/31 e.Prefix#8/29 )/32 (/35 e.Prelude#11/33 )/36 (/39 e.References#9/37 )/40 (/43 e.IncorporatedLibs#10/41 )/44 (/47 e.Units#1/45 )/48 t.Config#1/49 e.KeepRasls#12/2 >/1
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
  context[25] = 0;
  context[26] = 0;
  context[27] = refalrts::brackets_left( context[25], context[26], context[2], context[3] );
  if( ! context[27] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[27], context[28]);
  context[29] = 0;
  context[30] = 0;
  context[31] = refalrts::brackets_left( context[29], context[30], context[2], context[3] );
  if( ! context[31] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[31], context[32]);
  context[33] = 0;
  context[34] = 0;
  context[35] = refalrts::brackets_left( context[33], context[34], context[2], context[3] );
  if( ! context[35] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[35], context[36]);
  context[37] = 0;
  context[38] = 0;
  context[39] = refalrts::brackets_left( context[37], context[38], context[2], context[3] );
  if( ! context[39] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[39], context[40]);
  context[41] = 0;
  context[42] = 0;
  context[43] = refalrts::brackets_left( context[41], context[42], context[2], context[3] );
  if( ! context[43] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[43], context[44]);
  context[45] = 0;
  context[46] = 0;
  context[47] = refalrts::brackets_left( context[45], context[46], context[2], context[3] );
  if( ! context[47] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[47], context[48]);
  // closed e.RLCompiler#2 as range 5
  // closed e.TargetModeFlag#5 as range 9
  // closed e.CppCompilerExe#3 as range 13
  // closed e.CppCompilerLib#4 as range 17
  // closed e.TargetFileFlag#6 as range 21
  // closed e.SearchFolderFlags#7 as range 25
  // closed e.Prefix#8 as range 29
  // closed e.Prelude#11 as range 33
  // closed e.References#9 as range 37
  // closed e.IncorporatedLibs#10 as range 41
  // closed e.Units#1 as range 45
  context[50] = refalrts::tvar_left( context[49], context[2], context[3] );
  if( ! context[50] )
    return refalrts::cRecognitionImpossible;
  // closed e.KeepRasls#12 as range 2
  //DEBUG: e.RLCompiler#2: 5
  //DEBUG: e.TargetModeFlag#5: 9
  //DEBUG: e.CppCompilerExe#3: 13
  //DEBUG: e.CppCompilerLib#4: 17
  //DEBUG: e.TargetFileFlag#6: 21
  //DEBUG: e.SearchFolderFlags#7: 25
  //DEBUG: e.Prefix#8: 29
  //DEBUG: e.Prelude#11: 33
  //DEBUG: e.References#9: 37
  //DEBUG: e.IncorporatedLibs#10: 41
  //DEBUG: e.Units#1: 45
  //DEBUG: t.Config#1: 49
  //DEBUG: e.KeepRasls#12: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & RunRLCompiler$2=12/4 AsIs: (/7 AsIs: e.RLCompiler#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.TargetModeFlag#5/9 AsIs: )/12 AsIs: (/15 AsIs: e.CppCompilerExe#3/13 AsIs: )/16 AsIs: (/19 AsIs: e.CppCompilerLib#4/17 AsIs: )/20 AsIs: (/23 AsIs: e.TargetFileFlag#6/21 AsIs: )/24 AsIs: (/27 AsIs: e.SearchFolderFlags#7/25 AsIs: )/28 AsIs: (/31 AsIs: e.Prefix#8/29 AsIs: )/32 AsIs: (/35 AsIs: e.Prelude#11/33 AsIs: )/36 AsIs: (/39 AsIs: e.References#9/37 AsIs: )/40 AsIs: (/43 AsIs: e.IncorporatedLibs#10/41 AsIs: )/44 AsIs: (/47 } Tile{ AsIs: e.KeepRasls#12/2 } )/51 (/52 Tile{ AsIs: e.Units#1/45 } Tile{ AsIs: )/48 AsIs: t.Config#1/49 } </53 & Config-GetTempDir/54 t.Config#1/49/55 >/57 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[51]);
  refalrts::alloc_open_bracket(vm, context[52]);
  refalrts::alloc_open_call(vm, context[53]);
  refalrts::alloc_name(vm, context[54], functions[efunc_Configm_GetTempDir]);
  refalrts::copy_evar(vm, context[55], context[56], context[49], context[50]);
  refalrts::alloc_close_call(vm, context[57]);
  refalrts::update_name(context[4], functions[efunc_gen_RunRLCompiler_S2A12]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[57] );
  refalrts::push_stack( vm, context[53] );
  refalrts::link_brackets( context[52], context[48] );
  refalrts::link_brackets( context[47], context[51] );
  refalrts::link_brackets( context[43], context[44] );
  refalrts::link_brackets( context[39], context[40] );
  refalrts::link_brackets( context[35], context[36] );
  refalrts::link_brackets( context[31], context[32] );
  refalrts::link_brackets( context[27], context[28] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[53], context[57] );
  res = refalrts::splice_evar( res, context[48], context[50] );
  res = refalrts::splice_evar( res, context[45], context[46] );
  res = refalrts::splice_evar( res, context[51], context[52] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RunRLCompiler_S2A11("RunRLCompiler$2=11", COOKIE1_, COOKIE2_, func_gen_RunRLCompiler_S2A11);


static refalrts::FnResult func_gen_RunRLCompiler_S2A10(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 59 elems
  refalrts::Iter context[59];
  refalrts::zeros( context, 59 );
  // </0 & RunRLCompiler$2=10/4 (/7 e.RLCompiler#2/5 )/8 (/11 e.TargetModeFlag#5/9 )/12 (/15 e.CppCompilerExe#3/13 )/16 (/19 e.CppCompilerLib#4/17 )/20 (/23 e.TargetFileFlag#6/21 )/24 (/27 e.SearchFolderFlags#7/25 )/28 (/31 e.Prefix#8/29 )/32 (/35 e.References#9/33 )/36 (/39 e.IncorporatedLibs#10/37 )/40 (/43 e.Units#1/41 )/44 t.Config#1/45 e.Prelude#11/2 >/1
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
  context[25] = 0;
  context[26] = 0;
  context[27] = refalrts::brackets_left( context[25], context[26], context[2], context[3] );
  if( ! context[27] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[27], context[28]);
  context[29] = 0;
  context[30] = 0;
  context[31] = refalrts::brackets_left( context[29], context[30], context[2], context[3] );
  if( ! context[31] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[31], context[32]);
  context[33] = 0;
  context[34] = 0;
  context[35] = refalrts::brackets_left( context[33], context[34], context[2], context[3] );
  if( ! context[35] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[35], context[36]);
  context[37] = 0;
  context[38] = 0;
  context[39] = refalrts::brackets_left( context[37], context[38], context[2], context[3] );
  if( ! context[39] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[39], context[40]);
  context[41] = 0;
  context[42] = 0;
  context[43] = refalrts::brackets_left( context[41], context[42], context[2], context[3] );
  if( ! context[43] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[43], context[44]);
  // closed e.RLCompiler#2 as range 5
  // closed e.TargetModeFlag#5 as range 9
  // closed e.CppCompilerExe#3 as range 13
  // closed e.CppCompilerLib#4 as range 17
  // closed e.TargetFileFlag#6 as range 21
  // closed e.SearchFolderFlags#7 as range 25
  // closed e.Prefix#8 as range 29
  // closed e.References#9 as range 33
  // closed e.IncorporatedLibs#10 as range 37
  // closed e.Units#1 as range 41
  context[46] = refalrts::tvar_left( context[45], context[2], context[3] );
  if( ! context[46] )
    return refalrts::cRecognitionImpossible;
  // closed e.Prelude#11 as range 2
  //DEBUG: e.RLCompiler#2: 5
  //DEBUG: e.TargetModeFlag#5: 9
  //DEBUG: e.CppCompilerExe#3: 13
  //DEBUG: e.CppCompilerLib#4: 17
  //DEBUG: e.TargetFileFlag#6: 21
  //DEBUG: e.SearchFolderFlags#7: 25
  //DEBUG: e.Prefix#8: 29
  //DEBUG: e.References#9: 33
  //DEBUG: e.IncorporatedLibs#10: 37
  //DEBUG: e.Units#1: 41
  //DEBUG: t.Config#1: 45
  //DEBUG: e.Prelude#11: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & RunRLCompiler$2=11/4 AsIs: (/7 AsIs: e.RLCompiler#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.TargetModeFlag#5/9 AsIs: )/12 AsIs: (/15 AsIs: e.CppCompilerExe#3/13 AsIs: )/16 AsIs: (/19 AsIs: e.CppCompilerLib#4/17 AsIs: )/20 AsIs: (/23 AsIs: e.TargetFileFlag#6/21 AsIs: )/24 AsIs: (/27 AsIs: e.SearchFolderFlags#7/25 AsIs: )/28 AsIs: (/31 AsIs: e.Prefix#8/29 AsIs: )/32 AsIs: (/35 } Tile{ AsIs: e.Prelude#11/2 } )/47 (/48 Tile{ AsIs: e.References#9/33 } Tile{ AsIs: )/36 AsIs: (/39 AsIs: e.IncorporatedLibs#10/37 AsIs: )/40 AsIs: (/43 AsIs: e.Units#1/41 AsIs: )/44 AsIs: t.Config#1/45 } </49 & MakeBoolFlag/50 </51 & Config-GetKeepRasls/52 t.Config#1/45/53 >/55"keep-rasls"/56 >/58 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[47]);
  refalrts::alloc_open_bracket(vm, context[48]);
  refalrts::alloc_open_call(vm, context[49]);
  refalrts::alloc_name(vm, context[50], functions[efunc_MakeBoolFlag]);
  refalrts::alloc_open_call(vm, context[51]);
  refalrts::alloc_name(vm, context[52], functions[efunc_Configm_GetKeepRasls]);
  refalrts::copy_evar(vm, context[53], context[54], context[45], context[46]);
  refalrts::alloc_close_call(vm, context[55]);
  refalrts::alloc_chars(vm, context[56], context[57], "keep-rasls", 10);
  refalrts::alloc_close_call(vm, context[58]);
  refalrts::update_name(context[4], functions[efunc_gen_RunRLCompiler_S2A11]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[58] );
  refalrts::push_stack( vm, context[49] );
  refalrts::push_stack( vm, context[55] );
  refalrts::push_stack( vm, context[51] );
  refalrts::link_brackets( context[43], context[44] );
  refalrts::link_brackets( context[39], context[40] );
  refalrts::link_brackets( context[48], context[36] );
  refalrts::link_brackets( context[35], context[47] );
  refalrts::link_brackets( context[31], context[32] );
  refalrts::link_brackets( context[27], context[28] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[49], context[58] );
  res = refalrts::splice_evar( res, context[36], context[46] );
  res = refalrts::splice_evar( res, context[33], context[34] );
  res = refalrts::splice_evar( res, context[47], context[48] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RunRLCompiler_S2A10("RunRLCompiler$2=10", COOKIE1_, COOKIE2_, func_gen_RunRLCompiler_S2A10);


static refalrts::FnResult func_gen_RunRLCompiler_S2A9(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 50 elems
  refalrts::Iter context[50];
  refalrts::zeros( context, 50 );
  // </0 & RunRLCompiler$2=9/4 (/7 e.RLCompiler#2/5 )/8 (/11 e.TargetModeFlag#5/9 )/12 (/15 e.CppCompilerExe#3/13 )/16 (/19 e.CppCompilerLib#4/17 )/20 (/23 e.TargetFileFlag#6/21 )/24 (/27 e.SearchFolderFlags#7/25 )/28 (/31 e.Prefix#8/29 )/32 (/35 e.References#9/33 )/36 (/39 e.Units#1/37 )/40 t.Config#1/41 e.IncorporatedLibs#10/2 >/1
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
  context[25] = 0;
  context[26] = 0;
  context[27] = refalrts::brackets_left( context[25], context[26], context[2], context[3] );
  if( ! context[27] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[27], context[28]);
  context[29] = 0;
  context[30] = 0;
  context[31] = refalrts::brackets_left( context[29], context[30], context[2], context[3] );
  if( ! context[31] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[31], context[32]);
  context[33] = 0;
  context[34] = 0;
  context[35] = refalrts::brackets_left( context[33], context[34], context[2], context[3] );
  if( ! context[35] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[35], context[36]);
  context[37] = 0;
  context[38] = 0;
  context[39] = refalrts::brackets_left( context[37], context[38], context[2], context[3] );
  if( ! context[39] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[39], context[40]);
  // closed e.RLCompiler#2 as range 5
  // closed e.TargetModeFlag#5 as range 9
  // closed e.CppCompilerExe#3 as range 13
  // closed e.CppCompilerLib#4 as range 17
  // closed e.TargetFileFlag#6 as range 21
  // closed e.SearchFolderFlags#7 as range 25
  // closed e.Prefix#8 as range 29
  // closed e.References#9 as range 33
  // closed e.Units#1 as range 37
  context[42] = refalrts::tvar_left( context[41], context[2], context[3] );
  if( ! context[42] )
    return refalrts::cRecognitionImpossible;
  // closed e.IncorporatedLibs#10 as range 2
  //DEBUG: e.RLCompiler#2: 5
  //DEBUG: e.TargetModeFlag#5: 9
  //DEBUG: e.CppCompilerExe#3: 13
  //DEBUG: e.CppCompilerLib#4: 17
  //DEBUG: e.TargetFileFlag#6: 21
  //DEBUG: e.SearchFolderFlags#7: 25
  //DEBUG: e.Prefix#8: 29
  //DEBUG: e.References#9: 33
  //DEBUG: e.Units#1: 37
  //DEBUG: t.Config#1: 41
  //DEBUG: e.IncorporatedLibs#10: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & RunRLCompiler$2=10/4 AsIs: (/7 AsIs: e.RLCompiler#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.TargetModeFlag#5/9 AsIs: )/12 AsIs: (/15 AsIs: e.CppCompilerExe#3/13 AsIs: )/16 AsIs: (/19 AsIs: e.CppCompilerLib#4/17 AsIs: )/20 AsIs: (/23 AsIs: e.TargetFileFlag#6/21 AsIs: )/24 AsIs: (/27 AsIs: e.SearchFolderFlags#7/25 AsIs: )/28 AsIs: (/31 AsIs: e.Prefix#8/29 AsIs: )/32 AsIs: (/35 AsIs: e.References#9/33 AsIs: )/36 AsIs: (/39 } Tile{ AsIs: e.IncorporatedLibs#10/2 } )/43 (/44 Tile{ AsIs: e.Units#1/37 } Tile{ AsIs: )/40 AsIs: t.Config#1/41 } </45 & Config-GetPrelude/46 t.Config#1/41/47 >/49 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[43]);
  refalrts::alloc_open_bracket(vm, context[44]);
  refalrts::alloc_open_call(vm, context[45]);
  refalrts::alloc_name(vm, context[46], functions[efunc_Configm_GetPrelude]);
  refalrts::copy_evar(vm, context[47], context[48], context[41], context[42]);
  refalrts::alloc_close_call(vm, context[49]);
  refalrts::update_name(context[4], functions[efunc_gen_RunRLCompiler_S2A10]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[49] );
  refalrts::push_stack( vm, context[45] );
  refalrts::link_brackets( context[44], context[40] );
  refalrts::link_brackets( context[39], context[43] );
  refalrts::link_brackets( context[35], context[36] );
  refalrts::link_brackets( context[31], context[32] );
  refalrts::link_brackets( context[27], context[28] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[45], context[49] );
  res = refalrts::splice_evar( res, context[40], context[42] );
  res = refalrts::splice_evar( res, context[37], context[38] );
  res = refalrts::splice_evar( res, context[43], context[44] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RunRLCompiler_S2A9("RunRLCompiler$2=9", COOKIE1_, COOKIE2_, func_gen_RunRLCompiler_S2A9);


static refalrts::FnResult func_gen_RunRLCompiler_S2A8(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 46 elems
  refalrts::Iter context[46];
  refalrts::zeros( context, 46 );
  // </0 & RunRLCompiler$2=8/4 (/7 e.RLCompiler#2/5 )/8 (/11 e.TargetModeFlag#5/9 )/12 (/15 e.CppCompilerExe#3/13 )/16 (/19 e.CppCompilerLib#4/17 )/20 (/23 e.TargetFileFlag#6/21 )/24 (/27 e.SearchFolderFlags#7/25 )/28 (/31 e.Prefix#8/29 )/32 (/35 e.Units#1/33 )/36 t.Config#1/37 e.References#9/2 >/1
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
  context[25] = 0;
  context[26] = 0;
  context[27] = refalrts::brackets_left( context[25], context[26], context[2], context[3] );
  if( ! context[27] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[27], context[28]);
  context[29] = 0;
  context[30] = 0;
  context[31] = refalrts::brackets_left( context[29], context[30], context[2], context[3] );
  if( ! context[31] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[31], context[32]);
  context[33] = 0;
  context[34] = 0;
  context[35] = refalrts::brackets_left( context[33], context[34], context[2], context[3] );
  if( ! context[35] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[35], context[36]);
  // closed e.RLCompiler#2 as range 5
  // closed e.TargetModeFlag#5 as range 9
  // closed e.CppCompilerExe#3 as range 13
  // closed e.CppCompilerLib#4 as range 17
  // closed e.TargetFileFlag#6 as range 21
  // closed e.SearchFolderFlags#7 as range 25
  // closed e.Prefix#8 as range 29
  // closed e.Units#1 as range 33
  context[38] = refalrts::tvar_left( context[37], context[2], context[3] );
  if( ! context[38] )
    return refalrts::cRecognitionImpossible;
  // closed e.References#9 as range 2
  //DEBUG: e.RLCompiler#2: 5
  //DEBUG: e.TargetModeFlag#5: 9
  //DEBUG: e.CppCompilerExe#3: 13
  //DEBUG: e.CppCompilerLib#4: 17
  //DEBUG: e.TargetFileFlag#6: 21
  //DEBUG: e.SearchFolderFlags#7: 25
  //DEBUG: e.Prefix#8: 29
  //DEBUG: e.Units#1: 33
  //DEBUG: t.Config#1: 37
  //DEBUG: e.References#9: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & RunRLCompiler$2=9/4 AsIs: (/7 AsIs: e.RLCompiler#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.TargetModeFlag#5/9 AsIs: )/12 AsIs: (/15 AsIs: e.CppCompilerExe#3/13 AsIs: )/16 AsIs: (/19 AsIs: e.CppCompilerLib#4/17 AsIs: )/20 AsIs: (/23 AsIs: e.TargetFileFlag#6/21 AsIs: )/24 AsIs: (/27 AsIs: e.SearchFolderFlags#7/25 AsIs: )/28 AsIs: (/31 AsIs: e.Prefix#8/29 AsIs: )/32 AsIs: (/35 } Tile{ AsIs: e.References#9/2 } )/39 (/40 Tile{ AsIs: e.Units#1/33 } Tile{ AsIs: )/36 AsIs: t.Config#1/37 } </41 & Config-GetIncorporateds/42 t.Config#1/37/43 >/45 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[39]);
  refalrts::alloc_open_bracket(vm, context[40]);
  refalrts::alloc_open_call(vm, context[41]);
  refalrts::alloc_name(vm, context[42], functions[efunc_Configm_GetIncorporateds]);
  refalrts::copy_evar(vm, context[43], context[44], context[37], context[38]);
  refalrts::alloc_close_call(vm, context[45]);
  refalrts::update_name(context[4], functions[efunc_gen_RunRLCompiler_S2A9]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[45] );
  refalrts::push_stack( vm, context[41] );
  refalrts::link_brackets( context[40], context[36] );
  refalrts::link_brackets( context[35], context[39] );
  refalrts::link_brackets( context[31], context[32] );
  refalrts::link_brackets( context[27], context[28] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[41], context[45] );
  res = refalrts::splice_evar( res, context[36], context[38] );
  res = refalrts::splice_evar( res, context[33], context[34] );
  res = refalrts::splice_evar( res, context[39], context[40] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RunRLCompiler_S2A8("RunRLCompiler$2=8", COOKIE1_, COOKIE2_, func_gen_RunRLCompiler_S2A8);


static refalrts::FnResult func_gen_RunRLCompiler_S2A7(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 42 elems
  refalrts::Iter context[42];
  refalrts::zeros( context, 42 );
  // </0 & RunRLCompiler$2=7/4 (/7 e.RLCompiler#2/5 )/8 (/11 e.TargetModeFlag#5/9 )/12 (/15 e.CppCompilerExe#3/13 )/16 (/19 e.CppCompilerLib#4/17 )/20 (/23 e.TargetFileFlag#6/21 )/24 (/27 e.SearchFolderFlags#7/25 )/28 (/31 e.Units#1/29 )/32 t.Config#1/33 e.Prefix#8/2 >/1
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
  context[25] = 0;
  context[26] = 0;
  context[27] = refalrts::brackets_left( context[25], context[26], context[2], context[3] );
  if( ! context[27] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[27], context[28]);
  context[29] = 0;
  context[30] = 0;
  context[31] = refalrts::brackets_left( context[29], context[30], context[2], context[3] );
  if( ! context[31] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[31], context[32]);
  // closed e.RLCompiler#2 as range 5
  // closed e.TargetModeFlag#5 as range 9
  // closed e.CppCompilerExe#3 as range 13
  // closed e.CppCompilerLib#4 as range 17
  // closed e.TargetFileFlag#6 as range 21
  // closed e.SearchFolderFlags#7 as range 25
  // closed e.Units#1 as range 29
  context[34] = refalrts::tvar_left( context[33], context[2], context[3] );
  if( ! context[34] )
    return refalrts::cRecognitionImpossible;
  // closed e.Prefix#8 as range 2
  //DEBUG: e.RLCompiler#2: 5
  //DEBUG: e.TargetModeFlag#5: 9
  //DEBUG: e.CppCompilerExe#3: 13
  //DEBUG: e.CppCompilerLib#4: 17
  //DEBUG: e.TargetFileFlag#6: 21
  //DEBUG: e.SearchFolderFlags#7: 25
  //DEBUG: e.Units#1: 29
  //DEBUG: t.Config#1: 33
  //DEBUG: e.Prefix#8: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & RunRLCompiler$2=8/4 AsIs: (/7 AsIs: e.RLCompiler#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.TargetModeFlag#5/9 AsIs: )/12 AsIs: (/15 AsIs: e.CppCompilerExe#3/13 AsIs: )/16 AsIs: (/19 AsIs: e.CppCompilerLib#4/17 AsIs: )/20 AsIs: (/23 AsIs: e.TargetFileFlag#6/21 AsIs: )/24 AsIs: (/27 AsIs: e.SearchFolderFlags#7/25 AsIs: )/28 AsIs: (/31 } Tile{ AsIs: e.Prefix#8/2 } )/35 (/36 Tile{ AsIs: e.Units#1/29 } Tile{ AsIs: )/32 AsIs: t.Config#1/33 } </37 & Config-GetReferences/38 t.Config#1/33/39 >/41 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[35]);
  refalrts::alloc_open_bracket(vm, context[36]);
  refalrts::alloc_open_call(vm, context[37]);
  refalrts::alloc_name(vm, context[38], functions[efunc_Configm_GetReferences]);
  refalrts::copy_evar(vm, context[39], context[40], context[33], context[34]);
  refalrts::alloc_close_call(vm, context[41]);
  refalrts::update_name(context[4], functions[efunc_gen_RunRLCompiler_S2A8]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[41] );
  refalrts::push_stack( vm, context[37] );
  refalrts::link_brackets( context[36], context[32] );
  refalrts::link_brackets( context[31], context[35] );
  refalrts::link_brackets( context[27], context[28] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[37], context[41] );
  res = refalrts::splice_evar( res, context[32], context[34] );
  res = refalrts::splice_evar( res, context[29], context[30] );
  res = refalrts::splice_evar( res, context[35], context[36] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RunRLCompiler_S2A7("RunRLCompiler$2=7", COOKIE1_, COOKIE2_, func_gen_RunRLCompiler_S2A7);


static refalrts::FnResult func_gen_RunRLCompiler_S2A6(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 38 elems
  refalrts::Iter context[38];
  refalrts::zeros( context, 38 );
  // </0 & RunRLCompiler$2=6/4 (/7 e.RLCompiler#2/5 )/8 (/11 e.TargetModeFlag#5/9 )/12 (/15 e.CppCompilerExe#3/13 )/16 (/19 e.CppCompilerLib#4/17 )/20 (/23 e.TargetFileFlag#6/21 )/24 (/27 e.Units#1/25 )/28 t.Config#1/29 e.SearchFolderFlags#7/2 >/1
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
  context[25] = 0;
  context[26] = 0;
  context[27] = refalrts::brackets_left( context[25], context[26], context[2], context[3] );
  if( ! context[27] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[27], context[28]);
  // closed e.RLCompiler#2 as range 5
  // closed e.TargetModeFlag#5 as range 9
  // closed e.CppCompilerExe#3 as range 13
  // closed e.CppCompilerLib#4 as range 17
  // closed e.TargetFileFlag#6 as range 21
  // closed e.Units#1 as range 25
  context[30] = refalrts::tvar_left( context[29], context[2], context[3] );
  if( ! context[30] )
    return refalrts::cRecognitionImpossible;
  // closed e.SearchFolderFlags#7 as range 2
  //DEBUG: e.RLCompiler#2: 5
  //DEBUG: e.TargetModeFlag#5: 9
  //DEBUG: e.CppCompilerExe#3: 13
  //DEBUG: e.CppCompilerLib#4: 17
  //DEBUG: e.TargetFileFlag#6: 21
  //DEBUG: e.Units#1: 25
  //DEBUG: t.Config#1: 29
  //DEBUG: e.SearchFolderFlags#7: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & RunRLCompiler$2=7/4 AsIs: (/7 AsIs: e.RLCompiler#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.TargetModeFlag#5/9 AsIs: )/12 AsIs: (/15 AsIs: e.CppCompilerExe#3/13 AsIs: )/16 AsIs: (/19 AsIs: e.CppCompilerLib#4/17 AsIs: )/20 AsIs: (/23 AsIs: e.TargetFileFlag#6/21 AsIs: )/24 AsIs: (/27 } Tile{ AsIs: e.SearchFolderFlags#7/2 } )/31 (/32 Tile{ AsIs: e.Units#1/25 } Tile{ AsIs: )/28 AsIs: t.Config#1/29 } </33 & GetPrefix/34 t.Config#1/29/35 >/37 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[31]);
  refalrts::alloc_open_bracket(vm, context[32]);
  refalrts::alloc_open_call(vm, context[33]);
  refalrts::alloc_name(vm, context[34], functions[efunc_GetPrefix]);
  refalrts::copy_evar(vm, context[35], context[36], context[29], context[30]);
  refalrts::alloc_close_call(vm, context[37]);
  refalrts::update_name(context[4], functions[efunc_gen_RunRLCompiler_S2A7]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[37] );
  refalrts::push_stack( vm, context[33] );
  refalrts::link_brackets( context[32], context[28] );
  refalrts::link_brackets( context[27], context[31] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[33], context[37] );
  res = refalrts::splice_evar( res, context[28], context[30] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[31], context[32] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RunRLCompiler_S2A6("RunRLCompiler$2=6", COOKIE1_, COOKIE2_, func_gen_RunRLCompiler_S2A6);


static refalrts::FnResult func_gen_RunRLCompiler_S2A5(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
  // </0 & RunRLCompiler$2=5/4 (/7 e.RLCompiler#2/5 )/8 (/11 e.TargetModeFlag#5/9 )/12 (/15 e.CppCompilerExe#3/13 )/16 (/19 e.CppCompilerLib#4/17 )/20 (/23 e.Units#1/21 )/24 t.Config#1/25 e.TargetFileFlag#6/2 >/1
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
  // closed e.RLCompiler#2 as range 5
  // closed e.TargetModeFlag#5 as range 9
  // closed e.CppCompilerExe#3 as range 13
  // closed e.CppCompilerLib#4 as range 17
  // closed e.Units#1 as range 21
  context[26] = refalrts::tvar_left( context[25], context[2], context[3] );
  if( ! context[26] )
    return refalrts::cRecognitionImpossible;
  // closed e.TargetFileFlag#6 as range 2
  //DEBUG: e.RLCompiler#2: 5
  //DEBUG: e.TargetModeFlag#5: 9
  //DEBUG: e.CppCompilerExe#3: 13
  //DEBUG: e.CppCompilerLib#4: 17
  //DEBUG: e.Units#1: 21
  //DEBUG: t.Config#1: 25
  //DEBUG: e.TargetFileFlag#6: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & RunRLCompiler$2=6/4 AsIs: (/7 AsIs: e.RLCompiler#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.TargetModeFlag#5/9 AsIs: )/12 AsIs: (/15 AsIs: e.CppCompilerExe#3/13 AsIs: )/16 AsIs: (/19 AsIs: e.CppCompilerLib#4/17 AsIs: )/20 AsIs: (/23 } Tile{ AsIs: e.TargetFileFlag#6/2 } )/27 (/28 Tile{ AsIs: e.Units#1/21 } Tile{ AsIs: )/24 AsIs: t.Config#1/25 } </29 & MakeSearchFolderFlags/30 t.Config#1/25/31 >/33 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[27]);
  refalrts::alloc_open_bracket(vm, context[28]);
  refalrts::alloc_open_call(vm, context[29]);
  refalrts::alloc_name(vm, context[30], functions[efunc_MakeSearchFolderFlags]);
  refalrts::copy_evar(vm, context[31], context[32], context[25], context[26]);
  refalrts::alloc_close_call(vm, context[33]);
  refalrts::update_name(context[4], functions[efunc_gen_RunRLCompiler_S2A6]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[33] );
  refalrts::push_stack( vm, context[29] );
  refalrts::link_brackets( context[28], context[24] );
  refalrts::link_brackets( context[23], context[27] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[29], context[33] );
  res = refalrts::splice_evar( res, context[24], context[26] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RunRLCompiler_S2A5("RunRLCompiler$2=5", COOKIE1_, COOKIE2_, func_gen_RunRLCompiler_S2A5);


static refalrts::FnResult func_gen_RunRLCompiler_S2A4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & RunRLCompiler$2=4/4 (/7 e.RLCompiler#2/5 )/8 (/11 e.CppCompilerExe#3/9 )/12 (/15 e.CppCompilerLib#4/13 )/16 (/19 e.Units#1/17 )/20 t.Config#1/21 e.TargetModeFlag#5/2 >/1
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
  // closed e.RLCompiler#2 as range 5
  // closed e.CppCompilerExe#3 as range 9
  // closed e.CppCompilerLib#4 as range 13
  // closed e.Units#1 as range 17
  context[22] = refalrts::tvar_left( context[21], context[2], context[3] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  // closed e.TargetModeFlag#5 as range 2
  //DEBUG: e.RLCompiler#2: 5
  //DEBUG: e.CppCompilerExe#3: 9
  //DEBUG: e.CppCompilerLib#4: 13
  //DEBUG: e.Units#1: 17
  //DEBUG: t.Config#1: 21
  //DEBUG: e.TargetModeFlag#5: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & RunRLCompiler$2=5/4 AsIs: (/7 } Tile{ AsIs: e.RLCompiler#2/5 } )/23 (/24 Tile{ AsIs: e.TargetModeFlag#5/2 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.CppCompilerExe#3/9 AsIs: )/12 AsIs: (/15 AsIs: e.CppCompilerLib#4/13 AsIs: )/16 AsIs: (/19 AsIs: e.Units#1/17 AsIs: )/20 AsIs: t.Config#1/21 } </25 & MakeTargetFileFlag/26 t.Config#1/21/27 >/29 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[23]);
  refalrts::alloc_open_bracket(vm, context[24]);
  refalrts::alloc_open_call(vm, context[25]);
  refalrts::alloc_name(vm, context[26], functions[efunc_MakeTargetFileFlag]);
  refalrts::copy_evar(vm, context[27], context[28], context[21], context[22]);
  refalrts::alloc_close_call(vm, context[29]);
  refalrts::update_name(context[4], functions[efunc_gen_RunRLCompiler_S2A5]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[29] );
  refalrts::push_stack( vm, context[25] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[24], context[8] );
  refalrts::link_brackets( context[7], context[23] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[25], context[29] );
  res = refalrts::splice_evar( res, context[8], context[22] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RunRLCompiler_S2A4("RunRLCompiler$2=4", COOKIE1_, COOKIE2_, func_gen_RunRLCompiler_S2A4);


static refalrts::FnResult func_gen_RunRLCompiler_S2A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & RunRLCompiler$2=3/4 (/7 e.RLCompiler#2/5 )/8 (/11 e.CppCompilerExe#3/9 )/12 (/15 e.Units#1/13 )/16 t.Config#1/17 e.CppCompilerLib#4/2 >/1
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
  // closed e.RLCompiler#2 as range 5
  // closed e.CppCompilerExe#3 as range 9
  // closed e.Units#1 as range 13
  context[18] = refalrts::tvar_left( context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  // closed e.CppCompilerLib#4 as range 2
  //DEBUG: e.RLCompiler#2: 5
  //DEBUG: e.CppCompilerExe#3: 9
  //DEBUG: e.Units#1: 13
  //DEBUG: t.Config#1: 17
  //DEBUG: e.CppCompilerLib#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & RunRLCompiler$2=4/4 AsIs: (/7 AsIs: e.RLCompiler#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.CppCompilerExe#3/9 AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.CppCompilerLib#4/2 } )/19 (/20 Tile{ AsIs: e.Units#1/13 } Tile{ AsIs: )/16 AsIs: t.Config#1/17 } </21 & MakeTargetModeFlag/22 t.Config#1/17/23 >/25 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[19]);
  refalrts::alloc_open_bracket(vm, context[20]);
  refalrts::alloc_open_call(vm, context[21]);
  refalrts::alloc_name(vm, context[22], functions[efunc_MakeTargetModeFlag]);
  refalrts::copy_evar(vm, context[23], context[24], context[17], context[18]);
  refalrts::alloc_close_call(vm, context[25]);
  refalrts::update_name(context[4], functions[efunc_gen_RunRLCompiler_S2A4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[21] );
  refalrts::link_brackets( context[20], context[16] );
  refalrts::link_brackets( context[15], context[19] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[21], context[25] );
  res = refalrts::splice_evar( res, context[16], context[18] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RunRLCompiler_S2A3("RunRLCompiler$2=3", COOKIE1_, COOKIE2_, func_gen_RunRLCompiler_S2A3);


static refalrts::FnResult func_gen_RunRLCompiler_S2A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & RunRLCompiler$2=2/4 (/7 e.RLCompiler#2/5 )/8 (/11 e.Units#1/9 )/12 t.Config#1/13 e.CppCompilerExe#3/2 >/1
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
  // closed e.RLCompiler#2 as range 5
  // closed e.Units#1 as range 9
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  // closed e.CppCompilerExe#3 as range 2
  //DEBUG: e.RLCompiler#2: 5
  //DEBUG: e.Units#1: 9
  //DEBUG: t.Config#1: 13
  //DEBUG: e.CppCompilerExe#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & RunRLCompiler$2=3/4 AsIs: (/7 AsIs: e.RLCompiler#2/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.CppCompilerExe#3/2 } )/15 (/16 Tile{ AsIs: e.Units#1/9 } Tile{ AsIs: )/12 AsIs: t.Config#1/13 } </17 & MakeOptionalFlag/18 & Config-GetCppCompilerLib/19 t.Config#1/13/20"cpp-command-lib"/22 >/24 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[15]);
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::alloc_open_call(vm, context[17]);
  refalrts::alloc_name(vm, context[18], functions[efunc_MakeOptionalFlag]);
  refalrts::alloc_name(vm, context[19], functions[efunc_Configm_GetCppCompilerLib]);
  refalrts::copy_evar(vm, context[20], context[21], context[13], context[14]);
  refalrts::alloc_chars(vm, context[22], context[23], "cpp-command-lib", 15);
  refalrts::alloc_close_call(vm, context[24]);
  refalrts::update_name(context[4], functions[efunc_gen_RunRLCompiler_S2A3]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[24] );
  refalrts::push_stack( vm, context[17] );
  refalrts::link_brackets( context[16], context[12] );
  refalrts::link_brackets( context[11], context[15] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[17], context[24] );
  res = refalrts::splice_evar( res, context[12], context[14] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RunRLCompiler_S2A2("RunRLCompiler$2=2", COOKIE1_, COOKIE2_, func_gen_RunRLCompiler_S2A2);


static refalrts::FnResult func_gen_RunRLCompiler_S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & RunRLCompiler$2=1/4 (/7 e.Units#1/5 )/8 t.Config#1/9 e.RLCompiler#2/2 >/1
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
  // closed e.Units#1 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.RLCompiler#2 as range 2
  //DEBUG: e.Units#1: 5
  //DEBUG: t.Config#1: 9
  //DEBUG: e.RLCompiler#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 } & RunRLCompiler$2=2/11 (/12 Tile{ AsIs: e.RLCompiler#2/2 } Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.Units#1/5 AsIs: )/8 AsIs: t.Config#1/9 } </13 & MakeOptionalFlag/14 & Config-GetCppCompilerExe/15 t.Config#1/9/16"cpp-command-exe"/18 >/20 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_RunRLCompiler_S2A2]);
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_MakeOptionalFlag]);
  refalrts::alloc_name(vm, context[15], functions[efunc_Configm_GetCppCompilerExe]);
  refalrts::copy_evar(vm, context[16], context[17], context[9], context[10]);
  refalrts::alloc_chars(vm, context[18], context[19], "cpp-command-exe", 15);
  refalrts::alloc_close_call(vm, context[20]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[12], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[20] );
  res = refalrts::splice_evar( res, context[4], context[10] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RunRLCompiler_S2A1("RunRLCompiler$2=1", COOKIE1_, COOKIE2_, func_gen_RunRLCompiler_S2A1);


static refalrts::FnResult func_RunRLCompiler(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & RunRLCompiler/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & RunRLCompiler/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & RunRLCompiler/4 t.Config#1/5 e.Units-B#1/9 (/15 # Error/17 t.SrcPos#1/18 e.Message#1/13 )/16 e.Units-E#1/11 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[9] = 0;
    context[10] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[11] = context[7];
      context[12] = context[8];
      context[13] = 0;
      context[14] = 0;
      context[15] = refalrts::brackets_left( context[13], context[14], context[11], context[12] );
      if( ! context[15] )
        continue;
      refalrts::bracket_pointers(context[15], context[16]);
      context[17] = refalrts::ident_left( identifiers[ident_Error], context[13], context[14] );
      if( ! context[17] )
        continue;
      // closed e.Units-E#1 as range 11
      context[19] = refalrts::tvar_left( context[18], context[13], context[14] );
      if( ! context[19] )
        continue;
      // closed e.Message#1 as range 13
      //DEBUG: t.Config#1: 5
      //DEBUG: e.Units-B#1: 9
      //DEBUG: e.Units-E#1: 11
      //DEBUG: t.SrcPos#1: 18
      //DEBUG: e.Message#1: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} t.Config#1/5 e.Units-B#1/9 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 } & RunRLCompiler$1\1/20 Tile{ AsIs: (/15 AsIs: # Error/17 AsIs: t.SrcPos#1/18 AsIs: e.Message#1/13 AsIs: )/16 AsIs: e.Units-E#1/11 AsIs: >/1 } </21 & Exit/22 1/23 >/24 Tile{ ]] }
      refalrts::alloc_name(vm, context[20], functions[efunc_gen_RunRLCompiler_S1L1]);
      refalrts::alloc_open_call(vm, context[21]);
      refalrts::alloc_name(vm, context[22], functions[efunc_Exit]);
      refalrts::alloc_number(vm, context[23], 1UL);
      refalrts::alloc_close_call(vm, context[24]);
      refalrts::update_name(context[4], functions[efunc_Map]);
      refalrts::push_stack( vm, context[24] );
      refalrts::push_stack( vm, context[21] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[21], context[24] );
      res = refalrts::splice_evar( res, context[15], context[1] );
      res = refalrts::splice_evar( res, context[20], context[20] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[9], context[10], context[7], context[8] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & RunRLCompiler/4 t.Config#1/5 e.Units#1/2 >/1
  // closed e.Units#1 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: e.Units#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & RunRLCompiler$2=1/4 } (/7 Tile{ AsIs: e.Units#1/2 } )/8 Tile{ AsIs: t.Config#1/5 } </9 & Config-GetRLCompiler/10 t.Config#1/5/11 >/13 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_close_bracket(vm, context[8]);
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_Configm_GetRLCompiler]);
  refalrts::copy_evar(vm, context[11], context[12], context[5], context[6]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_gen_RunRLCompiler_S2A1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[13] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_RunRLCompiler("RunRLCompiler", COOKIE1_, COOKIE2_, func_RunRLCompiler);


static refalrts::FnResult func_gen_MakeOptionalFlag_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & MakeOptionalFlag:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & MakeOptionalFlag:1/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & MakeOptionalFlag:1/4 (/7 e.LongOptionName#1/9 )/8 >/1
    context[9] = context[5];
    context[10] = context[6];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.LongOptionName#1 as range 9
    //DEBUG: e.LongOptionName#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & MakeOptionalFlag:1/4 (/7 e.LongOptionName#1/9 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MakeOptionalFlag:1/4 (/7 e.LongOptionName#1/5 )/8 e.Value#2/2 >/1
  // closed e.LongOptionName#1 as range 5
  // closed e.Value#2 as range 2
  //DEBUG: e.LongOptionName#1: 5
  //DEBUG: e.Value#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '-'/4 HalfReuse: '-'/7 AsIs: e.LongOptionName#1/5 HalfReuse: '='/8 } '\"'/9 Tile{ AsIs: e.Value#2/2 } Tile{ HalfReuse: '\"'/1 ]] }
  refalrts::alloc_char(vm, context[9], '\"');
  refalrts::reinit_char(context[0], ' ');
  refalrts::reinit_char(context[4], '-');
  refalrts::reinit_char(context[7], '-');
  refalrts::reinit_char(context[8], '=');
  refalrts::reinit_char(context[1], '\"');
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MakeOptionalFlag_B1("MakeOptionalFlag:1", COOKIE1_, COOKIE2_, func_gen_MakeOptionalFlag_B1);


static refalrts::FnResult func_MakeOptionalFlag(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & MakeOptionalFlag/4 s.Getter#1/5 t.Config#1/6 e.LongOptionName#1/2 >/1
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
  // closed e.LongOptionName#1 as range 2
  //DEBUG: s.Getter#1: 5
  //DEBUG: t.Config#1: 6
  //DEBUG: e.LongOptionName#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MakeOptionalFlag:1/4 } (/8 Tile{ AsIs: e.LongOptionName#1/2 } )/9 </10 Tile{ AsIs: s.Getter#1/5 AsIs: t.Config#1/6 } >/11 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[8]);
  refalrts::alloc_close_bracket(vm, context[9]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_gen_MakeOptionalFlag_B1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[10] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[5], context[7] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MakeOptionalFlag("MakeOptionalFlag", COOKIE1_, COOKIE2_, func_MakeOptionalFlag);


static refalrts::FnResult func_gen_MakeTargetModeFlag_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & MakeTargetModeFlag:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & MakeTargetModeFlag:1/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & MakeTargetModeFlag:1/4 # DefaultEXE/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_DefaultEXE], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & MakeTargetModeFlag:1/4 # DefaultEXE/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & MakeTargetModeFlag:1/4 # EXE/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_EXE], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '-'/4 HalfReuse: '-'/5 HalfReuse: 'm'/1 }"akeexe"/6 Tile{ ]] }
    refalrts::alloc_chars(vm, context[6], context[7], "akeexe", 6);
    refalrts::reinit_char(context[0], ' ');
    refalrts::reinit_char(context[4], '-');
    refalrts::reinit_char(context[5], '-');
    refalrts::reinit_char(context[1], 'm');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & MakeTargetModeFlag:1/4 # LIB/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_LIB], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '-'/4 HalfReuse: '-'/5 HalfReuse: 'm'/1 }"akelib"/6 Tile{ ]] }
    refalrts::alloc_chars(vm, context[6], context[7], "akelib", 6);
    refalrts::reinit_char(context[0], ' ');
    refalrts::reinit_char(context[4], '-');
    refalrts::reinit_char(context[5], '-');
    refalrts::reinit_char(context[1], 'm');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & MakeTargetModeFlag:1/4 # R/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_R], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/4 HalfReuse: '-'/5 HalfReuse: 'R'/1 ]] }
    refalrts::reinit_char(context[4], ' ');
    refalrts::reinit_char(context[5], '-');
    refalrts::reinit_char(context[1], 'R');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MakeTargetModeFlag:1/4 # CompileOnly/5 >/1
  if( ! refalrts::ident_term( identifiers[ident_CompileOnly], context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '-'/4 HalfReuse: '-'/5 HalfReuse: 'c'/1 }"ompile-only"/6 Tile{ ]] }
  refalrts::alloc_chars(vm, context[6], context[7], "ompile-only", 11);
  refalrts::reinit_char(context[0], ' ');
  refalrts::reinit_char(context[4], '-');
  refalrts::reinit_char(context[5], '-');
  refalrts::reinit_char(context[1], 'c');
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MakeTargetModeFlag_B1("MakeTargetModeFlag:1", COOKIE1_, COOKIE2_, func_gen_MakeTargetModeFlag_B1);


static refalrts::FnResult func_MakeTargetModeFlag(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & MakeTargetModeFlag/4 t.Config#1/5 >/1
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
  //RESULT: Tile{ [[ } </7 & MakeTargetModeFlag:1/8 Tile{ AsIs: </0 Reuse: & Config-GetTargetMode/4 AsIs: t.Config#1/5 AsIs: >/1 } >/9 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_MakeTargetModeFlag_B1]);
  refalrts::alloc_close_call(vm, context[9]);
  refalrts::update_name(context[4], functions[efunc_Configm_GetTargetMode]);
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

static refalrts::NativeReference nat_ref_MakeTargetModeFlag("MakeTargetModeFlag", COOKIE1_, COOKIE2_, func_MakeTargetModeFlag);


static refalrts::FnResult func_gen_MakeTargetFileFlag_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & MakeTargetFileFlag:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & MakeTargetFileFlag:1/4 # DefaultTarget/7 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = refalrts::ident_left( identifiers[ident_DefaultTarget], context[5], context[6] );
    if( ! context[7] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & MakeTargetFileFlag:1/4 # DefaultTarget/7 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MakeTargetFileFlag:1/4 e.TargetFile#2/2 >/1
  // closed e.TargetFile#2 as range 2
  //DEBUG: e.TargetFile#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ }" --target-file"/5 Tile{ HalfReuse: '='/0 HalfReuse: '\"'/4 AsIs: e.TargetFile#2/2 HalfReuse: '\"'/1 ]] }
  refalrts::alloc_chars(vm, context[5], context[6], " --target-file", 14);
  refalrts::reinit_char(context[0], '=');
  refalrts::reinit_char(context[4], '\"');
  refalrts::reinit_char(context[1], '\"');
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MakeTargetFileFlag_B1("MakeTargetFileFlag:1", COOKIE1_, COOKIE2_, func_gen_MakeTargetFileFlag_B1);


static refalrts::FnResult func_MakeTargetFileFlag(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & MakeTargetFileFlag/4 t.Config#1/5 >/1
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
  //RESULT: Tile{ [[ } </7 & MakeTargetFileFlag:1/8 Tile{ AsIs: </0 Reuse: & Config-GetTargetFileName/4 AsIs: t.Config#1/5 AsIs: >/1 } >/9 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_MakeTargetFileFlag_B1]);
  refalrts::alloc_close_call(vm, context[9]);
  refalrts::update_name(context[4], functions[efunc_Configm_GetTargetFileName]);
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

static refalrts::NativeReference nat_ref_MakeTargetFileFlag("MakeTargetFileFlag", COOKIE1_, COOKIE2_, func_MakeTargetFileFlag);


static refalrts::FnResult func_gen_MakeSearchFolderFlags_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & MakeSearchFolderFlags\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & MakeSearchFolderFlags\1/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & MakeSearchFolderFlags\1/4 (/5 s.new#2/9 e.new#3/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    // closed e.new#3 as range 7
    do {
      // </0 & MakeSearchFolderFlags\1/4 (/5 # Search/9 e.Folder#2/10 )/6 >/1
      context[10] = context[7];
      context[11] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_Search], context[9] ) )
        continue;
      // closed e.Folder#2 as range 10
      //DEBUG: e.Folder#2: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ }" --"/12 Tile{ HalfReuse: 'd'/1 }"irecto"/14 Tile{ HalfReuse: 'r'/0 HalfReuse: 'y'/4 HalfReuse: '='/5 HalfReuse: '\"'/9 AsIs: e.Folder#2/10 HalfReuse: '\"'/6 } Tile{ ]] }
      refalrts::alloc_chars(vm, context[12], context[13], " --", 3);
      refalrts::alloc_chars(vm, context[14], context[15], "irecto", 6);
      refalrts::reinit_char(context[1], 'd');
      refalrts::reinit_char(context[0], 'r');
      refalrts::reinit_char(context[4], 'y');
      refalrts::reinit_char(context[5], '=');
      refalrts::reinit_char(context[9], '\"');
      refalrts::reinit_char(context[6], '\"');
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[0], context[6] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[12], context[13] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & MakeSearchFolderFlags\1/4 (/5 # Runtime/9 e.Folder#2/10 )/6 >/1
    context[10] = context[7];
    context[11] = context[8];
    if( ! refalrts::ident_term( identifiers[ident_Runtime], context[9] ) )
      continue;
    // closed e.Folder#2 as range 10
    //DEBUG: e.Folder#2: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ }" --"/12 Tile{ HalfReuse: 'r'/1 }"untime-directo"/14 Tile{ HalfReuse: 'r'/0 HalfReuse: 'y'/4 HalfReuse: '='/5 HalfReuse: '\"'/9 AsIs: e.Folder#2/10 HalfReuse: '\"'/6 } Tile{ ]] }
    refalrts::alloc_chars(vm, context[12], context[13], " --", 3);
    refalrts::alloc_chars(vm, context[14], context[15], "untime-directo", 14);
    refalrts::reinit_char(context[1], 'r');
    refalrts::reinit_char(context[0], 'r');
    refalrts::reinit_char(context[4], 'y');
    refalrts::reinit_char(context[5], '=');
    refalrts::reinit_char(context[9], '\"');
    refalrts::reinit_char(context[6], '\"');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[0], context[6] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MakeSearchFolderFlags\1/4 # REF5RSL/5 >/1
  if( ! refalrts::ident_term( identifiers[ident_REF5RSL], context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '-'/4 HalfReuse: '-'/5 HalfReuse: 'r'/1 }"ef5rsl"/7 Tile{ ]] }
  refalrts::alloc_chars(vm, context[7], context[8], "ef5rsl", 6);
  refalrts::reinit_char(context[0], ' ');
  refalrts::reinit_char(context[4], '-');
  refalrts::reinit_char(context[5], '-');
  refalrts::reinit_char(context[1], 'r');
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MakeSearchFolderFlags_L1("MakeSearchFolderFlags\\1", COOKIE1_, COOKIE2_, func_gen_MakeSearchFolderFlags_L1);


static refalrts::FnResult func_MakeSearchFolderFlags(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & MakeSearchFolderFlags/4 t.Config#1/5 >/1
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
  //RESULT: Tile{ [[ } </7 & Map/8 & MakeSearchFolderFlags\1/9 Tile{ AsIs: </0 Reuse: & Config-GetFolders/4 AsIs: t.Config#1/5 AsIs: >/1 } >/10 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_Map]);
  refalrts::alloc_name(vm, context[9], functions[efunc_gen_MakeSearchFolderFlags_L1]);
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

static refalrts::NativeReference nat_ref_MakeSearchFolderFlags("MakeSearchFolderFlags", COOKIE1_, COOKIE2_, func_MakeSearchFolderFlags);


static refalrts::FnResult func_MakeBoolFlag(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & MakeBoolFlag/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & MakeBoolFlag/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & MakeBoolFlag/4 # True/5 e.FlagName#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_True], context[5] ) )
      continue;
    // closed e.FlagName#1 as range 6
    //DEBUG: e.FlagName#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '-'/4 HalfReuse: '-'/5 } Tile{ AsIs: e.FlagName#1/6 } Tile{ ]] }
    refalrts::reinit_char(context[0], ' ');
    refalrts::reinit_char(context[4], '-');
    refalrts::reinit_char(context[5], '-');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::splice_to_freelist_open( vm, context[5], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MakeBoolFlag/4 # False/5 e.FlagName#1/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_False], context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FlagName#1 as range 2
  //DEBUG: e.FlagName#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '-'/4 HalfReuse: '-'/5 }"do"/6 Tile{ HalfReuse: 'n'/1 }"t-"/8 Tile{ AsIs: e.FlagName#1/2 } Tile{ ]] }
  refalrts::alloc_chars(vm, context[6], context[7], "do", 2);
  refalrts::alloc_chars(vm, context[8], context[9], "t-", 2);
  refalrts::reinit_char(context[0], ' ');
  refalrts::reinit_char(context[4], '-');
  refalrts::reinit_char(context[5], '-');
  refalrts::reinit_char(context[1], 'n');
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MakeBoolFlag("MakeBoolFlag", COOKIE1_, COOKIE2_, func_MakeBoolFlag);


static refalrts::FnResult func_gen_GetPrefix_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & GetPrefix:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & GetPrefix:1/4 # NotSet/7 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = refalrts::ident_left( identifiers[ident_NotSet], context[5], context[6] );
    if( ! context[7] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & GetPrefix:1/4 # NotSet/7 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GetPrefix:1/4 e.Prefix#2/2 >/1
  // closed e.Prefix#2 as range 2
  //DEBUG: e.Prefix#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & GetPrefix:1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Prefix#2/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GetPrefix_B1("GetPrefix:1", COOKIE1_, COOKIE2_, func_gen_GetPrefix_B1);


static refalrts::FnResult func_GetPrefix(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & GetPrefix/4 t.Config#1/5 >/1
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
  //RESULT: Tile{ [[ } </7 & GetPrefix:1/8 Tile{ AsIs: </0 Reuse: & Config-GetPrefix/4 AsIs: t.Config#1/5 AsIs: >/1 } >/9 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_GetPrefix_B1]);
  refalrts::alloc_close_call(vm, context[9]);
  refalrts::update_name(context[4], functions[efunc_Configm_GetPrefix]);
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

static refalrts::NativeReference nat_ref_GetPrefix("GetPrefix", COOKIE1_, COOKIE2_, func_GetPrefix);


//End of file
