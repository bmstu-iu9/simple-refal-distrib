// This file automatically generated from 'srefc.ref'
// Don't edit! Edit 'srefc.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_2216874807_2374776932

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
  efunc_ArgList = 24,
  efunc_Main = 25,
  efunc_Mainm_SwValidCommandLine = 26,
  efunc_ParseCommandLine = 27,
  efunc_LoadFile = 28,
  efunc_gen_Mainm_SwValidCommandLine_S1C1 = 29,
  efunc_Configm_GetNoSources = 30,
  efunc_ReportErrors = 31,
  efunc_Logm_Init = 32,
  efunc_Configm_GetLogFile = 33,
  efunc_Logm_Final = 34,
  efunc_Mainm_SwFoundFiles = 35,
  efunc_LookupSourceFiles = 36,
  efunc_ReportMessages = 37,
  efunc_OnErrors = 38,
  efunc_Exit = 39,
  efunc_CreateErrorFileMark = 40,
  efunc_OnWarnings = 41,
  efunc_Symb = 42,
  efunc_PrintErr = 43,
  efunc_gen_Map_Z1 = 44,
  efunc_gen_Map_Z11 = 45,
  efunc_gen_Map_Z12 = 46,
  efunc_gen_ReportMessages_A1 = 47,
  efunc_gen_ReportMessages_A1B1D2 = 48,
  efunc_CreateErrorFileMarkm_SwFile = 49,
  efunc_Configm_GetErrorFile = 50,
  efunc_SaveFile = 51,
  efunc_Mainm_SwRenamedTargets = 52,
  efunc_RenameTargets = 53,
  efunc_gen_Map_Z2 = 54,
  efunc_gen_Mainm_SwFoundFiles_S2A1 = 55,
  efunc_CorrectTargetFileName = 56,
  efunc_gen_CorrectTargetFileName_S1C1B1S1A4D1 = 57,
  efunc_gen_CorrectTargetFileName_S1C1B1S1A3 = 58,
  efunc_Lower = 59,
  efunc_gen_CorrectTargetFileName_S1C1B1S1A2 = 60,
  efunc_GetBaseName = 61,
  efunc_gen_CorrectTargetFileName_S1C1B1S1A1 = 62,
  efunc_gen_CorrectTargetFileName_S1C1B1S1A1B1D3 = 63,
  efunc_Configm_SetTargetFileName = 64,
  efunc_gen_CorrectTargetFileName_S2B1S2A1 = 65,
  efunc_gen_CorrectTargetFileName_S1C1 = 66,
  efunc_gen_CorrectTargetFileName_S1C1B1 = 67,
  efunc_Configm_GetTargetFileName = 68,
  efunc_gen_CorrectTargetFileName_S1A2 = 69,
  efunc_gen_CorrectTargetFileName_S2B1 = 70,
  efunc_Link = 71,
  efunc_Prout = 72,
  efunc_CompileFiles = 73,
  efunc_gen_Mainm_SwRenamedTargets_S2B1 = 74,
  efunc_gen_Map_Z3 = 75,
  efunc_Configm_GetGrammarCheck = 76,
  efunc_gen_Mainm_SwRenamedTargets_S2A1 = 77,
  efunc_Configm_GetTargetSuffix = 78,
  efunc_gen_CalcTargetFileName_B1 = 79,
  efunc_gen_LookupSourceFiles_L1B1 = 80,
  efunc_FindFiles = 81,
  efunc_gen_Map_Z4 = 82,
  efunc_Configm_GetSearchFolders = 83,
  efunc_gen_LookupSourceFiles_A2 = 84,
  efunc_Configm_GetTargetMode = 85,
  efunc_gen_LookupSourceFiles_A1 = 86,
  efunc_gen_Map_Z5 = 87,
  efunc_ScanCollisions = 88,
  efunc_Configm_GetTempDir = 89,
  efunc_gen_RenameTargets_A1 = 90,
  efunc_GetBaseNameLowerCaseNoExt = 91,
  efunc_GlueNames = 92,
  efunc_gen_GetFileName_S3A2 = 93,
  efunc_gen_GetFileName_S3A1 = 94,
  efunc_RenameLocations = 95,
  efunc_RenameLocationsm_Aux = 96,
  efunc_gen_RenameLocationsm_Aux_A2L1S1C1 = 97,
  efunc_gen_RenameLocationsm_Aux_A2L1S1A2 = 98,
  efunc_FindFreeName = 99,
  efunc_gen_RenameLocationsm_Aux_A2L1S2A1 = 100,
  efunc_AddNumSuffix = 101,
  efunc_gen_MapAccum_Z1 = 102,
  efunc_gen_RenameLocationsm_Aux_A2 = 103,
  efunc_Configm_GetOverwriteExistRasls = 104,
  efunc_gen_RenameLocationsm_Aux_A1 = 105,
  efunc_ExistFile = 106,
  efunc_gen_FindFreeName_B1 = 107,
  efunc_gen_FindFreeName_A1 = 108,
  efunc_gen_CompileFiles_S1L1S3B1 = 109,
  efunc_CompileFile = 110,
  efunc_gen_CompileFiles_S1L1S3A1 = 111,
  efunc_GrammarCheck = 112,
  efunc_gen_Map_Z6 = 113,
  efunc_gen_Map_Z7 = 114,
  efunc_Configm_GetCppCompiler = 115,
  efunc_Configm_GetPrefix = 116,
  efunc_Linkm_Exe = 117,
  efunc_Linkm_Lib = 118,
  efunc_Linkm_R = 119,
  efunc_gen_Link_B1 = 120,
  efunc_Linkm_WithPrefix = 121,
  efunc_Linkm_CppCompile = 122,
  efunc_gen_Linkm_Exe_S4B1 = 123,
  efunc_FindPrefix = 124,
  efunc_ReportWarnings = 125,
  efunc_gen_Linkm_Lib_S5B1 = 126,
  efunc_gen_Linkm_R_S2L1 = 127,
  efunc_Linkm_Aux = 128,
  efunc_Chmodm_Xm_Prefix = 129,
  efunc_CopyPrefix = 130,
  efunc_gen_Linkm_WithPrefix_L1 = 131,
  efunc_CheckReturnCode = 132,
  efunc_System = 133,
  efunc_gen_Chmodm_Xm_Prefix_B1S2A1 = 134,
  efunc_Configm_GetChmodXCommand = 135,
  efunc_gen_Chmodm_Xm_Prefix_B1 = 136,
  efunc_LinkError = 137,
  efunc_CheckCppCompilationSuccessed = 138,
  efunc_EnsureAligned4096 = 139,
  efunc_gen_Linkm_CppCompile_L1A1 = 140,
  efunc_gen_Linkm_CppCompile_L1A1L1 = 141,
  efunc_gen_Linkm_CppCompile_L1 = 142,
  efunc_PreLinkCleanupTemporary = 143,
  efunc_AppendRASLToBinary = 144,
  efunc_AppendReferencesToBinary = 145,
  efunc_AppendIncorporatedToBinary = 146,
  efunc_CleanupIntermediateFiles = 147,
  efunc_PostLinkRename = 148,
  efunc_Configm_GetIncorporateds = 149,
  efunc_gen_Linkm_Aux_A4 = 150,
  efunc_Configm_GetReferences = 151,
  efunc_gen_Linkm_Aux_A3 = 152,
  efunc_CalcTargetFileName = 153,
  efunc_gen_Linkm_Aux_A1 = 154,
  efunc_gen_PreLinkCleanupTemporary_B1S2B1 = 155,
  efunc_RemoveFile = 156,
  efunc_gen_PreLinkCleanupTemporary_B1 = 157,
  efunc_gen_CheckCppCompilationSuccessed_B1 = 158,
  efunc_FClose = 159,
  efunc_AlignToPage = 160,
  efunc_FOpen = 161,
  efunc_gen_EnsureAligned4096_A1 = 162,
  efunc_FWriteBytes = 163,
  efunc_FTell = 164,
  efunc_gen_AlignToPage_B1 = 165,
  efunc_FSeek = 166,
  efunc_gen_AlignToPage_A1 = 167,
  efunc_LoadBytes = 168,
  efunc_gen_Map_Z8 = 169,
  efunc_AppendSimpleBlock = 170,
  efunc_PutBlockStart = 171,
  efunc_gen_AppendRASLToBinary_S2A1 = 172,
  efunc_PutBlockReference = 173,
  efunc_PutBlockIncorporated = 174,
  efunc_gen_Map_Z9 = 175,
  efunc_gen_AppendSimpleBlock_A1 = 176,
  efunc_RenameFile = 177,
  efunc_gen_PostLinkRename_B1 = 178,
  efunc_CheckedRemoveFile = 179,
  efunc_gen_PostLinkRename_A1B1 = 180,
  efunc_gen_PostLinkRename_A1 = 181,
  efunc_gen_CheckedRemoveFile_B1 = 182,
  efunc_gen_CleanupIntermediateFiles_S1C1 = 183,
  efunc_Configm_GetKeepRasls = 184,
  efunc_gen_Map_Z10 = 185,
  efunc_DoFindPrefix = 186,
  efunc_gen_FindPrefix_A1B1 = 187,
  efunc_gen_FindPrefix_A1 = 188,
  efunc_gen_DoFindPrefix_S1B1 = 189,
  efunc_gen_DoFindPrefix_S1A1 = 190,
  efunc_DirectorySeparator = 191,
  efunc_SaveBytes = 192,
  efunc_gen_GetBaseName_S1C1 = 193,
  efunc_IsDirectorySeparator = 194,
  efunc_gen_ReportMessages_L1D1 = 195,
  efunc_gen_Mainm_SwFoundFiles_S1L1D4 = 196,
  efunc_gen_Mainm_SwRenamedTargets_S1L1D3 = 197,
  efunc_gen_LookupSourceFiles_L1D1 = 198,
  efunc_GetFileName = 199,
  efunc_gen_DoMapAccum_Z1 = 200,
  efunc_gen_CompileFiles_S1L1D3 = 201,
  efunc_gen_CompileFiles_S2L1D2 = 202,
  efunc_gen_AppendRASLToBinary_S2L1D2 = 203,
  efunc_gen_AppendSimpleBlock_L1D1 = 204,
  efunc_gen_CleanupIntermediateFiles_S2L1D2 = 205,
  efunc_gen_DoMapAccumm_Aux_Z1 = 206,
  efunc_gen_RenameLocationsm_Aux_A2L1 = 207,
};


enum ident {
  ident_k43_ = 0,
  ident_k47_ = 1,
  ident_k37_ = 2,
  ident_k42_ = 3,
  ident_k63_ = 4,
  ident_m_ = 5,
  ident_CommandLine = 6,
  ident_Success = 7,
  ident_False = 8,
  ident_Fails = 9,
  ident_NoConfig = 10,
  ident_NoErrorFile = 11,
  ident_ErrorFile = 12,
  ident_NotFound = 13,
  ident_Source = 14,
  ident_Output = 15,
  ident_OutputWithNative = 16,
  ident_FromFirstFile = 17,
  ident_DefaultTargetFileName = 18,
  ident_FromCommandLine = 19,
  ident_Collision = 20,
  ident_NormalRun = 21,
  ident_GrammarCheck = 22,
  ident_NoNative = 23,
  ident_True = 24,
  ident_RASL = 25,
  ident_Generated = 26,
  ident_Native = 27,
  ident_Given = 28,
  ident_EXE = 29,
  ident_LIB = 30,
  ident_R = 31,
  ident_CompileOnly = 32,
  ident_NoCppCompiler = 33,
  ident_END = 34,
  ident_Current = 35,
  ident_REF5RSL = 36,
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

static refalrts::NativeReference nat_ref_Mu("Mu", 2216874807U, 2374776932U, func_Mu);


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
    refalrts::alloc_number(vm, context[9], 2374776932UL);
    refalrts::update_name(context[4], functions[efunc_u_u_FindMuPtr]);
    refalrts::reinit_number(context[5], 2216874807UL);
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
  refalrts::reinit_number(context[5], 2216874807UL);
  refalrts::reinit_number(context[7], 2374776932UL);
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

static refalrts::NativeReference nat_ref_gen_u_u_Mum_Aux_S13B1("__Mu-Aux$13:1", 2216874807U, 2374776932U, func_gen_u_u_Mum_Aux_S13B1);


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

static refalrts::NativeReference nat_ref_u_u_Mum_Aux("__Mu-Aux", 2216874807U, 2374776932U, func_u_u_Mum_Aux);


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

static refalrts::NativeReference nat_ref_Residue("Residue", 2216874807U, 2374776932U, func_Residue);


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

static refalrts::NativeReference nat_ref_Apply("Apply", 2216874807U, 2374776932U, func_Apply);


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

static refalrts::NativeReference nat_ref_Map("Map", 2216874807U, 2374776932U, func_Map);


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

static refalrts::NativeReference nat_ref_Reduce("Reduce", 2216874807U, 2374776932U, func_Reduce);


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

static refalrts::NativeReference nat_ref_Fetch("Fetch", 2216874807U, 2374776932U, func_Fetch);


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

static refalrts::NativeReference nat_ref_MapAccum("MapAccum", 2216874807U, 2374776932U, func_MapAccum);


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

static refalrts::NativeReference nat_ref_DoMapAccum("DoMapAccum", 2216874807U, 2374776932U, func_DoMapAccum);


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

static refalrts::NativeReference nat_ref_DoMapAccumm_Aux("DoMapAccum-Aux", 2216874807U, 2374776932U, func_DoMapAccumm_Aux);


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

static refalrts::NativeReference nat_ref_MapReduce("MapReduce", 2216874807U, 2374776932U, func_MapReduce);


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

static refalrts::NativeReference nat_ref_UnBracket("UnBracket", 2216874807U, 2374776932U, func_UnBracket);


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

static refalrts::NativeReference nat_ref_DelAccumulator("DelAccumulator", 2216874807U, 2374776932U, func_DelAccumulator);


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

static refalrts::NativeReference nat_ref_Inc("Inc", 2216874807U, 2374776932U, func_Inc);


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

static refalrts::NativeReference nat_ref_Dec("Dec", 2216874807U, 2374776932U, func_Dec);


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

static refalrts::NativeReference nat_ref_gen_Pipe_S2L1("Pipe$2\\1", 2216874807U, 2374776932U, func_gen_Pipe_S2L1);


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

static refalrts::NativeReference nat_ref_gen_Pipe_S3L1("Pipe$3\\1", 2216874807U, 2374776932U, func_gen_Pipe_S3L1);


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

static refalrts::NativeReference nat_ref_Pipe("Pipe", 2216874807U, 2374776932U, func_Pipe);


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

static refalrts::NativeReference nat_ref_Seq("Seq", 2216874807U, 2374776932U, func_Seq);


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
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
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
    // </0 & Main/4 (/7 e.ProgName#1/9 )/8 (/15 '@'/17 e.Config#1/13 )/16 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[11], context[12] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = refalrts::char_left( '@', context[13], context[14] );
    if( ! context[17] )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    // closed e.ProgName#1 as range 9
    // closed e.Config#1 as range 13
    //DEBUG: e.ProgName#1: 9
    //DEBUG: e.Config#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} e.ProgName#1/9 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Main-SwValidCommandLine/4 AsIs: (/7 } e.Config#1/13/18 )/20 </21 Tile{ HalfReuse: & ParseCommandLine/8 HalfReuse: </15 HalfReuse: & LoadFile/17 AsIs: e.Config#1/13 HalfReuse: >/16 AsIs: >/1 } >/22 Tile{ ]] }
    refalrts::copy_evar(vm, context[18], context[19], context[13], context[14]);
    refalrts::alloc_close_bracket(vm, context[20]);
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_close_call(vm, context[22]);
    refalrts::update_name(context[4], functions[efunc_Mainm_SwValidCommandLine]);
    refalrts::reinit_name(context[8], functions[efunc_ParseCommandLine]);
    refalrts::reinit_open_call(context[15]);
    refalrts::reinit_name(context[17], functions[efunc_LoadFile]);
    refalrts::reinit_close_call(context[16]);
    refalrts::push_stack( vm, context[22] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[15] );
    refalrts::link_brackets( context[7], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[8], context[1] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Main/4 (/7 e.ProgName#1/5 )/8 e.Arguments#1/2 >/1
  // closed e.ProgName#1 as range 5
  // closed e.Arguments#1 as range 2
  //DEBUG: e.ProgName#1: 5
  //DEBUG: e.Arguments#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} e.ProgName#1/5 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Main-SwValidCommandLine/4 HalfReuse: # CommandLine/7 } </9 Tile{ HalfReuse: & ParseCommandLine/8 AsIs: e.Arguments#1/2 AsIs: >/1 } >/10 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::update_name(context[4], functions[efunc_Mainm_SwValidCommandLine]);
  refalrts::reinit_ident(context[7], identifiers[ident_CommandLine]);
  refalrts::reinit_name(context[8], functions[efunc_ParseCommandLine]);
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[8], context[1] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Main("Main", 2216874807U, 2374776932U, func_Main);


static refalrts::FnResult func_Mainm_SwValidCommandLine(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & Main-SwValidCommandLine/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Main-SwValidCommandLine/4 t.new#1/5 s.new#2/7 e.new#3/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & Main-SwValidCommandLine/4 t.new#4/5 # Success/7 t.new#5/10 e.new#6/8 >/1
    context[8] = context[2];
    context[9] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Success], context[7] ) )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[8], context[9] );
    if( ! context[11] )
      continue;
    // closed e.new#6 as range 8
    do {
      // </0 & Main-SwValidCommandLine/4 t.CommandLineSource#1/5 # Success/7 t.Config#1/10 >/1
      if( ! refalrts::empty_seq( context[8], context[9] ) )
        continue;
      //DEBUG: t.CommandLineSource#1: 5
      //DEBUG: t.Config#1: 10
      //5: t.CommandLineSource#1
      //10: t.Config#1
      //17: t.Config#1

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[12]);
      refalrts::alloc_name(vm, context[14], functions[efunc_gen_Mainm_SwValidCommandLine_S1C1]);
      refalrts::alloc_open_call(vm, context[15]);
      refalrts::alloc_name(vm, context[16], functions[efunc_Configm_GetNoSources]);
      refalrts::copy_stvar(vm, context[17], context[10]);
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
        // </12 & Main-SwValidCommandLine$1?1/16 # False/17 >/13
        context[14] = 0;
        context[15] = 0;
        context[16] = refalrts::call_left( context[14], context[15], context[12], context[13] );
        context[17] = refalrts::ident_left( identifiers[ident_False], context[14], context[15] );
        if( ! context[17] )
          continue;
        if( ! refalrts::empty_seq( context[14], context[15] ) )
          continue;
        //DEBUG: t.CommandLineSource#1: 5
        //DEBUG: t.Config#1: 10

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReportErrors/4 AsIs: t.CommandLineSource#1/5 } Tile{ AsIs: t.Config#1/10 } (/18 Tile{ HalfReuse: 1/7 }"no source files in command l"/19 Tile{ HalfReuse: 'i'/12 HalfReuse: 'n'/16 HalfReuse: 'e'/17 HalfReuse: )/13 AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[18]);
        refalrts::alloc_chars(vm, context[19], context[20], "no source files in command l", 28);
        refalrts::update_name(context[4], functions[efunc_ReportErrors]);
        refalrts::reinit_number(context[7], 1UL);
        refalrts::reinit_char(context[12], 'i');
        refalrts::reinit_char(context[16], 'n');
        refalrts::reinit_char(context[17], 'e');
        refalrts::reinit_close_bracket(context[13]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[18], context[13] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[12];
        res = refalrts::splice_evar( res, context[19], context[20] );
        res = refalrts::splice_evar( res, context[7], context[7] );
        res = refalrts::splice_evar( res, context[18], context[18] );
        res = refalrts::splice_evar( res, context[10], context[11] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[12], context[13]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Main-SwValidCommandLine/4 t.CommandLineSource#1/5 # Success/7 t.Config#1/10 e.Files#1/12 >/1
    context[12] = context[8];
    context[13] = context[9];
    // closed e.Files#1 as range 12
    //DEBUG: t.CommandLineSource#1: 5
    //DEBUG: t.Config#1: 10
    //DEBUG: e.Files#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </14 & Log-Init/15 </16 & Config-GetLogFile/17 t.Config#1/10/18 >/20 >/21 Tile{ AsIs: </0 Reuse: & Main-SwFoundFiles/4 AsIs: t.CommandLineSource#1/5 } t.Config#1/10/22 </24 Tile{ HalfReuse: & LookupSourceFiles/7 AsIs: t.Config#1/10 AsIs: e.Files#1/12 AsIs: >/1 } >/25 </26 & Log-Final/27 >/28 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_Logm_Init]);
    refalrts::alloc_open_call(vm, context[16]);
    refalrts::alloc_name(vm, context[17], functions[efunc_Configm_GetLogFile]);
    refalrts::copy_evar(vm, context[18], context[19], context[10], context[11]);
    refalrts::alloc_close_call(vm, context[20]);
    refalrts::alloc_close_call(vm, context[21]);
    refalrts::copy_evar(vm, context[22], context[23], context[10], context[11]);
    refalrts::alloc_open_call(vm, context[24]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::alloc_open_call(vm, context[26]);
    refalrts::alloc_name(vm, context[27], functions[efunc_Logm_Final]);
    refalrts::alloc_close_call(vm, context[28]);
    refalrts::update_name(context[4], functions[efunc_Mainm_SwFoundFiles]);
    refalrts::reinit_name(context[7], functions[efunc_LookupSourceFiles]);
    refalrts::push_stack( vm, context[28] );
    refalrts::push_stack( vm, context[26] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[25], context[28] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    res = refalrts::splice_evar( res, context[22], context[24] );
    res = refalrts::splice_evar( res, context[0], context[6] );
    res = refalrts::splice_evar( res, context[14], context[21] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Main-SwValidCommandLine/4 t.CommandLineSource#1/5 # Fails/7 e.Errors#1/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_Fails], context[7] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Errors#1 as range 2
  //DEBUG: t.CommandLineSource#1: 5
  //DEBUG: e.Errors#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReportErrors/4 AsIs: t.CommandLineSource#1/5 Reuse: # NoConfig/7 AsIs: e.Errors#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_ReportErrors]);
  refalrts::update_ident(context[7], identifiers[ident_NoConfig]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Mainm_SwValidCommandLine("Main-SwValidCommandLine", 2216874807U, 2374776932U, func_Mainm_SwValidCommandLine);


static refalrts::FnResult func_ReportErrors(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & ReportErrors/4 t.CommandLineSource#1/5 t.Config#1/7 e.Errors#1/2 >/1
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
  // closed e.Errors#1 as range 2
  //DEBUG: t.CommandLineSource#1: 5
  //DEBUG: t.Config#1: 7
  //DEBUG: e.Errors#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & ReportMessages/10 (/11 & OnErrors/12"Erro"/13 Tile{ HalfReuse: 'r'/0 HalfReuse: )/4 AsIs: t.CommandLineSource#1/5 AsIs: t.Config#1/7 AsIs: e.Errors#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_ReportMessages]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_OnErrors]);
  refalrts::alloc_chars(vm, context[13], context[14], "Erro", 4);
  refalrts::reinit_char(context[0], 'r');
  refalrts::reinit_close_bracket(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[11], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[9], context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ReportErrors("ReportErrors", 2216874807U, 2374776932U, func_ReportErrors);


static refalrts::FnResult func_OnErrors(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & OnErrors/4 t.Config#1/5 >/1
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
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CreateErrorFileMark/4 AsIs: t.Config#1/5 AsIs: >/1 } </7 & Exit/8 1/9 >/10 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_Exit]);
  refalrts::alloc_number(vm, context[9], 1UL);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::update_name(context[4], functions[efunc_CreateErrorFileMark]);
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OnErrors("OnErrors", 2216874807U, 2374776932U, func_OnErrors);


static refalrts::FnResult func_ReportWarnings(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & ReportWarnings/4 t.CommandLineSource#1/5 t.Config#1/7 e.Warnings#1/2 >/1
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
  // closed e.Warnings#1 as range 2
  //DEBUG: t.CommandLineSource#1: 5
  //DEBUG: t.Config#1: 7
  //DEBUG: e.Warnings#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & ReportMessages/10 (/11 & OnWarnings/12"Warnin"/13 Tile{ HalfReuse: 'g'/0 HalfReuse: )/4 AsIs: t.CommandLineSource#1/5 AsIs: t.Config#1/7 AsIs: e.Warnings#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_ReportMessages]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_OnWarnings]);
  refalrts::alloc_chars(vm, context[13], context[14], "Warnin", 6);
  refalrts::reinit_char(context[0], 'g');
  refalrts::reinit_close_bracket(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[11], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[9], context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ReportWarnings("ReportWarnings", 2216874807U, 2374776932U, func_ReportWarnings);


static refalrts::FnResult func_OnWarnings(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & OnWarnings/4 t.Config#1/5 >/1
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
  //TRASH: {REMOVED TILE} </0 & OnWarnings/4 t.Config#1/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OnWarnings("OnWarnings", 2216874807U, 2374776932U, func_OnWarnings);


static refalrts::FnResult func_gen_ReportMessages_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & ReportMessages\1/4 (/7 e.Prefix#2/5 )/8 (/11 e.Banner#1/9 )/12 (/15 s.Pos#3/17 e.Message#3/13 )/16 >/1
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
  // closed e.Prefix#2 as range 5
  // closed e.Banner#1 as range 9
  if( ! refalrts::svar_left( context[17], context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Message#3 as range 13
  //DEBUG: e.Prefix#2: 5
  //DEBUG: e.Banner#1: 9
  //DEBUG: s.Pos#3: 17
  //DEBUG: e.Message#3: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintErr/4 } Tile{ AsIs: e.Prefix#2/5 } Tile{ HalfReuse: </7 } & Symb/18 Tile{ AsIs: s.Pos#3/17 } Tile{ HalfReuse: >/16 } Tile{ HalfReuse: ':'/8 HalfReuse: ' '/11 AsIs: e.Banner#1/9 HalfReuse: ':'/12 HalfReuse: ' '/15 } Tile{ AsIs: e.Message#3/13 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[18], functions[efunc_Symb]);
  refalrts::update_name(context[4], functions[efunc_PrintErr]);
  refalrts::reinit_open_call(context[7]);
  refalrts::reinit_close_call(context[16]);
  refalrts::reinit_char(context[8], ':');
  refalrts::reinit_char(context[11], ' ');
  refalrts::reinit_char(context[12], ':');
  refalrts::reinit_char(context[15], ' ');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[8], context[15] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ReportMessages_L1("ReportMessages\\1", 2216874807U, 2374776932U, func_gen_ReportMessages_L1);


static refalrts::FnResult func_gen_ReportMessages_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & ReportMessages=1/4 (/7 e.Banner#1/5 )/8 (/11 e.Messages#1/9 )/12 s.FnAfterMessages#1/13 t.Config#1/14 e.Prefix#2/2 >/1
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
  // closed e.Banner#1 as range 5
  // closed e.Messages#1 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[15] = refalrts::tvar_left( context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  // closed e.Prefix#2 as range 2
  //DEBUG: e.Banner#1: 5
  //DEBUG: e.Messages#1: 9
  //DEBUG: s.FnAfterMessages#1: 13
  //DEBUG: t.Config#1: 14
  //DEBUG: e.Prefix#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@1/4 } Tile{ AsIs: e.Prefix#2/2 } Tile{ AsIs: (/7 AsIs: e.Banner#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Messages#1/9 AsIs: )/12 } >/16 </17 Tile{ AsIs: s.FnAfterMessages#1/13 AsIs: t.Config#1/14 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::alloc_open_call(vm, context[17]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[15] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[7], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ReportMessages_A1("ReportMessages=1", 2216874807U, 2374776932U, func_gen_ReportMessages_A1);


static refalrts::FnResult func_gen_ReportMessages_A1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & ReportMessages=1:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ReportMessages=1:1/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ReportMessages=1:1/4 (/5 e.ConfigFile#2/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    // closed e.ConfigFile#2 as range 7
    //DEBUG: e.ConfigFile#2: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & ReportMessages=1:1/4 (/5 {REMOVED TILE} )/6 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.ConfigFile#2/7 } Tile{ HalfReuse: ':'/1 ]] }
    refalrts::reinit_char(context[1], ':');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ReportMessages=1:1/4 # CommandLine/5 >/1
  if( ! refalrts::ident_term( identifiers[ident_CommandLine], context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: 'C'/0 HalfReuse: 'o'/4 HalfReuse: 'm'/5 HalfReuse: 'm'/1 }"and line argument "/7 Tile{ ]] }
  refalrts::alloc_chars(vm, context[7], context[8], "and line argument ", 18);
  refalrts::reinit_char(context[0], 'C');
  refalrts::reinit_char(context[4], 'o');
  refalrts::reinit_char(context[5], 'm');
  refalrts::reinit_char(context[1], 'm');
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ReportMessages_A1B1("ReportMessages=1:1", 2216874807U, 2374776932U, func_gen_ReportMessages_A1B1);


static refalrts::FnResult func_ReportMessages(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & ReportMessages/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ReportMessages/4 (/7 s.new#1/9 e.new#2/5 )/8 t.new#3/10 t.new#4/12 e.new#5/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 5
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  context[13] = refalrts::tvar_left( context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#5 as range 2
  do {
    // </0 & ReportMessages/4 (/7 s.FnAfterMessages#1/9 e.Banner#1/14 )/8 (/10 e.#0/18 )/11 t.Config#1/12 e.Messages#1/16 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[2];
    context[17] = context[3];
    context[18] = 0;
    context[19] = 0;
    if( ! refalrts::brackets_term( context[18], context[19], context[10] ) )
      continue;
    // closed e.Banner#1 as range 14
    // closed e.#0 as range 18
    // closed e.Messages#1 as range 16
    //DEBUG: t.Config#1: 12
    //DEBUG: s.FnAfterMessages#1: 9
    //DEBUG: e.Banner#1: 14
    //DEBUG: e.#0: 18
    //DEBUG: e.Messages#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.FnAfterMessages#1/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@11/4 } Tile{ AsIs: e.#0/18 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Banner#1/14 } Tile{ AsIs: )/8 AsIs: (/10 } Tile{ AsIs: e.Messages#1/16 } )/20 >/21 </22 Tile{ HalfReuse: s.FnAfterMessages1 #9/11 AsIs: t.Config#1/12 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_bracket(vm, context[20]);
    refalrts::alloc_close_call(vm, context[21]);
    refalrts::alloc_open_call(vm, context[22]);
    refalrts::update_name(context[4], functions[efunc_gen_Map_Z11]);
    refalrts::reinit_svar( context[11], context[9] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[22] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[10], context[20] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[13] );
    res = refalrts::splice_evar( res, context[20], context[22] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[8], context[10] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ReportMessages/4 (/7 s.FnAfterMessages#1/9 e.Banner#1/14 )/8 # CommandLine/10 t.Config#1/12 e.Messages#1/16 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[2];
    context[17] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_CommandLine], context[10] ) )
      continue;
    // closed e.Banner#1 as range 14
    // closed e.Messages#1 as range 16
    //DEBUG: t.Config#1: 12
    //DEBUG: s.FnAfterMessages#1: 9
    //DEBUG: e.Banner#1: 14
    //DEBUG: e.Messages#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.FnAfterMessages#1/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@12/4 } Tile{ AsIs: e.Banner#1/14 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Messages#1/16 } )/18 >/19 Tile{ HalfReuse: </8 HalfReuse: s.FnAfterMessages1 #9/10 AsIs: t.Config#1/12 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_bracket(vm, context[18]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::update_name(context[4], functions[efunc_gen_Map_Z12]);
    refalrts::reinit_open_call(context[8]);
    refalrts::reinit_svar( context[10], context[9] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[8], context[13] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ReportMessages/4 (/7 s.FnAfterMessages#1/9 e.Banner#1/5 )/8 t.CommandLineSource#1/10 t.Config#1/12 e.Messages#1/2 >/1
  // closed e.Banner#1 as range 5
  // closed e.Messages#1 as range 2
  //DEBUG: t.CommandLineSource#1: 10
  //DEBUG: t.Config#1: 12
  //DEBUG: s.FnAfterMessages#1: 9
  //DEBUG: e.Banner#1: 5
  //DEBUG: e.Messages#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReportMessages=1/4 AsIs: (/7 } Tile{ AsIs: e.Banner#1/5 } )/14 (/15 Tile{ AsIs: e.Messages#1/2 } )/16 Tile{ AsIs: s.FnAfterMessages#1/9 } Tile{ AsIs: t.Config#1/12 } </17 Tile{ HalfReuse: & ReportMessages=1:1*2/8 AsIs: t.CommandLineSource#1/10 } >/18 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[14]);
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::alloc_close_bracket(vm, context[16]);
  refalrts::alloc_open_call(vm, context[17]);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::update_name(context[4], functions[efunc_gen_ReportMessages_A1]);
  refalrts::reinit_name(context[8], functions[efunc_gen_ReportMessages_A1B1D2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[17] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[7], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ReportMessages("ReportMessages", 2216874807U, 2374776932U, func_ReportMessages);


static refalrts::FnResult func_CreateErrorFileMark(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & CreateErrorFileMark/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CreateErrorFileMark/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & CreateErrorFileMark/4 # NoConfig/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_NoConfig], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CreateErrorFileMark/4 # NoConfig/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CreateErrorFileMark/4 t.Config#1/5 >/1
  //DEBUG: t.Config#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 & CreateErrorFileMark-SwFile/8 Tile{ AsIs: </0 Reuse: & Config-GetErrorFile/4 AsIs: t.Config#1/5 AsIs: >/1 } >/9 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_CreateErrorFileMarkm_SwFile]);
  refalrts::alloc_close_call(vm, context[9]);
  refalrts::update_name(context[4], functions[efunc_Configm_GetErrorFile]);
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

static refalrts::NativeReference nat_ref_CreateErrorFileMark("CreateErrorFileMark", 2216874807U, 2374776932U, func_CreateErrorFileMark);


static refalrts::FnResult func_CreateErrorFileMarkm_SwFile(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & CreateErrorFileMark-SwFile/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CreateErrorFileMark-SwFile/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & CreateErrorFileMark-SwFile/4 # NoErrorFile/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_NoErrorFile], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CreateErrorFileMark-SwFile/4 # NoErrorFile/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CreateErrorFileMark-SwFile/4 # ErrorFile/5 e.FileName#1/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_ErrorFile], context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#1 as range 2
  //DEBUG: e.FileName#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & SaveFile/4 HalfReuse: (/5 AsIs: e.FileName#1/2 HalfReuse: )/1 } >/6 Tile{ ]] }
  refalrts::alloc_close_call(vm, context[6]);
  refalrts::update_name(context[4], functions[efunc_SaveFile]);
  refalrts::reinit_open_bracket(context[5]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[5], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CreateErrorFileMarkm_SwFile("CreateErrorFileMark-SwFile", 2216874807U, 2374776932U, func_CreateErrorFileMarkm_SwFile);


static refalrts::FnResult func_gen_Mainm_SwFoundFiles_S1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & Main-SwFoundFiles$1\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Main-SwFoundFiles$1\1/4 (/7 s.new#1/9 s.new#2/10 e.new#3/5 )/8 >/1
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
    // </0 & Main-SwFoundFiles$1\1/4 (/7 s.Pos#2/9 # NotFound/10 e.FileName#2/11 )/8 >/1
    context[11] = context[5];
    context[12] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_NotFound], context[10] ) )
      continue;
    // closed e.FileName#2 as range 11
    //DEBUG: s.Pos#2: 9
    //DEBUG: e.FileName#2: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#2/9 HalfReuse: 'f'/10 } 'i'/13 Tile{ HalfReuse: 'l'/0 HalfReuse: 'e'/4 } ' '/14 Tile{ AsIs: e.FileName#2/11 }" is not foun"/15 Tile{ HalfReuse: 'd'/8 HalfReuse: )/1 ]] }
    refalrts::alloc_char(vm, context[13], 'i');
    refalrts::alloc_char(vm, context[14], ' ');
    refalrts::alloc_chars(vm, context[15], context[16], " is not foun", 12);
    refalrts::reinit_char(context[10], 'f');
    refalrts::reinit_char(context[0], 'l');
    refalrts::reinit_char(context[4], 'e');
    refalrts::reinit_char(context[8], 'd');
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[7], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Main-SwFoundFiles$1\1/4 (/7 s.Pos#2/9 # Source/10 (/15 s.Dialect#2/17 e.Source#2/13 )/16 e.Output#2/11 )/8 >/1
    context[11] = context[5];
    context[12] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_Source], context[10] ) )
      continue;
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[11], context[12] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    // closed e.Output#2 as range 11
    if( ! refalrts::svar_left( context[17], context[13], context[14] ) )
      continue;
    // closed e.Source#2 as range 13
    //DEBUG: s.Pos#2: 9
    //DEBUG: e.Output#2: 11
    //DEBUG: s.Dialect#2: 17
    //DEBUG: e.Source#2: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Main-SwFoundFiles$1\1/4 (/7 s.Pos#2/9 # Source/10 (/15 s.Dialect#2/17 e.Source#2/13 )/16 e.Output#2/11 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Main-SwFoundFiles$1\1/4 (/7 s.Pos#2/9 # Output/10 e.Output#2/11 )/8 >/1
    context[11] = context[5];
    context[12] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_Output], context[10] ) )
      continue;
    // closed e.Output#2 as range 11
    //DEBUG: s.Pos#2: 9
    //DEBUG: e.Output#2: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Main-SwFoundFiles$1\1/4 (/7 s.Pos#2/9 # Output/10 e.Output#2/11 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Main-SwFoundFiles$1\1/4 (/7 s.Pos#2/9 # OutputWithNative/10 (/13 e.Output#2/11 )/14 e.NativeOutput#2/5 )/8 >/1
  if( ! refalrts::ident_term( identifiers[ident_OutputWithNative], context[10] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[5], context[6] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.Output#2 as range 11
  // closed e.NativeOutput#2 as range 5
  //DEBUG: s.Pos#2: 9
  //DEBUG: e.Output#2: 11
  //DEBUG: e.NativeOutput#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Main-SwFoundFiles$1\1/4 (/7 s.Pos#2/9 # OutputWithNative/10 (/13 e.Output#2/11 )/14 e.NativeOutput#2/5 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Mainm_SwFoundFiles_S1L1("Main-SwFoundFiles$1\\1", 2216874807U, 2374776932U, func_gen_Mainm_SwFoundFiles_S1L1);


static refalrts::FnResult func_gen_Mainm_SwFoundFiles_S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & Main-SwFoundFiles$2=1/4 t.CommandLineSource#1/5 (/9 e.Files#1/7 )/10 t.Config#2/11 >/1
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
  // closed e.Files#1 as range 7
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.CommandLineSource#1: 5
  //DEBUG: e.Files#1: 7
  //DEBUG: t.Config#2: 11

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Main-SwRenamedTargets/4 AsIs: t.CommandLineSource#1/5 } t.Config#2/11/13 Tile{ HalfReuse: </9 } Tile{ HalfReuse: & RenameTargets/10 AsIs: t.Config#2/11 } Tile{ AsIs: e.Files#1/7 } >/15 Tile{ AsIs: >/1 ]] }
  refalrts::copy_evar(vm, context[13], context[14], context[11], context[12]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::update_name(context[4], functions[efunc_Mainm_SwRenamedTargets]);
  refalrts::reinit_open_call(context[9]);
  refalrts::reinit_name(context[10], functions[efunc_RenameTargets]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[10], context[12] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Mainm_SwFoundFiles_S2A1("Main-SwFoundFiles$2=1", 2216874807U, 2374776932U, func_gen_Mainm_SwFoundFiles_S2A1);


static refalrts::FnResult func_Mainm_SwFoundFiles(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & Main-SwFoundFiles/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Main-SwFoundFiles/4 t.new#1/5 t.new#2/7 e.new#3/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & Main-SwFoundFiles/4 t.CommandLineSource#1/5 t.Config#1/7 e.Files-B#1/11 (/17 s.Pos#1/19 # NotFound/20 e.FileName#1/15 )/18 e.Files-E#1/13 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[11] = 0;
    context[12] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[13] = context[9];
      context[14] = context[10];
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::brackets_left( context[15], context[16], context[13], context[14] );
      if( ! context[17] )
        continue;
      refalrts::bracket_pointers(context[17], context[18]);
      // closed e.Files-E#1 as range 13
      if( ! refalrts::svar_left( context[19], context[15], context[16] ) )
        continue;
      context[20] = refalrts::ident_left( identifiers[ident_NotFound], context[15], context[16] );
      if( ! context[20] )
        continue;
      // closed e.FileName#1 as range 15
      //DEBUG: t.CommandLineSource#1: 5
      //DEBUG: t.Config#1: 7
      //DEBUG: e.Files-B#1: 11
      //DEBUG: e.Files-E#1: 13
      //DEBUG: s.Pos#1: 19
      //DEBUG: e.FileName#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} e.Files-B#1/11 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReportErrors/4 AsIs: t.CommandLineSource#1/5 AsIs: t.Config#1/7 } </21 & Map@2/22 Tile{ AsIs: (/17 AsIs: s.Pos#1/19 AsIs: # NotFound/20 AsIs: e.FileName#1/15 AsIs: )/18 AsIs: e.Files-E#1/13 AsIs: >/1 } >/23 Tile{ ]] }
      refalrts::alloc_open_call(vm, context[21]);
      refalrts::alloc_name(vm, context[22], functions[efunc_gen_Map_Z2]);
      refalrts::alloc_close_call(vm, context[23]);
      refalrts::update_name(context[4], functions[efunc_ReportErrors]);
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[21] );
      refalrts::link_brackets( context[17], context[18] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[23], context[23] );
      res = refalrts::splice_evar( res, context[17], context[1] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      refalrts::splice_to_freelist_open( vm, context[8], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[11], context[12], context[9], context[10] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Main-SwFoundFiles/4 t.CommandLineSource#1/5 t.Config#1/7 e.Files#1/2 >/1
  // closed e.Files#1 as range 2
  //DEBUG: t.CommandLineSource#1: 5
  //DEBUG: t.Config#1: 7
  //DEBUG: e.Files#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & Main-SwFoundFiles$2=1/10 t.CommandLineSource#1/5/11 (/13 e.Files#1/2/14 )/16 Tile{ AsIs: </0 Reuse: & CorrectTargetFileName/4 AsIs: t.CommandLineSource#1/5 AsIs: t.Config#1/7 AsIs: e.Files#1/2 AsIs: >/1 } >/17 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_Mainm_SwFoundFiles_S2A1]);
  refalrts::copy_evar(vm, context[11], context[12], context[5], context[6]);
  refalrts::alloc_open_bracket(vm, context[13]);
  refalrts::copy_evar(vm, context[14], context[15], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[16]);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::update_name(context[4], functions[efunc_CorrectTargetFileName]);
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[13], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[9], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Mainm_SwFoundFiles("Main-SwFoundFiles", 2216874807U, 2374776932U, func_Mainm_SwFoundFiles);


static refalrts::FnResult func_gen_CorrectTargetFileName_S1C1B1S1A4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & CorrectTargetFileName$1?1:1$1=4/4 e.BaseName#6/2 '.'/9 s.R#6/8 s.A#6/7 s.S#6/6 s.L#6/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_right( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[8], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[9] = refalrts::char_right( '.', context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  // closed e.BaseName#6 as range 2
  //DEBUG: s.L#6: 5
  //DEBUG: s.S#6: 6
  //DEBUG: s.A#6: 7
  //DEBUG: s.R#6: 8
  //DEBUG: e.BaseName#6: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} & CorrectTargetFileName$1?1:1$1=4/4 {REMOVED TILE} '.'/9 s.R#6/8 s.A#6/7 s.S#6/6 s.L#6/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: # FromFirstFile/0 } Tile{ AsIs: e.BaseName#6/2 } Tile{ ]] }
  refalrts::reinit_ident(context[0], identifiers[ident_FromFirstFile]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CorrectTargetFileName_S1C1B1S1A4("CorrectTargetFileName$1?1:1$1=4", 2216874807U, 2374776932U, func_gen_CorrectTargetFileName_S1C1B1S1A4);


static refalrts::FnResult func_gen_CorrectTargetFileName_S1C1B1S1A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & CorrectTargetFileName$1?1:1$1=3/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CorrectTargetFileName$1?1:1$1=3/4 (/12 e.new#1/10 )/13 e.new#2/2 '.'/9 'r'/8 'a'/7 's'/6 'l'/5 >/1
  context[5] = refalrts::char_right( 'l', context[2], context[3] );
  if( ! context[5] )
    return refalrts::cRecognitionImpossible;
  context[6] = refalrts::char_right( 's', context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::char_right( 'a', context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::char_right( 'r', context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  context[9] = refalrts::char_right( '.', context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.new#1 as range 10
  // closed e.new#2 as range 2
  do {
    // </0 & CorrectTargetFileName$1?1:1$1=3/4 (/12 e.3#0/14 '.'/22 s.R#6/21 s.A#6/20 s.S#6/19 s.L#6/18 )/13 e.LowerBaseName#5/16 '.'/9 'r'/8 'a'/7 's'/6 'l'/5 >/1
    context[14] = context[10];
    context[15] = context[11];
    context[16] = context[2];
    context[17] = context[3];
    // closed e.LowerBaseName#5 as range 16
    if( ! refalrts::svar_right( context[18], context[14], context[15] ) )
      continue;
    if( ! refalrts::svar_right( context[19], context[14], context[15] ) )
      continue;
    if( ! refalrts::svar_right( context[20], context[14], context[15] ) )
      continue;
    if( ! refalrts::svar_right( context[21], context[14], context[15] ) )
      continue;
    context[22] = refalrts::char_right( '.', context[14], context[15] );
    if( ! context[22] )
      continue;
    // closed e.3#0 as range 14
    //DEBUG: e.LowerBaseName#5: 16
    //DEBUG: s.L#6: 18
    //DEBUG: s.S#6: 19
    //DEBUG: s.A#6: 20
    //DEBUG: s.R#6: 21
    //DEBUG: e.3#0: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} & CorrectTargetFileName$1?1:1$1=3/4 (/12 {REMOVED TILE} '.'/22 s.R#6/21 s.A#6/20 s.S#6/19 s.L#6/18 )/13 e.LowerBaseName#5/16 '.'/9 'r'/8 'a'/7 's'/6 'l'/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: # FromFirstFile/0 } Tile{ AsIs: e.3#0/14 } Tile{ ]] }
    refalrts::reinit_ident(context[0], identifiers[ident_FromFirstFile]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::splice_to_freelist_open( vm, context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CorrectTargetFileName$1?1:1$1=3/4 (/12 e.LastPartName#4/10 )/13 e.LowerBaseName#5/2 '.'/9 'r'/8 'a'/7 's'/6 'l'/5 >/1
  // closed e.LastPartName#4 as range 10
  // closed e.LowerBaseName#5 as range 2
  //DEBUG: e.LastPartName#4: 10
  //DEBUG: e.LowerBaseName#5: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/12 {REMOVED TILE} )/13 e.LowerBaseName#5/2 '.'/9 'r'/8 'a'/7 's'/6 'l'/5 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CorrectTargetFileName$1?1:1$1=4*1/4 } Tile{ AsIs: e.LastPartName#4/10 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_CorrectTargetFileName_S1C1B1S1A4D1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CorrectTargetFileName_S1C1B1S1A3("CorrectTargetFileName$1?1:1$1=3", 2216874807U, 2374776932U, func_gen_CorrectTargetFileName_S1C1B1S1A3);


static refalrts::FnResult func_gen_CorrectTargetFileName_S1C1B1S1A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & CorrectTargetFileName$1?1:1$1=2/4 e.LastPartName#4/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.LastPartName#4 as range 2
  //DEBUG: e.LastPartName#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & CorrectTargetFileName$1?1:1$1=3/6 (/7 e.LastPartName#4/2/8 )/10 Tile{ AsIs: </0 Reuse: & Lower/4 AsIs: e.LastPartName#4/2 AsIs: >/1 } >/11 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_CorrectTargetFileName_S1C1B1S1A3]);
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::copy_evar(vm, context[8], context[9], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[10]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_Lower]);
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CorrectTargetFileName_S1C1B1S1A2("CorrectTargetFileName$1?1:1$1=2", 2216874807U, 2374776932U, func_gen_CorrectTargetFileName_S1C1B1S1A2);


static refalrts::FnResult func_gen_CorrectTargetFileName_S1C1B1S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & CorrectTargetFileName$1?1:1$1=1/4 e.Output#3/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Output#3 as range 2
  //DEBUG: e.Output#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & CorrectTargetFileName$1?1:1$1=2/6 Tile{ AsIs: </0 Reuse: & GetBaseName/4 AsIs: e.Output#3/2 AsIs: >/1 } >/7 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_CorrectTargetFileName_S1C1B1S1A2]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_GetBaseName]);
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

static refalrts::NativeReference nat_ref_gen_CorrectTargetFileName_S1C1B1S1A1("CorrectTargetFileName$1?1:1$1=1", 2216874807U, 2374776932U, func_gen_CorrectTargetFileName_S1C1B1S1A1);


static refalrts::FnResult func_gen_CorrectTargetFileName_S1C1B1S1A1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & CorrectTargetFileName$1?1:1$1=1:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CorrectTargetFileName$1?1:1$1=1:1/4 (/7 s.new#1/9 s.new#2/10 e.new#3/5 )/8 >/1
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
    // </0 & CorrectTargetFileName$1?1:1$1=1:1/4 (/7 s.Pos#3/9 # Source/10 (/15 s.Dialect#3/17 e.Source#3/13 )/16 e.Output#3/11 )/8 >/1
    context[11] = context[5];
    context[12] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_Source], context[10] ) )
      continue;
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[11], context[12] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    // closed e.Output#3 as range 11
    if( ! refalrts::svar_left( context[17], context[13], context[14] ) )
      continue;
    // closed e.Source#3 as range 13
    //DEBUG: s.Pos#3: 9
    //DEBUG: e.Output#3: 11
    //DEBUG: s.Dialect#3: 17
    //DEBUG: e.Source#3: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CorrectTargetFileName$1?1:1$1=1:1/4 (/7 s.Pos#3/9 # Source/10 (/15 s.Dialect#3/17 e.Source#3/13 )/16 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Output#3/11 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CorrectTargetFileName$1?1:1$1=1:1/4 (/7 s.Pos#3/9 # Output/10 e.Output#3/11 )/8 >/1
    context[11] = context[5];
    context[12] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_Output], context[10] ) )
      continue;
    // closed e.Output#3 as range 11
    //DEBUG: s.Pos#3: 9
    //DEBUG: e.Output#3: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CorrectTargetFileName$1?1:1$1=1:1/4 (/7 s.Pos#3/9 # Output/10 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Output#3/11 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CorrectTargetFileName$1?1:1$1=1:1/4 (/7 s.Pos#3/9 # OutputWithNative/10 (/13 e.Output#3/11 )/14 e.NativeOutput#3/5 )/8 >/1
  if( ! refalrts::ident_term( identifiers[ident_OutputWithNative], context[10] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[5], context[6] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.Output#3 as range 11
  // closed e.NativeOutput#3 as range 5
  //DEBUG: s.Pos#3: 9
  //DEBUG: e.Output#3: 11
  //DEBUG: e.NativeOutput#3: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CorrectTargetFileName$1?1:1$1=1:1/4 (/7 s.Pos#3/9 # OutputWithNative/10 (/13 {REMOVED TILE} )/14 e.NativeOutput#3/5 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Output#3/11 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CorrectTargetFileName_S1C1B1S1A1B1("CorrectTargetFileName$1?1:1$1=1:1", 2216874807U, 2374776932U, func_gen_CorrectTargetFileName_S1C1B1S1A1B1);


static refalrts::FnResult func_gen_CorrectTargetFileName_S1C1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & CorrectTargetFileName$1?1:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CorrectTargetFileName$1?1:1/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & CorrectTargetFileName$1?1:1/4 t.new#3/5 # DefaultTargetFileName/9 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[9] = refalrts::ident_left( identifiers[ident_DefaultTargetFileName], context[7], context[8] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    do {
      // </0 & CorrectTargetFileName$1?1:1/4 (/5 s.new#4/12 s.new#5/13 e.new#6/10 )/6 # DefaultTargetFileName/9 >/1
      context[10] = 0;
      context[11] = 0;
      if( ! refalrts::brackets_term( context[10], context[11], context[5] ) )
        continue;
      if( ! refalrts::svar_left( context[12], context[10], context[11] ) )
        continue;
      if( ! refalrts::svar_left( context[13], context[10], context[11] ) )
        continue;
      // closed e.new#6 as range 10
      do {
        // </0 & CorrectTargetFileName$1?1:1/4 (/5 s.Pos#3/12 # Source/13 (/18 s.Dialect#3/20 e.4#0/16 )/19 e.2#0/14 )/6 # DefaultTargetFileName/9 >/1
        context[14] = context[10];
        context[15] = context[11];
        if( ! refalrts::ident_term( identifiers[ident_Source], context[13] ) )
          continue;
        context[16] = 0;
        context[17] = 0;
        context[18] = refalrts::brackets_left( context[16], context[17], context[14], context[15] );
        if( ! context[18] )
          continue;
        refalrts::bracket_pointers(context[18], context[19]);
        // closed e.2#0 as range 14
        if( ! refalrts::svar_left( context[20], context[16], context[17] ) )
          continue;
        // closed e.4#0 as range 16
        //DEBUG: s.Pos#3: 12
        //DEBUG: e.2#0: 14
        //DEBUG: s.Dialect#3: 20
        //DEBUG: e.4#0: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.Pos#3/12 # Source/13 {REMOVED TILE} s.Dialect#3/20 e.4#0/16 )/19 {REMOVED TILE} )/6 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & CorrectTargetFileName$1?1:1$1=2/4 HalfReuse: </5 } Tile{ HalfReuse: & GetBaseName/18 } Tile{ AsIs: e.2#0/14 } Tile{ HalfReuse: >/9 AsIs: >/1 ]] }
        refalrts::update_name(context[4], functions[efunc_gen_CorrectTargetFileName_S1C1B1S1A2]);
        refalrts::reinit_open_call(context[5]);
        refalrts::reinit_name(context[18], functions[efunc_GetBaseName]);
        refalrts::reinit_close_call(context[9]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[9] );
        refalrts::push_stack( vm, context[5] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[9];
        res = refalrts::splice_evar( res, context[14], context[15] );
        res = refalrts::splice_evar( res, context[18], context[18] );
        refalrts::splice_to_freelist_open( vm, context[5], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & CorrectTargetFileName$1?1:1/4 (/5 s.Pos#3/12 # Output/13 e.1#0/14 )/6 # DefaultTargetFileName/9 >/1
        context[14] = context[10];
        context[15] = context[11];
        if( ! refalrts::ident_term( identifiers[ident_Output], context[13] ) )
          continue;
        // closed e.1#0 as range 14
        //DEBUG: s.Pos#3: 12
        //DEBUG: e.1#0: 14

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.Pos#3/12 {REMOVED TILE} {REMOVED TILE} )/6 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & CorrectTargetFileName$1?1:1$1=2/4 HalfReuse: </5 } Tile{ HalfReuse: & GetBaseName/13 } Tile{ AsIs: e.1#0/14 } Tile{ HalfReuse: >/9 AsIs: >/1 ]] }
        refalrts::update_name(context[4], functions[efunc_gen_CorrectTargetFileName_S1C1B1S1A2]);
        refalrts::reinit_open_call(context[5]);
        refalrts::reinit_name(context[13], functions[efunc_GetBaseName]);
        refalrts::reinit_close_call(context[9]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[9] );
        refalrts::push_stack( vm, context[5] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[9];
        res = refalrts::splice_evar( res, context[14], context[15] );
        res = refalrts::splice_evar( res, context[13], context[13] );
        refalrts::splice_to_freelist_open( vm, context[5], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & CorrectTargetFileName$1?1:1/4 (/5 s.Pos#3/12 # OutputWithNative/13 (/18 e.3#0/16 )/19 e.2#0/14 )/6 # DefaultTargetFileName/9 >/1
      context[14] = context[10];
      context[15] = context[11];
      if( ! refalrts::ident_term( identifiers[ident_OutputWithNative], context[13] ) )
        continue;
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[14], context[15] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      // closed e.3#0 as range 16
      // closed e.2#0 as range 14
      //DEBUG: s.Pos#3: 12
      //DEBUG: e.3#0: 16
      //DEBUG: e.2#0: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Pos#3/12 # OutputWithNative/13 (/18 {REMOVED TILE} {REMOVED TILE} e.2#0/14 )/6 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CorrectTargetFileName$1?1:1$1=2/4 HalfReuse: </5 } Tile{ HalfReuse: & GetBaseName/19 } Tile{ AsIs: e.3#0/16 } Tile{ HalfReuse: >/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_gen_CorrectTargetFileName_S1C1B1S1A2]);
      refalrts::reinit_open_call(context[5]);
      refalrts::reinit_name(context[19], functions[efunc_GetBaseName]);
      refalrts::reinit_close_call(context[9]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[9] );
      refalrts::push_stack( vm, context[5] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[9];
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[19], context[19] );
      refalrts::splice_to_freelist_open( vm, context[5], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & CorrectTargetFileName$1?1:1/4 t.FirstFile#1/5 # DefaultTargetFileName/9 >/1
    //DEBUG: t.FirstFile#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </10 & CorrectTargetFileName$1?1:1$1=1/11 Tile{ AsIs: </0 Reuse: & CorrectTargetFileName$1?1:1$1=1:1*3/4 AsIs: t.FirstFile#1/5 HalfReuse: >/9 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_gen_CorrectTargetFileName_S1C1B1S1A1]);
    refalrts::update_name(context[4], functions[efunc_gen_CorrectTargetFileName_S1C1B1S1A1B1D3]);
    refalrts::reinit_close_call(context[9]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CorrectTargetFileName$1?1:1/4 t.FirstFile#1/5 e.TargetFileName#2/2 >/1
  // closed e.TargetFileName#2 as range 2
  //DEBUG: t.FirstFile#1: 5
  //DEBUG: e.TargetFileName#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} & CorrectTargetFileName$1?1:1/4 t.FirstFile#1/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: # FromCommandLine/0 } Tile{ AsIs: e.TargetFileName#2/2 } Tile{ ]] }
  refalrts::reinit_ident(context[0], identifiers[ident_FromCommandLine]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CorrectTargetFileName_S1C1B1("CorrectTargetFileName$1?1:1", 2216874807U, 2374776932U, func_gen_CorrectTargetFileName_S1C1B1);


static refalrts::FnResult func_gen_CorrectTargetFileName_S1A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & CorrectTargetFileName$1=2/4 # Success/5 t.Config#3/6 >/1
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
  //TRASH: {REMOVED TILE} </0 & CorrectTargetFileName$1=2/4 # Success/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Config#3/6 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CorrectTargetFileName_S1A2("CorrectTargetFileName$1=2", 2216874807U, 2374776932U, func_gen_CorrectTargetFileName_S1A2);


static refalrts::FnResult func_gen_CorrectTargetFileName_S2B1S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & CorrectTargetFileName$2:1$2=1/4 # Success/5 t.Config#3/6 >/1
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
  //TRASH: {REMOVED TILE} </0 & CorrectTargetFileName$2:1$2=1/4 # Success/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Config#3/6 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CorrectTargetFileName_S2B1S2A1("CorrectTargetFileName$2:1$2=1", 2216874807U, 2374776932U, func_gen_CorrectTargetFileName_S2B1S2A1);


static refalrts::FnResult func_gen_CorrectTargetFileName_S2B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & CorrectTargetFileName$2:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CorrectTargetFileName$2:1/4 t.new#1/5 t.new#2/7 e.new#3/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & CorrectTargetFileName$2:1/4 t.CommandLineSource#1/5 t.Config#1/7 # DefaultTargetFileName/11 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[11] = refalrts::ident_left( identifiers[ident_DefaultTargetFileName], context[9], context[10] );
    if( ! context[11] )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    //DEBUG: t.CommandLineSource#1: 5
    //DEBUG: t.Config#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReportErrors/4 AsIs: t.CommandLineSource#1/5 AsIs: t.Config#1/7 HalfReuse: (/11 HalfReuse: 1/1 }"Option --no-sources require option -o (--target-file)"/12 )/14 >/15 Tile{ ]] }
    refalrts::alloc_chars(vm, context[12], context[13], "Option --no-sources require option -o (--target-file)", 53);
    refalrts::alloc_close_bracket(vm, context[14]);
    refalrts::alloc_close_call(vm, context[15]);
    refalrts::update_name(context[4], functions[efunc_ReportErrors]);
    refalrts::reinit_open_bracket(context[11]);
    refalrts::reinit_number(context[1], 1UL);
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[11], context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CorrectTargetFileName$2:1/4 t.CommandLineSource#1/5 t.Config#1/7 e.TargetFileName#2/2 >/1
  // closed e.TargetFileName#2 as range 2
  //DEBUG: t.CommandLineSource#1: 5
  //DEBUG: t.Config#1: 7
  //DEBUG: e.TargetFileName#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} t.CommandLineSource#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CorrectTargetFileName$2:1$2=1/4 } </9 & Config-SetTargetFileName/10 Tile{ AsIs: t.Config#1/7 } # FromCommandLine/11 Tile{ AsIs: e.TargetFileName#2/2 } >/12 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_Configm_SetTargetFileName]);
  refalrts::alloc_ident(vm, context[11], identifiers[ident_FromCommandLine]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::update_name(context[4], functions[efunc_gen_CorrectTargetFileName_S2B1S2A1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CorrectTargetFileName_S2B1("CorrectTargetFileName$2:1", 2216874807U, 2374776932U, func_gen_CorrectTargetFileName_S2B1);


static refalrts::FnResult func_CorrectTargetFileName(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & CorrectTargetFileName/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CorrectTargetFileName/4 t.new#1/5 t.new#2/7 e.new#3/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & CorrectTargetFileName/4 t.CommandLineSource#1/5 t.Config#1/7 t.FirstFile#1/11 e.Files#1/9 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[12] = refalrts::tvar_left( context[11], context[9], context[10] );
    if( ! context[12] )
      continue;
    // closed e.Files#1 as range 9
    //DEBUG: t.CommandLineSource#1: 5
    //DEBUG: t.Config#1: 7
    //DEBUG: t.FirstFile#1: 11
    //DEBUG: e.Files#1: 9
    //5: t.CommandLineSource#1
    //7: t.Config#1
    //9: e.Files#1
    //11: t.FirstFile#1
    //18: t.FirstFile#1
    //21: t.Config#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_CorrectTargetFileName_S1C1]);
    refalrts::alloc_open_call(vm, context[16]);
    refalrts::alloc_name(vm, context[17], functions[efunc_gen_CorrectTargetFileName_S1C1B1]);
    refalrts::copy_stvar(vm, context[18], context[11]);
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_Configm_GetTargetFileName]);
    refalrts::copy_stvar(vm, context[21], context[7]);
    refalrts::alloc_close_call(vm, context[22]);
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[13] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[16] );
    res = refalrts::splice_elem( res, context[23] );
    refalrts::push_stack( vm, context[22] );
    refalrts::push_stack( vm, context[19] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_stvar( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_stvar( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[13] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </13 & CorrectTargetFileName$1?1/17 s.Origin#2/18 e.TargetFileName#2/15 >/14
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::call_left( context[15], context[16], context[13], context[14] );
      if( ! refalrts::svar_left( context[18], context[15], context[16] ) )
        continue;
      // closed e.TargetFileName#2 as range 15
      //DEBUG: t.CommandLineSource#1: 5
      //DEBUG: t.Config#1: 7
      //DEBUG: t.FirstFile#1: 11
      //DEBUG: e.Files#1: 9
      //DEBUG: s.Origin#2: 18
      //DEBUG: e.TargetFileName#2: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} t.CommandLineSource#1/5 {REMOVED TILE} t.FirstFile#1/11 e.Files#1/9 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CorrectTargetFileName$1=2/4 } Tile{ AsIs: </13 Reuse: & Config-SetTargetFileName/17 } Tile{ AsIs: t.Config#1/7 } Tile{ AsIs: s.Origin#2/18 AsIs: e.TargetFileName#2/15 AsIs: >/14 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_gen_CorrectTargetFileName_S1A2]);
      refalrts::update_name(context[17], functions[efunc_Configm_SetTargetFileName]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[14] );
      refalrts::push_stack( vm, context[13] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[18];
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_evar( res, context[13], context[17] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[13], context[14]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CorrectTargetFileName/4 t.CommandLineSource#1/5 t.Config#1/7 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.CommandLineSource#1: 5
  //DEBUG: t.Config#1: 7

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CorrectTargetFileName$2:1/4 AsIs: t.CommandLineSource#1/5 AsIs: t.Config#1/7 HalfReuse: </1 } & Config-GetTargetFileName/9 t.Config#1/7/10 >/12 >/13 Tile{ ]] }
  refalrts::alloc_name(vm, context[9], functions[efunc_Configm_GetTargetFileName]);
  refalrts::copy_evar(vm, context[10], context[11], context[7], context[8]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_gen_CorrectTargetFileName_S2B1]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CorrectTargetFileName("CorrectTargetFileName", 2216874807U, 2374776932U, func_CorrectTargetFileName);


static refalrts::FnResult func_gen_Mainm_SwRenamedTargets_S1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & Main-SwRenamedTargets$1\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Main-SwRenamedTargets$1\1/4 (/7 s.new#1/9 s.new#2/10 e.new#3/5 )/8 >/1
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
    // </0 & Main-SwRenamedTargets$1\1/4 (/7 s.new#4/9 s.new#5/10 (/15 e.new#6/13 )/16 e.new#7/11 )/8 >/1
    context[11] = context[5];
    context[12] = context[6];
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[11], context[12] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    // closed e.new#6 as range 13
    // closed e.new#7 as range 11
    do {
      // </0 & Main-SwRenamedTargets$1\1/4 (/7 s.Pos#2/9 # Collision/10 (/15 e.FirstTarget#2/17 )/16 e.SecondTarget#2/19 )/8 >/1
      context[17] = context[13];
      context[18] = context[14];
      context[19] = context[11];
      context[20] = context[12];
      if( ! refalrts::ident_term( identifiers[ident_Collision], context[10] ) )
        continue;
      // closed e.FirstTarget#2 as range 17
      // closed e.SecondTarget#2 as range 19
      //DEBUG: s.Pos#2: 9
      //DEBUG: e.FirstTarget#2: 17
      //DEBUG: e.SecondTarget#2: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#2/9 HalfReuse: 'f'/10 HalfReuse: 'i'/15 }"le"/21 Tile{ HalfReuse: 's'/0 HalfReuse: ' '/4 } Tile{ AsIs: e.FirstTarget#2/17 }" and"/23 Tile{ HalfReuse: ' '/16 AsIs: e.SecondTarget#2/19 HalfReuse: ' '/8 HalfReuse: 'h'/1 }"ave same name"/25 )/27 Tile{ ]] }
      refalrts::alloc_chars(vm, context[21], context[22], "le", 2);
      refalrts::alloc_chars(vm, context[23], context[24], " and", 4);
      refalrts::alloc_chars(vm, context[25], context[26], "ave same name", 13);
      refalrts::alloc_close_bracket(vm, context[27]);
      refalrts::reinit_char(context[10], 'f');
      refalrts::reinit_char(context[15], 'i');
      refalrts::reinit_char(context[0], 's');
      refalrts::reinit_char(context[4], ' ');
      refalrts::reinit_char(context[16], ' ');
      refalrts::reinit_char(context[8], ' ');
      refalrts::reinit_char(context[1], 'h');
      refalrts::link_brackets( context[7], context[27] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[25], context[27] );
      res = refalrts::splice_evar( res, context[16], context[1] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[7], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Main-SwRenamedTargets$1\1/4 (/7 s.Pos#2/9 # Source/10 (/15 s.Dialect#2/21 e.Source#2/17 )/16 e.Output#2/19 )/8 >/1
    context[17] = context[13];
    context[18] = context[14];
    context[19] = context[11];
    context[20] = context[12];
    if( ! refalrts::ident_term( identifiers[ident_Source], context[10] ) )
      continue;
    // closed e.Output#2 as range 19
    if( ! refalrts::svar_left( context[21], context[17], context[18] ) )
      continue;
    // closed e.Source#2 as range 17
    //DEBUG: s.Pos#2: 9
    //DEBUG: e.Output#2: 19
    //DEBUG: s.Dialect#2: 21
    //DEBUG: e.Source#2: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Main-SwRenamedTargets$1\1/4 (/7 s.Pos#2/9 # Source/10 (/15 s.Dialect#2/21 e.Source#2/17 )/16 e.Output#2/19 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Main-SwRenamedTargets$1\1/4 (/7 s.Pos#2/9 # Output/10 e.Output#2/5 t.Native#2/11 )/8 >/1
  if( ! refalrts::ident_term( identifiers[ident_Output], context[10] ) )
    return refalrts::cRecognitionImpossible;
  context[12] = refalrts::tvar_right( context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  // closed e.Output#2 as range 5
  //DEBUG: s.Pos#2: 9
  //DEBUG: t.Native#2: 11
  //DEBUG: e.Output#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Main-SwRenamedTargets$1\1/4 (/7 s.Pos#2/9 # Output/10 e.Output#2/5 t.Native#2/11 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Mainm_SwRenamedTargets_S1L1("Main-SwRenamedTargets$1\\1", 2216874807U, 2374776932U, func_gen_Mainm_SwRenamedTargets_S1L1);


static refalrts::FnResult func_gen_Mainm_SwRenamedTargets_S2B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & Main-SwRenamedTargets$2:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Main-SwRenamedTargets$2:1/4 t.new#1/5 t.new#2/7 s.new#3/9 e.new#4/2 >/1
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
    // </0 & Main-SwRenamedTargets$2:1/4 t.Config#1/5 t.CommandLineSource#1/7 s.GrammarCheck#3/9 e.Outputs-B#3/12 # Fails/16 e.Outputs-E#3/14 >/1
    context[10] = context[2];
    context[11] = context[3];
    context[12] = 0;
    context[13] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[14] = context[10];
      context[15] = context[11];
      context[16] = refalrts::ident_left( identifiers[ident_Fails], context[14], context[15] );
      if( ! context[16] )
        continue;
      // closed e.Outputs-E#3 as range 14
      //DEBUG: t.Config#1: 5
      //DEBUG: t.CommandLineSource#1: 7
      //DEBUG: s.GrammarCheck#3: 9
      //DEBUG: e.Outputs-B#3: 12
      //DEBUG: e.Outputs-E#3: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} t.CommandLineSource#1/7 s.GrammarCheck#3/9 e.Outputs-B#3/12 {REMOVED TILE} e.Outputs-E#3/14 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CreateErrorFileMark/4 AsIs: t.Config#1/5 } Tile{ HalfReuse: >/16 } </17 & Exit/18 1/19 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[17]);
      refalrts::alloc_name(vm, context[18], functions[efunc_Exit]);
      refalrts::alloc_number(vm, context[19], 1UL);
      refalrts::update_name(context[4], functions[efunc_CreateErrorFileMark]);
      refalrts::reinit_close_call(context[16]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[17] );
      refalrts::push_stack( vm, context[16] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[17], context[19] );
      res = refalrts::splice_evar( res, context[16], context[16] );
      refalrts::splice_to_freelist_open( vm, context[6], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[12], context[13], context[10], context[11] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Main-SwRenamedTargets$2:1/4 t.Config#1/5 t.CommandLineSource#1/7 # NormalRun/9 e.Outputs#3/10 >/1
    context[10] = context[2];
    context[11] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_NormalRun], context[9] ) )
      continue;
    // closed e.Outputs#3 as range 10
    //DEBUG: t.Config#1: 5
    //DEBUG: t.CommandLineSource#1: 7
    //DEBUG: e.Outputs#3: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # NormalRun/9 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Link/4 } Tile{ AsIs: t.CommandLineSource#1/7 } Tile{ AsIs: t.Config#1/5 } Tile{ AsIs: e.Outputs#3/10 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_Link]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Main-SwRenamedTargets$2:1/4 t.Config#1/5 t.CommandLineSource#1/7 # GrammarCheck/9 e.Outputs#3/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_GrammarCheck], context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Outputs#3 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: t.CommandLineSource#1: 7
  //DEBUG: e.Outputs#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} t.Config#1/5 t.CommandLineSource#1/7 {REMOVED TILE} e.Outputs#3/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Prout/4 } Tile{ HalfReuse: '*'/9 }"* No syntax errors found **"/10 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[10], context[11], "* No syntax errors found **", 27);
  refalrts::update_name(context[4], functions[efunc_Prout]);
  refalrts::reinit_char(context[9], '*');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Mainm_SwRenamedTargets_S2B1("Main-SwRenamedTargets$2:1", 2216874807U, 2374776932U, func_gen_Mainm_SwRenamedTargets_S2B1);


static refalrts::FnResult func_gen_Mainm_SwRenamedTargets_S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & Main-SwRenamedTargets$2=1/4 t.Config#1/5 t.CommandLineSource#1/7 (/11 e.Files#1/9 )/12 s.GrammarCheck#2/13 >/1
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
  // closed e.Files#1 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Config#1: 5
  //DEBUG: t.CommandLineSource#1: 7
  //DEBUG: e.Files#1: 9
  //DEBUG: s.GrammarCheck#2: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Main-SwRenamedTargets$2:1/4 AsIs: t.Config#1/5 AsIs: t.CommandLineSource#1/7 HalfReuse: s.GrammarCheck2 #13/11 } Tile{ HalfReuse: </12 } & CompileFiles/14 t.Config#1/5/15 Tile{ AsIs: s.GrammarCheck#2/13 } Tile{ AsIs: e.Files#1/9 } >/17 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[14], functions[efunc_CompileFiles]);
  refalrts::copy_evar(vm, context[15], context[16], context[5], context[6]);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::update_name(context[4], functions[efunc_gen_Mainm_SwRenamedTargets_S2B1]);
  refalrts::reinit_svar( context[11], context[13] );
  refalrts::reinit_open_call(context[12]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[14], context[16] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Mainm_SwRenamedTargets_S2A1("Main-SwRenamedTargets$2=1", 2216874807U, 2374776932U, func_gen_Mainm_SwRenamedTargets_S2A1);


static refalrts::FnResult func_Mainm_SwRenamedTargets(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & Main-SwRenamedTargets/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Main-SwRenamedTargets/4 t.new#1/5 t.new#2/7 e.new#3/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & Main-SwRenamedTargets/4 t.CommandLineSource#1/5 t.Config#1/7 e.Files-B#1/11 (/17 s.Pos#1/19 # Collision/20 e.Collision#1/15 )/18 e.Files-E#1/13 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[11] = 0;
    context[12] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[13] = context[9];
      context[14] = context[10];
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::brackets_left( context[15], context[16], context[13], context[14] );
      if( ! context[17] )
        continue;
      refalrts::bracket_pointers(context[17], context[18]);
      // closed e.Files-E#1 as range 13
      if( ! refalrts::svar_left( context[19], context[15], context[16] ) )
        continue;
      context[20] = refalrts::ident_left( identifiers[ident_Collision], context[15], context[16] );
      if( ! context[20] )
        continue;
      // closed e.Collision#1 as range 15
      //DEBUG: t.CommandLineSource#1: 5
      //DEBUG: t.Config#1: 7
      //DEBUG: e.Files-B#1: 11
      //DEBUG: e.Files-E#1: 13
      //DEBUG: s.Pos#1: 19
      //DEBUG: e.Collision#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} e.Files-B#1/11 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReportErrors/4 AsIs: t.CommandLineSource#1/5 AsIs: t.Config#1/7 } </21 & Map@3/22 Tile{ AsIs: (/17 AsIs: s.Pos#1/19 AsIs: # Collision/20 AsIs: e.Collision#1/15 AsIs: )/18 AsIs: e.Files-E#1/13 AsIs: >/1 } >/23 Tile{ ]] }
      refalrts::alloc_open_call(vm, context[21]);
      refalrts::alloc_name(vm, context[22], functions[efunc_gen_Map_Z3]);
      refalrts::alloc_close_call(vm, context[23]);
      refalrts::update_name(context[4], functions[efunc_ReportErrors]);
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[21] );
      refalrts::link_brackets( context[17], context[18] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[23], context[23] );
      res = refalrts::splice_evar( res, context[17], context[1] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      refalrts::splice_to_freelist_open( vm, context[8], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[11], context[12], context[9], context[10] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Main-SwRenamedTargets/4 t.CommandLineSource#1/5 t.Config#1/7 e.Files#1/2 >/1
  // closed e.Files#1 as range 2
  //DEBUG: t.CommandLineSource#1: 5
  //DEBUG: t.Config#1: 7
  //DEBUG: e.Files#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Main-SwRenamedTargets$2=1/4 } t.Config#1/7/9 Tile{ AsIs: t.CommandLineSource#1/5 } (/11 Tile{ AsIs: e.Files#1/2 } )/12 </13 & Config-GetGrammarCheck/14 Tile{ AsIs: t.Config#1/7 } >/15 Tile{ AsIs: >/1 ]] }
  refalrts::copy_evar(vm, context[9], context[10], context[7], context[8]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_close_bracket(vm, context[12]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_Configm_GetGrammarCheck]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::update_name(context[4], functions[efunc_gen_Mainm_SwRenamedTargets_S2A1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[12], context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Mainm_SwRenamedTargets("Main-SwRenamedTargets", 2216874807U, 2374776932U, func_Mainm_SwRenamedTargets);


static refalrts::FnResult func_gen_CalcTargetFileName_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & CalcTargetFileName:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CalcTargetFileName:1/4 t.new#1/5 s.new#2/7 s.new#3/8 e.new#4/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 2
  do {
    // </0 & CalcTargetFileName:1/4 t.Config#1/5 s.TargetMode#1/7 # FromFirstFile/8 e.BaseName#2/9 >/1
    context[9] = context[2];
    context[10] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_FromFirstFile], context[8] ) )
      continue;
    // closed e.BaseName#2 as range 9
    //DEBUG: t.Config#1: 5
    //DEBUG: s.TargetMode#1: 7
    //DEBUG: e.BaseName#2: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.BaseName#2/9 } Tile{ AsIs: </0 Reuse: & Config-GetTargetSuffix/4 AsIs: t.Config#1/5 AsIs: s.TargetMode#1/7 HalfReuse: >/8 } Tile{ ]] }
    refalrts::update_name(context[4], functions[efunc_Configm_GetTargetSuffix]);
    refalrts::reinit_close_call(context[8]);
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CalcTargetFileName:1/4 t.Config#1/5 s.TargetMode#1/7 # FromCommandLine/8 e.TargetFileName#2/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_FromCommandLine], context[8] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.TargetFileName#2 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: s.TargetMode#1: 7
  //DEBUG: e.TargetFileName#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CalcTargetFileName:1/4 t.Config#1/5 s.TargetMode#1/7 # FromCommandLine/8 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.TargetFileName#2/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CalcTargetFileName_B1("CalcTargetFileName:1", 2216874807U, 2374776932U, func_gen_CalcTargetFileName_B1);


static refalrts::FnResult func_CalcTargetFileName(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & CalcTargetFileName/4 s.TargetMode#1/5 t.Config#1/6 e.OutputFiles#1/2 >/1
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
  // closed e.OutputFiles#1 as range 2
  //DEBUG: s.TargetMode#1: 5
  //DEBUG: t.Config#1: 6
  //DEBUG: e.OutputFiles#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.OutputFiles#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CalcTargetFileName:1/4 } t.Config#1/6/8 Tile{ AsIs: s.TargetMode#1/5 } </10 & Config-GetTargetFileName/11 Tile{ AsIs: t.Config#1/6 } >/12 Tile{ AsIs: >/1 ]] }
  refalrts::copy_evar(vm, context[8], context[9], context[6], context[7]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_Configm_GetTargetFileName]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::update_name(context[4], functions[efunc_gen_CalcTargetFileName_B1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CalcTargetFileName("CalcTargetFileName", 2216874807U, 2374776932U, func_CalcTargetFileName);


static refalrts::FnResult func_gen_LookupSourceFiles_L1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & LookupSourceFiles\1:1/4 s.Pos#4/9 (/7 s.ResultTag#5/10 e.Info#5/5 )/8 >/1
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
  if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Info#5 as range 5
  //DEBUG: s.Pos#4: 9
  //DEBUG: s.ResultTag#5: 10
  //DEBUG: e.Info#5: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} & LookupSourceFiles\1:1/4 s.Pos#4/9 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ HalfReuse: s.Pos4 #9/7 AsIs: s.ResultTag#5/10 AsIs: e.Info#5/5 AsIs: )/8 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_svar( context[7], context[9] );
  refalrts::link_brackets( context[0], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LookupSourceFiles_L1B1("LookupSourceFiles\\1:1", 2216874807U, 2374776932U, func_gen_LookupSourceFiles_L1B1);


static refalrts::FnResult func_gen_LookupSourceFiles_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & LookupSourceFiles\1/4 s.TargetMode#2/13 (/11 e.SearchFolders#3/9 )/12 (/7 s.Pos#4/14 e.FileName#4/5 )/8 >/1
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
  context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.SearchFolders#3 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#4 as range 5
  //DEBUG: e.SearchFolders#3: 9
  //DEBUG: s.TargetMode#2: 13
  //DEBUG: s.Pos#4: 14
  //DEBUG: e.FileName#4: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </15 & LookupSourceFiles\1:1/16 Tile{ AsIs: s.Pos#4/14 } Tile{ AsIs: </0 Reuse: & FindFiles/4 AsIs: s.TargetMode#2/13 AsIs: (/11 AsIs: e.SearchFolders#3/9 AsIs: )/12 AsIs: (/7 } Tile{ AsIs: e.FileName#4/5 } )/17 Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_gen_LookupSourceFiles_L1B1]);
  refalrts::alloc_close_bracket(vm, context[17]);
  refalrts::update_name(context[4], functions[efunc_FindFiles]);
  refalrts::reinit_close_call(context[8]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[17] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LookupSourceFiles_L1("LookupSourceFiles\\1", 2216874807U, 2374776932U, func_gen_LookupSourceFiles_L1);


static refalrts::FnResult func_gen_LookupSourceFiles_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & LookupSourceFiles=2/4 s.TargetMode#2/5 (/8 e.Files#1/6 )/9 e.SearchFolders#3/2 >/1
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
  // closed e.Files#1 as range 6
  // closed e.SearchFolders#3 as range 2
  //DEBUG: s.TargetMode#2: 5
  //DEBUG: e.Files#1: 6
  //DEBUG: e.SearchFolders#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@4/4 AsIs: s.TargetMode#2/5 } Tile{ AsIs: e.SearchFolders#3/2 } Tile{ AsIs: (/8 AsIs: e.Files#1/6 AsIs: )/9 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LookupSourceFiles_A2("LookupSourceFiles=2", 2216874807U, 2374776932U, func_gen_LookupSourceFiles_A2);


static refalrts::FnResult func_gen_LookupSourceFiles_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & LookupSourceFiles=1/4 (/7 e.Files#1/5 )/8 t.Config#1/9 s.TargetMode#2/11 >/1
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
  // closed e.Files#1 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Files#1: 5
  //DEBUG: t.Config#1: 9
  //DEBUG: s.TargetMode#2: 11

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.TargetMode#2/11 {REMOVED TILE}
  //RESULT: Tile{ [[ } </12 Tile{ HalfReuse: & LookupSourceFiles=2/0 HalfReuse: s.TargetMode2 #11/4 AsIs: (/7 AsIs: e.Files#1/5 AsIs: )/8 } </13 & Config-GetSearchFolders/14 Tile{ AsIs: t.Config#1/9 } >/15 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[12]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_Configm_GetSearchFolders]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::reinit_name(context[0], functions[efunc_gen_LookupSourceFiles_A2]);
  refalrts::reinit_svar( context[4], context[11] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LookupSourceFiles_A1("LookupSourceFiles=1", 2216874807U, 2374776932U, func_gen_LookupSourceFiles_A1);


static refalrts::FnResult func_LookupSourceFiles(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & LookupSourceFiles/4 t.Config#1/5 e.Files#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Files#1 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: e.Files#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & LookupSourceFiles=1/4 } (/7 Tile{ AsIs: e.Files#1/2 } )/8 Tile{ AsIs: t.Config#1/5 } </9 & Config-GetTargetMode/10 t.Config#1/5/11 >/13 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_close_bracket(vm, context[8]);
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_Configm_GetTargetMode]);
  refalrts::copy_evar(vm, context[11], context[12], context[5], context[6]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_gen_LookupSourceFiles_A1]);
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

static refalrts::NativeReference nat_ref_LookupSourceFiles("LookupSourceFiles", 2216874807U, 2374776932U, func_LookupSourceFiles);


static refalrts::FnResult func_gen_RenameTargets_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & RenameTargets=1/4 t.Config#1/5 (/9 e.Files#1/7 )/10 e.TempDir#2/2 >/1
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
  // closed e.Files#1 as range 7
  // closed e.TempDir#2 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: e.Files#1: 7
  //DEBUG: e.TempDir#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ScanCollisions/4 AsIs: t.Config#1/5 HalfReuse: </9 } & Map@5/11 Tile{ AsIs: e.TempDir#2/2 } (/12 Tile{ AsIs: e.Files#1/7 } Tile{ AsIs: )/10 } >/13 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_Map_Z5]);
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_ScanCollisions]);
  refalrts::reinit_open_call(context[9]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[12], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RenameTargets_A1("RenameTargets=1", 2216874807U, 2374776932U, func_gen_RenameTargets_A1);


static refalrts::FnResult func_RenameTargets(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & RenameTargets/4 t.Config#1/5 e.Files#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Files#1 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: e.Files#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & RenameTargets=1/4 AsIs: t.Config#1/5 } (/7 Tile{ AsIs: e.Files#1/2 } )/8 </9 & Config-GetTempDir/10 t.Config#1/5/11 >/13 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_close_bracket(vm, context[8]);
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_Configm_GetTempDir]);
  refalrts::copy_evar(vm, context[11], context[12], context[5], context[6]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_gen_RenameTargets_A1]);
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

static refalrts::NativeReference nat_ref_RenameTargets("RenameTargets", 2216874807U, 2374776932U, func_RenameTargets);


static refalrts::FnResult func_gen_GetFileName_S3A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & GetFileName$3=2/4 s.Pos#1/5 s.Dialect#1/6 (/9 e.Source#1/7 )/10 e.Output#3/2 >/1
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
  // closed e.Source#1 as range 7
  // closed e.Output#3 as range 2
  //DEBUG: s.Pos#1: 5
  //DEBUG: s.Dialect#1: 6
  //DEBUG: e.Source#1: 7
  //DEBUG: e.Output#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.Dialect#1/6 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 } </11 & GetBaseNameLowerCaseNoExt/12 e.Output#3/2/13 >/15 )/16 (/17 Tile{ AsIs: s.Pos#1/5 } # Source/18 (/19 Tile{ HalfReuse: s.Dialect1 #6/9 AsIs: e.Source#1/7 AsIs: )/10 AsIs: e.Output#3/2 HalfReuse: )/1 } )/20 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_GetBaseNameLowerCaseNoExt]);
  refalrts::copy_evar(vm, context[13], context[14], context[2], context[3]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::alloc_close_bracket(vm, context[16]);
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::alloc_ident(vm, context[18], identifiers[ident_Source]);
  refalrts::alloc_open_bracket(vm, context[19]);
  refalrts::alloc_close_bracket(vm, context[20]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_svar( context[9], context[6] );
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[20] );
  refalrts::link_brackets( context[17], context[1] );
  refalrts::link_brackets( context[19], context[10] );
  refalrts::link_brackets( context[4], context[16] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[9], context[1] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[11], context[17] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GetFileName_S3A2("GetFileName$3=2", 2216874807U, 2374776932U, func_gen_GetFileName_S3A2);


static refalrts::FnResult func_gen_GetFileName_S3A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & GetFileName$3=1/4 s.Pos#1/5 s.Dialect#1/6 (/9 e.Source#1/7 )/10 (/13 e.TempDir#1/11 )/14 e.Output#2/2 >/1
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
  // closed e.Source#1 as range 7
  // closed e.TempDir#1 as range 11
  // closed e.Output#2 as range 2
  //DEBUG: s.Pos#1: 5
  //DEBUG: s.Dialect#1: 6
  //DEBUG: e.Source#1: 7
  //DEBUG: e.TempDir#1: 11
  //DEBUG: e.Output#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GetFileName$3=2/4 AsIs: s.Pos#1/5 AsIs: s.Dialect#1/6 AsIs: (/9 AsIs: e.Source#1/7 AsIs: )/10 HalfReuse: </13 } & GlueNames/15 (/16 Tile{ AsIs: e.TempDir#1/11 } Tile{ AsIs: )/14 } (/17 Tile{ AsIs: e.Output#2/2 } )/18 >/19 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[15], functions[efunc_GlueNames]);
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::alloc_close_bracket(vm, context[18]);
  refalrts::alloc_close_call(vm, context[19]);
  refalrts::update_name(context[4], functions[efunc_gen_GetFileName_S3A2]);
  refalrts::reinit_open_call(context[13]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[16], context[14] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GetFileName_S3A1("GetFileName$3=1", 2216874807U, 2374776932U, func_gen_GetFileName_S3A1);


static refalrts::FnResult func_GetFileName(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & GetFileName/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & GetFileName/4 e.new#1/2 (/7 s.new#2/9 s.new#3/10 e.new#4/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 2
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 5
  do {
    // </0 & GetFileName/4 e.TempDir#1/11 (/7 s.Pos#1/9 # Output/10 e.FileName#1/13 )/8 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[13] = context[5];
    context[14] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_Output], context[10] ) )
      continue;
    // closed e.TempDir#1 as range 11
    // closed e.FileName#1 as range 13
    //DEBUG: s.Pos#1: 9
    //DEBUG: e.TempDir#1: 11
    //DEBUG: e.FileName#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} e.TempDir#1/11 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 } </15 & GetBaseNameLowerCaseNoExt/16 e.FileName#1/13/17 >/19 )/20 Tile{ AsIs: (/7 AsIs: s.Pos#1/9 AsIs: # Output/10 AsIs: e.FileName#1/13 HalfReuse: # NoNative/8 HalfReuse: )/1 } )/21 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_name(vm, context[16], functions[efunc_GetBaseNameLowerCaseNoExt]);
    refalrts::copy_evar(vm, context[17], context[18], context[13], context[14]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::alloc_close_bracket(vm, context[20]);
    refalrts::alloc_close_bracket(vm, context[21]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_open_bracket(context[4]);
    refalrts::reinit_ident(context[8], identifiers[ident_NoNative]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[0], context[21] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::link_brackets( context[4], context[20] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[21], context[21] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    res = refalrts::splice_evar( res, context[15], context[20] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GetFileName/4 e.new#5/2 (/7 s.new#6/9 s.new#7/10 (/13 e.new#8/11 )/14 e.new#9/5 )/8 >/1
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[5], context[6] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.new#5 as range 2
  // closed e.new#8 as range 11
  // closed e.new#9 as range 5
  do {
    // </0 & GetFileName/4 e.TempDir#1/15 (/7 s.Pos#1/9 # OutputWithNative/10 (/13 e.FileName#1/17 )/14 e.NativeFileName#1/19 )/8 >/1
    context[15] = context[2];
    context[16] = context[3];
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[5];
    context[20] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_OutputWithNative], context[10] ) )
      continue;
    // closed e.TempDir#1 as range 15
    // closed e.FileName#1 as range 17
    // closed e.NativeFileName#1 as range 19
    //DEBUG: s.Pos#1: 9
    //DEBUG: e.TempDir#1: 15
    //DEBUG: e.FileName#1: 17
    //DEBUG: e.NativeFileName#1: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} e.TempDir#1/15 {REMOVED TILE} s.Pos#1/9 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 } </21 & GetBaseNameLowerCaseNoExt/22 e.FileName#1/17/23 >/25 )/26 Tile{ AsIs: (/7 } Tile{ HalfReuse: s.Pos1 #9/10 HalfReuse: # Output/13 AsIs: e.FileName#1/17 HalfReuse: (/14 AsIs: e.NativeFileName#1/19 AsIs: )/8 HalfReuse: )/1 } )/27 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_GetBaseNameLowerCaseNoExt]);
    refalrts::copy_evar(vm, context[23], context[24], context[17], context[18]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::alloc_close_bracket(vm, context[26]);
    refalrts::alloc_close_bracket(vm, context[27]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_open_bracket(context[4]);
    refalrts::reinit_svar( context[10], context[9] );
    refalrts::reinit_ident(context[13], identifiers[ident_Output]);
    refalrts::reinit_open_bracket(context[14]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[0], context[27] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::link_brackets( context[14], context[8] );
    refalrts::link_brackets( context[4], context[26] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[21] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[27], context[27] );
    res = refalrts::splice_evar( res, context[10], context[1] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[21], context[26] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GetFileName/4 e.TempDir#1/2 (/7 s.Pos#1/9 # Source/10 (/13 s.Dialect#1/15 e.Source#1/11 )/14 e.Output#1/5 )/8 >/1
  if( ! refalrts::ident_term( identifiers[ident_Source], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.TempDir#1 as range 2
  // closed e.Output#1 as range 5
  if( ! refalrts::svar_left( context[15], context[11], context[12] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Source#1 as range 11
  //DEBUG: s.Pos#1: 9
  //DEBUG: e.TempDir#1: 2
  //DEBUG: e.Output#1: 5
  //DEBUG: s.Dialect#1: 15
  //DEBUG: e.Source#1: 11

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Dialect#1/15 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GetFileName$3=1/4 } Tile{ AsIs: s.Pos#1/9 HalfReuse: s.Dialect1 #15/10 AsIs: (/13 } Tile{ AsIs: e.Source#1/11 } )/16 Tile{ AsIs: (/7 } Tile{ AsIs: e.TempDir#1/2 } )/17 </18 Tile{ HalfReuse: & GetBaseName/14 AsIs: e.Output#1/5 HalfReuse: >/8 AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[16]);
  refalrts::alloc_close_bracket(vm, context[17]);
  refalrts::alloc_open_call(vm, context[18]);
  refalrts::update_name(context[4], functions[efunc_gen_GetFileName_S3A1]);
  refalrts::reinit_svar( context[10], context[15] );
  refalrts::reinit_name(context[14], functions[efunc_GetBaseName]);
  refalrts::reinit_close_call(context[8]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[18] );
  refalrts::link_brackets( context[7], context[17] );
  refalrts::link_brackets( context[13], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[14];
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GetFileName("GetFileName", 2216874807U, 2374776932U, func_GetFileName);


static refalrts::FnResult func_ScanCollisions(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
  // </0 & ScanCollisions/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ScanCollisions/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & ScanCollisions/4 t.new#3/5 (/11 (/15 e.new#4/13 )/16 e.new#5/9 )/12 e.new#6/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[9], context[10] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    // closed e.new#4 as range 13
    // closed e.new#5 as range 9
    // closed e.new#6 as range 7
    do {
      // </0 & ScanCollisions/4 t.Config#1/5 (/11 (/15 e.BaseName#1/17 )/16 e.Locations1#1/19 )/12 e.Files-B#1/23 (/29 (/33 e.BaseName#1/35 )/34 e.Locations2#1/27 )/30 e.Files-E#1/25 >/1
      context[17] = context[13];
      context[18] = context[14];
      context[19] = context[9];
      context[20] = context[10];
      context[21] = context[7];
      context[22] = context[8];
      // closed e.BaseName#1 as range 17
      // closed e.Locations1#1 as range 19
      context[23] = 0;
      context[24] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[25] = context[21];
        context[26] = context[22];
        context[27] = 0;
        context[28] = 0;
        context[29] = refalrts::brackets_left( context[27], context[28], context[25], context[26] );
        if( ! context[29] )
          continue;
        refalrts::bracket_pointers(context[29], context[30]);
        context[31] = 0;
        context[32] = 0;
        context[33] = refalrts::brackets_left( context[31], context[32], context[27], context[28] );
        if( ! context[33] )
          continue;
        refalrts::bracket_pointers(context[33], context[34]);
        if( ! refalrts::repeated_evar_left( vm, context[35], context[36], context[17], context[18], context[31], context[32] ) )
          continue;
        if( ! refalrts::empty_seq( context[31], context[32] ) )
          continue;
        // closed e.Locations2#1 as range 27
        // closed e.Files-E#1 as range 25
        //DEBUG: t.Config#1: 5
        //DEBUG: e.BaseName#1: 17
        //DEBUG: e.Locations1#1: 19
        //DEBUG: e.Files-B#1: 23
        //DEBUG: e.Locations2#1: 27
        //DEBUG: e.Files-E#1: 25

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} (/11 (/15 e.BaseName#1/17 )/16 {REMOVED TILE} )/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & ScanCollisions/4 AsIs: t.Config#1/5 } Tile{ AsIs: e.Files-B#1/23 } Tile{ AsIs: (/29 AsIs: (/33 AsIs: e.BaseName#1/35 AsIs: )/34 } Tile{ AsIs: e.Locations1#1/19 } Tile{ AsIs: e.Locations2#1/27 } Tile{ AsIs: )/30 AsIs: e.Files-E#1/25 AsIs: >/1 ]] }
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[29], context[30] );
        refalrts::link_brackets( context[33], context[34] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[30];
        res = refalrts::splice_evar( res, context[27], context[28] );
        res = refalrts::splice_evar( res, context[19], context[20] );
        res = refalrts::splice_evar( res, context[29], context[34] );
        res = refalrts::splice_evar( res, context[23], context[24] );
        refalrts::splice_to_freelist_open( vm, context[6], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[23], context[24], context[21], context[22] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ScanCollisions/4 t.Config#1/5 (/11 (/15 e.BaseName#1/17 )/16 e.Locations#1/19 )/12 e.Files#1/21 >/1
    context[17] = context[13];
    context[18] = context[14];
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[7];
    context[22] = context[8];
    // closed e.BaseName#1 as range 17
    // closed e.Locations#1 as range 19
    // closed e.Files#1 as range 21
    //DEBUG: t.Config#1: 5
    //DEBUG: e.BaseName#1: 17
    //DEBUG: e.Locations#1: 19
    //DEBUG: e.Files#1: 21

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} e.BaseName#1/17 )/16 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & RenameLocations/4 AsIs: t.Config#1/5 } Tile{ AsIs: e.Locations#1/19 } Tile{ HalfReuse: >/11 HalfReuse: </15 } Tile{ HalfReuse: & ScanCollisions/12 } t.Config#1/5/23 Tile{ AsIs: e.Files#1/21 } Tile{ AsIs: >/1 ]] }
    refalrts::copy_evar(vm, context[23], context[24], context[5], context[6]);
    refalrts::update_name(context[4], functions[efunc_RenameLocations]);
    refalrts::reinit_close_call(context[11]);
    refalrts::reinit_open_call(context[15]);
    refalrts::reinit_name(context[12], functions[efunc_ScanCollisions]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[11], context[15] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::splice_to_freelist_open( vm, context[6], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ScanCollisions/4 t.Config#1/5 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Config#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ScanCollisions/4 t.Config#1/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ScanCollisions("ScanCollisions", 2216874807U, 2374776932U, func_ScanCollisions);


static refalrts::FnResult func_RenameLocations(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  // </0 & RenameLocations/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & RenameLocations/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & RenameLocations/4 t.Config#1/5 e.Locations-B#1/9 (/15 s.Pos1#1/17 # Output/18 e.FirstTarget#1/13 t.FirstNative#1/19 )/16 e.Locations-M#1/21 (/27 s.Pos2#1/29 # Output/30 e.SecondTarget#1/25 t.SecondNative#1/31 )/28 e.Locations-E#1/23 >/1
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
      if( ! refalrts::svar_left( context[17], context[13], context[14] ) )
        continue;
      context[18] = refalrts::ident_left( identifiers[ident_Output], context[13], context[14] );
      if( ! context[18] )
        continue;
      context[20] = refalrts::tvar_right( context[19], context[13], context[14] );
      if( ! context[20] )
        continue;
      // closed e.FirstTarget#1 as range 13
      context[21] = 0;
      context[22] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[23] = context[11];
        context[24] = context[12];
        context[25] = 0;
        context[26] = 0;
        context[27] = refalrts::brackets_left( context[25], context[26], context[23], context[24] );
        if( ! context[27] )
          continue;
        refalrts::bracket_pointers(context[27], context[28]);
        // closed e.Locations-E#1 as range 23
        if( ! refalrts::svar_left( context[29], context[25], context[26] ) )
          continue;
        context[30] = refalrts::ident_left( identifiers[ident_Output], context[25], context[26] );
        if( ! context[30] )
          continue;
        context[32] = refalrts::tvar_right( context[31], context[25], context[26] );
        if( ! context[32] )
          continue;
        // closed e.SecondTarget#1 as range 25
        //DEBUG: t.Config#1: 5
        //DEBUG: e.Locations-B#1: 9
        //DEBUG: s.Pos1#1: 17
        //DEBUG: t.FirstNative#1: 19
        //DEBUG: e.FirstTarget#1: 13
        //DEBUG: e.Locations-M#1: 21
        //DEBUG: e.Locations-E#1: 23
        //DEBUG: s.Pos2#1: 29
        //DEBUG: t.SecondNative#1: 31
        //DEBUG: e.SecondTarget#1: 25

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & RenameLocations/4 t.Config#1/5 e.Locations-B#1/9 {REMOVED TILE} s.Pos1#1/17 # Output/18 {REMOVED TILE} t.FirstNative#1/19 )/16 e.Locations-M#1/21 {REMOVED TILE} {REMOVED TILE} t.SecondNative#1/31 {REMOVED TILE} e.Locations-E#1/23 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/27 AsIs: s.Pos2#1/29 Reuse: # Collision/30 } Tile{ AsIs: (/15 } Tile{ AsIs: e.FirstTarget#1/13 } Tile{ AsIs: )/28 } Tile{ AsIs: e.SecondTarget#1/25 } Tile{ HalfReuse: )/1 ]] }
        refalrts::update_ident(context[30], identifiers[ident_Collision]);
        refalrts::reinit_close_bracket(context[1]);
        refalrts::link_brackets( context[27], context[1] );
        refalrts::link_brackets( context[15], context[28] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[25], context[26] );
        res = refalrts::splice_evar( res, context[28], context[28] );
        res = refalrts::splice_evar( res, context[13], context[14] );
        res = refalrts::splice_evar( res, context[15], context[15] );
        res = refalrts::splice_evar( res, context[27], context[30] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[21], context[22], context[11], context[12] ) );
    } while ( refalrts::open_evar_advance( context[9], context[10], context[7], context[8] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & RenameLocations/4 t.Config#1/5 e.Locations-B#1/9 (/15 s.Pos#1/17 # Output/18 e.Target#1/13 t.Native#1/19 )/16 e.Locations-E#1/11 >/1
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
      // closed e.Locations-E#1 as range 11
      if( ! refalrts::svar_left( context[17], context[13], context[14] ) )
        continue;
      context[18] = refalrts::ident_left( identifiers[ident_Output], context[13], context[14] );
      if( ! context[18] )
        continue;
      context[20] = refalrts::tvar_right( context[19], context[13], context[14] );
      if( ! context[20] )
        continue;
      // closed e.Target#1 as range 13
      //DEBUG: t.Config#1: 5
      //DEBUG: e.Locations-B#1: 9
      //DEBUG: e.Locations-E#1: 11
      //DEBUG: s.Pos#1: 17
      //DEBUG: t.Native#1: 19
      //DEBUG: e.Target#1: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & RenameLocations-Aux/4 AsIs: t.Config#1/5 } 1/21 Tile{ AsIs: e.Locations-B#1/9 } Tile{ AsIs: (/15 AsIs: s.Pos#1/17 AsIs: # Output/18 AsIs: e.Target#1/13 AsIs: t.Native#1/19 AsIs: )/16 AsIs: e.Locations-E#1/11 AsIs: >/1 ]] }
      refalrts::alloc_number(vm, context[21], 1UL);
      refalrts::update_name(context[4], functions[efunc_RenameLocationsm_Aux]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[15];
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[21], context[21] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[9], context[10], context[7], context[8] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & RenameLocations/4 t.Config#1/5 e.Locations#1/2 >/1
  // closed e.Locations#1 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: e.Locations#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & RenameLocations-Aux/4 AsIs: t.Config#1/5 } 0/7 Tile{ AsIs: e.Locations#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_number(vm, context[7], 0UL);
  refalrts::update_name(context[4], functions[efunc_RenameLocationsm_Aux]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_RenameLocations("RenameLocations", 2216874807U, 2374776932U, func_RenameLocations);


static refalrts::FnResult func_gen_RenameLocationsm_Aux_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & RenameLocations-Aux=2/4 s.Num#3/5 e.NewLocations#3/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.NewLocations#3 as range 2
  //DEBUG: s.Num#3: 5
  //DEBUG: e.NewLocations#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & RenameLocations-Aux=2/4 s.Num#3/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.NewLocations#3/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RenameLocationsm_Aux_A2("RenameLocations-Aux=2", 2216874807U, 2374776932U, func_gen_RenameLocationsm_Aux_A2);


static refalrts::FnResult func_gen_RenameLocationsm_Aux_A2L1S1A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & RenameLocations-Aux=2\1$1=2/4 s.Pos#3/5 s.Dialect#3/6 (/9 e.Source#3/7 )/10 s.Num#5/11 e.NewName#5/2 >/1
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
  // closed e.Source#3 as range 7
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.NewName#5 as range 2
  //DEBUG: s.Pos#3: 5
  //DEBUG: s.Dialect#3: 6
  //DEBUG: e.Source#3: 7
  //DEBUG: s.Num#5: 11
  //DEBUG: e.NewName#5: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.Dialect#3/6 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 } 1/12 Tile{ AsIs: s.Num#5/11 } >/13 (/14 Tile{ AsIs: s.Pos#3/5 } # Source/15 (/16 Tile{ HalfReuse: s.Dialect3 #6/9 AsIs: e.Source#3/7 AsIs: )/10 } Tile{ AsIs: e.NewName#5/2 }".rasl"/17 Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_number(vm, context[12], 1UL);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::alloc_open_bracket(vm, context[14]);
  refalrts::alloc_ident(vm, context[15], identifiers[ident_Source]);
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::alloc_chars(vm, context[17], context[18], ".rasl", 5);
  refalrts::update_name(context[4], functions[efunc_Add]);
  refalrts::reinit_svar( context[9], context[6] );
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[14], context[1] );
  refalrts::link_brackets( context[16], context[10] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RenameLocationsm_Aux_A2L1S1A2("RenameLocations-Aux=2\\1$1=2", 2216874807U, 2374776932U, func_gen_RenameLocationsm_Aux_A2L1S1A2);


static refalrts::FnResult func_gen_RenameLocationsm_Aux_A2L1S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & RenameLocations-Aux=2\1$2=1/4 s.Num#3/5 s.Pos#3/6 s.Dialect#3/7 (/10 e.Source#3/8 )/11 e.NewName#4/2 >/1
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
  // closed e.Source#3 as range 8
  // closed e.NewName#4 as range 2
  //DEBUG: s.Num#3: 5
  //DEBUG: s.Pos#3: 6
  //DEBUG: s.Dialect#3: 7
  //DEBUG: e.Source#3: 8
  //DEBUG: e.NewName#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Dialect#3/7 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 } 1/12 Tile{ AsIs: s.Num#3/5 } >/13 (/14 Tile{ AsIs: s.Pos#3/6 } # Source/15 (/16 Tile{ HalfReuse: s.Dialect3 #7/10 AsIs: e.Source#3/8 AsIs: )/11 AsIs: e.NewName#4/2 HalfReuse: '.'/1 }"rasl"/17 )/19 Tile{ ]] }
  refalrts::alloc_number(vm, context[12], 1UL);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::alloc_open_bracket(vm, context[14]);
  refalrts::alloc_ident(vm, context[15], identifiers[ident_Source]);
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::alloc_chars(vm, context[17], context[18], "rasl", 4);
  refalrts::alloc_close_bracket(vm, context[19]);
  refalrts::update_name(context[4], functions[efunc_Add]);
  refalrts::reinit_svar( context[10], context[7] );
  refalrts::reinit_char(context[1], '.');
  refalrts::link_brackets( context[14], context[19] );
  refalrts::link_brackets( context[16], context[11] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[17], context[19] );
  res = refalrts::splice_evar( res, context[10], context[1] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[6], context[6] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RenameLocationsm_Aux_A2L1S2A1("RenameLocations-Aux=2\\1$2=1", 2216874807U, 2374776932U, func_gen_RenameLocationsm_Aux_A2L1S2A1);


static refalrts::FnResult func_gen_RenameLocationsm_Aux_A2L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 36 elems
  refalrts::Iter context[36];
  refalrts::zeros( context, 36 );
  // </0 & RenameLocations-Aux=2\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & RenameLocations-Aux=2\1/4 s.new#1/9 s.new#2/10 (/7 s.new#3/11 s.new#4/12 e.new#5/5 t.new#6/13 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  context[14] = refalrts::tvar_right( context[13], context[5], context[6] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#5 as range 5
  do {
    // </0 & RenameLocations-Aux=2\1/4 s.new#7/9 s.new#8/10 (/7 s.new#9/11 # Source/12 (/23 s.new#10/25 e.new#11/21 )/24 e.new#12/15 '.'/20 'r'/19 'a'/18 's'/17 'l'/13 )/8 >/1
    context[15] = context[5];
    context[16] = context[6];
    if( ! refalrts::char_term( 'l', context[13] ) )
      continue;
    if( ! refalrts::ident_term( identifiers[ident_Source], context[12] ) )
      continue;
    context[17] = refalrts::char_right( 's', context[15], context[16] );
    if( ! context[17] )
      continue;
    context[18] = refalrts::char_right( 'a', context[15], context[16] );
    if( ! context[18] )
      continue;
    context[19] = refalrts::char_right( 'r', context[15], context[16] );
    if( ! context[19] )
      continue;
    context[20] = refalrts::char_right( '.', context[15], context[16] );
    if( ! context[20] )
      continue;
    context[21] = 0;
    context[22] = 0;
    context[23] = refalrts::brackets_left( context[21], context[22], context[15], context[16] );
    if( ! context[23] )
      continue;
    refalrts::bracket_pointers(context[23], context[24]);
    // closed e.new#12 as range 15
    if( ! refalrts::svar_left( context[25], context[21], context[22] ) )
      continue;
    // closed e.new#11 as range 21
    do {
      // </0 & RenameLocations-Aux=2\1/4 s.Overwrite#2/9 s.Num#3/10 (/7 s.Pos#3/11 # Source/12 (/23 s.Dialect#3/25 e.Source#3/26 )/24 e.Output#3/28 '.'/20 'r'/19 'a'/18 's'/17 'l'/13 )/8 >/1
      context[26] = context[21];
      context[27] = context[22];
      context[28] = context[15];
      context[29] = context[16];
      // closed e.Source#3 as range 26
      // closed e.Output#3 as range 28
      //DEBUG: s.Overwrite#2: 9
      //DEBUG: s.Num#3: 10
      //DEBUG: s.Pos#3: 11
      //DEBUG: s.Dialect#3: 25
      //DEBUG: e.Source#3: 26
      //DEBUG: e.Output#3: 28
      //9: s.Overwrite#2
      //10: s.Num#3
      //11: s.Pos#3
      //25: s.Dialect#3
      //26: e.Source#3
      //28: e.Output#3
      //33: s.Overwrite#2

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[30]);
      refalrts::alloc_name(vm, context[32], functions[efunc_gen_RenameLocationsm_Aux_A2L1S1C1]);
      refalrts::copy_stvar(vm, context[33], context[9]);
      refalrts::alloc_close_call(vm, context[31]);
      refalrts::push_stack( vm, context[31] );
      refalrts::push_stack( vm, context[30] );
      res = refalrts::splice_elem( res, context[31] );
      res = refalrts::splice_stvar( res, context[33] );
      res = refalrts::splice_elem( res, context[32] );
      res = refalrts::splice_elem( res, context[30] );
      refalrts::use( res );
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function(vm);
      do {
        // </30 & RenameLocations-Aux=2\1$1?1/34 # False/35 >/31
        context[32] = 0;
        context[33] = 0;
        context[34] = refalrts::call_left( context[32], context[33], context[30], context[31] );
        context[35] = refalrts::ident_left( identifiers[ident_False], context[32], context[33] );
        if( ! context[35] )
          continue;
        if( ! refalrts::empty_seq( context[32], context[33] ) )
          continue;
        //DEBUG: s.Overwrite#2: 9
        //DEBUG: s.Num#3: 10
        //DEBUG: s.Pos#3: 11
        //DEBUG: s.Dialect#3: 25
        //DEBUG: e.Source#3: 26
        //DEBUG: e.Output#3: 28

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} & RenameLocations-Aux=2\1/4 s.Overwrite#2/9 s.Num#3/10 {REMOVED TILE} s.Dialect#3/25 {REMOVED TILE} )/24 {REMOVED TILE} '.'/20 'r'/19 'a'/18 's'/17 'l'/13 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & RenameLocations-Aux=2\1$1=2/7 AsIs: s.Pos#3/11 HalfReuse: s.Dialect3 #25/12 AsIs: (/23 } Tile{ AsIs: e.Source#3/26 } Tile{ AsIs: )/8 AsIs: </30 Reuse: & FindFreeName/34 HalfReuse: s.Num3 #10/35 } Tile{ AsIs: e.Output#3/28 } Tile{ AsIs: >/31 AsIs: >/1 ]] }
        refalrts::reinit_name(context[7], functions[efunc_gen_RenameLocationsm_Aux_A2L1S1A2]);
        refalrts::reinit_svar( context[12], context[25] );
        refalrts::update_name(context[34], functions[efunc_FindFreeName]);
        refalrts::reinit_svar( context[35], context[10] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[31] );
        refalrts::push_stack( vm, context[30] );
        refalrts::link_brackets( context[23], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[31];
        res = refalrts::splice_evar( res, context[28], context[29] );
        res = refalrts::splice_evar( res, context[8], context[35] );
        res = refalrts::splice_evar( res, context[26], context[27] );
        res = refalrts::splice_evar( res, context[7], context[23] );
        refalrts::splice_to_freelist_open( vm, context[0], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[30], context[31]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & RenameLocations-Aux=2\1/4 s.Overwrite#2/9 s.Num#3/10 (/7 s.Pos#3/11 # Source/12 (/23 s.Dialect#3/25 e.Source#3/26 )/24 e.Output#3/28 '.'/20 'r'/19 'a'/18 's'/17 'l'/13 )/8 >/1
    context[26] = context[21];
    context[27] = context[22];
    context[28] = context[15];
    context[29] = context[16];
    // closed e.Source#3 as range 26
    // closed e.Output#3 as range 28
    //DEBUG: s.Overwrite#2: 9
    //DEBUG: s.Num#3: 10
    //DEBUG: s.Pos#3: 11
    //DEBUG: s.Dialect#3: 25
    //DEBUG: e.Source#3: 26
    //DEBUG: e.Output#3: 28

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Overwrite#2/9 s.Num#3/10 {REMOVED TILE} s.Dialect#3/25 {REMOVED TILE} )/24 {REMOVED TILE} '.'/20 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & RenameLocations-Aux=2\1$2=1/4 } Tile{ HalfReuse: s.Num3 #10/7 AsIs: s.Pos#3/11 HalfReuse: s.Dialect3 #25/12 AsIs: (/23 } Tile{ AsIs: e.Source#3/26 } Tile{ HalfReuse: )/19 HalfReuse: </18 HalfReuse: & AddNumSuffix/17 HalfReuse: s.Num3 #10/13 } Tile{ AsIs: e.Output#3/28 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_RenameLocationsm_Aux_A2L1S2A1]);
    refalrts::reinit_svar( context[7], context[10] );
    refalrts::reinit_svar( context[12], context[25] );
    refalrts::reinit_close_bracket(context[19]);
    refalrts::reinit_open_call(context[18]);
    refalrts::reinit_name(context[17], functions[efunc_AddNumSuffix]);
    refalrts::reinit_svar( context[13], context[10] );
    refalrts::reinit_close_call(context[8]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[18] );
    refalrts::link_brackets( context[23], context[19] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_evar( res, context[19], context[13] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[7], context[23] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & RenameLocations-Aux=2\1/4 s.Overwrite#2/9 s.Num#3/10 (/7 s.Pos#3/11 # Output/12 e.Output#3/5 t.Native#3/13 )/8 >/1
  if( ! refalrts::ident_term( identifiers[ident_Output], context[12] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Output#3 as range 5
  //DEBUG: t.Native#3: 13
  //DEBUG: s.Overwrite#2: 9
  //DEBUG: s.Num#3: 10
  //DEBUG: s.Pos#3: 11
  //DEBUG: e.Output#3: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & RenameLocations-Aux=2\1/4 s.Overwrite#2/9 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: s.Num#3/10 AsIs: (/7 AsIs: s.Pos#3/11 AsIs: # Output/12 AsIs: e.Output#3/5 AsIs: t.Native#3/13 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[10], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RenameLocationsm_Aux_A2L1("RenameLocations-Aux=2\\1", 2216874807U, 2374776932U, func_gen_RenameLocationsm_Aux_A2L1);


static refalrts::FnResult func_gen_RenameLocationsm_Aux_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & RenameLocations-Aux=1/4 s.InitNumber#1/5 (/8 e.Locations#1/6 )/9 s.Overwrite#2/10 >/1
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
  // closed e.Locations#1 as range 6
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.InitNumber#1: 5
  //DEBUG: e.Locations#1: 6
  //DEBUG: s.Overwrite#2: 10

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.InitNumber#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & RenameLocations-Aux=2/4 } </11 & MapAccum@1/12 Tile{ AsIs: s.Overwrite#2/10 } Tile{ HalfReuse: s.InitNumber1 #5/8 AsIs: e.Locations#1/6 HalfReuse: >/9 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_gen_MapAccum_Z1]);
  refalrts::update_name(context[4], functions[efunc_gen_RenameLocationsm_Aux_A2]);
  refalrts::reinit_svar( context[8], context[5] );
  refalrts::reinit_close_call(context[9]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RenameLocationsm_Aux_A1("RenameLocations-Aux=1", 2216874807U, 2374776932U, func_gen_RenameLocationsm_Aux_A1);


static refalrts::FnResult func_RenameLocationsm_Aux(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & RenameLocations-Aux/4 t.Config#1/5 s.InitNumber#1/7 e.Locations#1/2 >/1
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
  // closed e.Locations#1 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: s.InitNumber#1: 7
  //DEBUG: e.Locations#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & RenameLocations-Aux=1/4 } Tile{ AsIs: s.InitNumber#1/7 } (/8 Tile{ AsIs: e.Locations#1/2 } )/9 </10 & Config-GetOverwriteExistRasls/11 Tile{ AsIs: t.Config#1/5 } >/12 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[8]);
  refalrts::alloc_close_bracket(vm, context[9]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_Configm_GetOverwriteExistRasls]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::update_name(context[4], functions[efunc_gen_RenameLocationsm_Aux_A1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[10] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[11] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_RenameLocationsm_Aux("RenameLocations-Aux", 2216874807U, 2374776932U, func_RenameLocationsm_Aux);


static refalrts::FnResult func_AddNumSuffix(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & AddNumSuffix/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & AddNumSuffix/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & AddNumSuffix/4 0/5 e.Output#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::number_term( 0UL, context[5] ) )
      continue;
    // closed e.Output#1 as range 6
    //DEBUG: e.Output#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & AddNumSuffix/4 0/5 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Output#1/6 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AddNumSuffix/4 s.Num#1/5 e.Output#1/2 >/1
  // closed e.Output#1 as range 2
  //DEBUG: s.Num#1: 5
  //DEBUG: e.Output#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Output#1/2 } '@'/6 Tile{ AsIs: </0 Reuse: & Symb/4 AsIs: s.Num#1/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_char(vm, context[6], '@');
  refalrts::update_name(context[4], functions[efunc_Symb]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[0], context[5] );
  res = refalrts::splice_evar( res, context[6], context[6] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_AddNumSuffix("AddNumSuffix", 2216874807U, 2374776932U, func_AddNumSuffix);


static refalrts::FnResult func_gen_FindFreeName_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & FindFreeName:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & FindFreeName:1/4 s.new#1/5 (/8 e.new#2/6 )/9 (/12 e.new#3/10 )/13 e.new#4/2 >/1
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
  // closed e.new#4 as range 2
  do {
    // </0 & FindFreeName:1/4 s.Num#1/5 (/8 e.Output#1/14 )/9 (/12 e.NewName#2/16 )/13 e._B#3/20 # True/24 e._E#3/22 >/1
    context[14] = context[6];
    context[15] = context[7];
    context[16] = context[10];
    context[17] = context[11];
    context[18] = context[2];
    context[19] = context[3];
    // closed e.Output#1 as range 14
    // closed e.NewName#2 as range 16
    context[20] = 0;
    context[21] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[22] = context[18];
      context[23] = context[19];
      context[24] = refalrts::ident_left( identifiers[ident_True], context[22], context[23] );
      if( ! context[24] )
        continue;
      // closed e._E#3 as range 22
      //DEBUG: s.Num#1: 5
      //DEBUG: e.Output#1: 14
      //DEBUG: e.NewName#2: 16
      //DEBUG: e._B#3: 20
      //DEBUG: e._E#3: 22

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} (/12 e.NewName#2/16 {REMOVED TILE} e._B#3/20 {REMOVED TILE} e._E#3/22 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </13 } Tile{ HalfReuse: & FindFreeName/24 } Tile{ HalfReuse: </1 } Tile{ HalfReuse: & Add/0 HalfReuse: 1/4 AsIs: s.Num#1/5 HalfReuse: >/8 AsIs: e.Output#1/14 HalfReuse: >/9 } Tile{ ]] }
      refalrts::reinit_open_call(context[13]);
      refalrts::reinit_name(context[24], functions[efunc_FindFreeName]);
      refalrts::reinit_open_call(context[1]);
      refalrts::reinit_name(context[0], functions[efunc_Add]);
      refalrts::reinit_number(context[4], 1UL);
      refalrts::reinit_close_call(context[8]);
      refalrts::reinit_close_call(context[9]);
      refalrts::push_stack( vm, context[9] );
      refalrts::push_stack( vm, context[13] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[0], context[9] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[24], context[24] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[18], context[19] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FindFreeName:1/4 s.Num#1/5 (/8 e.Output#1/6 )/9 (/12 e.NewName#2/10 )/13 # False/14 # False/15 >/1
  context[14] = refalrts::ident_left( identifiers[ident_False], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  context[15] = refalrts::ident_left( identifiers[ident_False], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Output#1 as range 6
  // closed e.NewName#2 as range 10
  //DEBUG: s.Num#1: 5
  //DEBUG: e.Output#1: 6
  //DEBUG: e.NewName#2: 10

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} & FindFreeName:1/4 s.Num#1/5 (/8 e.Output#1/6 )/9 (/12 {REMOVED TILE} )/13 # False/14 # False/15 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: s.Num1 #5/0 } Tile{ AsIs: e.NewName#2/10 } Tile{ ]] }
  refalrts::reinit_svar( context[0], context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindFreeName_B1("FindFreeName:1", 2216874807U, 2374776932U, func_gen_FindFreeName_B1);


static refalrts::FnResult func_gen_FindFreeName_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & FindFreeName=1/4 s.Num#1/5 (/8 e.Output#1/6 )/9 e.NewName#2/2 >/1
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
  // closed e.Output#1 as range 6
  // closed e.NewName#2 as range 2
  //DEBUG: s.Num#1: 5
  //DEBUG: e.Output#1: 6
  //DEBUG: e.NewName#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindFreeName:1/4 AsIs: s.Num#1/5 AsIs: (/8 AsIs: e.Output#1/6 AsIs: )/9 } (/10 e.NewName#2/2/11 )/13 </14 & ExistFile/15 Tile{ AsIs: e.NewName#2/2 }".rasl"/16 >/18 </19 & ExistFile/20 e.NewName#2/2/21".cpp"/23 >/25 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[10]);
  refalrts::copy_evar(vm, context[11], context[12], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_ExistFile]);
  refalrts::alloc_chars(vm, context[16], context[17], ".rasl", 5);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::alloc_open_call(vm, context[19]);
  refalrts::alloc_name(vm, context[20], functions[efunc_ExistFile]);
  refalrts::copy_evar(vm, context[21], context[22], context[2], context[3]);
  refalrts::alloc_chars(vm, context[23], context[24], ".cpp", 4);
  refalrts::alloc_close_call(vm, context[25]);
  refalrts::update_name(context[4], functions[efunc_gen_FindFreeName_B1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[14] );
  refalrts::link_brackets( context[10], context[13] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[16], context[25] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[10], context[15] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindFreeName_A1("FindFreeName=1", 2216874807U, 2374776932U, func_gen_FindFreeName_A1);


static refalrts::FnResult func_FindFreeName(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & FindFreeName/4 s.Num#1/5 e.Output#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Output#1 as range 2
  //DEBUG: s.Num#1: 5
  //DEBUG: e.Output#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </6 & FindFreeName=1/7 s.Num#1/5/8 (/9 e.Output#1/2/10 )/12 Tile{ AsIs: </0 Reuse: & AddNumSuffix/4 AsIs: s.Num#1/5 AsIs: e.Output#1/2 AsIs: >/1 } >/13 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_FindFreeName_A1]);
  refalrts::copy_stvar(vm, context[8], context[5]);
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::copy_evar(vm, context[10], context[11], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[12]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_AddNumSuffix]);
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[9], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[6], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FindFreeName("FindFreeName", 2216874807U, 2374776932U, func_FindFreeName);


static refalrts::FnResult func_gen_CompileFiles_S1L1S3B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & CompileFiles$1\1$3:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CompileFiles$1\1$3:1/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & CompileFiles$1\1$3:1/4 # Success/5 e.new#3/6 t.new#4/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Success], context[5] ) )
      continue;
    context[9] = refalrts::tvar_right( context[8], context[6], context[7] );
    if( ! context[9] )
      continue;
    // closed e.new#3 as range 6
    do {
      // </0 & CompileFiles$1\1$3:1/4 # Success/5 e.OutputName#4/10 # NoNative/8 >/1
      context[10] = context[6];
      context[11] = context[7];
      if( ! refalrts::ident_term( identifiers[ident_NoNative], context[8] ) )
        continue;
      // closed e.OutputName#4 as range 10
      //DEBUG: e.OutputName#4: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # RASL/4 Reuse: # Generated/5 AsIs: e.OutputName#4/10 HalfReuse: )/8 } Tile{ ]] }
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_RASL]);
      refalrts::update_ident(context[5], identifiers[ident_Generated]);
      refalrts::reinit_close_bracket(context[8]);
      refalrts::link_brackets( context[0], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      refalrts::splice_to_freelist_open( vm, context[8], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & CompileFiles$1\1$3:1/4 # Success/5 e.OutputName#4/10 (/8 e.NativeOutputName#4/12 )/9 >/1
    context[10] = context[6];
    context[11] = context[7];
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_term( context[12], context[13], context[8] ) )
      continue;
    // closed e.OutputName#4 as range 10
    // closed e.NativeOutputName#4 as range 12
    //DEBUG: e.OutputName#4: 10
    //DEBUG: e.NativeOutputName#4: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Prout/4 HalfReuse: ' '/5 }"  ... natives generated"/14 Tile{ AsIs: >/1 } (/16 # RASL/17 # Generated/18 Tile{ AsIs: e.OutputName#4/10 } )/19 (/20 # Native/21 Tile{ HalfReuse: # Generated/8 AsIs: e.NativeOutputName#4/12 AsIs: )/9 } Tile{ ]] }
    refalrts::alloc_chars(vm, context[14], context[15], "  ... natives generated", 23);
    refalrts::alloc_open_bracket(vm, context[16]);
    refalrts::alloc_ident(vm, context[17], identifiers[ident_RASL]);
    refalrts::alloc_ident(vm, context[18], identifiers[ident_Generated]);
    refalrts::alloc_close_bracket(vm, context[19]);
    refalrts::alloc_open_bracket(vm, context[20]);
    refalrts::alloc_ident(vm, context[21], identifiers[ident_Native]);
    refalrts::update_name(context[4], functions[efunc_Prout]);
    refalrts::reinit_char(context[5], ' ');
    refalrts::reinit_ident(context[8], identifiers[ident_Generated]);
    refalrts::link_brackets( context[20], context[9] );
    refalrts::link_brackets( context[16], context[19] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[19], context[21] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[16], context[18] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CompileFiles$1\1$3:1/4 # Fails/5 >/1
  if( ! refalrts::ident_term( identifiers[ident_Fails], context[5] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CompileFiles$1\1$3:1/4 # Fails/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # Fails/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_Fails]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CompileFiles_S1L1S3B1("CompileFiles$1\\1$3:1", 2216874807U, 2374776932U, func_gen_CompileFiles_S1L1S3B1);


static refalrts::FnResult func_gen_CompileFiles_S1L1S3A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & CompileFiles$1\1$3=1/4 t.Config#1/13 s.Dialect#2/15 (/11 e.Source#2/9 )/12 (/7 e.OutputName#2/5 )/8 >/1
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
  context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.Source#2 as range 9
  // closed e.OutputName#2 as range 5
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Source#2: 9
  //DEBUG: e.OutputName#2: 5
  //DEBUG: t.Config#1: 13
  //DEBUG: s.Dialect#2: 15

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CompileFiles$1\1$3:1/4 } </16 Tile{ HalfReuse: & CompileFile/12 } Tile{ AsIs: t.Config#1/13 } Tile{ AsIs: (/11 } Tile{ AsIs: s.Dialect#2/15 } Tile{ AsIs: e.Source#2/9 } Tile{ HalfReuse: )/7 AsIs: e.OutputName#2/5 HalfReuse: >/8 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[16]);
  refalrts::update_name(context[4], functions[efunc_gen_CompileFiles_S1L1S3B1]);
  refalrts::reinit_name(context[12], functions[efunc_CompileFile]);
  refalrts::reinit_close_bracket(context[7]);
  refalrts::reinit_close_call(context[8]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[16] );
  refalrts::link_brackets( context[11], context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[7];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CompileFiles_S1L1S3A1("CompileFiles$1\\1$3=1", 2216874807U, 2374776932U, func_gen_CompileFiles_S1L1S3A1);


static refalrts::FnResult func_gen_CompileFiles_S1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & CompileFiles$1\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CompileFiles$1\1/4 t.new#1/11 (/7 s.new#2/9 s.new#3/10 e.new#4/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 5
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & CompileFiles$1\1/4 t.new#5/11 (/7 s.new#6/9 # Output/10 e.new#7/13 t.new#8/15 )/8 >/1
    context[13] = context[5];
    context[14] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_Output], context[10] ) )
      continue;
    context[16] = refalrts::tvar_right( context[15], context[13], context[14] );
    if( ! context[16] )
      continue;
    // closed e.new#7 as range 13
    do {
      // </0 & CompileFiles$1\1/4 t.Config#1/11 (/7 s.Pos#2/9 # Output/10 e.OutputName#2/17 # NoNative/15 )/8 >/1
      context[17] = context[13];
      context[18] = context[14];
      if( ! refalrts::ident_term( identifiers[ident_NoNative], context[15] ) )
        continue;
      // closed e.OutputName#2 as range 17
      //DEBUG: t.Config#1: 11
      //DEBUG: s.Pos#2: 9
      //DEBUG: e.OutputName#2: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} t.Config#1/11 {REMOVED TILE} s.Pos#2/9 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Prout/4 } '+'/19 Tile{ HalfReuse: 'L'/7 }"inking"/20 Tile{ HalfReuse: ' '/10 AsIs: e.OutputName#2/17 HalfReuse: >/15 HalfReuse: (/8 HalfReuse: # RASL/1 } # Given/22 e.OutputName#2/17/23 )/25 Tile{ ]] }
      refalrts::alloc_char(vm, context[19], '+');
      refalrts::alloc_chars(vm, context[20], context[21], "inking", 6);
      refalrts::alloc_ident(vm, context[22], identifiers[ident_Given]);
      refalrts::copy_evar(vm, context[23], context[24], context[17], context[18]);
      refalrts::alloc_close_bracket(vm, context[25]);
      refalrts::update_name(context[4], functions[efunc_Prout]);
      refalrts::reinit_char(context[7], 'L');
      refalrts::reinit_char(context[10], ' ');
      refalrts::reinit_close_call(context[15]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_ident(context[1], identifiers[ident_RASL]);
      refalrts::link_brackets( context[8], context[25] );
      refalrts::push_stack( vm, context[15] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[22], context[25] );
      res = refalrts::splice_evar( res, context[10], context[1] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[19], context[19] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & CompileFiles$1\1/4 t.Config#1/11 (/7 s.Pos#2/9 # Output/10 e.OutputName#2/17 (/15 e.NativeName#2/19 )/16 )/8 >/1
    context[17] = context[13];
    context[18] = context[14];
    context[19] = 0;
    context[20] = 0;
    if( ! refalrts::brackets_term( context[19], context[20], context[15] ) )
      continue;
    // closed e.OutputName#2 as range 17
    // closed e.NativeName#2 as range 19
    //DEBUG: t.Config#1: 11
    //DEBUG: s.Pos#2: 9
    //DEBUG: e.OutputName#2: 17
    //DEBUG: e.NativeName#2: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} t.Config#1/11 {REMOVED TILE} s.Pos#2/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Prout/4 }"+Linking (+ natives) "/21 Tile{ AsIs: e.OutputName#2/17 } >/23 Tile{ AsIs: (/7 } Tile{ Reuse: # RASL/10 } # Given/24 e.OutputName#2/17/25 Tile{ AsIs: )/8 HalfReuse: (/1 } # Native/27 Tile{ HalfReuse: # Given/15 AsIs: e.NativeName#2/19 AsIs: )/16 } Tile{ ]] }
    refalrts::alloc_chars(vm, context[21], context[22], "+Linking (+ natives) ", 21);
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::alloc_ident(vm, context[24], identifiers[ident_Given]);
    refalrts::copy_evar(vm, context[25], context[26], context[17], context[18]);
    refalrts::alloc_ident(vm, context[27], identifiers[ident_Native]);
    refalrts::update_name(context[4], functions[efunc_Prout]);
    refalrts::update_ident(context[10], identifiers[ident_RASL]);
    refalrts::reinit_open_bracket(context[1]);
    refalrts::reinit_ident(context[15], identifiers[ident_Given]);
    refalrts::link_brackets( context[1], context[16] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[27], context[27] );
    res = refalrts::splice_evar( res, context[8], context[1] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[24], context[24] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CompileFiles$1\1/4 t.Config#1/11 (/7 s.Pos#2/9 # Source/10 (/15 s.Dialect#2/17 e.Source#2/13 )/16 e.OutputName#2/5 )/8 >/1
  if( ! refalrts::ident_term( identifiers[ident_Source], context[10] ) )
    return refalrts::cRecognitionImpossible;
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[5], context[6] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.OutputName#2 as range 5
  if( ! refalrts::svar_left( context[17], context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Source#2 as range 13
  //DEBUG: t.Config#1: 11
  //DEBUG: s.Pos#2: 9
  //DEBUG: e.OutputName#2: 5
  //DEBUG: s.Dialect#2: 17
  //DEBUG: e.Source#2: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Pos#2/9 {REMOVED TILE} {REMOVED TILE} s.Dialect#2/17 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CompileFiles$1\1$3=1/4 AsIs: t.Config#1/11 HalfReuse: s.Dialect2 #17/7 } Tile{ AsIs: (/15 } Tile{ AsIs: e.Source#2/13 } )/18 Tile{ HalfReuse: (/16 AsIs: e.OutputName#2/5 AsIs: )/8 HalfReuse: </1 } Tile{ HalfReuse: & Prout/10 }"*Compiling "/19 e.Source#2/13/21 ':'/23 >/24 >/25 Tile{ ]] }
  refalrts::alloc_close_bracket(vm, context[18]);
  refalrts::alloc_chars(vm, context[19], context[20], "*Compiling ", 11);
  refalrts::copy_evar(vm, context[21], context[22], context[13], context[14]);
  refalrts::alloc_char(vm, context[23], ':');
  refalrts::alloc_close_call(vm, context[24]);
  refalrts::alloc_close_call(vm, context[25]);
  refalrts::update_name(context[4], functions[efunc_gen_CompileFiles_S1L1S3A1]);
  refalrts::reinit_svar( context[7], context[17] );
  refalrts::reinit_open_bracket(context[16]);
  refalrts::reinit_open_call(context[1]);
  refalrts::reinit_name(context[10], functions[efunc_Prout]);
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[24] );
  refalrts::push_stack( vm, context[1] );
  refalrts::link_brackets( context[16], context[8] );
  refalrts::link_brackets( context[15], context[18] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[19], context[25] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[16], context[1] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CompileFiles_S1L1("CompileFiles$1\\1", 2216874807U, 2374776932U, func_gen_CompileFiles_S1L1);


static refalrts::FnResult func_gen_CompileFiles_S2L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & CompileFiles$2\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CompileFiles$2\1/4 t.new#1/11 (/7 s.new#2/9 s.new#3/10 e.new#4/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 5
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & CompileFiles$2\1/4 t.Config#1/11 (/7 s.Pos#2/9 # Output/10 e.OutputName#2/13 )/8 >/1
    context[13] = context[5];
    context[14] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_Output], context[10] ) )
      continue;
    // closed e.OutputName#2 as range 13
    //DEBUG: t.Config#1: 11
    //DEBUG: s.Pos#2: 9
    //DEBUG: e.OutputName#2: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} t.Config#1/11 {REMOVED TILE} s.Pos#2/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Prout/4 } '+'/15 Tile{ HalfReuse: 'S'/7 }"kipping native file "/16 e.OutputName#2/13/18 Tile{ AsIs: >/1 } Tile{ HalfReuse: (/10 AsIs: e.OutputName#2/13 AsIs: )/8 } Tile{ ]] }
    refalrts::alloc_char(vm, context[15], '+');
    refalrts::alloc_chars(vm, context[16], context[17], "kipping native file ", 20);
    refalrts::copy_evar(vm, context[18], context[19], context[13], context[14]);
    refalrts::update_name(context[4], functions[efunc_Prout]);
    refalrts::reinit_char(context[7], 'S');
    refalrts::reinit_open_bracket(context[10]);
    refalrts::link_brackets( context[10], context[8] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[8] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CompileFiles$2\1/4 t.Config#1/11 (/7 s.Pos#2/9 # Source/10 (/15 s.Dialect#2/17 e.Source#2/13 )/16 e.OutputName#2/5 )/8 >/1
  if( ! refalrts::ident_term( identifiers[ident_Source], context[10] ) )
    return refalrts::cRecognitionImpossible;
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[5], context[6] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.OutputName#2 as range 5
  if( ! refalrts::svar_left( context[17], context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Source#2 as range 13
  //DEBUG: t.Config#1: 11
  //DEBUG: s.Pos#2: 9
  //DEBUG: e.OutputName#2: 5
  //DEBUG: s.Dialect#2: 17
  //DEBUG: e.Source#2: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.Pos#2/9 {REMOVED TILE} s.Dialect#2/17 {REMOVED TILE} {REMOVED TILE} e.OutputName#2/5 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </16 } & Prout/18 Tile{ HalfReuse: '*'/10 HalfReuse: 'G'/15 } Tile{ HalfReuse: 'r'/8 }"ammar checking "/19 Tile{ AsIs: e.Source#2/13 } ':'/21 >/22 Tile{ AsIs: </0 Reuse: & GrammarCheck/4 AsIs: t.Config#1/11 HalfReuse: s.Dialect2 #17/7 } e.Source#2/13/23 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[18], functions[efunc_Prout]);
  refalrts::alloc_chars(vm, context[19], context[20], "ammar checking ", 15);
  refalrts::alloc_char(vm, context[21], ':');
  refalrts::alloc_close_call(vm, context[22]);
  refalrts::copy_evar(vm, context[23], context[24], context[13], context[14]);
  refalrts::reinit_open_call(context[16]);
  refalrts::reinit_char(context[10], '*');
  refalrts::reinit_char(context[15], 'G');
  refalrts::reinit_char(context[8], 'r');
  refalrts::update_name(context[4], functions[efunc_GrammarCheck]);
  refalrts::reinit_svar( context[7], context[17] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[22] );
  refalrts::push_stack( vm, context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[10], context[15] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CompileFiles_S2L1("CompileFiles$2\\1", 2216874807U, 2374776932U, func_gen_CompileFiles_S2L1);


static refalrts::FnResult func_CompileFiles(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & CompileFiles/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CompileFiles/4 t.new#1/5 s.new#2/7 e.new#3/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & CompileFiles/4 t.Config#1/5 # NormalRun/7 e.Files#1/8 >/1
    context[8] = context[2];
    context[9] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_NormalRun], context[7] ) )
      continue;
    // closed e.Files#1 as range 8
    //DEBUG: t.Config#1: 5
    //DEBUG: e.Files#1: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} # NormalRun/7 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@6/4 AsIs: t.Config#1/5 } Tile{ AsIs: e.Files#1/8 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_Map_Z6]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::splice_to_freelist_open( vm, context[6], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CompileFiles/4 t.Config#1/5 # GrammarCheck/7 e.Files#1/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_GrammarCheck], context[7] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Files#1 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: e.Files#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} # GrammarCheck/7 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@7/4 AsIs: t.Config#1/5 } Tile{ AsIs: e.Files#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z7]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, context[6], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CompileFiles("CompileFiles", 2216874807U, 2374776932U, func_CompileFiles);


static refalrts::FnResult func_gen_Link_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & Link:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Link:1/4 t.new#1/5 t.new#2/7 (/11 e.new#3/9 )/12 s.new#4/13 >/1
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
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & Link:1/4 t.CommandLineSource#1/5 t.Config#1/7 (/11 e.Files#1/14 )/12 # EXE/13 >/1
    context[14] = context[9];
    context[15] = context[10];
    if( ! refalrts::ident_term( identifiers[ident_EXE], context[13] ) )
      continue;
    // closed e.Files#1 as range 14
    //DEBUG: t.CommandLineSource#1: 5
    //DEBUG: t.Config#1: 7
    //DEBUG: e.Files#1: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Link-Exe/4 AsIs: t.CommandLineSource#1/5 AsIs: t.Config#1/7 AsIs: (/11 } </16 & Config-GetCppCompiler/17 t.Config#1/7/18 Tile{ AsIs: # EXE/13 AsIs: >/1 } Tile{ AsIs: )/12 } (/20 </21 & Config-GetPrefix/22 t.Config#1/7/23 >/25 )/26 Tile{ AsIs: e.Files#1/14 } >/27 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[16]);
    refalrts::alloc_name(vm, context[17], functions[efunc_Configm_GetCppCompiler]);
    refalrts::copy_evar(vm, context[18], context[19], context[7], context[8]);
    refalrts::alloc_open_bracket(vm, context[20]);
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_Configm_GetPrefix]);
    refalrts::copy_evar(vm, context[23], context[24], context[7], context[8]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::alloc_close_bracket(vm, context[26]);
    refalrts::alloc_close_call(vm, context[27]);
    refalrts::update_name(context[4], functions[efunc_Linkm_Exe]);
    refalrts::push_stack( vm, context[27] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[20], context[26] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[21] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[27], context[27] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[20], context[26] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[13], context[1] );
    res = refalrts::splice_evar( res, context[16], context[19] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Link:1/4 t.CommandLineSource#1/5 t.Config#1/7 (/11 e.Files#1/14 )/12 # LIB/13 >/1
    context[14] = context[9];
    context[15] = context[10];
    if( ! refalrts::ident_term( identifiers[ident_LIB], context[13] ) )
      continue;
    // closed e.Files#1 as range 14
    //DEBUG: t.CommandLineSource#1: 5
    //DEBUG: t.Config#1: 7
    //DEBUG: e.Files#1: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Link-Lib/4 AsIs: t.CommandLineSource#1/5 AsIs: t.Config#1/7 AsIs: (/11 } </16 & Config-GetCppCompiler/17 t.Config#1/7/18 Tile{ AsIs: # LIB/13 AsIs: >/1 } Tile{ AsIs: )/12 } (/20 </21 & Config-GetPrefix/22 t.Config#1/7/23 >/25 )/26 Tile{ AsIs: e.Files#1/14 } >/27 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[16]);
    refalrts::alloc_name(vm, context[17], functions[efunc_Configm_GetCppCompiler]);
    refalrts::copy_evar(vm, context[18], context[19], context[7], context[8]);
    refalrts::alloc_open_bracket(vm, context[20]);
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_Configm_GetPrefix]);
    refalrts::copy_evar(vm, context[23], context[24], context[7], context[8]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::alloc_close_bracket(vm, context[26]);
    refalrts::alloc_close_call(vm, context[27]);
    refalrts::update_name(context[4], functions[efunc_Linkm_Lib]);
    refalrts::push_stack( vm, context[27] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[20], context[26] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[21] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[27], context[27] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[20], context[26] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[13], context[1] );
    res = refalrts::splice_evar( res, context[16], context[19] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Link:1/4 t.CommandLineSource#1/5 t.Config#1/7 (/11 e.Files#1/14 )/12 # R/13 >/1
    context[14] = context[9];
    context[15] = context[10];
    if( ! refalrts::ident_term( identifiers[ident_R], context[13] ) )
      continue;
    // closed e.Files#1 as range 14
    //DEBUG: t.CommandLineSource#1: 5
    //DEBUG: t.Config#1: 7
    //DEBUG: e.Files#1: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/11 {REMOVED TILE} )/12 # R/13 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Link-R/4 AsIs: t.CommandLineSource#1/5 AsIs: t.Config#1/7 } Tile{ AsIs: e.Files#1/14 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_Linkm_R]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::splice_to_freelist_open( vm, context[8], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Link:1/4 t.CommandLineSource#1/5 t.Config#1/7 (/11 e.Files#1/9 )/12 # CompileOnly/13 >/1
  if( ! refalrts::ident_term( identifiers[ident_CompileOnly], context[13] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Files#1 as range 9
  //DEBUG: t.CommandLineSource#1: 5
  //DEBUG: t.Config#1: 7
  //DEBUG: e.Files#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Link:1/4 t.CommandLineSource#1/5 t.Config#1/7 (/11 e.Files#1/9 )/12 # CompileOnly/13 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Link_B1("Link:1", 2216874807U, 2374776932U, func_gen_Link_B1);


static refalrts::FnResult func_Link(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & Link/4 t.CommandLineSource#1/5 t.Config#1/7 e.Files#1/2 >/1
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
  // closed e.Files#1 as range 2
  //DEBUG: t.CommandLineSource#1: 5
  //DEBUG: t.Config#1: 7
  //DEBUG: e.Files#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Link:1/4 AsIs: t.CommandLineSource#1/5 AsIs: t.Config#1/7 } (/9 Tile{ AsIs: e.Files#1/2 } )/10 </11 & Config-GetTargetMode/12 t.Config#1/7/13 >/15 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_close_bracket(vm, context[10]);
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_Configm_GetTargetMode]);
  refalrts::copy_evar(vm, context[13], context[14], context[7], context[8]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::update_name(context[4], functions[efunc_gen_Link_B1]);
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
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Link("Link", 2216874807U, 2374776932U, func_Link);


static refalrts::FnResult func_gen_Linkm_Exe_S4B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & Link-Exe$4:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Link-Exe$4:1/4 t.new#1/5 (/9 e.new#2/7 )/10 t.new#3/11 s.new#4/13 e.new#5/2 >/1
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
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#5 as range 2
  do {
    // </0 & Link-Exe$4:1/4 t.Config#1/5 (/9 e.Files#1/14 )/10 t.CommandLineSource#1/11 # Success/13 e.PrefixFileName#2/16 >/1
    context[14] = context[7];
    context[15] = context[8];
    context[16] = context[2];
    context[17] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Success], context[13] ) )
      continue;
    // closed e.Files#1 as range 14
    // closed e.PrefixFileName#2 as range 16
    //DEBUG: t.Config#1: 5
    //DEBUG: t.CommandLineSource#1: 11
    //DEBUG: e.Files#1: 14
    //DEBUG: e.PrefixFileName#2: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.CommandLineSource#1/11 # Success/13 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Link-WithPrefix/4 } Tile{ AsIs: (/9 } Tile{ AsIs: e.PrefixFileName#2/16 } Tile{ AsIs: )/10 } Tile{ AsIs: t.Config#1/5 } Tile{ AsIs: e.Files#1/14 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_Linkm_WithPrefix]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Link-Exe$4:1/4 t.Config#1/5 (/9 e.Files#1/7 )/10 t.CommandLineSource#1/11 # Fails/13 e.ExpectedPrefixName#2/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_Fails], context[13] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Files#1 as range 7
  // closed e.ExpectedPrefixName#2 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: t.CommandLineSource#1: 11
  //DEBUG: e.Files#1: 7
  //DEBUG: e.ExpectedPrefixName#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Files#1/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReportErrors/4 } Tile{ AsIs: t.CommandLineSource#1/11 } Tile{ AsIs: t.Config#1/5 AsIs: (/9 } 1/14 'C'/15 Tile{ HalfReuse: 'a'/13 }"n\'t find prefix "/16 Tile{ AsIs: e.ExpectedPrefixName#2/2 } Tile{ AsIs: )/10 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_number(vm, context[14], 1UL);
  refalrts::alloc_char(vm, context[15], 'C');
  refalrts::alloc_chars(vm, context[16], context[17], "n\'t find prefix ", 16);
  refalrts::update_name(context[4], functions[efunc_ReportErrors]);
  refalrts::reinit_char(context[13], 'a');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[5], context[9] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Linkm_Exe_S4B1("Link-Exe$4:1", 2216874807U, 2374776932U, func_gen_Linkm_Exe_S4B1);


static refalrts::FnResult func_Linkm_Exe(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 38 elems
  refalrts::Iter context[38];
  refalrts::zeros( context, 38 );
  // </0 & Link-Exe/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Link-Exe/4 t.new#1/5 t.new#2/7 (/11 e.new#3/9 )/12 (/15 e.new#4/13 )/16 e.new#5/2 >/1
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
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.new#3 as range 9
  // closed e.new#4 as range 13
  // closed e.new#5 as range 2
  do {
    // </0 & Link-Exe/4 t.new#6/5 t.new#7/7 (/11 e.new#9/17 t.new#10/21 )/12 (/15 )/16 e.new#8/19 >/1
    context[17] = context[9];
    context[18] = context[10];
    context[19] = context[2];
    context[20] = context[3];
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    // closed e.new#8 as range 19
    context[22] = refalrts::tvar_right( context[21], context[17], context[18] );
    if( ! context[22] )
      continue;
    // closed e.new#9 as range 17
    do {
      // </0 & Link-Exe/4 t.CommandLineSource#1/5 t.Config#1/7 (/11 # NoCppCompiler/21 )/12 (/15 )/16 e.Files#1/23 >/1
      context[23] = context[19];
      context[24] = context[20];
      if( ! refalrts::ident_term( identifiers[ident_NoCppCompiler], context[21] ) )
        continue;
      if( ! refalrts::empty_seq( context[17], context[18] ) )
        continue;
      // closed e.Files#1 as range 23
      //DEBUG: t.CommandLineSource#1: 5
      //DEBUG: t.Config#1: 7
      //DEBUG: e.Files#1: 23

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} e.Files#1/23 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReportErrors/4 AsIs: t.CommandLineSource#1/5 AsIs: t.Config#1/7 AsIs: (/11 HalfReuse: 1/21 HalfReuse: 'o'/12 HalfReuse: 'p'/15 HalfReuse: 't'/16 }"ion -x (or --exe) require option --cpp-command-exe with nonempty value"/25 )/27 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_chars(vm, context[25], context[26], "ion -x (or --exe) require option --cpp-command-exe with nonempty value", 70);
      refalrts::alloc_close_bracket(vm, context[27]);
      refalrts::update_name(context[4], functions[efunc_ReportErrors]);
      refalrts::reinit_number(context[21], 1UL);
      refalrts::reinit_char(context[12], 'o');
      refalrts::reinit_char(context[15], 'p');
      refalrts::reinit_char(context[16], 't');
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[11], context[27] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[25], context[27] );
      refalrts::splice_to_freelist_open( vm, context[16], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Link-Exe/4 t.CommandLineSource#1/5 t.Config#1/7 (/11 (/31 e.CommandLine#1/29 )/32 e.Flags#1/23 (/21 e.CommandLineSuf#1/27 )/22 )/12 (/15 )/16 e.Files#1/25 >/1
    context[23] = context[17];
    context[24] = context[18];
    context[25] = context[19];
    context[26] = context[20];
    context[27] = 0;
    context[28] = 0;
    if( ! refalrts::brackets_term( context[27], context[28], context[21] ) )
      continue;
    context[29] = 0;
    context[30] = 0;
    context[31] = refalrts::brackets_left( context[29], context[30], context[23], context[24] );
    if( ! context[31] )
      continue;
    refalrts::bracket_pointers(context[31], context[32]);
    // closed e.CommandLine#1 as range 29
    // closed e.Flags#1 as range 23
    // closed e.CommandLineSuf#1 as range 27
    // closed e.Files#1 as range 25
    //DEBUG: t.CommandLineSource#1: 5
    //DEBUG: t.Config#1: 7
    //DEBUG: e.CommandLine#1: 29
    //DEBUG: e.Flags#1: 23
    //DEBUG: e.CommandLineSuf#1: 27
    //DEBUG: e.Files#1: 25

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} t.CommandLineSource#1/5 {REMOVED TILE} (/15 )/16 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Link-CppCompile/4 } Tile{ AsIs: t.Config#1/7 AsIs: (/11 AsIs: (/31 AsIs: e.CommandLine#1/29 AsIs: )/32 AsIs: e.Flags#1/23 AsIs: (/21 AsIs: e.CommandLineSuf#1/27 AsIs: )/22 AsIs: )/12 } Tile{ AsIs: e.Files#1/25 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_Linkm_CppCompile]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::link_brackets( context[31], context[32] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[7], context[12] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Link-Exe/4 t.CommandLineSource#1/5 t.Config#1/7 (/11 e.AnyCommandLine#1/17 )/12 (/15 e.Prefix#1/19 )/16 e.Files-B#1/23 (/29 # Native/31 e.FileName#1/27 )/30 e.Files-E#1/25 >/1
    context[17] = context[9];
    context[18] = context[10];
    context[19] = context[13];
    context[20] = context[14];
    context[21] = context[2];
    context[22] = context[3];
    // closed e.AnyCommandLine#1 as range 17
    // closed e.Prefix#1 as range 19
    context[23] = 0;
    context[24] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[25] = context[21];
      context[26] = context[22];
      context[27] = 0;
      context[28] = 0;
      context[29] = refalrts::brackets_left( context[27], context[28], context[25], context[26] );
      if( ! context[29] )
        continue;
      refalrts::bracket_pointers(context[29], context[30]);
      context[31] = refalrts::ident_left( identifiers[ident_Native], context[27], context[28] );
      if( ! context[31] )
        continue;
      // closed e.FileName#1 as range 27
      // closed e.Files-E#1 as range 25
      //DEBUG: t.CommandLineSource#1: 5
      //DEBUG: t.Config#1: 7
      //DEBUG: e.AnyCommandLine#1: 17
      //DEBUG: e.Prefix#1: 19
      //DEBUG: e.Files-B#1: 23
      //DEBUG: e.FileName#1: 27
      //DEBUG: e.Files-E#1: 25

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} e.AnyCommandLine#1/17 {REMOVED TILE} e.Prefix#1/19 {REMOVED TILE} e.Files-B#1/23 {REMOVED TILE} e.Files-E#1/25 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReportErrors/4 AsIs: t.CommandLineSource#1/5 AsIs: t.Config#1/7 AsIs: (/11 } 1/32 'u'/33 Tile{ HalfReuse: 'n'/12 HalfReuse: 'e'/15 }"xpected native fil"/34 Tile{ HalfReuse: 'e'/29 HalfReuse: ' '/31 AsIs: e.FileName#1/27 HalfReuse: ' '/30 }"while compilation runs with prefix"/36 Tile{ AsIs: )/16 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_number(vm, context[32], 1UL);
      refalrts::alloc_char(vm, context[33], 'u');
      refalrts::alloc_chars(vm, context[34], context[35], "xpected native fil", 18);
      refalrts::alloc_chars(vm, context[36], context[37], "while compilation runs with prefix", 34);
      refalrts::update_name(context[4], functions[efunc_ReportErrors]);
      refalrts::reinit_char(context[12], 'n');
      refalrts::reinit_char(context[15], 'e');
      refalrts::reinit_char(context[29], 'e');
      refalrts::reinit_char(context[31], ' ');
      refalrts::reinit_char(context[30], ' ');
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[11], context[16] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[16], context[16] );
      res = refalrts::splice_evar( res, context[36], context[37] );
      res = refalrts::splice_evar( res, context[29], context[30] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      res = refalrts::splice_evar( res, context[12], context[15] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      refalrts::splice_to_freelist_open( vm, context[11], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[23], context[24], context[21], context[22] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Link-Exe/4 t.CommandLineSource#1/5 t.Config#1/7 (/11 e.AnyCommandLine#1/9 )/12 (/15 e.Prefix#1/13 )/16 e.Files#1/2 >/1
  // closed e.AnyCommandLine#1 as range 9
  // closed e.Prefix#1 as range 13
  // closed e.Files#1 as range 2
  //DEBUG: t.CommandLineSource#1: 5
  //DEBUG: t.Config#1: 7
  //DEBUG: e.AnyCommandLine#1: 9
  //DEBUG: e.Prefix#1: 13
  //DEBUG: e.Files#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.AnyCommandLine#1/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Link-Exe$4:1/4 } Tile{ AsIs: t.Config#1/7 AsIs: (/11 } Tile{ AsIs: e.Files#1/2 } Tile{ AsIs: )/12 } Tile{ AsIs: t.CommandLineSource#1/5 } Tile{ HalfReuse: </15 } Tile{ HalfReuse: & FindPrefix/16 } t.Config#1/7/17 Tile{ AsIs: e.Prefix#1/13 } >/19 Tile{ AsIs: >/1 ]] }
  refalrts::copy_evar(vm, context[17], context[18], context[7], context[8]);
  refalrts::alloc_close_call(vm, context[19]);
  refalrts::update_name(context[4], functions[efunc_gen_Linkm_Exe_S4B1]);
  refalrts::reinit_open_call(context[15]);
  refalrts::reinit_name(context[16], functions[efunc_FindPrefix]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[15] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[11] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Linkm_Exe("Link-Exe", 2216874807U, 2374776932U, func_Linkm_Exe);


static refalrts::FnResult func_gen_Linkm_Lib_S5B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & Link-Lib$5:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Link-Lib$5:1/4 t.new#1/5 (/9 e.new#2/7 )/10 t.new#3/11 s.new#4/13 e.new#5/2 >/1
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
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#5 as range 2
  do {
    // </0 & Link-Lib$5:1/4 t.Config#1/5 (/9 e.Files#1/14 )/10 t.CommandLineSource#1/11 # Success/13 e.PrefixFileName#2/16 >/1
    context[14] = context[7];
    context[15] = context[8];
    context[16] = context[2];
    context[17] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Success], context[13] ) )
      continue;
    // closed e.Files#1 as range 14
    // closed e.PrefixFileName#2 as range 16
    //DEBUG: t.Config#1: 5
    //DEBUG: t.CommandLineSource#1: 11
    //DEBUG: e.Files#1: 14
    //DEBUG: e.PrefixFileName#2: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.CommandLineSource#1/11 # Success/13 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Link-WithPrefix/4 } Tile{ AsIs: (/9 } Tile{ AsIs: e.PrefixFileName#2/16 } Tile{ AsIs: )/10 } Tile{ AsIs: t.Config#1/5 } Tile{ AsIs: e.Files#1/14 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_Linkm_WithPrefix]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Link-Lib$5:1/4 t.Config#1/5 (/9 e.Files#1/7 )/10 t.CommandLineSource#1/11 # Fails/13 e.ExpectedPrefixName#2/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_Fails], context[13] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Files#1 as range 7
  // closed e.ExpectedPrefixName#2 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: t.CommandLineSource#1: 11
  //DEBUG: e.Files#1: 7
  //DEBUG: e.ExpectedPrefixName#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReportWarnings/4 } t.CommandLineSource#1/11/14 Tile{ AsIs: t.Config#1/5 AsIs: (/9 } 1/16"Ca"/17 Tile{ HalfReuse: 'n'/13 }"\'t find prefix "/19 Tile{ AsIs: e.ExpectedPrefixName#2/2 }", create module without prefix (R module)"/21 )/23 >/24 </25 Tile{ HalfReuse: & Link-R/10 AsIs: t.CommandLineSource#1/11 } t.Config#1/5/26 Tile{ AsIs: e.Files#1/7 } Tile{ AsIs: >/1 ]] }
  refalrts::copy_evar(vm, context[14], context[15], context[11], context[12]);
  refalrts::alloc_number(vm, context[16], 1UL);
  refalrts::alloc_chars(vm, context[17], context[18], "Ca", 2);
  refalrts::alloc_chars(vm, context[19], context[20], "\'t find prefix ", 15);
  refalrts::alloc_chars(vm, context[21], context[22], ", create module without prefix (R module)", 41);
  refalrts::alloc_close_bracket(vm, context[23]);
  refalrts::alloc_close_call(vm, context[24]);
  refalrts::alloc_open_call(vm, context[25]);
  refalrts::copy_evar(vm, context[26], context[27], context[5], context[6]);
  refalrts::update_name(context[4], functions[efunc_ReportWarnings]);
  refalrts::reinit_char(context[13], 'n');
  refalrts::reinit_name(context[10], functions[efunc_Linkm_R]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[24] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[9], context[23] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  res = refalrts::splice_evar( res, context[10], context[12] );
  res = refalrts::splice_evar( res, context[21], context[25] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[16], context[18] );
  res = refalrts::splice_evar( res, context[5], context[9] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Linkm_Lib_S5B1("Link-Lib$5:1", 2216874807U, 2374776932U, func_gen_Linkm_Lib_S5B1);


static refalrts::FnResult func_Linkm_Lib(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 40 elems
  refalrts::Iter context[40];
  refalrts::zeros( context, 40 );
  // </0 & Link-Lib/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Link-Lib/4 t.new#1/5 t.new#2/7 (/11 e.new#3/9 )/12 (/15 e.new#4/13 )/16 e.new#5/2 >/1
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
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.new#3 as range 9
  // closed e.new#4 as range 13
  // closed e.new#5 as range 2
  do {
    // </0 & Link-Lib/4 t.new#6/5 t.new#7/7 (/11 e.new#9/17 t.new#10/21 )/12 (/15 )/16 e.new#8/19 >/1
    context[17] = context[9];
    context[18] = context[10];
    context[19] = context[2];
    context[20] = context[3];
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    // closed e.new#8 as range 19
    context[22] = refalrts::tvar_right( context[21], context[17], context[18] );
    if( ! context[22] )
      continue;
    // closed e.new#9 as range 17
    do {
      // </0 & Link-Lib/4 t.new#11/5 t.new#12/7 (/11 # NoCppCompiler/21 )/12 (/15 )/16 e.new#13/23 >/1
      context[23] = context[19];
      context[24] = context[20];
      if( ! refalrts::ident_term( identifiers[ident_NoCppCompiler], context[21] ) )
        continue;
      if( ! refalrts::empty_seq( context[17], context[18] ) )
        continue;
      // closed e.new#13 as range 23
      do {
        // </0 & Link-Lib/4 t.CommandLineSource#1/5 t.Config#1/7 (/11 # NoCppCompiler/21 )/12 (/15 )/16 e.Files-B#1/27 (/33 # Native/35 e.FileName#1/31 )/34 e.Files-E#1/29 >/1
        context[25] = context[23];
        context[26] = context[24];
        context[27] = 0;
        context[28] = 0;
        refalrts::start_e_loop(vm);
        do {
          context[29] = context[25];
          context[30] = context[26];
          context[31] = 0;
          context[32] = 0;
          context[33] = refalrts::brackets_left( context[31], context[32], context[29], context[30] );
          if( ! context[33] )
            continue;
          refalrts::bracket_pointers(context[33], context[34]);
          context[35] = refalrts::ident_left( identifiers[ident_Native], context[31], context[32] );
          if( ! context[35] )
            continue;
          // closed e.FileName#1 as range 31
          // closed e.Files-E#1 as range 29
          //DEBUG: t.CommandLineSource#1: 5
          //DEBUG: t.Config#1: 7
          //DEBUG: e.Files-B#1: 27
          //DEBUG: e.FileName#1: 31
          //DEBUG: e.Files-E#1: 29

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} e.Files-B#1/27 {REMOVED TILE} e.FileName#1/31 {REMOVED TILE} e.Files-E#1/29 {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReportErrors/4 AsIs: t.CommandLineSource#1/5 AsIs: t.Config#1/7 AsIs: (/11 HalfReuse: 1/21 HalfReuse: 'o'/12 HalfReuse: 'p'/15 HalfReuse: 't'/16 }"io"/36 Tile{ HalfReuse: 'n'/33 HalfReuse: ' '/35 }"-l (or --lib) with native code require option --cpp-command-lib with nonempty value"/38 Tile{ AsIs: )/34 } Tile{ AsIs: >/1 ]] }
          refalrts::alloc_chars(vm, context[36], context[37], "io", 2);
          refalrts::alloc_chars(vm, context[38], context[39], "-l (or --lib) with native code require option --cpp-command-lib with nonempty value", 83);
          refalrts::update_name(context[4], functions[efunc_ReportErrors]);
          refalrts::reinit_number(context[21], 1UL);
          refalrts::reinit_char(context[12], 'o');
          refalrts::reinit_char(context[15], 'p');
          refalrts::reinit_char(context[16], 't');
          refalrts::reinit_char(context[33], 'n');
          refalrts::reinit_char(context[35], ' ');
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[11], context[34] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[34], context[34] );
          res = refalrts::splice_evar( res, context[38], context[39] );
          res = refalrts::splice_evar( res, context[33], context[35] );
          res = refalrts::splice_evar( res, context[36], context[37] );
          refalrts::splice_to_freelist_open( vm, context[16], res );
          return refalrts::cSuccess;
        } while ( refalrts::open_evar_advance( context[27], context[28], context[25], context[26] ) );
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Link-Lib/4 t.CommandLineSource#1/5 t.Config#1/7 (/11 # NoCppCompiler/21 )/12 (/15 )/16 e.Files#1/25 >/1
      context[25] = context[23];
      context[26] = context[24];
      // closed e.Files#1 as range 25
      //DEBUG: t.CommandLineSource#1: 5
      //DEBUG: t.Config#1: 7
      //DEBUG: e.Files#1: 25

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReportWarnings/4 AsIs: t.CommandLineSource#1/5 AsIs: t.Config#1/7 AsIs: (/11 HalfReuse: 1/21 HalfReuse: 'p'/12 HalfReuse: 'r'/15 HalfReuse: 'e'/16 }"fix name or C++ command line is not found, create library without prefix"/27 )/29 >/30 </31 & Link-R/32 t.CommandLineSource#1/5/33 t.Config#1/7/35 Tile{ AsIs: e.Files#1/25 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_chars(vm, context[27], context[28], "fix name or C++ command line is not found, create library without prefix", 72);
      refalrts::alloc_close_bracket(vm, context[29]);
      refalrts::alloc_close_call(vm, context[30]);
      refalrts::alloc_open_call(vm, context[31]);
      refalrts::alloc_name(vm, context[32], functions[efunc_Linkm_R]);
      refalrts::copy_evar(vm, context[33], context[34], context[5], context[6]);
      refalrts::copy_evar(vm, context[35], context[36], context[7], context[8]);
      refalrts::update_name(context[4], functions[efunc_ReportWarnings]);
      refalrts::reinit_number(context[21], 1UL);
      refalrts::reinit_char(context[12], 'p');
      refalrts::reinit_char(context[15], 'r');
      refalrts::reinit_char(context[16], 'e');
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[31] );
      refalrts::push_stack( vm, context[30] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[11], context[29] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_evar( res, context[27], context[36] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Link-Lib/4 t.CommandLineSource#1/5 t.Config#1/7 (/11 (/31 e.CommandLine#1/29 )/32 e.Flags#1/23 (/21 e.CommandLineSuf#1/27 )/22 )/12 (/15 )/16 e.Files#1/25 >/1
    context[23] = context[17];
    context[24] = context[18];
    context[25] = context[19];
    context[26] = context[20];
    context[27] = 0;
    context[28] = 0;
    if( ! refalrts::brackets_term( context[27], context[28], context[21] ) )
      continue;
    context[29] = 0;
    context[30] = 0;
    context[31] = refalrts::brackets_left( context[29], context[30], context[23], context[24] );
    if( ! context[31] )
      continue;
    refalrts::bracket_pointers(context[31], context[32]);
    // closed e.CommandLine#1 as range 29
    // closed e.Flags#1 as range 23
    // closed e.CommandLineSuf#1 as range 27
    // closed e.Files#1 as range 25
    //DEBUG: t.CommandLineSource#1: 5
    //DEBUG: t.Config#1: 7
    //DEBUG: e.CommandLine#1: 29
    //DEBUG: e.Flags#1: 23
    //DEBUG: e.CommandLineSuf#1: 27
    //DEBUG: e.Files#1: 25

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} t.CommandLineSource#1/5 {REMOVED TILE} (/15 )/16 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Link-CppCompile/4 } Tile{ AsIs: t.Config#1/7 AsIs: (/11 AsIs: (/31 AsIs: e.CommandLine#1/29 AsIs: )/32 AsIs: e.Flags#1/23 AsIs: (/21 AsIs: e.CommandLineSuf#1/27 AsIs: )/22 AsIs: )/12 } Tile{ AsIs: e.Files#1/25 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_Linkm_CppCompile]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::link_brackets( context[31], context[32] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[7], context[12] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Link-Lib/4 t.CommandLineSource#1/5 t.Config#1/7 (/11 e.AnyCommandLine#1/17 )/12 (/15 e.Prefix#1/19 )/16 e.Files-B#1/23 (/29 # Native/31 e.FileName#1/27 )/30 e.Files-E#1/25 >/1
    context[17] = context[9];
    context[18] = context[10];
    context[19] = context[13];
    context[20] = context[14];
    context[21] = context[2];
    context[22] = context[3];
    // closed e.AnyCommandLine#1 as range 17
    // closed e.Prefix#1 as range 19
    context[23] = 0;
    context[24] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[25] = context[21];
      context[26] = context[22];
      context[27] = 0;
      context[28] = 0;
      context[29] = refalrts::brackets_left( context[27], context[28], context[25], context[26] );
      if( ! context[29] )
        continue;
      refalrts::bracket_pointers(context[29], context[30]);
      context[31] = refalrts::ident_left( identifiers[ident_Native], context[27], context[28] );
      if( ! context[31] )
        continue;
      // closed e.FileName#1 as range 27
      // closed e.Files-E#1 as range 25
      //DEBUG: t.CommandLineSource#1: 5
      //DEBUG: t.Config#1: 7
      //DEBUG: e.AnyCommandLine#1: 17
      //DEBUG: e.Prefix#1: 19
      //DEBUG: e.Files-B#1: 23
      //DEBUG: e.FileName#1: 27
      //DEBUG: e.Files-E#1: 25

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} e.AnyCommandLine#1/17 {REMOVED TILE} e.Prefix#1/19 {REMOVED TILE} e.Files-B#1/23 {REMOVED TILE} e.Files-E#1/25 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReportErrors/4 AsIs: t.CommandLineSource#1/5 AsIs: t.Config#1/7 AsIs: (/11 } 1/32 'u'/33 Tile{ HalfReuse: 'n'/12 HalfReuse: 'e'/15 }"xpected native fil"/34 Tile{ HalfReuse: 'e'/29 HalfReuse: ' '/31 AsIs: e.FileName#1/27 HalfReuse: ' '/30 }"while compilation runs with prefix"/36 Tile{ AsIs: )/16 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_number(vm, context[32], 1UL);
      refalrts::alloc_char(vm, context[33], 'u');
      refalrts::alloc_chars(vm, context[34], context[35], "xpected native fil", 18);
      refalrts::alloc_chars(vm, context[36], context[37], "while compilation runs with prefix", 34);
      refalrts::update_name(context[4], functions[efunc_ReportErrors]);
      refalrts::reinit_char(context[12], 'n');
      refalrts::reinit_char(context[15], 'e');
      refalrts::reinit_char(context[29], 'e');
      refalrts::reinit_char(context[31], ' ');
      refalrts::reinit_char(context[30], ' ');
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[11], context[16] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[16], context[16] );
      res = refalrts::splice_evar( res, context[36], context[37] );
      res = refalrts::splice_evar( res, context[29], context[30] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      res = refalrts::splice_evar( res, context[12], context[15] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      refalrts::splice_to_freelist_open( vm, context[11], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[23], context[24], context[21], context[22] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Link-Lib/4 t.CommandLineSource#1/5 t.Config#1/7 (/11 e.AnyCommandLine#1/9 )/12 (/15 e.Prefix#1/13 )/16 e.Files#1/2 >/1
  // closed e.AnyCommandLine#1 as range 9
  // closed e.Prefix#1 as range 13
  // closed e.Files#1 as range 2
  //DEBUG: t.CommandLineSource#1: 5
  //DEBUG: t.Config#1: 7
  //DEBUG: e.AnyCommandLine#1: 9
  //DEBUG: e.Prefix#1: 13
  //DEBUG: e.Files#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.AnyCommandLine#1/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Link-Lib$5:1/4 } Tile{ AsIs: t.Config#1/7 AsIs: (/11 } Tile{ AsIs: e.Files#1/2 } Tile{ AsIs: )/12 } Tile{ AsIs: t.CommandLineSource#1/5 } Tile{ HalfReuse: </15 } Tile{ HalfReuse: & FindPrefix/16 } t.Config#1/7/17 Tile{ AsIs: e.Prefix#1/13 } >/19 Tile{ AsIs: >/1 ]] }
  refalrts::copy_evar(vm, context[17], context[18], context[7], context[8]);
  refalrts::alloc_close_call(vm, context[19]);
  refalrts::update_name(context[4], functions[efunc_gen_Linkm_Lib_S5B1]);
  refalrts::reinit_open_call(context[15]);
  refalrts::reinit_name(context[16], functions[efunc_FindPrefix]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[15] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[11] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Linkm_Lib("Link-Lib", 2216874807U, 2374776932U, func_Linkm_Lib);


static refalrts::FnResult func_gen_Linkm_R_S2L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & Link-R$2\1/4 e.IntermediateName#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.IntermediateName#2 as range 2
  //DEBUG: e.IntermediateName#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Link-R$2\1/4 e.IntermediateName#2/2 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Linkm_R_S2L1("Link-R$2\\1", 2216874807U, 2374776932U, func_gen_Linkm_R_S2L1);


static refalrts::FnResult func_Linkm_R(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & Link-R/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Link-R/4 t.new#1/5 t.new#2/7 e.new#3/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & Link-R/4 t.CommandLineSource#1/5 t.Config#1/7 e.Files-B#1/11 (/17 # Native/19 e.FileName#1/15 )/18 e.Files-E#1/13 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[11] = 0;
    context[12] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[13] = context[9];
      context[14] = context[10];
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::brackets_left( context[15], context[16], context[13], context[14] );
      if( ! context[17] )
        continue;
      refalrts::bracket_pointers(context[17], context[18]);
      context[19] = refalrts::ident_left( identifiers[ident_Native], context[15], context[16] );
      if( ! context[19] )
        continue;
      // closed e.FileName#1 as range 15
      // closed e.Files-E#1 as range 13
      //DEBUG: t.CommandLineSource#1: 5
      //DEBUG: t.Config#1: 7
      //DEBUG: e.Files-B#1: 11
      //DEBUG: e.FileName#1: 15
      //DEBUG: e.Files-E#1: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} e.Files-B#1/11 {REMOVED TILE} e.Files-E#1/13 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReportErrors/4 AsIs: t.CommandLineSource#1/5 AsIs: t.Config#1/7 } (/20 1/21"unexpected native fil"/22 Tile{ HalfReuse: 'e'/17 HalfReuse: ' '/19 AsIs: e.FileName#1/15 HalfReuse: ' '/18 }"while creating R module"/24 )/26 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[20]);
      refalrts::alloc_number(vm, context[21], 1UL);
      refalrts::alloc_chars(vm, context[22], context[23], "unexpected native fil", 21);
      refalrts::alloc_chars(vm, context[24], context[25], "while creating R module", 23);
      refalrts::alloc_close_bracket(vm, context[26]);
      refalrts::update_name(context[4], functions[efunc_ReportErrors]);
      refalrts::reinit_char(context[17], 'e');
      refalrts::reinit_char(context[19], ' ');
      refalrts::reinit_char(context[18], ' ');
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[20], context[26] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[24], context[26] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[20], context[23] );
      refalrts::splice_to_freelist_open( vm, context[8], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[11], context[12], context[9], context[10] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Link-R/4 t.CommandLineSource#1/5 t.Config#1/7 e.Files#1/2 >/1
  // closed e.Files#1 as range 2
  //DEBUG: t.CommandLineSource#1: 5
  //DEBUG: t.Config#1: 7
  //DEBUG: e.Files#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} t.CommandLineSource#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Link-Aux/4 } # R/9 & Link-R$2\1/10 Tile{ AsIs: t.Config#1/7 AsIs: e.Files#1/2 AsIs: >/1 ]] }
  refalrts::alloc_ident(vm, context[9], identifiers[ident_R]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_Linkm_R_S2L1]);
  refalrts::update_name(context[4], functions[efunc_Linkm_Aux]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[7];
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Linkm_R("Link-R", 2216874807U, 2374776932U, func_Linkm_R);


static refalrts::FnResult func_gen_Linkm_WithPrefix_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & Link-WithPrefix\1/4 (/7 e.PrefixFileName#1/5 )/8 t.Config#1/9 e.IntermediateName#2/2 >/1
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
  // closed e.PrefixFileName#1 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.IntermediateName#2 as range 2
  //DEBUG: e.PrefixFileName#1: 5
  //DEBUG: t.Config#1: 9
  //DEBUG: e.IntermediateName#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CopyPrefix/4 AsIs: (/7 AsIs: e.PrefixFileName#1/5 AsIs: )/8 } (/11 e.IntermediateName#2/2/12 )/14 >/15 </16 & Chmod-X-Prefix/17 Tile{ AsIs: t.Config#1/9 AsIs: e.IntermediateName#2/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::copy_evar(vm, context[12], context[13], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[14]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::alloc_open_call(vm, context[16]);
  refalrts::alloc_name(vm, context[17], functions[efunc_Chmodm_Xm_Prefix]);
  refalrts::update_name(context[4], functions[efunc_CopyPrefix]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[14] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[9];
  res = refalrts::splice_evar( res, context[11], context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Linkm_WithPrefix_L1("Link-WithPrefix\\1", 2216874807U, 2374776932U, func_gen_Linkm_WithPrefix_L1);


static refalrts::FnResult func_Linkm_WithPrefix(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & Link-WithPrefix/4 (/7 e.PrefixFileName#1/5 )/8 t.Config#1/9 e.Files#1/2 >/1
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
  // closed e.PrefixFileName#1 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.Files#1 as range 2
  //DEBUG: e.PrefixFileName#1: 5
  //DEBUG: t.Config#1: 9
  //DEBUG: e.Files#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </11 & Link-Aux/12 </13 & Config-GetTargetMode/14 t.Config#1/9/15 >/17 Tile{ HalfReuse: [*]/0 Reuse: & Link-WithPrefix\1/4 AsIs: (/7 AsIs: e.PrefixFileName#1/5 AsIs: )/8 AsIs: t.Config#1/9 } {*}/18 t.Config#1/9/19 Tile{ AsIs: e.Files#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_Linkm_Aux]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_Configm_GetTargetMode]);
  refalrts::copy_evar(vm, context[15], context[16], context[9], context[10]);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::alloc_unwrapped_closure(vm, context[18], context[0]);
  refalrts::copy_evar(vm, context[19], context[20], context[9], context[10]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_Linkm_WithPrefix_L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[18], context[20] );
  res = refalrts::splice_evar( res, context[0], context[10] );
  res = refalrts::splice_evar( res, context[11], context[17] );
  refalrts::use( res );
  refalrts::wrap_closure( context[18] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Linkm_WithPrefix("Link-WithPrefix", 2216874807U, 2374776932U, func_Linkm_WithPrefix);


static refalrts::FnResult func_gen_Chmodm_Xm_Prefix_B1S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & Chmod-X-Prefix:1$2=1/4 t.Config#1/5 e.RetCode#3/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.RetCode#3 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: e.RetCode#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckReturnCode/4 AsIs: t.Config#1/5 } (/7 Tile{ AsIs: e.RetCode#3/2 } )/8"chmod"/9 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_close_bracket(vm, context[8]);
  refalrts::alloc_chars(vm, context[9], context[10], "chmod", 5);
  refalrts::update_name(context[4], functions[efunc_CheckReturnCode]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[8], context[10] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Chmodm_Xm_Prefix_B1S2A1("Chmod-X-Prefix:1$2=1", 2216874807U, 2374776932U, func_gen_Chmodm_Xm_Prefix_B1S2A1);


static refalrts::FnResult func_gen_Chmodm_Xm_Prefix_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & Chmod-X-Prefix:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Chmod-X-Prefix:1/4 t.new#1/5 (/9 e.new#2/7 )/10 e.new#3/2 >/1
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
    // </0 & Chmod-X-Prefix:1/4 t.Config#1/5 (/9 e.IntermediateName#1/11 )/10 >/1
    context[11] = context[7];
    context[12] = context[8];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.IntermediateName#1 as range 11
    //DEBUG: t.Config#1: 5
    //DEBUG: e.IntermediateName#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Chmod-X-Prefix:1/4 t.Config#1/5 (/9 e.IntermediateName#1/11 )/10 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Chmod-X-Prefix:1/4 t.Config#1/5 (/9 e.IntermediateName#1/7 )/10 e.ChmodXCommand#2/2 >/1
  // closed e.IntermediateName#1 as range 7
  // closed e.ChmodXCommand#2 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: e.IntermediateName#1: 7
  //DEBUG: e.ChmodXCommand#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Chmod-X-Prefix:1$2=1/4 AsIs: t.Config#1/5 HalfReuse: </9 } & System/11 Tile{ AsIs: e.ChmodXCommand#2/2 } Tile{ HalfReuse: ' '/10 } '\"'/12 Tile{ AsIs: e.IntermediateName#1/7 } '\"'/13 >/14 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[11], functions[efunc_System]);
  refalrts::alloc_char(vm, context[12], '\"');
  refalrts::alloc_char(vm, context[13], '\"');
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::update_name(context[4], functions[efunc_gen_Chmodm_Xm_Prefix_B1S2A1]);
  refalrts::reinit_open_call(context[9]);
  refalrts::reinit_char(context[10], ' ');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Chmodm_Xm_Prefix_B1("Chmod-X-Prefix:1", 2216874807U, 2374776932U, func_gen_Chmodm_Xm_Prefix_B1);


static refalrts::FnResult func_Chmodm_Xm_Prefix(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & Chmod-X-Prefix/4 t.Config#1/5 e.IntermediateName#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.IntermediateName#1 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: e.IntermediateName#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Chmod-X-Prefix:1/4 AsIs: t.Config#1/5 } (/7 Tile{ AsIs: e.IntermediateName#1/2 } )/8 </9 & Config-GetChmodXCommand/10 t.Config#1/5/11 >/13 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_close_bracket(vm, context[8]);
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_Configm_GetChmodXCommand]);
  refalrts::copy_evar(vm, context[11], context[12], context[5], context[6]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_gen_Chmodm_Xm_Prefix_B1]);
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

static refalrts::NativeReference nat_ref_Chmodm_Xm_Prefix("Chmod-X-Prefix", 2216874807U, 2374776932U, func_Chmodm_Xm_Prefix);


static refalrts::FnResult func_CheckReturnCode(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & CheckReturnCode/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CheckReturnCode/4 t.new#1/5 (/9 e.new#2/7 )/10 e.new#3/2 >/1
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
    // </0 & CheckReturnCode/4 t.Config#1/5 (/9 0/15 )/10 e.Component#1/13 >/1
    context[11] = context[7];
    context[12] = context[8];
    context[13] = context[2];
    context[14] = context[3];
    context[15] = refalrts::number_left( 0UL, context[11], context[12] );
    if( ! context[15] )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    // closed e.Component#1 as range 13
    //DEBUG: t.Config#1: 5
    //DEBUG: e.Component#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CheckReturnCode/4 t.Config#1/5 (/9 0/15 )/10 e.Component#1/13 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CheckReturnCode/4 t.Config#1/5 (/9 e.RetCode#1/7 )/10 e.Component#1/2 >/1
  // closed e.RetCode#1 as range 7
  // closed e.Component#1 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: e.RetCode#1: 7
  //DEBUG: e.Component#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & LinkError/4 AsIs: t.Config#1/5 } Tile{ AsIs: e.Component#1/2 }" finished with return code "/11 </13 Tile{ HalfReuse: & Symb/9 AsIs: e.RetCode#1/7 HalfReuse: >/10 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[11], context[12], " finished with return code ", 27);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_LinkError]);
  refalrts::reinit_name(context[9], functions[efunc_Symb]);
  refalrts::reinit_close_call(context[10]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[11], context[13] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckReturnCode("CheckReturnCode", 2216874807U, 2374776932U, func_CheckReturnCode);


static refalrts::FnResult func_gen_Linkm_CppCompile_L1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & Link-CppCompile\1=1/4 t.Config#1/5 (/9 e.IntermediateName#3/7 )/10 e.RetCode#4/2 >/1
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
  // closed e.IntermediateName#3 as range 7
  // closed e.RetCode#4 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: e.IntermediateName#3: 7
  //DEBUG: e.RetCode#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckReturnCode/4 AsIs: t.Config#1/5 AsIs: (/9 } Tile{ AsIs: e.RetCode#4/2 } Tile{ AsIs: )/10 }"C++ compiler"/11 >/13 </14 & CheckCppCompilationSuccessed/15 t.Config#1/5/16 Tile{ AsIs: e.IntermediateName#3/7 } >/18 </19 & EnsureAligned4096/20 e.IntermediateName#3/7/21 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[11], context[12], "C++ compiler", 12);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_CheckCppCompilationSuccessed]);
  refalrts::copy_evar(vm, context[16], context[17], context[5], context[6]);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::alloc_open_call(vm, context[19]);
  refalrts::alloc_name(vm, context[20], functions[efunc_EnsureAligned4096]);
  refalrts::copy_evar(vm, context[21], context[22], context[7], context[8]);
  refalrts::update_name(context[4], functions[efunc_CheckReturnCode]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[18], context[20] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[11], context[17] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Linkm_CppCompile_L1A1("Link-CppCompile\\1=1", 2216874807U, 2374776932U, func_gen_Linkm_CppCompile_L1A1);


static refalrts::FnResult func_gen_Linkm_CppCompile_L1A1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & Link-CppCompile\1=1\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Link-CppCompile\1=1\1/4 (/7 s.new#1/9 s.new#2/10 e.new#3/5 )/8 >/1
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
    // </0 & Link-CppCompile\1=1\1/4 (/7 # RASL/9 s.Origin#4/10 e.FileName#4/11 )/8 >/1
    context[11] = context[5];
    context[12] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_RASL], context[9] ) )
      continue;
    // closed e.FileName#4 as range 11
    //DEBUG: s.Origin#4: 10
    //DEBUG: e.FileName#4: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Link-CppCompile\1=1\1/4 (/7 # RASL/9 s.Origin#4/10 e.FileName#4/11 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Link-CppCompile\1=1\1/4 (/7 # Native/9 s.Origin#4/10 e.FileName#4/5 )/8 >/1
  if( ! refalrts::ident_term( identifiers[ident_Native], context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#4 as range 5
  //DEBUG: s.Origin#4: 10
  //DEBUG: e.FileName#4: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/7 # Native/9 s.Origin#4/10 {REMOVED TILE} )/8 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '\"'/4 } Tile{ AsIs: e.FileName#4/5 } Tile{ HalfReuse: '\"'/1 ]] }
  refalrts::reinit_char(context[0], ' ');
  refalrts::reinit_char(context[4], '\"');
  refalrts::reinit_char(context[1], '\"');
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Linkm_CppCompile_L1A1L1("Link-CppCompile\\1=1\\1", 2216874807U, 2374776932U, func_gen_Linkm_CppCompile_L1A1L1);


static refalrts::FnResult func_gen_Linkm_CppCompile_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & Link-CppCompile\1/4 t.Config#1/5 (/9 e.CommandLine#1/7 )/10 (/13 e.Flags#1/11 )/14 (/17 e.Files#1/15 )/18 (/21 e.CommandLineSuf#2/19 )/22 e.IntermediateName#3/2 >/1
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
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  context[19] = 0;
  context[20] = 0;
  context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[21], context[22]);
  // closed e.CommandLine#1 as range 7
  // closed e.Flags#1 as range 11
  // closed e.Files#1 as range 15
  // closed e.CommandLineSuf#2 as range 19
  // closed e.IntermediateName#3 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: e.CommandLine#1: 7
  //DEBUG: e.Flags#1: 11
  //DEBUG: e.Files#1: 15
  //DEBUG: e.CommandLineSuf#2: 19
  //DEBUG: e.IntermediateName#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Link-CppCompile\1=1/4 AsIs: t.Config#1/5 AsIs: (/9 } Tile{ AsIs: e.IntermediateName#3/2 } Tile{ AsIs: )/10 HalfReuse: </13 } Tile{ HalfReuse: & System/22 } Tile{ AsIs: e.CommandLine#1/7 } e.IntermediateName#3/2/23 Tile{ AsIs: e.Flags#1/11 } Tile{ HalfReuse: </21 } Tile{ HalfReuse: & Map/14 HalfReuse: & Link-CppCompile\1=1\1/17 AsIs: e.Files#1/15 HalfReuse: >/18 } Tile{ AsIs: e.CommandLineSuf#2/19 } >/25 Tile{ AsIs: >/1 ]] }
  refalrts::copy_evar(vm, context[23], context[24], context[2], context[3]);
  refalrts::alloc_close_call(vm, context[25]);
  refalrts::update_name(context[4], functions[efunc_gen_Linkm_CppCompile_L1A1]);
  refalrts::reinit_open_call(context[13]);
  refalrts::reinit_name(context[22], functions[efunc_System]);
  refalrts::reinit_open_call(context[21]);
  refalrts::reinit_name(context[14], functions[efunc_Map]);
  refalrts::reinit_name(context[17], functions[efunc_gen_Linkm_CppCompile_L1A1L1]);
  refalrts::reinit_close_call(context[18]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[21] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[14], context[18] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[10], context[13] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Linkm_CppCompile_L1("Link-CppCompile\\1", 2216874807U, 2374776932U, func_gen_Linkm_CppCompile_L1);


static refalrts::FnResult func_gen_Linkm_CppCompile_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  // </0 & Link-CppCompile=1/4 t.Config#1/5 (/9 e.CommandLine#1/7 )/10 (/13 e.Flags#1/11 )/14 (/17 e.Files#1/15 )/18 e.CommandLineSuf#2/2 >/1
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
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  // closed e.CommandLine#1 as range 7
  // closed e.Flags#1 as range 11
  // closed e.Files#1 as range 15
  // closed e.CommandLineSuf#2 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: e.CommandLine#1: 7
  //DEBUG: e.Flags#1: 11
  //DEBUG: e.Files#1: 15
  //DEBUG: e.CommandLineSuf#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </19 & Link-Aux/20 </21 & Config-GetTargetMode/22 t.Config#1/5/23 >/25 Tile{ HalfReuse: [*]/0 Reuse: & Link-CppCompile\1/4 AsIs: t.Config#1/5 AsIs: (/9 AsIs: e.CommandLine#1/7 AsIs: )/10 AsIs: (/13 AsIs: e.Flags#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.Files#1/15 AsIs: )/18 } (/26 Tile{ AsIs: e.CommandLineSuf#2/2 } )/27 {*}/28 t.Config#1/5/29 e.Files#1/15/31 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[19]);
  refalrts::alloc_name(vm, context[20], functions[efunc_Linkm_Aux]);
  refalrts::alloc_open_call(vm, context[21]);
  refalrts::alloc_name(vm, context[22], functions[efunc_Configm_GetTargetMode]);
  refalrts::copy_evar(vm, context[23], context[24], context[5], context[6]);
  refalrts::alloc_close_call(vm, context[25]);
  refalrts::alloc_open_bracket(vm, context[26]);
  refalrts::alloc_close_bracket(vm, context[27]);
  refalrts::alloc_unwrapped_closure(vm, context[28], context[0]);
  refalrts::copy_evar(vm, context[29], context[30], context[5], context[6]);
  refalrts::copy_evar(vm, context[31], context[32], context[15], context[16]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_Linkm_CppCompile_L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[19] );
  refalrts::link_brackets( context[26], context[27] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[21] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[31], context[32] );
  res = refalrts::splice_evar( res, context[27], context[30] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[26], context[26] );
  res = refalrts::splice_evar( res, context[0], context[18] );
  res = refalrts::splice_evar( res, context[19], context[25] );
  refalrts::use( res );
  refalrts::wrap_closure( context[28] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Linkm_CppCompile_A1("Link-CppCompile=1", 2216874807U, 2374776932U, func_gen_Linkm_CppCompile_A1);


static refalrts::FnResult func_gen_Linkm_CppCompile_A1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & Link-CppCompile=1:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Link-CppCompile=1:1/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Link-CppCompile=1:1/4 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Link-CppCompile=1:1/4 e.CommandLineSuf#2/2 >/1
  // closed e.CommandLineSuf#2 as range 2
  //DEBUG: e.CommandLineSuf#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '\"'/4 AsIs: e.CommandLineSuf#2/2 HalfReuse: '\"'/1 ]] }
  refalrts::reinit_char(context[0], ' ');
  refalrts::reinit_char(context[4], '\"');
  refalrts::reinit_char(context[1], '\"');
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Linkm_CppCompile_A1B1("Link-CppCompile=1:1", 2216874807U, 2374776932U, func_gen_Linkm_CppCompile_A1B1);


static refalrts::FnResult func_Linkm_CppCompile(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 39 elems
  refalrts::Iter context[39];
  refalrts::zeros( context, 39 );
  // </0 & Link-CppCompile/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Link-CppCompile/4 t.new#1/5 (/9 (/13 e.new#2/11 )/14 e.new#3/7 (/17 e.new#4/15 )/18 )/10 e.new#5/2 >/1
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
  context[13] = refalrts::brackets_left( context[11], context[12], context[7], context[8] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_right( context[15], context[16], context[7], context[8] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  // closed e.new#2 as range 11
  // closed e.new#3 as range 7
  // closed e.new#4 as range 15
  // closed e.new#5 as range 2
  do {
    // </0 & Link-CppCompile/4 t.Config#1/5 (/9 (/13 e.CommandLine#1/19 )/14 e.Flags#1/21 (/17 )/18 )/10 e.Files#1/23 >/1
    context[19] = context[11];
    context[20] = context[12];
    context[21] = context[7];
    context[22] = context[8];
    context[23] = context[2];
    context[24] = context[3];
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    // closed e.CommandLine#1 as range 19
    // closed e.Flags#1 as range 21
    // closed e.Files#1 as range 23
    //DEBUG: t.Config#1: 5
    //DEBUG: e.CommandLine#1: 19
    //DEBUG: e.Flags#1: 21
    //DEBUG: e.Files#1: 23

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </25 & Link-Aux/26 Tile{ AsIs: </0 Reuse: & Config-GetTargetMode/4 AsIs: t.Config#1/5 HalfReuse: >/9 HalfReuse: [*]/13 } & Link-CppCompile\1/27 t.Config#1/5/28 Tile{ AsIs: (/17 } Tile{ AsIs: e.CommandLine#1/19 } Tile{ AsIs: )/14 } (/30 Tile{ AsIs: e.Flags#1/21 } Tile{ AsIs: )/18 HalfReuse: (/10 AsIs: e.Files#1/23 HalfReuse: )/1 } (/31 )/32 {*}/33 t.Config#1/5/34 e.Files#1/23/36 >/38 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[25]);
    refalrts::alloc_name(vm, context[26], functions[efunc_Linkm_Aux]);
    refalrts::alloc_name(vm, context[27], functions[efunc_gen_Linkm_CppCompile_L1]);
    refalrts::copy_evar(vm, context[28], context[29], context[5], context[6]);
    refalrts::alloc_open_bracket(vm, context[30]);
    refalrts::alloc_open_bracket(vm, context[31]);
    refalrts::alloc_close_bracket(vm, context[32]);
    refalrts::alloc_unwrapped_closure(vm, context[33], context[13]);
    refalrts::copy_evar(vm, context[34], context[35], context[5], context[6]);
    refalrts::copy_evar(vm, context[36], context[37], context[23], context[24]);
    refalrts::alloc_close_call(vm, context[38]);
    refalrts::update_name(context[4], functions[efunc_Configm_GetTargetMode]);
    refalrts::reinit_close_call(context[9]);
    refalrts::reinit_closure_head(context[13]);
    refalrts::reinit_open_bracket(context[10]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::push_stack( vm, context[38] );
    refalrts::push_stack( vm, context[25] );
    refalrts::link_brackets( context[31], context[32] );
    refalrts::link_brackets( context[10], context[1] );
    refalrts::link_brackets( context[30], context[18] );
    refalrts::link_brackets( context[17], context[14] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[31], context[38] );
    res = refalrts::splice_evar( res, context[18], context[1] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[30], context[30] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[27], context[29] );
    res = refalrts::splice_evar( res, context[0], context[13] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    refalrts::use( res );
    refalrts::wrap_closure( context[33] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Link-CppCompile/4 t.Config#1/5 (/9 (/13 e.CommandLine#1/11 )/14 e.Flags#1/7 (/17 e.CommandLineSuf#1/15 )/18 )/10 e.Files#1/2 >/1
  // closed e.CommandLine#1 as range 11
  // closed e.Flags#1 as range 7
  // closed e.CommandLineSuf#1 as range 15
  // closed e.Files#1 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: e.CommandLine#1: 11
  //DEBUG: e.Flags#1: 7
  //DEBUG: e.CommandLineSuf#1: 15
  //DEBUG: e.Files#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </19 & Link-Aux/20 Tile{ AsIs: </0 Reuse: & Config-GetTargetMode/4 AsIs: t.Config#1/5 HalfReuse: >/9 HalfReuse: [*]/13 } & Link-CppCompile\1/21 t.Config#1/5/22 Tile{ AsIs: (/17 } Tile{ AsIs: e.CommandLine#1/11 } Tile{ AsIs: )/14 } (/24 Tile{ AsIs: e.Flags#1/7 } Tile{ AsIs: )/18 HalfReuse: (/10 AsIs: e.Files#1/2 HalfReuse: )/1 } (/25" \""/26 Tile{ AsIs: e.CommandLineSuf#1/15 } '\"'/28 )/29 {*}/30 t.Config#1/5/31 e.Files#1/2/33 >/35 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[19]);
  refalrts::alloc_name(vm, context[20], functions[efunc_Linkm_Aux]);
  refalrts::alloc_name(vm, context[21], functions[efunc_gen_Linkm_CppCompile_L1]);
  refalrts::copy_evar(vm, context[22], context[23], context[5], context[6]);
  refalrts::alloc_open_bracket(vm, context[24]);
  refalrts::alloc_open_bracket(vm, context[25]);
  refalrts::alloc_chars(vm, context[26], context[27], " \"", 2);
  refalrts::alloc_char(vm, context[28], '\"');
  refalrts::alloc_close_bracket(vm, context[29]);
  refalrts::alloc_unwrapped_closure(vm, context[30], context[13]);
  refalrts::copy_evar(vm, context[31], context[32], context[5], context[6]);
  refalrts::copy_evar(vm, context[33], context[34], context[2], context[3]);
  refalrts::alloc_close_call(vm, context[35]);
  refalrts::update_name(context[4], functions[efunc_Configm_GetTargetMode]);
  refalrts::reinit_close_call(context[9]);
  refalrts::reinit_closure_head(context[13]);
  refalrts::reinit_open_bracket(context[10]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::push_stack( vm, context[35] );
  refalrts::push_stack( vm, context[19] );
  refalrts::link_brackets( context[25], context[29] );
  refalrts::link_brackets( context[10], context[1] );
  refalrts::link_brackets( context[24], context[18] );
  refalrts::link_brackets( context[17], context[14] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[28], context[35] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[25], context[27] );
  res = refalrts::splice_evar( res, context[18], context[1] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[21], context[23] );
  res = refalrts::splice_evar( res, context[0], context[13] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  refalrts::use( res );
  refalrts::wrap_closure( context[30] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Linkm_CppCompile("Link-CppCompile", 2216874807U, 2374776932U, func_Linkm_CppCompile);


static refalrts::FnResult func_gen_Linkm_Aux_A4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 59 elems
  refalrts::Iter context[59];
  refalrts::zeros( context, 59 );
  // </0 & Link-Aux=4/4 t.Config#1/5 (/9 e.IntermediateName#3/7 )/10 s.FnCreatePrefix#1/11 (/14 e.Files#1/12 )/15 (/18 e.References#4/16 )/19 (/22 e.TargetFileName#2/20 )/23 e.IncorporatedLibNames#5/2 >/1
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
  // closed e.IntermediateName#3 as range 7
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
  // closed e.Files#1 as range 12
  // closed e.References#4 as range 16
  // closed e.TargetFileName#2 as range 20
  // closed e.IncorporatedLibNames#5 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: e.IntermediateName#3: 7
  //DEBUG: s.FnCreatePrefix#1: 11
  //DEBUG: e.Files#1: 12
  //DEBUG: e.References#4: 16
  //DEBUG: e.TargetFileName#2: 20
  //DEBUG: e.IncorporatedLibNames#5: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </24 & PreLinkCleanupTemporary/25 t.Config#1/5/26 e.IntermediateName#3/7/28 >/30 </31 Tile{ AsIs: s.FnCreatePrefix#1/11 } e.IntermediateName#3/7/32 >/34 </35 & AppendRASLToBinary/36 (/37 e.IntermediateName#3/7/38 Tile{ HalfReuse: )/14 AsIs: e.Files#1/12 HalfReuse: >/15 } </40 & AppendReferencesToBinary/41 (/42 e.IntermediateName#3/7/43 Tile{ HalfReuse: )/18 AsIs: e.References#4/16 HalfReuse: >/19 HalfReuse: </22 } & AppendIncorporatedToBinary/45 (/46 e.IntermediateName#3/7/47 Tile{ AsIs: )/23 AsIs: e.IncorporatedLibNames#5/2 AsIs: >/1 } Tile{ AsIs: </0 Reuse: & PostLinkRename/4 AsIs: t.Config#1/5 AsIs: (/9 AsIs: e.IntermediateName#3/7 AsIs: )/10 } (/49 Tile{ AsIs: e.TargetFileName#2/20 } )/50 >/51 </52 & CleanupIntermediateFiles/53 t.Config#1/5/54 e.Files#1/12/56 >/58 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[24]);
  refalrts::alloc_name(vm, context[25], functions[efunc_PreLinkCleanupTemporary]);
  refalrts::copy_evar(vm, context[26], context[27], context[5], context[6]);
  refalrts::copy_evar(vm, context[28], context[29], context[7], context[8]);
  refalrts::alloc_close_call(vm, context[30]);
  refalrts::alloc_open_call(vm, context[31]);
  refalrts::copy_evar(vm, context[32], context[33], context[7], context[8]);
  refalrts::alloc_close_call(vm, context[34]);
  refalrts::alloc_open_call(vm, context[35]);
  refalrts::alloc_name(vm, context[36], functions[efunc_AppendRASLToBinary]);
  refalrts::alloc_open_bracket(vm, context[37]);
  refalrts::copy_evar(vm, context[38], context[39], context[7], context[8]);
  refalrts::alloc_open_call(vm, context[40]);
  refalrts::alloc_name(vm, context[41], functions[efunc_AppendReferencesToBinary]);
  refalrts::alloc_open_bracket(vm, context[42]);
  refalrts::copy_evar(vm, context[43], context[44], context[7], context[8]);
  refalrts::alloc_name(vm, context[45], functions[efunc_AppendIncorporatedToBinary]);
  refalrts::alloc_open_bracket(vm, context[46]);
  refalrts::copy_evar(vm, context[47], context[48], context[7], context[8]);
  refalrts::alloc_open_bracket(vm, context[49]);
  refalrts::alloc_close_bracket(vm, context[50]);
  refalrts::alloc_close_call(vm, context[51]);
  refalrts::alloc_open_call(vm, context[52]);
  refalrts::alloc_name(vm, context[53], functions[efunc_CleanupIntermediateFiles]);
  refalrts::copy_evar(vm, context[54], context[55], context[5], context[6]);
  refalrts::copy_evar(vm, context[56], context[57], context[12], context[13]);
  refalrts::alloc_close_call(vm, context[58]);
  refalrts::reinit_close_bracket(context[14]);
  refalrts::reinit_close_call(context[15]);
  refalrts::reinit_close_bracket(context[18]);
  refalrts::reinit_close_call(context[19]);
  refalrts::reinit_open_call(context[22]);
  refalrts::update_name(context[4], functions[efunc_PostLinkRename]);
  refalrts::push_stack( vm, context[58] );
  refalrts::push_stack( vm, context[52] );
  refalrts::push_stack( vm, context[51] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[49], context[50] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[22] );
  refalrts::link_brackets( context[46], context[23] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[40] );
  refalrts::link_brackets( context[42], context[18] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[35] );
  refalrts::link_brackets( context[37], context[14] );
  refalrts::push_stack( vm, context[34] );
  refalrts::push_stack( vm, context[31] );
  refalrts::push_stack( vm, context[30] );
  refalrts::push_stack( vm, context[24] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[50], context[58] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[49], context[49] );
  res = refalrts::splice_evar( res, context[0], context[10] );
  res = refalrts::splice_evar( res, context[23], context[1] );
  res = refalrts::splice_evar( res, context[47], context[48] );
  res = refalrts::splice_evar( res, context[45], context[46] );
  res = refalrts::splice_evar( res, context[18], context[22] );
  res = refalrts::splice_evar( res, context[43], context[44] );
  res = refalrts::splice_evar( res, context[40], context[42] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[38], context[39] );
  res = refalrts::splice_evar( res, context[34], context[37] );
  res = refalrts::splice_evar( res, context[32], context[33] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[24], context[31] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Linkm_Aux_A4("Link-Aux=4", 2216874807U, 2374776932U, func_gen_Linkm_Aux_A4);


static refalrts::FnResult func_gen_Linkm_Aux_A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & Link-Aux=3/4 t.Config#1/5 (/9 e.IntermediateName#3/7 )/10 s.FnCreatePrefix#1/11 (/14 e.Files#1/12 )/15 (/18 e.TargetFileName#2/16 )/19 e.References#4/2 >/1
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
  // closed e.IntermediateName#3 as range 7
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
  // closed e.Files#1 as range 12
  // closed e.TargetFileName#2 as range 16
  // closed e.References#4 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: e.IntermediateName#3: 7
  //DEBUG: s.FnCreatePrefix#1: 11
  //DEBUG: e.Files#1: 12
  //DEBUG: e.TargetFileName#2: 16
  //DEBUG: e.References#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Link-Aux=4/4 AsIs: t.Config#1/5 AsIs: (/9 AsIs: e.IntermediateName#3/7 AsIs: )/10 AsIs: s.FnCreatePrefix#1/11 AsIs: (/14 AsIs: e.Files#1/12 AsIs: )/15 AsIs: (/18 } Tile{ AsIs: e.References#4/2 } Tile{ AsIs: )/19 } (/20 Tile{ AsIs: e.TargetFileName#2/16 } )/21 </22 & Config-GetIncorporateds/23 t.Config#1/5/24 >/26 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[20]);
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::alloc_open_call(vm, context[22]);
  refalrts::alloc_name(vm, context[23], functions[efunc_Configm_GetIncorporateds]);
  refalrts::copy_evar(vm, context[24], context[25], context[5], context[6]);
  refalrts::alloc_close_call(vm, context[26]);
  refalrts::update_name(context[4], functions[efunc_gen_Linkm_Aux_A4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[26] );
  refalrts::push_stack( vm, context[22] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[18], context[19] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[21], context[26] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Linkm_Aux_A3("Link-Aux=3", 2216874807U, 2374776932U, func_gen_Linkm_Aux_A3);


static refalrts::FnResult func_gen_Linkm_Aux_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & Link-Aux=2/4 t.Config#1/5 s.FnCreatePrefix#1/7 (/10 e.Files#1/8 )/11 (/14 e.TargetFileName#2/12 )/15 e.IntermediateName#3/2 >/1
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
  // closed e.Files#1 as range 8
  // closed e.TargetFileName#2 as range 12
  // closed e.IntermediateName#3 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: s.FnCreatePrefix#1: 7
  //DEBUG: e.Files#1: 8
  //DEBUG: e.TargetFileName#2: 12
  //DEBUG: e.IntermediateName#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Link-Aux=3/4 AsIs: t.Config#1/5 } (/16 Tile{ AsIs: e.IntermediateName#3/2 } )/17 Tile{ AsIs: s.FnCreatePrefix#1/7 AsIs: (/10 AsIs: e.Files#1/8 AsIs: )/11 AsIs: (/14 AsIs: e.TargetFileName#2/12 AsIs: )/15 } </18 & Config-GetReferences/19 t.Config#1/5/20 >/22 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::alloc_close_bracket(vm, context[17]);
  refalrts::alloc_open_call(vm, context[18]);
  refalrts::alloc_name(vm, context[19], functions[efunc_Configm_GetReferences]);
  refalrts::copy_evar(vm, context[20], context[21], context[5], context[6]);
  refalrts::alloc_close_call(vm, context[22]);
  refalrts::update_name(context[4], functions[efunc_gen_Linkm_Aux_A3]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[22] );
  refalrts::push_stack( vm, context[18] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[18], context[22] );
  res = refalrts::splice_evar( res, context[7], context[15] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Linkm_Aux_A2("Link-Aux=2", 2216874807U, 2374776932U, func_gen_Linkm_Aux_A2);


static refalrts::FnResult func_gen_Linkm_Aux_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & Link-Aux=1/4 t.Config#1/5 s.FnCreatePrefix#1/7 (/10 e.Files#1/8 )/11 e.TargetFileName#2/2 >/1
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
  context[8] = 0;
  context[9] = 0;
  context[10] = refalrts::brackets_left( context[8], context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[10], context[11]);
  // closed e.Files#1 as range 8
  // closed e.TargetFileName#2 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: s.FnCreatePrefix#1: 7
  //DEBUG: e.Files#1: 8
  //DEBUG: e.TargetFileName#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Link-Aux=3/4 AsIs: t.Config#1/5 } (/12 e.TargetFileName#2/2/13".partial"/15 )/17 Tile{ AsIs: s.FnCreatePrefix#1/7 AsIs: (/10 AsIs: e.Files#1/8 AsIs: )/11 } (/18 Tile{ AsIs: e.TargetFileName#2/2 } )/19 </20 & Config-GetReferences/21 t.Config#1/5/22 >/24 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::copy_evar(vm, context[13], context[14], context[2], context[3]);
  refalrts::alloc_chars(vm, context[15], context[16], ".partial", 8);
  refalrts::alloc_close_bracket(vm, context[17]);
  refalrts::alloc_open_bracket(vm, context[18]);
  refalrts::alloc_close_bracket(vm, context[19]);
  refalrts::alloc_open_call(vm, context[20]);
  refalrts::alloc_name(vm, context[21], functions[efunc_Configm_GetReferences]);
  refalrts::copy_evar(vm, context[22], context[23], context[5], context[6]);
  refalrts::alloc_close_call(vm, context[24]);
  refalrts::update_name(context[4], functions[efunc_gen_Linkm_Aux_A3]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[24] );
  refalrts::push_stack( vm, context[20] );
  refalrts::link_brackets( context[18], context[19] );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::link_brackets( context[12], context[17] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[19], context[24] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[7], context[11] );
  res = refalrts::splice_evar( res, context[12], context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Linkm_Aux_A1("Link-Aux=1", 2216874807U, 2374776932U, func_gen_Linkm_Aux_A1);


static refalrts::FnResult func_Linkm_Aux(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & Link-Aux/4 s.TargetMode#1/5 s.FnCreatePrefix#1/6 t.Config#1/7 e.Files#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  // closed e.Files#1 as range 2
  //DEBUG: s.TargetMode#1: 5
  //DEBUG: s.FnCreatePrefix#1: 6
  //DEBUG: t.Config#1: 7
  //DEBUG: e.Files#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Link-Aux=1/4 } t.Config#1/7/9 Tile{ AsIs: s.FnCreatePrefix#1/6 } (/11 e.Files#1/2/12 )/14 </15 & CalcTargetFileName/16 Tile{ AsIs: s.TargetMode#1/5 } Tile{ AsIs: t.Config#1/7 AsIs: e.Files#1/2 AsIs: >/1 } >/17 Tile{ ]] }
  refalrts::copy_evar(vm, context[9], context[10], context[7], context[8]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::copy_evar(vm, context[12], context[13], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[14]);
  refalrts::alloc_open_call(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_CalcTargetFileName]);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::update_name(context[4], functions[efunc_gen_Linkm_Aux_A1]);
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[15] );
  refalrts::link_brackets( context[11], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[7], context[1] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[11], context[16] );
  res = refalrts::splice_evar( res, context[6], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Linkm_Aux("Link-Aux", 2216874807U, 2374776932U, func_Linkm_Aux);


static refalrts::FnResult func_gen_PreLinkCleanupTemporary_B1S2B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & PreLinkCleanupTemporary:1$2:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & PreLinkCleanupTemporary:1$2:1/4 (/7 e.new#1/5 )/8 t.new#2/13 s.new#3/15 (/11 e.new#4/9 )/12 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.new#1 as range 5
  // closed e.new#4 as range 9
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & PreLinkCleanupTemporary:1$2:1/4 (/7 e.Temporary#1/16 )/8 t.Config#1/13 # True/15 (/11 )/12 >/1
    context[16] = context[5];
    context[17] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_True], context[15] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    // closed e.Temporary#1 as range 16
    //DEBUG: t.Config#1: 13
    //DEBUG: e.Temporary#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.Config#1/13 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintErr/4 HalfReuse: 'L'/7 } 'o'/18 Tile{ HalfReuse: 's'/8 }"t temporary file "/19 Tile{ AsIs: e.Temporary#1/16 }" is remo"/21 Tile{ HalfReuse: 'v'/15 HalfReuse: 'e'/11 HalfReuse: 'd'/12 AsIs: >/1 ]] }
    refalrts::alloc_char(vm, context[18], 'o');
    refalrts::alloc_chars(vm, context[19], context[20], "t temporary file ", 17);
    refalrts::alloc_chars(vm, context[21], context[22], " is remo", 8);
    refalrts::update_name(context[4], functions[efunc_PrintErr]);
    refalrts::reinit_char(context[7], 'L');
    refalrts::reinit_char(context[8], 's');
    refalrts::reinit_char(context[15], 'v');
    refalrts::reinit_char(context[11], 'e');
    refalrts::reinit_char(context[12], 'd');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[15];
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PreLinkCleanupTemporary:1$2:1/4 (/7 e.Temporary#1/5 )/8 t.Config#1/13 # False/15 (/11 e.ErrorMessage#3/9 )/12 >/1
  if( ! refalrts::ident_term( identifiers[ident_False], context[15] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Temporary#1 as range 5
  // closed e.ErrorMessage#3 as range 9
  //DEBUG: t.Config#1: 13
  //DEBUG: e.Temporary#1: 5
  //DEBUG: e.ErrorMessage#3: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & LinkError/4 } Tile{ AsIs: t.Config#1/13 HalfReuse: 'C'/15 HalfReuse: 'a'/11 }"n\'"/16 Tile{ HalfReuse: 't'/12 }" remove file"/18 Tile{ HalfReuse: ' '/7 AsIs: e.Temporary#1/5 HalfReuse: ':'/8 } ' '/20 Tile{ AsIs: e.ErrorMessage#3/9 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[16], context[17], "n\'", 2);
  refalrts::alloc_chars(vm, context[18], context[19], " remove file", 12);
  refalrts::alloc_char(vm, context[20], ' ');
  refalrts::update_name(context[4], functions[efunc_LinkError]);
  refalrts::reinit_char(context[15], 'C');
  refalrts::reinit_char(context[11], 'a');
  refalrts::reinit_char(context[12], 't');
  refalrts::reinit_char(context[7], ' ');
  refalrts::reinit_char(context[8], ':');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[13], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PreLinkCleanupTemporary_B1S2B1("PreLinkCleanupTemporary:1$2:1", 2216874807U, 2374776932U, func_gen_PreLinkCleanupTemporary_B1S2B1);


static refalrts::FnResult func_gen_PreLinkCleanupTemporary_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & PreLinkCleanupTemporary:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & PreLinkCleanupTemporary:1/4 (/7 e.new#1/5 )/8 t.new#2/9 s.new#3/11 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & PreLinkCleanupTemporary:1/4 (/7 e.Temporary#1/12 )/8 t.Config#1/9 # False/11 >/1
    context[12] = context[5];
    context[13] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_False], context[11] ) )
      continue;
    // closed e.Temporary#1 as range 12
    //DEBUG: t.Config#1: 9
    //DEBUG: e.Temporary#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & PreLinkCleanupTemporary:1/4 (/7 e.Temporary#1/12 )/8 t.Config#1/9 # False/11 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PreLinkCleanupTemporary:1/4 (/7 e.Temporary#1/5 )/8 t.Config#1/9 # True/11 >/1
  if( ! refalrts::ident_term( identifiers[ident_True], context[11] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Temporary#1 as range 5
  //DEBUG: t.Config#1: 9
  //DEBUG: e.Temporary#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PreLinkCleanupTemporary:1$2:1/4 AsIs: (/7 AsIs: e.Temporary#1/5 AsIs: )/8 AsIs: t.Config#1/9 HalfReuse: </11 HalfReuse: & RemoveFile/1 } e.Temporary#1/5/12 >/14 >/15 Tile{ ]] }
  refalrts::copy_evar(vm, context[12], context[13], context[5], context[6]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::update_name(context[4], functions[efunc_gen_PreLinkCleanupTemporary_B1S2B1]);
  refalrts::reinit_open_call(context[11]);
  refalrts::reinit_name(context[1], functions[efunc_RemoveFile]);
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PreLinkCleanupTemporary_B1("PreLinkCleanupTemporary:1", 2216874807U, 2374776932U, func_gen_PreLinkCleanupTemporary_B1);


static refalrts::FnResult func_PreLinkCleanupTemporary(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & PreLinkCleanupTemporary/4 t.Config#1/5 e.Temporary#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Temporary#1 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: e.Temporary#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PreLinkCleanupTemporary:1/4 } (/7 e.Temporary#1/2/8 )/10 Tile{ AsIs: t.Config#1/5 } </11 & ExistFile/12 Tile{ AsIs: e.Temporary#1/2 } >/13 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::copy_evar(vm, context[8], context[9], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[10]);
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_ExistFile]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_gen_PreLinkCleanupTemporary_B1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[7], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[7], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PreLinkCleanupTemporary("PreLinkCleanupTemporary", 2216874807U, 2374776932U, func_PreLinkCleanupTemporary);


static refalrts::FnResult func_gen_CheckCppCompilationSuccessed_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & CheckCppCompilationSuccessed:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CheckCppCompilationSuccessed:1/4 t.new#1/5 s.new#2/7 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & CheckCppCompilationSuccessed:1/4 t.Config#1/5 # False/7 >/1
    if( ! refalrts::ident_term( identifiers[ident_False], context[7] ) )
      continue;
    //DEBUG: t.Config#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & LinkError/4 AsIs: t.Config#1/5 HalfReuse: 'C'/7 HalfReuse: '+'/1 }"+ compilation is failed"/8 >/10 Tile{ ]] }
    refalrts::alloc_chars(vm, context[8], context[9], "+ compilation is failed", 23);
    refalrts::alloc_close_call(vm, context[10]);
    refalrts::update_name(context[4], functions[efunc_LinkError]);
    refalrts::reinit_char(context[7], 'C');
    refalrts::reinit_char(context[1], '+');
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CheckCppCompilationSuccessed:1/4 t.Config#1/5 # True/7 >/1
  if( ! refalrts::ident_term( identifiers[ident_True], context[7] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Config#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CheckCppCompilationSuccessed:1/4 t.Config#1/5 # True/7 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CheckCppCompilationSuccessed_B1("CheckCppCompilationSuccessed:1", 2216874807U, 2374776932U, func_gen_CheckCppCompilationSuccessed_B1);


static refalrts::FnResult func_CheckCppCompilationSuccessed(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & CheckCppCompilationSuccessed/4 t.Config#1/5 e.TemporaryName#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.TemporaryName#1 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: e.TemporaryName#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckCppCompilationSuccessed:1/4 AsIs: t.Config#1/5 } </7 & ExistFile/8 Tile{ AsIs: e.TemporaryName#1/2 } >/9 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_ExistFile]);
  refalrts::alloc_close_call(vm, context[9]);
  refalrts::update_name(context[4], functions[efunc_gen_CheckCppCompilationSuccessed_B1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckCppCompilationSuccessed("CheckCppCompilationSuccessed", 2216874807U, 2374776932U, func_CheckCppCompilationSuccessed);


static refalrts::FnResult func_gen_EnsureAligned4096_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & EnsureAligned4096=1/4 s.FileHandle#2/5 >/1
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
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & AlignToPage/4 AsIs: s.FileHandle#2/5 AsIs: >/1 } </6 & FClose/7 s.FileHandle#2/5/8 >/9 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_FClose]);
  refalrts::copy_stvar(vm, context[8], context[5]);
  refalrts::alloc_close_call(vm, context[9]);
  refalrts::update_name(context[4], functions[efunc_AlignToPage]);
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

static refalrts::NativeReference nat_ref_gen_EnsureAligned4096_A1("EnsureAligned4096=1", 2216874807U, 2374776932U, func_gen_EnsureAligned4096_A1);


static refalrts::FnResult func_EnsureAligned4096(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & EnsureAligned4096/4 e.BinaryName#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.BinaryName#1 as range 2
  //DEBUG: e.BinaryName#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & EnsureAligned4096=1/4 } </5 & FOpen/6 (/7"ab"/8 )/10 Tile{ AsIs: e.BinaryName#1/2 } >/11 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_FOpen]);
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_chars(vm, context[8], context[9], "ab", 2);
  refalrts::alloc_close_bracket(vm, context[10]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_gen_EnsureAligned4096_A1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[5] );
  refalrts::link_brackets( context[7], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_EnsureAligned4096("EnsureAligned4096", 2216874807U, 2374776932U, func_EnsureAligned4096);


static refalrts::FnResult func_gen_AlignToPage_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & AlignToPage:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & AlignToPage:1/4 s.new#1/5 s.new#2/6 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & AlignToPage:1/4 s.FileHandle#1/5 0/6 >/1
    if( ! refalrts::number_term( 0UL, context[6] ) )
      continue;
    //DEBUG: s.FileHandle#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & AlignToPage:1/4 s.FileHandle#1/5 0/6 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AlignToPage:1/4 s.FileHandle#1/5 s.Other#3/6 >/1
  //DEBUG: s.FileHandle#1: 5
  //DEBUG: s.Other#3: 6

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Other#3/6 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FWriteBytes/4 AsIs: s.FileHandle#1/5 } '@'/7 >/8 </9 & AlignToPage/10 s.FileHandle#1/5/11 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_char(vm, context[7], '@');
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_AlignToPage]);
  refalrts::copy_stvar(vm, context[11], context[5]);
  refalrts::update_name(context[4], functions[efunc_FWriteBytes]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[7], context[11] );
  refalrts::splice_to_freelist_open( vm, context[5], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_AlignToPage_B1("AlignToPage:1", 2216874807U, 2374776932U, func_gen_AlignToPage_B1);


static refalrts::FnResult func_gen_AlignToPage_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & AlignToPage=1/4 s.FileHandle#1/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.FileHandle#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & AlignToPage:1/4 AsIs: s.FileHandle#1/5 HalfReuse: </1 } & Mod/6 </7 & FTell/8 s.FileHandle#1/5/9 >/10 4096/11 >/12 >/13 Tile{ ]] }
  refalrts::alloc_name(vm, context[6], functions[efunc_Mod]);
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_FTell]);
  refalrts::copy_stvar(vm, context[9], context[5]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::alloc_number(vm, context[11], 4096UL);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_gen_AlignToPage_B1]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_AlignToPage_A1("AlignToPage=1", 2216874807U, 2374776932U, func_gen_AlignToPage_A1);


static refalrts::FnResult func_AlignToPage(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & AlignToPage/4 s.FileHandle#1/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.FileHandle#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & AlignToPage=1/4 AsIs: s.FileHandle#1/5 HalfReuse: </1 } & FSeek/6 s.FileHandle#1/5/7 # END/8 '-'/9 0/10 >/11 >/12 Tile{ ]] }
  refalrts::alloc_name(vm, context[6], functions[efunc_FSeek]);
  refalrts::copy_stvar(vm, context[7], context[5]);
  refalrts::alloc_ident(vm, context[8], identifiers[ident_END]);
  refalrts::alloc_char(vm, context[9], '-');
  refalrts::alloc_number(vm, context[10], 0UL);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::update_name(context[4], functions[efunc_gen_AlignToPage_A1]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_AlignToPage("AlignToPage", 2216874807U, 2374776932U, func_AlignToPage);


static refalrts::FnResult func_gen_AppendRASLToBinary_S2L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & AppendRASLToBinary$2\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & AppendRASLToBinary$2\1/4 s.new#1/9 (/7 s.new#2/10 s.new#3/11 e.new#4/5 )/8 >/1
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
  if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 5
  do {
    // </0 & AppendRASLToBinary$2\1/4 s.FileHandle#2/9 (/7 # RASL/10 s.Origin#3/11 e.OutputName#3/12 )/8 >/1
    context[12] = context[5];
    context[13] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_RASL], context[10] ) )
      continue;
    // closed e.OutputName#3 as range 12
    //DEBUG: s.FileHandle#2: 9
    //DEBUG: s.Origin#3: 11
    //DEBUG: e.OutputName#3: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Origin#3/11 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FWriteBytes/4 AsIs: s.FileHandle#2/9 HalfReuse: </7 HalfReuse: & LoadBytes/10 } Tile{ AsIs: e.OutputName#3/12 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_FWriteBytes]);
    refalrts::reinit_open_call(context[7]);
    refalrts::reinit_name(context[10], functions[efunc_LoadBytes]);
    refalrts::reinit_close_call(context[8]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::splice_to_freelist_open( vm, context[10], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AppendRASLToBinary$2\1/4 s.FileHandle#2/9 (/7 # Native/10 s.Origin#3/11 e.NativeName#3/5 )/8 >/1
  if( ! refalrts::ident_term( identifiers[ident_Native], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.NativeName#3 as range 5
  //DEBUG: s.FileHandle#2: 9
  //DEBUG: s.Origin#3: 11
  //DEBUG: e.NativeName#3: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & AppendRASLToBinary$2\1/4 s.FileHandle#2/9 (/7 # Native/10 s.Origin#3/11 e.NativeName#3/5 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_AppendRASLToBinary_S2L1("AppendRASLToBinary$2\\1", 2216874807U, 2374776932U, func_gen_AppendRASLToBinary_S2L1);


static refalrts::FnResult func_gen_AppendRASLToBinary_S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & AppendRASLToBinary$2=1/4 (/7 e.Files#1/5 )/8 s.FileHandle#2/9 >/1
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
  // closed e.Files#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Files#1: 5
  //DEBUG: s.FileHandle#2: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@8/4 HalfReuse: s.FileHandle2 #9/7 AsIs: e.Files#1/5 HalfReuse: >/8 } </10 & FClose/11 Tile{ AsIs: s.FileHandle#2/9 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_FClose]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z8]);
  refalrts::reinit_svar( context[7], context[9] );
  refalrts::reinit_close_call(context[8]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[9];
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_AppendRASLToBinary_S2A1("AppendRASLToBinary$2=1", 2216874807U, 2374776932U, func_gen_AppendRASLToBinary_S2A1);


static refalrts::FnResult func_AppendRASLToBinary(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & AppendRASLToBinary/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & AppendRASLToBinary/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & AppendRASLToBinary/4 (/7 e.BinaryName#1/9 )/8 >/1
    context[9] = context[5];
    context[10] = context[6];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.BinaryName#1 as range 9
    //DEBUG: e.BinaryName#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </11 Tile{ HalfReuse: & AppendSimpleBlock/0 Reuse: & PutBlockStart/4 AsIs: (/7 AsIs: e.BinaryName#1/9 AsIs: )/8 HalfReuse: (/1 } )/12 >/13 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[11]);
    refalrts::alloc_close_bracket(vm, context[12]);
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::reinit_name(context[0], functions[efunc_AppendSimpleBlock]);
    refalrts::update_name(context[4], functions[efunc_PutBlockStart]);
    refalrts::reinit_open_bracket(context[1]);
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[11] );
    refalrts::link_brackets( context[1], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AppendRASLToBinary/4 (/7 e.BinaryName#1/5 )/8 e.Files#1/2 >/1
  // closed e.BinaryName#1 as range 5
  // closed e.Files#1 as range 2
  //DEBUG: e.BinaryName#1: 5
  //DEBUG: e.Files#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & AppendRASLToBinary$2=1/4 AsIs: (/7 } Tile{ AsIs: e.Files#1/2 } Tile{ AsIs: )/8 } </9 & FOpen/10 (/11"ab"/12 )/14 Tile{ AsIs: e.BinaryName#1/5 } >/15 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_FOpen]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_chars(vm, context[12], context[13], "ab", 2);
  refalrts::alloc_close_bracket(vm, context[14]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::update_name(context[4], functions[efunc_gen_AppendRASLToBinary_S2A1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[11], context[14] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[14] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_AppendRASLToBinary("AppendRASLToBinary", 2216874807U, 2374776932U, func_AppendRASLToBinary);


static refalrts::FnResult func_AppendReferencesToBinary(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & AppendReferencesToBinary/4 (/7 e.BinaryName#1/5 )/8 e.References#1/2 >/1
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
  // closed e.BinaryName#1 as range 5
  // closed e.References#1 as range 2
  //DEBUG: e.BinaryName#1: 5
  //DEBUG: e.References#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 Tile{ HalfReuse: & AppendSimpleBlock/0 Reuse: & PutBlockReference/4 AsIs: (/7 AsIs: e.BinaryName#1/5 AsIs: )/8 AsIs: e.References#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::reinit_name(context[0], functions[efunc_AppendSimpleBlock]);
  refalrts::update_name(context[4], functions[efunc_PutBlockReference]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_AppendReferencesToBinary("AppendReferencesToBinary", 2216874807U, 2374776932U, func_AppendReferencesToBinary);


static refalrts::FnResult func_AppendIncorporatedToBinary(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & AppendIncorporatedToBinary/4 (/7 e.BinaryName#1/5 )/8 e.LibNames#1/2 >/1
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
  // closed e.BinaryName#1 as range 5
  // closed e.LibNames#1 as range 2
  //DEBUG: e.BinaryName#1: 5
  //DEBUG: e.LibNames#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 Tile{ HalfReuse: & AppendSimpleBlock/0 Reuse: & PutBlockIncorporated/4 AsIs: (/7 AsIs: e.BinaryName#1/5 AsIs: )/8 AsIs: e.LibNames#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::reinit_name(context[0], functions[efunc_AppendSimpleBlock]);
  refalrts::update_name(context[4], functions[efunc_PutBlockIncorporated]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_AppendIncorporatedToBinary("AppendIncorporatedToBinary", 2216874807U, 2374776932U, func_AppendIncorporatedToBinary);


static refalrts::FnResult func_gen_AppendSimpleBlock_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & AppendSimpleBlock\1/4 s.FileHandle#2/9 s.FnAdder#1/10 (/7 e.BlockItem#3/5 )/8 >/1
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
  // closed e.BlockItem#3 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.BlockItem#3: 5
  //DEBUG: s.FileHandle#2: 9
  //DEBUG: s.FnAdder#1: 10

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.FnAdder#1/10 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FWriteBytes/4 AsIs: s.FileHandle#2/9 } </11 Tile{ HalfReuse: s.FnAdder1 #10/7 AsIs: e.BlockItem#3/5 HalfReuse: >/8 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_FWriteBytes]);
  refalrts::reinit_svar( context[7], context[10] );
  refalrts::reinit_close_call(context[8]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[7];
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::splice_to_freelist_open( vm, context[9], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_AppendSimpleBlock_L1("AppendSimpleBlock\\1", 2216874807U, 2374776932U, func_gen_AppendSimpleBlock_L1);


static refalrts::FnResult func_gen_AppendSimpleBlock_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & AppendSimpleBlock=1/4 s.FnAdder#1/5 (/8 e.BlockItems#1/6 )/9 s.FileHandle#2/10 >/1
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
  // closed e.BlockItems#1 as range 6
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.FnAdder#1: 5
  //DEBUG: e.BlockItems#1: 6
  //DEBUG: s.FileHandle#2: 10

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@9/4 } Tile{ HalfReuse: s.FileHandle2 #10/8 } Tile{ AsIs: s.FnAdder#1/5 } Tile{ AsIs: e.BlockItems#1/6 } >/11 </12 Tile{ HalfReuse: & FClose/9 AsIs: s.FileHandle#2/10 AsIs: >/1 ]] }
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::alloc_open_call(vm, context[12]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z9]);
  refalrts::reinit_svar( context[8], context[10] );
  refalrts::reinit_name(context[9], functions[efunc_FClose]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[9];
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_AppendSimpleBlock_A1("AppendSimpleBlock=1", 2216874807U, 2374776932U, func_gen_AppendSimpleBlock_A1);


static refalrts::FnResult func_AppendSimpleBlock(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & AppendSimpleBlock/4 s.FnAdder#1/5 (/8 e.BinaryName#1/6 )/9 e.BlockItems#1/2 >/1
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
  // closed e.BinaryName#1 as range 6
  // closed e.BlockItems#1 as range 2
  //DEBUG: s.FnAdder#1: 5
  //DEBUG: e.BinaryName#1: 6
  //DEBUG: e.BlockItems#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & AppendSimpleBlock=1/4 AsIs: s.FnAdder#1/5 AsIs: (/8 } Tile{ AsIs: e.BlockItems#1/2 } Tile{ AsIs: )/9 } </10 & FOpen/11 (/12"ab"/13 )/15 Tile{ AsIs: e.BinaryName#1/6 } >/16 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_FOpen]);
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_chars(vm, context[13], context[14], "ab", 2);
  refalrts::alloc_close_bracket(vm, context[15]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::update_name(context[4], functions[efunc_gen_AppendSimpleBlock_A1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[10] );
  refalrts::link_brackets( context[12], context[15] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[10], context[15] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_AppendSimpleBlock("AppendSimpleBlock", 2216874807U, 2374776932U, func_AppendSimpleBlock);


static refalrts::FnResult func_gen_PostLinkRename_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & PostLinkRename:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & PostLinkRename:1/4 t.new#1/5 (/9 e.new#2/7 )/10 (/13 e.new#3/11 )/14 s.new#4/15 >/1
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
  // closed e.new#2 as range 7
  // closed e.new#3 as range 11
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & PostLinkRename:1/4 t.Config#1/5 (/9 e.TemporaryName#1/16 )/10 (/13 e.TargetFileName#1/18 )/14 # True/15 >/1
    context[16] = context[7];
    context[17] = context[8];
    context[18] = context[11];
    context[19] = context[12];
    if( ! refalrts::ident_term( identifiers[ident_True], context[15] ) )
      continue;
    // closed e.TemporaryName#1 as range 16
    // closed e.TargetFileName#1 as range 18
    //DEBUG: t.Config#1: 5
    //DEBUG: e.TemporaryName#1: 16
    //DEBUG: e.TargetFileName#1: 18

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} t.Config#1/5 {REMOVED TILE} e.TemporaryName#1/16 {REMOVED TILE} e.TargetFileName#1/18 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Prout/4 } Tile{ HalfReuse: '*'/10 HalfReuse: '*'/13 } Tile{ HalfReuse: ' '/9 }"Compilation succeeded "/20 Tile{ HalfReuse: '*'/14 HalfReuse: '*'/15 AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[20], context[21], "Compilation succeeded ", 22);
    refalrts::update_name(context[4], functions[efunc_Prout]);
    refalrts::reinit_char(context[10], '*');
    refalrts::reinit_char(context[13], '*');
    refalrts::reinit_char(context[9], ' ');
    refalrts::reinit_char(context[14], '*');
    refalrts::reinit_char(context[15], '*');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[14];
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[10], context[13] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PostLinkRename:1/4 t.Config#1/5 (/9 e.TemporaryName#1/7 )/10 (/13 e.TargetFileName#1/11 )/14 # False/15 >/1
  if( ! refalrts::ident_term( identifiers[ident_False], context[15] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.TemporaryName#1 as range 7
  // closed e.TargetFileName#1 as range 11
  //DEBUG: t.Config#1: 5
  //DEBUG: e.TemporaryName#1: 7
  //DEBUG: e.TargetFileName#1: 11

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & LinkError/4 AsIs: t.Config#1/5 HalfReuse: 'C'/9 } Tile{ HalfReuse: 'a'/10 HalfReuse: 'n'/13 } '\''/16 Tile{ HalfReuse: 't'/14 HalfReuse: ' '/15 }"rename from "/17 Tile{ AsIs: e.TemporaryName#1/7 }" to "/19 Tile{ AsIs: e.TargetFileName#1/11 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_char(vm, context[16], '\'');
  refalrts::alloc_chars(vm, context[17], context[18], "rename from ", 12);
  refalrts::alloc_chars(vm, context[19], context[20], " to ", 4);
  refalrts::update_name(context[4], functions[efunc_LinkError]);
  refalrts::reinit_char(context[9], 'C');
  refalrts::reinit_char(context[10], 'a');
  refalrts::reinit_char(context[13], 'n');
  refalrts::reinit_char(context[14], 't');
  refalrts::reinit_char(context[15], ' ');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[10], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PostLinkRename_B1("PostLinkRename:1", 2216874807U, 2374776932U, func_gen_PostLinkRename_B1);


static refalrts::FnResult func_gen_PostLinkRename_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & PostLinkRename=1/4 t.Config#1/13 (/11 e.TemporaryName#1/9 )/12 (/7 e.TargetFileName#1/5 )/8 >/1
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
  context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.TemporaryName#1 as range 9
  // closed e.TargetFileName#1 as range 5
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.TemporaryName#1: 9
  //DEBUG: e.TargetFileName#1: 5
  //DEBUG: t.Config#1: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PostLinkRename:1/4 AsIs: t.Config#1/13 AsIs: (/11 AsIs: e.TemporaryName#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.TargetFileName#1/5 AsIs: )/8 HalfReuse: </1 } & RenameFile/15 (/16 e.TemporaryName#1/9/17 )/19 (/20 e.TargetFileName#1/5/21 )/23 >/24 >/25 Tile{ ]] }
  refalrts::alloc_name(vm, context[15], functions[efunc_RenameFile]);
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::copy_evar(vm, context[17], context[18], context[9], context[10]);
  refalrts::alloc_close_bracket(vm, context[19]);
  refalrts::alloc_open_bracket(vm, context[20]);
  refalrts::copy_evar(vm, context[21], context[22], context[5], context[6]);
  refalrts::alloc_close_bracket(vm, context[23]);
  refalrts::alloc_close_call(vm, context[24]);
  refalrts::alloc_close_call(vm, context[25]);
  refalrts::update_name(context[4], functions[efunc_gen_PostLinkRename_B1]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[24] );
  refalrts::push_stack( vm, context[1] );
  refalrts::link_brackets( context[20], context[23] );
  refalrts::link_brackets( context[16], context[19] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[15], context[25] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PostLinkRename_A1("PostLinkRename=1", 2216874807U, 2374776932U, func_gen_PostLinkRename_A1);


static refalrts::FnResult func_gen_PostLinkRename_A1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & PostLinkRename=1:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & PostLinkRename=1:1/4 t.new#1/5 (/9 e.new#2/7 )/10 s.new#3/11 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & PostLinkRename=1:1/4 t.Config#1/5 (/9 e.TargetFileName#1/12 )/10 # True/11 >/1
    context[12] = context[7];
    context[13] = context[8];
    if( ! refalrts::ident_term( identifiers[ident_True], context[11] ) )
      continue;
    // closed e.TargetFileName#1 as range 12
    //DEBUG: t.Config#1: 5
    //DEBUG: e.TargetFileName#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/9 {REMOVED TILE} )/10 # True/11 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckedRemoveFile/4 AsIs: t.Config#1/5 } Tile{ AsIs: e.TargetFileName#1/12 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_CheckedRemoveFile]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::splice_to_freelist_open( vm, context[6], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PostLinkRename=1:1/4 t.Config#1/5 (/9 e.TargetFileName#1/7 )/10 # False/11 >/1
  if( ! refalrts::ident_term( identifiers[ident_False], context[11] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.TargetFileName#1 as range 7
  //DEBUG: t.Config#1: 5
  //DEBUG: e.TargetFileName#1: 7

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & PostLinkRename=1:1/4 t.Config#1/5 (/9 e.TargetFileName#1/7 )/10 # False/11 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PostLinkRename_A1B1("PostLinkRename=1:1", 2216874807U, 2374776932U, func_gen_PostLinkRename_A1B1);


static refalrts::FnResult func_PostLinkRename(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & PostLinkRename/4 t.Config#1/13 (/11 e.TemporaryName#1/9 )/12 (/7 e.TargetFileName#1/5 )/8 >/1
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
  context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.TemporaryName#1 as range 9
  // closed e.TargetFileName#1 as range 5
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.TemporaryName#1: 9
  //DEBUG: e.TargetFileName#1: 5
  //DEBUG: t.Config#1: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PostLinkRename=1/4 AsIs: t.Config#1/13 AsIs: (/11 AsIs: e.TemporaryName#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.TargetFileName#1/5 AsIs: )/8 HalfReuse: </1 } & PostLinkRename=1:1/15 t.Config#1/13/16 (/18 e.TargetFileName#1/5/19 )/21 </22 & ExistFile/23 e.TargetFileName#1/5/24 >/26 >/27 >/28 Tile{ ]] }
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_PostLinkRename_A1B1]);
  refalrts::copy_evar(vm, context[16], context[17], context[13], context[14]);
  refalrts::alloc_open_bracket(vm, context[18]);
  refalrts::copy_evar(vm, context[19], context[20], context[5], context[6]);
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::alloc_open_call(vm, context[22]);
  refalrts::alloc_name(vm, context[23], functions[efunc_ExistFile]);
  refalrts::copy_evar(vm, context[24], context[25], context[5], context[6]);
  refalrts::alloc_close_call(vm, context[26]);
  refalrts::alloc_close_call(vm, context[27]);
  refalrts::alloc_close_call(vm, context[28]);
  refalrts::update_name(context[4], functions[efunc_gen_PostLinkRename_A1]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[28] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[26] );
  refalrts::push_stack( vm, context[22] );
  refalrts::link_brackets( context[18], context[21] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[15], context[28] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PostLinkRename("PostLinkRename", 2216874807U, 2374776932U, func_PostLinkRename);


static refalrts::FnResult func_gen_CheckedRemoveFile_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & CheckedRemoveFile:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CheckedRemoveFile:1/4 t.new#1/9 (/13 e.new#2/11 )/14 s.new#3/15 (/7 e.new#4/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#4 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.new#2 as range 11
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & CheckedRemoveFile:1/4 t.Config#1/9 (/13 e.FileName#1/16 )/14 # True/15 (/7 )/8 >/1
    context[16] = context[11];
    context[17] = context[12];
    if( ! refalrts::ident_term( identifiers[ident_True], context[15] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.FileName#1 as range 16
    //DEBUG: t.Config#1: 9
    //DEBUG: e.FileName#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CheckedRemoveFile:1/4 t.Config#1/9 (/13 e.FileName#1/16 )/14 # True/15 (/7 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CheckedRemoveFile:1/4 t.Config#1/9 (/13 e.FileName#1/11 )/14 # False/15 (/7 e.ErrorMessage#2/5 )/8 >/1
  if( ! refalrts::ident_term( identifiers[ident_False], context[15] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#1 as range 11
  // closed e.ErrorMessage#2 as range 5
  //DEBUG: t.Config#1: 9
  //DEBUG: e.FileName#1: 11
  //DEBUG: e.ErrorMessage#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & LinkError/4 AsIs: t.Config#1/9 HalfReuse: 'C'/13 } 'a'/16 Tile{ HalfReuse: 'n'/14 HalfReuse: '\''/15 HalfReuse: 't'/7 } ' '/17 Tile{ HalfReuse: 'r'/8 }"emove file "/18 Tile{ AsIs: e.FileName#1/11 }", "/20 Tile{ AsIs: e.ErrorMessage#2/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_char(vm, context[16], 'a');
  refalrts::alloc_char(vm, context[17], ' ');
  refalrts::alloc_chars(vm, context[18], context[19], "emove file ", 11);
  refalrts::alloc_chars(vm, context[20], context[21], ", ", 2);
  refalrts::update_name(context[4], functions[efunc_LinkError]);
  refalrts::reinit_char(context[13], 'C');
  refalrts::reinit_char(context[14], 'n');
  refalrts::reinit_char(context[15], '\'');
  refalrts::reinit_char(context[7], 't');
  refalrts::reinit_char(context[8], 'r');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[14], context[7] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CheckedRemoveFile_B1("CheckedRemoveFile:1", 2216874807U, 2374776932U, func_gen_CheckedRemoveFile_B1);


static refalrts::FnResult func_CheckedRemoveFile(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & CheckedRemoveFile/4 t.Config#1/5 e.FileName#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#1 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: e.FileName#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckedRemoveFile:1/4 AsIs: t.Config#1/5 } (/7 e.FileName#1/2/8 )/10 </11 & RemoveFile/12 Tile{ AsIs: e.FileName#1/2 } >/13 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::copy_evar(vm, context[8], context[9], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[10]);
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_RemoveFile]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_gen_CheckedRemoveFile_B1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[7], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckedRemoveFile("CheckedRemoveFile", 2216874807U, 2374776932U, func_CheckedRemoveFile);


static refalrts::FnResult func_gen_CleanupIntermediateFiles_S2L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & CleanupIntermediateFiles$2\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CleanupIntermediateFiles$2\1/4 t.new#1/11 (/7 s.new#2/9 s.new#3/10 e.new#4/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 5
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & CleanupIntermediateFiles$2\1/4 t.Config#1/11 (/7 s.FileType#2/9 # Given/10 e.FileName#2/13 )/8 >/1
    context[13] = context[5];
    context[14] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_Given], context[10] ) )
      continue;
    // closed e.FileName#2 as range 13
    //DEBUG: t.Config#1: 11
    //DEBUG: s.FileType#2: 9
    //DEBUG: e.FileName#2: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CleanupIntermediateFiles$2\1/4 t.Config#1/11 (/7 s.FileType#2/9 # Given/10 e.FileName#2/13 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CleanupIntermediateFiles$2\1/4 t.Config#1/11 (/7 s.FileType#2/9 # Generated/10 e.FileName#2/5 )/8 >/1
  if( ! refalrts::ident_term( identifiers[ident_Generated], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#2 as range 5
  //DEBUG: t.Config#1: 11
  //DEBUG: s.FileType#2: 9
  //DEBUG: e.FileName#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/7 s.FileType#2/9 # Generated/10 {REMOVED TILE} )/8 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckedRemoveFile/4 AsIs: t.Config#1/11 } Tile{ AsIs: e.FileName#2/5 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_CheckedRemoveFile]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, context[12], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CleanupIntermediateFiles_S2L1("CleanupIntermediateFiles$2\\1", 2216874807U, 2374776932U, func_gen_CleanupIntermediateFiles_S2L1);


static refalrts::FnResult func_CleanupIntermediateFiles(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & CleanupIntermediateFiles/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CleanupIntermediateFiles/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & CleanupIntermediateFiles/4 t.Config#1/5 e.Files#1/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    // closed e.Files#1 as range 7
    //DEBUG: t.Config#1: 5
    //DEBUG: e.Files#1: 7
    //5: t.Config#1
    //7: e.Files#1
    //14: t.Config#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::alloc_name(vm, context[11], functions[efunc_gen_CleanupIntermediateFiles_S1C1]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_Configm_GetKeepRasls]);
    refalrts::copy_stvar(vm, context[14], context[5]);
    refalrts::alloc_close_call(vm, context[15]);
    refalrts::alloc_close_call(vm, context[10]);
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[9] );
    res = refalrts::splice_elem( res, context[10] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[12] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_stvar( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[9] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </9 & CleanupIntermediateFiles$1?1/13 # True/14 >/10
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::call_left( context[11], context[12], context[9], context[10] );
      context[14] = refalrts::ident_left( identifiers[ident_True], context[11], context[12] );
      if( ! context[14] )
        continue;
      if( ! refalrts::empty_seq( context[11], context[12] ) )
        continue;
      //DEBUG: t.Config#1: 5
      //DEBUG: e.Files#1: 7

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & CleanupIntermediateFiles/4 t.Config#1/5 e.Files#1/7 </9 & CleanupIntermediateFiles$1?1/13 # True/14 >/10 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[9], context[10]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CleanupIntermediateFiles/4 t.Config#1/5 e.Files#1/2 >/1
  // closed e.Files#1 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: e.Files#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@10/4 AsIs: t.Config#1/5 AsIs: e.Files#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z10]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CleanupIntermediateFiles("CleanupIntermediateFiles", 2216874807U, 2374776932U, func_CleanupIntermediateFiles);


static refalrts::FnResult func_gen_FindPrefix_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & FindPrefix=1/4 (/7 e.Prefix#1/5 )/8 t.Config#1/9 e.PrefixExt#2/2 >/1
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
  // closed e.Prefix#1 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.PrefixExt#2 as range 2
  //DEBUG: e.Prefix#1: 5
  //DEBUG: t.Config#1: 9
  //DEBUG: e.PrefixExt#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoFindPrefix/4 AsIs: (/7 } Tile{ AsIs: e.Prefix#1/5 } Tile{ AsIs: e.PrefixExt#2/2 } )/11 (/12 # Current/13 )/14 </15 Tile{ HalfReuse: & Config-GetSearchFolders/8 AsIs: t.Config#1/9 } >/16 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_ident(vm, context[13], identifiers[ident_Current]);
  refalrts::alloc_close_bracket(vm, context[14]);
  refalrts::alloc_open_call(vm, context[15]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::update_name(context[4], functions[efunc_DoFindPrefix]);
  refalrts::reinit_name(context[8], functions[efunc_Configm_GetSearchFolders]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[15] );
  refalrts::link_brackets( context[12], context[14] );
  refalrts::link_brackets( context[7], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[8], context[10] );
  res = refalrts::splice_evar( res, context[11], context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindPrefix_A1("FindPrefix=1", 2216874807U, 2374776932U, func_gen_FindPrefix_A1);


static refalrts::FnResult func_gen_FindPrefix_A1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & FindPrefix=1:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & FindPrefix=1:1/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & FindPrefix=1:1/4 # EXE/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_EXE], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: '.'/0 HalfReuse: 'e'/4 HalfReuse: 'x'/5 HalfReuse: 'e'/1 }"-prefix"/6 Tile{ ]] }
    refalrts::alloc_chars(vm, context[6], context[7], "-prefix", 7);
    refalrts::reinit_char(context[0], '.');
    refalrts::reinit_char(context[4], 'e');
    refalrts::reinit_char(context[5], 'x');
    refalrts::reinit_char(context[1], 'e');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FindPrefix=1:1/4 # LIB/5 >/1
  if( ! refalrts::ident_term( identifiers[ident_LIB], context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: '.'/0 HalfReuse: 'l'/4 HalfReuse: 'i'/5 HalfReuse: 'b'/1 }"-prefix"/6 Tile{ ]] }
  refalrts::alloc_chars(vm, context[6], context[7], "-prefix", 7);
  refalrts::reinit_char(context[0], '.');
  refalrts::reinit_char(context[4], 'l');
  refalrts::reinit_char(context[5], 'i');
  refalrts::reinit_char(context[1], 'b');
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindPrefix_A1B1("FindPrefix=1:1", 2216874807U, 2374776932U, func_gen_FindPrefix_A1B1);


static refalrts::FnResult func_FindPrefix(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & FindPrefix/4 t.Config#1/5 e.Prefix#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Prefix#1 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: e.Prefix#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FindPrefix=1/4 } (/7 Tile{ AsIs: e.Prefix#1/2 } )/8 Tile{ AsIs: t.Config#1/5 } </9 & FindPrefix=1:1/10 </11 & Config-GetTargetMode/12 t.Config#1/5/13 >/15 >/16 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_close_bracket(vm, context[8]);
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_FindPrefix_A1B1]);
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_Configm_GetTargetMode]);
  refalrts::copy_evar(vm, context[13], context[14], context[5], context[6]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::update_name(context[4], functions[efunc_gen_FindPrefix_A1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[16] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FindPrefix("FindPrefix", 2216874807U, 2374776932U, func_FindPrefix);


static refalrts::FnResult func_gen_DoFindPrefix_S1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & DoFindPrefix$1:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoFindPrefix$1:1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 (/15 e.new#3/13 )/16 s.new#4/17 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & DoFindPrefix$1:1/4 (/7 e.PrefixFileName#2/18 )/8 (/11 e.PrefixName#1/20 )/12 (/15 e.Folders#1/22 )/16 # True/17 >/1
    context[18] = context[5];
    context[19] = context[6];
    context[20] = context[9];
    context[21] = context[10];
    context[22] = context[13];
    context[23] = context[14];
    if( ! refalrts::ident_term( identifiers[ident_True], context[17] ) )
      continue;
    // closed e.PrefixFileName#2 as range 18
    // closed e.PrefixName#1 as range 20
    // closed e.Folders#1 as range 22
    //DEBUG: e.PrefixFileName#2: 18
    //DEBUG: e.PrefixName#1: 20
    //DEBUG: e.Folders#1: 22

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} & DoFindPrefix$1:1/4 (/7 {REMOVED TILE} )/8 (/11 e.PrefixName#1/20 )/12 (/15 e.Folders#1/22 )/16 # True/17 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: # Success/0 } Tile{ AsIs: e.PrefixFileName#2/18 } Tile{ ]] }
    refalrts::reinit_ident(context[0], identifiers[ident_Success]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[18], context[19] );
    refalrts::splice_to_freelist_open( vm, context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoFindPrefix$1:1/4 (/7 e.PrefixFileName#2/5 )/8 (/11 e.PrefixName#1/9 )/12 (/15 e.Folders#1/13 )/16 # False/17 >/1
  if( ! refalrts::ident_term( identifiers[ident_False], context[17] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.PrefixFileName#2 as range 5
  // closed e.PrefixName#1 as range 9
  // closed e.Folders#1 as range 13
  //DEBUG: e.PrefixFileName#2: 5
  //DEBUG: e.PrefixName#1: 9
  //DEBUG: e.Folders#1: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} e.PrefixFileName#2/5 )/8 (/11 {REMOVED TILE} )/12 (/15 {REMOVED TILE} {REMOVED TILE} # False/17 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoFindPrefix/4 AsIs: (/7 } Tile{ AsIs: e.PrefixName#1/9 } Tile{ AsIs: )/16 } Tile{ AsIs: e.Folders#1/13 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_DoFindPrefix]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoFindPrefix_S1B1("DoFindPrefix$1:1", 2216874807U, 2374776932U, func_gen_DoFindPrefix_S1B1);


static refalrts::FnResult func_gen_DoFindPrefix_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & DoFindPrefix$1=1/4 (/7 e.PrefixName#1/5 )/8 (/11 e.Folders#1/9 )/12 e.PrefixFileName#2/2 >/1
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
  // closed e.PrefixName#1 as range 5
  // closed e.Folders#1 as range 9
  // closed e.PrefixFileName#2 as range 2
  //DEBUG: e.PrefixName#1: 5
  //DEBUG: e.Folders#1: 9
  //DEBUG: e.PrefixFileName#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 } & DoFindPrefix$1:1/13 (/14 e.PrefixFileName#2/2/15 Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.PrefixName#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Folders#1/9 AsIs: )/12 } </17 & ExistFile/18 Tile{ AsIs: e.PrefixFileName#2/2 } >/19 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_DoFindPrefix_S1B1]);
  refalrts::alloc_open_bracket(vm, context[14]);
  refalrts::copy_evar(vm, context[15], context[16], context[2], context[3]);
  refalrts::alloc_open_call(vm, context[17]);
  refalrts::alloc_name(vm, context[18], functions[efunc_ExistFile]);
  refalrts::alloc_close_call(vm, context[19]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[17] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[14], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[4], context[12] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoFindPrefix_S1A1("DoFindPrefix$1=1", 2216874807U, 2374776932U, func_gen_DoFindPrefix_S1A1);


static refalrts::FnResult func_DoFindPrefix(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & DoFindPrefix/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoFindPrefix/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & DoFindPrefix/4 (/7 e.new#5/9 )/8 t.new#3/13 e.new#4/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.new#5 as range 9
    context[14] = refalrts::tvar_left( context[13], context[11], context[12] );
    if( ! context[14] )
      continue;
    // closed e.new#4 as range 11
    do {
      // </0 & DoFindPrefix/4 (/7 e.PrefixName#1/15 )/8 (/13 e.NextFolder#1/19 )/14 e.Folders#1/17 >/1
      context[15] = context[9];
      context[16] = context[10];
      context[17] = context[11];
      context[18] = context[12];
      context[19] = 0;
      context[20] = 0;
      if( ! refalrts::brackets_term( context[19], context[20], context[13] ) )
        continue;
      // closed e.PrefixName#1 as range 15
      // closed e.NextFolder#1 as range 19
      // closed e.Folders#1 as range 17
      //DEBUG: e.PrefixName#1: 15
      //DEBUG: e.NextFolder#1: 19
      //DEBUG: e.Folders#1: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoFindPrefix$1=1/4 AsIs: (/7 AsIs: e.PrefixName#1/15 AsIs: )/8 AsIs: (/13 } Tile{ AsIs: e.Folders#1/17 } Tile{ AsIs: )/14 } </21 & GlueNames/22 (/23 Tile{ AsIs: e.NextFolder#1/19 } )/24 (/25 e.PrefixName#1/15/26 )/28 >/29 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[21]);
      refalrts::alloc_name(vm, context[22], functions[efunc_GlueNames]);
      refalrts::alloc_open_bracket(vm, context[23]);
      refalrts::alloc_close_bracket(vm, context[24]);
      refalrts::alloc_open_bracket(vm, context[25]);
      refalrts::copy_evar(vm, context[26], context[27], context[15], context[16]);
      refalrts::alloc_close_bracket(vm, context[28]);
      refalrts::alloc_close_call(vm, context[29]);
      refalrts::update_name(context[4], functions[efunc_gen_DoFindPrefix_S1A1]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[29] );
      refalrts::push_stack( vm, context[21] );
      refalrts::link_brackets( context[25], context[28] );
      refalrts::link_brackets( context[23], context[24] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[24], context[29] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[21], context[23] );
      res = refalrts::splice_evar( res, context[14], context[14] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoFindPrefix/4 (/7 e.PrefixName#1/15 )/8 # REF5RSL/13 e.Folders#1/17 >/1
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[11];
    context[18] = context[12];
    if( ! refalrts::ident_term( identifiers[ident_REF5RSL], context[13] ) )
      continue;
    // closed e.PrefixName#1 as range 15
    // closed e.Folders#1 as range 17
    //DEBUG: e.PrefixName#1: 15
    //DEBUG: e.Folders#1: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} # REF5RSL/13 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoFindPrefix/4 AsIs: (/7 AsIs: e.PrefixName#1/15 AsIs: )/8 } Tile{ AsIs: e.Folders#1/17 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[17], context[18] );
    refalrts::splice_to_freelist_open( vm, context[8], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoFindPrefix/4 (/7 e.PrefixName#1/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.PrefixName#1 as range 5
  //DEBUG: e.PrefixName#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} & DoFindPrefix/4 (/7 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: # Fails/0 } Tile{ AsIs: e.PrefixName#1/5 } Tile{ ]] }
  refalrts::reinit_ident(context[0], identifiers[ident_Fails]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoFindPrefix("DoFindPrefix", 2216874807U, 2374776932U, func_DoFindPrefix);


static refalrts::FnResult func_GlueNames(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & GlueNames/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & GlueNames/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 >/1
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
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  do {
    // </0 & GlueNames/4 (/7 # Current/17 )/8 (/11 e.FileName#1/15 )/12 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = refalrts::ident_left( identifiers[ident_Current], context[13], context[14] );
    if( ! context[17] )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    // closed e.FileName#1 as range 15
    //DEBUG: e.FileName#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & GlueNames/4 (/7 # Current/17 )/8 (/11 {REMOVED TILE} )/12 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.FileName#1/15 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GlueNames/4 (/7 e.Folder#1/5 )/8 (/11 e.FileName#1/9 )/12 >/1
  // closed e.Folder#1 as range 5
  // closed e.FileName#1 as range 9
  //DEBUG: e.Folder#1: 5
  //DEBUG: e.FileName#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 (/11 {REMOVED TILE} )/12 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Folder#1/5 } Tile{ AsIs: </0 Reuse: & DirectorySeparator/4 HalfReuse: >/7 } Tile{ AsIs: e.FileName#1/9 } Tile{ ]] }
  refalrts::update_name(context[4], functions[efunc_DirectorySeparator]);
  refalrts::reinit_close_call(context[7]);
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GlueNames("GlueNames", 2216874807U, 2374776932U, func_GlueNames);


static refalrts::FnResult func_CopyPrefix(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & CopyPrefix/4 (/7 e.OriginalPrefixName#1/5 )/8 (/11 e.NewExeName#1/9 )/12 >/1
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
  // closed e.OriginalPrefixName#1 as range 5
  // closed e.NewExeName#1 as range 9
  //DEBUG: e.OriginalPrefixName#1: 5
  //DEBUG: e.NewExeName#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & SaveBytes/8 AsIs: (/11 AsIs: e.NewExeName#1/9 AsIs: )/12 HalfReuse: </1 } Tile{ Reuse: & LoadBytes/4 } Tile{ AsIs: e.OriginalPrefixName#1/5 } Tile{ HalfReuse: >/7 } >/13 Tile{ ]] }
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::reinit_name(context[8], functions[efunc_SaveBytes]);
  refalrts::reinit_open_call(context[1]);
  refalrts::update_name(context[4], functions[efunc_LoadBytes]);
  refalrts::reinit_close_call(context[7]);
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[1] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[4], context[4] );
  res = refalrts::splice_evar( res, context[8], context[1] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CopyPrefix("CopyPrefix", 2216874807U, 2374776932U, func_CopyPrefix);


static refalrts::FnResult func_LinkError(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & LinkError/4 t.Config#1/5 e.Message#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Message#1 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: e.Message#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintErr/4 }"LINK ERROR: "/7 Tile{ AsIs: e.Message#1/2 } >/9 </10 & CreateErrorFileMark/11 Tile{ AsIs: t.Config#1/5 } >/12 </13 & Exit/14 1/15 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[7], context[8], "LINK ERROR: ", 12);
  refalrts::alloc_close_call(vm, context[9]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_CreateErrorFileMark]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_Exit]);
  refalrts::alloc_number(vm, context[15], 1UL);
  refalrts::update_name(context[4], functions[efunc_PrintErr]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[11] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_LinkError("LinkError", 2216874807U, 2374776932U, func_LinkError);


static refalrts::FnResult func_GetBaseNameLowerCaseNoExt(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & GetBaseNameLowerCaseNoExt/4 e.FileName#1/2 '.'/9 'r'/8 'a'/7 's'/6 'l'/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = refalrts::char_right( 'l', context[2], context[3] );
  if( ! context[5] )
    return refalrts::cRecognitionImpossible;
  context[6] = refalrts::char_right( 's', context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::char_right( 'a', context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::char_right( 'r', context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  context[9] = refalrts::char_right( '.', context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#1 as range 2
  //DEBUG: e.FileName#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} 'l'/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & Lower/6 } Tile{ AsIs: </0 Reuse: & GetBaseName/4 AsIs: e.FileName#1/2 HalfReuse: >/9 HalfReuse: >/8 } Tile{ ]] }
  refalrts::reinit_open_call(context[7]);
  refalrts::reinit_name(context[6], functions[efunc_Lower]);
  refalrts::update_name(context[4], functions[efunc_GetBaseName]);
  refalrts::reinit_close_call(context[9]);
  refalrts::reinit_close_call(context[8]);
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[7], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GetBaseNameLowerCaseNoExt("GetBaseNameLowerCaseNoExt", 2216874807U, 2374776932U, func_GetBaseNameLowerCaseNoExt);


static refalrts::FnResult func_GetBaseName(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & GetBaseName/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & GetBaseName/4 e.Folder#1/7 s.Sep#1/11 e.RestOfPath#1/9 >/1
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
      // closed e.RestOfPath#1 as range 9
      //DEBUG: e.Folder#1: 7
      //DEBUG: s.Sep#1: 11
      //DEBUG: e.RestOfPath#1: 9
      //7: e.Folder#1
      //9: e.RestOfPath#1
      //11: s.Sep#1
      //17: s.Sep#1

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[12]);
      refalrts::alloc_name(vm, context[14], functions[efunc_gen_GetBaseName_S1C1]);
      refalrts::alloc_open_call(vm, context[15]);
      refalrts::alloc_name(vm, context[16], functions[efunc_IsDirectorySeparator]);
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
        // </12 & GetBaseName$1?1/16 # True/17 >/13
        context[14] = 0;
        context[15] = 0;
        context[16] = refalrts::call_left( context[14], context[15], context[12], context[13] );
        context[17] = refalrts::ident_left( identifiers[ident_True], context[14], context[15] );
        if( ! context[17] )
          continue;
        if( ! refalrts::empty_seq( context[14], context[15] ) )
          continue;
        //DEBUG: e.Folder#1: 7
        //DEBUG: s.Sep#1: 11
        //DEBUG: e.RestOfPath#1: 9

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} e.Folder#1/7 s.Sep#1/11 {REMOVED TILE} </12 & GetBaseName$1?1/16 # True/17 >/13 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & GetBaseName/4 } Tile{ AsIs: e.RestOfPath#1/9 } Tile{ AsIs: >/1 ]] }
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[9], context[10] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[12], context[13]);
      continue;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GetBaseName/4 e.BaseName#1/2 >/1
  // closed e.BaseName#1 as range 2
  //DEBUG: e.BaseName#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & GetBaseName/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.BaseName#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GetBaseName("GetBaseName", 2216874807U, 2374776932U, func_GetBaseName);


static refalrts::FnResult func_gen_Map_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 42 elems
  refalrts::Iter context[42];
  refalrts::zeros( context, 42 );
  // </0 & Map@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@1/4 e.new#1/2 (/11 e.new#2/9 )/12 (/7 e.new#3/5 )/8 >/1
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
  // closed e.new#1 as range 2
  // closed e.new#2 as range 9
  // closed e.new#3 as range 5
  do {
    // </0 & Map@1/4 e.new#4/13 (/11 e.new#7/15 )/12 (/7 t.new#5/19 e.new#6/17 )/8 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[5];
    context[18] = context[6];
    // closed e.new#4 as range 13
    // closed e.new#7 as range 15
    context[20] = refalrts::tvar_left( context[19], context[17], context[18] );
    if( ! context[20] )
      continue;
    // closed e.new#6 as range 17
    do {
      // </0 & Map@1/4 e.Prefix#2/21 (/11 e.Banner#1/23 )/12 (/7 (/19 s.Pos#3/29 e.0#0/27 )/20 e.Tail#1/25 )/8 >/1
      context[21] = context[13];
      context[22] = context[14];
      context[23] = context[15];
      context[24] = context[16];
      context[25] = context[17];
      context[26] = context[18];
      context[27] = 0;
      context[28] = 0;
      if( ! refalrts::brackets_term( context[27], context[28], context[19] ) )
        continue;
      // closed e.Prefix#2 as range 21
      // closed e.Banner#1 as range 23
      // closed e.Tail#1 as range 25
      if( ! refalrts::svar_left( context[29], context[27], context[28] ) )
        continue;
      // closed e.0#0 as range 27
      //DEBUG: e.Prefix#2: 21
      //DEBUG: e.Banner#1: 23
      //DEBUG: e.Tail#1: 25
      //DEBUG: s.Pos#3: 29
      //DEBUG: e.0#0: 27

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </30 & PrintErr/31 e.Prefix#2/21/32 </34 Tile{ HalfReuse: & Symb/19 AsIs: s.Pos#3/29 } >/35 Tile{ HalfReuse: ':'/20 } ' '/36 e.Banner#1/23/37": "/39 Tile{ AsIs: e.0#0/27 } >/41 Tile{ AsIs: </0 AsIs: & Map@1/4 AsIs: e.Prefix#2/21 AsIs: (/11 AsIs: e.Banner#1/23 AsIs: )/12 AsIs: (/7 } Tile{ AsIs: e.Tail#1/25 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[30]);
      refalrts::alloc_name(vm, context[31], functions[efunc_PrintErr]);
      refalrts::copy_evar(vm, context[32], context[33], context[21], context[22]);
      refalrts::alloc_open_call(vm, context[34]);
      refalrts::alloc_close_call(vm, context[35]);
      refalrts::alloc_char(vm, context[36], ' ');
      refalrts::copy_evar(vm, context[37], context[38], context[23], context[24]);
      refalrts::alloc_chars(vm, context[39], context[40], ": ", 2);
      refalrts::alloc_close_call(vm, context[41]);
      refalrts::reinit_name(context[19], functions[efunc_Symb]);
      refalrts::reinit_char(context[20], ':');
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::push_stack( vm, context[41] );
      refalrts::push_stack( vm, context[30] );
      refalrts::push_stack( vm, context[35] );
      refalrts::push_stack( vm, context[34] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_evar( res, context[0], context[7] );
      res = refalrts::splice_evar( res, context[41], context[41] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[36], context[40] );
      res = refalrts::splice_evar( res, context[20], context[20] );
      res = refalrts::splice_evar( res, context[35], context[35] );
      res = refalrts::splice_evar( res, context[19], context[29] );
      res = refalrts::splice_evar( res, context[30], context[34] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@1/4 e.Prefix#2/21 (/11 e.Banner#1/23 )/12 (/7 t.Next#1/19 e.Tail#1/25 )/8 >/1
    context[21] = context[13];
    context[22] = context[14];
    context[23] = context[15];
    context[24] = context[16];
    context[25] = context[17];
    context[26] = context[18];
    // closed e.Prefix#2 as range 21
    // closed e.Banner#1 as range 23
    // closed e.Tail#1 as range 25
    //DEBUG: t.Next#1: 19
    //DEBUG: e.Prefix#2: 21
    //DEBUG: e.Banner#1: 23
    //DEBUG: e.Tail#1: 25

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </27 & ReportMessages\1*1/28 (/29 e.Prefix#2/21/30 )/32 (/33 e.Banner#1/23/34 )/36 Tile{ AsIs: t.Next#1/19 } >/37 Tile{ AsIs: </0 AsIs: & Map@1/4 AsIs: e.Prefix#2/21 AsIs: (/11 AsIs: e.Banner#1/23 AsIs: )/12 AsIs: (/7 } Tile{ AsIs: e.Tail#1/25 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[27]);
    refalrts::alloc_name(vm, context[28], functions[efunc_gen_ReportMessages_L1D1]);
    refalrts::alloc_open_bracket(vm, context[29]);
    refalrts::copy_evar(vm, context[30], context[31], context[21], context[22]);
    refalrts::alloc_close_bracket(vm, context[32]);
    refalrts::alloc_open_bracket(vm, context[33]);
    refalrts::copy_evar(vm, context[34], context[35], context[23], context[24]);
    refalrts::alloc_close_bracket(vm, context[36]);
    refalrts::alloc_close_call(vm, context[37]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::push_stack( vm, context[37] );
    refalrts::push_stack( vm, context[27] );
    refalrts::link_brackets( context[33], context[36] );
    refalrts::link_brackets( context[29], context[32] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[37], context[37] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[27], context[36] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@1/4 e.Prefix#2/2 (/11 e.Banner#1/9 )/12 (/7 )/8 >/1
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Prefix#2 as range 2
  // closed e.Banner#1 as range 9
  //DEBUG: e.Prefix#2: 2
  //DEBUG: e.Banner#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map@1/4 e.Prefix#2/2 (/11 e.Banner#1/9 )/12 (/7 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z1("Map@1", 2216874807U, 2374776932U, func_gen_Map_Z1);


static refalrts::FnResult func_gen_Map_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & Map@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@2/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Map@2/4 (/7 s.new#3/13 s.new#4/14 e.new#5/11 )/8 e.new#6/9 >/1
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
        // </0 & Map@2/4 (/7 s.Pos#2/13 # NotFound/14 e.1#0/15 )/8 e.Tail#1/17 >/1
        context[15] = context[11];
        context[16] = context[12];
        context[17] = context[9];
        context[18] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_NotFound], context[14] ) )
          continue;
        // closed e.1#0 as range 15
        // closed e.Tail#1 as range 17
        //DEBUG: s.Pos#2: 13
        //DEBUG: e.1#0: 15
        //DEBUG: e.Tail#1: 17

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#2/13 HalfReuse: 'f'/14 } Tile{ HalfReuse: 'i'/4 }"le "/19 Tile{ AsIs: e.1#0/15 }" is not found"/21 )/23 Tile{ AsIs: </0 } Tile{ HalfReuse: & Map@2/8 AsIs: e.Tail#1/17 AsIs: >/1 ]] }
        refalrts::alloc_chars(vm, context[19], context[20], "le ", 3);
        refalrts::alloc_chars(vm, context[21], context[22], " is not found", 13);
        refalrts::alloc_close_bracket(vm, context[23]);
        refalrts::reinit_char(context[14], 'f');
        refalrts::reinit_char(context[4], 'i');
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z2]);
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
        // </0 & Map@2/4 (/7 s.Pos#2/13 # Source/14 (/21 s.Dialect#2/23 e.4#0/19 )/22 e.2#0/15 )/8 e.Tail#1/17 >/1
        context[15] = context[11];
        context[16] = context[12];
        context[17] = context[9];
        context[18] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_Source], context[14] ) )
          continue;
        context[19] = 0;
        context[20] = 0;
        context[21] = refalrts::brackets_left( context[19], context[20], context[15], context[16] );
        if( ! context[21] )
          continue;
        refalrts::bracket_pointers(context[21], context[22]);
        // closed e.2#0 as range 15
        // closed e.Tail#1 as range 17
        if( ! refalrts::svar_left( context[23], context[19], context[20] ) )
          continue;
        // closed e.4#0 as range 19
        //DEBUG: s.Pos#2: 13
        //DEBUG: e.2#0: 15
        //DEBUG: e.Tail#1: 17
        //DEBUG: s.Dialect#2: 23
        //DEBUG: e.4#0: 19

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} & Map@2/4 (/7 s.Pos#2/13 # Source/14 (/21 s.Dialect#2/23 e.4#0/19 )/22 e.2#0/15 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & Map@2/8 AsIs: e.Tail#1/17 AsIs: >/1 ]] }
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z2]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        refalrts::splice_to_freelist_open( vm, context[0], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@2/4 (/7 s.Pos#2/13 # Output/14 e.1#0/15 )/8 e.Tail#1/17 >/1
        context[15] = context[11];
        context[16] = context[12];
        context[17] = context[9];
        context[18] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_Output], context[14] ) )
          continue;
        // closed e.1#0 as range 15
        // closed e.Tail#1 as range 17
        //DEBUG: s.Pos#2: 13
        //DEBUG: e.1#0: 15
        //DEBUG: e.Tail#1: 17

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} & Map@2/4 (/7 s.Pos#2/13 # Output/14 e.1#0/15 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & Map@2/8 AsIs: e.Tail#1/17 AsIs: >/1 ]] }
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z2]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        refalrts::splice_to_freelist_open( vm, context[0], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@2/4 (/7 s.Pos#2/13 # OutputWithNative/14 (/21 e.3#0/19 )/22 e.2#0/15 )/8 e.Tail#1/17 >/1
      context[15] = context[11];
      context[16] = context[12];
      context[17] = context[9];
      context[18] = context[10];
      if( ! refalrts::ident_term( identifiers[ident_OutputWithNative], context[14] ) )
        continue;
      context[19] = 0;
      context[20] = 0;
      context[21] = refalrts::brackets_left( context[19], context[20], context[15], context[16] );
      if( ! context[21] )
        continue;
      refalrts::bracket_pointers(context[21], context[22]);
      // closed e.3#0 as range 19
      // closed e.2#0 as range 15
      // closed e.Tail#1 as range 17
      //DEBUG: s.Pos#2: 13
      //DEBUG: e.3#0: 19
      //DEBUG: e.2#0: 15
      //DEBUG: e.Tail#1: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} & Map@2/4 (/7 s.Pos#2/13 # OutputWithNative/14 (/21 e.3#0/19 )/22 e.2#0/15 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & Map@2/8 AsIs: e.Tail#1/17 AsIs: >/1 ]] }
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z2]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      refalrts::splice_to_freelist_open( vm, context[0], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@2/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Main-SwFoundFiles$1\1*4/4 AsIs: t.Next#1/7 } >/11 </12 & Map@2/13 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z2]);
    refalrts::update_name(context[4], functions[efunc_gen_Mainm_SwFoundFiles_S1L1D4]);
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

  // </0 & Map@2/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map@2/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z2("Map@2", 2216874807U, 2374776932U, func_gen_Map_Z2);


static refalrts::FnResult func_gen_Map_Z3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
  // </0 & Map@3/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@3/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Map@3/4 (/7 s.new#3/13 s.new#4/14 e.new#5/11 )/8 e.new#6/9 >/1
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
        // </0 & Map@3/4 (/7 s.new#7/13 s.new#8/14 (/21 e.new#9/19 )/22 e.new#10/15 )/8 e.new#11/17 >/1
        context[15] = context[11];
        context[16] = context[12];
        context[17] = context[9];
        context[18] = context[10];
        context[19] = 0;
        context[20] = 0;
        context[21] = refalrts::brackets_left( context[19], context[20], context[15], context[16] );
        if( ! context[21] )
          continue;
        refalrts::bracket_pointers(context[21], context[22]);
        // closed e.new#9 as range 19
        // closed e.new#10 as range 15
        // closed e.new#11 as range 17
        do {
          // </0 & Map@3/4 (/7 s.Pos#2/13 # Collision/14 (/21 e.3#0/23 )/22 e.2#0/25 )/8 e.Tail#1/27 >/1
          context[23] = context[19];
          context[24] = context[20];
          context[25] = context[15];
          context[26] = context[16];
          context[27] = context[17];
          context[28] = context[18];
          if( ! refalrts::ident_term( identifiers[ident_Collision], context[14] ) )
            continue;
          // closed e.3#0 as range 23
          // closed e.2#0 as range 25
          // closed e.Tail#1 as range 27
          //DEBUG: s.Pos#2: 13
          //DEBUG: e.3#0: 23
          //DEBUG: e.2#0: 25
          //DEBUG: e.Tail#1: 27

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#2/13 HalfReuse: 'f'/14 HalfReuse: 'i'/21 } Tile{ HalfReuse: 'l'/4 }"es "/29 Tile{ AsIs: e.3#0/23 }" and "/31 Tile{ AsIs: e.2#0/25 }" have same name"/33 Tile{ AsIs: )/22 } Tile{ AsIs: </0 } Tile{ HalfReuse: & Map@3/8 AsIs: e.Tail#1/27 AsIs: >/1 ]] }
          refalrts::alloc_chars(vm, context[29], context[30], "es ", 3);
          refalrts::alloc_chars(vm, context[31], context[32], " and ", 5);
          refalrts::alloc_chars(vm, context[33], context[34], " have same name", 15);
          refalrts::reinit_char(context[14], 'f');
          refalrts::reinit_char(context[21], 'i');
          refalrts::reinit_char(context[4], 'l');
          refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z3]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[7], context[22] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[8];
          res = refalrts::splice_evar( res, context[0], context[0] );
          res = refalrts::splice_evar( res, context[22], context[22] );
          res = refalrts::splice_evar( res, context[33], context[34] );
          res = refalrts::splice_evar( res, context[25], context[26] );
          res = refalrts::splice_evar( res, context[31], context[32] );
          res = refalrts::splice_evar( res, context[23], context[24] );
          res = refalrts::splice_evar( res, context[29], context[30] );
          res = refalrts::splice_evar( res, context[4], context[4] );
          res = refalrts::splice_evar( res, context[7], context[21] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Map@3/4 (/7 s.Pos#2/13 # Source/14 (/21 s.Dialect#2/29 e.4#0/23 )/22 e.2#0/25 )/8 e.Tail#1/27 >/1
        context[23] = context[19];
        context[24] = context[20];
        context[25] = context[15];
        context[26] = context[16];
        context[27] = context[17];
        context[28] = context[18];
        if( ! refalrts::ident_term( identifiers[ident_Source], context[14] ) )
          continue;
        // closed e.2#0 as range 25
        // closed e.Tail#1 as range 27
        if( ! refalrts::svar_left( context[29], context[23], context[24] ) )
          continue;
        // closed e.4#0 as range 23
        //DEBUG: s.Pos#2: 13
        //DEBUG: e.2#0: 25
        //DEBUG: e.Tail#1: 27
        //DEBUG: s.Dialect#2: 29
        //DEBUG: e.4#0: 23

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} & Map@3/4 (/7 s.Pos#2/13 # Source/14 (/21 s.Dialect#2/29 e.4#0/23 )/22 e.2#0/25 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & Map@3/8 AsIs: e.Tail#1/27 AsIs: >/1 ]] }
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z3]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        refalrts::splice_to_freelist_open( vm, context[0], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@3/4 (/7 s.Pos#2/13 # Output/14 e.2#0/15 t.1#0/19 )/8 e.Tail#1/17 >/1
      context[15] = context[11];
      context[16] = context[12];
      context[17] = context[9];
      context[18] = context[10];
      if( ! refalrts::ident_term( identifiers[ident_Output], context[14] ) )
        continue;
      // closed e.Tail#1 as range 17
      context[20] = refalrts::tvar_right( context[19], context[15], context[16] );
      if( ! context[20] )
        continue;
      // closed e.2#0 as range 15
      //DEBUG: s.Pos#2: 13
      //DEBUG: e.Tail#1: 17
      //DEBUG: t.1#0: 19
      //DEBUG: e.2#0: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} & Map@3/4 (/7 s.Pos#2/13 # Output/14 e.2#0/15 t.1#0/19 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & Map@3/8 AsIs: e.Tail#1/17 AsIs: >/1 ]] }
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z3]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      refalrts::splice_to_freelist_open( vm, context[0], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@3/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Main-SwRenamedTargets$1\1*3/4 AsIs: t.Next#1/7 } >/11 </12 & Map@3/13 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z3]);
    refalrts::update_name(context[4], functions[efunc_gen_Mainm_SwRenamedTargets_S1L1D3]);
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

  // </0 & Map@3/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map@3/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z3("Map@3", 2216874807U, 2374776932U, func_gen_Map_Z3);


static refalrts::FnResult func_gen_Map_Z4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
  // </0 & Map@4/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@4/4 s.new#1/9 e.new#2/2 (/7 e.new#3/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#3 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Map@4/4 s.new#4/9 e.new#5/10 (/7 t.new#6/14 e.new#7/12 )/8 >/1
    context[10] = context[2];
    context[11] = context[3];
    context[12] = context[5];
    context[13] = context[6];
    // closed e.new#5 as range 10
    context[15] = refalrts::tvar_left( context[14], context[12], context[13] );
    if( ! context[15] )
      continue;
    // closed e.new#7 as range 12
    do {
      // </0 & Map@4/4 s.TargetMode#2/9 e.SearchFolders#3/16 (/7 (/14 s.Pos#4/22 e.0#0/20 )/15 e.Tail#1/18 )/8 >/1
      context[16] = context[10];
      context[17] = context[11];
      context[18] = context[12];
      context[19] = context[13];
      context[20] = 0;
      context[21] = 0;
      if( ! refalrts::brackets_term( context[20], context[21], context[14] ) )
        continue;
      // closed e.SearchFolders#3 as range 16
      // closed e.Tail#1 as range 18
      if( ! refalrts::svar_left( context[22], context[20], context[21] ) )
        continue;
      // closed e.0#0 as range 20
      //DEBUG: s.TargetMode#2: 9
      //DEBUG: e.SearchFolders#3: 16
      //DEBUG: e.Tail#1: 18
      //DEBUG: s.Pos#4: 22
      //DEBUG: e.0#0: 20

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </23 Tile{ HalfReuse: & LookupSourceFiles\1:1/14 AsIs: s.Pos#4/22 } </24 & FindFiles/25 s.TargetMode#2/9/26 (/27 e.SearchFolders#3/16/28 Tile{ AsIs: )/15 } (/30 Tile{ AsIs: e.0#0/20 } )/31 >/32 >/33 Tile{ AsIs: </0 AsIs: & Map@4/4 AsIs: s.TargetMode#2/9 AsIs: e.SearchFolders#3/16 AsIs: (/7 } Tile{ AsIs: e.Tail#1/18 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[23]);
      refalrts::alloc_open_call(vm, context[24]);
      refalrts::alloc_name(vm, context[25], functions[efunc_FindFiles]);
      refalrts::copy_stvar(vm, context[26], context[9]);
      refalrts::alloc_open_bracket(vm, context[27]);
      refalrts::copy_evar(vm, context[28], context[29], context[16], context[17]);
      refalrts::alloc_open_bracket(vm, context[30]);
      refalrts::alloc_close_bracket(vm, context[31]);
      refalrts::alloc_close_call(vm, context[32]);
      refalrts::alloc_close_call(vm, context[33]);
      refalrts::reinit_name(context[14], functions[efunc_gen_LookupSourceFiles_L1B1]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::push_stack( vm, context[33] );
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[32] );
      refalrts::push_stack( vm, context[24] );
      refalrts::link_brackets( context[30], context[31] );
      refalrts::link_brackets( context[27], context[15] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[0], context[7] );
      res = refalrts::splice_evar( res, context[31], context[33] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[30], context[30] );
      res = refalrts::splice_evar( res, context[15], context[15] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_evar( res, context[24], context[27] );
      res = refalrts::splice_evar( res, context[14], context[22] );
      res = refalrts::splice_evar( res, context[23], context[23] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@4/4 s.TargetMode#2/9 e.SearchFolders#3/16 (/7 t.Next#1/14 e.Tail#1/18 )/8 >/1
    context[16] = context[10];
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[13];
    // closed e.SearchFolders#3 as range 16
    // closed e.Tail#1 as range 18
    //DEBUG: t.Next#1: 14
    //DEBUG: s.TargetMode#2: 9
    //DEBUG: e.SearchFolders#3: 16
    //DEBUG: e.Tail#1: 18

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </20 & LookupSourceFiles\1*1/21 s.TargetMode#2/9/22 (/23 e.SearchFolders#3/16/24 )/26 Tile{ AsIs: t.Next#1/14 } >/27 Tile{ AsIs: </0 AsIs: & Map@4/4 AsIs: s.TargetMode#2/9 AsIs: e.SearchFolders#3/16 AsIs: (/7 } Tile{ AsIs: e.Tail#1/18 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[20]);
    refalrts::alloc_name(vm, context[21], functions[efunc_gen_LookupSourceFiles_L1D1]);
    refalrts::copy_stvar(vm, context[22], context[9]);
    refalrts::alloc_open_bracket(vm, context[23]);
    refalrts::copy_evar(vm, context[24], context[25], context[16], context[17]);
    refalrts::alloc_close_bracket(vm, context[26]);
    refalrts::alloc_close_call(vm, context[27]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( vm, context[27] );
    refalrts::push_stack( vm, context[20] );
    refalrts::link_brackets( context[23], context[26] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[27], context[27] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[20], context[26] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@4/4 s.TargetMode#2/9 e.SearchFolders#3/2 (/7 )/8 >/1
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.SearchFolders#3 as range 2
  //DEBUG: s.TargetMode#2: 9
  //DEBUG: e.SearchFolders#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map@4/4 s.TargetMode#2/9 e.SearchFolders#3/2 (/7 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z4("Map@4", 2216874807U, 2374776932U, func_gen_Map_Z4);


static refalrts::FnResult func_gen_Map_Z5(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & Map@5/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@5/4 e.new#1/2 (/7 e.new#2/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 2
  // closed e.new#2 as range 5
  do {
    // </0 & Map@5/4 e.TempDir#2/9 (/7 t.Next#1/13 e.Tail#1/11 )/8 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[11] = context[5];
    context[12] = context[6];
    // closed e.TempDir#2 as range 9
    context[14] = refalrts::tvar_left( context[13], context[11], context[12] );
    if( ! context[14] )
      continue;
    // closed e.Tail#1 as range 11
    //DEBUG: e.TempDir#2: 9
    //DEBUG: t.Next#1: 13
    //DEBUG: e.Tail#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </15 & GetFileName/16 e.TempDir#2/9/17 Tile{ AsIs: t.Next#1/13 } >/19 Tile{ AsIs: </0 AsIs: & Map@5/4 AsIs: e.TempDir#2/9 AsIs: (/7 } Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_name(vm, context[16], functions[efunc_GetFileName]);
    refalrts::copy_evar(vm, context[17], context[18], context[9], context[10]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@5/4 e.TempDir#2/2 (/7 )/8 >/1
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.TempDir#2 as range 2
  //DEBUG: e.TempDir#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map@5/4 e.TempDir#2/2 (/7 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z5("Map@5", 2216874807U, 2374776932U, func_gen_Map_Z5);


static refalrts::FnResult func_gen_MapAccum_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & MapAccum@1/4 s.Overwrite#2/5 t.Acc#1/6 e.Tail#1/2 >/1
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
  // closed e.Tail#1 as range 2
  //DEBUG: s.Overwrite#2: 5
  //DEBUG: t.Acc#1: 6
  //DEBUG: e.Tail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@1/4 AsIs: s.Overwrite#2/5 AsIs: t.Acc#1/6 AsIs: e.Tail#1/2 HalfReuse: (/1 } )/8 >/9 Tile{ ]] }
  refalrts::alloc_close_bracket(vm, context[8]);
  refalrts::alloc_close_call(vm, context[9]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z1]);
  refalrts::reinit_open_bracket(context[1]);
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[1], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MapAccum_Z1("MapAccum@1", 2216874807U, 2374776932U, func_gen_MapAccum_Z1);


static refalrts::FnResult func_gen_Map_Z6(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 39 elems
  refalrts::Iter context[39];
  refalrts::zeros( context, 39 );
  // </0 & Map@6/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@6/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Map@6/4 t.new#3/5 t.new#4/9 e.new#5/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[10] = refalrts::tvar_left( context[9], context[7], context[8] );
    if( ! context[10] )
      continue;
    // closed e.new#5 as range 7
    do {
      // </0 & Map@6/4 t.new#6/5 (/9 s.new#7/15 s.new#8/16 e.new#9/13 )/10 e.new#10/11 >/1
      context[11] = context[7];
      context[12] = context[8];
      context[13] = 0;
      context[14] = 0;
      if( ! refalrts::brackets_term( context[13], context[14], context[9] ) )
        continue;
      // closed e.new#10 as range 11
      if( ! refalrts::svar_left( context[15], context[13], context[14] ) )
        continue;
      if( ! refalrts::svar_left( context[16], context[13], context[14] ) )
        continue;
      // closed e.new#9 as range 13
      do {
        // </0 & Map@6/4 t.new#11/5 (/9 s.new#12/15 # Output/16 e.new#13/17 t.new#14/21 )/10 e.new#15/19 >/1
        context[17] = context[13];
        context[18] = context[14];
        context[19] = context[11];
        context[20] = context[12];
        if( ! refalrts::ident_term( identifiers[ident_Output], context[16] ) )
          continue;
        // closed e.new#15 as range 19
        context[22] = refalrts::tvar_right( context[21], context[17], context[18] );
        if( ! context[22] )
          continue;
        // closed e.new#13 as range 17
        do {
          // </0 & Map@6/4 t.Config#1/5 (/9 s.Pos#2/15 # Output/16 e.2#0/23 # NoNative/21 )/10 e.Tail#1/25 >/1
          context[23] = context[17];
          context[24] = context[18];
          context[25] = context[19];
          context[26] = context[20];
          if( ! refalrts::ident_term( identifiers[ident_NoNative], context[21] ) )
            continue;
          // closed e.2#0 as range 23
          // closed e.Tail#1 as range 25
          //DEBUG: t.Config#1: 5
          //DEBUG: s.Pos#2: 15
          //DEBUG: e.2#0: 23
          //DEBUG: e.Tail#1: 25

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Pos#2/15 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } </27 & Prout/28 Tile{ HalfReuse: '+'/9 }"Linking"/29 Tile{ HalfReuse: ' '/16 AsIs: e.2#0/23 HalfReuse: >/21 HalfReuse: (/10 } # RASL/31 # Given/32 e.2#0/23/33 )/35 Tile{ AsIs: </0 AsIs: & Map@6/4 AsIs: t.Config#1/5 } Tile{ AsIs: e.Tail#1/25 } Tile{ AsIs: >/1 ]] }
          refalrts::alloc_open_call(vm, context[27]);
          refalrts::alloc_name(vm, context[28], functions[efunc_Prout]);
          refalrts::alloc_chars(vm, context[29], context[30], "Linking", 7);
          refalrts::alloc_ident(vm, context[31], identifiers[ident_RASL]);
          refalrts::alloc_ident(vm, context[32], identifiers[ident_Given]);
          refalrts::copy_evar(vm, context[33], context[34], context[23], context[24]);
          refalrts::alloc_close_bracket(vm, context[35]);
          refalrts::reinit_char(context[9], '+');
          refalrts::reinit_char(context[16], ' ');
          refalrts::reinit_close_call(context[21]);
          refalrts::reinit_open_bracket(context[10]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[10], context[35] );
          refalrts::push_stack( vm, context[21] );
          refalrts::push_stack( vm, context[27] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[25], context[26] );
          res = refalrts::splice_evar( res, context[0], context[6] );
          res = refalrts::splice_evar( res, context[31], context[35] );
          res = refalrts::splice_evar( res, context[16], context[10] );
          res = refalrts::splice_evar( res, context[29], context[30] );
          res = refalrts::splice_evar( res, context[9], context[9] );
          res = refalrts::splice_evar( res, context[27], context[28] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Map@6/4 t.Config#1/5 (/9 s.Pos#2/15 # Output/16 e.2#0/23 (/21 e.3#0/27 )/22 )/10 e.Tail#1/25 >/1
        context[23] = context[17];
        context[24] = context[18];
        context[25] = context[19];
        context[26] = context[20];
        context[27] = 0;
        context[28] = 0;
        if( ! refalrts::brackets_term( context[27], context[28], context[21] ) )
          continue;
        // closed e.2#0 as range 23
        // closed e.3#0 as range 27
        // closed e.Tail#1 as range 25
        //DEBUG: t.Config#1: 5
        //DEBUG: s.Pos#2: 15
        //DEBUG: e.2#0: 23
        //DEBUG: e.3#0: 27
        //DEBUG: e.Tail#1: 25

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Pos#2/15 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } </29 & Prout/30"+Linking (+ natives) "/31 Tile{ AsIs: e.2#0/23 } >/33 Tile{ AsIs: (/9 } # RASL/34 # Given/35 e.2#0/23/36 Tile{ AsIs: )/10 } (/38 Tile{ Reuse: # Native/16 } Tile{ HalfReuse: # Given/21 AsIs: e.3#0/27 AsIs: )/22 } Tile{ AsIs: </0 AsIs: & Map@6/4 AsIs: t.Config#1/5 } Tile{ AsIs: e.Tail#1/25 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[29]);
        refalrts::alloc_name(vm, context[30], functions[efunc_Prout]);
        refalrts::alloc_chars(vm, context[31], context[32], "+Linking (+ natives) ", 21);
        refalrts::alloc_close_call(vm, context[33]);
        refalrts::alloc_ident(vm, context[34], identifiers[ident_RASL]);
        refalrts::alloc_ident(vm, context[35], identifiers[ident_Given]);
        refalrts::copy_evar(vm, context[36], context[37], context[23], context[24]);
        refalrts::alloc_open_bracket(vm, context[38]);
        refalrts::update_ident(context[16], identifiers[ident_Native]);
        refalrts::reinit_ident(context[21], identifiers[ident_Given]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[38], context[22] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::push_stack( vm, context[33] );
        refalrts::push_stack( vm, context[29] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[25], context[26] );
        res = refalrts::splice_evar( res, context[0], context[6] );
        res = refalrts::splice_evar( res, context[21], context[22] );
        res = refalrts::splice_evar( res, context[16], context[16] );
        res = refalrts::splice_evar( res, context[38], context[38] );
        res = refalrts::splice_evar( res, context[10], context[10] );
        res = refalrts::splice_evar( res, context[36], context[37] );
        res = refalrts::splice_evar( res, context[34], context[35] );
        res = refalrts::splice_evar( res, context[9], context[9] );
        res = refalrts::splice_evar( res, context[33], context[33] );
        res = refalrts::splice_evar( res, context[23], context[24] );
        res = refalrts::splice_evar( res, context[29], context[32] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@6/4 t.Config#1/5 (/9 s.Pos#2/15 # Source/16 (/23 s.Dialect#2/25 e.4#0/21 )/24 e.2#0/17 )/10 e.Tail#1/19 >/1
      context[17] = context[13];
      context[18] = context[14];
      context[19] = context[11];
      context[20] = context[12];
      if( ! refalrts::ident_term( identifiers[ident_Source], context[16] ) )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[17], context[18] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      // closed e.2#0 as range 17
      // closed e.Tail#1 as range 19
      if( ! refalrts::svar_left( context[25], context[21], context[22] ) )
        continue;
      // closed e.4#0 as range 21
      //DEBUG: t.Config#1: 5
      //DEBUG: s.Pos#2: 15
      //DEBUG: e.2#0: 17
      //DEBUG: e.Tail#1: 19
      //DEBUG: s.Dialect#2: 25
      //DEBUG: e.4#0: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Pos#2/15 {REMOVED TILE} {REMOVED TILE} s.Dialect#2/25 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CompileFiles$1\1$3=1/4 AsIs: t.Config#1/5 HalfReuse: s.Dialect2 #25/9 } Tile{ AsIs: (/23 } Tile{ AsIs: e.4#0/21 } Tile{ HalfReuse: )/16 } Tile{ HalfReuse: (/24 AsIs: e.2#0/17 AsIs: )/10 } </26 & Prout/27"*Compiling "/28 e.4#0/21/30 ':'/32 >/33 >/34 </35 & Map@6/36 t.Config#1/5/37 Tile{ AsIs: e.Tail#1/19 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[26]);
      refalrts::alloc_name(vm, context[27], functions[efunc_Prout]);
      refalrts::alloc_chars(vm, context[28], context[29], "*Compiling ", 11);
      refalrts::copy_evar(vm, context[30], context[31], context[21], context[22]);
      refalrts::alloc_char(vm, context[32], ':');
      refalrts::alloc_close_call(vm, context[33]);
      refalrts::alloc_close_call(vm, context[34]);
      refalrts::alloc_open_call(vm, context[35]);
      refalrts::alloc_name(vm, context[36], functions[efunc_gen_Map_Z6]);
      refalrts::copy_evar(vm, context[37], context[38], context[5], context[6]);
      refalrts::update_name(context[4], functions[efunc_gen_CompileFiles_S1L1S3A1]);
      refalrts::reinit_svar( context[9], context[25] );
      refalrts::reinit_close_bracket(context[16]);
      refalrts::reinit_open_bracket(context[24]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[35] );
      refalrts::push_stack( vm, context[34] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[33] );
      refalrts::push_stack( vm, context[26] );
      refalrts::link_brackets( context[24], context[10] );
      refalrts::link_brackets( context[23], context[16] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[26], context[38] );
      res = refalrts::splice_evar( res, context[24], context[10] );
      res = refalrts::splice_evar( res, context[16], context[16] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[23], context[23] );
      refalrts::splice_to_freelist_open( vm, context[9], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@6/4 t.Config#1/5 t.Next#1/9 e.Tail#1/11 >/1
    context[11] = context[7];
    context[12] = context[8];
    // closed e.Tail#1 as range 11
    //DEBUG: t.Config#1: 5
    //DEBUG: t.Next#1: 9
    //DEBUG: e.Tail#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & CompileFiles$1\1*3/4 AsIs: t.Config#1/5 AsIs: t.Next#1/9 } >/13 </14 & Map@6/15 t.Config#1/5/16 Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::alloc_open_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_Map_Z6]);
    refalrts::copy_evar(vm, context[16], context[17], context[5], context[6]);
    refalrts::update_name(context[4], functions[efunc_gen_CompileFiles_S1L1D3]);
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

  // </0 & Map@6/4 t.Config#1/5 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Config#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map@6/4 t.Config#1/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z6("Map@6", 2216874807U, 2374776932U, func_gen_Map_Z6);


static refalrts::FnResult func_gen_Map_Z7(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
  // </0 & Map@7/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@7/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Map@7/4 t.new#3/5 t.new#4/9 e.new#5/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[10] = refalrts::tvar_left( context[9], context[7], context[8] );
    if( ! context[10] )
      continue;
    // closed e.new#5 as range 7
    do {
      // </0 & Map@7/4 t.new#6/5 (/9 s.new#7/15 s.new#8/16 e.new#9/13 )/10 e.new#10/11 >/1
      context[11] = context[7];
      context[12] = context[8];
      context[13] = 0;
      context[14] = 0;
      if( ! refalrts::brackets_term( context[13], context[14], context[9] ) )
        continue;
      // closed e.new#10 as range 11
      if( ! refalrts::svar_left( context[15], context[13], context[14] ) )
        continue;
      if( ! refalrts::svar_left( context[16], context[13], context[14] ) )
        continue;
      // closed e.new#9 as range 13
      do {
        // </0 & Map@7/4 t.Config#1/5 (/9 s.Pos#2/15 # Output/16 e.1#0/17 )/10 e.Tail#1/19 >/1
        context[17] = context[13];
        context[18] = context[14];
        context[19] = context[11];
        context[20] = context[12];
        if( ! refalrts::ident_term( identifiers[ident_Output], context[16] ) )
          continue;
        // closed e.1#0 as range 17
        // closed e.Tail#1 as range 19
        //DEBUG: t.Config#1: 5
        //DEBUG: s.Pos#2: 15
        //DEBUG: e.1#0: 17
        //DEBUG: e.Tail#1: 19

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Pos#2/15 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } </21 & Prout/22 Tile{ HalfReuse: '+'/9 }"Skipping native file "/23 e.1#0/17/25 >/27 Tile{ HalfReuse: (/16 AsIs: e.1#0/17 AsIs: )/10 } Tile{ AsIs: </0 AsIs: & Map@7/4 AsIs: t.Config#1/5 } Tile{ AsIs: e.Tail#1/19 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[21]);
        refalrts::alloc_name(vm, context[22], functions[efunc_Prout]);
        refalrts::alloc_chars(vm, context[23], context[24], "Skipping native file ", 21);
        refalrts::copy_evar(vm, context[25], context[26], context[17], context[18]);
        refalrts::alloc_close_call(vm, context[27]);
        refalrts::reinit_char(context[9], '+');
        refalrts::reinit_open_bracket(context[16]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[16], context[10] );
        refalrts::push_stack( vm, context[27] );
        refalrts::push_stack( vm, context[21] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[19], context[20] );
        res = refalrts::splice_evar( res, context[0], context[6] );
        res = refalrts::splice_evar( res, context[16], context[10] );
        res = refalrts::splice_evar( res, context[23], context[27] );
        res = refalrts::splice_evar( res, context[9], context[9] );
        res = refalrts::splice_evar( res, context[21], context[22] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@7/4 t.Config#1/5 (/9 s.Pos#2/15 # Source/16 (/23 s.Dialect#2/25 e.4#0/21 )/24 e.2#0/17 )/10 e.Tail#1/19 >/1
      context[17] = context[13];
      context[18] = context[14];
      context[19] = context[11];
      context[20] = context[12];
      if( ! refalrts::ident_term( identifiers[ident_Source], context[16] ) )
        continue;
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[17], context[18] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      // closed e.2#0 as range 17
      // closed e.Tail#1 as range 19
      if( ! refalrts::svar_left( context[25], context[21], context[22] ) )
        continue;
      // closed e.4#0 as range 21
      //DEBUG: t.Config#1: 5
      //DEBUG: s.Pos#2: 15
      //DEBUG: e.2#0: 17
      //DEBUG: e.Tail#1: 19
      //DEBUG: s.Dialect#2: 25
      //DEBUG: e.4#0: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.Pos#2/15 {REMOVED TILE} s.Dialect#2/25 {REMOVED TILE} {REMOVED TILE} e.2#0/17 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </16 HalfReuse: & Prout/23 } Tile{ HalfReuse: '*'/24 } Tile{ HalfReuse: 'G'/10 }"rammar checking "/26 Tile{ AsIs: e.4#0/21 } ':'/28 >/29 Tile{ AsIs: </0 Reuse: & GrammarCheck/4 AsIs: t.Config#1/5 HalfReuse: s.Dialect2 #25/9 } e.4#0/21/30 >/32 </33 & Map@7/34 t.Config#1/5/35 Tile{ AsIs: e.Tail#1/19 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_chars(vm, context[26], context[27], "rammar checking ", 16);
      refalrts::alloc_char(vm, context[28], ':');
      refalrts::alloc_close_call(vm, context[29]);
      refalrts::copy_evar(vm, context[30], context[31], context[21], context[22]);
      refalrts::alloc_close_call(vm, context[32]);
      refalrts::alloc_open_call(vm, context[33]);
      refalrts::alloc_name(vm, context[34], functions[efunc_gen_Map_Z7]);
      refalrts::copy_evar(vm, context[35], context[36], context[5], context[6]);
      refalrts::reinit_open_call(context[16]);
      refalrts::reinit_name(context[23], functions[efunc_Prout]);
      refalrts::reinit_char(context[24], '*');
      refalrts::reinit_char(context[10], 'G');
      refalrts::update_name(context[4], functions[efunc_GrammarCheck]);
      refalrts::reinit_svar( context[9], context[25] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[33] );
      refalrts::push_stack( vm, context[32] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[29] );
      refalrts::push_stack( vm, context[16] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[32], context[36] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[0], context[9] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[10], context[10] );
      res = refalrts::splice_evar( res, context[24], context[24] );
      res = refalrts::splice_evar( res, context[16], context[23] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@7/4 t.Config#1/5 t.Next#1/9 e.Tail#1/11 >/1
    context[11] = context[7];
    context[12] = context[8];
    // closed e.Tail#1 as range 11
    //DEBUG: t.Config#1: 5
    //DEBUG: t.Next#1: 9
    //DEBUG: e.Tail#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & CompileFiles$2\1*2/4 AsIs: t.Config#1/5 AsIs: t.Next#1/9 } >/13 </14 & Map@7/15 t.Config#1/5/16 Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::alloc_open_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_Map_Z7]);
    refalrts::copy_evar(vm, context[16], context[17], context[5], context[6]);
    refalrts::update_name(context[4], functions[efunc_gen_CompileFiles_S2L1D2]);
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

  // </0 & Map@7/4 t.Config#1/5 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Config#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map@7/4 t.Config#1/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z7("Map@7", 2216874807U, 2374776932U, func_gen_Map_Z7);


static refalrts::FnResult func_gen_Map_Z8(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & Map@8/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@8/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Map@8/4 s.new#3/5 t.new#4/8 e.new#5/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[9] = refalrts::tvar_left( context[8], context[6], context[7] );
    if( ! context[9] )
      continue;
    // closed e.new#5 as range 6
    do {
      // </0 & Map@8/4 s.new#6/5 (/8 s.new#7/14 s.new#8/15 e.new#9/12 )/9 e.new#10/10 >/1
      context[10] = context[6];
      context[11] = context[7];
      context[12] = 0;
      context[13] = 0;
      if( ! refalrts::brackets_term( context[12], context[13], context[8] ) )
        continue;
      // closed e.new#10 as range 10
      if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
        continue;
      if( ! refalrts::svar_left( context[15], context[12], context[13] ) )
        continue;
      // closed e.new#9 as range 12
      do {
        // </0 & Map@8/4 s.FileHandle#2/5 (/8 # RASL/14 s.Origin#3/15 e.1#0/16 )/9 e.Tail#1/18 >/1
        context[16] = context[12];
        context[17] = context[13];
        context[18] = context[10];
        context[19] = context[11];
        if( ! refalrts::ident_term( identifiers[ident_RASL], context[14] ) )
          continue;
        // closed e.1#0 as range 16
        // closed e.Tail#1 as range 18
        //DEBUG: s.FileHandle#2: 5
        //DEBUG: s.Origin#3: 15
        //DEBUG: e.1#0: 16
        //DEBUG: e.Tail#1: 18

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.Origin#3/15 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & FWriteBytes/4 AsIs: s.FileHandle#2/5 HalfReuse: </8 HalfReuse: & LoadBytes/14 } Tile{ AsIs: e.1#0/16 } >/20 >/21 </22 & Map@8/23 Tile{ HalfReuse: s.FileHandle2 #5/9 AsIs: e.Tail#1/18 AsIs: >/1 ]] }
        refalrts::alloc_close_call(vm, context[20]);
        refalrts::alloc_close_call(vm, context[21]);
        refalrts::alloc_open_call(vm, context[22]);
        refalrts::alloc_name(vm, context[23], functions[efunc_gen_Map_Z8]);
        refalrts::update_name(context[4], functions[efunc_FWriteBytes]);
        refalrts::reinit_open_call(context[8]);
        refalrts::reinit_name(context[14], functions[efunc_LoadBytes]);
        refalrts::reinit_svar( context[9], context[5] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[22] );
        refalrts::push_stack( vm, context[21] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[20] );
        refalrts::push_stack( vm, context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[9];
        res = refalrts::splice_evar( res, context[20], context[23] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        refalrts::splice_to_freelist_open( vm, context[14], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@8/4 s.FileHandle#2/5 (/8 # Native/14 s.Origin#3/15 e.1#0/16 )/9 e.Tail#1/18 >/1
      context[16] = context[12];
      context[17] = context[13];
      context[18] = context[10];
      context[19] = context[11];
      if( ! refalrts::ident_term( identifiers[ident_Native], context[14] ) )
        continue;
      // closed e.1#0 as range 16
      // closed e.Tail#1 as range 18
      //DEBUG: s.FileHandle#2: 5
      //DEBUG: s.Origin#3: 15
      //DEBUG: e.1#0: 16
      //DEBUG: e.Tail#1: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/8 # Native/14 s.Origin#3/15 e.1#0/16 )/9 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Map@8/4 AsIs: s.FileHandle#2/5 } Tile{ AsIs: e.Tail#1/18 } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[18], context[19] );
      refalrts::splice_to_freelist_open( vm, context[5], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@8/4 s.FileHandle#2/5 t.Next#1/8 e.Tail#1/10 >/1
    context[10] = context[6];
    context[11] = context[7];
    // closed e.Tail#1 as range 10
    //DEBUG: t.Next#1: 8
    //DEBUG: s.FileHandle#2: 5
    //DEBUG: e.Tail#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & AppendRASLToBinary$2\1*2/4 AsIs: s.FileHandle#2/5 AsIs: t.Next#1/8 } >/12 </13 & Map@8/14 s.FileHandle#2/5/15 Tile{ AsIs: e.Tail#1/10 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[12]);
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_gen_Map_Z8]);
    refalrts::copy_stvar(vm, context[15], context[5]);
    refalrts::update_name(context[4], functions[efunc_gen_AppendRASLToBinary_S2L1D2]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[12], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@8/4 s.FileHandle#2/5 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.FileHandle#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map@8/4 s.FileHandle#2/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z8("Map@8", 2216874807U, 2374776932U, func_gen_Map_Z8);


static refalrts::FnResult func_gen_Map_Z9(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & Map@9/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@9/4 s.new#1/5 s.new#2/6 e.new#3/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & Map@9/4 s.new#4/5 s.new#5/6 t.new#6/9 e.new#7/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[10] = refalrts::tvar_left( context[9], context[7], context[8] );
    if( ! context[10] )
      continue;
    // closed e.new#7 as range 7
    do {
      // </0 & Map@9/4 s.FileHandle#2/5 s.FnAdder#1/6 (/9 e.#0/13 )/10 e.Tail#1/11 >/1
      context[11] = context[7];
      context[12] = context[8];
      context[13] = 0;
      context[14] = 0;
      if( ! refalrts::brackets_term( context[13], context[14], context[9] ) )
        continue;
      // closed e.#0 as range 13
      // closed e.Tail#1 as range 11
      //DEBUG: s.FileHandle#2: 5
      //DEBUG: s.FnAdder#1: 6
      //DEBUG: e.#0: 13
      //DEBUG: e.Tail#1: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </15 & FWriteBytes/16 s.FileHandle#2/5/17 </18 Tile{ HalfReuse: s.FnAdder1 #6/9 AsIs: e.#0/13 HalfReuse: >/10 } >/19 Tile{ AsIs: </0 AsIs: & Map@9/4 AsIs: s.FileHandle#2/5 AsIs: s.FnAdder#1/6 } Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[15]);
      refalrts::alloc_name(vm, context[16], functions[efunc_FWriteBytes]);
      refalrts::copy_stvar(vm, context[17], context[5]);
      refalrts::alloc_open_call(vm, context[18]);
      refalrts::alloc_close_call(vm, context[19]);
      refalrts::reinit_svar( context[9], context[6] );
      refalrts::reinit_close_call(context[10]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[19] );
      refalrts::push_stack( vm, context[15] );
      refalrts::push_stack( vm, context[10] );
      refalrts::push_stack( vm, context[18] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[0], context[6] );
      res = refalrts::splice_evar( res, context[19], context[19] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[15], context[18] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@9/4 s.FileHandle#2/5 s.FnAdder#1/6 t.Next#1/9 e.Tail#1/11 >/1
    context[11] = context[7];
    context[12] = context[8];
    // closed e.Tail#1 as range 11
    //DEBUG: t.Next#1: 9
    //DEBUG: s.FileHandle#2: 5
    //DEBUG: s.FnAdder#1: 6
    //DEBUG: e.Tail#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & AppendSimpleBlock\1*1/4 AsIs: s.FileHandle#2/5 AsIs: s.FnAdder#1/6 AsIs: t.Next#1/9 } >/13 </14 & Map@9/15 s.FileHandle#2/5/16 s.FnAdder#1/6/17 Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::alloc_open_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_Map_Z9]);
    refalrts::copy_stvar(vm, context[16], context[5]);
    refalrts::copy_stvar(vm, context[17], context[6]);
    refalrts::update_name(context[4], functions[efunc_gen_AppendSimpleBlock_L1D1]);
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

  // </0 & Map@9/4 s.FileHandle#2/5 s.FnAdder#1/6 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.FileHandle#2: 5
  //DEBUG: s.FnAdder#1: 6

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map@9/4 s.FileHandle#2/5 s.FnAdder#1/6 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z9("Map@9", 2216874807U, 2374776932U, func_gen_Map_Z9);


static refalrts::FnResult func_gen_Map_Z10(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & Map@10/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@10/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Map@10/4 t.new#3/5 t.new#4/9 e.new#5/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[10] = refalrts::tvar_left( context[9], context[7], context[8] );
    if( ! context[10] )
      continue;
    // closed e.new#5 as range 7
    do {
      // </0 & Map@10/4 t.new#6/5 (/9 s.new#7/15 s.new#8/16 e.new#9/13 )/10 e.new#10/11 >/1
      context[11] = context[7];
      context[12] = context[8];
      context[13] = 0;
      context[14] = 0;
      if( ! refalrts::brackets_term( context[13], context[14], context[9] ) )
        continue;
      // closed e.new#10 as range 11
      if( ! refalrts::svar_left( context[15], context[13], context[14] ) )
        continue;
      if( ! refalrts::svar_left( context[16], context[13], context[14] ) )
        continue;
      // closed e.new#9 as range 13
      do {
        // </0 & Map@10/4 t.Config#1/5 (/9 s.FileType#2/15 # Given/16 e.1#0/17 )/10 e.Tail#1/19 >/1
        context[17] = context[13];
        context[18] = context[14];
        context[19] = context[11];
        context[20] = context[12];
        if( ! refalrts::ident_term( identifiers[ident_Given], context[16] ) )
          continue;
        // closed e.1#0 as range 17
        // closed e.Tail#1 as range 19
        //DEBUG: t.Config#1: 5
        //DEBUG: s.FileType#2: 15
        //DEBUG: e.1#0: 17
        //DEBUG: e.Tail#1: 19

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} (/9 s.FileType#2/15 # Given/16 e.1#0/17 )/10 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & Map@10/4 AsIs: t.Config#1/5 } Tile{ AsIs: e.Tail#1/19 } Tile{ AsIs: >/1 ]] }
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[19], context[20] );
        refalrts::splice_to_freelist_open( vm, context[6], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@10/4 t.Config#1/5 (/9 s.FileType#2/15 # Generated/16 e.1#0/17 )/10 e.Tail#1/19 >/1
      context[17] = context[13];
      context[18] = context[14];
      context[19] = context[11];
      context[20] = context[12];
      if( ! refalrts::ident_term( identifiers[ident_Generated], context[16] ) )
        continue;
      // closed e.1#0 as range 17
      // closed e.Tail#1 as range 19
      //DEBUG: t.Config#1: 5
      //DEBUG: s.FileType#2: 15
      //DEBUG: e.1#0: 17
      //DEBUG: e.Tail#1: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.FileType#2/15 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckedRemoveFile/4 AsIs: t.Config#1/5 } Tile{ AsIs: e.1#0/17 } Tile{ HalfReuse: >/16 } Tile{ HalfReuse: </9 } Tile{ HalfReuse: & Map@10/10 } t.Config#1/5/21 Tile{ AsIs: e.Tail#1/19 } Tile{ AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[21], context[22], context[5], context[6]);
      refalrts::update_name(context[4], functions[efunc_CheckedRemoveFile]);
      refalrts::reinit_close_call(context[16]);
      refalrts::reinit_open_call(context[9]);
      refalrts::reinit_name(context[10], functions[efunc_gen_Map_Z10]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[9] );
      refalrts::push_stack( vm, context[16] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[10], context[10] );
      res = refalrts::splice_evar( res, context[9], context[9] );
      res = refalrts::splice_evar( res, context[16], context[16] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      refalrts::splice_to_freelist_open( vm, context[6], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@10/4 t.Config#1/5 t.Next#1/9 e.Tail#1/11 >/1
    context[11] = context[7];
    context[12] = context[8];
    // closed e.Tail#1 as range 11
    //DEBUG: t.Config#1: 5
    //DEBUG: t.Next#1: 9
    //DEBUG: e.Tail#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & CleanupIntermediateFiles$2\1*2/4 AsIs: t.Config#1/5 AsIs: t.Next#1/9 } >/13 </14 & Map@10/15 t.Config#1/5/16 Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::alloc_open_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_Map_Z10]);
    refalrts::copy_evar(vm, context[16], context[17], context[5], context[6]);
    refalrts::update_name(context[4], functions[efunc_gen_CleanupIntermediateFiles_S2L1D2]);
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

  // </0 & Map@10/4 t.Config#1/5 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Config#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map@10/4 t.Config#1/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z10("Map@10", 2216874807U, 2374776932U, func_gen_Map_Z10);


static refalrts::FnResult func_gen_Map_Z11(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 43 elems
  refalrts::Iter context[43];
  refalrts::zeros( context, 43 );
  // </0 & Map@11/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@11/4 e.new#1/2 (/11 e.new#2/9 )/12 (/7 e.new#3/5 )/8 >/1
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
  // closed e.new#1 as range 2
  // closed e.new#2 as range 9
  // closed e.new#3 as range 5
  do {
    // </0 & Map@11/4 e.new#4/13 (/11 e.new#7/15 )/12 (/7 t.new#5/19 e.new#6/17 )/8 >/1
    context[13] = context[2];
    context[14] = context[3];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[5];
    context[18] = context[6];
    // closed e.new#4 as range 13
    // closed e.new#7 as range 15
    context[20] = refalrts::tvar_left( context[19], context[17], context[18] );
    if( ! context[20] )
      continue;
    // closed e.new#6 as range 17
    do {
      // </0 & Map@11/4 e.#0/21 (/11 e.Banner#1/23 )/12 (/7 (/19 s.Pos#3/29 e.1#0/27 )/20 e.Tail#1/25 )/8 >/1
      context[21] = context[13];
      context[22] = context[14];
      context[23] = context[15];
      context[24] = context[16];
      context[25] = context[17];
      context[26] = context[18];
      context[27] = 0;
      context[28] = 0;
      if( ! refalrts::brackets_term( context[27], context[28], context[19] ) )
        continue;
      // closed e.#0 as range 21
      // closed e.Banner#1 as range 23
      // closed e.Tail#1 as range 25
      if( ! refalrts::svar_left( context[29], context[27], context[28] ) )
        continue;
      // closed e.1#0 as range 27
      //DEBUG: e.#0: 21
      //DEBUG: e.Banner#1: 23
      //DEBUG: e.Tail#1: 25
      //DEBUG: s.Pos#3: 29
      //DEBUG: e.1#0: 27

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </30 & PrintErr/31 e.#0/21/32 ':'/34 </35 Tile{ HalfReuse: & Symb/19 AsIs: s.Pos#3/29 } Tile{ HalfReuse: >/20 }": "/36 e.Banner#1/23/38": "/40 Tile{ AsIs: e.1#0/27 } >/42 Tile{ AsIs: </0 AsIs: & Map@11/4 AsIs: e.#0/21 AsIs: (/11 AsIs: e.Banner#1/23 AsIs: )/12 AsIs: (/7 } Tile{ AsIs: e.Tail#1/25 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[30]);
      refalrts::alloc_name(vm, context[31], functions[efunc_PrintErr]);
      refalrts::copy_evar(vm, context[32], context[33], context[21], context[22]);
      refalrts::alloc_char(vm, context[34], ':');
      refalrts::alloc_open_call(vm, context[35]);
      refalrts::alloc_chars(vm, context[36], context[37], ": ", 2);
      refalrts::copy_evar(vm, context[38], context[39], context[23], context[24]);
      refalrts::alloc_chars(vm, context[40], context[41], ": ", 2);
      refalrts::alloc_close_call(vm, context[42]);
      refalrts::reinit_name(context[19], functions[efunc_Symb]);
      refalrts::reinit_close_call(context[20]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::push_stack( vm, context[42] );
      refalrts::push_stack( vm, context[30] );
      refalrts::push_stack( vm, context[20] );
      refalrts::push_stack( vm, context[35] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_evar( res, context[0], context[7] );
      res = refalrts::splice_evar( res, context[42], context[42] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[36], context[41] );
      res = refalrts::splice_evar( res, context[20], context[20] );
      res = refalrts::splice_evar( res, context[19], context[29] );
      res = refalrts::splice_evar( res, context[30], context[35] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@11/4 e.#0/21 (/11 e.Banner#1/23 )/12 (/7 t.Next#1/19 e.Tail#1/25 )/8 >/1
    context[21] = context[13];
    context[22] = context[14];
    context[23] = context[15];
    context[24] = context[16];
    context[25] = context[17];
    context[26] = context[18];
    // closed e.#0 as range 21
    // closed e.Banner#1 as range 23
    // closed e.Tail#1 as range 25
    //DEBUG: t.Next#1: 19
    //DEBUG: e.#0: 21
    //DEBUG: e.Banner#1: 23
    //DEBUG: e.Tail#1: 25

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </27 & ReportMessages\1*1/28 (/29 e.#0/21/30 ':'/32 )/33 (/34 e.Banner#1/23/35 )/37 Tile{ AsIs: t.Next#1/19 } >/38 Tile{ AsIs: </0 AsIs: & Map@11/4 AsIs: e.#0/21 AsIs: (/11 AsIs: e.Banner#1/23 AsIs: )/12 AsIs: (/7 } Tile{ AsIs: e.Tail#1/25 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[27]);
    refalrts::alloc_name(vm, context[28], functions[efunc_gen_ReportMessages_L1D1]);
    refalrts::alloc_open_bracket(vm, context[29]);
    refalrts::copy_evar(vm, context[30], context[31], context[21], context[22]);
    refalrts::alloc_char(vm, context[32], ':');
    refalrts::alloc_close_bracket(vm, context[33]);
    refalrts::alloc_open_bracket(vm, context[34]);
    refalrts::copy_evar(vm, context[35], context[36], context[23], context[24]);
    refalrts::alloc_close_bracket(vm, context[37]);
    refalrts::alloc_close_call(vm, context[38]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::push_stack( vm, context[38] );
    refalrts::push_stack( vm, context[27] );
    refalrts::link_brackets( context[34], context[37] );
    refalrts::link_brackets( context[29], context[33] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[38], context[38] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[27], context[37] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@11/4 e.#0/2 (/11 e.Banner#1/9 )/12 (/7 )/8 >/1
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.#0 as range 2
  // closed e.Banner#1 as range 9
  //DEBUG: e.#0: 2
  //DEBUG: e.Banner#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map@11/4 e.#0/2 (/11 e.Banner#1/9 )/12 (/7 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z11("Map@11", 2216874807U, 2374776932U, func_gen_Map_Z11);


static refalrts::FnResult func_gen_Map_Z12(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
  // </0 & Map@12/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@12/4 e.new#1/2 (/7 e.new#2/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 2
  // closed e.new#2 as range 5
  do {
    // </0 & Map@12/4 e.new#3/9 (/7 t.new#4/13 e.new#5/11 )/8 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[11] = context[5];
    context[12] = context[6];
    // closed e.new#3 as range 9
    context[14] = refalrts::tvar_left( context[13], context[11], context[12] );
    if( ! context[14] )
      continue;
    // closed e.new#5 as range 11
    do {
      // </0 & Map@12/4 e.Banner#1/15 (/7 (/13 s.Pos#3/21 e.0#0/19 )/14 e.Tail#1/17 )/8 >/1
      context[15] = context[9];
      context[16] = context[10];
      context[17] = context[11];
      context[18] = context[12];
      context[19] = 0;
      context[20] = 0;
      if( ! refalrts::brackets_term( context[19], context[20], context[13] ) )
        continue;
      // closed e.Banner#1 as range 15
      // closed e.Tail#1 as range 17
      if( ! refalrts::svar_left( context[21], context[19], context[20] ) )
        continue;
      // closed e.0#0 as range 19
      //DEBUG: e.Banner#1: 15
      //DEBUG: e.Tail#1: 17
      //DEBUG: s.Pos#3: 21
      //DEBUG: e.0#0: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintErr/4 }"Command line argument "/22 Tile{ HalfReuse: </7 HalfReuse: & Symb/13 AsIs: s.Pos#3/21 } >/24": "/25 Tile{ AsIs: e.Banner#1/15 }": "/27 Tile{ AsIs: e.0#0/19 } >/29 </30 & Map@12/31 e.Banner#1/15/32 Tile{ HalfReuse: (/14 AsIs: e.Tail#1/17 AsIs: )/8 AsIs: >/1 ]] }
      refalrts::alloc_chars(vm, context[22], context[23], "Command line argument ", 22);
      refalrts::alloc_close_call(vm, context[24]);
      refalrts::alloc_chars(vm, context[25], context[26], ": ", 2);
      refalrts::alloc_chars(vm, context[27], context[28], ": ", 2);
      refalrts::alloc_close_call(vm, context[29]);
      refalrts::alloc_open_call(vm, context[30]);
      refalrts::alloc_name(vm, context[31], functions[efunc_gen_Map_Z12]);
      refalrts::copy_evar(vm, context[32], context[33], context[15], context[16]);
      refalrts::update_name(context[4], functions[efunc_PrintErr]);
      refalrts::reinit_open_call(context[7]);
      refalrts::reinit_name(context[13], functions[efunc_Symb]);
      refalrts::reinit_open_bracket(context[14]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[30] );
      refalrts::link_brackets( context[14], context[8] );
      refalrts::push_stack( vm, context[29] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[24] );
      refalrts::push_stack( vm, context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[14];
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_evar( res, context[29], context[31] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[24], context[26] );
      res = refalrts::splice_evar( res, context[7], context[21] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@12/4 e.Banner#1/15 (/7 t.Next#1/13 e.Tail#1/17 )/8 >/1
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[11];
    context[18] = context[12];
    // closed e.Banner#1 as range 15
    // closed e.Tail#1 as range 17
    //DEBUG: t.Next#1: 13
    //DEBUG: e.Banner#1: 15
    //DEBUG: e.Tail#1: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </19 & ReportMessages\1*1/20 (/21"Command line argument "/22 )/24 (/25 e.Banner#1/15/26 )/28 Tile{ AsIs: t.Next#1/13 } >/29 Tile{ AsIs: </0 AsIs: & Map@12/4 AsIs: e.Banner#1/15 AsIs: (/7 } Tile{ AsIs: e.Tail#1/17 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_gen_ReportMessages_L1D1]);
    refalrts::alloc_open_bracket(vm, context[21]);
    refalrts::alloc_chars(vm, context[22], context[23], "Command line argument ", 22);
    refalrts::alloc_close_bracket(vm, context[24]);
    refalrts::alloc_open_bracket(vm, context[25]);
    refalrts::copy_evar(vm, context[26], context[27], context[15], context[16]);
    refalrts::alloc_close_bracket(vm, context[28]);
    refalrts::alloc_close_call(vm, context[29]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( vm, context[29] );
    refalrts::push_stack( vm, context[19] );
    refalrts::link_brackets( context[25], context[28] );
    refalrts::link_brackets( context[21], context[24] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[29], context[29] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[19], context[28] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@12/4 e.Banner#1/2 (/7 )/8 >/1
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Banner#1 as range 2
  //DEBUG: e.Banner#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map@12/4 e.Banner#1/2 (/7 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z12("Map@12", 2216874807U, 2374776932U, func_gen_Map_Z12);


static refalrts::FnResult func_gen_DoMapAccum_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & DoMapAccum@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum@1/4 s.new#1/9 t.new#2/10 e.new#3/2 (/7 e.new#4/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#4 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & DoMapAccum@1/4 s.Overwrite#2/9 t.Acc#1/10 t.Next#1/16 e.Tail#1/12 (/7 e.Scanned#1/14 )/8 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[14] = context[5];
    context[15] = context[6];
    // closed e.Scanned#1 as range 14
    context[17] = refalrts::tvar_left( context[16], context[12], context[13] );
    if( ! context[17] )
      continue;
    // closed e.Tail#1 as range 12
    //DEBUG: t.Acc#1: 10
    //DEBUG: s.Overwrite#2: 9
    //DEBUG: e.Scanned#1: 14
    //DEBUG: t.Next#1: 16
    //DEBUG: e.Tail#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </18 & DoMapAccum-Aux@1/19 s.Overwrite#2/9/20 Tile{ AsIs: e.Tail#1/12 } Tile{ AsIs: (/7 AsIs: e.Scanned#1/14 AsIs: )/8 HalfReuse: (/1 } Tile{ AsIs: </0 Reuse: & RenameLocations-Aux=2\1/4 AsIs: s.Overwrite#2/9 AsIs: t.Acc#1/10 AsIs: t.Next#1/16 } >/21 )/22 >/23 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[18]);
    refalrts::alloc_name(vm, context[19], functions[efunc_gen_DoMapAccumm_Aux_Z1]);
    refalrts::copy_stvar(vm, context[20], context[9]);
    refalrts::alloc_close_call(vm, context[21]);
    refalrts::alloc_close_bracket(vm, context[22]);
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::reinit_open_bracket(context[1]);
    refalrts::update_name(context[4], functions[efunc_gen_RenameLocationsm_Aux_A2L1]);
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[18] );
    refalrts::link_brackets( context[1], context[22] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[21], context[23] );
    res = refalrts::splice_evar( res, context[0], context[17] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[18], context[20] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum@1/4 s.Overwrite#2/9 t.Acc#1/10 (/7 e.Scanned#1/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Scanned#1 as range 5
  //DEBUG: t.Acc#1: 10
  //DEBUG: s.Overwrite#2: 9
  //DEBUG: e.Scanned#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DoMapAccum@1/4 s.Overwrite#2/9 {REMOVED TILE} (/7 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/10 } Tile{ AsIs: e.Scanned#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_Z1("DoMapAccum@1", 2216874807U, 2374776932U, func_gen_DoMapAccum_Z1);


static refalrts::FnResult func_gen_DoMapAccumm_Aux_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & DoMapAccum-Aux@1/4 s.Overwrite#2/13 e.Tail#1/2 (/11 e.Scanned#1/9 )/12 (/7 t.Acc#1/14 e.StepScanned#1/5 )/8 >/1
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
  context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.Scanned#1 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#1 as range 2
  context[15] = refalrts::tvar_left( context[14], context[5], context[6] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  // closed e.StepScanned#1 as range 5
  //DEBUG: e.Scanned#1: 9
  //DEBUG: s.Overwrite#2: 13
  //DEBUG: e.Tail#1: 2
  //DEBUG: t.Acc#1: 14
  //DEBUG: e.StepScanned#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} (/11 {REMOVED TILE} )/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@1/4 AsIs: s.Overwrite#2/13 } Tile{ AsIs: t.Acc#1/14 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Scanned#1/9 } Tile{ AsIs: e.StepScanned#1/5 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  refalrts::splice_to_freelist_open( vm, context[13], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccumm_Aux_Z1("DoMapAccum-Aux@1", 2216874807U, 2374776932U, func_gen_DoMapAccumm_Aux_Z1);


//End of file
