// This file automatically generated from 'Config.ref'
// Don't edit! Edit 'Config.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_4091361114_1375170275
#define COOKIE1_ 4091361114U
#define COOKIE2_ 1375170275U

enum efunc {
  efunc_u_u_Stepm_Drop = 0,
  efunc_u_u_Metau_Mu = 1,
  efunc_d_table = 2,
  efunc_Config = 3,
  efunc_Mu = 4,
  efunc_Up = 5,
  efunc_Evm_met = 6,
  efunc_Residue = 7,
  efunc_u_u_Metau_Residue = 8,
  efunc_Configm_Create = 9,
  efunc_Configm_GetCppCompilerExe = 10,
  efunc_Configm_SetCppCompilerExe = 11,
  efunc_Configm_GetCppCompilerLib = 12,
  efunc_Configm_SetCppCompilerLib = 13,
  efunc_Configm_GetFolders = 14,
  efunc_Configm_AddFolder = 15,
  efunc_Configm_GetRLCompiler = 16,
  efunc_Configm_SetRLCompiler = 17,
  efunc_Configm_AddRLCompilerFlag = 18,
  efunc_Configm_GetTargetFileName = 19,
  efunc_Configm_SetTargetFileName = 20,
  efunc_Configm_GetSourceFile = 21,
  efunc_Configm_SetSourceFile = 22,
  efunc_Configm_GetPrefix = 23,
  efunc_Configm_SetPrefix = 24,
  efunc_Configm_GetReferences = 25,
  efunc_Configm_AddReference = 26,
  efunc_Configm_GetTargetMode = 27,
  efunc_Configm_SetTargetMode = 28,
  efunc_Configm_GetPrelude = 29,
  efunc_Configm_SetPrelude = 30,
  efunc_Configm_GetRuntimeFiles = 31,
  efunc_Configm_AddRuntimeFile = 32,
  efunc_Configm_GetIncorporateds = 33,
  efunc_Configm_AddIncorporated = 34,
  efunc_Configm_GetKeepRasls = 35,
  efunc_Configm_SetKeepRasls = 36,
  efunc_Configm_GetTempDir = 37,
  efunc_Configm_SetTempDir = 38,
  efunc_Configm_GetOverwriteExistRasls = 39,
  efunc_Configm_SetOverwriteExistRasls = 40,
  efunc_Configm_GetCppCompilerExeSuf = 41,
  efunc_Configm_SetCppCompilerExeSuf = 42,
  efunc_Configm_GetCppCompilerLibSuf = 43,
  efunc_Configm_SetCppCompilerLibSuf = 44,
};


enum ident {
  ident_CppCompilerExe = 0,
  ident_CppCompilerLib = 1,
  ident_Folders = 2,
  ident_RLCompiler = 3,
  ident_TargetFileName = 4,
  ident_DefaultTarget = 5,
  ident_SourceFile = 6,
  ident_NotSet = 7,
  ident_Prefix = 8,
  ident_References = 9,
  ident_TargetMode = 10,
  ident_DefaultEXE = 11,
  ident_Prelude = 12,
  ident_Runtime = 13,
  ident_Incorporateds = 14,
  ident_KeepRasls = 15,
  ident_False = 16,
  ident_TempDir = 17,
  ident_OverwriteExistRasls = 18,
  ident_CppCompilerExeSuf = 19,
  ident_CppCompilerLibSuf = 20,
  ident_Success = 21,
  ident_Search = 22,
  ident_REF5RSL = 23,
  ident_Fails = 24,
  ident_ManySourceFiles = 25,
  ident_TargetModeAlreadySet = 26,
  ident_Mu = 27,
  ident_Up = 28,
  ident_Evm_met = 29,
  ident_Residue = 30,
  ident_u_u_Metau_Residue = 31,
  ident_Config = 32,
  ident_Configm_Create = 33,
  ident_Configm_GetCppCompilerExe = 34,
  ident_Configm_SetCppCompilerExe = 35,
  ident_Configm_GetCppCompilerLib = 36,
  ident_Configm_SetCppCompilerLib = 37,
  ident_Configm_GetFolders = 38,
  ident_Configm_AddFolder = 39,
  ident_Configm_GetRLCompiler = 40,
  ident_Configm_SetRLCompiler = 41,
  ident_Configm_AddRLCompilerFlag = 42,
  ident_Configm_GetTargetFileName = 43,
  ident_Configm_SetTargetFileName = 44,
  ident_Configm_GetSourceFile = 45,
  ident_Configm_SetSourceFile = 46,
  ident_Configm_GetPrefix = 47,
  ident_Configm_SetPrefix = 48,
  ident_Configm_GetReferences = 49,
  ident_Configm_AddReference = 50,
  ident_Configm_GetTargetMode = 51,
  ident_Configm_SetTargetMode = 52,
  ident_Configm_GetPrelude = 53,
  ident_Configm_SetPrelude = 54,
  ident_Configm_GetRuntimeFiles = 55,
  ident_Configm_AddRuntimeFile = 56,
  ident_Configm_GetIncorporateds = 57,
  ident_Configm_AddIncorporated = 58,
  ident_Configm_GetKeepRasls = 59,
  ident_Configm_SetKeepRasls = 60,
  ident_Configm_GetTempDir = 61,
  ident_Configm_SetTempDir = 62,
  ident_Configm_GetOverwriteExistRasls = 63,
  ident_Configm_SetOverwriteExistRasls = 64,
  ident_Configm_GetCppCompilerExeSuf = 65,
  ident_Configm_SetCppCompilerExeSuf = 66,
  ident_Configm_GetCppCompilerLibSuf = 67,
  ident_Configm_SetCppCompilerLibSuf = 68,
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


static refalrts::FnResult func_Configm_Create(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 66 elems
  refalrts::Iter context[66];
  refalrts::zeros( context, 66 );
  // </0 & Config-Create/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: [/0 Reuse: & Config/4 HalfReuse: (/1 } # CppCompilerExe/5 )/6 (/7 # CppCompilerLib/8 )/9 (/10 # Folders/11 )/12 (/13 # RLCompiler/14 (/15"rlc-core"/16 )/18 )/19 (/20 # TargetFileName/21 # DefaultTarget/22 )/23 (/24 # SourceFile/25 # NotSet/26 )/27 (/28 # Prefix/29 # NotSet/30 )/31 (/32 # References/33 )/34 (/35 # TargetMode/36 # DefaultEXE/37 )/38 (/39 # Prelude/40 )/41 (/42 # Runtime/43 )/44 (/45 # Incorporateds/46 )/47 (/48 # KeepRasls/49 # False/50 )/51 (/52 # TempDir/53 )/54 (/55 # OverwriteExistRasls/56 # False/57 )/58 (/59 # CppCompilerExeSuf/60 )/61 (/62 # CppCompilerLibSuf/63 )/64 ]/65 Tile{ ]] }
  refalrts::alloc_ident(vm, context[5], identifiers[ident_CppCompilerExe]);
  refalrts::alloc_close_bracket(vm, context[6]);
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_ident(vm, context[8], identifiers[ident_CppCompilerLib]);
  refalrts::alloc_close_bracket(vm, context[9]);
  refalrts::alloc_open_bracket(vm, context[10]);
  refalrts::alloc_ident(vm, context[11], identifiers[ident_Folders]);
  refalrts::alloc_close_bracket(vm, context[12]);
  refalrts::alloc_open_bracket(vm, context[13]);
  refalrts::alloc_ident(vm, context[14], identifiers[ident_RLCompiler]);
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::alloc_chars(vm, context[16], context[17], "rlc-core", 8);
  refalrts::alloc_close_bracket(vm, context[18]);
  refalrts::alloc_close_bracket(vm, context[19]);
  refalrts::alloc_open_bracket(vm, context[20]);
  refalrts::alloc_ident(vm, context[21], identifiers[ident_TargetFileName]);
  refalrts::alloc_ident(vm, context[22], identifiers[ident_DefaultTarget]);
  refalrts::alloc_close_bracket(vm, context[23]);
  refalrts::alloc_open_bracket(vm, context[24]);
  refalrts::alloc_ident(vm, context[25], identifiers[ident_SourceFile]);
  refalrts::alloc_ident(vm, context[26], identifiers[ident_NotSet]);
  refalrts::alloc_close_bracket(vm, context[27]);
  refalrts::alloc_open_bracket(vm, context[28]);
  refalrts::alloc_ident(vm, context[29], identifiers[ident_Prefix]);
  refalrts::alloc_ident(vm, context[30], identifiers[ident_NotSet]);
  refalrts::alloc_close_bracket(vm, context[31]);
  refalrts::alloc_open_bracket(vm, context[32]);
  refalrts::alloc_ident(vm, context[33], identifiers[ident_References]);
  refalrts::alloc_close_bracket(vm, context[34]);
  refalrts::alloc_open_bracket(vm, context[35]);
  refalrts::alloc_ident(vm, context[36], identifiers[ident_TargetMode]);
  refalrts::alloc_ident(vm, context[37], identifiers[ident_DefaultEXE]);
  refalrts::alloc_close_bracket(vm, context[38]);
  refalrts::alloc_open_bracket(vm, context[39]);
  refalrts::alloc_ident(vm, context[40], identifiers[ident_Prelude]);
  refalrts::alloc_close_bracket(vm, context[41]);
  refalrts::alloc_open_bracket(vm, context[42]);
  refalrts::alloc_ident(vm, context[43], identifiers[ident_Runtime]);
  refalrts::alloc_close_bracket(vm, context[44]);
  refalrts::alloc_open_bracket(vm, context[45]);
  refalrts::alloc_ident(vm, context[46], identifiers[ident_Incorporateds]);
  refalrts::alloc_close_bracket(vm, context[47]);
  refalrts::alloc_open_bracket(vm, context[48]);
  refalrts::alloc_ident(vm, context[49], identifiers[ident_KeepRasls]);
  refalrts::alloc_ident(vm, context[50], identifiers[ident_False]);
  refalrts::alloc_close_bracket(vm, context[51]);
  refalrts::alloc_open_bracket(vm, context[52]);
  refalrts::alloc_ident(vm, context[53], identifiers[ident_TempDir]);
  refalrts::alloc_close_bracket(vm, context[54]);
  refalrts::alloc_open_bracket(vm, context[55]);
  refalrts::alloc_ident(vm, context[56], identifiers[ident_OverwriteExistRasls]);
  refalrts::alloc_ident(vm, context[57], identifiers[ident_False]);
  refalrts::alloc_close_bracket(vm, context[58]);
  refalrts::alloc_open_bracket(vm, context[59]);
  refalrts::alloc_ident(vm, context[60], identifiers[ident_CppCompilerExeSuf]);
  refalrts::alloc_close_bracket(vm, context[61]);
  refalrts::alloc_open_bracket(vm, context[62]);
  refalrts::alloc_ident(vm, context[63], identifiers[ident_CppCompilerLibSuf]);
  refalrts::alloc_close_bracket(vm, context[64]);
  refalrts::alloc_close_adt(vm, context[65]);
  refalrts::reinit_open_adt(context[0]);
  refalrts::update_name(context[4], functions[efunc_Config]);
  refalrts::reinit_open_bracket(context[1]);
  refalrts::link_brackets( context[0], context[65] );
  refalrts::link_brackets( context[62], context[64] );
  refalrts::link_brackets( context[59], context[61] );
  refalrts::link_brackets( context[55], context[58] );
  refalrts::link_brackets( context[52], context[54] );
  refalrts::link_brackets( context[48], context[51] );
  refalrts::link_brackets( context[45], context[47] );
  refalrts::link_brackets( context[42], context[44] );
  refalrts::link_brackets( context[39], context[41] );
  refalrts::link_brackets( context[35], context[38] );
  refalrts::link_brackets( context[32], context[34] );
  refalrts::link_brackets( context[28], context[31] );
  refalrts::link_brackets( context[24], context[27] );
  refalrts::link_brackets( context[20], context[23] );
  refalrts::link_brackets( context[13], context[19] );
  refalrts::link_brackets( context[15], context[18] );
  refalrts::link_brackets( context[10], context[12] );
  refalrts::link_brackets( context[7], context[9] );
  refalrts::link_brackets( context[1], context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[65] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Configm_Create("Config-Create", 0U, 0U, func_Configm_Create);


static refalrts::FnResult func_Configm_GetCppCompilerExe(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Config-GetCppCompilerExe/4 [/7Config/8 e.Params-B#1/10 (/16 # CppCompilerExe/18 e.CppCompilerExe#1/14 )/17 e.Params-E#1/12 ]/9 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], functions[efunc_Config], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  refalrts::start_e_loop(vm);
  do {
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left( identifiers[ident_CppCompilerExe], context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.CppCompilerExe#1 as range 14
    // closed e.Params-E#1 as range 12
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.CppCompilerExe#1: 14
    //DEBUG: e.Params-E#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Config-GetCppCompilerExe/4 [/7Config/8 e.Params-B#1/10 (/16 # CppCompilerExe/18 {REMOVED TILE} )/17 e.Params-E#1/12 ]/9 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.CppCompilerExe#1/14 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_GetCppCompilerExe("Config-GetCppCompilerExe", 0U, 0U, func_Configm_GetCppCompilerExe);


static refalrts::FnResult func_Configm_SetCppCompilerExe(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Config-SetCppCompilerExe/4 [/7Config/8 e.Params-B#1/10 (/16 # CppCompilerExe/18 e.OldCppCompilerExe#1/14 )/17 e.Params-E#1/12 ]/9 e.CppCompilerExe#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], functions[efunc_Config], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  // closed e.CppCompilerExe#1 as range 2
  context[10] = 0;
  context[11] = 0;
  refalrts::start_e_loop(vm);
  do {
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left( identifiers[ident_CppCompilerExe], context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.OldCppCompilerExe#1 as range 14
    // closed e.Params-E#1 as range 12
    //DEBUG: e.CppCompilerExe#1: 2
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.OldCppCompilerExe#1: 14
    //DEBUG: e.Params-E#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} e.OldCppCompilerExe#1/14 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/10 AsIs: (/16 AsIs: # CppCompilerExe/18 } Tile{ AsIs: e.CppCompilerExe#1/2 } Tile{ AsIs: )/17 AsIs: e.Params-E#1/12 AsIs: ]/9 } Tile{ ]] }
    refalrts::reinit_ident(context[4], identifiers[ident_Success]);
    refalrts::link_brackets( context[7], context[9] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[17], context[9] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[4], context[18] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_SetCppCompilerExe("Config-SetCppCompilerExe", 0U, 0U, func_Configm_SetCppCompilerExe);


static refalrts::FnResult func_Configm_GetCppCompilerLib(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Config-GetCppCompilerLib/4 [/7Config/8 e.Params-B#1/10 (/16 # CppCompilerLib/18 e.CppCompilerLib#1/14 )/17 e.Params-E#1/12 ]/9 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], functions[efunc_Config], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  refalrts::start_e_loop(vm);
  do {
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left( identifiers[ident_CppCompilerLib], context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.CppCompilerLib#1 as range 14
    // closed e.Params-E#1 as range 12
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.CppCompilerLib#1: 14
    //DEBUG: e.Params-E#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Config-GetCppCompilerLib/4 [/7Config/8 e.Params-B#1/10 (/16 # CppCompilerLib/18 {REMOVED TILE} )/17 e.Params-E#1/12 ]/9 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.CppCompilerLib#1/14 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_GetCppCompilerLib("Config-GetCppCompilerLib", 0U, 0U, func_Configm_GetCppCompilerLib);


static refalrts::FnResult func_Configm_SetCppCompilerLib(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Config-SetCppCompilerLib/4 [/7Config/8 e.Params-B#1/10 (/16 # CppCompilerLib/18 e.OldCppCompilerLib#1/14 )/17 e.Params-E#1/12 ]/9 e.CppCompilerLib#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], functions[efunc_Config], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  // closed e.CppCompilerLib#1 as range 2
  context[10] = 0;
  context[11] = 0;
  refalrts::start_e_loop(vm);
  do {
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left( identifiers[ident_CppCompilerLib], context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.OldCppCompilerLib#1 as range 14
    // closed e.Params-E#1 as range 12
    //DEBUG: e.CppCompilerLib#1: 2
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.OldCppCompilerLib#1: 14
    //DEBUG: e.Params-E#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} e.OldCppCompilerLib#1/14 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/10 AsIs: (/16 AsIs: # CppCompilerLib/18 } Tile{ AsIs: e.CppCompilerLib#1/2 } Tile{ AsIs: )/17 AsIs: e.Params-E#1/12 AsIs: ]/9 } Tile{ ]] }
    refalrts::reinit_ident(context[4], identifiers[ident_Success]);
    refalrts::link_brackets( context[7], context[9] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[17], context[9] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[4], context[18] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_SetCppCompilerLib("Config-SetCppCompilerLib", 0U, 0U, func_Configm_SetCppCompilerLib);


static refalrts::FnResult func_Configm_GetFolders(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Config-GetFolders/4 [/7Config/8 e.Params-B#1/10 (/16 # Folders/18 e.Folders#1/14 )/17 e.Params-E#1/12 ]/9 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], functions[efunc_Config], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  refalrts::start_e_loop(vm);
  do {
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left( identifiers[ident_Folders], context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.Folders#1 as range 14
    // closed e.Params-E#1 as range 12
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.Folders#1: 14
    //DEBUG: e.Params-E#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Config-GetFolders/4 [/7Config/8 e.Params-B#1/10 (/16 # Folders/18 {REMOVED TILE} )/17 e.Params-E#1/12 ]/9 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Folders#1/14 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_GetFolders("Config-GetFolders", 0U, 0U, func_Configm_GetFolders);


static refalrts::FnResult func_Configm_AddFolder(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & Config-AddFolder/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Config-AddFolder/4 [/7Config/8 e.new#1/5 ]/9 s.new#2/10 e.new#3/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], functions[efunc_Config], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  // closed e.new#1 as range 5
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & Config-AddFolder/4 [/7Config/8 e.Params-B#1/15 (/21 # Folders/23 e.Folders#1/19 )/22 e.Params-E#1/17 ]/9 # Search/10 e.Path#1/13 >/1
    context[11] = context[5];
    context[12] = context[6];
    context[13] = context[2];
    context[14] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Search], context[10] ) )
      continue;
    // closed e.Path#1 as range 13
    context[15] = 0;
    context[16] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[17] = context[11];
      context[18] = context[12];
      context[19] = 0;
      context[20] = 0;
      context[21] = refalrts::brackets_left( context[19], context[20], context[17], context[18] );
      if( ! context[21] )
        continue;
      refalrts::bracket_pointers(context[21], context[22]);
      context[23] = refalrts::ident_left( identifiers[ident_Folders], context[19], context[20] );
      if( ! context[23] )
        continue;
      // closed e.Folders#1 as range 19
      // closed e.Params-E#1 as range 17
      //DEBUG: e.Path#1: 13
      //DEBUG: e.Params-B#1: 15
      //DEBUG: e.Folders#1: 19
      //DEBUG: e.Params-E#1: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/15 AsIs: (/21 AsIs: # Folders/23 AsIs: e.Folders#1/19 HalfReuse: (/22 } Tile{ AsIs: # Search/10 AsIs: e.Path#1/13 HalfReuse: )/1 } Tile{ HalfReuse: )/0 } Tile{ AsIs: e.Params-E#1/17 } Tile{ AsIs: ]/9 } Tile{ ]] }
      refalrts::reinit_ident(context[4], identifiers[ident_Success]);
      refalrts::reinit_open_bracket(context[22]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::reinit_close_bracket(context[0]);
      refalrts::link_brackets( context[7], context[9] );
      refalrts::link_brackets( context[21], context[0] );
      refalrts::link_brackets( context[22], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_elem( res, context[9] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_elem( res, context[0] );
      res = refalrts::splice_evar( res, context[10], context[1] );
      res = refalrts::splice_evar( res, context[4], context[22] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[15], context[16], context[11], context[12] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Config-AddFolder/4 [/7Config/8 e.Params-B#1/15 (/21 # Folders/23 e.Folders#1/19 )/22 e.Params-E#1/17 ]/9 # Runtime/10 e.Path#1/13 >/1
    context[11] = context[5];
    context[12] = context[6];
    context[13] = context[2];
    context[14] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Runtime], context[10] ) )
      continue;
    // closed e.Path#1 as range 13
    context[15] = 0;
    context[16] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[17] = context[11];
      context[18] = context[12];
      context[19] = 0;
      context[20] = 0;
      context[21] = refalrts::brackets_left( context[19], context[20], context[17], context[18] );
      if( ! context[21] )
        continue;
      refalrts::bracket_pointers(context[21], context[22]);
      context[23] = refalrts::ident_left( identifiers[ident_Folders], context[19], context[20] );
      if( ! context[23] )
        continue;
      // closed e.Folders#1 as range 19
      // closed e.Params-E#1 as range 17
      //DEBUG: e.Path#1: 13
      //DEBUG: e.Params-B#1: 15
      //DEBUG: e.Folders#1: 19
      //DEBUG: e.Params-E#1: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/15 AsIs: (/21 AsIs: # Folders/23 AsIs: e.Folders#1/19 HalfReuse: (/22 } Tile{ AsIs: # Runtime/10 AsIs: e.Path#1/13 HalfReuse: )/1 } Tile{ HalfReuse: )/0 } Tile{ AsIs: e.Params-E#1/17 } Tile{ AsIs: ]/9 } Tile{ ]] }
      refalrts::reinit_ident(context[4], identifiers[ident_Success]);
      refalrts::reinit_open_bracket(context[22]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::reinit_close_bracket(context[0]);
      refalrts::link_brackets( context[7], context[9] );
      refalrts::link_brackets( context[21], context[0] );
      refalrts::link_brackets( context[22], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_elem( res, context[9] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_elem( res, context[0] );
      res = refalrts::splice_evar( res, context[10], context[1] );
      res = refalrts::splice_evar( res, context[4], context[22] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[15], context[16], context[11], context[12] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Config-AddFolder/4 [/7Config/8 e.Params-B#1/11 (/17 # Folders/19 e.Folders#1/15 )/18 e.Params-E#1/13 ]/9 # REF5RSL/10 >/1
  if( ! refalrts::ident_term( identifiers[ident_REF5RSL], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  refalrts::start_e_loop(vm);
  do {
    context[13] = context[5];
    context[14] = context[6];
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[13], context[14] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    context[19] = refalrts::ident_left( identifiers[ident_Folders], context[15], context[16] );
    if( ! context[19] )
      continue;
    // closed e.Folders#1 as range 15
    // closed e.Params-E#1 as range 13
    //DEBUG: e.Params-B#1: 11
    //DEBUG: e.Folders#1: 15
    //DEBUG: e.Params-E#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # REF5RSL/10 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/11 AsIs: (/17 AsIs: # Folders/19 AsIs: e.Folders#1/15 HalfReuse: # REF5RSL/18 } Tile{ HalfReuse: )/9 } Tile{ AsIs: e.Params-E#1/13 } Tile{ HalfReuse: ]/1 ]] }
    refalrts::reinit_ident(context[4], identifiers[ident_Success]);
    refalrts::reinit_ident(context[18], identifiers[ident_REF5RSL]);
    refalrts::reinit_close_bracket(context[9]);
    refalrts::reinit_close_adt(context[1]);
    refalrts::link_brackets( context[7], context[1] );
    refalrts::link_brackets( context[17], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[4], context[18] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[11], context[12], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_AddFolder("Config-AddFolder", 0U, 0U, func_Configm_AddFolder);


static refalrts::FnResult func_Configm_GetRLCompiler(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & Config-GetRLCompiler/4 [/7Config/8 e.Params-B#1/10 (/16 # RLCompiler/18 (/21 e.Compiler#1/19 )/22 e.Flags#1/14 )/17 e.Params-E#1/12 ]/9 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], functions[efunc_Config], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  refalrts::start_e_loop(vm);
  do {
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left( identifiers[ident_RLCompiler], context[14], context[15] );
    if( ! context[18] )
      continue;
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[14], context[15] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    // closed e.Compiler#1 as range 19
    // closed e.Flags#1 as range 14
    // closed e.Params-E#1 as range 12
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.Compiler#1: 19
    //DEBUG: e.Flags#1: 14
    //DEBUG: e.Params-E#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Config-GetRLCompiler/4 [/7Config/8 e.Params-B#1/10 (/16 # RLCompiler/18 (/21 {REMOVED TILE} )/22 {REMOVED TILE} )/17 e.Params-E#1/12 ]/9 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Compiler#1/19 } Tile{ AsIs: e.Flags#1/14 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_GetRLCompiler("Config-GetRLCompiler", 0U, 0U, func_Configm_GetRLCompiler);


static refalrts::FnResult func_Configm_SetRLCompiler(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & Config-SetRLCompiler/4 [/7Config/8 e.Params-B#1/10 (/16 # RLCompiler/18 (/21 e.OldCompiler#1/19 )/22 e.Flags#1/14 )/17 e.Params-E#1/12 ]/9 e.RLCompiler#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], functions[efunc_Config], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  // closed e.RLCompiler#1 as range 2
  context[10] = 0;
  context[11] = 0;
  refalrts::start_e_loop(vm);
  do {
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left( identifiers[ident_RLCompiler], context[14], context[15] );
    if( ! context[18] )
      continue;
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[14], context[15] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    // closed e.OldCompiler#1 as range 19
    // closed e.Flags#1 as range 14
    // closed e.Params-E#1 as range 12
    //DEBUG: e.RLCompiler#1: 2
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.OldCompiler#1: 19
    //DEBUG: e.Flags#1: 14
    //DEBUG: e.Params-E#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} e.OldCompiler#1/19 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/10 AsIs: (/16 AsIs: # RLCompiler/18 AsIs: (/21 } Tile{ AsIs: e.RLCompiler#1/2 } Tile{ AsIs: )/22 AsIs: e.Flags#1/14 AsIs: )/17 AsIs: e.Params-E#1/12 AsIs: ]/9 } Tile{ ]] }
    refalrts::reinit_ident(context[4], identifiers[ident_Success]);
    refalrts::link_brackets( context[7], context[9] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[22], context[9] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[4], context[21] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_SetRLCompiler("Config-SetRLCompiler", 0U, 0U, func_Configm_SetRLCompiler);


static refalrts::FnResult func_Configm_AddRLCompilerFlag(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & Config-AddRLCompilerFlag/4 [/7Config/8 e.Params-B#1/10 (/16 # RLCompiler/18 t.RLCompiler#1/19 e.Flags#1/14 )/17 e.Params-E#1/12 ]/9 e.NewFlags#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], functions[efunc_Config], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  // closed e.NewFlags#1 as range 2
  context[10] = 0;
  context[11] = 0;
  refalrts::start_e_loop(vm);
  do {
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left( identifiers[ident_RLCompiler], context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.Params-E#1 as range 12
    context[20] = refalrts::tvar_left( context[19], context[14], context[15] );
    if( ! context[20] )
      continue;
    // closed e.Flags#1 as range 14
    //DEBUG: e.NewFlags#1: 2
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.Params-E#1: 12
    //DEBUG: t.RLCompiler#1: 19
    //DEBUG: e.Flags#1: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/10 AsIs: (/16 AsIs: # RLCompiler/18 AsIs: t.RLCompiler#1/19 AsIs: e.Flags#1/14 HalfReuse: ' '/17 } Tile{ HalfReuse: '\"'/9 AsIs: e.NewFlags#1/2 HalfReuse: '\"'/1 } Tile{ HalfReuse: )/0 } Tile{ AsIs: e.Params-E#1/12 } ]/21 Tile{ ]] }
    refalrts::alloc_close_adt(vm, context[21]);
    refalrts::reinit_ident(context[4], identifiers[ident_Success]);
    refalrts::reinit_char(context[17], ' ');
    refalrts::reinit_char(context[9], '\"');
    refalrts::reinit_char(context[1], '\"');
    refalrts::reinit_close_bracket(context[0]);
    refalrts::link_brackets( context[7], context[21] );
    refalrts::link_brackets( context[16], context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_elem( res, context[0] );
    res = refalrts::splice_evar( res, context[9], context[1] );
    res = refalrts::splice_evar( res, context[4], context[17] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_AddRLCompilerFlag("Config-AddRLCompilerFlag", 0U, 0U, func_Configm_AddRLCompilerFlag);


static refalrts::FnResult func_Configm_GetTargetFileName(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Config-GetTargetFileName/4 [/7Config/8 e.Params-B#1/10 (/16 # TargetFileName/18 e.TargetFileName#1/14 )/17 e.Params-E#1/12 ]/9 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], functions[efunc_Config], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  refalrts::start_e_loop(vm);
  do {
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left( identifiers[ident_TargetFileName], context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.TargetFileName#1 as range 14
    // closed e.Params-E#1 as range 12
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.TargetFileName#1: 14
    //DEBUG: e.Params-E#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Config-GetTargetFileName/4 [/7Config/8 e.Params-B#1/10 (/16 # TargetFileName/18 {REMOVED TILE} )/17 e.Params-E#1/12 ]/9 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.TargetFileName#1/14 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_GetTargetFileName("Config-GetTargetFileName", 0U, 0U, func_Configm_GetTargetFileName);


static refalrts::FnResult func_Configm_SetTargetFileName(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Config-SetTargetFileName/4 [/7Config/8 e.Params-B#1/10 (/16 # TargetFileName/18 e.OldTargetFileName#1/14 )/17 e.Params-E#1/12 ]/9 e.NewTargetFileName#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], functions[efunc_Config], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  // closed e.NewTargetFileName#1 as range 2
  context[10] = 0;
  context[11] = 0;
  refalrts::start_e_loop(vm);
  do {
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left( identifiers[ident_TargetFileName], context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.OldTargetFileName#1 as range 14
    // closed e.Params-E#1 as range 12
    //DEBUG: e.NewTargetFileName#1: 2
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.OldTargetFileName#1: 14
    //DEBUG: e.Params-E#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} e.OldTargetFileName#1/14 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/10 AsIs: (/16 AsIs: # TargetFileName/18 } Tile{ AsIs: e.NewTargetFileName#1/2 } Tile{ AsIs: )/17 AsIs: e.Params-E#1/12 AsIs: ]/9 } Tile{ ]] }
    refalrts::reinit_ident(context[4], identifiers[ident_Success]);
    refalrts::link_brackets( context[7], context[9] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[17], context[9] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[4], context[18] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_SetTargetFileName("Config-SetTargetFileName", 0U, 0U, func_Configm_SetTargetFileName);


static refalrts::FnResult func_Configm_GetSourceFile(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Config-GetSourceFile/4 [/7Config/8 e.Params-B#1/10 (/16 # SourceFile/18 e.FileName#1/14 )/17 e.Params-E#1/12 ]/9 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], functions[efunc_Config], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  refalrts::start_e_loop(vm);
  do {
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left( identifiers[ident_SourceFile], context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.FileName#1 as range 14
    // closed e.Params-E#1 as range 12
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.FileName#1: 14
    //DEBUG: e.Params-E#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Config-GetSourceFile/4 [/7Config/8 e.Params-B#1/10 (/16 # SourceFile/18 {REMOVED TILE} )/17 e.Params-E#1/12 ]/9 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.FileName#1/14 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_GetSourceFile("Config-GetSourceFile", 0U, 0U, func_Configm_GetSourceFile);


static refalrts::FnResult func_Configm_SetSourceFile(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & Config-SetSourceFile/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Config-SetSourceFile/4 [/7Config/8 e.new#1/5 ]/9 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], functions[efunc_Config], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Config-SetSourceFile/4 [/7Config/8 e.Params-B#1/14 (/20 # SourceFile/22 # NotSet/23 )/21 e.Params-E#1/16 ]/9 e.SourceFile#1/12 >/1
    context[10] = context[5];
    context[11] = context[6];
    context[12] = context[2];
    context[13] = context[3];
    // closed e.SourceFile#1 as range 12
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[16] = context[10];
      context[17] = context[11];
      context[18] = 0;
      context[19] = 0;
      context[20] = refalrts::brackets_left( context[18], context[19], context[16], context[17] );
      if( ! context[20] )
        continue;
      refalrts::bracket_pointers(context[20], context[21]);
      context[22] = refalrts::ident_left( identifiers[ident_SourceFile], context[18], context[19] );
      if( ! context[22] )
        continue;
      context[23] = refalrts::ident_left( identifiers[ident_NotSet], context[18], context[19] );
      if( ! context[23] )
        continue;
      if( ! refalrts::empty_seq( context[18], context[19] ) )
        continue;
      // closed e.Params-E#1 as range 16
      //DEBUG: e.SourceFile#1: 12
      //DEBUG: e.Params-B#1: 14
      //DEBUG: e.Params-E#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} # NotSet/23 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/14 AsIs: (/20 AsIs: # SourceFile/22 } Tile{ AsIs: e.SourceFile#1/12 } Tile{ AsIs: )/21 AsIs: e.Params-E#1/16 AsIs: ]/9 } Tile{ ]] }
      refalrts::reinit_ident(context[4], identifiers[ident_Success]);
      refalrts::link_brackets( context[7], context[9] );
      refalrts::link_brackets( context[20], context[21] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[21], context[9] );
      res = refalrts::splice_evar( res, context[12], context[13] );
      res = refalrts::splice_evar( res, context[4], context[22] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[14], context[15], context[10], context[11] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Config-SetSourceFile/4 [/7Config/8 e.Params-B#1/10 (/16 # SourceFile/18 e.OldSourceFile#1/14 )/17 e.Params-E#1/12 ]/9 e.SourceFile#1/2 >/1
  // closed e.SourceFile#1 as range 2
  context[10] = 0;
  context[11] = 0;
  refalrts::start_e_loop(vm);
  do {
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left( identifiers[ident_SourceFile], context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.OldSourceFile#1 as range 14
    // closed e.Params-E#1 as range 12
    //DEBUG: e.SourceFile#1: 2
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.OldSourceFile#1: 14
    //DEBUG: e.Params-E#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} [/7Config/8 e.Params-B#1/10 (/16 # SourceFile/18 e.OldSourceFile#1/14 )/17 e.Params-E#1/12 ]/9 e.SourceFile#1/2 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: # Fails/0 HalfReuse: # ManySourceFiles/4 } Tile{ ]] }
    refalrts::reinit_ident(context[0], identifiers[ident_Fails]);
    refalrts::reinit_ident(context[4], identifiers[ident_ManySourceFiles]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_SetSourceFile("Config-SetSourceFile", 0U, 0U, func_Configm_SetSourceFile);


static refalrts::FnResult func_Configm_GetPrefix(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Config-GetPrefix/4 [/7Config/8 e.Params-B#1/10 (/16 # Prefix/18 e.Prefix#1/14 )/17 e.Params-E#1/12 ]/9 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], functions[efunc_Config], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  refalrts::start_e_loop(vm);
  do {
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left( identifiers[ident_Prefix], context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.Prefix#1 as range 14
    // closed e.Params-E#1 as range 12
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.Prefix#1: 14
    //DEBUG: e.Params-E#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Config-GetPrefix/4 [/7Config/8 e.Params-B#1/10 (/16 # Prefix/18 {REMOVED TILE} )/17 e.Params-E#1/12 ]/9 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Prefix#1/14 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_GetPrefix("Config-GetPrefix", 0U, 0U, func_Configm_GetPrefix);


static refalrts::FnResult func_Configm_SetPrefix(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Config-SetPrefix/4 [/7Config/8 e.Params-B#1/10 (/16 # Prefix/18 e.OldPrefix#1/14 )/17 e.Params-E#1/12 ]/9 e.NewPrefix#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], functions[efunc_Config], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  // closed e.NewPrefix#1 as range 2
  context[10] = 0;
  context[11] = 0;
  refalrts::start_e_loop(vm);
  do {
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left( identifiers[ident_Prefix], context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.OldPrefix#1 as range 14
    // closed e.Params-E#1 as range 12
    //DEBUG: e.NewPrefix#1: 2
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.OldPrefix#1: 14
    //DEBUG: e.Params-E#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} e.OldPrefix#1/14 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/10 AsIs: (/16 AsIs: # Prefix/18 } Tile{ AsIs: e.NewPrefix#1/2 } Tile{ AsIs: )/17 AsIs: e.Params-E#1/12 AsIs: ]/9 } Tile{ ]] }
    refalrts::reinit_ident(context[4], identifiers[ident_Success]);
    refalrts::link_brackets( context[7], context[9] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[17], context[9] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[4], context[18] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_SetPrefix("Config-SetPrefix", 0U, 0U, func_Configm_SetPrefix);


static refalrts::FnResult func_Configm_GetReferences(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Config-GetReferences/4 [/7Config/8 e.Params-B#1/10 (/16 # References/18 e.References#1/14 )/17 e.Params-E#1/12 ]/9 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], functions[efunc_Config], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  refalrts::start_e_loop(vm);
  do {
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left( identifiers[ident_References], context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.References#1 as range 14
    // closed e.Params-E#1 as range 12
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.References#1: 14
    //DEBUG: e.Params-E#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Config-GetReferences/4 [/7Config/8 e.Params-B#1/10 (/16 # References/18 {REMOVED TILE} )/17 e.Params-E#1/12 ]/9 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.References#1/14 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_GetReferences("Config-GetReferences", 0U, 0U, func_Configm_GetReferences);


static refalrts::FnResult func_Configm_AddReference(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Config-AddReference/4 [/7Config/8 e.Params-B#1/10 (/16 # References/18 e.References#1/14 )/17 e.Params-E#1/12 ]/9 e.NewReference#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], functions[efunc_Config], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  // closed e.NewReference#1 as range 2
  context[10] = 0;
  context[11] = 0;
  refalrts::start_e_loop(vm);
  do {
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left( identifiers[ident_References], context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.References#1 as range 14
    // closed e.Params-E#1 as range 12
    //DEBUG: e.NewReference#1: 2
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.References#1: 14
    //DEBUG: e.Params-E#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/10 AsIs: (/16 AsIs: # References/18 AsIs: e.References#1/14 HalfReuse: (/17 } Tile{ AsIs: e.NewReference#1/2 } Tile{ HalfReuse: )/9 } Tile{ HalfReuse: )/0 } Tile{ AsIs: e.Params-E#1/12 } Tile{ HalfReuse: ]/1 ]] }
    refalrts::reinit_ident(context[4], identifiers[ident_Success]);
    refalrts::reinit_open_bracket(context[17]);
    refalrts::reinit_close_bracket(context[9]);
    refalrts::reinit_close_bracket(context[0]);
    refalrts::reinit_close_adt(context[1]);
    refalrts::link_brackets( context[7], context[1] );
    refalrts::link_brackets( context[16], context[0] );
    refalrts::link_brackets( context[17], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_elem( res, context[0] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[4], context[17] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_AddReference("Config-AddReference", 0U, 0U, func_Configm_AddReference);


static refalrts::FnResult func_Configm_GetTargetMode(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & Config-GetTargetMode/4 [/7Config/8 e.Params-B#1/10 (/16 # TargetMode/18 s.TargetMode#1/19 )/17 e.Params-E#1/12 ]/9 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], functions[efunc_Config], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  refalrts::start_e_loop(vm);
  do {
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left( identifiers[ident_TargetMode], context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.Params-E#1 as range 12
    if( ! refalrts::svar_left( context[19], context[14], context[15] ) )
      continue;
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.Params-E#1: 12
    //DEBUG: s.TargetMode#1: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Config-GetTargetMode/4 [/7Config/8 e.Params-B#1/10 (/16 # TargetMode/18 s.TargetMode#1/19 )/17 e.Params-E#1/12 ]/9 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: s.TargetMode1 #19/1 ]] }
    refalrts::reinit_svar( context[1], context[19] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_GetTargetMode("Config-GetTargetMode", 0U, 0U, func_Configm_GetTargetMode);


static refalrts::FnResult func_Configm_SetTargetMode(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & Config-SetTargetMode/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Config-SetTargetMode/4 [/7Config/8 e.new#1/5 ]/9 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], functions[efunc_Config], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Config-SetTargetMode/4 [/7Config/8 e.new#4/10 ]/9 s.new#3/14 >/1
    context[10] = context[5];
    context[11] = context[6];
    context[12] = context[2];
    context[13] = context[3];
    // closed e.new#4 as range 10
    if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
      continue;
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;
    do {
      // </0 & Config-SetTargetMode/4 [/7Config/8 e.Params-B#1/17 (/23 # TargetMode/25 # DefaultEXE/26 )/24 e.Params-E#1/19 ]/9 s.NewTargetMode#1/14 >/1
      context[15] = context[10];
      context[16] = context[11];
      context[17] = 0;
      context[18] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[19] = context[15];
        context[20] = context[16];
        context[21] = 0;
        context[22] = 0;
        context[23] = refalrts::brackets_left( context[21], context[22], context[19], context[20] );
        if( ! context[23] )
          continue;
        refalrts::bracket_pointers(context[23], context[24]);
        context[25] = refalrts::ident_left( identifiers[ident_TargetMode], context[21], context[22] );
        if( ! context[25] )
          continue;
        context[26] = refalrts::ident_left( identifiers[ident_DefaultEXE], context[21], context[22] );
        if( ! context[26] )
          continue;
        if( ! refalrts::empty_seq( context[21], context[22] ) )
          continue;
        // closed e.Params-E#1 as range 19
        //DEBUG: s.NewTargetMode#1: 14
        //DEBUG: e.Params-B#1: 17
        //DEBUG: e.Params-E#1: 19

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 {REMOVED TILE} s.NewTargetMode#1/14 >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/17 AsIs: (/23 AsIs: # TargetMode/25 HalfReuse: s.NewTargetMode1 #14/26 AsIs: )/24 AsIs: e.Params-E#1/19 AsIs: ]/9 } Tile{ ]] }
        refalrts::reinit_ident(context[4], identifiers[ident_Success]);
        refalrts::reinit_svar( context[26], context[14] );
        refalrts::link_brackets( context[7], context[9] );
        refalrts::link_brackets( context[23], context[24] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[4], context[9] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[17], context[18], context[15], context[16] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Config-SetTargetMode/4 [/7Config/8 e.Params-B#1/17 (/23 # TargetMode/25 s.TargetMode#1/26 )/24 e.Params-E#1/19 ]/9 s.TargetMode#1/14 >/1
    context[15] = context[10];
    context[16] = context[11];
    context[17] = 0;
    context[18] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[19] = context[15];
      context[20] = context[16];
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[19], context[20] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left( identifiers[ident_TargetMode], context[21], context[22] );
      if( ! context[25] )
        continue;
      if( ! refalrts::repeated_stvar_left( vm, context[26], context[14], context[21], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;
      // closed e.Params-E#1 as range 19
      //DEBUG: s.TargetMode#1: 14
      //DEBUG: e.Params-B#1: 17
      //DEBUG: e.Params-E#1: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} s.TargetMode#1/14 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/17 AsIs: (/23 AsIs: # TargetMode/25 AsIs: s.TargetMode#1/26 AsIs: )/24 AsIs: e.Params-E#1/19 AsIs: ]/9 } Tile{ ]] }
      refalrts::reinit_ident(context[4], identifiers[ident_Success]);
      refalrts::link_brackets( context[7], context[9] );
      refalrts::link_brackets( context[23], context[24] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[4], context[9] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[17], context[18], context[15], context[16] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Config-SetTargetMode/4 [/7Config/8 e.Params-B#1/10 (/16 # TargetMode/18 s.OldTargetMode#1/19 )/17 e.Params-E#1/12 ]/9 e.NewTargetMode#1/2 >/1
  // closed e.NewTargetMode#1 as range 2
  context[10] = 0;
  context[11] = 0;
  refalrts::start_e_loop(vm);
  do {
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left( identifiers[ident_TargetMode], context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.Params-E#1 as range 12
    if( ! refalrts::svar_left( context[19], context[14], context[15] ) )
      continue;
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;
    //DEBUG: e.NewTargetMode#1: 2
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.Params-E#1: 12
    //DEBUG: s.OldTargetMode#1: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} [/7Config/8 e.Params-B#1/10 (/16 # TargetMode/18 s.OldTargetMode#1/19 )/17 e.Params-E#1/12 ]/9 e.NewTargetMode#1/2 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: # Fails/0 HalfReuse: # TargetModeAlreadySet/4 } Tile{ ]] }
    refalrts::reinit_ident(context[0], identifiers[ident_Fails]);
    refalrts::reinit_ident(context[4], identifiers[ident_TargetModeAlreadySet]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_SetTargetMode("Config-SetTargetMode", 0U, 0U, func_Configm_SetTargetMode);


static refalrts::FnResult func_Configm_GetPrelude(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Config-GetPrelude/4 [/7Config/8 e.Params-B#1/10 (/16 # Prelude/18 e.Prelude#1/14 )/17 e.Params-E#1/12 ]/9 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], functions[efunc_Config], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  refalrts::start_e_loop(vm);
  do {
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left( identifiers[ident_Prelude], context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.Prelude#1 as range 14
    // closed e.Params-E#1 as range 12
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.Prelude#1: 14
    //DEBUG: e.Params-E#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Config-GetPrelude/4 [/7Config/8 e.Params-B#1/10 (/16 # Prelude/18 {REMOVED TILE} )/17 e.Params-E#1/12 ]/9 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Prelude#1/14 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_GetPrelude("Config-GetPrelude", 0U, 0U, func_Configm_GetPrelude);


static refalrts::FnResult func_Configm_SetPrelude(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Config-SetPrelude/4 [/7Config/8 e.Params-B#1/10 (/16 # Prelude/18 e.OldPrelude#1/14 )/17 e.Params-E#1/12 ]/9 e.NewPrelude#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], functions[efunc_Config], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  // closed e.NewPrelude#1 as range 2
  context[10] = 0;
  context[11] = 0;
  refalrts::start_e_loop(vm);
  do {
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left( identifiers[ident_Prelude], context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.OldPrelude#1 as range 14
    // closed e.Params-E#1 as range 12
    //DEBUG: e.NewPrelude#1: 2
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.OldPrelude#1: 14
    //DEBUG: e.Params-E#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} e.OldPrelude#1/14 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/10 AsIs: (/16 AsIs: # Prelude/18 } Tile{ AsIs: e.NewPrelude#1/2 } Tile{ AsIs: )/17 AsIs: e.Params-E#1/12 AsIs: ]/9 } Tile{ ]] }
    refalrts::reinit_ident(context[4], identifiers[ident_Success]);
    refalrts::link_brackets( context[7], context[9] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[17], context[9] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[4], context[18] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_SetPrelude("Config-SetPrelude", 0U, 0U, func_Configm_SetPrelude);


static refalrts::FnResult func_Configm_GetRuntimeFiles(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Config-GetRuntimeFiles/4 [/7Config/8 e.Params-B#1/10 (/16 # Runtime/18 e.Files#1/14 )/17 e.Params-E#1/12 ]/9 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], functions[efunc_Config], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  refalrts::start_e_loop(vm);
  do {
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left( identifiers[ident_Runtime], context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.Files#1 as range 14
    // closed e.Params-E#1 as range 12
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.Files#1: 14
    //DEBUG: e.Params-E#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Config-GetRuntimeFiles/4 [/7Config/8 e.Params-B#1/10 (/16 # Runtime/18 {REMOVED TILE} )/17 e.Params-E#1/12 ]/9 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Files#1/14 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_GetRuntimeFiles("Config-GetRuntimeFiles", 0U, 0U, func_Configm_GetRuntimeFiles);


static refalrts::FnResult func_Configm_AddRuntimeFile(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Config-AddRuntimeFile/4 [/7Config/8 e.Params-B#1/10 (/16 # Runtime/18 e.Files#1/14 )/17 e.Params-E#1/12 ]/9 e.NewFile#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], functions[efunc_Config], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  // closed e.NewFile#1 as range 2
  context[10] = 0;
  context[11] = 0;
  refalrts::start_e_loop(vm);
  do {
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left( identifiers[ident_Runtime], context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.Files#1 as range 14
    // closed e.Params-E#1 as range 12
    //DEBUG: e.NewFile#1: 2
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.Files#1: 14
    //DEBUG: e.Params-E#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/10 AsIs: (/16 AsIs: # Runtime/18 AsIs: e.Files#1/14 HalfReuse: (/17 } Tile{ AsIs: e.NewFile#1/2 } Tile{ HalfReuse: )/9 } Tile{ HalfReuse: )/0 } Tile{ AsIs: e.Params-E#1/12 } Tile{ HalfReuse: ]/1 ]] }
    refalrts::reinit_ident(context[4], identifiers[ident_Success]);
    refalrts::reinit_open_bracket(context[17]);
    refalrts::reinit_close_bracket(context[9]);
    refalrts::reinit_close_bracket(context[0]);
    refalrts::reinit_close_adt(context[1]);
    refalrts::link_brackets( context[7], context[1] );
    refalrts::link_brackets( context[16], context[0] );
    refalrts::link_brackets( context[17], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_elem( res, context[0] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[4], context[17] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_AddRuntimeFile("Config-AddRuntimeFile", 0U, 0U, func_Configm_AddRuntimeFile);


static refalrts::FnResult func_Configm_GetIncorporateds(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Config-GetIncorporateds/4 [/7Config/8 e.Params-B#1/10 (/16 # Incorporateds/18 e.LibNames#1/14 )/17 e.Params-E#1/12 ]/9 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], functions[efunc_Config], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  refalrts::start_e_loop(vm);
  do {
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left( identifiers[ident_Incorporateds], context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.LibNames#1 as range 14
    // closed e.Params-E#1 as range 12
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.LibNames#1: 14
    //DEBUG: e.Params-E#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Config-GetIncorporateds/4 [/7Config/8 e.Params-B#1/10 (/16 # Incorporateds/18 {REMOVED TILE} )/17 e.Params-E#1/12 ]/9 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.LibNames#1/14 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_GetIncorporateds("Config-GetIncorporateds", 0U, 0U, func_Configm_GetIncorporateds);


static refalrts::FnResult func_Configm_AddIncorporated(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Config-AddIncorporated/4 [/7Config/8 e.Params-B#1/10 (/16 # Incorporateds/18 e.LibNames#1/14 )/17 e.Params-E#1/12 ]/9 e.NewLibName#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], functions[efunc_Config], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  // closed e.NewLibName#1 as range 2
  context[10] = 0;
  context[11] = 0;
  refalrts::start_e_loop(vm);
  do {
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left( identifiers[ident_Incorporateds], context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.LibNames#1 as range 14
    // closed e.Params-E#1 as range 12
    //DEBUG: e.NewLibName#1: 2
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.LibNames#1: 14
    //DEBUG: e.Params-E#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/10 AsIs: (/16 AsIs: # Incorporateds/18 AsIs: e.LibNames#1/14 HalfReuse: (/17 } Tile{ AsIs: e.NewLibName#1/2 } Tile{ HalfReuse: )/9 } Tile{ HalfReuse: )/0 } Tile{ AsIs: e.Params-E#1/12 } Tile{ HalfReuse: ]/1 ]] }
    refalrts::reinit_ident(context[4], identifiers[ident_Success]);
    refalrts::reinit_open_bracket(context[17]);
    refalrts::reinit_close_bracket(context[9]);
    refalrts::reinit_close_bracket(context[0]);
    refalrts::reinit_close_adt(context[1]);
    refalrts::link_brackets( context[7], context[1] );
    refalrts::link_brackets( context[16], context[0] );
    refalrts::link_brackets( context[17], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_elem( res, context[0] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[4], context[17] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_AddIncorporated("Config-AddIncorporated", 0U, 0U, func_Configm_AddIncorporated);


static refalrts::FnResult func_Configm_GetKeepRasls(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & Config-GetKeepRasls/4 [/7Config/8 e.Params-B#1/10 (/16 # KeepRasls/18 s.Value#1/19 )/17 e.Params-E#1/12 ]/9 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], functions[efunc_Config], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  refalrts::start_e_loop(vm);
  do {
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left( identifiers[ident_KeepRasls], context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.Params-E#1 as range 12
    if( ! refalrts::svar_left( context[19], context[14], context[15] ) )
      continue;
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.Params-E#1: 12
    //DEBUG: s.Value#1: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Config-GetKeepRasls/4 [/7Config/8 e.Params-B#1/10 (/16 # KeepRasls/18 s.Value#1/19 )/17 e.Params-E#1/12 ]/9 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Value1 #19/1 ]] }
    refalrts::reinit_svar( context[1], context[19] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_GetKeepRasls("Config-GetKeepRasls", 0U, 0U, func_Configm_GetKeepRasls);


static refalrts::FnResult func_Configm_SetKeepRasls(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & Config-SetKeepRasls/4 [/7Config/8 e.Params-B#1/11 (/17 # KeepRasls/19 s.OldValue#1/20 )/18 e.Params-E#1/13 ]/9 s.NewValue#1/10 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], functions[efunc_Config], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  refalrts::start_e_loop(vm);
  do {
    context[13] = context[5];
    context[14] = context[6];
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[13], context[14] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    context[19] = refalrts::ident_left( identifiers[ident_KeepRasls], context[15], context[16] );
    if( ! context[19] )
      continue;
    // closed e.Params-E#1 as range 13
    if( ! refalrts::svar_left( context[20], context[15], context[16] ) )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    //DEBUG: s.NewValue#1: 10
    //DEBUG: e.Params-B#1: 11
    //DEBUG: e.Params-E#1: 13
    //DEBUG: s.OldValue#1: 20

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} s.OldValue#1/20 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/11 AsIs: (/17 AsIs: # KeepRasls/19 } Tile{ AsIs: s.NewValue#1/10 } Tile{ AsIs: )/18 AsIs: e.Params-E#1/13 AsIs: ]/9 } Tile{ ]] }
    refalrts::reinit_ident(context[4], identifiers[ident_Success]);
    refalrts::link_brackets( context[7], context[9] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[18], context[9] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_evar( res, context[4], context[19] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[11], context[12], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_SetKeepRasls("Config-SetKeepRasls", 0U, 0U, func_Configm_SetKeepRasls);


static refalrts::FnResult func_Configm_GetTempDir(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Config-GetTempDir/4 [/7Config/8 e.Params-B#1/10 (/16 # TempDir/18 e.DirName#1/14 )/17 e.Params-E#1/12 ]/9 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], functions[efunc_Config], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  refalrts::start_e_loop(vm);
  do {
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left( identifiers[ident_TempDir], context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.DirName#1 as range 14
    // closed e.Params-E#1 as range 12
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.DirName#1: 14
    //DEBUG: e.Params-E#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Config-GetTempDir/4 [/7Config/8 e.Params-B#1/10 (/16 # TempDir/18 {REMOVED TILE} )/17 e.Params-E#1/12 ]/9 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.DirName#1/14 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_GetTempDir("Config-GetTempDir", 0U, 0U, func_Configm_GetTempDir);


static refalrts::FnResult func_Configm_SetTempDir(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Config-SetTempDir/4 [/7Config/8 e.Params-B#1/10 (/16 # TempDir/18 e.OldDirName#1/14 )/17 e.Params-E#1/12 ]/9 e.NewDirName#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], functions[efunc_Config], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  // closed e.NewDirName#1 as range 2
  context[10] = 0;
  context[11] = 0;
  refalrts::start_e_loop(vm);
  do {
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left( identifiers[ident_TempDir], context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.OldDirName#1 as range 14
    // closed e.Params-E#1 as range 12
    //DEBUG: e.NewDirName#1: 2
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.OldDirName#1: 14
    //DEBUG: e.Params-E#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} e.OldDirName#1/14 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/10 AsIs: (/16 AsIs: # TempDir/18 } Tile{ AsIs: e.NewDirName#1/2 } Tile{ AsIs: )/17 AsIs: e.Params-E#1/12 AsIs: ]/9 } Tile{ ]] }
    refalrts::reinit_ident(context[4], identifiers[ident_Success]);
    refalrts::link_brackets( context[7], context[9] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[17], context[9] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[4], context[18] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_SetTempDir("Config-SetTempDir", 0U, 0U, func_Configm_SetTempDir);


static refalrts::FnResult func_Configm_GetOverwriteExistRasls(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & Config-GetOverwriteExistRasls/4 [/7Config/8 e.Params-B#1/10 (/16 # OverwriteExistRasls/18 s.Value#1/19 )/17 e.Params-E#1/12 ]/9 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], functions[efunc_Config], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  refalrts::start_e_loop(vm);
  do {
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left( identifiers[ident_OverwriteExistRasls], context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.Params-E#1 as range 12
    if( ! refalrts::svar_left( context[19], context[14], context[15] ) )
      continue;
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.Params-E#1: 12
    //DEBUG: s.Value#1: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Config-GetOverwriteExistRasls/4 [/7Config/8 e.Params-B#1/10 (/16 # OverwriteExistRasls/18 s.Value#1/19 )/17 e.Params-E#1/12 ]/9 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Value1 #19/1 ]] }
    refalrts::reinit_svar( context[1], context[19] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_GetOverwriteExistRasls("Config-GetOverwriteExistRasls", 0U, 0U, func_Configm_GetOverwriteExistRasls);


static refalrts::FnResult func_Configm_SetOverwriteExistRasls(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & Config-SetOverwriteExistRasls/4 [/7Config/8 e.Params-B#1/11 (/17 # OverwriteExistRasls/19 s.OldValue#1/20 )/18 e.Params-E#1/13 ]/9 s.NewValue#1/10 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], functions[efunc_Config], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  refalrts::start_e_loop(vm);
  do {
    context[13] = context[5];
    context[14] = context[6];
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[13], context[14] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    context[19] = refalrts::ident_left( identifiers[ident_OverwriteExistRasls], context[15], context[16] );
    if( ! context[19] )
      continue;
    // closed e.Params-E#1 as range 13
    if( ! refalrts::svar_left( context[20], context[15], context[16] ) )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    //DEBUG: s.NewValue#1: 10
    //DEBUG: e.Params-B#1: 11
    //DEBUG: e.Params-E#1: 13
    //DEBUG: s.OldValue#1: 20

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} s.OldValue#1/20 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/11 AsIs: (/17 AsIs: # OverwriteExistRasls/19 } Tile{ AsIs: s.NewValue#1/10 } Tile{ AsIs: )/18 AsIs: e.Params-E#1/13 AsIs: ]/9 } Tile{ ]] }
    refalrts::reinit_ident(context[4], identifiers[ident_Success]);
    refalrts::link_brackets( context[7], context[9] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[18], context[9] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_evar( res, context[4], context[19] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[11], context[12], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_SetOverwriteExistRasls("Config-SetOverwriteExistRasls", 0U, 0U, func_Configm_SetOverwriteExistRasls);


static refalrts::FnResult func_Configm_GetCppCompilerExeSuf(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Config-GetCppCompilerExeSuf/4 [/7Config/8 e.Params-B#1/10 (/16 # CppCompilerExeSuf/18 e.CppCompilerExeSuf#1/14 )/17 e.Params-E#1/12 ]/9 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], functions[efunc_Config], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  refalrts::start_e_loop(vm);
  do {
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left( identifiers[ident_CppCompilerExeSuf], context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.CppCompilerExeSuf#1 as range 14
    // closed e.Params-E#1 as range 12
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.CppCompilerExeSuf#1: 14
    //DEBUG: e.Params-E#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Config-GetCppCompilerExeSuf/4 [/7Config/8 e.Params-B#1/10 (/16 # CppCompilerExeSuf/18 {REMOVED TILE} )/17 e.Params-E#1/12 ]/9 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.CppCompilerExeSuf#1/14 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_GetCppCompilerExeSuf("Config-GetCppCompilerExeSuf", 0U, 0U, func_Configm_GetCppCompilerExeSuf);


static refalrts::FnResult func_Configm_SetCppCompilerExeSuf(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Config-SetCppCompilerExeSuf/4 [/7Config/8 e.Params-B#1/10 (/16 # CppCompilerExeSuf/18 e.OldCppCompilerExeSuf#1/14 )/17 e.Params-E#1/12 ]/9 e.CppCompilerExeSuf#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], functions[efunc_Config], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  // closed e.CppCompilerExeSuf#1 as range 2
  context[10] = 0;
  context[11] = 0;
  refalrts::start_e_loop(vm);
  do {
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left( identifiers[ident_CppCompilerExeSuf], context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.OldCppCompilerExeSuf#1 as range 14
    // closed e.Params-E#1 as range 12
    //DEBUG: e.CppCompilerExeSuf#1: 2
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.OldCppCompilerExeSuf#1: 14
    //DEBUG: e.Params-E#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} e.OldCppCompilerExeSuf#1/14 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/10 AsIs: (/16 AsIs: # CppCompilerExeSuf/18 } Tile{ AsIs: e.CppCompilerExeSuf#1/2 } Tile{ AsIs: )/17 AsIs: e.Params-E#1/12 AsIs: ]/9 } Tile{ ]] }
    refalrts::reinit_ident(context[4], identifiers[ident_Success]);
    refalrts::link_brackets( context[7], context[9] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[17], context[9] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[4], context[18] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_SetCppCompilerExeSuf("Config-SetCppCompilerExeSuf", 0U, 0U, func_Configm_SetCppCompilerExeSuf);


static refalrts::FnResult func_Configm_GetCppCompilerLibSuf(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Config-GetCppCompilerLibSuf/4 [/7Config/8 e.Params-B#1/10 (/16 # CppCompilerLibSuf/18 e.CppCompilerLibSuf#1/14 )/17 e.Params-E#1/12 ]/9 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], functions[efunc_Config], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  refalrts::start_e_loop(vm);
  do {
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left( identifiers[ident_CppCompilerLibSuf], context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.CppCompilerLibSuf#1 as range 14
    // closed e.Params-E#1 as range 12
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.CppCompilerLibSuf#1: 14
    //DEBUG: e.Params-E#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Config-GetCppCompilerLibSuf/4 [/7Config/8 e.Params-B#1/10 (/16 # CppCompilerLibSuf/18 {REMOVED TILE} )/17 e.Params-E#1/12 ]/9 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.CppCompilerLibSuf#1/14 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_GetCppCompilerLibSuf("Config-GetCppCompilerLibSuf", 0U, 0U, func_Configm_GetCppCompilerLibSuf);


static refalrts::FnResult func_Configm_SetCppCompilerLibSuf(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Config-SetCppCompilerLibSuf/4 [/7Config/8 e.Params-B#1/10 (/16 # CppCompilerLibSuf/18 e.OldCppCompilerLibSuf#1/14 )/17 e.Params-E#1/12 ]/9 e.CppCompilerLibSuf#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], functions[efunc_Config], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  // closed e.CppCompilerLibSuf#1 as range 2
  context[10] = 0;
  context[11] = 0;
  refalrts::start_e_loop(vm);
  do {
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left( identifiers[ident_CppCompilerLibSuf], context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.OldCppCompilerLibSuf#1 as range 14
    // closed e.Params-E#1 as range 12
    //DEBUG: e.CppCompilerLibSuf#1: 2
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.OldCppCompilerLibSuf#1: 14
    //DEBUG: e.Params-E#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} e.OldCppCompilerLibSuf#1/14 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/10 AsIs: (/16 AsIs: # CppCompilerLibSuf/18 } Tile{ AsIs: e.CppCompilerLibSuf#1/2 } Tile{ AsIs: )/17 AsIs: e.Params-E#1/12 AsIs: ]/9 } Tile{ ]] }
    refalrts::reinit_ident(context[4], identifiers[ident_Success]);
    refalrts::link_brackets( context[7], context[9] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[17], context[9] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[4], context[18] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_SetCppCompilerLibSuf("Config-SetCppCompilerLibSuf", 0U, 0U, func_Configm_SetCppCompilerLibSuf);


//End of file
