// This file automatically generated from 'Config.ref'
// Don't edit! Edit 'Config.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_1172457488_3991322347
#define COOKIE1_ 1172457488U
#define COOKIE2_ 3991322347U

enum efunc {
  efunc_u_u_Stepm_Drop = 0,
  efunc_u_u_Metau_Mu = 1,
  efunc_d_table = 2,
  efunc_Config = 3,
  efunc_gen_Configm_SetOptFlags_B1 = 4,
  efunc_ParseOptFlags = 5,
  efunc_ParseOptLetters = 6,
  efunc_Optm_Add = 7,
  efunc_Optm_Remove = 8,
  efunc_Optm_Assign = 9,
  efunc_gen_ParseOptLetters_S1C1 = 10,
  efunc_ValidFlag = 11,
  efunc_Flagsm_Unique = 12,
  efunc_gen_Configm_SetWarning_B1 = 13,
  efunc_ParseWarningNames = 14,
  efunc_gen_ParseWarningNames_S1C1 = 15,
  efunc_ValidWarningId = 16,
  efunc_gen_ParseWarningNames_S2C1 = 17,
  efunc_ValidWarningIdAsError = 18,
  efunc_gen_ValidWarningIdAsError_S1C1 = 19,
  efunc_ValidWarningAsId = 20,
  efunc_WarningIdsm_Remove = 21,
  efunc_gen_ValidWarningIdAsError_S2C1 = 22,
  efunc_WarningIdsm_Add = 23,
  efunc_Configm_AllWarningIds = 24,
  efunc_gen_ValidWarningAsId_S2C1 = 25,
  efunc_WarningForName = 26,
  efunc_gen_ValidWarningId_S2C1 = 27,
  efunc_gen_ValidWarningId_S3C1 = 28,
  efunc_gen_Configm_SetTreeOptCycles_B1 = 29,
  efunc_ParseNumber = 30,
  efunc_gen_ParseNumber_S2C1 = 31,
  efunc_IsDigit = 32,
  efunc_gen_ParseNumber_S3B1 = 33,
  efunc_Numb = 34,
  efunc_gen_IsDigit_S1C1 = 35,
  efunc_Type = 36,
  efunc_gen_Configm_GetTempDir_B1 = 37,
  efunc_Mu = 38,
  efunc_Up = 39,
  efunc_Evm_met = 40,
  efunc_Residue = 41,
  efunc_u_u_Metau_Residue = 42,
  efunc_Configm_Create = 43,
  efunc_Configm_GetCppCompiler = 44,
  efunc_Configm_SetCppCompiler = 45,
  efunc_Configm_SetCppCompilerSuf = 46,
  efunc_Configm_SetCompilerFlags = 47,
  efunc_Configm_GetGenMode = 48,
  efunc_Configm_GetOptPattern = 49,
  efunc_Configm_GetOptResult = 50,
  efunc_Configm_GetConditionsMode = 51,
  efunc_Configm_GetOptTree = 52,
  efunc_Configm_GetOptDrive = 53,
  efunc_Configm_GetOptAutoMarkup = 54,
  efunc_Configm_GetOptIntrinsic = 55,
  efunc_Configm_GetOptSpec = 56,
  efunc_Configm_GetOptGlobal = 57,
  efunc_Configm_SetOptFlags = 58,
  efunc_Configm_GetWarningIdsAsErrors = 59,
  efunc_Configm_GetWarningIds = 60,
  efunc_Configm_SetWarning = 61,
  efunc_Configm_GetErrorFile = 62,
  efunc_Configm_SetErrorFile = 63,
  efunc_Configm_GetDebugMode = 64,
  efunc_Configm_SetMarkupContext = 65,
  efunc_Configm_SetDebugInfo = 66,
  efunc_Configm_GetGrammarCheck = 67,
  efunc_Configm_SetGrammarCheck = 68,
  efunc_Configm_GetTargetFileName = 69,
  efunc_Configm_SetTargetFileName = 70,
  efunc_Configm_GetTargetSuffix = 71,
  efunc_Configm_SetTargetSuffix = 72,
  efunc_Configm_GetSearchFolders = 73,
  efunc_Configm_SetSearchFolder = 74,
  efunc_Configm_GetPrefix = 75,
  efunc_Configm_SetPrefix = 76,
  efunc_Configm_GetReferences = 77,
  efunc_Configm_AddReference = 78,
  efunc_Configm_GetTargetMode = 79,
  efunc_Configm_SetTargetMode = 80,
  efunc_Configm_GetIncorporateds = 81,
  efunc_Configm_AddIncorporated = 82,
  efunc_Configm_GetChmodXCommand = 83,
  efunc_Configm_SetChmodXCommand = 84,
  efunc_Configm_GetPrelude = 85,
  efunc_Configm_SetPrelude = 86,
  efunc_Configm_GetR5Mode = 87,
  efunc_Configm_SetR5Mode = 88,
  efunc_Configm_GetLogFile = 89,
  efunc_Configm_SetLogFile = 90,
  efunc_Configm_GetTreeOptCycles = 91,
  efunc_Configm_SetTreeOptCycles = 92,
  efunc_Configm_GetKeepRasls = 93,
  efunc_Configm_SetKeepRasls = 94,
  efunc_Configm_GetTempDir = 95,
  efunc_Configm_SetTempDir = 96,
  efunc_Configm_GetOverwriteExistRasls = 97,
  efunc_Configm_SetOverwriteExistRasls = 98,
  efunc_Configm_GetNoSources = 99,
  efunc_Configm_SetNoSources = 100,
};


enum ident {
  ident_CppCompiler = 0,
  ident_NoCppCompilerExe = 1,
  ident_NoCppCompilerLib = 2,
  ident_Optimize = 3,
  ident_WarningIds = 4,
  ident_nulm_inm_compound = 5,
  ident_WarningIdsAsErrors = 6,
  ident_ErrorFile = 7,
  ident_DebugMode = 8,
  ident_NoMarkupContext = 9,
  ident_NoDebugInfo = 10,
  ident_GrammarCheck = 11,
  ident_NormalRun = 12,
  ident_TargetFileName = 13,
  ident_DefaultTargetFileName = 14,
  ident_TargetMode = 15,
  ident_DefaultEXE = 16,
  ident_TargetSuffix = 17,
  ident_Folders = 18,
  ident_Prefix = 19,
  ident_References = 20,
  ident_Incorporateds = 21,
  ident_ChmodXCommand = 22,
  ident_Prelude = 23,
  ident_Refal5Mode = 24,
  ident_Extended = 25,
  ident_LogFile = 26,
  ident_TreeOptCycles = 27,
  ident_KeepRasls = 28,
  ident_False = 29,
  ident_TempDir = 30,
  ident_OverwriteExistRasls = 31,
  ident_True = 32,
  ident_NoSources = 33,
  ident_EXE = 34,
  ident_NoCppCompiler = 35,
  ident_LIB = 36,
  ident_Success = 37,
  ident_OptDirect = 38,
  ident_OnlyDirect = 39,
  ident_OnlyInterpret = 40,
  ident_OptPatternExt = 41,
  ident_Conjoint = 42,
  ident_OptPattern = 43,
  ident_Disjoint = 44,
  ident_OptResult = 45,
  ident_NoOpt = 46,
  ident_OptConditions = 47,
  ident_Conditionsm_Native = 48,
  ident_Conditionsm_Transform = 49,
  ident_OptTree = 50,
  ident_OptDrive = 51,
  ident_OptInline = 52,
  ident_OptAutoMarkup = 53,
  ident_OptIntrinsic = 54,
  ident_OptSpec = 55,
  ident_OptGlobal = 56,
  ident_Fails = 57,
  ident_BadValuem_Opt = 58,
  ident_EnableWarning = 59,
  ident_Nop = 60,
  ident_BadValuem_Warning = 61,
  ident_screening = 62,
  ident_initm_finalm_entry = 63,
  ident_ignoredm_pseudocomments = 64,
  ident_NoErrorFile = 65,
  ident_EmptyErrorFileName = 66,
  ident_MarkupContext = 67,
  ident_DebugInfo = 68,
  ident_R = 69,
  ident_CompileOnly = 70,
  ident_REF5RSL = 71,
  ident_TargetModeAlreadySet = 72,
  ident_BadValuem_MustBeNumber = 73,
  ident_Current = 74,
  ident_Mu = 75,
  ident_Up = 76,
  ident_Evm_met = 77,
  ident_Residue = 78,
  ident_u_u_Metau_Residue = 79,
  ident_Config = 80,
  ident_Configm_Create = 81,
  ident_Configm_GetCppCompiler = 82,
  ident_Configm_SetCppCompiler = 83,
  ident_Configm_SetCppCompilerSuf = 84,
  ident_Configm_SetCompilerFlags = 85,
  ident_Configm_GetGenMode = 86,
  ident_Configm_GetOptPattern = 87,
  ident_Configm_GetOptResult = 88,
  ident_Configm_GetConditionsMode = 89,
  ident_Configm_GetOptTree = 90,
  ident_Configm_GetOptDrive = 91,
  ident_Configm_GetOptAutoMarkup = 92,
  ident_Configm_GetOptIntrinsic = 93,
  ident_Configm_GetOptSpec = 94,
  ident_Configm_GetOptGlobal = 95,
  ident_Configm_SetOptFlags = 96,
  ident_ParseOptFlags = 97,
  ident_ParseOptLetters = 98,
  ident_ValidFlag = 99,
  ident_Flagsm_Unique = 100,
  ident_Optm_Add = 101,
  ident_Optm_Remove = 102,
  ident_Optm_Assign = 103,
  ident_Configm_GetWarningIdsAsErrors = 104,
  ident_Configm_GetWarningIds = 105,
  ident_Configm_SetWarning = 106,
  ident_ParseWarningNames = 107,
  ident_ValidWarningIdAsError = 108,
  ident_ValidWarningAsId = 109,
  ident_ValidWarningId = 110,
  ident_WarningForName = 111,
  ident_Configm_AllWarningIds = 112,
  ident_WarningIdsm_Add = 113,
  ident_WarningIdsm_Remove = 114,
  ident_Configm_GetErrorFile = 115,
  ident_Configm_SetErrorFile = 116,
  ident_Configm_GetDebugMode = 117,
  ident_Configm_SetMarkupContext = 118,
  ident_Configm_SetDebugInfo = 119,
  ident_Configm_GetGrammarCheck = 120,
  ident_Configm_SetGrammarCheck = 121,
  ident_Configm_GetTargetFileName = 122,
  ident_Configm_SetTargetFileName = 123,
  ident_Configm_GetTargetSuffix = 124,
  ident_Configm_SetTargetSuffix = 125,
  ident_Configm_GetSearchFolders = 126,
  ident_Configm_SetSearchFolder = 127,
  ident_Configm_GetPrefix = 128,
  ident_Configm_SetPrefix = 129,
  ident_Configm_GetReferences = 130,
  ident_Configm_AddReference = 131,
  ident_Configm_GetTargetMode = 132,
  ident_Configm_SetTargetMode = 133,
  ident_Configm_GetIncorporateds = 134,
  ident_Configm_AddIncorporated = 135,
  ident_Configm_GetChmodXCommand = 136,
  ident_Configm_SetChmodXCommand = 137,
  ident_Configm_GetPrelude = 138,
  ident_Configm_SetPrelude = 139,
  ident_Configm_GetR5Mode = 140,
  ident_Configm_SetR5Mode = 141,
  ident_Configm_GetLogFile = 142,
  ident_Configm_SetLogFile = 143,
  ident_Configm_GetTreeOptCycles = 144,
  ident_Configm_SetTreeOptCycles = 145,
  ident_ParseNumber = 146,
  ident_IsDigit = 147,
  ident_Configm_GetKeepRasls = 148,
  ident_Configm_SetKeepRasls = 149,
  ident_Configm_GetTempDir = 150,
  ident_Configm_SetTempDir = 151,
  ident_Configm_GetOverwriteExistRasls = 152,
  ident_Configm_SetOverwriteExistRasls = 153,
  ident_Configm_GetNoSources = 154,
  ident_Configm_SetNoSources = 155,
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


static refalrts::FnResult func_Configm_Create(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 99 elems
  refalrts::Iter context[99];
  refalrts::zeros( context, 99 );
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
  //RESULT: Tile{ [[ HalfReuse: [/0 Reuse: & Config/4 HalfReuse: (/1 } # CppCompiler/5 # NoCppCompilerExe/6 # NoCppCompilerLib/7 (/8 )/9 (/10 )/11 )/12 (/13 # Optimize/14 )/15 (/16 # WarningIds/17 # nul-in-compound/18 )/19 (/20 # WarningIdsAsErrors/21 )/22 (/23 # ErrorFile/24 )/25 (/26 # DebugMode/27 # NoMarkupContext/28 # NoDebugInfo/29 )/30 (/31 # GrammarCheck/32 # NormalRun/33 )/34 (/35 # TargetFileName/36 # DefaultTargetFileName/37 )/38 (/39 # TargetMode/40 # DefaultEXE/41 )/42 (/43 # TargetSuffix/44 (/45".EXE"/46 )/48 (/49".DLL"/50 )/52 )/53 (/54 # Folders/55 )/56 (/57 # Prefix/58 )/59 (/60 # References/61 )/62 (/63 # Incorporateds/64 )/65 (/66 # ChmodXCommand/67 )/68 (/69 # Prelude/70 )/71 (/72 # Refal5Mode/73 # Extended/74 )/75 (/76 # LogFile/77 )/78 (/79 # TreeOptCycles/80 100/81 )/82 (/83 # KeepRasls/84 # False/85 )/86 (/87 # TempDir/88 )/89 (/90 # OverwriteExistRasls/91 # True/92 )/93 (/94 # NoSources/95 # False/96 )/97 ]/98 Tile{ ]] }
  refalrts::alloc_ident(vm, context[5], identifiers[ident_CppCompiler]);
  refalrts::alloc_ident(vm, context[6], identifiers[ident_NoCppCompilerExe]);
  refalrts::alloc_ident(vm, context[7], identifiers[ident_NoCppCompilerLib]);
  refalrts::alloc_open_bracket(vm, context[8]);
  refalrts::alloc_close_bracket(vm, context[9]);
  refalrts::alloc_open_bracket(vm, context[10]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::alloc_close_bracket(vm, context[12]);
  refalrts::alloc_open_bracket(vm, context[13]);
  refalrts::alloc_ident(vm, context[14], identifiers[ident_Optimize]);
  refalrts::alloc_close_bracket(vm, context[15]);
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::alloc_ident(vm, context[17], identifiers[ident_WarningIds]);
  refalrts::alloc_ident(vm, context[18], identifiers[ident_nulm_inm_compound]);
  refalrts::alloc_close_bracket(vm, context[19]);
  refalrts::alloc_open_bracket(vm, context[20]);
  refalrts::alloc_ident(vm, context[21], identifiers[ident_WarningIdsAsErrors]);
  refalrts::alloc_close_bracket(vm, context[22]);
  refalrts::alloc_open_bracket(vm, context[23]);
  refalrts::alloc_ident(vm, context[24], identifiers[ident_ErrorFile]);
  refalrts::alloc_close_bracket(vm, context[25]);
  refalrts::alloc_open_bracket(vm, context[26]);
  refalrts::alloc_ident(vm, context[27], identifiers[ident_DebugMode]);
  refalrts::alloc_ident(vm, context[28], identifiers[ident_NoMarkupContext]);
  refalrts::alloc_ident(vm, context[29], identifiers[ident_NoDebugInfo]);
  refalrts::alloc_close_bracket(vm, context[30]);
  refalrts::alloc_open_bracket(vm, context[31]);
  refalrts::alloc_ident(vm, context[32], identifiers[ident_GrammarCheck]);
  refalrts::alloc_ident(vm, context[33], identifiers[ident_NormalRun]);
  refalrts::alloc_close_bracket(vm, context[34]);
  refalrts::alloc_open_bracket(vm, context[35]);
  refalrts::alloc_ident(vm, context[36], identifiers[ident_TargetFileName]);
  refalrts::alloc_ident(vm, context[37], identifiers[ident_DefaultTargetFileName]);
  refalrts::alloc_close_bracket(vm, context[38]);
  refalrts::alloc_open_bracket(vm, context[39]);
  refalrts::alloc_ident(vm, context[40], identifiers[ident_TargetMode]);
  refalrts::alloc_ident(vm, context[41], identifiers[ident_DefaultEXE]);
  refalrts::alloc_close_bracket(vm, context[42]);
  refalrts::alloc_open_bracket(vm, context[43]);
  refalrts::alloc_ident(vm, context[44], identifiers[ident_TargetSuffix]);
  refalrts::alloc_open_bracket(vm, context[45]);
  refalrts::alloc_chars(vm, context[46], context[47], ".EXE", 4);
  refalrts::alloc_close_bracket(vm, context[48]);
  refalrts::alloc_open_bracket(vm, context[49]);
  refalrts::alloc_chars(vm, context[50], context[51], ".DLL", 4);
  refalrts::alloc_close_bracket(vm, context[52]);
  refalrts::alloc_close_bracket(vm, context[53]);
  refalrts::alloc_open_bracket(vm, context[54]);
  refalrts::alloc_ident(vm, context[55], identifiers[ident_Folders]);
  refalrts::alloc_close_bracket(vm, context[56]);
  refalrts::alloc_open_bracket(vm, context[57]);
  refalrts::alloc_ident(vm, context[58], identifiers[ident_Prefix]);
  refalrts::alloc_close_bracket(vm, context[59]);
  refalrts::alloc_open_bracket(vm, context[60]);
  refalrts::alloc_ident(vm, context[61], identifiers[ident_References]);
  refalrts::alloc_close_bracket(vm, context[62]);
  refalrts::alloc_open_bracket(vm, context[63]);
  refalrts::alloc_ident(vm, context[64], identifiers[ident_Incorporateds]);
  refalrts::alloc_close_bracket(vm, context[65]);
  refalrts::alloc_open_bracket(vm, context[66]);
  refalrts::alloc_ident(vm, context[67], identifiers[ident_ChmodXCommand]);
  refalrts::alloc_close_bracket(vm, context[68]);
  refalrts::alloc_open_bracket(vm, context[69]);
  refalrts::alloc_ident(vm, context[70], identifiers[ident_Prelude]);
  refalrts::alloc_close_bracket(vm, context[71]);
  refalrts::alloc_open_bracket(vm, context[72]);
  refalrts::alloc_ident(vm, context[73], identifiers[ident_Refal5Mode]);
  refalrts::alloc_ident(vm, context[74], identifiers[ident_Extended]);
  refalrts::alloc_close_bracket(vm, context[75]);
  refalrts::alloc_open_bracket(vm, context[76]);
  refalrts::alloc_ident(vm, context[77], identifiers[ident_LogFile]);
  refalrts::alloc_close_bracket(vm, context[78]);
  refalrts::alloc_open_bracket(vm, context[79]);
  refalrts::alloc_ident(vm, context[80], identifiers[ident_TreeOptCycles]);
  refalrts::alloc_number(vm, context[81], 100UL);
  refalrts::alloc_close_bracket(vm, context[82]);
  refalrts::alloc_open_bracket(vm, context[83]);
  refalrts::alloc_ident(vm, context[84], identifiers[ident_KeepRasls]);
  refalrts::alloc_ident(vm, context[85], identifiers[ident_False]);
  refalrts::alloc_close_bracket(vm, context[86]);
  refalrts::alloc_open_bracket(vm, context[87]);
  refalrts::alloc_ident(vm, context[88], identifiers[ident_TempDir]);
  refalrts::alloc_close_bracket(vm, context[89]);
  refalrts::alloc_open_bracket(vm, context[90]);
  refalrts::alloc_ident(vm, context[91], identifiers[ident_OverwriteExistRasls]);
  refalrts::alloc_ident(vm, context[92], identifiers[ident_True]);
  refalrts::alloc_close_bracket(vm, context[93]);
  refalrts::alloc_open_bracket(vm, context[94]);
  refalrts::alloc_ident(vm, context[95], identifiers[ident_NoSources]);
  refalrts::alloc_ident(vm, context[96], identifiers[ident_False]);
  refalrts::alloc_close_bracket(vm, context[97]);
  refalrts::alloc_close_adt(vm, context[98]);
  refalrts::reinit_open_adt(context[0]);
  refalrts::update_name(context[4], functions[efunc_Config]);
  refalrts::reinit_open_bracket(context[1]);
  refalrts::link_brackets( context[0], context[98] );
  refalrts::link_brackets( context[94], context[97] );
  refalrts::link_brackets( context[90], context[93] );
  refalrts::link_brackets( context[87], context[89] );
  refalrts::link_brackets( context[83], context[86] );
  refalrts::link_brackets( context[79], context[82] );
  refalrts::link_brackets( context[76], context[78] );
  refalrts::link_brackets( context[72], context[75] );
  refalrts::link_brackets( context[69], context[71] );
  refalrts::link_brackets( context[66], context[68] );
  refalrts::link_brackets( context[63], context[65] );
  refalrts::link_brackets( context[60], context[62] );
  refalrts::link_brackets( context[57], context[59] );
  refalrts::link_brackets( context[54], context[56] );
  refalrts::link_brackets( context[43], context[53] );
  refalrts::link_brackets( context[49], context[52] );
  refalrts::link_brackets( context[45], context[48] );
  refalrts::link_brackets( context[39], context[42] );
  refalrts::link_brackets( context[35], context[38] );
  refalrts::link_brackets( context[31], context[34] );
  refalrts::link_brackets( context[26], context[30] );
  refalrts::link_brackets( context[23], context[25] );
  refalrts::link_brackets( context[20], context[22] );
  refalrts::link_brackets( context[16], context[19] );
  refalrts::link_brackets( context[13], context[15] );
  refalrts::link_brackets( context[1], context[12] );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[98] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Configm_Create("Config-Create", 0U, 0U, func_Configm_Create);


static refalrts::FnResult func_Configm_GetCppCompiler(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 38 elems
  refalrts::Iter context[38];
  refalrts::zeros( context, 38 );
  // </0 & Config-GetCppCompiler/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Config-GetCppCompiler/4 [/7Config/8 e.new#1/5 ]/9 s.new#2/10 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], functions[efunc_Config], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  // closed e.new#1 as range 5
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & Config-GetCppCompiler/4 [/7Config/8 e.new#3/11 ]/9 # EXE/10 >/1
    context[11] = context[5];
    context[12] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_EXE], context[10] ) )
      continue;
    // closed e.new#3 as range 11
    do {
      // </0 & Config-GetCppCompiler/4 [/7Config/8 e.Params-B#1/15 (/21 # CppCompiler/23 # NoCppCompilerExe/24 t.CppCompilerLib#1/33 e.Flags#1/19 (/31 e.ExeSuf#1/29 )/32 (/27 e.LibSuf#1/25 )/28 )/22 e.Params-E#1/17 ]/9 # EXE/10 >/1
      context[13] = context[11];
      context[14] = context[12];
      context[15] = 0;
      context[16] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[17] = context[13];
        context[18] = context[14];
        context[19] = 0;
        context[20] = 0;
        context[21] = refalrts::brackets_left( context[19], context[20], context[17], context[18] );
        if( ! context[21] )
          continue;
        refalrts::bracket_pointers(context[21], context[22]);
        context[23] = refalrts::ident_left( identifiers[ident_CppCompiler], context[19], context[20] );
        if( ! context[23] )
          continue;
        context[24] = refalrts::ident_left( identifiers[ident_NoCppCompilerExe], context[19], context[20] );
        if( ! context[24] )
          continue;
        context[25] = 0;
        context[26] = 0;
        context[27] = refalrts::brackets_right( context[25], context[26], context[19], context[20] );
        if( ! context[27] )
          continue;
        refalrts::bracket_pointers(context[27], context[28]);
        context[29] = 0;
        context[30] = 0;
        context[31] = refalrts::brackets_right( context[29], context[30], context[19], context[20] );
        if( ! context[31] )
          continue;
        refalrts::bracket_pointers(context[31], context[32]);
        // closed e.ExeSuf#1 as range 29
        // closed e.LibSuf#1 as range 25
        // closed e.Params-E#1 as range 17
        context[34] = refalrts::tvar_left( context[33], context[19], context[20] );
        if( ! context[34] )
          continue;
        // closed e.Flags#1 as range 19
        //DEBUG: e.Params-B#1: 15
        //DEBUG: e.ExeSuf#1: 29
        //DEBUG: e.LibSuf#1: 25
        //DEBUG: e.Params-E#1: 17
        //DEBUG: t.CppCompilerLib#1: 33
        //DEBUG: e.Flags#1: 19

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & Config-GetCppCompiler/4 [/7Config/8 e.Params-B#1/15 (/21 # CppCompiler/23 # NoCppCompilerExe/24 t.CppCompilerLib#1/33 e.Flags#1/19 (/31 e.ExeSuf#1/29 )/32 (/27 e.LibSuf#1/25 )/28 )/22 e.Params-E#1/17 ]/9 # EXE/10 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: # NoCppCompiler/1 ]] }
        refalrts::reinit_ident(context[1], identifiers[ident_NoCppCompiler]);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[15], context[16], context[13], context[14] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Config-GetCppCompiler/4 [/7Config/8 e.Params-B#1/15 (/21 # CppCompiler/23 (/26 e.CppCompilerExe#1/24 )/27 t.CppCompilerLib#1/36 e.Flags#1/19 (/34 e.ExeSuf#1/32 )/35 (/30 e.LibSuf#1/28 )/31 )/22 e.Params-E#1/17 ]/9 # EXE/10 >/1
    context[13] = context[11];
    context[14] = context[12];
    context[15] = 0;
    context[16] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[17] = context[13];
      context[18] = context[14];
      context[19] = 0;
      context[20] = 0;
      context[21] = refalrts::brackets_left( context[19], context[20], context[17], context[18] );
      if( ! context[21] )
        continue;
      refalrts::bracket_pointers(context[21], context[22]);
      context[23] = refalrts::ident_left( identifiers[ident_CppCompiler], context[19], context[20] );
      if( ! context[23] )
        continue;
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[19], context[20] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      context[28] = 0;
      context[29] = 0;
      context[30] = refalrts::brackets_right( context[28], context[29], context[19], context[20] );
      if( ! context[30] )
        continue;
      refalrts::bracket_pointers(context[30], context[31]);
      context[32] = 0;
      context[33] = 0;
      context[34] = refalrts::brackets_right( context[32], context[33], context[19], context[20] );
      if( ! context[34] )
        continue;
      refalrts::bracket_pointers(context[34], context[35]);
      // closed e.CppCompilerExe#1 as range 24
      // closed e.ExeSuf#1 as range 32
      // closed e.LibSuf#1 as range 28
      // closed e.Params-E#1 as range 17
      context[37] = refalrts::tvar_left( context[36], context[19], context[20] );
      if( ! context[37] )
        continue;
      // closed e.Flags#1 as range 19
      //DEBUG: e.Params-B#1: 15
      //DEBUG: e.CppCompilerExe#1: 24
      //DEBUG: e.ExeSuf#1: 32
      //DEBUG: e.LibSuf#1: 28
      //DEBUG: e.Params-E#1: 17
      //DEBUG: t.CppCompilerLib#1: 36
      //DEBUG: e.Flags#1: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & Config-GetCppCompiler/4 [/7Config/8 e.Params-B#1/15 (/21 # CppCompiler/23 {REMOVED TILE} t.CppCompilerLib#1/36 {REMOVED TILE} {REMOVED TILE} (/30 e.LibSuf#1/28 )/31 )/22 e.Params-E#1/17 ]/9 # EXE/10 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/26 AsIs: e.CppCompilerExe#1/24 AsIs: )/27 } Tile{ AsIs: e.Flags#1/19 } Tile{ AsIs: (/34 AsIs: e.ExeSuf#1/32 AsIs: )/35 } Tile{ ]] }
      refalrts::link_brackets( context[34], context[35] );
      refalrts::link_brackets( context[26], context[27] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[34], context[35] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[15], context[16], context[13], context[14] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Config-GetCppCompiler/4 [/7Config/8 e.new#3/5 ]/9 # LIB/10 >/1
  if( ! refalrts::ident_term( identifiers[ident_LIB], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 5
  do {
    // </0 & Config-GetCppCompiler/4 [/7Config/8 e.Params-B#1/13 (/19 # CppCompiler/21 t.CppCompilerExe#1/30 # NoCppCompilerLib/32 e.Flags#1/17 (/28 e.ExeSuf#1/26 )/29 (/24 e.LibSuf#1/22 )/25 )/20 e.Params-E#1/15 ]/9 # LIB/10 >/1
    context[11] = context[5];
    context[12] = context[6];
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[15] = context[11];
      context[16] = context[12];
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_left( context[17], context[18], context[15], context[16] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      context[21] = refalrts::ident_left( identifiers[ident_CppCompiler], context[17], context[18] );
      if( ! context[21] )
        continue;
      context[22] = 0;
      context[23] = 0;
      context[24] = refalrts::brackets_right( context[22], context[23], context[17], context[18] );
      if( ! context[24] )
        continue;
      refalrts::bracket_pointers(context[24], context[25]);
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_right( context[26], context[27], context[17], context[18] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      // closed e.ExeSuf#1 as range 26
      // closed e.LibSuf#1 as range 22
      // closed e.Params-E#1 as range 15
      context[31] = refalrts::tvar_left( context[30], context[17], context[18] );
      if( ! context[31] )
        continue;
      context[32] = refalrts::ident_left( identifiers[ident_NoCppCompilerLib], context[17], context[18] );
      if( ! context[32] )
        continue;
      // closed e.Flags#1 as range 17
      //DEBUG: e.Params-B#1: 13
      //DEBUG: e.ExeSuf#1: 26
      //DEBUG: e.LibSuf#1: 22
      //DEBUG: e.Params-E#1: 15
      //DEBUG: t.CppCompilerExe#1: 30
      //DEBUG: e.Flags#1: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & Config-GetCppCompiler/4 [/7Config/8 e.Params-B#1/13 (/19 # CppCompiler/21 t.CppCompilerExe#1/30 # NoCppCompilerLib/32 e.Flags#1/17 (/28 e.ExeSuf#1/26 )/29 (/24 e.LibSuf#1/22 )/25 )/20 e.Params-E#1/15 ]/9 # LIB/10 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # NoCppCompiler/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_NoCppCompiler]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[13], context[14], context[11], context[12] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Config-GetCppCompiler/4 [/7Config/8 e.Params-B#1/11 (/17 # CppCompiler/19 t.CppCompilerExe#1/28 (/32 e.CppCompilerLib#1/30 )/33 e.Flags#1/15 (/26 e.ExeSuf#1/24 )/27 (/22 e.LibSuf#1/20 )/23 )/18 e.Params-E#1/13 ]/9 # LIB/10 >/1
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
    context[19] = refalrts::ident_left( identifiers[ident_CppCompiler], context[15], context[16] );
    if( ! context[19] )
      continue;
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_right( context[20], context[21], context[15], context[16] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    context[24] = 0;
    context[25] = 0;
    context[26] = refalrts::brackets_right( context[24], context[25], context[15], context[16] );
    if( ! context[26] )
      continue;
    refalrts::bracket_pointers(context[26], context[27]);
    // closed e.ExeSuf#1 as range 24
    // closed e.LibSuf#1 as range 20
    // closed e.Params-E#1 as range 13
    context[29] = refalrts::tvar_left( context[28], context[15], context[16] );
    if( ! context[29] )
      continue;
    context[30] = 0;
    context[31] = 0;
    context[32] = refalrts::brackets_left( context[30], context[31], context[15], context[16] );
    if( ! context[32] )
      continue;
    refalrts::bracket_pointers(context[32], context[33]);
    // closed e.CppCompilerLib#1 as range 30
    // closed e.Flags#1 as range 15
    //DEBUG: e.Params-B#1: 11
    //DEBUG: e.ExeSuf#1: 24
    //DEBUG: e.LibSuf#1: 20
    //DEBUG: e.Params-E#1: 13
    //DEBUG: t.CppCompilerExe#1: 28
    //DEBUG: e.CppCompilerLib#1: 30
    //DEBUG: e.Flags#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Config-GetCppCompiler/4 [/7Config/8 e.Params-B#1/11 (/17 # CppCompiler/19 t.CppCompilerExe#1/28 {REMOVED TILE} e.ExeSuf#1/24 )/27 (/22 {REMOVED TILE} )/23 )/18 e.Params-E#1/13 ]/9 # LIB/10 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/32 AsIs: e.CppCompilerLib#1/30 AsIs: )/33 AsIs: e.Flags#1/15 AsIs: (/26 } Tile{ AsIs: e.LibSuf#1/20 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[26], context[1] );
    refalrts::link_brackets( context[32], context[33] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[32], context[26] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[11], context[12], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_GetCppCompiler("Config-GetCppCompiler", 0U, 0U, func_Configm_GetCppCompiler);


static refalrts::FnResult func_Configm_SetCppCompiler(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & Config-SetCppCompiler/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Config-SetCppCompiler/4 [/7Config/8 e.new#1/5 ]/9 s.new#2/10 e.new#3/2 >/1
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
    // </0 & Config-SetCppCompiler/4 [/7Config/8 e.Params-B#1/15 (/21 # CppCompiler/23 t.OldCompilerExe#1/24 t.CppCompilerLib#1/26 e.Flags#1/19 )/22 e.Params-E#1/17 ]/9 # EXE/10 e.CppCompilerExe#1/13 >/1
    context[11] = context[5];
    context[12] = context[6];
    context[13] = context[2];
    context[14] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_EXE], context[10] ) )
      continue;
    // closed e.CppCompilerExe#1 as range 13
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
      context[23] = refalrts::ident_left( identifiers[ident_CppCompiler], context[19], context[20] );
      if( ! context[23] )
        continue;
      // closed e.Params-E#1 as range 17
      context[25] = refalrts::tvar_left( context[24], context[19], context[20] );
      if( ! context[25] )
        continue;
      context[27] = refalrts::tvar_left( context[26], context[19], context[20] );
      if( ! context[27] )
        continue;
      // closed e.Flags#1 as range 19
      //DEBUG: e.CppCompilerExe#1: 13
      //DEBUG: e.Params-B#1: 15
      //DEBUG: e.Params-E#1: 17
      //DEBUG: t.OldCompilerExe#1: 24
      //DEBUG: t.CppCompilerLib#1: 26
      //DEBUG: e.Flags#1: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} t.OldCompilerExe#1/24 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/15 AsIs: (/21 AsIs: # CppCompiler/23 } Tile{ HalfReuse: (/10 AsIs: e.CppCompilerExe#1/13 HalfReuse: )/1 } Tile{ AsIs: t.CppCompilerLib#1/26 AsIs: e.Flags#1/19 AsIs: )/22 AsIs: e.Params-E#1/17 AsIs: ]/9 } Tile{ ]] }
      refalrts::reinit_ident(context[4], identifiers[ident_Success]);
      refalrts::reinit_open_bracket(context[10]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[7], context[9] );
      refalrts::link_brackets( context[21], context[22] );
      refalrts::link_brackets( context[10], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[26], context[9] );
      res = refalrts::splice_evar( res, context[10], context[1] );
      res = refalrts::splice_evar( res, context[4], context[23] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[15], context[16], context[11], context[12] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Config-SetCppCompiler/4 [/7Config/8 e.Params-B#1/11 (/17 # CppCompiler/19 t.CppCompilerExe#1/20 t.OldCompilerLib#1/22 e.Flags#1/15 )/18 e.Params-E#1/13 ]/9 # LIB/10 e.CppCompilerLib#1/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_LIB], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.CppCompilerLib#1 as range 2
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
    context[19] = refalrts::ident_left( identifiers[ident_CppCompiler], context[15], context[16] );
    if( ! context[19] )
      continue;
    // closed e.Params-E#1 as range 13
    context[21] = refalrts::tvar_left( context[20], context[15], context[16] );
    if( ! context[21] )
      continue;
    context[23] = refalrts::tvar_left( context[22], context[15], context[16] );
    if( ! context[23] )
      continue;
    // closed e.Flags#1 as range 15
    //DEBUG: e.CppCompilerLib#1: 2
    //DEBUG: e.Params-B#1: 11
    //DEBUG: e.Params-E#1: 13
    //DEBUG: t.CppCompilerExe#1: 20
    //DEBUG: t.OldCompilerLib#1: 22
    //DEBUG: e.Flags#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} t.OldCompilerLib#1/22 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/11 AsIs: (/17 AsIs: # CppCompiler/19 AsIs: t.CppCompilerExe#1/20 } Tile{ HalfReuse: (/10 AsIs: e.CppCompilerLib#1/2 HalfReuse: )/1 } Tile{ AsIs: e.Flags#1/15 } Tile{ AsIs: )/18 AsIs: e.Params-E#1/13 AsIs: ]/9 } Tile{ ]] }
    refalrts::reinit_ident(context[4], identifiers[ident_Success]);
    refalrts::reinit_open_bracket(context[10]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[7], context[9] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[10], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[18], context[9] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[10], context[1] );
    res = refalrts::splice_evar( res, context[4], context[21] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[11], context[12], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_SetCppCompiler("Config-SetCppCompiler", 0U, 0U, func_Configm_SetCppCompiler);


static refalrts::FnResult func_Configm_SetCppCompilerSuf(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 36 elems
  refalrts::Iter context[36];
  refalrts::zeros( context, 36 );
  // </0 & Config-SetCppCompilerSuf/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Config-SetCppCompilerSuf/4 [/7Config/8 e.new#1/5 ]/9 s.new#2/10 e.new#3/2 >/1
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
    // </0 & Config-SetCppCompilerSuf/4 [/7Config/8 e.Params-B#1/15 (/21 # CppCompiler/23 t.CppCompilerExe#1/32 t.CppCompilerLib#1/34 e.Flags#1/19 (/30 e.OldExeSuf#1/28 )/31 (/26 e.LibSuf#1/24 )/27 )/22 e.Params-E#1/17 ]/9 # EXE/10 e.ExeSuf#1/13 >/1
    context[11] = context[5];
    context[12] = context[6];
    context[13] = context[2];
    context[14] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_EXE], context[10] ) )
      continue;
    // closed e.ExeSuf#1 as range 13
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
      context[23] = refalrts::ident_left( identifiers[ident_CppCompiler], context[19], context[20] );
      if( ! context[23] )
        continue;
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_right( context[24], context[25], context[19], context[20] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      context[28] = 0;
      context[29] = 0;
      context[30] = refalrts::brackets_right( context[28], context[29], context[19], context[20] );
      if( ! context[30] )
        continue;
      refalrts::bracket_pointers(context[30], context[31]);
      // closed e.OldExeSuf#1 as range 28
      // closed e.LibSuf#1 as range 24
      // closed e.Params-E#1 as range 17
      context[33] = refalrts::tvar_left( context[32], context[19], context[20] );
      if( ! context[33] )
        continue;
      context[35] = refalrts::tvar_left( context[34], context[19], context[20] );
      if( ! context[35] )
        continue;
      // closed e.Flags#1 as range 19
      //DEBUG: e.ExeSuf#1: 13
      //DEBUG: e.Params-B#1: 15
      //DEBUG: e.OldExeSuf#1: 28
      //DEBUG: e.LibSuf#1: 24
      //DEBUG: e.Params-E#1: 17
      //DEBUG: t.CppCompilerExe#1: 32
      //DEBUG: t.CppCompilerLib#1: 34
      //DEBUG: e.Flags#1: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} e.OldExeSuf#1/28 {REMOVED TILE} # EXE/10 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/15 AsIs: (/21 AsIs: # CppCompiler/23 AsIs: t.CppCompilerExe#1/32 AsIs: t.CppCompilerLib#1/34 AsIs: e.Flags#1/19 AsIs: (/30 } Tile{ AsIs: e.ExeSuf#1/13 } Tile{ AsIs: )/31 AsIs: (/26 AsIs: e.LibSuf#1/24 AsIs: )/27 AsIs: )/22 AsIs: e.Params-E#1/17 AsIs: ]/9 } Tile{ ]] }
      refalrts::reinit_ident(context[4], identifiers[ident_Success]);
      refalrts::link_brackets( context[7], context[9] );
      refalrts::link_brackets( context[21], context[22] );
      refalrts::link_brackets( context[26], context[27] );
      refalrts::link_brackets( context[30], context[31] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[31], context[9] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[4], context[30] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[15], context[16], context[11], context[12] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Config-SetCppCompilerSuf/4 [/7Config/8 e.Params-B#1/11 (/17 # CppCompiler/19 t.CppCompilerExe#1/28 t.CppCompilerLib#1/30 e.Flags#1/15 (/26 e.ExeSuf#1/24 )/27 (/22 e.OldLibSuf#1/20 )/23 )/18 e.Params-E#1/13 ]/9 # LIB/10 e.LibSuf#1/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_LIB], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.LibSuf#1 as range 2
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
    context[19] = refalrts::ident_left( identifiers[ident_CppCompiler], context[15], context[16] );
    if( ! context[19] )
      continue;
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_right( context[20], context[21], context[15], context[16] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    context[24] = 0;
    context[25] = 0;
    context[26] = refalrts::brackets_right( context[24], context[25], context[15], context[16] );
    if( ! context[26] )
      continue;
    refalrts::bracket_pointers(context[26], context[27]);
    // closed e.ExeSuf#1 as range 24
    // closed e.OldLibSuf#1 as range 20
    // closed e.Params-E#1 as range 13
    context[29] = refalrts::tvar_left( context[28], context[15], context[16] );
    if( ! context[29] )
      continue;
    context[31] = refalrts::tvar_left( context[30], context[15], context[16] );
    if( ! context[31] )
      continue;
    // closed e.Flags#1 as range 15
    //DEBUG: e.LibSuf#1: 2
    //DEBUG: e.Params-B#1: 11
    //DEBUG: e.ExeSuf#1: 24
    //DEBUG: e.OldLibSuf#1: 20
    //DEBUG: e.Params-E#1: 13
    //DEBUG: t.CppCompilerExe#1: 28
    //DEBUG: t.CppCompilerLib#1: 30
    //DEBUG: e.Flags#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} e.OldLibSuf#1/20 {REMOVED TILE} # LIB/10 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/11 AsIs: (/17 AsIs: # CppCompiler/19 AsIs: t.CppCompilerExe#1/28 AsIs: t.CppCompilerLib#1/30 AsIs: e.Flags#1/15 AsIs: (/26 AsIs: e.ExeSuf#1/24 AsIs: )/27 AsIs: (/22 } Tile{ AsIs: e.LibSuf#1/2 } Tile{ AsIs: )/23 AsIs: )/18 AsIs: e.Params-E#1/13 AsIs: ]/9 } Tile{ ]] }
    refalrts::reinit_ident(context[4], identifiers[ident_Success]);
    refalrts::link_brackets( context[7], context[9] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[22], context[23] );
    refalrts::link_brackets( context[26], context[27] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[23], context[9] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[4], context[22] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[11], context[12], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_SetCppCompilerSuf("Config-SetCppCompilerSuf", 0U, 0U, func_Configm_SetCppCompilerSuf);


static refalrts::FnResult func_Configm_SetCompilerFlags(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & Config-SetCompilerFlags/4 [/7Config/8 e.Params-B#1/10 (/16 # CppCompiler/18 t.CppCompiler#1/27 e.Flags#1/14 (/25 e.ExeSuf#1/23 )/26 (/21 e.LibSuf#1/19 )/22 )/17 e.Params-E#1/12 ]/9 e.NewFlags#1/2 >/1
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
    context[18] = refalrts::ident_left( identifiers[ident_CppCompiler], context[14], context[15] );
    if( ! context[18] )
      continue;
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_right( context[19], context[20], context[14], context[15] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = 0;
    context[24] = 0;
    context[25] = refalrts::brackets_right( context[23], context[24], context[14], context[15] );
    if( ! context[25] )
      continue;
    refalrts::bracket_pointers(context[25], context[26]);
    // closed e.ExeSuf#1 as range 23
    // closed e.LibSuf#1 as range 19
    // closed e.Params-E#1 as range 12
    context[28] = refalrts::tvar_left( context[27], context[14], context[15] );
    if( ! context[28] )
      continue;
    // closed e.Flags#1 as range 14
    //DEBUG: e.NewFlags#1: 2
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.ExeSuf#1: 23
    //DEBUG: e.LibSuf#1: 19
    //DEBUG: e.Params-E#1: 12
    //DEBUG: t.CppCompiler#1: 27
    //DEBUG: e.Flags#1: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/10 AsIs: (/16 AsIs: # CppCompiler/18 AsIs: t.CppCompiler#1/27 } Tile{ AsIs: e.Flags#1/14 } Tile{ AsIs: e.NewFlags#1/2 } Tile{ AsIs: (/25 AsIs: e.ExeSuf#1/23 AsIs: )/26 AsIs: (/21 AsIs: e.LibSuf#1/19 AsIs: )/22 AsIs: )/17 AsIs: e.Params-E#1/12 AsIs: ]/9 } Tile{ ]] }
    refalrts::reinit_ident(context[4], identifiers[ident_Success]);
    refalrts::link_brackets( context[7], context[9] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::link_brackets( context[25], context[26] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[25], context[9] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[4], context[28] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_SetCompilerFlags("Config-SetCompilerFlags", 0U, 0U, func_Configm_SetCompilerFlags);


static refalrts::FnResult func_Configm_GetGenMode(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & Config-GetGenMode/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Config-GetGenMode/4 [/7Config/8 e.new#1/5 ]/9 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], functions[efunc_Config], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 5
  do {
    // </0 & Config-GetGenMode/4 [/7Config/8 e.Params-B#1/12 (/18 # Optimize/20 e.Opt-B#1/21 # OptDirect/25 e.Opt-E#1/23 )/19 e.Params-E#1/14 ]/9 >/1
    context[10] = context[5];
    context[11] = context[6];
    context[12] = 0;
    context[13] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[14] = context[10];
      context[15] = context[11];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[14], context[15] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left( identifiers[ident_Optimize], context[16], context[17] );
      if( ! context[20] )
        continue;
      // closed e.Params-E#1 as range 14
      context[21] = 0;
      context[22] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[23] = context[16];
        context[24] = context[17];
        context[25] = refalrts::ident_left( identifiers[ident_OptDirect], context[23], context[24] );
        if( ! context[25] )
          continue;
        // closed e.Opt-E#1 as range 23
        //DEBUG: e.Params-B#1: 12
        //DEBUG: e.Params-E#1: 14
        //DEBUG: e.Opt-B#1: 21
        //DEBUG: e.Opt-E#1: 23

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & Config-GetGenMode/4 [/7Config/8 e.Params-B#1/12 (/18 # Optimize/20 e.Opt-B#1/21 # OptDirect/25 e.Opt-E#1/23 )/19 e.Params-E#1/14 ]/9 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: # OnlyDirect/1 ]] }
        refalrts::reinit_ident(context[1], identifiers[ident_OnlyDirect]);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[21], context[22], context[16], context[17] ) );
    } while ( refalrts::open_evar_advance( context[12], context[13], context[10], context[11] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Config-GetGenMode/4 [/7Config/8 e.Params#1/5 ]/9 >/1
  // closed e.Params#1 as range 5
  //DEBUG: e.Params#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Config-GetGenMode/4 [/7Config/8 e.Params#1/5 ]/9 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # OnlyInterpret/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_OnlyInterpret]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Configm_GetGenMode("Config-GetGenMode", 0U, 0U, func_Configm_GetGenMode);


static refalrts::FnResult func_Configm_GetOptPattern(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & Config-GetOptPattern/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Config-GetOptPattern/4 [/7Config/8 e.new#1/5 ]/9 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], functions[efunc_Config], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 5
  do {
    // </0 & Config-GetOptPattern/4 [/7Config/8 e.Params-B#1/12 (/18 # Optimize/20 e.Opt-B#1/21 # OptPatternExt/25 e.Opt-E#1/23 )/19 e.Params-E#1/14 ]/9 >/1
    context[10] = context[5];
    context[11] = context[6];
    context[12] = 0;
    context[13] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[14] = context[10];
      context[15] = context[11];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[14], context[15] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left( identifiers[ident_Optimize], context[16], context[17] );
      if( ! context[20] )
        continue;
      // closed e.Params-E#1 as range 14
      context[21] = 0;
      context[22] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[23] = context[16];
        context[24] = context[17];
        context[25] = refalrts::ident_left( identifiers[ident_OptPatternExt], context[23], context[24] );
        if( ! context[25] )
          continue;
        // closed e.Opt-E#1 as range 23
        //DEBUG: e.Params-B#1: 12
        //DEBUG: e.Params-E#1: 14
        //DEBUG: e.Opt-B#1: 21
        //DEBUG: e.Opt-E#1: 23

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & Config-GetOptPattern/4 [/7Config/8 e.Params-B#1/12 (/18 # Optimize/20 e.Opt-B#1/21 # OptPatternExt/25 e.Opt-E#1/23 )/19 e.Params-E#1/14 ]/9 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: # Conjoint/1 ]] }
        refalrts::reinit_ident(context[1], identifiers[ident_Conjoint]);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[21], context[22], context[16], context[17] ) );
    } while ( refalrts::open_evar_advance( context[12], context[13], context[10], context[11] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Config-GetOptPattern/4 [/7Config/8 e.Params-B#1/12 (/18 # Optimize/20 e.Opt-B#1/21 # OptPattern/25 e.Opt-E#1/23 )/19 e.Params-E#1/14 ]/9 >/1
    context[10] = context[5];
    context[11] = context[6];
    context[12] = 0;
    context[13] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[14] = context[10];
      context[15] = context[11];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[14], context[15] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left( identifiers[ident_Optimize], context[16], context[17] );
      if( ! context[20] )
        continue;
      // closed e.Params-E#1 as range 14
      context[21] = 0;
      context[22] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[23] = context[16];
        context[24] = context[17];
        context[25] = refalrts::ident_left( identifiers[ident_OptPattern], context[23], context[24] );
        if( ! context[25] )
          continue;
        // closed e.Opt-E#1 as range 23
        //DEBUG: e.Params-B#1: 12
        //DEBUG: e.Params-E#1: 14
        //DEBUG: e.Opt-B#1: 21
        //DEBUG: e.Opt-E#1: 23

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & Config-GetOptPattern/4 [/7Config/8 e.Params-B#1/12 (/18 # Optimize/20 e.Opt-B#1/21 # OptPattern/25 e.Opt-E#1/23 )/19 e.Params-E#1/14 ]/9 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: # Conjoint/1 ]] }
        refalrts::reinit_ident(context[1], identifiers[ident_Conjoint]);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[21], context[22], context[16], context[17] ) );
    } while ( refalrts::open_evar_advance( context[12], context[13], context[10], context[11] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Config-GetOptPattern/4 [/7Config/8 e.Params#1/5 ]/9 >/1
  // closed e.Params#1 as range 5
  //DEBUG: e.Params#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Config-GetOptPattern/4 [/7Config/8 e.Params#1/5 ]/9 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # Disjoint/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_Disjoint]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Configm_GetOptPattern("Config-GetOptPattern", 0U, 0U, func_Configm_GetOptPattern);


static refalrts::FnResult func_Configm_GetOptResult(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & Config-GetOptResult/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Config-GetOptResult/4 [/7Config/8 e.new#1/5 ]/9 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], functions[efunc_Config], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 5
  do {
    // </0 & Config-GetOptResult/4 [/7Config/8 e.Params-B#1/12 (/18 # Optimize/20 e.Opt-B#1/21 # OptResult/25 e.Opt-E#1/23 )/19 e.Params-E#1/14 ]/9 >/1
    context[10] = context[5];
    context[11] = context[6];
    context[12] = 0;
    context[13] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[14] = context[10];
      context[15] = context[11];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[14], context[15] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left( identifiers[ident_Optimize], context[16], context[17] );
      if( ! context[20] )
        continue;
      // closed e.Params-E#1 as range 14
      context[21] = 0;
      context[22] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[23] = context[16];
        context[24] = context[17];
        context[25] = refalrts::ident_left( identifiers[ident_OptResult], context[23], context[24] );
        if( ! context[25] )
          continue;
        // closed e.Opt-E#1 as range 23
        //DEBUG: e.Params-B#1: 12
        //DEBUG: e.Params-E#1: 14
        //DEBUG: e.Opt-B#1: 21
        //DEBUG: e.Opt-E#1: 23

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & Config-GetOptResult/4 [/7Config/8 e.Params-B#1/12 (/18 # Optimize/20 e.Opt-B#1/21 # OptResult/25 e.Opt-E#1/23 )/19 e.Params-E#1/14 ]/9 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: # OptResult/1 ]] }
        refalrts::reinit_ident(context[1], identifiers[ident_OptResult]);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[21], context[22], context[16], context[17] ) );
    } while ( refalrts::open_evar_advance( context[12], context[13], context[10], context[11] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Config-GetOptResult/4 [/7Config/8 e.Params#1/5 ]/9 >/1
  // closed e.Params#1 as range 5
  //DEBUG: e.Params#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Config-GetOptResult/4 [/7Config/8 e.Params#1/5 ]/9 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # NoOpt/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_NoOpt]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Configm_GetOptResult("Config-GetOptResult", 0U, 0U, func_Configm_GetOptResult);


static refalrts::FnResult func_Configm_GetConditionsMode(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & Config-GetConditionsMode/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Config-GetConditionsMode/4 [/7Config/8 e.new#1/5 ]/9 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], functions[efunc_Config], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 5
  do {
    // </0 & Config-GetConditionsMode/4 [/7Config/8 e.Params-B#1/12 (/18 # Optimize/20 e.Opt-B#1/21 # OptConditions/25 e.Opt-E#1/23 )/19 e.Params-E#1/14 ]/9 >/1
    context[10] = context[5];
    context[11] = context[6];
    context[12] = 0;
    context[13] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[14] = context[10];
      context[15] = context[11];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[14], context[15] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left( identifiers[ident_Optimize], context[16], context[17] );
      if( ! context[20] )
        continue;
      // closed e.Params-E#1 as range 14
      context[21] = 0;
      context[22] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[23] = context[16];
        context[24] = context[17];
        context[25] = refalrts::ident_left( identifiers[ident_OptConditions], context[23], context[24] );
        if( ! context[25] )
          continue;
        // closed e.Opt-E#1 as range 23
        //DEBUG: e.Params-B#1: 12
        //DEBUG: e.Params-E#1: 14
        //DEBUG: e.Opt-B#1: 21
        //DEBUG: e.Opt-E#1: 23

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & Config-GetConditionsMode/4 [/7Config/8 e.Params-B#1/12 (/18 # Optimize/20 e.Opt-B#1/21 # OptConditions/25 e.Opt-E#1/23 )/19 e.Params-E#1/14 ]/9 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: # Conditions-Native/1 ]] }
        refalrts::reinit_ident(context[1], identifiers[ident_Conditionsm_Native]);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[21], context[22], context[16], context[17] ) );
    } while ( refalrts::open_evar_advance( context[12], context[13], context[10], context[11] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Config-GetConditionsMode/4 [/7Config/8 e.Params#1/5 ]/9 >/1
  // closed e.Params#1 as range 5
  //DEBUG: e.Params#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Config-GetConditionsMode/4 [/7Config/8 e.Params#1/5 ]/9 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # Conditions-Transform/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_Conditionsm_Transform]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Configm_GetConditionsMode("Config-GetConditionsMode", 0U, 0U, func_Configm_GetConditionsMode);


static refalrts::FnResult func_Configm_GetOptTree(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & Config-GetOptTree/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Config-GetOptTree/4 [/7Config/8 e.new#1/5 ]/9 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], functions[efunc_Config], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 5
  do {
    // </0 & Config-GetOptTree/4 [/7Config/8 e.Params-B#1/12 (/18 # Optimize/20 e.Opt-B#1/21 # OptTree/25 e.Opt-E#1/23 )/19 e.Params-E#1/14 ]/9 >/1
    context[10] = context[5];
    context[11] = context[6];
    context[12] = 0;
    context[13] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[14] = context[10];
      context[15] = context[11];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[14], context[15] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left( identifiers[ident_Optimize], context[16], context[17] );
      if( ! context[20] )
        continue;
      // closed e.Params-E#1 as range 14
      context[21] = 0;
      context[22] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[23] = context[16];
        context[24] = context[17];
        context[25] = refalrts::ident_left( identifiers[ident_OptTree], context[23], context[24] );
        if( ! context[25] )
          continue;
        // closed e.Opt-E#1 as range 23
        //DEBUG: e.Params-B#1: 12
        //DEBUG: e.Params-E#1: 14
        //DEBUG: e.Opt-B#1: 21
        //DEBUG: e.Opt-E#1: 23

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & Config-GetOptTree/4 [/7Config/8 e.Params-B#1/12 (/18 # Optimize/20 e.Opt-B#1/21 # OptTree/25 e.Opt-E#1/23 )/19 e.Params-E#1/14 ]/9 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: # OptTree/1 ]] }
        refalrts::reinit_ident(context[1], identifiers[ident_OptTree]);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[21], context[22], context[16], context[17] ) );
    } while ( refalrts::open_evar_advance( context[12], context[13], context[10], context[11] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Config-GetOptTree/4 [/7Config/8 e.Params#1/5 ]/9 >/1
  // closed e.Params#1 as range 5
  //DEBUG: e.Params#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Config-GetOptTree/4 [/7Config/8 e.Params#1/5 ]/9 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # NoOpt/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_NoOpt]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Configm_GetOptTree("Config-GetOptTree", 0U, 0U, func_Configm_GetOptTree);


static refalrts::FnResult func_Configm_GetOptDrive(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & Config-GetOptDrive/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Config-GetOptDrive/4 [/7Config/8 e.new#1/5 ]/9 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], functions[efunc_Config], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 5
  do {
    // </0 & Config-GetOptDrive/4 [/7Config/8 e.Params-B#1/12 (/18 # Optimize/20 e.Opt-B#1/21 # OptDrive/25 e.Opt-E#1/23 )/19 e.Params-E#1/14 ]/9 >/1
    context[10] = context[5];
    context[11] = context[6];
    context[12] = 0;
    context[13] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[14] = context[10];
      context[15] = context[11];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[14], context[15] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left( identifiers[ident_Optimize], context[16], context[17] );
      if( ! context[20] )
        continue;
      // closed e.Params-E#1 as range 14
      context[21] = 0;
      context[22] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[23] = context[16];
        context[24] = context[17];
        context[25] = refalrts::ident_left( identifiers[ident_OptDrive], context[23], context[24] );
        if( ! context[25] )
          continue;
        // closed e.Opt-E#1 as range 23
        //DEBUG: e.Params-B#1: 12
        //DEBUG: e.Params-E#1: 14
        //DEBUG: e.Opt-B#1: 21
        //DEBUG: e.Opt-E#1: 23

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & Config-GetOptDrive/4 [/7Config/8 e.Params-B#1/12 (/18 # Optimize/20 e.Opt-B#1/21 # OptDrive/25 e.Opt-E#1/23 )/19 e.Params-E#1/14 ]/9 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: # OptDrive/1 ]] }
        refalrts::reinit_ident(context[1], identifiers[ident_OptDrive]);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[21], context[22], context[16], context[17] ) );
    } while ( refalrts::open_evar_advance( context[12], context[13], context[10], context[11] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Config-GetOptDrive/4 [/7Config/8 e.Params-B#1/12 (/18 # Optimize/20 e.Opt-B#1/21 # OptInline/25 e.Opt-E#1/23 )/19 e.Params-E#1/14 ]/9 >/1
    context[10] = context[5];
    context[11] = context[6];
    context[12] = 0;
    context[13] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[14] = context[10];
      context[15] = context[11];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[14], context[15] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left( identifiers[ident_Optimize], context[16], context[17] );
      if( ! context[20] )
        continue;
      // closed e.Params-E#1 as range 14
      context[21] = 0;
      context[22] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[23] = context[16];
        context[24] = context[17];
        context[25] = refalrts::ident_left( identifiers[ident_OptInline], context[23], context[24] );
        if( ! context[25] )
          continue;
        // closed e.Opt-E#1 as range 23
        //DEBUG: e.Params-B#1: 12
        //DEBUG: e.Params-E#1: 14
        //DEBUG: e.Opt-B#1: 21
        //DEBUG: e.Opt-E#1: 23

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & Config-GetOptDrive/4 [/7Config/8 e.Params-B#1/12 (/18 # Optimize/20 e.Opt-B#1/21 # OptInline/25 e.Opt-E#1/23 )/19 e.Params-E#1/14 ]/9 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: # OptInline/1 ]] }
        refalrts::reinit_ident(context[1], identifiers[ident_OptInline]);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[21], context[22], context[16], context[17] ) );
    } while ( refalrts::open_evar_advance( context[12], context[13], context[10], context[11] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Config-GetOptDrive/4 [/7Config/8 e.Params#1/5 ]/9 >/1
  // closed e.Params#1 as range 5
  //DEBUG: e.Params#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Config-GetOptDrive/4 [/7Config/8 e.Params#1/5 ]/9 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # NoOpt/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_NoOpt]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Configm_GetOptDrive("Config-GetOptDrive", 0U, 0U, func_Configm_GetOptDrive);


static refalrts::FnResult func_Configm_GetOptAutoMarkup(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & Config-GetOptAutoMarkup/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Config-GetOptAutoMarkup/4 [/7Config/8 e.new#1/5 ]/9 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], functions[efunc_Config], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 5
  do {
    // </0 & Config-GetOptAutoMarkup/4 [/7Config/8 e.Params-B#1/12 (/18 # Optimize/20 e.Opt-B#1/21 # OptAutoMarkup/25 e.Opt-E#1/23 )/19 e.Params-E#1/14 ]/9 >/1
    context[10] = context[5];
    context[11] = context[6];
    context[12] = 0;
    context[13] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[14] = context[10];
      context[15] = context[11];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[14], context[15] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left( identifiers[ident_Optimize], context[16], context[17] );
      if( ! context[20] )
        continue;
      // closed e.Params-E#1 as range 14
      context[21] = 0;
      context[22] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[23] = context[16];
        context[24] = context[17];
        context[25] = refalrts::ident_left( identifiers[ident_OptAutoMarkup], context[23], context[24] );
        if( ! context[25] )
          continue;
        // closed e.Opt-E#1 as range 23
        //DEBUG: e.Params-B#1: 12
        //DEBUG: e.Params-E#1: 14
        //DEBUG: e.Opt-B#1: 21
        //DEBUG: e.Opt-E#1: 23

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & Config-GetOptAutoMarkup/4 [/7Config/8 e.Params-B#1/12 (/18 # Optimize/20 e.Opt-B#1/21 # OptAutoMarkup/25 e.Opt-E#1/23 )/19 e.Params-E#1/14 ]/9 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: # OptAutoMarkup/1 ]] }
        refalrts::reinit_ident(context[1], identifiers[ident_OptAutoMarkup]);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[21], context[22], context[16], context[17] ) );
    } while ( refalrts::open_evar_advance( context[12], context[13], context[10], context[11] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Config-GetOptAutoMarkup/4 [/7Config/8 e.Params#1/5 ]/9 >/1
  // closed e.Params#1 as range 5
  //DEBUG: e.Params#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Config-GetOptAutoMarkup/4 [/7Config/8 e.Params#1/5 ]/9 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # NoOpt/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_NoOpt]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Configm_GetOptAutoMarkup("Config-GetOptAutoMarkup", 0U, 0U, func_Configm_GetOptAutoMarkup);


static refalrts::FnResult func_Configm_GetOptIntrinsic(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & Config-GetOptIntrinsic/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Config-GetOptIntrinsic/4 [/7Config/8 e.new#1/5 ]/9 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], functions[efunc_Config], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 5
  do {
    // </0 & Config-GetOptIntrinsic/4 [/7Config/8 e.Params-B#1/12 (/18 # Optimize/20 e.Opt-B#1/21 # OptIntrinsic/25 e.Opt-E#1/23 )/19 e.Params-E#1/14 ]/9 >/1
    context[10] = context[5];
    context[11] = context[6];
    context[12] = 0;
    context[13] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[14] = context[10];
      context[15] = context[11];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[14], context[15] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left( identifiers[ident_Optimize], context[16], context[17] );
      if( ! context[20] )
        continue;
      // closed e.Params-E#1 as range 14
      context[21] = 0;
      context[22] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[23] = context[16];
        context[24] = context[17];
        context[25] = refalrts::ident_left( identifiers[ident_OptIntrinsic], context[23], context[24] );
        if( ! context[25] )
          continue;
        // closed e.Opt-E#1 as range 23
        //DEBUG: e.Params-B#1: 12
        //DEBUG: e.Params-E#1: 14
        //DEBUG: e.Opt-B#1: 21
        //DEBUG: e.Opt-E#1: 23

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & Config-GetOptIntrinsic/4 [/7Config/8 e.Params-B#1/12 (/18 # Optimize/20 e.Opt-B#1/21 # OptIntrinsic/25 e.Opt-E#1/23 )/19 e.Params-E#1/14 ]/9 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: # OptIntrinsic/1 ]] }
        refalrts::reinit_ident(context[1], identifiers[ident_OptIntrinsic]);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[21], context[22], context[16], context[17] ) );
    } while ( refalrts::open_evar_advance( context[12], context[13], context[10], context[11] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Config-GetOptIntrinsic/4 [/7Config/8 e.Params#1/5 ]/9 >/1
  // closed e.Params#1 as range 5
  //DEBUG: e.Params#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Config-GetOptIntrinsic/4 [/7Config/8 e.Params#1/5 ]/9 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # NoOpt/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_NoOpt]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Configm_GetOptIntrinsic("Config-GetOptIntrinsic", 0U, 0U, func_Configm_GetOptIntrinsic);


static refalrts::FnResult func_Configm_GetOptSpec(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & Config-GetOptSpec/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Config-GetOptSpec/4 [/7Config/8 e.new#1/5 ]/9 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], functions[efunc_Config], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 5
  do {
    // </0 & Config-GetOptSpec/4 [/7Config/8 e.Params-B#1/12 (/18 # Optimize/20 e.Opt-B#1/21 # OptSpec/25 e.Opt-E#1/23 )/19 e.Params-E#1/14 ]/9 >/1
    context[10] = context[5];
    context[11] = context[6];
    context[12] = 0;
    context[13] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[14] = context[10];
      context[15] = context[11];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[14], context[15] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left( identifiers[ident_Optimize], context[16], context[17] );
      if( ! context[20] )
        continue;
      // closed e.Params-E#1 as range 14
      context[21] = 0;
      context[22] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[23] = context[16];
        context[24] = context[17];
        context[25] = refalrts::ident_left( identifiers[ident_OptSpec], context[23], context[24] );
        if( ! context[25] )
          continue;
        // closed e.Opt-E#1 as range 23
        //DEBUG: e.Params-B#1: 12
        //DEBUG: e.Params-E#1: 14
        //DEBUG: e.Opt-B#1: 21
        //DEBUG: e.Opt-E#1: 23

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & Config-GetOptSpec/4 [/7Config/8 e.Params-B#1/12 (/18 # Optimize/20 e.Opt-B#1/21 # OptSpec/25 e.Opt-E#1/23 )/19 e.Params-E#1/14 ]/9 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: # OptSpec/1 ]] }
        refalrts::reinit_ident(context[1], identifiers[ident_OptSpec]);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[21], context[22], context[16], context[17] ) );
    } while ( refalrts::open_evar_advance( context[12], context[13], context[10], context[11] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Config-GetOptSpec/4 [/7Config/8 e.Params#1/5 ]/9 >/1
  // closed e.Params#1 as range 5
  //DEBUG: e.Params#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Config-GetOptSpec/4 [/7Config/8 e.Params#1/5 ]/9 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # NoOpt/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_NoOpt]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Configm_GetOptSpec("Config-GetOptSpec", 0U, 0U, func_Configm_GetOptSpec);


static refalrts::FnResult func_Configm_GetOptGlobal(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & Config-GetOptGlobal/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Config-GetOptGlobal/4 [/7Config/8 e.new#1/5 ]/9 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], functions[efunc_Config], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 5
  do {
    // </0 & Config-GetOptGlobal/4 [/7Config/8 e.Params-B#1/12 (/18 # Optimize/20 e.Opt-B#1/21 # OptGlobal/25 e.Opt-E#1/23 )/19 e.Params-E#1/14 ]/9 >/1
    context[10] = context[5];
    context[11] = context[6];
    context[12] = 0;
    context[13] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[14] = context[10];
      context[15] = context[11];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[14], context[15] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left( identifiers[ident_Optimize], context[16], context[17] );
      if( ! context[20] )
        continue;
      // closed e.Params-E#1 as range 14
      context[21] = 0;
      context[22] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[23] = context[16];
        context[24] = context[17];
        context[25] = refalrts::ident_left( identifiers[ident_OptGlobal], context[23], context[24] );
        if( ! context[25] )
          continue;
        // closed e.Opt-E#1 as range 23
        //DEBUG: e.Params-B#1: 12
        //DEBUG: e.Params-E#1: 14
        //DEBUG: e.Opt-B#1: 21
        //DEBUG: e.Opt-E#1: 23

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & Config-GetOptGlobal/4 [/7Config/8 e.Params-B#1/12 (/18 # Optimize/20 e.Opt-B#1/21 # OptGlobal/25 e.Opt-E#1/23 )/19 e.Params-E#1/14 ]/9 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: # OptGlobal/1 ]] }
        refalrts::reinit_ident(context[1], identifiers[ident_OptGlobal]);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[21], context[22], context[16], context[17] ) );
    } while ( refalrts::open_evar_advance( context[12], context[13], context[10], context[11] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Config-GetOptGlobal/4 [/7Config/8 e.Params#1/5 ]/9 >/1
  // closed e.Params#1 as range 5
  //DEBUG: e.Params#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Config-GetOptGlobal/4 [/7Config/8 e.Params#1/5 ]/9 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # NoOpt/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_NoOpt]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Configm_GetOptGlobal("Config-GetOptGlobal", 0U, 0U, func_Configm_GetOptGlobal);


static refalrts::FnResult func_gen_Configm_SetOptFlags_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & Config-SetOptFlags:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Config-SetOptFlags:1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 (/15 e.new#3/13 )/16 s.new#4/17 e.new#5/2 s.new#6/18 >/1
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
  if( ! refalrts::svar_right( context[18], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#5 as range 2
  do {
    // </0 & Config-SetOptFlags:1/4 (/7 e.Params-B#1/19 )/8 (/11 e.OldFlags#1/21 )/12 (/15 e.Params-E#1/23 )/16 # Success/17 e.NewFlags#2/25 s.FnChange#2/18 >/1
    context[19] = context[5];
    context[20] = context[6];
    context[21] = context[9];
    context[22] = context[10];
    context[23] = context[13];
    context[24] = context[14];
    context[25] = context[2];
    context[26] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Success], context[17] ) )
      continue;
    // closed e.Params-B#1 as range 19
    // closed e.OldFlags#1 as range 21
    // closed e.Params-E#1 as range 23
    // closed e.NewFlags#2 as range 25
    //DEBUG: s.FnChange#2: 18
    //DEBUG: e.Params-B#1: 19
    //DEBUG: e.OldFlags#1: 21
    //DEBUG: e.Params-E#1: 23
    //DEBUG: e.NewFlags#2: 25

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: # Success/0 HalfReuse: [/4 HalfReuse: & Config/7 AsIs: e.Params-B#1/19 HalfReuse: (/8 HalfReuse: # Optimize/11 } </27 Tile{ AsIs: s.FnChange#2/18 HalfReuse: (/1 } Tile{ AsIs: e.OldFlags#1/21 } Tile{ HalfReuse: )/17 } Tile{ AsIs: e.NewFlags#2/25 } Tile{ HalfReuse: >/12 HalfReuse: )/15 AsIs: e.Params-E#1/23 HalfReuse: ]/16 } Tile{ ]] }
    refalrts::alloc_open_call(vm, context[27]);
    refalrts::reinit_ident(context[0], identifiers[ident_Success]);
    refalrts::reinit_open_adt(context[4]);
    refalrts::reinit_name(context[7], functions[efunc_Config]);
    refalrts::reinit_open_bracket(context[8]);
    refalrts::reinit_ident(context[11], identifiers[ident_Optimize]);
    refalrts::reinit_open_bracket(context[1]);
    refalrts::reinit_close_bracket(context[17]);
    refalrts::reinit_close_call(context[12]);
    refalrts::reinit_close_bracket(context[15]);
    refalrts::reinit_close_adt(context[16]);
    refalrts::link_brackets( context[4], context[16] );
    refalrts::link_brackets( context[8], context[15] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[27] );
    refalrts::link_brackets( context[1], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[16] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[18], context[1] );
    res = refalrts::splice_evar( res, context[27], context[27] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Config-SetOptFlags:1/4 (/7 e.Params-B#1/5 )/8 (/11 e.OldFlags#1/9 )/12 (/15 e.Params-E#1/13 )/16 # Fails/17 e.NotParsed#2/2 s.FnChange#2/18 >/1
  if( ! refalrts::ident_term( identifiers[ident_Fails], context[17] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Params-B#1 as range 5
  // closed e.OldFlags#1 as range 9
  // closed e.Params-E#1 as range 13
  // closed e.NotParsed#2 as range 2
  //DEBUG: s.FnChange#2: 18
  //DEBUG: e.Params-B#1: 5
  //DEBUG: e.OldFlags#1: 9
  //DEBUG: e.Params-E#1: 13
  //DEBUG: e.NotParsed#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/7 e.Params-B#1/5 )/8 (/11 e.OldFlags#1/9 )/12 (/15 e.Params-E#1/13 )/16 # Fails/17 {REMOVED TILE} s.FnChange#2/18 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: # Fails/0 HalfReuse: # BadValue-Opt/4 } Tile{ AsIs: e.NotParsed#2/2 } Tile{ ]] }
  refalrts::reinit_ident(context[0], identifiers[ident_Fails]);
  refalrts::reinit_ident(context[4], identifiers[ident_BadValuem_Opt]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Configm_SetOptFlags_B1("Config-SetOptFlags:1", COOKIE1_, COOKIE2_, func_gen_Configm_SetOptFlags_B1);


static refalrts::FnResult func_Configm_SetOptFlags(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & Config-SetOptFlags/4 [/7Config/8 e.Params-B#1/10 (/16 # Optimize/18 e.OldFlags#1/14 )/17 e.Params-E#1/12 ]/9 e.NewFlags#1/2 >/1
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
    context[18] = refalrts::ident_left( identifiers[ident_Optimize], context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.OldFlags#1 as range 14
    // closed e.Params-E#1 as range 12
    //DEBUG: e.NewFlags#1: 2
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.OldFlags#1: 14
    //DEBUG: e.Params-E#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & Config-SetOptFlags:1/7 HalfReuse: (/8 AsIs: e.Params-B#1/10 HalfReuse: )/16 HalfReuse: (/18 AsIs: e.OldFlags#1/14 AsIs: )/17 } (/19 Tile{ AsIs: e.Params-E#1/12 } )/20 Tile{ AsIs: </0 } Tile{ HalfReuse: & ParseOptFlags/9 AsIs: e.NewFlags#1/2 AsIs: >/1 } >/21 Tile{ ]] }
    refalrts::alloc_open_bracket(vm, context[19]);
    refalrts::alloc_close_bracket(vm, context[20]);
    refalrts::alloc_close_call(vm, context[21]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[7], functions[efunc_gen_Configm_SetOptFlags_B1]);
    refalrts::reinit_open_bracket(context[8]);
    refalrts::reinit_close_bracket(context[16]);
    refalrts::reinit_open_bracket(context[18]);
    refalrts::reinit_name(context[9], functions[efunc_ParseOptFlags]);
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[4] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[18], context[17] );
    refalrts::link_brackets( context[8], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[21], context[21] );
    res = refalrts::splice_evar( res, context[9], context[1] );
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[4], context[17] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_SetOptFlags("Config-SetOptFlags", 0U, 0U, func_Configm_SetOptFlags);


static refalrts::FnResult func_ParseOptFlags(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & ParseOptFlags/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & ParseOptFlags/4 e.new#1/5 s.new#2/7 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_right( context[7], context[5], context[6] ) )
      continue;
    // closed e.new#1 as range 5
    do {
      // </0 & ParseOptFlags/4 e.Flags#1/8 '+'/7 >/1
      context[8] = context[5];
      context[9] = context[6];
      if( ! refalrts::char_term( '+', context[7] ) )
        continue;
      // closed e.Flags#1 as range 8
      //DEBUG: e.Flags#1: 8

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </10 & ParseOptLetters/11 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: e.Flags#1/8 HalfReuse: >/7 HalfReuse: & Opt-Add/1 ]] }
      refalrts::alloc_open_call(vm, context[10]);
      refalrts::alloc_name(vm, context[11], functions[efunc_ParseOptLetters]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_close_bracket(context[4]);
      refalrts::reinit_close_call(context[7]);
      refalrts::reinit_name(context[1], functions[efunc_Optm_Add]);
      refalrts::push_stack( vm, context[7] );
      refalrts::push_stack( vm, context[10] );
      refalrts::link_brackets( context[0], context[4] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[0];
      res = refalrts::splice_evar( res, context[10], context[11] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseOptFlags/4 e.Flags#1/8 '-'/7 >/1
      context[8] = context[5];
      context[9] = context[6];
      if( ! refalrts::char_term( '-', context[7] ) )
        continue;
      // closed e.Flags#1 as range 8
      //DEBUG: e.Flags#1: 8

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </10 & ParseOptLetters/11 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: e.Flags#1/8 HalfReuse: >/7 HalfReuse: & Opt-Remove/1 ]] }
      refalrts::alloc_open_call(vm, context[10]);
      refalrts::alloc_name(vm, context[11], functions[efunc_ParseOptLetters]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_close_bracket(context[4]);
      refalrts::reinit_close_call(context[7]);
      refalrts::reinit_name(context[1], functions[efunc_Optm_Remove]);
      refalrts::push_stack( vm, context[7] );
      refalrts::push_stack( vm, context[10] );
      refalrts::link_brackets( context[0], context[4] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[0];
      res = refalrts::splice_evar( res, context[10], context[11] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ParseOptFlags/4 e.Flags#1/8 '='/7 >/1
    context[8] = context[5];
    context[9] = context[6];
    if( ! refalrts::char_term( '=', context[7] ) )
      continue;
    // closed e.Flags#1 as range 8
    //DEBUG: e.Flags#1: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </10 & ParseOptLetters/11 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: e.Flags#1/8 HalfReuse: >/7 HalfReuse: & Opt-Assign/1 ]] }
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_ParseOptLetters]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_close_bracket(context[4]);
    refalrts::reinit_close_call(context[7]);
    refalrts::reinit_name(context[1], functions[efunc_Optm_Assign]);
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[10] );
    refalrts::link_brackets( context[0], context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseOptFlags/4 e.Flags#1/2 >/1
  // closed e.Flags#1 as range 2
  //DEBUG: e.Flags#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseOptLetters/4 } (/5 )/6 Tile{ AsIs: e.Flags#1/2 } >/7 Tile{ HalfReuse: & Opt-Add/1 ]] }
  refalrts::alloc_open_bracket(vm, context[5]);
  refalrts::alloc_close_bracket(vm, context[6]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_ParseOptLetters]);
  refalrts::reinit_name(context[1], functions[efunc_Optm_Add]);
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[5], context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseOptFlags("ParseOptFlags", COOKIE1_, COOKIE2_, func_ParseOptFlags);


static refalrts::FnResult func_ParseOptLetters(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & ParseOptLetters/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseOptLetters/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & ParseOptLetters/4 (/7 e.Scanned#1/9 )/8 s.Flag#1/13 e.Flags#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.Scanned#1 as range 9
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    // closed e.Flags#1 as range 11
    //DEBUG: e.Scanned#1: 9
    //DEBUG: s.Flag#1: 13
    //DEBUG: e.Flags#1: 11
    //9: e.Scanned#1
    //11: e.Flags#1
    //13: s.Flag#1
    //19: s.Flag#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[14]);
    refalrts::alloc_name(vm, context[16], functions[efunc_gen_ParseOptLetters_S1C1]);
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[18], functions[efunc_ValidFlag]);
    refalrts::copy_stvar(vm, context[19], context[13]);
    refalrts::alloc_close_call(vm, context[20]);
    refalrts::alloc_close_call(vm, context[15]);
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[14] );
    res = refalrts::splice_elem( res, context[15] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[17] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_stvar( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </14 & ParseOptLetters$1?1/18 # True/19 e.FlagNames#2/16 >/15
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::call_left( context[16], context[17], context[14], context[15] );
      context[19] = refalrts::ident_left( identifiers[ident_True], context[16], context[17] );
      if( ! context[19] )
        continue;
      // closed e.FlagNames#2 as range 16
      //DEBUG: e.Scanned#1: 9
      //DEBUG: s.Flag#1: 13
      //DEBUG: e.Flags#1: 11
      //DEBUG: e.FlagNames#2: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Flag#1/13 {REMOVED TILE} </14 & ParseOptLetters$1?1/18 # True/19 {REMOVED TILE} >/15 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ParseOptLetters/4 AsIs: (/7 } Tile{ AsIs: e.Scanned#1/9 } Tile{ AsIs: e.FlagNames#2/16 } Tile{ AsIs: )/8 } Tile{ AsIs: e.Flags#1/11 } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[8], context[8] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[14], context[15]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ParseOptLetters/4 (/7 e.Scanned#1/9 )/8 >/1
    context[9] = context[5];
    context[10] = context[6];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Scanned#1 as range 9
    //DEBUG: e.Scanned#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: # Success/0 HalfReuse: </4 HalfReuse: & Flags-Unique/7 AsIs: e.Scanned#1/9 HalfReuse: >/8 } Tile{ ]] }
    refalrts::reinit_ident(context[0], identifiers[ident_Success]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[7], functions[efunc_Flagsm_Unique]);
    refalrts::reinit_close_call(context[8]);
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, context[8], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseOptLetters/4 (/7 e.Scanned#1/5 )/8 e.Unparsed#1/2 >/1
  // closed e.Scanned#1 as range 5
  // closed e.Unparsed#1 as range 2
  //DEBUG: e.Scanned#1: 5
  //DEBUG: e.Unparsed#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} & ParseOptLetters/4 (/7 e.Scanned#1/5 )/8 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: # Fails/0 } Tile{ AsIs: e.Unparsed#1/2 } Tile{ ]] }
  refalrts::reinit_ident(context[0], identifiers[ident_Fails]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseOptLetters("ParseOptLetters", COOKIE1_, COOKIE2_, func_ParseOptLetters);


static refalrts::FnResult func_ValidFlag(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & ValidFlag/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ValidFlag/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ValidFlag/4 'Q'/5 >/1
    if( ! refalrts::char_term( 'Q', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & ValidFlag/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/5 HalfReuse: # OptPatternExt/1 ]] }
    refalrts::reinit_ident(context[5], identifiers[ident_True]);
    refalrts::reinit_ident(context[1], identifiers[ident_OptPatternExt]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ValidFlag/4 'P'/5 >/1
    if( ! refalrts::char_term( 'P', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & ValidFlag/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/5 HalfReuse: # OptPattern/1 ]] }
    refalrts::reinit_ident(context[5], identifiers[ident_True]);
    refalrts::reinit_ident(context[1], identifiers[ident_OptPattern]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ValidFlag/4 'R'/5 >/1
    if( ! refalrts::char_term( 'R', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & ValidFlag/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/5 HalfReuse: # OptResult/1 ]] }
    refalrts::reinit_ident(context[5], identifiers[ident_True]);
    refalrts::reinit_ident(context[1], identifiers[ident_OptResult]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ValidFlag/4 'd'/5 >/1
    if( ! refalrts::char_term( 'd', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & ValidFlag/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/5 HalfReuse: # OptDirect/1 ]] }
    refalrts::reinit_ident(context[5], identifiers[ident_True]);
    refalrts::reinit_ident(context[1], identifiers[ident_OptDirect]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ValidFlag/4 'C'/5 >/1
    if( ! refalrts::char_term( 'C', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & ValidFlag/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/5 HalfReuse: # OptConditions/1 ]] }
    refalrts::reinit_ident(context[5], identifiers[ident_True]);
    refalrts::reinit_ident(context[1], identifiers[ident_OptConditions]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ValidFlag/4 'T'/5 >/1
    if( ! refalrts::char_term( 'T', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & ValidFlag/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/5 HalfReuse: # OptTree/1 ]] }
    refalrts::reinit_ident(context[5], identifiers[ident_True]);
    refalrts::reinit_ident(context[1], identifiers[ident_OptTree]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ValidFlag/4 'D'/5 >/1
    if( ! refalrts::char_term( 'D', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/4 HalfReuse: # OptTree/5 HalfReuse: # OptDrive/1 ]] }
    refalrts::reinit_ident(context[4], identifiers[ident_True]);
    refalrts::reinit_ident(context[5], identifiers[ident_OptTree]);
    refalrts::reinit_ident(context[1], identifiers[ident_OptDrive]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ValidFlag/4 'I'/5 >/1
    if( ! refalrts::char_term( 'I', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/4 HalfReuse: # OptTree/5 HalfReuse: # OptInline/1 ]] }
    refalrts::reinit_ident(context[4], identifiers[ident_True]);
    refalrts::reinit_ident(context[5], identifiers[ident_OptTree]);
    refalrts::reinit_ident(context[1], identifiers[ident_OptInline]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ValidFlag/4 'S'/5 >/1
    if( ! refalrts::char_term( 'S', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/4 HalfReuse: # OptTree/5 HalfReuse: # OptSpec/1 ]] }
    refalrts::reinit_ident(context[4], identifiers[ident_True]);
    refalrts::reinit_ident(context[5], identifiers[ident_OptTree]);
    refalrts::reinit_ident(context[1], identifiers[ident_OptSpec]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ValidFlag/4 'A'/5 >/1
    if( ! refalrts::char_term( 'A', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/4 HalfReuse: # OptTree/5 HalfReuse: # OptAutoMarkup/1 ]] }
    refalrts::reinit_ident(context[4], identifiers[ident_True]);
    refalrts::reinit_ident(context[5], identifiers[ident_OptTree]);
    refalrts::reinit_ident(context[1], identifiers[ident_OptAutoMarkup]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ValidFlag/4 'i'/5 >/1
    if( ! refalrts::char_term( 'i', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/4 HalfReuse: # OptTree/5 HalfReuse: # OptIntrinsic/1 ]] }
    refalrts::reinit_ident(context[4], identifiers[ident_True]);
    refalrts::reinit_ident(context[5], identifiers[ident_OptTree]);
    refalrts::reinit_ident(context[1], identifiers[ident_OptIntrinsic]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ValidFlag/4 'G'/5 >/1
    if( ! refalrts::char_term( 'G', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & ValidFlag/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/5 HalfReuse: # OptGlobal/1 ]] }
    refalrts::reinit_ident(context[5], identifiers[ident_True]);
    refalrts::reinit_ident(context[1], identifiers[ident_OptGlobal]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ValidFlag/4 'x'/5 >/1
    if( ! refalrts::char_term( 'x', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & ValidFlag/4 'x'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_True]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ValidFlag/4 'y'/5 >/1
    if( ! refalrts::char_term( 'y', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & ValidFlag/4 'y'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_True]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ValidFlag/4 'z'/5 >/1
    if( ! refalrts::char_term( 'z', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & ValidFlag/4 'z'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_True]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ValidFlag/4 s.Other#1/5 >/1
  //DEBUG: s.Other#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ValidFlag/4 s.Other#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_False]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ValidFlag("ValidFlag", COOKIE1_, COOKIE2_, func_ValidFlag);


static refalrts::FnResult func_Flagsm_Unique(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & Flags-Unique/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Flags-Unique/4 e.Flags-B#1/7 s.Repeated#1/11 e.Flags-M#1/12 s.Repeated#1/16 e.Flags-E#1/14 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[9] = context[5];
      context[10] = context[6];
      if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
        continue;
      context[12] = 0;
      context[13] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[14] = context[9];
        context[15] = context[10];
        if( ! refalrts::repeated_stvar_left( vm, context[16], context[11], context[14], context[15] ) )
          continue;
        // closed e.Flags-E#1 as range 14
        //DEBUG: e.Flags-B#1: 7
        //DEBUG: s.Repeated#1: 11
        //DEBUG: e.Flags-M#1: 12
        //DEBUG: e.Flags-E#1: 14

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.Repeated#1/16 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & Flags-Unique/4 AsIs: e.Flags-B#1/7 AsIs: s.Repeated#1/11 } Tile{ AsIs: e.Flags-M#1/12 } Tile{ AsIs: e.Flags-E#1/14 } Tile{ AsIs: >/1 ]] }
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[14], context[15] );
        res = refalrts::splice_evar( res, context[12], context[13] );
        refalrts::splice_to_freelist_open( vm, context[11], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[12], context[13], context[9], context[10] ) );
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Flags-Unique/4 e.Flags#1/2 >/1
  // closed e.Flags#1 as range 2
  //DEBUG: e.Flags#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Flags-Unique/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Flags#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Flagsm_Unique("Flags-Unique", COOKIE1_, COOKIE2_, func_Flagsm_Unique);


static refalrts::FnResult func_Optm_Add(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & Opt-Add/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Opt-Add/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Opt-Add/4 (/7 e.new#5/9 )/8 s.new#3/13 e.new#4/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.new#5 as range 9
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    // closed e.new#4 as range 11
    do {
      // </0 & Opt-Add/4 (/7 e.OldFlags-B#1/18 s.Repeated#1/22 e.OldFlags-E#1/20 )/8 s.Repeated#1/13 e.NewFlags#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      // closed e.NewFlags#1 as range 16
      context[18] = 0;
      context[19] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[20] = context[14];
        context[21] = context[15];
        if( ! refalrts::repeated_stvar_left( vm, context[22], context[13], context[20], context[21] ) )
          continue;
        // closed e.OldFlags-E#1 as range 20
        //DEBUG: s.Repeated#1: 13
        //DEBUG: e.NewFlags#1: 16
        //DEBUG: e.OldFlags-B#1: 18
        //DEBUG: e.OldFlags-E#1: 20

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.Repeated#1/13 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & Opt-Add/4 AsIs: (/7 AsIs: e.OldFlags-B#1/18 AsIs: s.Repeated#1/22 AsIs: e.OldFlags-E#1/20 AsIs: )/8 } Tile{ AsIs: e.NewFlags#1/16 } Tile{ AsIs: >/1 ]] }
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[16], context[17] );
        refalrts::splice_to_freelist_open( vm, context[8], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[18], context[19], context[14], context[15] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Opt-Add/4 (/7 e.OldFlags#1/14 )/8 s.NextNewFlag#1/13 e.NewFlags#1/16 >/1
    context[14] = context[9];
    context[15] = context[10];
    context[16] = context[11];
    context[17] = context[12];
    // closed e.OldFlags#1 as range 14
    // closed e.NewFlags#1 as range 16
    //DEBUG: s.NextNewFlag#1: 13
    //DEBUG: e.OldFlags#1: 14
    //DEBUG: e.NewFlags#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.NextNewFlag#1/13 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Opt-Add/4 AsIs: (/7 AsIs: e.OldFlags#1/14 HalfReuse: s.NextNewFlag1 #13/8 } )/18 Tile{ AsIs: e.NewFlags#1/16 } Tile{ AsIs: >/1 ]] }
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

  // </0 & Opt-Add/4 (/7 e.OldFlags#1/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.OldFlags#1 as range 5
  //DEBUG: e.OldFlags#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Opt-Add/4 (/7 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.OldFlags#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Optm_Add("Opt-Add", COOKIE1_, COOKIE2_, func_Optm_Add);


static refalrts::FnResult func_Optm_Remove(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & Opt-Remove/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Opt-Remove/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Opt-Remove/4 (/7 e.new#5/9 )/8 s.new#3/13 e.new#4/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.new#5 as range 9
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    // closed e.new#4 as range 11
    do {
      // </0 & Opt-Remove/4 (/7 e.OldFlags-B#1/18 s.Repeated#1/22 e.OldFlags-E#1/20 )/8 s.Repeated#1/13 e.NewFlags#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      // closed e.NewFlags#1 as range 16
      context[18] = 0;
      context[19] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[20] = context[14];
        context[21] = context[15];
        if( ! refalrts::repeated_stvar_left( vm, context[22], context[13], context[20], context[21] ) )
          continue;
        // closed e.OldFlags-E#1 as range 20
        //DEBUG: s.Repeated#1: 13
        //DEBUG: e.NewFlags#1: 16
        //DEBUG: e.OldFlags-B#1: 18
        //DEBUG: e.OldFlags-E#1: 20

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.Repeated#1/22 {REMOVED TILE} {REMOVED TILE} s.Repeated#1/13 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & Opt-Remove/4 AsIs: (/7 } Tile{ AsIs: e.OldFlags-B#1/18 } Tile{ AsIs: e.OldFlags-E#1/20 } Tile{ AsIs: )/8 } Tile{ AsIs: e.NewFlags#1/16 } Tile{ AsIs: >/1 ]] }
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[8], context[8] );
        res = refalrts::splice_evar( res, context[20], context[21] );
        res = refalrts::splice_evar( res, context[18], context[19] );
        refalrts::splice_to_freelist_open( vm, context[7], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[18], context[19], context[14], context[15] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Opt-Remove/4 (/7 e.OldFlags#1/14 )/8 s.NextNewFlag#1/13 e.NewFlags#1/16 >/1
    context[14] = context[9];
    context[15] = context[10];
    context[16] = context[11];
    context[17] = context[12];
    // closed e.OldFlags#1 as range 14
    // closed e.NewFlags#1 as range 16
    //DEBUG: s.NextNewFlag#1: 13
    //DEBUG: e.OldFlags#1: 14
    //DEBUG: e.NewFlags#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.NextNewFlag#1/13 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Opt-Remove/4 AsIs: (/7 AsIs: e.OldFlags#1/14 AsIs: )/8 } Tile{ AsIs: e.NewFlags#1/16 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[16], context[17] );
    refalrts::splice_to_freelist_open( vm, context[8], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Opt-Remove/4 (/7 e.OldFlags#1/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.OldFlags#1 as range 5
  //DEBUG: e.OldFlags#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Opt-Remove/4 (/7 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.OldFlags#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Optm_Remove("Opt-Remove", COOKIE1_, COOKIE2_, func_Optm_Remove);


static refalrts::FnResult func_Optm_Assign(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & Opt-Assign/4 (/7 e.OldFlags#1/5 )/8 e.NewFlags#1/2 >/1
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
  // closed e.OldFlags#1 as range 5
  // closed e.NewFlags#1 as range 2
  //DEBUG: e.OldFlags#1: 5
  //DEBUG: e.NewFlags#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Opt-Assign/4 (/7 e.OldFlags#1/5 )/8 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.NewFlags#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Optm_Assign("Opt-Assign", COOKIE1_, COOKIE2_, func_Optm_Assign);


static refalrts::FnResult func_Configm_GetWarningIdsAsErrors(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Config-GetWarningIdsAsErrors/4 [/7Config/8 e._#1/10 (/16 # WarningIdsAsErrors/18 e.WarningIds#1/14 )/17 e._0#1/12 ]/9 >/1
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
    context[18] = refalrts::ident_left( identifiers[ident_WarningIdsAsErrors], context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.WarningIds#1 as range 14
    // closed e._0#1 as range 12
    //DEBUG: e._#1: 10
    //DEBUG: e.WarningIds#1: 14
    //DEBUG: e._0#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Config-GetWarningIdsAsErrors/4 [/7Config/8 e._#1/10 (/16 # WarningIdsAsErrors/18 {REMOVED TILE} )/17 e._0#1/12 ]/9 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.WarningIds#1/14 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_GetWarningIdsAsErrors("Config-GetWarningIdsAsErrors", 0U, 0U, func_Configm_GetWarningIdsAsErrors);


static refalrts::FnResult func_Configm_GetWarningIds(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Config-GetWarningIds/4 [/7Config/8 e._#1/10 (/16 # WarningIds/18 e.WarningIds#1/14 )/17 e._0#1/12 ]/9 >/1
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
    context[18] = refalrts::ident_left( identifiers[ident_WarningIds], context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.WarningIds#1 as range 14
    // closed e._0#1 as range 12
    //DEBUG: e._#1: 10
    //DEBUG: e.WarningIds#1: 14
    //DEBUG: e._0#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Config-GetWarningIds/4 [/7Config/8 e._#1/10 (/16 # WarningIds/18 {REMOVED TILE} )/17 e._0#1/12 ]/9 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.WarningIds#1/14 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_GetWarningIds("Config-GetWarningIds", 0U, 0U, func_Configm_GetWarningIds);


static refalrts::FnResult func_gen_Configm_SetWarning_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 62 elems
  refalrts::Iter context[62];
  refalrts::zeros( context, 62 );
  // </0 & Config-SetWarning:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Config-SetWarning:1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 (/15 e.new#3/13 )/16 (/19 e.new#4/17 )/20 s.new#5/21 e.new#6/2 >/1
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
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  // closed e.new#3 as range 13
  // closed e.new#4 as range 17
  if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#6 as range 2
  do {
    // </0 & Config-SetWarning:1/4 (/7 e.new#10/22 )/8 (/11 e.new#11/24 )/12 (/15 e.new#12/26 )/16 (/19 e.new#13/28 )/20 # Success/21 s.new#7/32 e.new#8/30 s.new#9/33 >/1
    context[22] = context[5];
    context[23] = context[6];
    context[24] = context[9];
    context[25] = context[10];
    context[26] = context[13];
    context[27] = context[14];
    context[28] = context[17];
    context[29] = context[18];
    context[30] = context[2];
    context[31] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Success], context[21] ) )
      continue;
    // closed e.new#10 as range 22
    // closed e.new#11 as range 24
    // closed e.new#12 as range 26
    // closed e.new#13 as range 28
    if( ! refalrts::svar_left( context[32], context[30], context[31] ) )
      continue;
    if( ! refalrts::svar_right( context[33], context[30], context[31] ) )
      continue;
    // closed e.new#8 as range 30
    do {
      // </0 & Config-SetWarning:1/4 (/7 e.Params-B#1/34 )/8 (/11 e.OldIds#1/36 )/12 (/15 e.OldIdsAsErrors#1/38 )/16 (/19 e.Params-E#1/40 )/20 # Success/21 # WarningIds/32 e.NewIds#2/42 s.FnChange#2/33 >/1
      context[34] = context[22];
      context[35] = context[23];
      context[36] = context[24];
      context[37] = context[25];
      context[38] = context[26];
      context[39] = context[27];
      context[40] = context[28];
      context[41] = context[29];
      context[42] = context[30];
      context[43] = context[31];
      if( ! refalrts::ident_term( identifiers[ident_WarningIds], context[32] ) )
        continue;
      // closed e.Params-B#1 as range 34
      // closed e.OldIds#1 as range 36
      // closed e.OldIdsAsErrors#1 as range 38
      // closed e.Params-E#1 as range 40
      // closed e.NewIds#2 as range 42
      //DEBUG: s.FnChange#2: 33
      //DEBUG: e.Params-B#1: 34
      //DEBUG: e.OldIds#1: 36
      //DEBUG: e.OldIdsAsErrors#1: 38
      //DEBUG: e.Params-E#1: 40
      //DEBUG: e.NewIds#2: 42

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: # Success/0 HalfReuse: [/4 HalfReuse: & Config/7 AsIs: e.Params-B#1/34 HalfReuse: (/8 HalfReuse: # WarningIds/11 } Tile{ HalfReuse: </19 } Tile{ AsIs: s.FnChange#2/33 HalfReuse: (/1 } Tile{ AsIs: e.OldIds#1/36 } Tile{ AsIs: )/20 } Tile{ AsIs: e.NewIds#2/42 } Tile{ HalfReuse: >/21 HalfReuse: )/32 } Tile{ HalfReuse: (/12 HalfReuse: # WarningIdsAsErrors/15 AsIs: e.OldIdsAsErrors#1/38 AsIs: )/16 } Tile{ AsIs: e.Params-E#1/40 } ]/44 Tile{ ]] }
      refalrts::alloc_close_adt(vm, context[44]);
      refalrts::reinit_ident(context[0], identifiers[ident_Success]);
      refalrts::reinit_open_adt(context[4]);
      refalrts::reinit_name(context[7], functions[efunc_Config]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_ident(context[11], identifiers[ident_WarningIds]);
      refalrts::reinit_open_call(context[19]);
      refalrts::reinit_open_bracket(context[1]);
      refalrts::reinit_close_call(context[21]);
      refalrts::reinit_close_bracket(context[32]);
      refalrts::reinit_open_bracket(context[12]);
      refalrts::reinit_ident(context[15], identifiers[ident_WarningIdsAsErrors]);
      refalrts::link_brackets( context[4], context[44] );
      refalrts::link_brackets( context[12], context[16] );
      refalrts::link_brackets( context[8], context[32] );
      refalrts::push_stack( vm, context[21] );
      refalrts::push_stack( vm, context[19] );
      refalrts::link_brackets( context[1], context[20] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[44], context[44] );
      res = refalrts::splice_evar( res, context[40], context[41] );
      res = refalrts::splice_evar( res, context[12], context[16] );
      res = refalrts::splice_evar( res, context[21], context[32] );
      res = refalrts::splice_evar( res, context[42], context[43] );
      res = refalrts::splice_evar( res, context[20], context[20] );
      res = refalrts::splice_evar( res, context[36], context[37] );
      res = refalrts::splice_evar( res, context[33], context[1] );
      res = refalrts::splice_evar( res, context[19], context[19] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Config-SetWarning:1/4 (/7 e.new#17/34 )/8 (/11 e.new#18/36 )/12 (/15 e.new#19/38 )/16 (/19 e.new#20/40 )/20 # Success/21 # WarningIdsAsErrors/32 e.new#15/42 s.new#16/44 s.new#14/33 >/1
    context[34] = context[22];
    context[35] = context[23];
    context[36] = context[24];
    context[37] = context[25];
    context[38] = context[26];
    context[39] = context[27];
    context[40] = context[28];
    context[41] = context[29];
    context[42] = context[30];
    context[43] = context[31];
    if( ! refalrts::ident_term( identifiers[ident_WarningIdsAsErrors], context[32] ) )
      continue;
    // closed e.new#17 as range 34
    // closed e.new#18 as range 36
    // closed e.new#19 as range 38
    // closed e.new#20 as range 40
    if( ! refalrts::svar_right( context[44], context[42], context[43] ) )
      continue;
    // closed e.new#15 as range 42
    do {
      // </0 & Config-SetWarning:1/4 (/7 e.Params-B#1/45 )/8 (/11 e.OldIds#1/47 )/12 (/15 e.OldIdsAsErrors#1/49 )/16 (/19 e.Params-E#1/51 )/20 # Success/21 # WarningIdsAsErrors/32 s.NewIdAsError#2/55 s.FnChange#2/44 # EnableWarning/33 >/1
      context[45] = context[34];
      context[46] = context[35];
      context[47] = context[36];
      context[48] = context[37];
      context[49] = context[38];
      context[50] = context[39];
      context[51] = context[40];
      context[52] = context[41];
      context[53] = context[42];
      context[54] = context[43];
      if( ! refalrts::ident_term( identifiers[ident_EnableWarning], context[33] ) )
        continue;
      // closed e.Params-B#1 as range 45
      // closed e.OldIds#1 as range 47
      // closed e.OldIdsAsErrors#1 as range 49
      // closed e.Params-E#1 as range 51
      if( ! refalrts::svar_left( context[55], context[53], context[54] ) )
        continue;
      if( ! refalrts::empty_seq( context[53], context[54] ) )
        continue;
      //DEBUG: s.FnChange#2: 44
      //DEBUG: e.Params-B#1: 45
      //DEBUG: e.OldIds#1: 47
      //DEBUG: e.OldIdsAsErrors#1: 49
      //DEBUG: e.Params-E#1: 51
      //DEBUG: s.NewIdAsError#2: 55

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: # Success/0 HalfReuse: [/4 HalfReuse: & Config/7 AsIs: e.Params-B#1/45 HalfReuse: (/8 HalfReuse: # WarningIds/11 } </56 Tile{ AsIs: s.FnChange#2/44 HalfReuse: (/33 } Tile{ AsIs: e.OldIds#1/47 } )/57 Tile{ AsIs: s.NewIdAsError#2/55 } >/58 Tile{ AsIs: )/20 HalfReuse: (/21 AsIs: # WarningIdsAsErrors/32 } </59 Tile{ HalfReuse: s.FnChange2 #44/12 AsIs: (/15 AsIs: e.OldIdsAsErrors#1/49 AsIs: )/16 HalfReuse: s.NewIdAsError2 #55/19 } >/60 )/61 Tile{ AsIs: e.Params-E#1/51 } Tile{ HalfReuse: ]/1 ]] }
      refalrts::alloc_open_call(vm, context[56]);
      refalrts::alloc_close_bracket(vm, context[57]);
      refalrts::alloc_close_call(vm, context[58]);
      refalrts::alloc_open_call(vm, context[59]);
      refalrts::alloc_close_call(vm, context[60]);
      refalrts::alloc_close_bracket(vm, context[61]);
      refalrts::reinit_ident(context[0], identifiers[ident_Success]);
      refalrts::reinit_open_adt(context[4]);
      refalrts::reinit_name(context[7], functions[efunc_Config]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_ident(context[11], identifiers[ident_WarningIds]);
      refalrts::reinit_open_bracket(context[33]);
      refalrts::reinit_open_bracket(context[21]);
      refalrts::reinit_svar( context[12], context[44] );
      refalrts::reinit_svar( context[19], context[55] );
      refalrts::reinit_close_adt(context[1]);
      refalrts::link_brackets( context[4], context[1] );
      refalrts::link_brackets( context[21], context[61] );
      refalrts::push_stack( vm, context[60] );
      refalrts::push_stack( vm, context[59] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[8], context[20] );
      refalrts::push_stack( vm, context[58] );
      refalrts::push_stack( vm, context[56] );
      refalrts::link_brackets( context[33], context[57] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[51], context[52] );
      res = refalrts::splice_evar( res, context[60], context[61] );
      res = refalrts::splice_evar( res, context[12], context[19] );
      res = refalrts::splice_evar( res, context[59], context[59] );
      res = refalrts::splice_evar( res, context[20], context[32] );
      res = refalrts::splice_evar( res, context[58], context[58] );
      res = refalrts::splice_evar( res, context[55], context[55] );
      res = refalrts::splice_evar( res, context[57], context[57] );
      res = refalrts::splice_evar( res, context[47], context[48] );
      res = refalrts::splice_evar( res, context[44], context[33] );
      res = refalrts::splice_evar( res, context[56], context[56] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Config-SetWarning:1/4 (/7 e.Params-B#1/45 )/8 (/11 e.OldIds#1/47 )/12 (/15 e.OldIdsAsErrors#1/49 )/16 (/19 e.Params-E#1/51 )/20 # Success/21 # WarningIdsAsErrors/32 e.NewIdsAsErrors#2/53 s.FnChange#2/44 # Nop/33 >/1
    context[45] = context[34];
    context[46] = context[35];
    context[47] = context[36];
    context[48] = context[37];
    context[49] = context[38];
    context[50] = context[39];
    context[51] = context[40];
    context[52] = context[41];
    context[53] = context[42];
    context[54] = context[43];
    if( ! refalrts::ident_term( identifiers[ident_Nop], context[33] ) )
      continue;
    // closed e.Params-B#1 as range 45
    // closed e.OldIds#1 as range 47
    // closed e.OldIdsAsErrors#1 as range 49
    // closed e.Params-E#1 as range 51
    // closed e.NewIdsAsErrors#2 as range 53
    //DEBUG: s.FnChange#2: 44
    //DEBUG: e.Params-B#1: 45
    //DEBUG: e.OldIds#1: 47
    //DEBUG: e.OldIdsAsErrors#1: 49
    //DEBUG: e.Params-E#1: 51
    //DEBUG: e.NewIdsAsErrors#2: 53

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: # Success/0 HalfReuse: [/4 HalfReuse: & Config/7 AsIs: e.Params-B#1/45 HalfReuse: (/8 HalfReuse: # WarningIds/11 AsIs: e.OldIds#1/47 AsIs: )/12 AsIs: (/15 } Tile{ Reuse: # WarningIdsAsErrors/21 HalfReuse: </32 } Tile{ AsIs: s.FnChange#2/44 HalfReuse: (/33 } Tile{ AsIs: e.OldIdsAsErrors#1/49 } Tile{ HalfReuse: )/1 } Tile{ AsIs: e.NewIdsAsErrors#2/53 } Tile{ HalfReuse: >/16 HalfReuse: )/19 AsIs: e.Params-E#1/51 HalfReuse: ]/20 } Tile{ ]] }
    refalrts::reinit_ident(context[0], identifiers[ident_Success]);
    refalrts::reinit_open_adt(context[4]);
    refalrts::reinit_name(context[7], functions[efunc_Config]);
    refalrts::reinit_open_bracket(context[8]);
    refalrts::reinit_ident(context[11], identifiers[ident_WarningIds]);
    refalrts::update_ident(context[21], identifiers[ident_WarningIdsAsErrors]);
    refalrts::reinit_open_call(context[32]);
    refalrts::reinit_open_bracket(context[33]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::reinit_close_call(context[16]);
    refalrts::reinit_close_bracket(context[19]);
    refalrts::reinit_close_adt(context[20]);
    refalrts::link_brackets( context[4], context[20] );
    refalrts::link_brackets( context[15], context[19] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[32] );
    refalrts::link_brackets( context[33], context[1] );
    refalrts::link_brackets( context[8], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[16], context[20] );
    res = refalrts::splice_evar( res, context[53], context[54] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[49], context[50] );
    res = refalrts::splice_evar( res, context[44], context[33] );
    res = refalrts::splice_evar( res, context[21], context[32] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Config-SetWarning:1/4 (/7 e.Params-B#1/5 )/8 (/11 e.OldIds#1/9 )/12 (/15 e.OldIdsAsErrors#1/13 )/16 (/19 e.Params-E#1/17 )/20 # Fails/21 e.NotParsed#2/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_Fails], context[21] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Params-B#1 as range 5
  // closed e.OldIds#1 as range 9
  // closed e.OldIdsAsErrors#1 as range 13
  // closed e.Params-E#1 as range 17
  // closed e.NotParsed#2 as range 2
  //DEBUG: e.Params-B#1: 5
  //DEBUG: e.OldIds#1: 9
  //DEBUG: e.OldIdsAsErrors#1: 13
  //DEBUG: e.Params-E#1: 17
  //DEBUG: e.NotParsed#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/7 e.Params-B#1/5 )/8 (/11 e.OldIds#1/9 )/12 (/15 e.OldIdsAsErrors#1/13 )/16 (/19 e.Params-E#1/17 )/20 # Fails/21 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: # Fails/0 HalfReuse: # BadValue-Warning/4 } Tile{ AsIs: e.NotParsed#2/2 } Tile{ ]] }
  refalrts::reinit_ident(context[0], identifiers[ident_Fails]);
  refalrts::reinit_ident(context[4], identifiers[ident_BadValuem_Warning]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Configm_SetWarning_B1("Config-SetWarning:1", COOKIE1_, COOKIE2_, func_gen_Configm_SetWarning_B1);


static refalrts::FnResult func_Configm_SetWarning(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & Config-SetWarning/4 [/7Config/8 e.Params-B#1/10 (/16 # WarningIds/18 e.OldIds#1/14 )/17 (/21 # WarningIdsAsErrors/23 e.OldIdsAsErrors#1/19 )/22 e.Params-E#1/12 ]/9 e.WarningName#1/2 >/1
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
  // closed e.WarningName#1 as range 2
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
    context[18] = refalrts::ident_left( identifiers[ident_WarningIds], context[14], context[15] );
    if( ! context[18] )
      continue;
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[12], context[13] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = refalrts::ident_left( identifiers[ident_WarningIdsAsErrors], context[19], context[20] );
    if( ! context[23] )
      continue;
    // closed e.OldIds#1 as range 14
    // closed e.OldIdsAsErrors#1 as range 19
    // closed e.Params-E#1 as range 12
    //DEBUG: e.WarningName#1: 2
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.OldIds#1: 14
    //DEBUG: e.OldIdsAsErrors#1: 19
    //DEBUG: e.Params-E#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & Config-SetWarning:1/7 HalfReuse: (/8 AsIs: e.Params-B#1/10 HalfReuse: )/16 HalfReuse: (/18 AsIs: e.OldIds#1/14 AsIs: )/17 AsIs: (/21 } Tile{ AsIs: e.OldIdsAsErrors#1/19 } Tile{ AsIs: )/22 } (/24 Tile{ AsIs: e.Params-E#1/12 } Tile{ HalfReuse: )/23 } Tile{ AsIs: </0 } Tile{ HalfReuse: & ParseWarningNames/9 AsIs: e.WarningName#1/2 AsIs: >/1 } >/25 Tile{ ]] }
    refalrts::alloc_open_bracket(vm, context[24]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[7], functions[efunc_gen_Configm_SetWarning_B1]);
    refalrts::reinit_open_bracket(context[8]);
    refalrts::reinit_close_bracket(context[16]);
    refalrts::reinit_open_bracket(context[18]);
    refalrts::reinit_close_bracket(context[23]);
    refalrts::reinit_name(context[9], functions[efunc_ParseWarningNames]);
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[4] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[24], context[23] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::link_brackets( context[18], context[17] );
    refalrts::link_brackets( context[8], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[9], context[1] );
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[24], context[24] );
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[4], context[21] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_SetWarning("Config-SetWarning", 0U, 0U, func_Configm_SetWarning);


static refalrts::FnResult func_ParseWarningNames(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & ParseWarningNames/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & ParseWarningNames/4 e.Warning#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Warning#1 as range 5
    //DEBUG: e.Warning#1: 5
    //5: e.Warning#1
    //12: e.Warning#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[9], functions[efunc_gen_ParseWarningNames_S1C1]);
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_ValidWarningId]);
    refalrts::copy_evar(vm, context[12], context[13], context[5], context[6]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::alloc_close_call(vm, context[8]);
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[7] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[10] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[12], context[13] );
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
      // </7 & ParseWarningNames$1?1/11 # True/12 (/15 e.WarningIds#2/13 )/16 s.FnChange#2/17 >/8
      context[9] = 0;
      context[10] = 0;
      context[11] = refalrts::call_left( context[9], context[10], context[7], context[8] );
      context[12] = refalrts::ident_left( identifiers[ident_True], context[9], context[10] );
      if( ! context[12] )
        continue;
      context[13] = 0;
      context[14] = 0;
      context[15] = refalrts::brackets_left( context[13], context[14], context[9], context[10] );
      if( ! context[15] )
        continue;
      refalrts::bracket_pointers(context[15], context[16]);
      // closed e.WarningIds#2 as range 13
      if( ! refalrts::svar_left( context[17], context[9], context[10] ) )
        continue;
      if( ! refalrts::empty_seq( context[9], context[10] ) )
        continue;
      //DEBUG: e.Warning#1: 5
      //DEBUG: e.WarningIds#2: 13
      //DEBUG: s.FnChange#2: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & ParseWarningNames/4 e.Warning#1/5 </7 & ParseWarningNames$1?1/11 {REMOVED TILE} s.FnChange#2/17 >/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ Reuse: # Success/12 HalfReuse: # WarningIds/15 AsIs: e.WarningIds#2/13 HalfReuse: s.FnChange2 #17/16 } Tile{ ]] }
      refalrts::update_ident(context[12], identifiers[ident_Success]);
      refalrts::reinit_ident(context[15], identifiers[ident_WarningIds]);
      refalrts::reinit_svar( context[16], context[17] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[12], context[16] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[7], context[8]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ParseWarningNames/4 e.Warning#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Warning#1 as range 5
    //DEBUG: e.Warning#1: 5
    //5: e.Warning#1
    //12: e.Warning#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[9], functions[efunc_gen_ParseWarningNames_S2C1]);
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_ValidWarningIdAsError]);
    refalrts::copy_evar(vm, context[12], context[13], context[5], context[6]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::alloc_close_call(vm, context[8]);
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[7] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[10] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[12], context[13] );
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
      // </7 & ParseWarningNames$2?1/11 # True/12 (/15 e.WarningIdsAsErrors#2/13 )/16 s.FnChange#2/17 s.Action#2/18 >/8
      context[9] = 0;
      context[10] = 0;
      context[11] = refalrts::call_left( context[9], context[10], context[7], context[8] );
      context[12] = refalrts::ident_left( identifiers[ident_True], context[9], context[10] );
      if( ! context[12] )
        continue;
      context[13] = 0;
      context[14] = 0;
      context[15] = refalrts::brackets_left( context[13], context[14], context[9], context[10] );
      if( ! context[15] )
        continue;
      refalrts::bracket_pointers(context[15], context[16]);
      // closed e.WarningIdsAsErrors#2 as range 13
      if( ! refalrts::svar_left( context[17], context[9], context[10] ) )
        continue;
      if( ! refalrts::svar_left( context[18], context[9], context[10] ) )
        continue;
      if( ! refalrts::empty_seq( context[9], context[10] ) )
        continue;
      //DEBUG: e.Warning#1: 5
      //DEBUG: e.WarningIdsAsErrors#2: 13
      //DEBUG: s.FnChange#2: 17
      //DEBUG: s.Action#2: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & ParseWarningNames/4 e.Warning#1/5 </7 & ParseWarningNames$2?1/11 {REMOVED TILE} s.FnChange#2/17 s.Action#2/18 >/8 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ Reuse: # Success/12 HalfReuse: # WarningIdsAsErrors/15 AsIs: e.WarningIdsAsErrors#2/13 HalfReuse: s.FnChange2 #17/16 } Tile{ HalfReuse: s.Action2 #18/1 ]] }
      refalrts::update_ident(context[12], identifiers[ident_Success]);
      refalrts::reinit_ident(context[15], identifiers[ident_WarningIdsAsErrors]);
      refalrts::reinit_svar( context[16], context[17] );
      refalrts::reinit_svar( context[1], context[18] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[12], context[16] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[7], context[8]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseWarningNames/4 e.Unparsed#1/2 >/1
  // closed e.Unparsed#1 as range 2
  //DEBUG: e.Unparsed#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} & ParseWarningNames/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: # Fails/0 } Tile{ AsIs: e.Unparsed#1/2 } Tile{ ]] }
  refalrts::reinit_ident(context[0], identifiers[ident_Fails]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseWarningNames("ParseWarningNames", COOKIE1_, COOKIE2_, func_ParseWarningNames);


static refalrts::FnResult func_ValidWarningIdAsError(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & ValidWarningIdAsError/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & ValidWarningIdAsError/4 'n'/7 'o'/8 '-'/9 e.Name#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = refalrts::char_left( 'n', context[5], context[6] );
    if( ! context[7] )
      continue;
    context[8] = refalrts::char_left( 'o', context[5], context[6] );
    if( ! context[8] )
      continue;
    context[9] = refalrts::char_left( '-', context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.Name#1 as range 5
    //DEBUG: e.Name#1: 5
    //5: e.Name#1
    //15: e.Name#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[12], functions[efunc_gen_ValidWarningIdAsError_S1C1]);
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_ValidWarningAsId]);
    refalrts::copy_evar(vm, context[15], context[16], context[5], context[6]);
    refalrts::alloc_close_call(vm, context[17]);
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[10] );
    res = refalrts::splice_elem( res, context[11] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[13] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[10] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </10 & ValidWarningIdAsError$1?1/14 # True/15 (/18 e.Ids#2/16 )/19 s.Action#2/20 >/11
      context[12] = 0;
      context[13] = 0;
      context[14] = refalrts::call_left( context[12], context[13], context[10], context[11] );
      context[15] = refalrts::ident_left( identifiers[ident_True], context[12], context[13] );
      if( ! context[15] )
        continue;
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[12], context[13] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      // closed e.Ids#2 as range 16
      if( ! refalrts::svar_left( context[20], context[12], context[13] ) )
        continue;
      if( ! refalrts::empty_seq( context[12], context[13] ) )
        continue;
      //DEBUG: e.Name#1: 5
      //DEBUG: e.Ids#2: 16
      //DEBUG: s.Action#2: 20

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & ValidWarningIdAsError/4 'n'/7 'o'/8 '-'/9 e.Name#1/5 </10 & ValidWarningIdAsError$1?1/14 {REMOVED TILE} s.Action#2/20 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: # True/15 AsIs: (/18 AsIs: e.Ids#2/16 AsIs: )/19 } Tile{ HalfReuse: & WarningIds-Remove/11 HalfReuse: s.Action2 #20/1 ]] }
      refalrts::reinit_name(context[11], functions[efunc_WarningIdsm_Remove]);
      refalrts::reinit_svar( context[1], context[20] );
      refalrts::link_brackets( context[18], context[19] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[11];
      res = refalrts::splice_evar( res, context[15], context[19] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[10], context[11]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ValidWarningIdAsError/4 e.Name#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Name#1 as range 5
    //DEBUG: e.Name#1: 5
    //5: e.Name#1
    //12: e.Name#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[9], functions[efunc_gen_ValidWarningIdAsError_S2C1]);
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_ValidWarningAsId]);
    refalrts::copy_evar(vm, context[12], context[13], context[5], context[6]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::alloc_close_call(vm, context[8]);
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[7] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[10] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[12], context[13] );
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
      // </7 & ValidWarningIdAsError$2?1/11 # True/12 (/15 e.Ids#2/13 )/16 s.Action#2/17 >/8
      context[9] = 0;
      context[10] = 0;
      context[11] = refalrts::call_left( context[9], context[10], context[7], context[8] );
      context[12] = refalrts::ident_left( identifiers[ident_True], context[9], context[10] );
      if( ! context[12] )
        continue;
      context[13] = 0;
      context[14] = 0;
      context[15] = refalrts::brackets_left( context[13], context[14], context[9], context[10] );
      if( ! context[15] )
        continue;
      refalrts::bracket_pointers(context[15], context[16]);
      // closed e.Ids#2 as range 13
      if( ! refalrts::svar_left( context[17], context[9], context[10] ) )
        continue;
      if( ! refalrts::empty_seq( context[9], context[10] ) )
        continue;
      //DEBUG: e.Name#1: 5
      //DEBUG: e.Ids#2: 13
      //DEBUG: s.Action#2: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & ValidWarningIdAsError/4 e.Name#1/5 </7 & ValidWarningIdAsError$2?1/11 {REMOVED TILE} s.Action#2/17 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: # True/12 AsIs: (/15 AsIs: e.Ids#2/13 AsIs: )/16 } Tile{ HalfReuse: & WarningIds-Add/8 HalfReuse: s.Action2 #17/1 ]] }
      refalrts::reinit_name(context[8], functions[efunc_WarningIdsm_Add]);
      refalrts::reinit_svar( context[1], context[17] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[12], context[16] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[7], context[8]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ValidWarningIdAsError/4 e.Other#1/2 >/1
  // closed e.Other#1 as range 2
  //DEBUG: e.Other#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ValidWarningIdAsError/4 e.Other#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_False]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ValidWarningIdAsError("ValidWarningIdAsError", COOKIE1_, COOKIE2_, func_ValidWarningIdAsError);


static refalrts::FnResult func_ValidWarningAsId(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & ValidWarningAsId/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & ValidWarningAsId/4 'e'/7 'r'/8 'r'/9 'o'/10 'r'/11 e.new#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = refalrts::char_left( 'e', context[5], context[6] );
    if( ! context[7] )
      continue;
    context[8] = refalrts::char_left( 'r', context[5], context[6] );
    if( ! context[8] )
      continue;
    context[9] = refalrts::char_left( 'r', context[5], context[6] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::char_left( 'o', context[5], context[6] );
    if( ! context[10] )
      continue;
    context[11] = refalrts::char_left( 'r', context[5], context[6] );
    if( ! context[11] )
      continue;
    // closed e.new#1 as range 5
    do {
      // </0 & ValidWarningAsId/4 'e'/7 'r'/8 'r'/9 'o'/10 'r'/11 >/1
      if( ! refalrts::empty_seq( context[5], context[6] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & ValidWarningAsId/4 'e'/7 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/8 HalfReuse: </9 HalfReuse: & Config-AllWarningIds/10 HalfReuse: >/11 HalfReuse: # Nop/1 ]] }
      refalrts::reinit_ident(context[8], identifiers[ident_True]);
      refalrts::reinit_open_call(context[9]);
      refalrts::reinit_name(context[10], functions[efunc_Configm_AllWarningIds]);
      refalrts::reinit_close_call(context[11]);
      refalrts::reinit_ident(context[1], identifiers[ident_Nop]);
      refalrts::push_stack( vm, context[11] );
      refalrts::push_stack( vm, context[9] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ValidWarningAsId/4 'e'/7 'r'/8 'r'/9 'o'/10 'r'/11 '='/14 e.Name#1/12 >/1
    context[12] = context[5];
    context[13] = context[6];
    context[14] = refalrts::char_left( '=', context[12], context[13] );
    if( ! context[14] )
      continue;
    // closed e.Name#1 as range 12
    //DEBUG: e.Name#1: 12
    //12: e.Name#1
    //20: e.Name#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_name(vm, context[17], functions[efunc_gen_ValidWarningAsId_S2C1]);
    refalrts::alloc_open_call(vm, context[18]);
    refalrts::alloc_name(vm, context[19], functions[efunc_WarningForName]);
    refalrts::copy_evar(vm, context[20], context[21], context[12], context[13]);
    refalrts::alloc_close_call(vm, context[22]);
    refalrts::alloc_close_call(vm, context[16]);
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[15] );
    res = refalrts::splice_elem( res, context[16] );
    refalrts::push_stack( vm, context[22] );
    refalrts::push_stack( vm, context[18] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[15] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </15 & ValidWarningAsId$2?1/19 # True/20 s.Id#2/21 >/16
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::call_left( context[17], context[18], context[15], context[16] );
      context[20] = refalrts::ident_left( identifiers[ident_True], context[17], context[18] );
      if( ! context[20] )
        continue;
      if( ! refalrts::svar_left( context[21], context[17], context[18] ) )
        continue;
      if( ! refalrts::empty_seq( context[17], context[18] ) )
        continue;
      //DEBUG: e.Name#1: 12
      //DEBUG: s.Id#2: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & ValidWarningAsId/4 'e'/7 'r'/8 'r'/9 'o'/10 'r'/11 '='/14 e.Name#1/12 </15 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/19 HalfReuse: (/20 AsIs: s.Id#2/21 HalfReuse: )/16 HalfReuse: # EnableWarning/1 ]] }
      refalrts::reinit_ident(context[19], identifiers[ident_True]);
      refalrts::reinit_open_bracket(context[20]);
      refalrts::reinit_close_bracket(context[16]);
      refalrts::reinit_ident(context[1], identifiers[ident_EnableWarning]);
      refalrts::link_brackets( context[20], context[16] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[19];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[15], context[16]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ValidWarningAsId/4 e.Other#1/2 >/1
  // closed e.Other#1 as range 2
  //DEBUG: e.Other#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ValidWarningAsId/4 e.Other#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_False]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ValidWarningAsId("ValidWarningAsId", COOKIE1_, COOKIE2_, func_ValidWarningAsId);


static refalrts::FnResult func_ValidWarningId(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & ValidWarningId/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & ValidWarningId/4 s.new#1/7 s.new#2/8 s.new#3/9 e.new#4/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_left( context[7], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
      continue;
    // closed e.new#4 as range 5
    do {
      // </0 & ValidWarningId/4 'a'/7 'l'/8 'l'/9 >/1
      if( ! refalrts::char_term( 'a', context[7] ) )
        continue;
      if( ! refalrts::char_term( 'l', context[8] ) )
        continue;
      if( ! refalrts::char_term( 'l', context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[5], context[6] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/4 HalfReuse: </7 HalfReuse: & Config-AllWarningIds/8 HalfReuse: >/9 HalfReuse: & WarningIds-Add/1 ]] }
      refalrts::reinit_ident(context[4], identifiers[ident_True]);
      refalrts::reinit_open_call(context[7]);
      refalrts::reinit_name(context[8], functions[efunc_Configm_AllWarningIds]);
      refalrts::reinit_close_call(context[9]);
      refalrts::reinit_name(context[1], functions[efunc_WarningIdsm_Add]);
      refalrts::push_stack( vm, context[9] );
      refalrts::push_stack( vm, context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[4];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ValidWarningId/4 'n'/7 'o'/8 '-'/9 e.Name#1/10 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::char_term( 'n', context[7] ) )
      continue;
    if( ! refalrts::char_term( 'o', context[8] ) )
      continue;
    if( ! refalrts::char_term( '-', context[9] ) )
      continue;
    // closed e.Name#1 as range 10
    //DEBUG: e.Name#1: 10
    //10: e.Name#1
    //17: e.Name#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[14], functions[efunc_gen_ValidWarningId_S2C1]);
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_name(vm, context[16], functions[efunc_WarningForName]);
    refalrts::copy_evar(vm, context[17], context[18], context[10], context[11]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[12] );
    res = refalrts::splice_elem( res, context[13] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[15] );
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
      // </12 & ValidWarningId$2?1/16 # True/17 s.Id#2/18 >/13
      context[14] = 0;
      context[15] = 0;
      context[16] = refalrts::call_left( context[14], context[15], context[12], context[13] );
      context[17] = refalrts::ident_left( identifiers[ident_True], context[14], context[15] );
      if( ! context[17] )
        continue;
      if( ! refalrts::svar_left( context[18], context[14], context[15] ) )
        continue;
      if( ! refalrts::empty_seq( context[14], context[15] ) )
        continue;
      //DEBUG: e.Name#1: 10
      //DEBUG: s.Id#2: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & ValidWarningId/4 'n'/7 'o'/8 '-'/9 e.Name#1/10 </12 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/16 HalfReuse: (/17 AsIs: s.Id#2/18 HalfReuse: )/13 HalfReuse: & WarningIds-Remove/1 ]] }
      refalrts::reinit_ident(context[16], identifiers[ident_True]);
      refalrts::reinit_open_bracket(context[17]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::reinit_name(context[1], functions[efunc_WarningIdsm_Remove]);
      refalrts::link_brackets( context[17], context[13] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[16];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[12], context[13]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ValidWarningId/4 e.Name#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Name#1 as range 5
    //DEBUG: e.Name#1: 5
    //5: e.Name#1
    //12: e.Name#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[9], functions[efunc_gen_ValidWarningId_S3C1]);
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_WarningForName]);
    refalrts::copy_evar(vm, context[12], context[13], context[5], context[6]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::alloc_close_call(vm, context[8]);
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[7] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[10] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[12], context[13] );
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
      // </7 & ValidWarningId$3?1/11 # True/12 s.Id#2/13 >/8
      context[9] = 0;
      context[10] = 0;
      context[11] = refalrts::call_left( context[9], context[10], context[7], context[8] );
      context[12] = refalrts::ident_left( identifiers[ident_True], context[9], context[10] );
      if( ! context[12] )
        continue;
      if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
        continue;
      if( ! refalrts::empty_seq( context[9], context[10] ) )
        continue;
      //DEBUG: e.Name#1: 5
      //DEBUG: s.Id#2: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & ValidWarningId/4 e.Name#1/5 </7 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/11 HalfReuse: (/12 AsIs: s.Id#2/13 HalfReuse: )/8 HalfReuse: & WarningIds-Add/1 ]] }
      refalrts::reinit_ident(context[11], identifiers[ident_True]);
      refalrts::reinit_open_bracket(context[12]);
      refalrts::reinit_close_bracket(context[8]);
      refalrts::reinit_name(context[1], functions[efunc_WarningIdsm_Add]);
      refalrts::link_brackets( context[12], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[11];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[7], context[8]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ValidWarningId/4 e.Other#1/2 >/1
  // closed e.Other#1 as range 2
  //DEBUG: e.Other#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ValidWarningId/4 e.Other#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_False]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ValidWarningId("ValidWarningId", COOKIE1_, COOKIE2_, func_ValidWarningId);


static refalrts::FnResult func_WarningForName(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  // </0 & WarningForName/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & WarningForName/4 e.new#1/5 s.new#2/15 s.new#3/14 s.new#4/13 s.new#5/12 s.new#6/11 s.new#7/10 s.new#8/9 s.new#9/8 s.new#10/7 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_right( context[7], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_right( context[8], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_right( context[9], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_right( context[10], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_right( context[11], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_right( context[12], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_right( context[13], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_right( context[14], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_right( context[15], context[5], context[6] ) )
      continue;
    // closed e.new#1 as range 5
    do {
      // </0 & WarningForName/4 e.new#18/16 s.new#17/15 s.new#16/14 s.new#15/13 s.new#14/12 'e'/11 'n'/10 s.new#13/9 s.new#12/8 s.new#11/7 >/1
      context[16] = context[5];
      context[17] = context[6];
      if( ! refalrts::char_term( 'e', context[11] ) )
        continue;
      if( ! refalrts::char_term( 'n', context[10] ) )
        continue;
      // closed e.new#18 as range 16
      do {
        // </0 & WarningForName/4 's'/15 'c'/14 'r'/13 'e'/12 'e'/11 'n'/10 'i'/9 'n'/8 'g'/7 >/1
        if( ! refalrts::char_term( 's', context[15] ) )
          continue;
        if( ! refalrts::char_term( 'c', context[14] ) )
          continue;
        if( ! refalrts::char_term( 'r', context[13] ) )
          continue;
        if( ! refalrts::char_term( 'e', context[12] ) )
          continue;
        if( ! refalrts::char_term( 'i', context[9] ) )
          continue;
        if( ! refalrts::char_term( 'n', context[8] ) )
          continue;
        if( ! refalrts::char_term( 'g', context[7] ) )
          continue;
        if( ! refalrts::empty_seq( context[16], context[17] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & WarningForName/4 's'/15 'c'/14 'r'/13 'e'/12 'e'/11 'n'/10 'i'/9 'n'/8 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/7 HalfReuse: # screening/1 ]] }
        refalrts::reinit_ident(context[7], identifiers[ident_True]);
        refalrts::reinit_ident(context[1], identifiers[ident_screening]);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[7];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & WarningForName/4 'i'/20 'n'/21 'i'/22 't'/23 '-'/24 'f'/25 'i'/26 'n'/15 'a'/14 'l'/13 '-'/12 'e'/11 'n'/10 't'/9 'r'/8 'y'/7 >/1
      context[18] = context[16];
      context[19] = context[17];
      if( ! refalrts::char_term( 'n', context[15] ) )
        continue;
      if( ! refalrts::char_term( 'a', context[14] ) )
        continue;
      if( ! refalrts::char_term( 'l', context[13] ) )
        continue;
      if( ! refalrts::char_term( '-', context[12] ) )
        continue;
      if( ! refalrts::char_term( 't', context[9] ) )
        continue;
      if( ! refalrts::char_term( 'r', context[8] ) )
        continue;
      if( ! refalrts::char_term( 'y', context[7] ) )
        continue;
      context[20] = refalrts::char_left( 'i', context[18], context[19] );
      if( ! context[20] )
        continue;
      context[21] = refalrts::char_left( 'n', context[18], context[19] );
      if( ! context[21] )
        continue;
      context[22] = refalrts::char_left( 'i', context[18], context[19] );
      if( ! context[22] )
        continue;
      context[23] = refalrts::char_left( 't', context[18], context[19] );
      if( ! context[23] )
        continue;
      context[24] = refalrts::char_left( '-', context[18], context[19] );
      if( ! context[24] )
        continue;
      context[25] = refalrts::char_left( 'f', context[18], context[19] );
      if( ! context[25] )
        continue;
      context[26] = refalrts::char_left( 'i', context[18], context[19] );
      if( ! context[26] )
        continue;
      if( ! refalrts::empty_seq( context[18], context[19] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & WarningForName/4 'i'/20 'n'/21 'i'/22 't'/23 '-'/24 'f'/25 'i'/26 'n'/15 'a'/14 'l'/13 '-'/12 'e'/11 'n'/10 't'/9 'r'/8 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/7 HalfReuse: # init-final-entry/1 ]] }
      refalrts::reinit_ident(context[7], identifiers[ident_True]);
      refalrts::reinit_ident(context[1], identifiers[ident_initm_finalm_entry]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[7];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & WarningForName/4 e.new#17/16 s.new#18/23 s.new#19/22 s.new#20/21 s.new#21/20 s.new#22/19 s.new#23/18 s.new#16/15 'c'/14 'o'/13 'm'/12 s.new#15/11 s.new#14/10 s.new#13/9 s.new#12/8 s.new#11/7 >/1
    context[16] = context[5];
    context[17] = context[6];
    if( ! refalrts::char_term( 'c', context[14] ) )
      continue;
    if( ! refalrts::char_term( 'o', context[13] ) )
      continue;
    if( ! refalrts::char_term( 'm', context[12] ) )
      continue;
    if( ! refalrts::svar_right( context[18], context[16], context[17] ) )
      continue;
    if( ! refalrts::svar_right( context[19], context[16], context[17] ) )
      continue;
    if( ! refalrts::svar_right( context[20], context[16], context[17] ) )
      continue;
    if( ! refalrts::svar_right( context[21], context[16], context[17] ) )
      continue;
    if( ! refalrts::svar_right( context[22], context[16], context[17] ) )
      continue;
    if( ! refalrts::svar_right( context[23], context[16], context[17] ) )
      continue;
    // closed e.new#17 as range 16
    do {
      // </0 & WarningForName/4 'n'/23 'u'/22 'l'/21 '-'/20 'i'/19 'n'/18 '-'/15 'c'/14 'o'/13 'm'/12 'p'/11 'o'/10 'u'/9 'n'/8 'd'/7 >/1
      if( ! refalrts::char_term( 'n', context[23] ) )
        continue;
      if( ! refalrts::char_term( 'u', context[22] ) )
        continue;
      if( ! refalrts::char_term( 'l', context[21] ) )
        continue;
      if( ! refalrts::char_term( '-', context[20] ) )
        continue;
      if( ! refalrts::char_term( 'i', context[19] ) )
        continue;
      if( ! refalrts::char_term( 'n', context[18] ) )
        continue;
      if( ! refalrts::char_term( '-', context[15] ) )
        continue;
      if( ! refalrts::char_term( 'p', context[11] ) )
        continue;
      if( ! refalrts::char_term( 'o', context[10] ) )
        continue;
      if( ! refalrts::char_term( 'u', context[9] ) )
        continue;
      if( ! refalrts::char_term( 'n', context[8] ) )
        continue;
      if( ! refalrts::char_term( 'd', context[7] ) )
        continue;
      if( ! refalrts::empty_seq( context[16], context[17] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & WarningForName/4 'n'/23 'u'/22 'l'/21 '-'/20 'i'/19 'n'/18 '-'/15 'c'/14 'o'/13 'm'/12 'p'/11 'o'/10 'u'/9 'n'/8 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/7 HalfReuse: # nul-in-compound/1 ]] }
      refalrts::reinit_ident(context[7], identifiers[ident_True]);
      refalrts::reinit_ident(context[1], identifiers[ident_nulm_inm_compound]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[7];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & WarningForName/4 'i'/26 'g'/27 'n'/28 'o'/29 'r'/30 'e'/31 'd'/32 '-'/23 'p'/22 's'/21 'e'/20 'u'/19 'd'/18 'o'/15 'c'/14 'o'/13 'm'/12 'm'/11 'e'/10 'n'/9 't'/8 's'/7 >/1
    context[24] = context[16];
    context[25] = context[17];
    if( ! refalrts::char_term( '-', context[23] ) )
      continue;
    if( ! refalrts::char_term( 'p', context[22] ) )
      continue;
    if( ! refalrts::char_term( 's', context[21] ) )
      continue;
    if( ! refalrts::char_term( 'e', context[20] ) )
      continue;
    if( ! refalrts::char_term( 'u', context[19] ) )
      continue;
    if( ! refalrts::char_term( 'd', context[18] ) )
      continue;
    if( ! refalrts::char_term( 'o', context[15] ) )
      continue;
    if( ! refalrts::char_term( 'm', context[11] ) )
      continue;
    if( ! refalrts::char_term( 'e', context[10] ) )
      continue;
    if( ! refalrts::char_term( 'n', context[9] ) )
      continue;
    if( ! refalrts::char_term( 't', context[8] ) )
      continue;
    if( ! refalrts::char_term( 's', context[7] ) )
      continue;
    context[26] = refalrts::char_left( 'i', context[24], context[25] );
    if( ! context[26] )
      continue;
    context[27] = refalrts::char_left( 'g', context[24], context[25] );
    if( ! context[27] )
      continue;
    context[28] = refalrts::char_left( 'n', context[24], context[25] );
    if( ! context[28] )
      continue;
    context[29] = refalrts::char_left( 'o', context[24], context[25] );
    if( ! context[29] )
      continue;
    context[30] = refalrts::char_left( 'r', context[24], context[25] );
    if( ! context[30] )
      continue;
    context[31] = refalrts::char_left( 'e', context[24], context[25] );
    if( ! context[31] )
      continue;
    context[32] = refalrts::char_left( 'd', context[24], context[25] );
    if( ! context[32] )
      continue;
    if( ! refalrts::empty_seq( context[24], context[25] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & WarningForName/4 'i'/26 'g'/27 'n'/28 'o'/29 'r'/30 'e'/31 'd'/32 '-'/23 'p'/22 's'/21 'e'/20 'u'/19 'd'/18 'o'/15 'c'/14 'o'/13 'm'/12 'm'/11 'e'/10 'n'/9 't'/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/7 HalfReuse: # ignored-pseudocomments/1 ]] }
    refalrts::reinit_ident(context[7], identifiers[ident_True]);
    refalrts::reinit_ident(context[1], identifiers[ident_ignoredm_pseudocomments]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & WarningForName/4 e.Other#1/2 >/1
  // closed e.Other#1 as range 2
  //DEBUG: e.Other#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & WarningForName/4 e.Other#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_False]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_WarningForName("WarningForName", COOKIE1_, COOKIE2_, func_WarningForName);


static refalrts::FnResult func_Configm_AllWarningIds(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & Config-AllWarningIds/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # screening/4 HalfReuse: # init-final-entry/1 } # nul-in-compound/5 )/6 Tile{ ]] }
  refalrts::alloc_ident(vm, context[5], identifiers[ident_nulm_inm_compound]);
  refalrts::alloc_close_bracket(vm, context[6]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_screening]);
  refalrts::reinit_ident(context[1], identifiers[ident_initm_finalm_entry]);
  refalrts::link_brackets( context[0], context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Configm_AllWarningIds("Config-AllWarningIds", 0U, 0U, func_Configm_AllWarningIds);


static refalrts::FnResult func_WarningIdsm_Add(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & WarningIds-Add/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & WarningIds-Add/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & WarningIds-Add/4 (/7 e.new#5/9 )/8 s.new#3/13 e.new#4/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.new#5 as range 9
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    // closed e.new#4 as range 11
    do {
      // </0 & WarningIds-Add/4 (/7 e.OldIds-B#1/18 s.Repeated#1/22 e.OldIds-E#1/20 )/8 s.Repeated#1/13 e.NewIds#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      // closed e.NewIds#1 as range 16
      context[18] = 0;
      context[19] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[20] = context[14];
        context[21] = context[15];
        if( ! refalrts::repeated_stvar_left( vm, context[22], context[13], context[20], context[21] ) )
          continue;
        // closed e.OldIds-E#1 as range 20
        //DEBUG: s.Repeated#1: 13
        //DEBUG: e.NewIds#1: 16
        //DEBUG: e.OldIds-B#1: 18
        //DEBUG: e.OldIds-E#1: 20

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.Repeated#1/13 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & WarningIds-Add/4 AsIs: (/7 AsIs: e.OldIds-B#1/18 AsIs: s.Repeated#1/22 AsIs: e.OldIds-E#1/20 AsIs: )/8 } Tile{ AsIs: e.NewIds#1/16 } Tile{ AsIs: >/1 ]] }
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[16], context[17] );
        refalrts::splice_to_freelist_open( vm, context[8], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[18], context[19], context[14], context[15] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & WarningIds-Add/4 (/7 e.OldIds#1/14 )/8 s.NextNewId#1/13 e.NewIds#1/16 >/1
    context[14] = context[9];
    context[15] = context[10];
    context[16] = context[11];
    context[17] = context[12];
    // closed e.OldIds#1 as range 14
    // closed e.NewIds#1 as range 16
    //DEBUG: s.NextNewId#1: 13
    //DEBUG: e.OldIds#1: 14
    //DEBUG: e.NewIds#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.NextNewId#1/13 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & WarningIds-Add/4 AsIs: (/7 AsIs: e.OldIds#1/14 HalfReuse: s.NextNewId1 #13/8 } )/18 Tile{ AsIs: e.NewIds#1/16 } Tile{ AsIs: >/1 ]] }
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

  // </0 & WarningIds-Add/4 (/7 e.OldIds#1/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.OldIds#1 as range 5
  //DEBUG: e.OldIds#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & WarningIds-Add/4 (/7 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.OldIds#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_WarningIdsm_Add("WarningIds-Add", COOKIE1_, COOKIE2_, func_WarningIdsm_Add);


static refalrts::FnResult func_WarningIdsm_Remove(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & WarningIds-Remove/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & WarningIds-Remove/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & WarningIds-Remove/4 (/7 e.new#5/9 )/8 s.new#3/13 e.new#4/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.new#5 as range 9
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    // closed e.new#4 as range 11
    do {
      // </0 & WarningIds-Remove/4 (/7 e.OldIds-B#1/18 s.Repeated#1/22 e.OldIds-E#1/20 )/8 s.Repeated#1/13 e.NewIds#1/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      // closed e.NewIds#1 as range 16
      context[18] = 0;
      context[19] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[20] = context[14];
        context[21] = context[15];
        if( ! refalrts::repeated_stvar_left( vm, context[22], context[13], context[20], context[21] ) )
          continue;
        // closed e.OldIds-E#1 as range 20
        //DEBUG: s.Repeated#1: 13
        //DEBUG: e.NewIds#1: 16
        //DEBUG: e.OldIds-B#1: 18
        //DEBUG: e.OldIds-E#1: 20

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.Repeated#1/22 {REMOVED TILE} {REMOVED TILE} s.Repeated#1/13 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & WarningIds-Remove/4 AsIs: (/7 } Tile{ AsIs: e.OldIds-B#1/18 } Tile{ AsIs: e.OldIds-E#1/20 } Tile{ AsIs: )/8 } Tile{ AsIs: e.NewIds#1/16 } Tile{ AsIs: >/1 ]] }
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[8], context[8] );
        res = refalrts::splice_evar( res, context[20], context[21] );
        res = refalrts::splice_evar( res, context[18], context[19] );
        refalrts::splice_to_freelist_open( vm, context[7], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[18], context[19], context[14], context[15] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & WarningIds-Remove/4 (/7 e.OldIds#1/14 )/8 s.NextNewId#1/13 e.NewIds#1/16 >/1
    context[14] = context[9];
    context[15] = context[10];
    context[16] = context[11];
    context[17] = context[12];
    // closed e.OldIds#1 as range 14
    // closed e.NewIds#1 as range 16
    //DEBUG: s.NextNewId#1: 13
    //DEBUG: e.OldIds#1: 14
    //DEBUG: e.NewIds#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.NextNewId#1/13 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & WarningIds-Remove/4 AsIs: (/7 AsIs: e.OldIds#1/14 AsIs: )/8 } Tile{ AsIs: e.NewIds#1/16 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[16], context[17] );
    refalrts::splice_to_freelist_open( vm, context[8], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & WarningIds-Remove/4 (/7 e.OldIds#1/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.OldIds#1 as range 5
  //DEBUG: e.OldIds#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & WarningIds-Remove/4 (/7 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.OldIds#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_WarningIdsm_Remove("WarningIds-Remove", COOKIE1_, COOKIE2_, func_WarningIdsm_Remove);


static refalrts::FnResult func_Configm_GetErrorFile(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & Config-GetErrorFile/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Config-GetErrorFile/4 [/7Config/8 e.new#1/5 ]/9 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], functions[efunc_Config], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 5
  do {
    // </0 & Config-GetErrorFile/4 [/7Config/8 e.Params-B#1/12 (/18 # ErrorFile/20 )/19 e.Params-E#1/14 ]/9 >/1
    context[10] = context[5];
    context[11] = context[6];
    context[12] = 0;
    context[13] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[14] = context[10];
      context[15] = context[11];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[14], context[15] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left( identifiers[ident_ErrorFile], context[16], context[17] );
      if( ! context[20] )
        continue;
      if( ! refalrts::empty_seq( context[16], context[17] ) )
        continue;
      // closed e.Params-E#1 as range 14
      //DEBUG: e.Params-B#1: 12
      //DEBUG: e.Params-E#1: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & Config-GetErrorFile/4 [/7Config/8 e.Params-B#1/12 (/18 # ErrorFile/20 )/19 e.Params-E#1/14 ]/9 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # NoErrorFile/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_NoErrorFile]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[12], context[13], context[10], context[11] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Config-GetErrorFile/4 [/7Config/8 e.Params-B#1/10 (/16 # ErrorFile/18 e.ErrorFile#1/14 )/17 e.Params-E#1/12 ]/9 >/1
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
    context[18] = refalrts::ident_left( identifiers[ident_ErrorFile], context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.ErrorFile#1 as range 14
    // closed e.Params-E#1 as range 12
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.ErrorFile#1: 14
    //DEBUG: e.Params-E#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} & Config-GetErrorFile/4 [/7Config/8 e.Params-B#1/10 (/16 # ErrorFile/18 {REMOVED TILE} )/17 e.Params-E#1/12 ]/9 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: # ErrorFile/0 } Tile{ AsIs: e.ErrorFile#1/14 } Tile{ ]] }
    refalrts::reinit_ident(context[0], identifiers[ident_ErrorFile]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::splice_to_freelist_open( vm, context[0], res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_GetErrorFile("Config-GetErrorFile", 0U, 0U, func_Configm_GetErrorFile);


static refalrts::FnResult func_Configm_SetErrorFile(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Config-SetErrorFile/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Config-SetErrorFile/4 [/7Config/8 e.new#1/5 ]/9 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], functions[efunc_Config], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Config-SetErrorFile/4 [/7Config/8 e.Params#1/10 ]/9 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Params#1 as range 10
    //DEBUG: e.Params#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Config-SetErrorFile/4 [/7Config/8 e.Params#1/10 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Fails/9 HalfReuse: # EmptyErrorFileName/1 ]] }
    refalrts::reinit_ident(context[9], identifiers[ident_Fails]);
    refalrts::reinit_ident(context[1], identifiers[ident_EmptyErrorFileName]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Config-SetErrorFile/4 [/7Config/8 e.Params-B#1/10 (/16 # ErrorFile/18 e.OldErrorFile#1/14 )/17 e.Params-E#1/12 ]/9 e.NewErrorFile#1/2 >/1
  // closed e.NewErrorFile#1 as range 2
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
    context[18] = refalrts::ident_left( identifiers[ident_ErrorFile], context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.OldErrorFile#1 as range 14
    // closed e.Params-E#1 as range 12
    //DEBUG: e.NewErrorFile#1: 2
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.OldErrorFile#1: 14
    //DEBUG: e.Params-E#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} e.OldErrorFile#1/14 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/10 AsIs: (/16 AsIs: # ErrorFile/18 } Tile{ AsIs: e.NewErrorFile#1/2 } Tile{ AsIs: )/17 AsIs: e.Params-E#1/12 AsIs: ]/9 } Tile{ ]] }
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

static refalrts::NativeReference nat_ref_Configm_SetErrorFile("Config-SetErrorFile", 0U, 0U, func_Configm_SetErrorFile);


static refalrts::FnResult func_Configm_GetDebugMode(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & Config-GetDebugMode/4 [/7Config/8 e.Params-B#1/10 (/16 # DebugMode/18 s.MarkupContext#1/19 s.DebuggerInfo#1/20 )/17 e.Params-E#1/12 ]/9 >/1
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
    context[18] = refalrts::ident_left( identifiers[ident_DebugMode], context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.Params-E#1 as range 12
    if( ! refalrts::svar_left( context[19], context[14], context[15] ) )
      continue;
    if( ! refalrts::svar_left( context[20], context[14], context[15] ) )
      continue;
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.Params-E#1: 12
    //DEBUG: s.MarkupContext#1: 19
    //DEBUG: s.DebuggerInfo#1: 20

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Config-GetDebugMode/4 [/7Config/8 e.Params-B#1/10 (/16 # DebugMode/18 {REMOVED TILE} )/17 e.Params-E#1/12 ]/9 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: s.MarkupContext#1/19 AsIs: s.DebuggerInfo#1/20 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_GetDebugMode("Config-GetDebugMode", 0U, 0U, func_Configm_GetDebugMode);


static refalrts::FnResult func_Configm_SetMarkupContext(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & Config-SetMarkupContext/4 [/7Config/8 e.Params-B#1/10 (/16 # DebugMode/18 s.MarkupContext#1/19 s.DebuggerInfo#1/20 )/17 e.Params-E#1/12 ]/9 >/1
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
    context[18] = refalrts::ident_left( identifiers[ident_DebugMode], context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.Params-E#1 as range 12
    if( ! refalrts::svar_left( context[19], context[14], context[15] ) )
      continue;
    if( ! refalrts::svar_left( context[20], context[14], context[15] ) )
      continue;
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.Params-E#1: 12
    //DEBUG: s.MarkupContext#1: 19
    //DEBUG: s.DebuggerInfo#1: 20

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} s.MarkupContext#1/19 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/10 AsIs: (/16 AsIs: # DebugMode/18 } Tile{ HalfReuse: # MarkupContext/1 } Tile{ AsIs: s.DebuggerInfo#1/20 AsIs: )/17 AsIs: e.Params-E#1/12 AsIs: ]/9 } Tile{ ]] }
    refalrts::reinit_ident(context[4], identifiers[ident_Success]);
    refalrts::reinit_ident(context[1], identifiers[ident_MarkupContext]);
    refalrts::link_brackets( context[7], context[9] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[20], context[9] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[4], context[18] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_SetMarkupContext("Config-SetMarkupContext", 0U, 0U, func_Configm_SetMarkupContext);


static refalrts::FnResult func_Configm_SetDebugInfo(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & Config-SetDebugInfo/4 [/7Config/8 e.Params-B#1/10 (/16 # DebugMode/18 s.MarkupContext#1/19 s.DebuggerInfo#1/20 )/17 e.Params-E#1/12 ]/9 >/1
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
    context[18] = refalrts::ident_left( identifiers[ident_DebugMode], context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.Params-E#1 as range 12
    if( ! refalrts::svar_left( context[19], context[14], context[15] ) )
      continue;
    if( ! refalrts::svar_left( context[20], context[14], context[15] ) )
      continue;
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.Params-E#1: 12
    //DEBUG: s.MarkupContext#1: 19
    //DEBUG: s.DebuggerInfo#1: 20

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} s.DebuggerInfo#1/20 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/10 AsIs: (/16 AsIs: # DebugMode/18 AsIs: s.MarkupContext#1/19 } Tile{ HalfReuse: # DebugInfo/1 } Tile{ AsIs: )/17 AsIs: e.Params-E#1/12 AsIs: ]/9 } Tile{ ]] }
    refalrts::reinit_ident(context[4], identifiers[ident_Success]);
    refalrts::reinit_ident(context[1], identifiers[ident_DebugInfo]);
    refalrts::link_brackets( context[7], context[9] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[17], context[9] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[4], context[19] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_SetDebugInfo("Config-SetDebugInfo", 0U, 0U, func_Configm_SetDebugInfo);


static refalrts::FnResult func_Configm_GetGrammarCheck(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & Config-GetGrammarCheck/4 [/7Config/8 e.Params-B#1/10 (/16 # GrammarCheck/18 s.GrammarCheck#1/19 )/17 e.Params-E#1/12 ]/9 >/1
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
    context[18] = refalrts::ident_left( identifiers[ident_GrammarCheck], context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.Params-E#1 as range 12
    if( ! refalrts::svar_left( context[19], context[14], context[15] ) )
      continue;
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.Params-E#1: 12
    //DEBUG: s.GrammarCheck#1: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Config-GetGrammarCheck/4 [/7Config/8 e.Params-B#1/10 (/16 # GrammarCheck/18 s.GrammarCheck#1/19 )/17 e.Params-E#1/12 ]/9 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: s.GrammarCheck1 #19/1 ]] }
    refalrts::reinit_svar( context[1], context[19] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_GetGrammarCheck("Config-GetGrammarCheck", 0U, 0U, func_Configm_GetGrammarCheck);


static refalrts::FnResult func_Configm_SetGrammarCheck(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & Config-SetGrammarCheck/4 [/7Config/8 e.Params-B#1/10 (/16 # GrammarCheck/18 s.GrammarCheck#1/19 )/17 e.Params-E#1/12 ]/9 >/1
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
    context[18] = refalrts::ident_left( identifiers[ident_GrammarCheck], context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.Params-E#1 as range 12
    if( ! refalrts::svar_left( context[19], context[14], context[15] ) )
      continue;
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.Params-E#1: 12
    //DEBUG: s.GrammarCheck#1: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} s.GrammarCheck#1/19 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/10 AsIs: (/16 AsIs: # GrammarCheck/18 } Tile{ HalfReuse: # GrammarCheck/1 } Tile{ AsIs: )/17 AsIs: e.Params-E#1/12 AsIs: ]/9 } Tile{ ]] }
    refalrts::reinit_ident(context[4], identifiers[ident_Success]);
    refalrts::reinit_ident(context[1], identifiers[ident_GrammarCheck]);
    refalrts::link_brackets( context[7], context[9] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[17], context[9] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[4], context[18] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_SetGrammarCheck("Config-SetGrammarCheck", 0U, 0U, func_Configm_SetGrammarCheck);


static refalrts::FnResult func_Configm_GetTargetFileName(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & Config-GetTargetFileName/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Config-GetTargetFileName/4 [/7Config/8 e.new#1/5 ]/9 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], functions[efunc_Config], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 5
  do {
    // </0 & Config-GetTargetFileName/4 [/7Config/8 e.Params-B#1/12 (/18 # TargetFileName/20 # DefaultTargetFileName/21 )/19 e.Params-E#1/14 ]/9 >/1
    context[10] = context[5];
    context[11] = context[6];
    context[12] = 0;
    context[13] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[14] = context[10];
      context[15] = context[11];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[14], context[15] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left( identifiers[ident_TargetFileName], context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = refalrts::ident_left( identifiers[ident_DefaultTargetFileName], context[16], context[17] );
      if( ! context[21] )
        continue;
      if( ! refalrts::empty_seq( context[16], context[17] ) )
        continue;
      // closed e.Params-E#1 as range 14
      //DEBUG: e.Params-B#1: 12
      //DEBUG: e.Params-E#1: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & Config-GetTargetFileName/4 [/7Config/8 e.Params-B#1/12 (/18 # TargetFileName/20 # DefaultTargetFileName/21 )/19 e.Params-E#1/14 ]/9 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # DefaultTargetFileName/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_DefaultTargetFileName]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[12], context[13], context[10], context[11] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Config-GetTargetFileName/4 [/7Config/8 e.Params-B#1/10 (/16 # TargetFileName/18 e.TargetFileName#1/14 )/17 e.Params-E#1/12 ]/9 >/1
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


static refalrts::FnResult func_Configm_GetTargetSuffix(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & Config-GetTargetSuffix/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Config-GetTargetSuffix/4 [/7Config/8 e.new#1/5 ]/9 s.new#2/10 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], functions[efunc_Config], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  // closed e.new#1 as range 5
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & Config-GetTargetSuffix/4 [/7Config/8 e.Params-B#1/13 (/19 # TargetSuffix/21 (/24 e.TargetSuffixExe#1/22 )/25 (/28 e.TargetSuffixLib#1/26 )/29 )/20 e.Params-E#1/15 ]/9 # EXE/10 >/1
    context[11] = context[5];
    context[12] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_EXE], context[10] ) )
      continue;
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[15] = context[11];
      context[16] = context[12];
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_left( context[17], context[18], context[15], context[16] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      context[21] = refalrts::ident_left( identifiers[ident_TargetSuffix], context[17], context[18] );
      if( ! context[21] )
        continue;
      context[22] = 0;
      context[23] = 0;
      context[24] = refalrts::brackets_left( context[22], context[23], context[17], context[18] );
      if( ! context[24] )
        continue;
      refalrts::bracket_pointers(context[24], context[25]);
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[17], context[18] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      if( ! refalrts::empty_seq( context[17], context[18] ) )
        continue;
      // closed e.TargetSuffixExe#1 as range 22
      // closed e.TargetSuffixLib#1 as range 26
      // closed e.Params-E#1 as range 15
      //DEBUG: e.Params-B#1: 13
      //DEBUG: e.TargetSuffixExe#1: 22
      //DEBUG: e.TargetSuffixLib#1: 26
      //DEBUG: e.Params-E#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & Config-GetTargetSuffix/4 [/7Config/8 e.Params-B#1/13 (/19 # TargetSuffix/21 (/24 {REMOVED TILE} )/25 (/28 e.TargetSuffixLib#1/26 )/29 )/20 e.Params-E#1/15 ]/9 # EXE/10 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.TargetSuffixExe#1/22 } Tile{ ]] }
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[22], context[23] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[13], context[14], context[11], context[12] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Config-GetTargetSuffix/4 [/7Config/8 e.Params-B#1/13 (/19 # TargetSuffix/21 (/24 e.TargetSuffixExe#1/22 )/25 (/28 e.TargetSuffixLib#1/26 )/29 )/20 e.Params-E#1/15 ]/9 # LIB/10 >/1
    context[11] = context[5];
    context[12] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_LIB], context[10] ) )
      continue;
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[15] = context[11];
      context[16] = context[12];
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_left( context[17], context[18], context[15], context[16] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      context[21] = refalrts::ident_left( identifiers[ident_TargetSuffix], context[17], context[18] );
      if( ! context[21] )
        continue;
      context[22] = 0;
      context[23] = 0;
      context[24] = refalrts::brackets_left( context[22], context[23], context[17], context[18] );
      if( ! context[24] )
        continue;
      refalrts::bracket_pointers(context[24], context[25]);
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[17], context[18] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      if( ! refalrts::empty_seq( context[17], context[18] ) )
        continue;
      // closed e.TargetSuffixExe#1 as range 22
      // closed e.TargetSuffixLib#1 as range 26
      // closed e.Params-E#1 as range 15
      //DEBUG: e.Params-B#1: 13
      //DEBUG: e.TargetSuffixExe#1: 22
      //DEBUG: e.TargetSuffixLib#1: 26
      //DEBUG: e.Params-E#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & Config-GetTargetSuffix/4 [/7Config/8 e.Params-B#1/13 (/19 # TargetSuffix/21 (/24 e.TargetSuffixExe#1/22 )/25 (/28 {REMOVED TILE} )/29 )/20 e.Params-E#1/15 ]/9 # LIB/10 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.TargetSuffixLib#1/26 } Tile{ ]] }
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[26], context[27] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[13], context[14], context[11], context[12] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Config-GetTargetSuffix/4 [/7Config/8 e.Params#1/11 ]/9 # R/10 >/1
    context[11] = context[5];
    context[12] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_R], context[10] ) )
      continue;
    // closed e.Params#1 as range 11
    //DEBUG: e.Params#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} e.Params#1/11 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: '.'/0 HalfReuse: 'r'/4 HalfReuse: 'a'/7 HalfReuse: 's'/8 }"l-mod"/13 Tile{ HalfReuse: 'u'/9 HalfReuse: 'l'/10 HalfReuse: 'e'/1 ]] }
    refalrts::alloc_chars(vm, context[13], context[14], "l-mod", 5);
    refalrts::reinit_char(context[0], '.');
    refalrts::reinit_char(context[4], 'r');
    refalrts::reinit_char(context[7], 'a');
    refalrts::reinit_char(context[8], 's');
    refalrts::reinit_char(context[9], 'u');
    refalrts::reinit_char(context[10], 'l');
    refalrts::reinit_char(context[1], 'e');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::splice_to_freelist_open( vm, context[8], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Config-GetTargetSuffix/4 [/7Config/8 e.Params#1/5 ]/9 # CompileOnly/10 >/1
  if( ! refalrts::ident_term( identifiers[ident_CompileOnly], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Params#1 as range 5
  //DEBUG: e.Params#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Config-GetTargetSuffix/4 [/7Config/8 e.Params#1/5 ]/9 # CompileOnly/10 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Configm_GetTargetSuffix("Config-GetTargetSuffix", 0U, 0U, func_Configm_GetTargetSuffix);


static refalrts::FnResult func_Configm_SetTargetSuffix(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  // </0 & Config-SetTargetSuffix/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Config-SetTargetSuffix/4 [/7Config/8 e.new#1/5 ]/9 s.new#2/10 e.new#3/2 >/1
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
    // </0 & Config-SetTargetSuffix/4 [/7Config/8 e.Params-B#1/15 (/21 # TargetSuffix/23 (/26 e.OldTargetSuffixExe#1/24 )/27 (/30 e.TargetSuffixLib#1/28 )/31 )/22 e.Params-E#1/17 ]/9 # EXE/10 e.NewTargetSuffixExe#1/13 >/1
    context[11] = context[5];
    context[12] = context[6];
    context[13] = context[2];
    context[14] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_EXE], context[10] ) )
      continue;
    // closed e.NewTargetSuffixExe#1 as range 13
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
      context[23] = refalrts::ident_left( identifiers[ident_TargetSuffix], context[19], context[20] );
      if( ! context[23] )
        continue;
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[19], context[20] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      context[28] = 0;
      context[29] = 0;
      context[30] = refalrts::brackets_left( context[28], context[29], context[19], context[20] );
      if( ! context[30] )
        continue;
      refalrts::bracket_pointers(context[30], context[31]);
      if( ! refalrts::empty_seq( context[19], context[20] ) )
        continue;
      // closed e.OldTargetSuffixExe#1 as range 24
      // closed e.TargetSuffixLib#1 as range 28
      // closed e.Params-E#1 as range 17
      //DEBUG: e.NewTargetSuffixExe#1: 13
      //DEBUG: e.Params-B#1: 15
      //DEBUG: e.OldTargetSuffixExe#1: 24
      //DEBUG: e.TargetSuffixLib#1: 28
      //DEBUG: e.Params-E#1: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} e.OldTargetSuffixExe#1/24 {REMOVED TILE} # EXE/10 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/15 AsIs: (/21 AsIs: # TargetSuffix/23 AsIs: (/26 } Tile{ AsIs: e.NewTargetSuffixExe#1/13 } Tile{ AsIs: )/27 AsIs: (/30 AsIs: e.TargetSuffixLib#1/28 AsIs: )/31 AsIs: )/22 AsIs: e.Params-E#1/17 AsIs: ]/9 } Tile{ ]] }
      refalrts::reinit_ident(context[4], identifiers[ident_Success]);
      refalrts::link_brackets( context[7], context[9] );
      refalrts::link_brackets( context[21], context[22] );
      refalrts::link_brackets( context[30], context[31] );
      refalrts::link_brackets( context[26], context[27] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[27], context[9] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[4], context[26] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[15], context[16], context[11], context[12] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Config-SetTargetSuffix/4 [/7Config/8 e.Params-B#1/11 (/17 # TargetSuffix/19 (/22 e.TargetSuffixExe#1/20 )/23 (/26 e.OldTargetSuffixLib#1/24 )/27 )/18 e.Params-E#1/13 ]/9 # LIB/10 e.NewTargetSuffixLib#1/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_LIB], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.NewTargetSuffixLib#1 as range 2
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
    context[19] = refalrts::ident_left( identifiers[ident_TargetSuffix], context[15], context[16] );
    if( ! context[19] )
      continue;
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_left( context[20], context[21], context[15], context[16] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    context[24] = 0;
    context[25] = 0;
    context[26] = refalrts::brackets_left( context[24], context[25], context[15], context[16] );
    if( ! context[26] )
      continue;
    refalrts::bracket_pointers(context[26], context[27]);
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    // closed e.TargetSuffixExe#1 as range 20
    // closed e.OldTargetSuffixLib#1 as range 24
    // closed e.Params-E#1 as range 13
    //DEBUG: e.NewTargetSuffixLib#1: 2
    //DEBUG: e.Params-B#1: 11
    //DEBUG: e.TargetSuffixExe#1: 20
    //DEBUG: e.OldTargetSuffixLib#1: 24
    //DEBUG: e.Params-E#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} e.OldTargetSuffixLib#1/24 {REMOVED TILE} # LIB/10 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/11 AsIs: (/17 AsIs: # TargetSuffix/19 AsIs: (/22 AsIs: e.TargetSuffixExe#1/20 AsIs: )/23 AsIs: (/26 } Tile{ AsIs: e.NewTargetSuffixLib#1/2 } Tile{ AsIs: )/27 AsIs: )/18 AsIs: e.Params-E#1/13 AsIs: ]/9 } Tile{ ]] }
    refalrts::reinit_ident(context[4], identifiers[ident_Success]);
    refalrts::link_brackets( context[7], context[9] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[26], context[27] );
    refalrts::link_brackets( context[22], context[23] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[27], context[9] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[4], context[26] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[11], context[12], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_SetTargetSuffix("Config-SetTargetSuffix", 0U, 0U, func_Configm_SetTargetSuffix);


static refalrts::FnResult func_Configm_GetSearchFolders(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Config-GetSearchFolders/4 [/7Config/8 e.Params-B#1/10 (/16 # Folders/18 e.Folders#1/14 )/17 e.Params-E#1/12 ]/9 >/1
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
    //TRASH: {REMOVED TILE} </0 & Config-GetSearchFolders/4 [/7Config/8 e.Params-B#1/10 (/16 # Folders/18 {REMOVED TILE} )/17 e.Params-E#1/12 ]/9 >/1 {REMOVED TILE}
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

static refalrts::NativeReference nat_ref_Configm_GetSearchFolders("Config-GetSearchFolders", 0U, 0U, func_Configm_GetSearchFolders);


static refalrts::FnResult func_Configm_SetSearchFolder(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & Config-SetSearchFolder/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Config-SetSearchFolder/4 [/7Config/8 e.new#1/5 ]/9 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], functions[efunc_Config], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Config-SetSearchFolder/4 [/7Config/8 e.Params-B#1/15 (/21 # Folders/23 e.Folders#1/19 )/22 e.Params-E#1/17 ]/9 # REF5RSL/14 >/1
    context[10] = context[5];
    context[11] = context[6];
    context[12] = context[2];
    context[13] = context[3];
    context[14] = refalrts::ident_left( identifiers[ident_REF5RSL], context[12], context[13] );
    if( ! context[14] )
      continue;
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;
    context[15] = 0;
    context[16] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[17] = context[10];
      context[18] = context[11];
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
      //DEBUG: e.Params-B#1: 15
      //DEBUG: e.Folders#1: 19
      //DEBUG: e.Params-E#1: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & Config-SetSearchFolder/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # REF5RSL/14 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/15 AsIs: (/21 AsIs: # Folders/23 AsIs: e.Folders#1/19 HalfReuse: # REF5RSL/22 } Tile{ HalfReuse: )/9 } Tile{ AsIs: e.Params-E#1/17 } Tile{ HalfReuse: ]/1 ]] }
      refalrts::reinit_ident(context[22], identifiers[ident_REF5RSL]);
      refalrts::reinit_close_bracket(context[9]);
      refalrts::reinit_close_adt(context[1]);
      refalrts::link_brackets( context[7], context[1] );
      refalrts::link_brackets( context[21], context[9] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[9], context[9] );
      res = refalrts::splice_evar( res, context[7], context[22] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[15], context[16], context[10], context[11] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Config-SetSearchFolder/4 [/7Config/8 e.Params-B#1/10 (/16 # Folders/18 e.Folders#1/14 )/17 e.Params-E#1/12 ]/9 e.NewFolder#1/2 >/1
  // closed e.NewFolder#1 as range 2
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
    //DEBUG: e.NewFolder#1: 2
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.Folders#1: 14
    //DEBUG: e.Params-E#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} ]/9 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/10 AsIs: (/16 AsIs: # Folders/18 AsIs: e.Folders#1/14 HalfReuse: (/17 } Tile{ AsIs: e.NewFolder#1/2 } Tile{ HalfReuse: )/0 HalfReuse: )/4 } Tile{ AsIs: e.Params-E#1/12 } Tile{ HalfReuse: ]/1 ]] }
    refalrts::reinit_open_bracket(context[17]);
    refalrts::reinit_close_bracket(context[0]);
    refalrts::reinit_close_bracket(context[4]);
    refalrts::reinit_close_adt(context[1]);
    refalrts::link_brackets( context[7], context[1] );
    refalrts::link_brackets( context[16], context[4] );
    refalrts::link_brackets( context[17], context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[7], context[17] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_SetSearchFolder("Config-SetSearchFolder", 0U, 0U, func_Configm_SetSearchFolder);


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
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[9], context[9] );
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
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & Config-GetTargetMode/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Config-GetTargetMode/4 [/7Config/8 e.new#1/5 ]/9 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], functions[efunc_Config], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 5
  do {
    // </0 & Config-GetTargetMode/4 [/7Config/8 e.Params-B#1/12 (/18 # TargetMode/20 # DefaultEXE/21 )/19 e.Params-E#1/14 ]/9 >/1
    context[10] = context[5];
    context[11] = context[6];
    context[12] = 0;
    context[13] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[14] = context[10];
      context[15] = context[11];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[14], context[15] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left( identifiers[ident_TargetMode], context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = refalrts::ident_left( identifiers[ident_DefaultEXE], context[16], context[17] );
      if( ! context[21] )
        continue;
      if( ! refalrts::empty_seq( context[16], context[17] ) )
        continue;
      // closed e.Params-E#1 as range 14
      //DEBUG: e.Params-B#1: 12
      //DEBUG: e.Params-E#1: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & Config-GetTargetMode/4 [/7Config/8 e.Params-B#1/12 (/18 # TargetMode/20 # DefaultEXE/21 )/19 e.Params-E#1/14 ]/9 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # EXE/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_EXE]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[12], context[13], context[10], context[11] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Config-GetTargetMode/4 [/7Config/8 e.Params-B#1/10 (/16 # TargetMode/18 s.TargetMode#1/19 )/17 e.Params-E#1/12 ]/9 >/1
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


static refalrts::FnResult func_Configm_GetIncorporateds(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Config-GetIncorporateds/4 [/7Config/8 e.Params-B#1/10 (/16 # Incorporateds/18 e.Incorporateds#1/14 )/17 e.Params-E#1/12 ]/9 >/1
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
    // closed e.Incorporateds#1 as range 14
    // closed e.Params-E#1 as range 12
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.Incorporateds#1: 14
    //DEBUG: e.Params-E#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Config-GetIncorporateds/4 [/7Config/8 e.Params-B#1/10 (/16 # Incorporateds/18 {REMOVED TILE} )/17 e.Params-E#1/12 ]/9 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Incorporateds#1/14 } Tile{ ]] }
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
  // </0 & Config-AddIncorporated/4 [/7Config/8 e.Params-B#1/10 (/16 # Incorporateds/18 e.Incorporateds#1/14 )/17 e.Params-E#1/12 ]/9 e.IncorporatedName#1/2 >/1
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
  // closed e.IncorporatedName#1 as range 2
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
    // closed e.Incorporateds#1 as range 14
    // closed e.Params-E#1 as range 12
    //DEBUG: e.IncorporatedName#1: 2
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.Incorporateds#1: 14
    //DEBUG: e.Params-E#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/10 AsIs: (/16 AsIs: # Incorporateds/18 AsIs: e.Incorporateds#1/14 HalfReuse: (/17 } Tile{ AsIs: e.IncorporatedName#1/2 } Tile{ HalfReuse: )/9 } Tile{ HalfReuse: )/0 } Tile{ AsIs: e.Params-E#1/12 } Tile{ HalfReuse: ]/1 ]] }
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
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[4], context[17] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_AddIncorporated("Config-AddIncorporated", 0U, 0U, func_Configm_AddIncorporated);


static refalrts::FnResult func_Configm_GetChmodXCommand(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Config-GetChmodXCommand/4 [/7Config/8 e.Params-B#1/10 (/16 # ChmodXCommand/18 e.Command#1/14 )/17 e.Params-E#1/12 ]/9 >/1
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
    context[18] = refalrts::ident_left( identifiers[ident_ChmodXCommand], context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.Command#1 as range 14
    // closed e.Params-E#1 as range 12
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.Command#1: 14
    //DEBUG: e.Params-E#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Config-GetChmodXCommand/4 [/7Config/8 e.Params-B#1/10 (/16 # ChmodXCommand/18 {REMOVED TILE} )/17 e.Params-E#1/12 ]/9 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Command#1/14 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_GetChmodXCommand("Config-GetChmodXCommand", 0U, 0U, func_Configm_GetChmodXCommand);


static refalrts::FnResult func_Configm_SetChmodXCommand(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Config-SetChmodXCommand/4 [/7Config/8 e.Params-B#1/10 (/16 # ChmodXCommand/18 e.OldCommand#1/14 )/17 e.Params-E#1/12 ]/9 e.NewCommand#1/2 >/1
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
  // closed e.NewCommand#1 as range 2
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
    context[18] = refalrts::ident_left( identifiers[ident_ChmodXCommand], context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.OldCommand#1 as range 14
    // closed e.Params-E#1 as range 12
    //DEBUG: e.NewCommand#1: 2
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.OldCommand#1: 14
    //DEBUG: e.Params-E#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} e.OldCommand#1/14 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/10 AsIs: (/16 AsIs: # ChmodXCommand/18 } Tile{ AsIs: e.NewCommand#1/2 } Tile{ AsIs: )/17 AsIs: e.Params-E#1/12 AsIs: ]/9 } Tile{ ]] }
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

static refalrts::NativeReference nat_ref_Configm_SetChmodXCommand("Config-SetChmodXCommand", 0U, 0U, func_Configm_SetChmodXCommand);


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


static refalrts::FnResult func_Configm_GetR5Mode(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & Config-GetR5Mode/4 [/7Config/8 e.Params-B#1/10 (/16 # Refal5Mode/18 s.Mode#1/19 )/17 e.Params-E#1/12 ]/9 >/1
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
    context[18] = refalrts::ident_left( identifiers[ident_Refal5Mode], context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.Params-E#1 as range 12
    if( ! refalrts::svar_left( context[19], context[14], context[15] ) )
      continue;
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.Params-E#1: 12
    //DEBUG: s.Mode#1: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Config-GetR5Mode/4 [/7Config/8 e.Params-B#1/10 (/16 # Refal5Mode/18 s.Mode#1/19 )/17 e.Params-E#1/12 ]/9 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Mode1 #19/1 ]] }
    refalrts::reinit_svar( context[1], context[19] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_GetR5Mode("Config-GetR5Mode", 0U, 0U, func_Configm_GetR5Mode);


static refalrts::FnResult func_Configm_SetR5Mode(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & Config-SetR5Mode/4 [/7Config/8 e.Params-B#1/11 (/17 # Refal5Mode/19 s.OldMode#1/20 )/18 e.Params-E#1/13 ]/9 s.NewMode#1/10 >/1
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
    context[19] = refalrts::ident_left( identifiers[ident_Refal5Mode], context[15], context[16] );
    if( ! context[19] )
      continue;
    // closed e.Params-E#1 as range 13
    if( ! refalrts::svar_left( context[20], context[15], context[16] ) )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    //DEBUG: s.NewMode#1: 10
    //DEBUG: e.Params-B#1: 11
    //DEBUG: e.Params-E#1: 13
    //DEBUG: s.OldMode#1: 20

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} s.OldMode#1/20 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/11 AsIs: (/17 AsIs: # Refal5Mode/19 } Tile{ AsIs: s.NewMode#1/10 } Tile{ AsIs: )/18 AsIs: e.Params-E#1/13 AsIs: ]/9 } Tile{ ]] }
    refalrts::reinit_ident(context[4], identifiers[ident_Success]);
    refalrts::link_brackets( context[7], context[9] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[18], context[9] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[4], context[19] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[11], context[12], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_SetR5Mode("Config-SetR5Mode", 0U, 0U, func_Configm_SetR5Mode);


static refalrts::FnResult func_Configm_GetLogFile(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Config-GetLogFile/4 [/7Config/8 e.Params-B#1/10 (/16 # LogFile/18 e.LogFile#1/14 )/17 e.Params-E#1/12 ]/9 >/1
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
    context[18] = refalrts::ident_left( identifiers[ident_LogFile], context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.LogFile#1 as range 14
    // closed e.Params-E#1 as range 12
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.LogFile#1: 14
    //DEBUG: e.Params-E#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Config-GetLogFile/4 [/7Config/8 e.Params-B#1/10 (/16 # LogFile/18 {REMOVED TILE} )/17 e.Params-E#1/12 ]/9 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.LogFile#1/14 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_GetLogFile("Config-GetLogFile", 0U, 0U, func_Configm_GetLogFile);


static refalrts::FnResult func_Configm_SetLogFile(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Config-SetLogFile/4 [/7Config/8 e.Params-B#1/10 (/16 # LogFile/18 e.OldLogFile#1/14 )/17 e.Params-E#1/12 ]/9 e.NewLogFile#1/2 >/1
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
  // closed e.NewLogFile#1 as range 2
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
    context[18] = refalrts::ident_left( identifiers[ident_LogFile], context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.OldLogFile#1 as range 14
    // closed e.Params-E#1 as range 12
    //DEBUG: e.NewLogFile#1: 2
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.OldLogFile#1: 14
    //DEBUG: e.Params-E#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} e.OldLogFile#1/14 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/10 AsIs: (/16 AsIs: # LogFile/18 } Tile{ AsIs: e.NewLogFile#1/2 } Tile{ AsIs: )/17 AsIs: e.Params-E#1/12 AsIs: ]/9 } Tile{ ]] }
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

static refalrts::NativeReference nat_ref_Configm_SetLogFile("Config-SetLogFile", 0U, 0U, func_Configm_SetLogFile);


static refalrts::FnResult func_Configm_GetTreeOptCycles(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & Config-GetTreeOptCycles/4 [/7Config/8 e.Params-B#1/10 (/16 # TreeOptCycles/18 s.Cycles#1/19 )/17 e.Params-E#1/12 ]/9 >/1
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
    context[18] = refalrts::ident_left( identifiers[ident_TreeOptCycles], context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.Params-E#1 as range 12
    if( ! refalrts::svar_left( context[19], context[14], context[15] ) )
      continue;
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.Params-E#1: 12
    //DEBUG: s.Cycles#1: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Config-GetTreeOptCycles/4 [/7Config/8 e.Params-B#1/10 (/16 # TreeOptCycles/18 s.Cycles#1/19 )/17 e.Params-E#1/12 ]/9 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Cycles1 #19/1 ]] }
    refalrts::reinit_svar( context[1], context[19] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_GetTreeOptCycles("Config-GetTreeOptCycles", 0U, 0U, func_Configm_GetTreeOptCycles);


static refalrts::FnResult func_gen_Configm_SetTreeOptCycles_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & Config-SetTreeOptCycles:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Config-SetTreeOptCycles:1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 (/15 e.new#3/13 )/16 e.new#4/2 >/1
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
  // closed e.new#4 as range 2
  do {
    // </0 & Config-SetTreeOptCycles:1/4 (/7 e.Params-B#1/17 )/8 (/11 e.Params-E#1/19 )/12 (/15 e.NewCycles#1/21 )/16 # Success/25 s.NewCycles#2/26 >/1
    context[17] = context[5];
    context[18] = context[6];
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = context[2];
    context[24] = context[3];
    context[25] = refalrts::ident_left( identifiers[ident_Success], context[23], context[24] );
    if( ! context[25] )
      continue;
    // closed e.Params-B#1 as range 17
    // closed e.Params-E#1 as range 19
    // closed e.NewCycles#1 as range 21
    if( ! refalrts::svar_left( context[26], context[23], context[24] ) )
      continue;
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;
    //DEBUG: e.Params-B#1: 17
    //DEBUG: e.Params-E#1: 19
    //DEBUG: e.NewCycles#1: 21
    //DEBUG: s.NewCycles#2: 26

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} )/12 (/15 e.NewCycles#1/21 {REMOVED TILE} # Success/25 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: # Success/0 HalfReuse: [/4 HalfReuse: & Config/7 AsIs: e.Params-B#1/17 HalfReuse: (/8 HalfReuse: # TreeOptCycles/11 } Tile{ AsIs: s.NewCycles#2/26 } Tile{ AsIs: )/16 } Tile{ AsIs: e.Params-E#1/19 } Tile{ HalfReuse: ]/1 ]] }
    refalrts::reinit_ident(context[0], identifiers[ident_Success]);
    refalrts::reinit_open_adt(context[4]);
    refalrts::reinit_name(context[7], functions[efunc_Config]);
    refalrts::reinit_open_bracket(context[8]);
    refalrts::reinit_ident(context[11], identifiers[ident_TreeOptCycles]);
    refalrts::reinit_close_adt(context[1]);
    refalrts::link_brackets( context[4], context[1] );
    refalrts::link_brackets( context[8], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[26], context[26] );
    refalrts::splice_to_freelist_open( vm, context[11], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Config-SetTreeOptCycles:1/4 (/7 e.Params-B#1/5 )/8 (/11 e.Params-E#1/9 )/12 (/15 e.NewCycles#1/13 )/16 e.OtherResult#2/2 >/1
  // closed e.Params-B#1 as range 5
  // closed e.Params-E#1 as range 9
  // closed e.NewCycles#1 as range 13
  // closed e.OtherResult#2 as range 2
  //DEBUG: e.Params-B#1: 5
  //DEBUG: e.Params-E#1: 9
  //DEBUG: e.NewCycles#1: 13
  //DEBUG: e.OtherResult#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/7 e.Params-B#1/5 )/8 (/11 e.Params-E#1/9 )/12 (/15 {REMOVED TILE} )/16 e.OtherResult#2/2 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: # Fails/0 HalfReuse: # BadValue-MustBeNumber/4 } Tile{ AsIs: e.NewCycles#1/13 } Tile{ ]] }
  refalrts::reinit_ident(context[0], identifiers[ident_Fails]);
  refalrts::reinit_ident(context[4], identifiers[ident_BadValuem_MustBeNumber]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Configm_SetTreeOptCycles_B1("Config-SetTreeOptCycles:1", COOKIE1_, COOKIE2_, func_gen_Configm_SetTreeOptCycles_B1);


static refalrts::FnResult func_Configm_SetTreeOptCycles(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & Config-SetTreeOptCycles/4 [/7Config/8 e.Params-B#1/10 (/16 # TreeOptCycles/18 s.OldCycles#1/19 )/17 e.Params-E#1/12 ]/9 e.NewCycles#1/2 >/1
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
  // closed e.NewCycles#1 as range 2
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
    context[18] = refalrts::ident_left( identifiers[ident_TreeOptCycles], context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.Params-E#1 as range 12
    if( ! refalrts::svar_left( context[19], context[14], context[15] ) )
      continue;
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;
    //DEBUG: e.NewCycles#1: 2
    //DEBUG: e.Params-B#1: 10
    //DEBUG: e.Params-E#1: 12
    //DEBUG: s.OldCycles#1: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.OldCycles#1/19 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Config-SetTreeOptCycles:1/4 HalfReuse: (/7 } Tile{ AsIs: e.Params-B#1/10 } Tile{ AsIs: )/17 } Tile{ AsIs: (/16 } Tile{ AsIs: e.Params-E#1/12 } Tile{ HalfReuse: )/8 } Tile{ HalfReuse: (/18 } e.NewCycles#1/2/20 )/22 </23 Tile{ HalfReuse: & ParseNumber/9 AsIs: e.NewCycles#1/2 AsIs: >/1 } >/24 Tile{ ]] }
    refalrts::copy_evar(vm, context[20], context[21], context[2], context[3]);
    refalrts::alloc_close_bracket(vm, context[22]);
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_close_call(vm, context[24]);
    refalrts::update_name(context[4], functions[efunc_gen_Configm_SetTreeOptCycles_B1]);
    refalrts::reinit_open_bracket(context[7]);
    refalrts::reinit_close_bracket(context[8]);
    refalrts::reinit_open_bracket(context[18]);
    refalrts::reinit_name(context[9], functions[efunc_ParseNumber]);
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[23] );
    refalrts::link_brackets( context[18], context[22] );
    refalrts::link_brackets( context[16], context[8] );
    refalrts::link_brackets( context[7], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[24], context[24] );
    res = refalrts::splice_evar( res, context[9], context[1] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[10], context[11], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_SetTreeOptCycles("Config-SetTreeOptCycles", 0U, 0U, func_Configm_SetTreeOptCycles);


static refalrts::FnResult func_gen_ParseNumber_S3B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & ParseNumber$3:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & ParseNumber$3:1/4 s.Number#2/7 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_left( context[7], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    //DEBUG: s.Number#2: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Number#2/7 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: # Success/0 HalfReuse: s.Number2 #7/4 } Tile{ ]] }
    refalrts::reinit_ident(context[0], identifiers[ident_Success]);
    refalrts::reinit_svar( context[4], context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseNumber$3:1/4 e.BigNumber#2/2 >/1
  // closed e.BigNumber#2 as range 2
  //DEBUG: e.BigNumber#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ParseNumber$3:1/4 e.BigNumber#2/2 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # Fails/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_Fails]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseNumber_S3B1("ParseNumber$3:1", COOKIE1_, COOKIE2_, func_gen_ParseNumber_S3B1);


static refalrts::FnResult func_ParseNumber(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & ParseNumber/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & ParseNumber/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & ParseNumber/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Fails/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_Fails]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ParseNumber/4 e.String-B#1/7 s.NotADigit#1/11 e.String-E#1/9 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[9] = context[5];
      context[10] = context[6];
      if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
        continue;
      // closed e.String-E#1 as range 9
      //DEBUG: e.String-B#1: 7
      //DEBUG: s.NotADigit#1: 11
      //DEBUG: e.String-E#1: 9
      //7: e.String-B#1
      //9: e.String-E#1
      //11: s.NotADigit#1
      //17: s.NotADigit#1

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[12]);
      refalrts::alloc_name(vm, context[14], functions[efunc_gen_ParseNumber_S2C1]);
      refalrts::alloc_open_call(vm, context[15]);
      refalrts::alloc_name(vm, context[16], functions[efunc_IsDigit]);
      refalrts::copy_stvar(vm, context[17], context[11]);
      refalrts::alloc_close_call(vm, context[18]);
      refalrts::alloc_close_call(vm, context[13]);
      refalrts::push_stack( vm, context[13] );
      refalrts::push_stack( vm, context[12] );
      res = refalrts::splice_elem( res, context[13] );
      refalrts::push_stack( vm, context[18] );
      refalrts::push_stack( vm, context[15] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_stvar( res, context[17] );
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
        // </12 & ParseNumber$2?1/16 # False/17 >/13
        context[14] = 0;
        context[15] = 0;
        context[16] = refalrts::call_left( context[14], context[15], context[12], context[13] );
        context[17] = refalrts::ident_left( identifiers[ident_False], context[14], context[15] );
        if( ! context[17] )
          continue;
        if( ! refalrts::empty_seq( context[14], context[15] ) )
          continue;
        //DEBUG: e.String-B#1: 7
        //DEBUG: s.NotADigit#1: 11
        //DEBUG: e.String-E#1: 9

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & ParseNumber/4 e.String-B#1/7 s.NotADigit#1/11 e.String-E#1/9 </12 & ParseNumber$2?1/16 # False/17 >/13 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: # Fails/1 ]] }
        refalrts::reinit_ident(context[1], identifiers[ident_Fails]);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[12], context[13]);
      continue;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseNumber/4 e.Digits#1/2 >/1
  // closed e.Digits#1 as range 2
  //DEBUG: e.Digits#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & ParseNumber$3:1/6 Tile{ AsIs: </0 Reuse: & Numb/4 AsIs: e.Digits#1/2 AsIs: >/1 } >/7 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_ParseNumber_S3B1]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_Numb]);
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

static refalrts::NativeReference nat_ref_ParseNumber("ParseNumber", COOKIE1_, COOKIE2_, func_ParseNumber);


static refalrts::FnResult func_IsDigit(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & IsDigit/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & IsDigit/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & IsDigit/4 s.Digit#1/5 >/1
    //DEBUG: s.Digit#1: 5
    //5: s.Digit#1
    //11: s.Digit#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[6]);
    refalrts::alloc_name(vm, context[8], functions[efunc_gen_IsDigit_S1C1]);
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::alloc_name(vm, context[10], functions[efunc_Type]);
    refalrts::copy_stvar(vm, context[11], context[5]);
    refalrts::alloc_close_call(vm, context[12]);
    refalrts::alloc_close_call(vm, context[7]);
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[6] );
    res = refalrts::splice_elem( res, context[7] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[9] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_stvar( res, context[11] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_elem( res, context[6] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </6 & IsDigit$1?1/10 'D'/11 '0'/12 s._#2/13 >/7
      context[8] = 0;
      context[9] = 0;
      context[10] = refalrts::call_left( context[8], context[9], context[6], context[7] );
      context[11] = refalrts::char_left( 'D', context[8], context[9] );
      if( ! context[11] )
        continue;
      context[12] = refalrts::char_left( '0', context[8], context[9] );
      if( ! context[12] )
        continue;
      if( ! refalrts::svar_left( context[13], context[8], context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[8], context[9] ) )
        continue;
      //DEBUG: s.Digit#1: 5
      //DEBUG: s._#2: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & IsDigit/4 s.Digit#1/5 </6 & IsDigit$1?1/10 'D'/11 '0'/12 s._#2/13 >/7 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_True]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[6], context[7]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & IsDigit/4 s.Digit#1/5 >/1
  //DEBUG: s.Digit#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & IsDigit/4 s.Digit#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_False]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_IsDigit("IsDigit", COOKIE1_, COOKIE2_, func_IsDigit);


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
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[4], context[19] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[11], context[12], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_SetKeepRasls("Config-SetKeepRasls", 0U, 0U, func_Configm_SetKeepRasls);


static refalrts::FnResult func_gen_Configm_GetTempDir_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & Config-GetTempDir:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Config-GetTempDir:1/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Config-GetTempDir:1/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Current/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_Current]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Config-GetTempDir:1/4 e.DirName#2/2 >/1
  // closed e.DirName#2 as range 2
  //DEBUG: e.DirName#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Config-GetTempDir:1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.DirName#2/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Configm_GetTempDir_B1("Config-GetTempDir:1", COOKIE1_, COOKIE2_, func_gen_Configm_GetTempDir_B1);


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
    //TRASH: {REMOVED TILE} [/7Config/8 e.Params-B#1/10 (/16 # TempDir/18 {REMOVED TILE} )/17 e.Params-E#1/12 ]/9 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Config-GetTempDir:1/4 } Tile{ AsIs: e.DirName#1/14 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_Configm_GetTempDir_B1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
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
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[4], context[19] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[11], context[12], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_SetOverwriteExistRasls("Config-SetOverwriteExistRasls", 0U, 0U, func_Configm_SetOverwriteExistRasls);


static refalrts::FnResult func_Configm_GetNoSources(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & Config-GetNoSources/4 [/7Config/8 e.Params-B#1/10 (/16 # NoSources/18 s.Value#1/19 )/17 e.Params-E#1/12 ]/9 >/1
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
    context[18] = refalrts::ident_left( identifiers[ident_NoSources], context[14], context[15] );
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
    //TRASH: {REMOVED TILE} </0 & Config-GetNoSources/4 [/7Config/8 e.Params-B#1/10 (/16 # NoSources/18 s.Value#1/19 )/17 e.Params-E#1/12 ]/9 {REMOVED TILE}
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

static refalrts::NativeReference nat_ref_Configm_GetNoSources("Config-GetNoSources", 0U, 0U, func_Configm_GetNoSources);


static refalrts::FnResult func_Configm_SetNoSources(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & Config-SetNoSources/4 [/7Config/8 e.Params-B#1/11 (/17 # NoSources/19 s.OldValue#1/20 )/18 e.Params-E#1/13 ]/9 s.NewValue#1/10 >/1
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
    context[19] = refalrts::ident_left( identifiers[ident_NoSources], context[15], context[16] );
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
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/4 AsIs: [/7 AsIs: & Config/8 AsIs: e.Params-B#1/11 AsIs: (/17 AsIs: # NoSources/19 } Tile{ AsIs: s.NewValue#1/10 } Tile{ AsIs: )/18 AsIs: e.Params-E#1/13 AsIs: ]/9 } Tile{ ]] }
    refalrts::reinit_ident(context[4], identifiers[ident_Success]);
    refalrts::link_brackets( context[7], context[9] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[18], context[9] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[4], context[19] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[11], context[12], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Configm_SetNoSources("Config-SetNoSources", 0U, 0U, func_Configm_SetNoSources);


//End of file
