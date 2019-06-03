// This file automatically generated from 'srefc.ref'
// Don't edit! Edit 'srefc.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_52442882_1826840892

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
  efunc_ArgList = 14,
  efunc_Main = 15,
  efunc_Mainm_SwValidCommandLine = 16,
  efunc_ParseCommandLine = 17,
  efunc_LoadFile = 18,
  efunc_ReportErrors = 19,
  efunc_Logm_Init = 20,
  efunc_Configm_GetLogFile = 21,
  efunc_Logm_Final = 22,
  efunc_Mainm_SwFoundFiles = 23,
  efunc_LookupSourceFiles = 24,
  efunc_ReportMessages = 25,
  efunc_OnErrors = 26,
  efunc_Exit = 27,
  efunc_CreateErrorFileMark = 28,
  efunc_OnWarnings = 29,
  efunc_Symb = 30,
  efunc_Prout = 31,
  efunc_Map = 32,
  efunc_gen_ReportMessages_L1 = 33,
  efunc_gen_ReportMessages_A1 = 34,
  efunc_gen_ReportMessages_A1B1 = 35,
  efunc_CreateErrorFileMarkm_SwFile = 36,
  efunc_Configm_GetErrorFile = 37,
  efunc_SaveFile = 38,
  efunc_gen_Mainm_SwFoundFiles_S1L1 = 39,
  efunc_RenameTargets = 40,
  efunc_Configm_GetTargetMode = 41,
  efunc_Mainm_SwRenamedTargets = 42,
  efunc_Link = 43,
  efunc_CompileFiles = 44,
  efunc_gen_Mainm_SwRenamedTargets_S2B1 = 45,
  efunc_gen_Mainm_SwRenamedTargets_S1L1 = 46,
  efunc_gen_Mainm_SwRenamedTargets_S2A1 = 47,
  efunc_Configm_GetGrammarCheck = 48,
  efunc_Configm_GetTargetSuffix = 49,
  efunc_gen_CalcTargetFileName_B1S1A4 = 50,
  efunc_Lower = 51,
  efunc_gen_CalcTargetFileName_B1S1A3 = 52,
  efunc_gen_CalcTargetFileName_B1S1A2 = 53,
  efunc_GetLastPartName = 54,
  efunc_gen_CalcTargetFileName_B1S1A1 = 55,
  efunc_gen_CalcTargetFileName_B1 = 56,
  efunc_Configm_GetTargetFileName = 57,
  efunc_gen_LookupSourceFiles_L1B1 = 58,
  efunc_FindFiles = 59,
  efunc_gen_LookupSourceFiles_L1 = 60,
  efunc_Configm_GetSearchFolders = 61,
  efunc_gen_LookupSourceFiles_A2 = 62,
  efunc_gen_LookupSourceFiles_A1 = 63,
  efunc_RenameTargetsm_WithCpp = 64,
  efunc_RenameTargetsm_Stub = 65,
  efunc_gen_RenameTargetsm_Stub_L1 = 66,
  efunc_ScanCollisions = 67,
  efunc_GetFileName = 68,
  efunc_GetBaseNameLowerCase = 69,
  efunc_RenameLocations = 70,
  efunc_RenameLocationsm_Aux = 71,
  efunc_Inc = 72,
  efunc_gen_RenameLocationsm_Aux_A1 = 73,
  efunc_MapReduce = 74,
  efunc_gen_RenameLocationsm_Aux_A1L1 = 75,
  efunc_gen_CompileFiles_S1L1S3B1 = 76,
  efunc_CompileFile = 77,
  efunc_gen_CompileFiles_S1L1S3A1 = 78,
  efunc_GrammarCheck = 79,
  efunc_gen_CompileFiles_S1L1 = 80,
  efunc_gen_CompileFiles_S2L1 = 81,
  efunc_Configm_GetCppCompiler = 82,
  efunc_Configm_GetPrefix = 83,
  efunc_Linkm_Exe = 84,
  efunc_Linkm_Lib = 85,
  efunc_Linkm_R = 86,
  efunc_gen_Link_B1 = 87,
  efunc_Linkm_WithPrefix = 88,
  efunc_Linkm_CppCompile = 89,
  efunc_FindPrefix = 90,
  efunc_gen_Linkm_Exe_S4B1 = 91,
  efunc_ReportWarnings = 92,
  efunc_gen_Linkm_Lib_S5B1 = 93,
  efunc_gen_Linkm_R_S2L1 = 94,
  efunc_Linkm_Aux = 95,
  efunc_Chmodm_Xm_Prefix = 96,
  efunc_CopyPrefix = 97,
  efunc_gen_Linkm_WithPrefix_L1 = 98,
  efunc_CheckReturnCode = 99,
  efunc_gen_Chmodm_Xm_Prefix_B1S2A1 = 100,
  efunc_System = 101,
  efunc_gen_Chmodm_Xm_Prefix_B1 = 102,
  efunc_Configm_GetChmodXCommand = 103,
  efunc_LinkError = 104,
  efunc_CheckCppCompilationSuccessed = 105,
  efunc_EnsureAligned4096 = 106,
  efunc_gen_Linkm_CppCompile_L1A1 = 107,
  efunc_gen_Linkm_CppCompile_L1A1L1 = 108,
  efunc_gen_Linkm_CppCompile_L1 = 109,
  efunc_PreLinkCleanupTemporary = 110,
  efunc_AppendRASLToBinary = 111,
  efunc_AppendReferencesToBinary = 112,
  efunc_AppendIncorporatedToBinary = 113,
  efunc_PostLinkRename = 114,
  efunc_Configm_GetIncorporateds = 115,
  efunc_gen_Linkm_Aux_A4 = 116,
  efunc_gen_Linkm_Aux_A3 = 117,
  efunc_Configm_GetReferences = 118,
  efunc_gen_Linkm_Aux_A2 = 119,
  efunc_gen_Linkm_Aux_A1 = 120,
  efunc_CalcTargetFileName = 121,
  efunc_RemoveFile = 122,
  efunc_gen_PreLinkCleanupTemporary_B1S2B1 = 123,
  efunc_gen_PreLinkCleanupTemporary_B1 = 124,
  efunc_ExistFile = 125,
  efunc_gen_CheckCppCompilationSuccessed_B1 = 126,
  efunc_FClose = 127,
  efunc_AlignToPage = 128,
  efunc_FOpen = 129,
  efunc_gen_EnsureAligned4096_A1 = 130,
  efunc_FWriteBytes = 131,
  efunc_gen_AlignToPage_B1 = 132,
  efunc_FTell = 133,
  efunc_gen_AlignToPage_A1 = 134,
  efunc_FSeek = 135,
  efunc_LoadBytes = 136,
  efunc_gen_AppendRASLToBinary_L1 = 137,
  efunc_gen_AppendRASLToBinary_A1 = 138,
  efunc_AppendSimpleBlock = 139,
  efunc_PutBlockReference = 140,
  efunc_PutBlockIncorporated = 141,
  efunc_gen_AppendSimpleBlock_L1 = 142,
  efunc_gen_AppendSimpleBlock_A1 = 143,
  efunc_RenameFile = 144,
  efunc_gen_PostLinkRename_B1 = 145,
  efunc_gen_PostLinkRename_A1B1S1B1 = 146,
  efunc_gen_PostLinkRename_A1B1 = 147,
  efunc_gen_PostLinkRename_A1 = 148,
  efunc_DoFindPrefix = 149,
  efunc_gen_FindPrefix_A1 = 150,
  efunc_gen_FindPrefix_A1B1 = 151,
  efunc_gen_DoFindPrefix_S1B1 = 152,
  efunc_GlueNames = 153,
  efunc_gen_DoFindPrefix_S1A1 = 154,
  efunc_SaveBytes = 155,
  efunc_DoGetFileName = 156,
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
  ident_Fails = 8,
  ident_NoConfig = 9,
  ident_NoErrorFile = 10,
  ident_ErrorFile = 11,
  ident_NotFound = 12,
  ident_Source = 13,
  ident_Output = 14,
  ident_OutputWithNative = 15,
  ident_Collision = 16,
  ident_NormalRun = 17,
  ident_GrammarCheck = 18,
  ident_RASL = 19,
  ident_DefaultTargetFileName = 20,
  ident_EXE = 21,
  ident_LIB = 22,
  ident_R = 23,
  ident_CompileOnly = 24,
  ident_NoNative = 25,
  ident_Native = 26,
  ident_NoCppCompiler = 27,
  ident_True = 28,
  ident_False = 29,
  ident_END = 30,
  ident_Current = 31,
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

static refalrts::NativeReference nat_ref_Mu("Mu", 52442882U, 1826840892U, func_Mu);


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
    refalrts::alloc_number(vm, context[9], 1826840892UL);
    refalrts::update_name(context[4], functions[efunc_u_u_FindMuPtr]);
    refalrts::reinit_number(context[5], 52442882UL);
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
  refalrts::reinit_number(context[5], 52442882UL);
  refalrts::reinit_number(context[7], 1826840892UL);
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

static refalrts::NativeReference nat_ref_gen_u_u_Mum_Aux_S13B1("__Mu-Aux$13:1", 52442882U, 1826840892U, func_gen_u_u_Mum_Aux_S13B1);


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

static refalrts::NativeReference nat_ref_u_u_Mum_Aux("__Mu-Aux", 52442882U, 1826840892U, func_u_u_Mum_Aux);


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

static refalrts::NativeReference nat_ref_Residue("Residue", 52442882U, 1826840892U, func_Residue);


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
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
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
    // </0 & Main/4 (/7 e.ProgName#1/5 )/8 (/13 '@'/15 e.Config#1/11 )/14 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[9], context[10] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    context[15] = refalrts::char_left( '@', context[11], context[12] );
    if( ! context[15] )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    // closed e.ProgName#1 as range 5
    // closed e.Config#1 as range 11
    //DEBUG: e.ProgName#1: 5
    //DEBUG: e.Config#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} e.ProgName#1/5 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Main-SwValidCommandLine/4 AsIs: (/7 } e.Config#1/11/16 )/18 </19 Tile{ HalfReuse: & ParseCommandLine/8 HalfReuse: </13 HalfReuse: & LoadFile/15 AsIs: e.Config#1/11 HalfReuse: >/14 AsIs: >/1 } >/20 Tile{ ]] }
    refalrts::copy_evar(vm, context[16], context[17], context[11], context[12]);
    refalrts::alloc_close_bracket(vm, context[18]);
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_close_call(vm, context[20]);
    refalrts::update_name(context[4], functions[efunc_Mainm_SwValidCommandLine]);
    refalrts::reinit_name(context[8], functions[efunc_ParseCommandLine]);
    refalrts::reinit_open_call(context[13]);
    refalrts::reinit_name(context[15], functions[efunc_LoadFile]);
    refalrts::reinit_close_call(context[14]);
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[13] );
    refalrts::link_brackets( context[7], context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[8], context[1] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[16], context[17] );
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

static refalrts::NativeReference nat_ref_Main("Main", 52442882U, 1826840892U, func_Main);


static refalrts::FnResult func_Mainm_SwValidCommandLine(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
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

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReportErrors/4 AsIs: t.CommandLineSource#1/5 } Tile{ AsIs: t.Config#1/10 } (/12 Tile{ HalfReuse: 1/7 }"no source files in command line"/13 )/15 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[12]);
      refalrts::alloc_chars(vm, context[13], context[14], "no source files in command line", 31);
      refalrts::alloc_close_bracket(vm, context[15]);
      refalrts::update_name(context[4], functions[efunc_ReportErrors]);
      refalrts::reinit_number(context[7], 1UL);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[12], context[15] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[13], context[15] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[10], context[11] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Main-SwValidCommandLine/4 t.CommandLineSource#1/5 # Success/7 t.Config#1/10 e.Files#1/8 >/1
    // closed e.Files#1 as range 8
    //DEBUG: t.CommandLineSource#1: 5
    //DEBUG: t.Config#1: 10
    //DEBUG: e.Files#1: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </12 & Log-Init/13 </14 & Config-GetLogFile/15 t.Config#1/10/16 >/18 >/19 Tile{ AsIs: </0 Reuse: & Main-SwFoundFiles/4 AsIs: t.CommandLineSource#1/5 } t.Config#1/10/20 </22 Tile{ HalfReuse: & LookupSourceFiles/7 AsIs: t.Config#1/10 AsIs: e.Files#1/8 AsIs: >/1 } >/23 </24 & Log-Final/25 >/26 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_Logm_Init]);
    refalrts::alloc_open_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_Configm_GetLogFile]);
    refalrts::copy_evar(vm, context[16], context[17], context[10], context[11]);
    refalrts::alloc_close_call(vm, context[18]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::copy_evar(vm, context[20], context[21], context[10], context[11]);
    refalrts::alloc_open_call(vm, context[22]);
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::alloc_open_call(vm, context[24]);
    refalrts::alloc_name(vm, context[25], functions[efunc_Logm_Final]);
    refalrts::alloc_close_call(vm, context[26]);
    refalrts::update_name(context[4], functions[efunc_Mainm_SwFoundFiles]);
    refalrts::reinit_name(context[7], functions[efunc_LookupSourceFiles]);
    refalrts::push_stack( vm, context[26] );
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[22] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[18] );
    refalrts::push_stack( vm, context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[23], context[26] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    res = refalrts::splice_evar( res, context[20], context[22] );
    res = refalrts::splice_evar( res, context[0], context[6] );
    res = refalrts::splice_evar( res, context[12], context[19] );
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

static refalrts::NativeReference nat_ref_Mainm_SwValidCommandLine("Main-SwValidCommandLine", 52442882U, 1826840892U, func_Mainm_SwValidCommandLine);


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

static refalrts::NativeReference nat_ref_ReportErrors("ReportErrors", 52442882U, 1826840892U, func_ReportErrors);


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

static refalrts::NativeReference nat_ref_OnErrors("OnErrors", 52442882U, 1826840892U, func_OnErrors);


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

static refalrts::NativeReference nat_ref_ReportWarnings("ReportWarnings", 52442882U, 1826840892U, func_ReportWarnings);


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

static refalrts::NativeReference nat_ref_OnWarnings("OnWarnings", 52442882U, 1826840892U, func_OnWarnings);


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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Prout/4 } Tile{ AsIs: e.Prefix#2/5 } Tile{ HalfReuse: </7 } & Symb/18 Tile{ AsIs: s.Pos#3/17 } Tile{ HalfReuse: >/16 } Tile{ HalfReuse: ':'/8 HalfReuse: ' '/11 AsIs: e.Banner#1/9 HalfReuse: ':'/12 HalfReuse: ' '/15 } Tile{ AsIs: e.Message#3/13 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[18], functions[efunc_Symb]);
  refalrts::update_name(context[4], functions[efunc_Prout]);
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

static refalrts::NativeReference nat_ref_gen_ReportMessages_L1("ReportMessages\\1", 52442882U, 1826840892U, func_gen_ReportMessages_L1);


static refalrts::FnResult func_gen_ReportMessages_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
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
  //RESULT: Tile{ [[ AsIs: </0 } & Map/16 [*]/17 & ReportMessages\1/18 (/19 Tile{ AsIs: e.Prefix#2/2 } Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.Banner#1/5 AsIs: )/8 HalfReuse: {*}/11 AsIs: e.Messages#1/9 HalfReuse: >/12 } </20 Tile{ AsIs: s.FnAfterMessages#1/13 AsIs: t.Config#1/14 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[16], functions[efunc_Map]);
  refalrts::alloc_closure_head(vm, context[17]);
  refalrts::alloc_name(vm, context[18], functions[efunc_gen_ReportMessages_L1]);
  refalrts::alloc_open_bracket(vm, context[19]);
  refalrts::alloc_open_call(vm, context[20]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::reinit_unwrapped_closure(context[11], context[17]);
  refalrts::reinit_close_call(context[12]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[19], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[15] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[4], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[16], context[19] );
  refalrts::use( res );
  refalrts::wrap_closure( context[11] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ReportMessages_A1("ReportMessages=1", 52442882U, 1826840892U, func_gen_ReportMessages_A1);


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

static refalrts::NativeReference nat_ref_gen_ReportMessages_A1B1("ReportMessages=1:1", 52442882U, 1826840892U, func_gen_ReportMessages_A1B1);


static refalrts::FnResult func_ReportMessages(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & ReportMessages/4 (/7 s.FnAfterMessages#1/9 e.Banner#1/5 )/8 t.CommandLineSource#1/10 t.Config#1/12 e.Messages#1/2 >/1
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
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Banner#1 as range 5
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  context[13] = refalrts::tvar_left( context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  // closed e.Messages#1 as range 2
  //DEBUG: s.FnAfterMessages#1: 9
  //DEBUG: e.Banner#1: 5
  //DEBUG: t.CommandLineSource#1: 10
  //DEBUG: t.Config#1: 12
  //DEBUG: e.Messages#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 HalfReuse: & ReportMessages=1/7 } (/14 Tile{ AsIs: e.Banner#1/5 } )/15 (/16 Tile{ AsIs: e.Messages#1/2 } )/17 Tile{ AsIs: s.FnAfterMessages#1/9 } Tile{ AsIs: t.Config#1/12 } {*}/18 </19 Tile{ HalfReuse: & ReportMessages=1:1/8 AsIs: t.CommandLineSource#1/10 } >/20 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[14]);
  refalrts::alloc_close_bracket(vm, context[15]);
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::alloc_close_bracket(vm, context[17]);
  refalrts::alloc_unwrapped_closure(vm, context[18], context[4]);
  refalrts::alloc_open_call(vm, context[19]);
  refalrts::alloc_close_call(vm, context[20]);
  refalrts::reinit_closure_head(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_gen_ReportMessages_A1]);
  refalrts::reinit_name(context[8], functions[efunc_gen_ReportMessages_A1B1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[19] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  refalrts::use( res );
  refalrts::wrap_closure( context[18] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ReportMessages("ReportMessages", 52442882U, 1826840892U, func_ReportMessages);


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

static refalrts::NativeReference nat_ref_CreateErrorFileMark("CreateErrorFileMark", 52442882U, 1826840892U, func_CreateErrorFileMark);


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

static refalrts::NativeReference nat_ref_CreateErrorFileMarkm_SwFile("CreateErrorFileMark-SwFile", 52442882U, 1826840892U, func_CreateErrorFileMarkm_SwFile);


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
    // </0 & Main-SwFoundFiles$1\1/4 (/7 s.Pos#2/9 # NotFound/10 e.FileName#2/5 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_NotFound], context[10] ) )
      continue;
    // closed e.FileName#2 as range 5
    //DEBUG: s.Pos#2: 9
    //DEBUG: e.FileName#2: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#2/9 HalfReuse: 'f'/10 } 'i'/11 Tile{ HalfReuse: 'l'/0 HalfReuse: 'e'/4 } ' '/12 Tile{ AsIs: e.FileName#2/5 }" is not foun"/13 Tile{ HalfReuse: 'd'/8 HalfReuse: )/1 ]] }
    refalrts::alloc_char(vm, context[11], 'i');
    refalrts::alloc_char(vm, context[12], ' ');
    refalrts::alloc_chars(vm, context[13], context[14], " is not foun", 12);
    refalrts::reinit_char(context[10], 'f');
    refalrts::reinit_char(context[0], 'l');
    refalrts::reinit_char(context[4], 'e');
    refalrts::reinit_char(context[8], 'd');
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[11], context[11] );
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
    // </0 & Main-SwFoundFiles$1\1/4 (/7 s.Pos#2/9 # Output/10 e.Output#2/5 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_Output], context[10] ) )
      continue;
    // closed e.Output#2 as range 5
    //DEBUG: s.Pos#2: 9
    //DEBUG: e.Output#2: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Main-SwFoundFiles$1\1/4 (/7 s.Pos#2/9 # Output/10 e.Output#2/5 )/8 >/1 {REMOVED TILE}
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

static refalrts::NativeReference nat_ref_gen_Mainm_SwFoundFiles_S1L1("Main-SwFoundFiles$1\\1", 52442882U, 1826840892U, func_gen_Mainm_SwFoundFiles_S1L1);


static refalrts::FnResult func_Mainm_SwFoundFiles(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
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
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReportErrors/4 AsIs: t.CommandLineSource#1/5 AsIs: t.Config#1/7 } </21 & Map/22 & Main-SwFoundFiles$1\1/23 Tile{ AsIs: (/17 AsIs: s.Pos#1/19 AsIs: # NotFound/20 AsIs: e.FileName#1/15 AsIs: )/18 AsIs: e.Files-E#1/13 AsIs: >/1 } >/24 Tile{ ]] }
      refalrts::alloc_open_call(vm, context[21]);
      refalrts::alloc_name(vm, context[22], functions[efunc_Map]);
      refalrts::alloc_name(vm, context[23], functions[efunc_gen_Mainm_SwFoundFiles_S1L1]);
      refalrts::alloc_close_call(vm, context[24]);
      refalrts::update_name(context[4], functions[efunc_ReportErrors]);
      refalrts::push_stack( vm, context[24] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[21] );
      refalrts::link_brackets( context[17], context[18] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[24], context[24] );
      res = refalrts::splice_evar( res, context[17], context[1] );
      res = refalrts::splice_evar( res, context[21], context[23] );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Main-SwRenamedTargets/4 AsIs: t.CommandLineSource#1/5 AsIs: t.Config#1/7 } </9 & RenameTargets/10 </11 & Config-GetTargetMode/12 t.Config#1/7/13 >/15 Tile{ AsIs: e.Files#1/2 } >/16 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_RenameTargets]);
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_Configm_GetTargetMode]);
  refalrts::copy_evar(vm, context[13], context[14], context[7], context[8]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::update_name(context[4], functions[efunc_Mainm_SwRenamedTargets]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[15] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Mainm_SwFoundFiles("Main-SwFoundFiles", 52442882U, 1826840892U, func_Mainm_SwFoundFiles);


static refalrts::FnResult func_gen_Mainm_SwRenamedTargets_S1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
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
      // </0 & Main-SwRenamedTargets$1\1/4 (/7 s.Pos#2/9 # Collision/10 (/15 e.FirstTarget#2/13 )/16 e.SecondTarget#2/11 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_Collision], context[10] ) )
        continue;
      // closed e.FirstTarget#2 as range 13
      // closed e.SecondTarget#2 as range 11
      //DEBUG: s.Pos#2: 9
      //DEBUG: e.FirstTarget#2: 13
      //DEBUG: e.SecondTarget#2: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#2/9 HalfReuse: 'f'/10 HalfReuse: 'i'/15 }"le"/17 Tile{ HalfReuse: 's'/0 HalfReuse: ' '/4 } Tile{ AsIs: e.FirstTarget#2/13 }" and"/19 Tile{ HalfReuse: ' '/16 AsIs: e.SecondTarget#2/11 HalfReuse: ' '/8 HalfReuse: 'h'/1 }"ave same name"/21 )/23 Tile{ ]] }
      refalrts::alloc_chars(vm, context[17], context[18], "le", 2);
      refalrts::alloc_chars(vm, context[19], context[20], " and", 4);
      refalrts::alloc_chars(vm, context[21], context[22], "ave same name", 13);
      refalrts::alloc_close_bracket(vm, context[23]);
      refalrts::reinit_char(context[10], 'f');
      refalrts::reinit_char(context[15], 'i');
      refalrts::reinit_char(context[0], 's');
      refalrts::reinit_char(context[4], ' ');
      refalrts::reinit_char(context[16], ' ');
      refalrts::reinit_char(context[8], ' ');
      refalrts::reinit_char(context[1], 'h');
      refalrts::link_brackets( context[7], context[23] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[21], context[23] );
      res = refalrts::splice_evar( res, context[16], context[1] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[7], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Main-SwRenamedTargets$1\1/4 (/7 s.Pos#2/9 # Source/10 (/15 s.Dialect#2/19 e.Source#2/17 )/16 e.Output#2/11 )/8 >/1
    context[17] = context[13];
    context[18] = context[14];
    if( ! refalrts::ident_term( identifiers[ident_Source], context[10] ) )
      continue;
    // closed e.Output#2 as range 11
    if( ! refalrts::svar_left( context[19], context[17], context[18] ) )
      continue;
    // closed e.Source#2 as range 17
    //DEBUG: s.Pos#2: 9
    //DEBUG: e.Output#2: 11
    //DEBUG: s.Dialect#2: 19
    //DEBUG: e.Source#2: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Main-SwRenamedTargets$1\1/4 (/7 s.Pos#2/9 # Source/10 (/15 s.Dialect#2/19 e.Source#2/17 )/16 e.Output#2/11 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Main-SwRenamedTargets$1\1/4 (/7 s.Pos#2/9 # Output/10 e.Output#2/5 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_Output], context[10] ) )
      continue;
    // closed e.Output#2 as range 5
    //DEBUG: s.Pos#2: 9
    //DEBUG: e.Output#2: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Main-SwRenamedTargets$1\1/4 (/7 s.Pos#2/9 # Output/10 e.Output#2/5 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Main-SwRenamedTargets$1\1/4 (/7 s.Pos#2/9 # OutputWithNative/10 (/13 e.Output#2/11 )/14 e.NativeOutput#2/5 )/8 >/1
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
  //TRASH: {REMOVED TILE} </0 & Main-SwRenamedTargets$1\1/4 (/7 s.Pos#2/9 # OutputWithNative/10 (/13 e.Output#2/11 )/14 e.NativeOutput#2/5 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Mainm_SwRenamedTargets_S1L1("Main-SwRenamedTargets$1\\1", 52442882U, 1826840892U, func_gen_Mainm_SwRenamedTargets_S1L1);


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
    // </0 & Main-SwRenamedTargets$2:1/4 t.Config#1/5 t.CommandLineSource#1/7 # NormalRun/9 e.Outputs#3/2 >/1
    if( ! refalrts::ident_term( identifiers[ident_NormalRun], context[9] ) )
      continue;
    // closed e.Outputs#3 as range 2
    //DEBUG: t.Config#1: 5
    //DEBUG: t.CommandLineSource#1: 7
    //DEBUG: e.Outputs#3: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # NormalRun/9 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Link/4 } Tile{ AsIs: t.CommandLineSource#1/7 } Tile{ AsIs: t.Config#1/5 } Tile{ AsIs: e.Outputs#3/2 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_Link]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
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

static refalrts::NativeReference nat_ref_gen_Mainm_SwRenamedTargets_S2B1("Main-SwRenamedTargets$2:1", 52442882U, 1826840892U, func_gen_Mainm_SwRenamedTargets_S2B1);


static refalrts::FnResult func_gen_Mainm_SwRenamedTargets_S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </14 Tile{ HalfReuse: [*]/0 Reuse: & Main-SwRenamedTargets$2:1/4 AsIs: t.Config#1/5 AsIs: t.CommandLineSource#1/7 HalfReuse: {*}/11 } s.GrammarCheck#2/13/15 Tile{ HalfReuse: </12 } & CompileFiles/16 t.Config#1/5/17 Tile{ AsIs: s.GrammarCheck#2/13 } Tile{ AsIs: e.Files#1/9 } >/19 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::copy_stvar(vm, context[15], context[13]);
  refalrts::alloc_name(vm, context[16], functions[efunc_CompileFiles]);
  refalrts::copy_evar(vm, context[17], context[18], context[5], context[6]);
  refalrts::alloc_close_call(vm, context[19]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_Mainm_SwRenamedTargets_S2B1]);
  refalrts::reinit_unwrapped_closure(context[11], context[0]);
  refalrts::reinit_open_call(context[12]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[16], context[18] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  refalrts::use( res );
  refalrts::wrap_closure( context[11] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Mainm_SwRenamedTargets_S2A1("Main-SwRenamedTargets$2=1", 52442882U, 1826840892U, func_gen_Mainm_SwRenamedTargets_S2A1);


static refalrts::FnResult func_Mainm_SwRenamedTargets(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
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
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReportErrors/4 AsIs: t.CommandLineSource#1/5 AsIs: t.Config#1/7 } </21 & Map/22 & Main-SwRenamedTargets$1\1/23 Tile{ AsIs: (/17 AsIs: s.Pos#1/19 AsIs: # Collision/20 AsIs: e.Collision#1/15 AsIs: )/18 AsIs: e.Files-E#1/13 AsIs: >/1 } >/24 Tile{ ]] }
      refalrts::alloc_open_call(vm, context[21]);
      refalrts::alloc_name(vm, context[22], functions[efunc_Map]);
      refalrts::alloc_name(vm, context[23], functions[efunc_gen_Mainm_SwRenamedTargets_S1L1]);
      refalrts::alloc_close_call(vm, context[24]);
      refalrts::update_name(context[4], functions[efunc_ReportErrors]);
      refalrts::push_stack( vm, context[24] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[21] );
      refalrts::link_brackets( context[17], context[18] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[24], context[24] );
      res = refalrts::splice_evar( res, context[17], context[1] );
      res = refalrts::splice_evar( res, context[21], context[23] );
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
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & Main-SwRenamedTargets$2=1/9 t.Config#1/7/10 Tile{ AsIs: t.CommandLineSource#1/5 } (/12 Tile{ AsIs: e.Files#1/2 } )/13 {*}/14 </15 & Config-GetGrammarCheck/16 Tile{ AsIs: t.Config#1/7 } >/17 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[9], functions[efunc_gen_Mainm_SwRenamedTargets_S2A1]);
  refalrts::copy_evar(vm, context[10], context[11], context[7], context[8]);
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::alloc_unwrapped_closure(vm, context[14], context[4]);
  refalrts::alloc_open_call(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_Configm_GetGrammarCheck]);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::reinit_closure_head(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[15] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[13], context[16] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[11] );
  refalrts::use( res );
  refalrts::wrap_closure( context[14] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Mainm_SwRenamedTargets("Main-SwRenamedTargets", 52442882U, 1826840892U, func_Mainm_SwRenamedTargets);


static refalrts::FnResult func_gen_CalcTargetFileName_B1S1A4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & CalcTargetFileName:1$1=4/4 t.Config#1/5 s.TargetMode#1/7 e.BaseName#6/2 '.'/12 s.R#6/11 s.A#6/10 s.S#6/9 s.L#6/8 >/1
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
  if( ! refalrts::svar_right( context[8], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[12] = refalrts::char_right( '.', context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  // closed e.BaseName#6 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: s.TargetMode#1: 7
  //DEBUG: s.L#6: 8
  //DEBUG: s.S#6: 9
  //DEBUG: s.A#6: 10
  //DEBUG: s.R#6: 11
  //DEBUG: e.BaseName#6: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} '.'/12 s.R#6/11 s.A#6/10 s.S#6/9 s.L#6/8 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.BaseName#6/2 } Tile{ AsIs: </0 Reuse: & Config-GetTargetSuffix/4 AsIs: t.Config#1/5 AsIs: s.TargetMode#1/7 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_Configm_GetTargetSuffix]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CalcTargetFileName_B1S1A4("CalcTargetFileName:1$1=4", 52442882U, 1826840892U, func_gen_CalcTargetFileName_B1S1A4);


static refalrts::FnResult func_gen_CalcTargetFileName_B1S1A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & CalcTargetFileName:1$1=3/4 t.Config#1/10 s.TargetMode#1/12 (/15 e.LastPartName#4/13 )/16 e.LowerBaseName#5/2 '.'/9 'r'/8 'a'/7 's'/6 'l'/5 >/1
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
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.LastPartName#4 as range 13
  // closed e.LowerBaseName#5 as range 2
  //DEBUG: t.Config#1: 10
  //DEBUG: s.TargetMode#1: 12
  //DEBUG: e.LastPartName#4: 13
  //DEBUG: e.LowerBaseName#5: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.LowerBaseName#5/2 '.'/9 'r'/8 {REMOVED TILE} 's'/6 'l'/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 } Tile{ HalfReuse: [*]/0 Reuse: & CalcTargetFileName:1$1=4/4 AsIs: t.Config#1/10 AsIs: s.TargetMode#1/12 HalfReuse: {*}/15 AsIs: e.LastPartName#4/13 HalfReuse: >/16 } Tile{ ]] }
  refalrts::reinit_open_call(context[7]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_CalcTargetFileName_B1S1A4]);
  refalrts::reinit_unwrapped_closure(context[15], context[0]);
  refalrts::reinit_close_call(context[16]);
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[0], context[16] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  refalrts::wrap_closure( context[15] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CalcTargetFileName_B1S1A3("CalcTargetFileName:1$1=3", 52442882U, 1826840892U, func_gen_CalcTargetFileName_B1S1A3);


static refalrts::FnResult func_gen_CalcTargetFileName_B1S1A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & CalcTargetFileName:1$1=2/4 t.Config#1/5 s.TargetMode#1/7 e.LastPartName#4/2 >/1
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
  // closed e.LastPartName#4 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: s.TargetMode#1: 7
  //DEBUG: e.LastPartName#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </8 Tile{ HalfReuse: [*]/0 Reuse: & CalcTargetFileName:1$1=3/4 AsIs: t.Config#1/5 AsIs: s.TargetMode#1/7 } (/9 Tile{ AsIs: e.LastPartName#4/2 } )/10 {*}/11 </12 & Lower/13 e.LastPartName#4/2/14 >/16 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_close_bracket(vm, context[10]);
  refalrts::alloc_unwrapped_closure(vm, context[11], context[0]);
  refalrts::alloc_open_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_Lower]);
  refalrts::copy_evar(vm, context[14], context[15], context[2], context[3]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_CalcTargetFileName_B1S1A3]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[12] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[10], context[16] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  refalrts::use( res );
  refalrts::wrap_closure( context[11] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CalcTargetFileName_B1S1A2("CalcTargetFileName:1$1=2", 52442882U, 1826840892U, func_gen_CalcTargetFileName_B1S1A2);


static refalrts::FnResult func_gen_CalcTargetFileName_B1S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & CalcTargetFileName:1$1=1/4 t.Config#1/5 s.TargetMode#1/7 (/10 # RASL/12 e.FirstFile#3/8 )/11 e.OtherFiles#3/2 >/1
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
  context[12] = refalrts::ident_left( identifiers[ident_RASL], context[8], context[9] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  // closed e.FirstFile#3 as range 8
  // closed e.OtherFiles#3 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: s.TargetMode#1: 7
  //DEBUG: e.FirstFile#3: 8
  //DEBUG: e.OtherFiles#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.OtherFiles#3/2 {REMOVED TILE}
  //RESULT: Tile{ [[ } </13 Tile{ HalfReuse: [*]/0 Reuse: & CalcTargetFileName:1$1=2/4 AsIs: t.Config#1/5 AsIs: s.TargetMode#1/7 HalfReuse: {*}/10 HalfReuse: </12 } Tile{ HalfReuse: & GetLastPartName/11 } Tile{ AsIs: e.FirstFile#3/8 } >/14 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_CalcTargetFileName_B1S1A2]);
  refalrts::reinit_unwrapped_closure(context[10], context[0]);
  refalrts::reinit_open_call(context[12]);
  refalrts::reinit_name(context[11], functions[efunc_GetLastPartName]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[0], context[12] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  refalrts::wrap_closure( context[10] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CalcTargetFileName_B1S1A1("CalcTargetFileName:1$1=1", 52442882U, 1826840892U, func_gen_CalcTargetFileName_B1S1A1);


static refalrts::FnResult func_gen_CalcTargetFileName_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & CalcTargetFileName:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CalcTargetFileName:1/4 t.new#1/5 s.new#2/7 (/10 e.new#3/8 )/11 e.new#4/2 >/1
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
  // closed e.new#3 as range 8
  // closed e.new#4 as range 2
  do {
    // </0 & CalcTargetFileName:1/4 t.Config#1/5 s.TargetMode#1/7 (/10 e.OutputFiles#1/8 )/11 # DefaultTargetFileName/14 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[14] = refalrts::ident_left( identifiers[ident_DefaultTargetFileName], context[12], context[13] );
    if( ! context[14] )
      continue;
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;
    // closed e.OutputFiles#1 as range 8
    //DEBUG: t.Config#1: 5
    //DEBUG: s.TargetMode#1: 7
    //DEBUG: e.OutputFiles#1: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} # DefaultTargetFileName/14 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </1 } Tile{ HalfReuse: [*]/0 Reuse: & CalcTargetFileName:1$1=1/4 AsIs: t.Config#1/5 AsIs: s.TargetMode#1/7 HalfReuse: {*}/10 AsIs: e.OutputFiles#1/8 HalfReuse: >/11 } Tile{ ]] }
    refalrts::reinit_open_call(context[1]);
    refalrts::reinit_closure_head(context[0]);
    refalrts::update_name(context[4], functions[efunc_gen_CalcTargetFileName_B1S1A1]);
    refalrts::reinit_unwrapped_closure(context[10], context[0]);
    refalrts::reinit_close_call(context[11]);
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[0], context[11] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    refalrts::wrap_closure( context[10] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CalcTargetFileName:1/4 t.Config#1/5 s.TargetMode#1/7 (/10 e.OutputFiles#1/8 )/11 e.TargetFileName#2/2 >/1
  // closed e.OutputFiles#1 as range 8
  // closed e.TargetFileName#2 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: s.TargetMode#1: 7
  //DEBUG: e.OutputFiles#1: 8
  //DEBUG: e.TargetFileName#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CalcTargetFileName:1/4 t.Config#1/5 s.TargetMode#1/7 (/10 e.OutputFiles#1/8 )/11 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.TargetFileName#2/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CalcTargetFileName_B1("CalcTargetFileName:1", 52442882U, 1826840892U, func_gen_CalcTargetFileName_B1);


static refalrts::FnResult func_CalcTargetFileName(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & CalcTargetFileName:1/8 t.Config#1/6/9 Tile{ AsIs: s.TargetMode#1/5 } (/11 Tile{ AsIs: e.OutputFiles#1/2 } )/12 {*}/13 </14 & Config-GetTargetFileName/15 Tile{ AsIs: t.Config#1/6 } >/16 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_CalcTargetFileName_B1]);
  refalrts::copy_evar(vm, context[9], context[10], context[6], context[7]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_close_bracket(vm, context[12]);
  refalrts::alloc_unwrapped_closure(vm, context[13], context[4]);
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_Configm_GetTargetFileName]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::reinit_closure_head(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[14] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[8], context[10] );
  refalrts::use( res );
  refalrts::wrap_closure( context[13] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CalcTargetFileName("CalcTargetFileName", 52442882U, 1826840892U, func_CalcTargetFileName);


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

static refalrts::NativeReference nat_ref_gen_LookupSourceFiles_L1B1("LookupSourceFiles\\1:1", 52442882U, 1826840892U, func_gen_LookupSourceFiles_L1B1);


static refalrts::FnResult func_gen_LookupSourceFiles_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
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
  //RESULT: Tile{ [[ } </15 [*]/16 & LookupSourceFiles\1:1/17 Tile{ AsIs: s.Pos#4/14 } {*}/18 Tile{ AsIs: </0 Reuse: & FindFiles/4 AsIs: s.TargetMode#2/13 AsIs: (/11 AsIs: e.SearchFolders#3/9 AsIs: )/12 AsIs: (/7 } Tile{ AsIs: e.FileName#4/5 } )/19 Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[15]);
  refalrts::alloc_closure_head(vm, context[16]);
  refalrts::alloc_name(vm, context[17], functions[efunc_gen_LookupSourceFiles_L1B1]);
  refalrts::alloc_unwrapped_closure(vm, context[18], context[16]);
  refalrts::alloc_close_bracket(vm, context[19]);
  refalrts::update_name(context[4], functions[efunc_FindFiles]);
  refalrts::reinit_close_call(context[8]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[19] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[15], context[17] );
  refalrts::use( res );
  refalrts::wrap_closure( context[18] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LookupSourceFiles_L1("LookupSourceFiles\\1", 52442882U, 1826840892U, func_gen_LookupSourceFiles_L1);


static refalrts::FnResult func_gen_LookupSourceFiles_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </10 & Map/11 Tile{ HalfReuse: [*]/0 Reuse: & LookupSourceFiles\1/4 AsIs: s.TargetMode#2/5 AsIs: (/8 } Tile{ AsIs: e.SearchFolders#3/2 } Tile{ AsIs: )/9 } {*}/12 Tile{ AsIs: e.Files#1/6 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_Map]);
  refalrts::alloc_unwrapped_closure(vm, context[12], context[0]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_LookupSourceFiles_L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[10] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  refalrts::wrap_closure( context[12] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LookupSourceFiles_A2("LookupSourceFiles=2", 52442882U, 1826840892U, func_gen_LookupSourceFiles_A2);


static refalrts::FnResult func_gen_LookupSourceFiles_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
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
  //RESULT: Tile{ [[ } </12 [*]/13 Tile{ HalfReuse: & LookupSourceFiles=2/0 HalfReuse: s.TargetMode2 #11/4 AsIs: (/7 AsIs: e.Files#1/5 AsIs: )/8 } {*}/14 </15 & Config-GetSearchFolders/16 Tile{ AsIs: t.Config#1/9 } >/17 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[12]);
  refalrts::alloc_closure_head(vm, context[13]);
  refalrts::alloc_unwrapped_closure(vm, context[14], context[13]);
  refalrts::alloc_open_call(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_Configm_GetSearchFolders]);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::reinit_name(context[0], functions[efunc_gen_LookupSourceFiles_A2]);
  refalrts::reinit_svar( context[4], context[11] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[15] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[14], context[16] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  refalrts::wrap_closure( context[14] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LookupSourceFiles_A1("LookupSourceFiles=1", 52442882U, 1826840892U, func_gen_LookupSourceFiles_A1);


static refalrts::FnResult func_LookupSourceFiles(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
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
  //RESULT: Tile{ [[ } </7 [*]/8 & LookupSourceFiles=1/9 (/10 Tile{ AsIs: e.Files#1/2 } )/11 t.Config#1/5/12 {*}/14 Tile{ AsIs: </0 Reuse: & Config-GetTargetMode/4 AsIs: t.Config#1/5 } >/15 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_closure_head(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_gen_LookupSourceFiles_A1]);
  refalrts::alloc_open_bracket(vm, context[10]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::copy_evar(vm, context[12], context[13], context[5], context[6]);
  refalrts::alloc_unwrapped_closure(vm, context[14], context[8]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::update_name(context[4], functions[efunc_Configm_GetTargetMode]);
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

static refalrts::NativeReference nat_ref_LookupSourceFiles("LookupSourceFiles", 52442882U, 1826840892U, func_LookupSourceFiles);


static refalrts::FnResult func_RenameTargets(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & RenameTargets/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & RenameTargets/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & RenameTargets/4 # EXE/5 e.Files#1/2 >/1
    if( ! refalrts::ident_term( identifiers[ident_EXE], context[5] ) )
      continue;
    // closed e.Files#1 as range 2
    //DEBUG: e.Files#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & RenameTargets-WithCpp/5 AsIs: e.Files#1/2 AsIs: >/1 ]] }
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_RenameTargetsm_WithCpp]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & RenameTargets/4 # LIB/5 e.Files#1/2 >/1
    if( ! refalrts::ident_term( identifiers[ident_LIB], context[5] ) )
      continue;
    // closed e.Files#1 as range 2
    //DEBUG: e.Files#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & RenameTargets-WithCpp/5 AsIs: e.Files#1/2 AsIs: >/1 ]] }
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_RenameTargetsm_WithCpp]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & RenameTargets/4 # R/5 e.Files#1/2 >/1
    if( ! refalrts::ident_term( identifiers[ident_R], context[5] ) )
      continue;
    // closed e.Files#1 as range 2
    //DEBUG: e.Files#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & RenameTargets-Stub/5 AsIs: e.Files#1/2 AsIs: >/1 ]] }
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_RenameTargetsm_Stub]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & RenameTargets/4 # CompileOnly/5 e.Files#1/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_CompileOnly], context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Files#1 as range 2
  //DEBUG: e.Files#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & RenameTargets-Stub/5 AsIs: e.Files#1/2 AsIs: >/1 ]] }
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[5], functions[efunc_RenameTargetsm_Stub]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[4];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_RenameTargets("RenameTargets", 52442882U, 1826840892U, func_RenameTargets);


static refalrts::FnResult func_gen_RenameTargetsm_Stub_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & RenameTargets-Stub\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & RenameTargets-Stub\1/4 (/7 s.new#1/9 s.new#2/10 e.new#3/5 )/8 >/1
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
    // </0 & RenameTargets-Stub\1/4 (/7 s.Pos#2/9 # Output/10 e.FileName#2/5 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_Output], context[10] ) )
      continue;
    // closed e.FileName#2 as range 5
    //DEBUG: s.Pos#2: 9
    //DEBUG: e.FileName#2: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & RenameTargets-Stub\1/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#2/9 AsIs: # Output/10 AsIs: e.FileName#2/5 HalfReuse: # NoNative/8 HalfReuse: )/1 ]] }
    refalrts::reinit_ident(context[8], identifiers[ident_NoNative]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & RenameTargets-Stub\1/4 (/7 s.new#4/9 s.new#5/10 (/13 e.new#6/11 )/14 e.new#7/5 )/8 >/1
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[5], context[6] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.new#6 as range 11
  // closed e.new#7 as range 5
  do {
    // </0 & RenameTargets-Stub\1/4 (/7 s.Pos#2/9 # OutputWithNative/10 (/13 e.FileName#2/11 )/14 e.NativeFileName#2/5 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_OutputWithNative], context[10] ) )
      continue;
    // closed e.FileName#2 as range 11
    // closed e.NativeFileName#2 as range 5
    //DEBUG: s.Pos#2: 9
    //DEBUG: e.FileName#2: 11
    //DEBUG: e.NativeFileName#2: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} & RenameTargets-Stub\1/4 (/7 s.Pos#2/9 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ HalfReuse: s.Pos2 #9/10 HalfReuse: # Output/13 AsIs: e.FileName#2/11 HalfReuse: (/14 AsIs: e.NativeFileName#2/5 AsIs: )/8 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_svar( context[10], context[9] );
    refalrts::reinit_ident(context[13], identifiers[ident_Output]);
    refalrts::reinit_open_bracket(context[14]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[0], context[1] );
    refalrts::link_brackets( context[14], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    refalrts::splice_to_freelist_open( vm, context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & RenameTargets-Stub\1/4 (/7 s.Pos#2/9 # Source/10 (/13 s.Dialect#2/15 e.Source#2/11 )/14 e.Output#2/5 )/8 >/1
  if( ! refalrts::ident_term( identifiers[ident_Source], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Output#2 as range 5
  if( ! refalrts::svar_left( context[15], context[11], context[12] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Source#2 as range 11
  //DEBUG: s.Pos#2: 9
  //DEBUG: e.Output#2: 5
  //DEBUG: s.Dialect#2: 15
  //DEBUG: e.Source#2: 11

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & RenameTargets-Stub\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Pos#2/9 AsIs: # Source/10 AsIs: (/13 AsIs: s.Dialect#2/15 AsIs: e.Source#2/11 AsIs: )/14 AsIs: e.Output#2/5 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RenameTargetsm_Stub_L1("RenameTargets-Stub\\1", 52442882U, 1826840892U, func_gen_RenameTargetsm_Stub_L1);


static refalrts::FnResult func_RenameTargetsm_Stub(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & RenameTargets-Stub/4 e.Files#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Files#1 as range 2
  //DEBUG: e.Files#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & RenameTargets-Stub\1/4 AsIs: e.Files#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_Map]);
  refalrts::update_name(context[4], functions[efunc_gen_RenameTargetsm_Stub_L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_RenameTargetsm_Stub("RenameTargets-Stub", 52442882U, 1826840892U, func_RenameTargetsm_Stub);


static refalrts::FnResult func_RenameTargetsm_WithCpp(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & RenameTargets-WithCpp/4 e.Files#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Files#1 as range 2
  //DEBUG: e.Files#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & ScanCollisions/6 </7 Tile{ HalfReuse: & Map/0 Reuse: & GetFileName/4 AsIs: e.Files#1/2 AsIs: >/1 } >/8 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_ScanCollisions]);
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::reinit_name(context[0], functions[efunc_Map]);
  refalrts::update_name(context[4], functions[efunc_GetFileName]);
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_RenameTargetsm_WithCpp("RenameTargets-WithCpp", 52442882U, 1826840892U, func_RenameTargetsm_WithCpp);


static refalrts::FnResult func_GetFileName(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & GetFileName/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & GetFileName/4 (/7 s.new#1/9 s.new#2/10 e.new#3/5 )/8 >/1
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
    // </0 & GetFileName/4 (/7 s.Pos#1/9 # Output/10 e.FileName#1/5 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_Output], context[10] ) )
      continue;
    // closed e.FileName#1 as range 5
    //DEBUG: s.Pos#1: 9
    //DEBUG: e.FileName#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/11 (/12 </13 & GetBaseNameLowerCase/14 e.FileName#1/5/15 Tile{ HalfReuse: >/0 HalfReuse: )/4 AsIs: (/7 AsIs: s.Pos#1/9 AsIs: # Output/10 AsIs: e.FileName#1/5 HalfReuse: # NoNative/8 HalfReuse: )/1 } )/17 Tile{ ]] }
    refalrts::alloc_open_bracket(vm, context[11]);
    refalrts::alloc_open_bracket(vm, context[12]);
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_GetBaseNameLowerCase]);
    refalrts::copy_evar(vm, context[15], context[16], context[5], context[6]);
    refalrts::alloc_close_bracket(vm, context[17]);
    refalrts::reinit_close_call(context[0]);
    refalrts::reinit_close_bracket(context[4]);
    refalrts::reinit_ident(context[8], identifiers[ident_NoNative]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[11], context[17] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::link_brackets( context[12], context[4] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[11], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GetFileName/4 (/7 s.new#4/9 s.new#5/10 (/13 e.new#6/11 )/14 e.new#7/5 )/8 >/1
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[5], context[6] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.new#6 as range 11
  // closed e.new#7 as range 5
  do {
    // </0 & GetFileName/4 (/7 s.Pos#1/9 # OutputWithNative/10 (/13 e.FileName#1/11 )/14 e.NativeFileName#1/5 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_OutputWithNative], context[10] ) )
      continue;
    // closed e.FileName#1 as range 11
    // closed e.NativeFileName#1 as range 5
    //DEBUG: s.Pos#1: 9
    //DEBUG: e.FileName#1: 11
    //DEBUG: e.NativeFileName#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Pos#1/9 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 HalfReuse: </7 } & GetBaseNameLowerCase/15 e.FileName#1/11/16 >/18 )/19 (/20 Tile{ HalfReuse: s.Pos1 #9/10 HalfReuse: # Output/13 AsIs: e.FileName#1/11 HalfReuse: (/14 AsIs: e.NativeFileName#1/5 AsIs: )/8 HalfReuse: )/1 } )/21 Tile{ ]] }
    refalrts::alloc_name(vm, context[15], functions[efunc_GetBaseNameLowerCase]);
    refalrts::copy_evar(vm, context[16], context[17], context[11], context[12]);
    refalrts::alloc_close_call(vm, context[18]);
    refalrts::alloc_close_bracket(vm, context[19]);
    refalrts::alloc_open_bracket(vm, context[20]);
    refalrts::alloc_close_bracket(vm, context[21]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_open_bracket(context[4]);
    refalrts::reinit_open_call(context[7]);
    refalrts::reinit_svar( context[10], context[9] );
    refalrts::reinit_ident(context[13], identifiers[ident_Output]);
    refalrts::reinit_open_bracket(context[14]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[0], context[21] );
    refalrts::link_brackets( context[20], context[1] );
    refalrts::link_brackets( context[14], context[8] );
    refalrts::link_brackets( context[4], context[19] );
    refalrts::push_stack( vm, context[18] );
    refalrts::push_stack( vm, context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[21], context[21] );
    res = refalrts::splice_evar( res, context[10], context[1] );
    res = refalrts::splice_evar( res, context[15], context[20] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GetFileName/4 (/7 s.Pos#1/9 # Source/10 (/13 s.Dialect#1/15 e.Source#1/11 )/14 e.Output#1/5 )/8 >/1
  if( ! refalrts::ident_term( identifiers[ident_Source], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Output#1 as range 5
  if( ! refalrts::svar_left( context[15], context[11], context[12] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Source#1 as range 11
  //DEBUG: s.Pos#1: 9
  //DEBUG: e.Output#1: 5
  //DEBUG: s.Dialect#1: 15
  //DEBUG: e.Source#1: 11

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/16 (/17 </18 & GetBaseNameLowerCase/19 e.Output#1/5/20 Tile{ HalfReuse: >/0 HalfReuse: )/4 AsIs: (/7 AsIs: s.Pos#1/9 AsIs: # Source/10 AsIs: (/13 AsIs: s.Dialect#1/15 AsIs: e.Source#1/11 AsIs: )/14 AsIs: e.Output#1/5 AsIs: )/8 HalfReuse: )/1 ]] }
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::alloc_open_call(vm, context[18]);
  refalrts::alloc_name(vm, context[19], functions[efunc_GetBaseNameLowerCase]);
  refalrts::copy_evar(vm, context[20], context[21], context[5], context[6]);
  refalrts::reinit_close_call(context[0]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[16], context[1] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[17], context[4] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[18] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[16], context[19] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GetFileName("GetFileName", 52442882U, 1826840892U, func_GetFileName);


static refalrts::FnResult func_ScanCollisions(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  // </0 & ScanCollisions/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & ScanCollisions/4 (/9 (/13 e.new#1/11 )/14 e.new#2/7 )/10 e.new#3/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[7], context[8] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    // closed e.new#1 as range 11
    // closed e.new#2 as range 7
    // closed e.new#3 as range 5
    do {
      // </0 & ScanCollisions/4 (/9 (/13 e.BaseName#1/11 )/14 e.Locations1#1/7 )/10 e.Files-B#1/17 (/23 (/27 e.BaseName#1/29 )/28 e.Locations2#1/21 )/24 e.Files-E#1/19 >/1
      context[15] = context[5];
      context[16] = context[6];
      // closed e.BaseName#1 as range 11
      // closed e.Locations1#1 as range 7
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
        context[25] = 0;
        context[26] = 0;
        context[27] = refalrts::brackets_left( context[25], context[26], context[21], context[22] );
        if( ! context[27] )
          continue;
        refalrts::bracket_pointers(context[27], context[28]);
        if( ! refalrts::repeated_evar_left( vm, context[29], context[30], context[11], context[12], context[25], context[26] ) )
          continue;
        if( ! refalrts::empty_seq( context[25], context[26] ) )
          continue;
        // closed e.Locations2#1 as range 21
        // closed e.Files-E#1 as range 19
        //DEBUG: e.BaseName#1: 11
        //DEBUG: e.Locations1#1: 7
        //DEBUG: e.Files-B#1: 17
        //DEBUG: e.Locations2#1: 21
        //DEBUG: e.Files-E#1: 19

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} & ScanCollisions/4 (/9 (/13 e.BaseName#1/11 )/14 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & ScanCollisions/10 AsIs: e.Files-B#1/17 AsIs: (/23 AsIs: (/27 AsIs: e.BaseName#1/29 AsIs: )/28 } Tile{ AsIs: e.Locations1#1/7 } Tile{ AsIs: e.Locations2#1/21 } Tile{ AsIs: )/24 AsIs: e.Files-E#1/19 AsIs: >/1 ]] }
        refalrts::reinit_name(context[10], functions[efunc_ScanCollisions]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[23], context[24] );
        refalrts::link_brackets( context[27], context[28] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[24];
        res = refalrts::splice_evar( res, context[21], context[22] );
        res = refalrts::splice_evar( res, context[7], context[8] );
        res = refalrts::splice_evar( res, context[10], context[28] );
        refalrts::splice_to_freelist_open( vm, context[0], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[17], context[18], context[15], context[16] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ScanCollisions/4 (/9 (/13 e.BaseName#1/11 )/14 e.Locations#1/7 )/10 e.Files#1/5 >/1
    // closed e.BaseName#1 as range 11
    // closed e.Locations#1 as range 7
    // closed e.Files#1 as range 5
    //DEBUG: e.BaseName#1: 11
    //DEBUG: e.Locations#1: 7
    //DEBUG: e.Files#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} e.BaseName#1/11 )/14 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & RenameLocations/4 } Tile{ AsIs: e.Locations#1/7 } Tile{ HalfReuse: >/9 HalfReuse: </13 } Tile{ HalfReuse: & ScanCollisions/10 AsIs: e.Files#1/5 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_RenameLocations]);
    refalrts::reinit_close_call(context[9]);
    refalrts::reinit_open_call(context[13]);
    refalrts::reinit_name(context[10], functions[efunc_ScanCollisions]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[9], context[13] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ScanCollisions/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ScanCollisions/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ScanCollisions("ScanCollisions", 52442882U, 1826840892U, func_ScanCollisions);


static refalrts::FnResult func_RenameLocations(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  // </0 & RenameLocations/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & RenameLocations/4 e.Locations-B#1/7 (/13 s.Pos1#1/15 # Output/16 e.FirstTarget#1/11 t.FirstNative#1/17 )/14 e.Locations-M#1/19 (/25 s.Pos2#1/27 # Output/28 e.SecondTarget#1/23 t.SecondNative#1/29 )/26 e.Locations-E#1/21 >/1
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
      if( ! refalrts::svar_left( context[15], context[11], context[12] ) )
        continue;
      context[16] = refalrts::ident_left( identifiers[ident_Output], context[11], context[12] );
      if( ! context[16] )
        continue;
      context[18] = refalrts::tvar_right( context[17], context[11], context[12] );
      if( ! context[18] )
        continue;
      // closed e.FirstTarget#1 as range 11
      context[19] = 0;
      context[20] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[21] = context[9];
        context[22] = context[10];
        context[23] = 0;
        context[24] = 0;
        context[25] = refalrts::brackets_left( context[23], context[24], context[21], context[22] );
        if( ! context[25] )
          continue;
        refalrts::bracket_pointers(context[25], context[26]);
        // closed e.Locations-E#1 as range 21
        if( ! refalrts::svar_left( context[27], context[23], context[24] ) )
          continue;
        context[28] = refalrts::ident_left( identifiers[ident_Output], context[23], context[24] );
        if( ! context[28] )
          continue;
        context[30] = refalrts::tvar_right( context[29], context[23], context[24] );
        if( ! context[30] )
          continue;
        // closed e.SecondTarget#1 as range 23
        //DEBUG: e.Locations-B#1: 7
        //DEBUG: s.Pos1#1: 15
        //DEBUG: t.FirstNative#1: 17
        //DEBUG: e.FirstTarget#1: 11
        //DEBUG: e.Locations-M#1: 19
        //DEBUG: e.Locations-E#1: 21
        //DEBUG: s.Pos2#1: 27
        //DEBUG: t.SecondNative#1: 29
        //DEBUG: e.SecondTarget#1: 23

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & RenameLocations/4 e.Locations-B#1/7 {REMOVED TILE} s.Pos1#1/15 # Output/16 {REMOVED TILE} t.FirstNative#1/17 )/14 e.Locations-M#1/19 {REMOVED TILE} {REMOVED TILE} t.SecondNative#1/29 {REMOVED TILE} e.Locations-E#1/21 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/25 AsIs: s.Pos2#1/27 Reuse: # Collision/28 } Tile{ AsIs: (/13 } Tile{ AsIs: e.FirstTarget#1/11 } Tile{ AsIs: )/26 } Tile{ AsIs: e.SecondTarget#1/23 } Tile{ HalfReuse: )/1 ]] }
        refalrts::update_ident(context[28], identifiers[ident_Collision]);
        refalrts::reinit_close_bracket(context[1]);
        refalrts::link_brackets( context[25], context[1] );
        refalrts::link_brackets( context[13], context[26] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[23], context[24] );
        res = refalrts::splice_evar( res, context[26], context[26] );
        res = refalrts::splice_evar( res, context[11], context[12] );
        res = refalrts::splice_evar( res, context[13], context[13] );
        res = refalrts::splice_evar( res, context[25], context[28] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[19], context[20], context[9], context[10] ) );
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & RenameLocations/4 e.Locations-B#1/7 (/13 s.Pos#1/15 # Output/16 e.Target#1/11 t.Native#1/17 )/14 e.Locations-E#1/9 >/1
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
      // closed e.Locations-E#1 as range 9
      if( ! refalrts::svar_left( context[15], context[11], context[12] ) )
        continue;
      context[16] = refalrts::ident_left( identifiers[ident_Output], context[11], context[12] );
      if( ! context[16] )
        continue;
      context[18] = refalrts::tvar_right( context[17], context[11], context[12] );
      if( ! context[18] )
        continue;
      // closed e.Target#1 as range 11
      //DEBUG: e.Locations-B#1: 7
      //DEBUG: e.Locations-E#1: 9
      //DEBUG: s.Pos#1: 15
      //DEBUG: t.Native#1: 17
      //DEBUG: e.Target#1: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </19 Tile{ HalfReuse: & RenameLocations-Aux/0 HalfReuse: 1/4 AsIs: e.Locations-B#1/7 AsIs: (/13 AsIs: s.Pos#1/15 AsIs: # Output/16 AsIs: e.Target#1/11 AsIs: t.Native#1/17 AsIs: )/14 AsIs: e.Locations-E#1/9 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::reinit_name(context[0], functions[efunc_RenameLocationsm_Aux]);
      refalrts::reinit_number(context[4], 1UL);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[19] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[0];
      res = refalrts::splice_evar( res, context[19], context[19] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & RenameLocations/4 e.Locations#1/2 >/1
  // closed e.Locations#1 as range 2
  //DEBUG: e.Locations#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & RenameLocations-Aux/0 HalfReuse: 0/4 AsIs: e.Locations#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_RenameLocationsm_Aux]);
  refalrts::reinit_number(context[4], 0UL);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_RenameLocations("RenameLocations", 52442882U, 1826840892U, func_RenameLocations);


static refalrts::FnResult func_gen_RenameLocationsm_Aux_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & RenameLocations-Aux=1/4 s.Num#2/5 e.NewLocations#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.NewLocations#2 as range 2
  //DEBUG: s.Num#2: 5
  //DEBUG: e.NewLocations#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & RenameLocations-Aux=1/4 s.Num#2/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.NewLocations#2/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RenameLocationsm_Aux_A1("RenameLocations-Aux=1", 52442882U, 1826840892U, func_gen_RenameLocationsm_Aux_A1);


static refalrts::FnResult func_gen_RenameLocationsm_Aux_A1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & RenameLocations-Aux=1\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & RenameLocations-Aux=1\1/4 s.new#1/9 (/7 s.new#2/10 s.new#3/11 e.new#4/5 )/8 >/1
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
    // </0 & RenameLocations-Aux=1\1/4 s.new#5/9 (/7 s.new#6/10 # Source/11 (/16 s.new#7/18 e.new#8/14 )/17 e.new#9/12 )/8 >/1
    context[12] = context[5];
    context[13] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_Source], context[11] ) )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    // closed e.new#9 as range 12
    if( ! refalrts::svar_left( context[18], context[14], context[15] ) )
      continue;
    // closed e.new#8 as range 14
    do {
      // </0 & RenameLocations-Aux=1\1/4 0/9 (/7 s.Pos#2/10 # Source/11 (/16 s.Dialect#2/18 e.Source#2/14 )/17 e.Output#2/12 )/8 >/1
      if( ! refalrts::number_term( 0UL, context[9] ) )
        continue;
      // closed e.Source#2 as range 14
      // closed e.Output#2 as range 12
      //DEBUG: s.Pos#2: 10
      //DEBUG: s.Dialect#2: 18
      //DEBUG: e.Source#2: 14
      //DEBUG: e.Output#2: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & RenameLocations-Aux=1\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ Reuse: 1/9 AsIs: (/7 AsIs: s.Pos#2/10 AsIs: # Source/11 AsIs: (/16 AsIs: s.Dialect#2/18 AsIs: e.Source#2/14 AsIs: )/17 AsIs: e.Output#2/12 AsIs: )/8 } Tile{ ]] }
      refalrts::update_number(context[9], 1UL);
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[16], context[17] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[9], context[8] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & RenameLocations-Aux=1\1/4 s.Num#2/9 (/7 s.Pos#2/10 # Source/11 (/16 s.Dialect#2/18 e.Source#2/14 )/17 e.Output#2/19 '.'/25 'r'/24 'a'/23 's'/22 'l'/21 )/8 >/1
    context[19] = context[12];
    context[20] = context[13];
    context[21] = refalrts::char_right( 'l', context[19], context[20] );
    if( ! context[21] )
      continue;
    context[22] = refalrts::char_right( 's', context[19], context[20] );
    if( ! context[22] )
      continue;
    context[23] = refalrts::char_right( 'a', context[19], context[20] );
    if( ! context[23] )
      continue;
    context[24] = refalrts::char_right( 'r', context[19], context[20] );
    if( ! context[24] )
      continue;
    context[25] = refalrts::char_right( '.', context[19], context[20] );
    if( ! context[25] )
      continue;
    // closed e.Source#2 as range 14
    // closed e.Output#2 as range 19
    //DEBUG: s.Num#2: 9
    //DEBUG: s.Pos#2: 10
    //DEBUG: s.Dialect#2: 18
    //DEBUG: e.Source#2: 14
    //DEBUG: e.Output#2: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc/4 AsIs: s.Num#2/9 } >/26 Tile{ AsIs: (/7 AsIs: s.Pos#2/10 AsIs: # Source/11 AsIs: (/16 AsIs: s.Dialect#2/18 AsIs: e.Source#2/14 AsIs: )/17 AsIs: e.Output#2/19 Reuse: '@'/25 HalfReuse: </24 HalfReuse: & Symb/23 HalfReuse: s.Num2 #9/22 HalfReuse: >/21 HalfReuse: '.'/8 HalfReuse: 'r'/1 }"asl"/27 )/29 Tile{ ]] }
    refalrts::alloc_close_call(vm, context[26]);
    refalrts::alloc_chars(vm, context[27], context[28], "asl", 3);
    refalrts::alloc_close_bracket(vm, context[29]);
    refalrts::update_name(context[4], functions[efunc_Inc]);
    refalrts::update_char(context[25], '@');
    refalrts::reinit_open_call(context[24]);
    refalrts::reinit_name(context[23], functions[efunc_Symb]);
    refalrts::reinit_svar( context[22], context[9] );
    refalrts::reinit_close_call(context[21]);
    refalrts::reinit_char(context[8], '.');
    refalrts::reinit_char(context[1], 'r');
    refalrts::link_brackets( context[7], context[29] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[24] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::push_stack( vm, context[26] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[27], context[29] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    res = refalrts::splice_evar( res, context[26], context[26] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & RenameLocations-Aux=1\1/4 s.Num#2/9 (/7 s.Pos#2/10 # Output/11 e.Output#2/5 t.Native#2/12 )/8 >/1
  if( ! refalrts::ident_term( identifiers[ident_Output], context[11] ) )
    return refalrts::cRecognitionImpossible;
  context[13] = refalrts::tvar_right( context[12], context[5], context[6] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  // closed e.Output#2 as range 5
  //DEBUG: s.Num#2: 9
  //DEBUG: s.Pos#2: 10
  //DEBUG: t.Native#2: 12
  //DEBUG: e.Output#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & RenameLocations-Aux=1\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: s.Num#2/9 AsIs: (/7 AsIs: s.Pos#2/10 AsIs: # Output/11 AsIs: e.Output#2/5 AsIs: t.Native#2/12 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RenameLocationsm_Aux_A1L1("RenameLocations-Aux=1\\1", 52442882U, 1826840892U, func_gen_RenameLocationsm_Aux_A1L1);


static refalrts::FnResult func_RenameLocationsm_Aux(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & RenameLocations-Aux/4 s.InitNumber#1/5 e.Locations#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Locations#1 as range 2
  //DEBUG: s.InitNumber#1: 5
  //DEBUG: e.Locations#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </6 & RenameLocations-Aux=1/7 </8 Tile{ HalfReuse: & MapReduce/0 Reuse: & RenameLocations-Aux=1\1/4 AsIs: s.InitNumber#1/5 AsIs: e.Locations#1/2 AsIs: >/1 } >/9 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_RenameLocationsm_Aux_A1]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_close_call(vm, context[9]);
  refalrts::reinit_name(context[0], functions[efunc_MapReduce]);
  refalrts::update_name(context[4], functions[efunc_gen_RenameLocationsm_Aux_A1L1]);
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[6], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_RenameLocationsm_Aux("RenameLocations-Aux", 52442882U, 1826840892U, func_RenameLocationsm_Aux);


static refalrts::FnResult func_gen_CompileFiles_S1L1S3B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
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
      // </0 & CompileFiles$1\1$3:1/4 # Success/5 e.OutputName#4/6 # NoNative/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_NoNative], context[8] ) )
        continue;
      // closed e.OutputName#4 as range 6
      //DEBUG: e.OutputName#4: 6

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 Reuse: # RASL/5 AsIs: e.OutputName#4/6 HalfReuse: )/8 } Tile{ ]] }
      refalrts::reinit_open_bracket(context[4]);
      refalrts::update_ident(context[5], identifiers[ident_RASL]);
      refalrts::reinit_close_bracket(context[8]);
      refalrts::link_brackets( context[4], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[4], context[8] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & CompileFiles$1\1$3:1/4 # Success/5 e.OutputName#4/6 (/8 e.NativeOutputName#4/10 )/9 >/1
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_term( context[10], context[11], context[8] ) )
      continue;
    // closed e.OutputName#4 as range 6
    // closed e.NativeOutputName#4 as range 10
    //DEBUG: e.OutputName#4: 6
    //DEBUG: e.NativeOutputName#4: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Prout/4 HalfReuse: ' '/5 }"  ... natives generated"/12 Tile{ AsIs: >/1 } (/14 # RASL/15 Tile{ AsIs: e.OutputName#4/6 } )/16 (/17 Tile{ HalfReuse: # Native/8 AsIs: e.NativeOutputName#4/10 AsIs: )/9 } Tile{ ]] }
    refalrts::alloc_chars(vm, context[12], context[13], "  ... natives generated", 23);
    refalrts::alloc_open_bracket(vm, context[14]);
    refalrts::alloc_ident(vm, context[15], identifiers[ident_RASL]);
    refalrts::alloc_close_bracket(vm, context[16]);
    refalrts::alloc_open_bracket(vm, context[17]);
    refalrts::update_name(context[4], functions[efunc_Prout]);
    refalrts::reinit_char(context[5], ' ');
    refalrts::reinit_ident(context[8], identifiers[ident_Native]);
    refalrts::link_brackets( context[17], context[9] );
    refalrts::link_brackets( context[14], context[16] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[12], context[13] );
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

static refalrts::NativeReference nat_ref_gen_CompileFiles_S1L1S3B1("CompileFiles$1\\1$3:1", 52442882U, 1826840892U, func_gen_CompileFiles_S1L1S3B1);


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

static refalrts::NativeReference nat_ref_gen_CompileFiles_S1L1S3A1("CompileFiles$1\\1$3=1", 52442882U, 1826840892U, func_gen_CompileFiles_S1L1S3A1);


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
      // </0 & CompileFiles$1\1/4 t.Config#1/11 (/7 s.Pos#2/9 # Output/10 e.OutputName#2/13 # NoNative/15 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_NoNative], context[15] ) )
        continue;
      // closed e.OutputName#2 as range 13
      //DEBUG: t.Config#1: 11
      //DEBUG: s.Pos#2: 9
      //DEBUG: e.OutputName#2: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} t.Config#1/11 {REMOVED TILE} s.Pos#2/9 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Prout/4 } '+'/17 Tile{ HalfReuse: 'L'/7 }"inking"/18 Tile{ HalfReuse: ' '/10 AsIs: e.OutputName#2/13 HalfReuse: >/15 HalfReuse: (/8 HalfReuse: # RASL/1 } e.OutputName#2/13/20 )/22 Tile{ ]] }
      refalrts::alloc_char(vm, context[17], '+');
      refalrts::alloc_chars(vm, context[18], context[19], "inking", 6);
      refalrts::copy_evar(vm, context[20], context[21], context[13], context[14]);
      refalrts::alloc_close_bracket(vm, context[22]);
      refalrts::update_name(context[4], functions[efunc_Prout]);
      refalrts::reinit_char(context[7], 'L');
      refalrts::reinit_char(context[10], ' ');
      refalrts::reinit_close_call(context[15]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_ident(context[1], identifiers[ident_RASL]);
      refalrts::link_brackets( context[8], context[22] );
      refalrts::push_stack( vm, context[15] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[22], context[22] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[10], context[1] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[17], context[17] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & CompileFiles$1\1/4 t.Config#1/11 (/7 s.Pos#2/9 # Output/10 e.OutputName#2/13 (/15 e.NativeName#2/17 )/16 )/8 >/1
    context[17] = 0;
    context[18] = 0;
    if( ! refalrts::brackets_term( context[17], context[18], context[15] ) )
      continue;
    // closed e.OutputName#2 as range 13
    // closed e.NativeName#2 as range 17
    //DEBUG: t.Config#1: 11
    //DEBUG: s.Pos#2: 9
    //DEBUG: e.OutputName#2: 13
    //DEBUG: e.NativeName#2: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} t.Config#1/11 {REMOVED TILE} s.Pos#2/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Prout/4 }"+Linking (+ natives) "/19 Tile{ AsIs: e.OutputName#2/13 } >/21 Tile{ AsIs: (/7 } Tile{ Reuse: # RASL/10 } e.OutputName#2/13/22 Tile{ AsIs: )/8 HalfReuse: (/1 } Tile{ HalfReuse: # Native/15 AsIs: e.NativeName#2/17 AsIs: )/16 } Tile{ ]] }
    refalrts::alloc_chars(vm, context[19], context[20], "+Linking (+ natives) ", 21);
    refalrts::alloc_close_call(vm, context[21]);
    refalrts::copy_evar(vm, context[22], context[23], context[13], context[14]);
    refalrts::update_name(context[4], functions[efunc_Prout]);
    refalrts::update_ident(context[10], identifiers[ident_RASL]);
    refalrts::reinit_open_bracket(context[1]);
    refalrts::reinit_ident(context[15], identifiers[ident_Native]);
    refalrts::link_brackets( context[1], context[16] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[8], context[1] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[21], context[21] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[19], context[20] );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Pos#2/9 {REMOVED TILE} s.Dialect#2/17 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & CompileFiles$1\1$3=1/18 Tile{ AsIs: t.Config#1/11 } Tile{ HalfReuse: s.Dialect2 #17/10 AsIs: (/15 } Tile{ AsIs: e.Source#2/13 } Tile{ HalfReuse: )/7 } Tile{ HalfReuse: (/16 AsIs: e.OutputName#2/5 AsIs: )/8 HalfReuse: {*}/1 } </19 & Prout/20"*Compiling "/21 e.Source#2/13/23 ':'/25 >/26 >/27 Tile{ ]] }
  refalrts::alloc_name(vm, context[18], functions[efunc_gen_CompileFiles_S1L1S3A1]);
  refalrts::alloc_open_call(vm, context[19]);
  refalrts::alloc_name(vm, context[20], functions[efunc_Prout]);
  refalrts::alloc_chars(vm, context[21], context[22], "*Compiling ", 11);
  refalrts::copy_evar(vm, context[23], context[24], context[13], context[14]);
  refalrts::alloc_char(vm, context[25], ':');
  refalrts::alloc_close_call(vm, context[26]);
  refalrts::alloc_close_call(vm, context[27]);
  refalrts::reinit_closure_head(context[4]);
  refalrts::reinit_svar( context[10], context[17] );
  refalrts::reinit_close_bracket(context[7]);
  refalrts::reinit_open_bracket(context[16]);
  refalrts::reinit_unwrapped_closure(context[1], context[4]);
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[26] );
  refalrts::push_stack( vm, context[19] );
  refalrts::link_brackets( context[16], context[8] );
  refalrts::link_brackets( context[15], context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[19], context[27] );
  res = refalrts::splice_evar( res, context[16], context[1] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[10], context[15] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  refalrts::wrap_closure( context[1] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CompileFiles_S1L1("CompileFiles$1\\1", 52442882U, 1826840892U, func_gen_CompileFiles_S1L1);


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
    // </0 & CompileFiles$2\1/4 t.Config#1/11 (/7 s.Pos#2/9 # Output/10 e.OutputName#2/5 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_Output], context[10] ) )
      continue;
    // closed e.OutputName#2 as range 5
    //DEBUG: t.Config#1: 11
    //DEBUG: s.Pos#2: 9
    //DEBUG: e.OutputName#2: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} t.Config#1/11 {REMOVED TILE} s.Pos#2/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Prout/4 } '+'/13 Tile{ HalfReuse: 'S'/7 }"kipping native file "/14 e.OutputName#2/5/16 Tile{ AsIs: >/1 } Tile{ HalfReuse: (/10 AsIs: e.OutputName#2/5 AsIs: )/8 } Tile{ ]] }
    refalrts::alloc_char(vm, context[13], '+');
    refalrts::alloc_chars(vm, context[14], context[15], "kipping native file ", 20);
    refalrts::copy_evar(vm, context[16], context[17], context[5], context[6]);
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
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[13], context[13] );
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

static refalrts::NativeReference nat_ref_gen_CompileFiles_S2L1("CompileFiles$2\\1", 52442882U, 1826840892U, func_gen_CompileFiles_S2L1);


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
    // </0 & CompileFiles/4 t.Config#1/5 # NormalRun/7 e.Files#1/2 >/1
    if( ! refalrts::ident_term( identifiers[ident_NormalRun], context[7] ) )
      continue;
    // closed e.Files#1 as range 2
    //DEBUG: t.Config#1: 5
    //DEBUG: e.Files#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </8 & Map/9 Tile{ HalfReuse: [*]/0 Reuse: & CompileFiles$1\1/4 AsIs: t.Config#1/5 HalfReuse: {*}/7 AsIs: e.Files#1/2 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[8]);
    refalrts::alloc_name(vm, context[9], functions[efunc_Map]);
    refalrts::reinit_closure_head(context[0]);
    refalrts::update_name(context[4], functions[efunc_gen_CompileFiles_S1L1]);
    refalrts::reinit_unwrapped_closure(context[7], context[0]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::use( res );
    refalrts::wrap_closure( context[7] );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </8 & Map/9 Tile{ HalfReuse: [*]/0 Reuse: & CompileFiles$2\1/4 AsIs: t.Config#1/5 HalfReuse: {*}/7 AsIs: e.Files#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Map]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_CompileFiles_S2L1]);
  refalrts::reinit_unwrapped_closure(context[7], context[0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[8], context[9] );
  refalrts::use( res );
  refalrts::wrap_closure( context[7] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CompileFiles("CompileFiles", 52442882U, 1826840892U, func_CompileFiles);


static refalrts::FnResult func_gen_Link_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
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
    // </0 & Link:1/4 t.CommandLineSource#1/5 t.Config#1/7 (/11 e.Files#1/9 )/12 # EXE/13 >/1
    if( ! refalrts::ident_term( identifiers[ident_EXE], context[13] ) )
      continue;
    // closed e.Files#1 as range 9
    //DEBUG: t.CommandLineSource#1: 5
    //DEBUG: t.Config#1: 7
    //DEBUG: e.Files#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Link-Exe/4 AsIs: t.CommandLineSource#1/5 AsIs: t.Config#1/7 AsIs: (/11 } </14 & Config-GetCppCompiler/15 t.Config#1/7/16 Tile{ AsIs: # EXE/13 AsIs: >/1 } Tile{ AsIs: )/12 } (/18 </19 & Config-GetPrefix/20 t.Config#1/7/21 >/23 )/24 Tile{ AsIs: e.Files#1/9 } >/25 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_Configm_GetCppCompiler]);
    refalrts::copy_evar(vm, context[16], context[17], context[7], context[8]);
    refalrts::alloc_open_bracket(vm, context[18]);
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_Configm_GetPrefix]);
    refalrts::copy_evar(vm, context[21], context[22], context[7], context[8]);
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::alloc_close_bracket(vm, context[24]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::update_name(context[4], functions[efunc_Linkm_Exe]);
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[18], context[24] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[19] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[18], context[24] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[13], context[1] );
    res = refalrts::splice_evar( res, context[14], context[17] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Link:1/4 t.CommandLineSource#1/5 t.Config#1/7 (/11 e.Files#1/9 )/12 # LIB/13 >/1
    if( ! refalrts::ident_term( identifiers[ident_LIB], context[13] ) )
      continue;
    // closed e.Files#1 as range 9
    //DEBUG: t.CommandLineSource#1: 5
    //DEBUG: t.Config#1: 7
    //DEBUG: e.Files#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Link-Lib/4 AsIs: t.CommandLineSource#1/5 AsIs: t.Config#1/7 AsIs: (/11 } </14 & Config-GetCppCompiler/15 t.Config#1/7/16 Tile{ AsIs: # LIB/13 AsIs: >/1 } Tile{ AsIs: )/12 } (/18 </19 & Config-GetPrefix/20 t.Config#1/7/21 >/23 )/24 Tile{ AsIs: e.Files#1/9 } >/25 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_Configm_GetCppCompiler]);
    refalrts::copy_evar(vm, context[16], context[17], context[7], context[8]);
    refalrts::alloc_open_bracket(vm, context[18]);
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_Configm_GetPrefix]);
    refalrts::copy_evar(vm, context[21], context[22], context[7], context[8]);
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::alloc_close_bracket(vm, context[24]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::update_name(context[4], functions[efunc_Linkm_Lib]);
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[18], context[24] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[19] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[18], context[24] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[13], context[1] );
    res = refalrts::splice_evar( res, context[14], context[17] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Link:1/4 t.CommandLineSource#1/5 t.Config#1/7 (/11 e.Files#1/9 )/12 # R/13 >/1
    if( ! refalrts::ident_term( identifiers[ident_R], context[13] ) )
      continue;
    // closed e.Files#1 as range 9
    //DEBUG: t.CommandLineSource#1: 5
    //DEBUG: t.Config#1: 7
    //DEBUG: e.Files#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/11 {REMOVED TILE} )/12 # R/13 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Link-R/4 AsIs: t.CommandLineSource#1/5 AsIs: t.Config#1/7 } Tile{ AsIs: e.Files#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_Linkm_R]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
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

static refalrts::NativeReference nat_ref_gen_Link_B1("Link:1", 52442882U, 1826840892U, func_gen_Link_B1);


static refalrts::FnResult func_Link(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 Tile{ HalfReuse: [*]/0 Reuse: & Link:1/4 AsIs: t.CommandLineSource#1/5 AsIs: t.Config#1/7 } (/10 Tile{ AsIs: e.Files#1/2 } )/11 {*}/12 </13 & Config-GetTargetMode/14 t.Config#1/7/15 >/17 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_open_bracket(vm, context[10]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::alloc_unwrapped_closure(vm, context[12], context[0]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_Configm_GetTargetMode]);
  refalrts::copy_evar(vm, context[15], context[16], context[7], context[8]);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_Link_B1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[11], context[17] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  refalrts::wrap_closure( context[12] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Link("Link", 52442882U, 1826840892U, func_Link);


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
    // </0 & Link-Exe$4:1/4 t.Config#1/5 (/9 e.Files#1/7 )/10 t.CommandLineSource#1/11 # Success/13 e.PrefixFileName#2/2 >/1
    if( ! refalrts::ident_term( identifiers[ident_Success], context[13] ) )
      continue;
    // closed e.Files#1 as range 7
    // closed e.PrefixFileName#2 as range 2
    //DEBUG: t.Config#1: 5
    //DEBUG: t.CommandLineSource#1: 11
    //DEBUG: e.Files#1: 7
    //DEBUG: e.PrefixFileName#2: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.CommandLineSource#1/11 # Success/13 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Link-WithPrefix/4 } Tile{ AsIs: (/9 } Tile{ AsIs: e.PrefixFileName#2/2 } Tile{ AsIs: )/10 } Tile{ AsIs: t.Config#1/5 } Tile{ AsIs: e.Files#1/7 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_Linkm_WithPrefix]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[2], context[3] );
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

static refalrts::NativeReference nat_ref_gen_Linkm_Exe_S4B1("Link-Exe$4:1", 52442882U, 1826840892U, func_gen_Linkm_Exe_S4B1);


static refalrts::FnResult func_Linkm_Exe(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
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
    // </0 & Link-Exe/4 t.new#6/5 t.new#7/7 (/11 t.new#8/19 e.new#9/17 )/12 (/15 )/16 e.new#10/2 >/1
    context[17] = context[9];
    context[18] = context[10];
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    // closed e.new#10 as range 2
    context[20] = refalrts::tvar_left( context[19], context[17], context[18] );
    if( ! context[20] )
      continue;
    // closed e.new#9 as range 17
    do {
      // </0 & Link-Exe/4 t.CommandLineSource#1/5 t.Config#1/7 (/11 # NoCppCompiler/19 )/12 (/15 )/16 e.Files#1/2 >/1
      if( ! refalrts::ident_term( identifiers[ident_NoCppCompiler], context[19] ) )
        continue;
      if( ! refalrts::empty_seq( context[17], context[18] ) )
        continue;
      // closed e.Files#1 as range 2
      //DEBUG: t.CommandLineSource#1: 5
      //DEBUG: t.Config#1: 7
      //DEBUG: e.Files#1: 2

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} e.Files#1/2 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReportErrors/4 AsIs: t.CommandLineSource#1/5 AsIs: t.Config#1/7 AsIs: (/11 HalfReuse: 1/19 HalfReuse: 'o'/12 HalfReuse: 'p'/15 HalfReuse: 't'/16 }"ion -x (or --exe) require option --cpp-command-exe with nonempty value"/21 )/23 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_chars(vm, context[21], context[22], "ion -x (or --exe) require option --cpp-command-exe with nonempty value", 70);
      refalrts::alloc_close_bracket(vm, context[23]);
      refalrts::update_name(context[4], functions[efunc_ReportErrors]);
      refalrts::reinit_number(context[19], 1UL);
      refalrts::reinit_char(context[12], 'o');
      refalrts::reinit_char(context[15], 'p');
      refalrts::reinit_char(context[16], 't');
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[11], context[23] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[21], context[23] );
      refalrts::splice_to_freelist_open( vm, context[16], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Link-Exe/4 t.CommandLineSource#1/5 t.Config#1/7 (/11 (/19 e.CommandLine#1/21 )/20 e.Flags#1/17 )/12 (/15 )/16 e.Files#1/2 >/1
    context[21] = 0;
    context[22] = 0;
    if( ! refalrts::brackets_term( context[21], context[22], context[19] ) )
      continue;
    // closed e.CommandLine#1 as range 21
    // closed e.Flags#1 as range 17
    // closed e.Files#1 as range 2
    //DEBUG: t.CommandLineSource#1: 5
    //DEBUG: t.Config#1: 7
    //DEBUG: e.CommandLine#1: 21
    //DEBUG: e.Flags#1: 17
    //DEBUG: e.Files#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} t.CommandLineSource#1/5 {REMOVED TILE} (/15 )/16 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Link-CppCompile/4 } Tile{ AsIs: t.Config#1/7 AsIs: (/11 AsIs: (/19 AsIs: e.CommandLine#1/21 AsIs: )/20 AsIs: e.Flags#1/17 AsIs: )/12 } Tile{ AsIs: e.Files#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_Linkm_CppCompile]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[7], context[12] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Link-Exe/4 t.CommandLineSource#1/5 t.Config#1/7 (/11 e.AnyCommandLine#1/9 )/12 (/15 e.Prefix#1/13 )/16 e.Files-B#1/19 (/25 # Native/27 e.FileName#1/23 )/26 e.Files-E#1/21 >/1
    context[17] = context[2];
    context[18] = context[3];
    // closed e.AnyCommandLine#1 as range 9
    // closed e.Prefix#1 as range 13
    context[19] = 0;
    context[20] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[21] = context[17];
      context[22] = context[18];
      context[23] = 0;
      context[24] = 0;
      context[25] = refalrts::brackets_left( context[23], context[24], context[21], context[22] );
      if( ! context[25] )
        continue;
      refalrts::bracket_pointers(context[25], context[26]);
      context[27] = refalrts::ident_left( identifiers[ident_Native], context[23], context[24] );
      if( ! context[27] )
        continue;
      // closed e.FileName#1 as range 23
      // closed e.Files-E#1 as range 21
      //DEBUG: t.CommandLineSource#1: 5
      //DEBUG: t.Config#1: 7
      //DEBUG: e.AnyCommandLine#1: 9
      //DEBUG: e.Prefix#1: 13
      //DEBUG: e.Files-B#1: 19
      //DEBUG: e.FileName#1: 23
      //DEBUG: e.Files-E#1: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} e.AnyCommandLine#1/9 {REMOVED TILE} e.Prefix#1/13 {REMOVED TILE} e.Files-B#1/19 {REMOVED TILE} e.Files-E#1/21 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReportErrors/4 AsIs: t.CommandLineSource#1/5 AsIs: t.Config#1/7 AsIs: (/11 } 1/28 'u'/29 Tile{ HalfReuse: 'n'/12 HalfReuse: 'e'/15 }"xpected native fil"/30 Tile{ HalfReuse: 'e'/25 HalfReuse: ' '/27 AsIs: e.FileName#1/23 HalfReuse: ' '/26 }"while compilation runs with prefix"/32 Tile{ AsIs: )/16 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_number(vm, context[28], 1UL);
      refalrts::alloc_char(vm, context[29], 'u');
      refalrts::alloc_chars(vm, context[30], context[31], "xpected native fil", 18);
      refalrts::alloc_chars(vm, context[32], context[33], "while compilation runs with prefix", 34);
      refalrts::update_name(context[4], functions[efunc_ReportErrors]);
      refalrts::reinit_char(context[12], 'n');
      refalrts::reinit_char(context[15], 'e');
      refalrts::reinit_char(context[25], 'e');
      refalrts::reinit_char(context[27], ' ');
      refalrts::reinit_char(context[26], ' ');
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[11], context[16] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[16], context[16] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[12], context[15] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      refalrts::splice_to_freelist_open( vm, context[11], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[19], context[20], context[17], context[18] ) );
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
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } Tile{ HalfReuse: & Link-Exe$4:1/15 } Tile{ AsIs: t.Config#1/7 AsIs: (/11 } Tile{ AsIs: e.Files#1/2 } Tile{ AsIs: )/12 } Tile{ AsIs: t.CommandLineSource#1/5 } {*}/17 Tile{ HalfReuse: </16 } & FindPrefix/18 t.Config#1/7/19 Tile{ AsIs: e.Prefix#1/13 } >/21 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_unwrapped_closure(vm, context[17], context[4]);
  refalrts::alloc_name(vm, context[18], functions[efunc_FindPrefix]);
  refalrts::copy_evar(vm, context[19], context[20], context[7], context[8]);
  refalrts::alloc_close_call(vm, context[21]);
  refalrts::reinit_closure_head(context[4]);
  refalrts::reinit_name(context[15], functions[efunc_gen_Linkm_Exe_S4B1]);
  refalrts::reinit_open_call(context[16]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[18], context[20] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[11] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  refalrts::wrap_closure( context[17] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Linkm_Exe("Link-Exe", 52442882U, 1826840892U, func_Linkm_Exe);


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
    // </0 & Link-Lib$5:1/4 t.Config#1/5 (/9 e.Files#1/7 )/10 t.CommandLineSource#1/11 # Success/13 e.PrefixFileName#2/2 >/1
    if( ! refalrts::ident_term( identifiers[ident_Success], context[13] ) )
      continue;
    // closed e.Files#1 as range 7
    // closed e.PrefixFileName#2 as range 2
    //DEBUG: t.Config#1: 5
    //DEBUG: t.CommandLineSource#1: 11
    //DEBUG: e.Files#1: 7
    //DEBUG: e.PrefixFileName#2: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.CommandLineSource#1/11 # Success/13 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Link-WithPrefix/4 } Tile{ AsIs: (/9 } Tile{ AsIs: e.PrefixFileName#2/2 } Tile{ AsIs: )/10 } Tile{ AsIs: t.Config#1/5 } Tile{ AsIs: e.Files#1/7 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_Linkm_WithPrefix]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[2], context[3] );
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

static refalrts::NativeReference nat_ref_gen_Linkm_Lib_S5B1("Link-Lib$5:1", 52442882U, 1826840892U, func_gen_Linkm_Lib_S5B1);


static refalrts::FnResult func_Linkm_Lib(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 36 elems
  refalrts::Iter context[36];
  refalrts::zeros( context, 36 );
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
    // </0 & Link-Lib/4 t.new#6/5 t.new#7/7 (/11 t.new#8/19 e.new#9/17 )/12 (/15 )/16 e.new#10/2 >/1
    context[17] = context[9];
    context[18] = context[10];
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    // closed e.new#10 as range 2
    context[20] = refalrts::tvar_left( context[19], context[17], context[18] );
    if( ! context[20] )
      continue;
    // closed e.new#9 as range 17
    do {
      // </0 & Link-Lib/4 t.new#11/5 t.new#12/7 (/11 # NoCppCompiler/19 )/12 (/15 )/16 e.new#13/2 >/1
      if( ! refalrts::ident_term( identifiers[ident_NoCppCompiler], context[19] ) )
        continue;
      if( ! refalrts::empty_seq( context[17], context[18] ) )
        continue;
      // closed e.new#13 as range 2
      do {
        // </0 & Link-Lib/4 t.CommandLineSource#1/5 t.Config#1/7 (/11 # NoCppCompiler/19 )/12 (/15 )/16 e.Files-B#1/23 (/29 # Native/31 e.FileName#1/27 )/30 e.Files-E#1/25 >/1
        context[21] = context[2];
        context[22] = context[3];
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
          //DEBUG: e.Files-B#1: 23
          //DEBUG: e.FileName#1: 27
          //DEBUG: e.Files-E#1: 25

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} e.Files-B#1/23 {REMOVED TILE} e.FileName#1/27 {REMOVED TILE} e.Files-E#1/25 {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReportErrors/4 AsIs: t.CommandLineSource#1/5 AsIs: t.Config#1/7 AsIs: (/11 HalfReuse: 1/19 HalfReuse: 'o'/12 HalfReuse: 'p'/15 HalfReuse: 't'/16 }"io"/32 Tile{ HalfReuse: 'n'/29 HalfReuse: ' '/31 }"-l (or --lib) with native code require option --cpp-command-lib with nonempty value"/34 Tile{ AsIs: )/30 } Tile{ AsIs: >/1 ]] }
          refalrts::alloc_chars(vm, context[32], context[33], "io", 2);
          refalrts::alloc_chars(vm, context[34], context[35], "-l (or --lib) with native code require option --cpp-command-lib with nonempty value", 83);
          refalrts::update_name(context[4], functions[efunc_ReportErrors]);
          refalrts::reinit_number(context[19], 1UL);
          refalrts::reinit_char(context[12], 'o');
          refalrts::reinit_char(context[15], 'p');
          refalrts::reinit_char(context[16], 't');
          refalrts::reinit_char(context[29], 'n');
          refalrts::reinit_char(context[31], ' ');
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[11], context[30] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[30], context[30] );
          res = refalrts::splice_evar( res, context[34], context[35] );
          res = refalrts::splice_evar( res, context[29], context[31] );
          res = refalrts::splice_evar( res, context[32], context[33] );
          refalrts::splice_to_freelist_open( vm, context[16], res );
          return refalrts::cSuccess;
        } while ( refalrts::open_evar_advance( context[23], context[24], context[21], context[22] ) );
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Link-Lib/4 t.CommandLineSource#1/5 t.Config#1/7 (/11 # NoCppCompiler/19 )/12 (/15 )/16 e.Files#1/2 >/1
      // closed e.Files#1 as range 2
      //DEBUG: t.CommandLineSource#1: 5
      //DEBUG: t.Config#1: 7
      //DEBUG: e.Files#1: 2

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReportWarnings/4 AsIs: t.CommandLineSource#1/5 AsIs: t.Config#1/7 AsIs: (/11 HalfReuse: 1/19 HalfReuse: 'p'/12 HalfReuse: 'r'/15 HalfReuse: 'e'/16 }"fix name or C++ command line is not found, create library without prefix"/21 )/23 >/24 </25 & Link-R/26 t.CommandLineSource#1/5/27 t.Config#1/7/29 Tile{ AsIs: e.Files#1/2 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_chars(vm, context[21], context[22], "fix name or C++ command line is not found, create library without prefix", 72);
      refalrts::alloc_close_bracket(vm, context[23]);
      refalrts::alloc_close_call(vm, context[24]);
      refalrts::alloc_open_call(vm, context[25]);
      refalrts::alloc_name(vm, context[26], functions[efunc_Linkm_R]);
      refalrts::copy_evar(vm, context[27], context[28], context[5], context[6]);
      refalrts::copy_evar(vm, context[29], context[30], context[7], context[8]);
      refalrts::update_name(context[4], functions[efunc_ReportWarnings]);
      refalrts::reinit_number(context[19], 1UL);
      refalrts::reinit_char(context[12], 'p');
      refalrts::reinit_char(context[15], 'r');
      refalrts::reinit_char(context[16], 'e');
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[25] );
      refalrts::push_stack( vm, context[24] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[11], context[23] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_evar( res, context[21], context[30] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Link-Lib/4 t.CommandLineSource#1/5 t.Config#1/7 (/11 (/19 e.CommandLine#1/21 )/20 e.Flags#1/17 )/12 (/15 )/16 e.Files#1/2 >/1
    context[21] = 0;
    context[22] = 0;
    if( ! refalrts::brackets_term( context[21], context[22], context[19] ) )
      continue;
    // closed e.CommandLine#1 as range 21
    // closed e.Flags#1 as range 17
    // closed e.Files#1 as range 2
    //DEBUG: t.CommandLineSource#1: 5
    //DEBUG: t.Config#1: 7
    //DEBUG: e.CommandLine#1: 21
    //DEBUG: e.Flags#1: 17
    //DEBUG: e.Files#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} t.CommandLineSource#1/5 {REMOVED TILE} (/15 )/16 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Link-CppCompile/4 } Tile{ AsIs: t.Config#1/7 AsIs: (/11 AsIs: (/19 AsIs: e.CommandLine#1/21 AsIs: )/20 AsIs: e.Flags#1/17 AsIs: )/12 } Tile{ AsIs: e.Files#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_Linkm_CppCompile]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[7], context[12] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Link-Lib/4 t.CommandLineSource#1/5 t.Config#1/7 (/11 e.AnyCommandLine#1/9 )/12 (/15 e.Prefix#1/13 )/16 e.Files-B#1/19 (/25 # Native/27 e.FileName#1/23 )/26 e.Files-E#1/21 >/1
    context[17] = context[2];
    context[18] = context[3];
    // closed e.AnyCommandLine#1 as range 9
    // closed e.Prefix#1 as range 13
    context[19] = 0;
    context[20] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[21] = context[17];
      context[22] = context[18];
      context[23] = 0;
      context[24] = 0;
      context[25] = refalrts::brackets_left( context[23], context[24], context[21], context[22] );
      if( ! context[25] )
        continue;
      refalrts::bracket_pointers(context[25], context[26]);
      context[27] = refalrts::ident_left( identifiers[ident_Native], context[23], context[24] );
      if( ! context[27] )
        continue;
      // closed e.FileName#1 as range 23
      // closed e.Files-E#1 as range 21
      //DEBUG: t.CommandLineSource#1: 5
      //DEBUG: t.Config#1: 7
      //DEBUG: e.AnyCommandLine#1: 9
      //DEBUG: e.Prefix#1: 13
      //DEBUG: e.Files-B#1: 19
      //DEBUG: e.FileName#1: 23
      //DEBUG: e.Files-E#1: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} e.AnyCommandLine#1/9 {REMOVED TILE} e.Prefix#1/13 {REMOVED TILE} e.Files-B#1/19 {REMOVED TILE} e.Files-E#1/21 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReportErrors/4 AsIs: t.CommandLineSource#1/5 AsIs: t.Config#1/7 AsIs: (/11 } 1/28 'u'/29 Tile{ HalfReuse: 'n'/12 HalfReuse: 'e'/15 }"xpected native fil"/30 Tile{ HalfReuse: 'e'/25 HalfReuse: ' '/27 AsIs: e.FileName#1/23 HalfReuse: ' '/26 }"while compilation runs with prefix"/32 Tile{ AsIs: )/16 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_number(vm, context[28], 1UL);
      refalrts::alloc_char(vm, context[29], 'u');
      refalrts::alloc_chars(vm, context[30], context[31], "xpected native fil", 18);
      refalrts::alloc_chars(vm, context[32], context[33], "while compilation runs with prefix", 34);
      refalrts::update_name(context[4], functions[efunc_ReportErrors]);
      refalrts::reinit_char(context[12], 'n');
      refalrts::reinit_char(context[15], 'e');
      refalrts::reinit_char(context[25], 'e');
      refalrts::reinit_char(context[27], ' ');
      refalrts::reinit_char(context[26], ' ');
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[11], context[16] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[16], context[16] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[12], context[15] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      refalrts::splice_to_freelist_open( vm, context[11], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[19], context[20], context[17], context[18] ) );
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
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } Tile{ HalfReuse: & Link-Lib$5:1/15 } Tile{ AsIs: t.Config#1/7 AsIs: (/11 } Tile{ AsIs: e.Files#1/2 } Tile{ AsIs: )/12 } Tile{ AsIs: t.CommandLineSource#1/5 } {*}/17 Tile{ HalfReuse: </16 } & FindPrefix/18 t.Config#1/7/19 Tile{ AsIs: e.Prefix#1/13 } >/21 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_unwrapped_closure(vm, context[17], context[4]);
  refalrts::alloc_name(vm, context[18], functions[efunc_FindPrefix]);
  refalrts::copy_evar(vm, context[19], context[20], context[7], context[8]);
  refalrts::alloc_close_call(vm, context[21]);
  refalrts::reinit_closure_head(context[4]);
  refalrts::reinit_name(context[15], functions[efunc_gen_Linkm_Lib_S5B1]);
  refalrts::reinit_open_call(context[16]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[18], context[20] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[11] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  refalrts::wrap_closure( context[17] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Linkm_Lib("Link-Lib", 52442882U, 1826840892U, func_Linkm_Lib);


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

static refalrts::NativeReference nat_ref_gen_Linkm_R_S2L1("Link-R$2\\1", 52442882U, 1826840892U, func_gen_Linkm_R_S2L1);


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

static refalrts::NativeReference nat_ref_Linkm_R("Link-R", 52442882U, 1826840892U, func_Linkm_R);


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

static refalrts::NativeReference nat_ref_gen_Linkm_WithPrefix_L1("Link-WithPrefix\\1", 52442882U, 1826840892U, func_gen_Linkm_WithPrefix_L1);


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

static refalrts::NativeReference nat_ref_Linkm_WithPrefix("Link-WithPrefix", 52442882U, 1826840892U, func_Linkm_WithPrefix);


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

static refalrts::NativeReference nat_ref_gen_Chmodm_Xm_Prefix_B1S2A1("Chmod-X-Prefix:1$2=1", 52442882U, 1826840892U, func_gen_Chmodm_Xm_Prefix_B1S2A1);


static refalrts::FnResult func_gen_Chmodm_Xm_Prefix_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
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
    // </0 & Chmod-X-Prefix:1/4 t.Config#1/5 (/9 e.IntermediateName#1/7 )/10 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.IntermediateName#1 as range 7
    //DEBUG: t.Config#1: 5
    //DEBUG: e.IntermediateName#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Chmod-X-Prefix:1/4 t.Config#1/5 (/9 e.IntermediateName#1/7 )/10 >/1 {REMOVED TILE}
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
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & Chmod-X-Prefix:1$2=1/11 Tile{ AsIs: t.Config#1/5 } {*}/12 </13 & System/14 Tile{ AsIs: e.ChmodXCommand#2/2 } ' '/15 Tile{ HalfReuse: '\"'/9 AsIs: e.IntermediateName#1/7 HalfReuse: '\"'/10 } >/16 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_Chmodm_Xm_Prefix_B1S2A1]);
  refalrts::alloc_unwrapped_closure(vm, context[12], context[4]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_System]);
  refalrts::alloc_char(vm, context[15], ' ');
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::reinit_closure_head(context[4]);
  refalrts::reinit_char(context[9], '\"');
  refalrts::reinit_char(context[10], '\"');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[14] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::use( res );
  refalrts::wrap_closure( context[12] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Chmodm_Xm_Prefix_B1("Chmod-X-Prefix:1", 52442882U, 1826840892U, func_gen_Chmodm_Xm_Prefix_B1);


static refalrts::FnResult func_Chmodm_Xm_Prefix(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 [*]/8 & Chmod-X-Prefix:1/9 t.Config#1/5/10 (/12 Tile{ AsIs: e.IntermediateName#1/2 } )/13 {*}/14 Tile{ AsIs: </0 Reuse: & Config-GetChmodXCommand/4 AsIs: t.Config#1/5 } >/15 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_closure_head(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_gen_Chmodm_Xm_Prefix_B1]);
  refalrts::copy_evar(vm, context[10], context[11], context[5], context[6]);
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::alloc_unwrapped_closure(vm, context[14], context[8]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::update_name(context[4], functions[efunc_Configm_GetChmodXCommand]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::use( res );
  refalrts::wrap_closure( context[14] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Chmodm_Xm_Prefix("Chmod-X-Prefix", 52442882U, 1826840892U, func_Chmodm_Xm_Prefix);


static refalrts::FnResult func_CheckReturnCode(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
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
    // </0 & CheckReturnCode/4 t.Config#1/5 (/9 0/13 )/10 e.Component#1/2 >/1
    context[11] = context[7];
    context[12] = context[8];
    context[13] = refalrts::number_left( 0UL, context[11], context[12] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    // closed e.Component#1 as range 2
    //DEBUG: t.Config#1: 5
    //DEBUG: e.Component#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CheckReturnCode/4 t.Config#1/5 (/9 0/13 )/10 e.Component#1/2 >/1 {REMOVED TILE}
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

static refalrts::NativeReference nat_ref_CheckReturnCode("CheckReturnCode", 52442882U, 1826840892U, func_CheckReturnCode);


static refalrts::FnResult func_gen_Linkm_CppCompile_L1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & Link-CppCompile\1=1/4 t.Config#1/5 (/9 e.IntermediateName#2/7 )/10 e.RetCode#3/2 >/1
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
  // closed e.IntermediateName#2 as range 7
  // closed e.RetCode#3 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: e.IntermediateName#2: 7
  //DEBUG: e.RetCode#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckReturnCode/4 AsIs: t.Config#1/5 AsIs: (/9 } Tile{ AsIs: e.RetCode#3/2 } Tile{ AsIs: )/10 }"C++ compiler"/11 >/13 </14 & CheckCppCompilationSuccessed/15 t.Config#1/5/16 Tile{ AsIs: e.IntermediateName#2/7 } >/18 </19 & EnsureAligned4096/20 e.IntermediateName#2/7/21 Tile{ AsIs: >/1 ]] }
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

static refalrts::NativeReference nat_ref_gen_Linkm_CppCompile_L1A1("Link-CppCompile\\1=1", 52442882U, 1826840892U, func_gen_Linkm_CppCompile_L1A1);


static refalrts::FnResult func_gen_Linkm_CppCompile_L1A1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & Link-CppCompile\1=1\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Link-CppCompile\1=1\1/4 (/7 s.new#1/9 e.new#2/5 )/8 >/1
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
    // </0 & Link-CppCompile\1=1\1/4 (/7 # RASL/9 e.FileName#3/5 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_RASL], context[9] ) )
      continue;
    // closed e.FileName#3 as range 5
    //DEBUG: e.FileName#3: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Link-CppCompile\1=1\1/4 (/7 # RASL/9 e.FileName#3/5 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Link-CppCompile\1=1\1/4 (/7 # Native/9 e.FileName#3/5 )/8 >/1
  if( ! refalrts::ident_term( identifiers[ident_Native], context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#3 as range 5
  //DEBUG: e.FileName#3: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Link-CppCompile\1=1\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/7 HalfReuse: '\"'/9 AsIs: e.FileName#3/5 HalfReuse: '\"'/8 } Tile{ ]] }
  refalrts::reinit_char(context[7], ' ');
  refalrts::reinit_char(context[9], '\"');
  refalrts::reinit_char(context[8], '\"');
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Linkm_CppCompile_L1A1L1("Link-CppCompile\\1=1\\1", 52442882U, 1826840892U, func_gen_Linkm_CppCompile_L1A1L1);


static refalrts::FnResult func_gen_Linkm_CppCompile_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & Link-CppCompile\1/4 t.Config#1/5 (/9 e.CommandLine#1/7 )/10 (/13 e.Flags#1/11 )/14 (/17 e.Files#1/15 )/18 e.IntermediateName#2/2 >/1
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
  // closed e.IntermediateName#2 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: e.CommandLine#1: 7
  //DEBUG: e.Flags#1: 11
  //DEBUG: e.Files#1: 15
  //DEBUG: e.IntermediateName#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </19 Tile{ HalfReuse: [*]/0 Reuse: & Link-CppCompile\1=1/4 AsIs: t.Config#1/5 AsIs: (/9 } e.IntermediateName#2/2/20 Tile{ AsIs: )/10 HalfReuse: {*}/13 } </22 & System/23 Tile{ AsIs: e.CommandLine#1/7 } Tile{ AsIs: e.IntermediateName#2/2 } Tile{ AsIs: e.Flags#1/11 } </24 Tile{ HalfReuse: & Map/14 HalfReuse: & Link-CppCompile\1=1\1/17 AsIs: e.Files#1/15 HalfReuse: >/18 } >/25 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[19]);
  refalrts::copy_evar(vm, context[20], context[21], context[2], context[3]);
  refalrts::alloc_open_call(vm, context[22]);
  refalrts::alloc_name(vm, context[23], functions[efunc_System]);
  refalrts::alloc_open_call(vm, context[24]);
  refalrts::alloc_close_call(vm, context[25]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_Linkm_CppCompile_L1A1]);
  refalrts::reinit_unwrapped_closure(context[13], context[0]);
  refalrts::reinit_name(context[14], functions[efunc_Map]);
  refalrts::reinit_name(context[17], functions[efunc_gen_Linkm_CppCompile_L1A1L1]);
  refalrts::reinit_close_call(context[18]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[22] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[24] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[14], context[18] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[10], context[13] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  refalrts::use( res );
  refalrts::wrap_closure( context[13] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Linkm_CppCompile_L1("Link-CppCompile\\1", 52442882U, 1826840892U, func_gen_Linkm_CppCompile_L1);


static refalrts::FnResult func_Linkm_CppCompile(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & Link-CppCompile/4 t.Config#1/5 (/9 (/13 e.CommandLine#1/11 )/14 e.Flags#1/7 )/10 e.Files#1/2 >/1
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
  context[13] = refalrts::brackets_left( context[11], context[12], context[7], context[8] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.CommandLine#1 as range 11
  // closed e.Flags#1 as range 7
  // closed e.Files#1 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: e.CommandLine#1: 11
  //DEBUG: e.Flags#1: 7
  //DEBUG: e.Files#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </15 & Link-Aux/16 Tile{ AsIs: </0 Reuse: & Config-GetTargetMode/4 AsIs: t.Config#1/5 HalfReuse: >/9 HalfReuse: [*]/13 } & Link-CppCompile\1/17 t.Config#1/5/18 (/20 Tile{ AsIs: e.CommandLine#1/11 } )/21 Tile{ HalfReuse: (/14 AsIs: e.Flags#1/7 AsIs: )/10 } (/22 Tile{ AsIs: e.Files#1/2 } )/23 {*}/24 t.Config#1/5/25 e.Files#1/2/27 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_Linkm_Aux]);
  refalrts::alloc_name(vm, context[17], functions[efunc_gen_Linkm_CppCompile_L1]);
  refalrts::copy_evar(vm, context[18], context[19], context[5], context[6]);
  refalrts::alloc_open_bracket(vm, context[20]);
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::alloc_open_bracket(vm, context[22]);
  refalrts::alloc_close_bracket(vm, context[23]);
  refalrts::alloc_unwrapped_closure(vm, context[24], context[13]);
  refalrts::copy_evar(vm, context[25], context[26], context[5], context[6]);
  refalrts::copy_evar(vm, context[27], context[28], context[2], context[3]);
  refalrts::update_name(context[4], functions[efunc_Configm_GetTargetMode]);
  refalrts::reinit_close_call(context[9]);
  refalrts::reinit_closure_head(context[13]);
  refalrts::reinit_open_bracket(context[14]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[15] );
  refalrts::link_brackets( context[22], context[23] );
  refalrts::link_brackets( context[14], context[10] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_evar( res, context[23], context[26] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[14], context[10] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[17], context[20] );
  res = refalrts::splice_evar( res, context[0], context[13] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::use( res );
  refalrts::wrap_closure( context[24] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Linkm_CppCompile("Link-CppCompile", 52442882U, 1826840892U, func_Linkm_CppCompile);


static refalrts::FnResult func_gen_Linkm_Aux_A4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 52 elems
  refalrts::Iter context[52];
  refalrts::zeros( context, 52 );
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
  //RESULT: Tile{ [[ } </24 & PreLinkCleanupTemporary/25 t.Config#1/5/26 e.IntermediateName#3/7/28 >/30 </31 Tile{ AsIs: s.FnCreatePrefix#1/11 } e.IntermediateName#3/7/32 >/34 </35 & AppendRASLToBinary/36 (/37 e.IntermediateName#3/7/38 Tile{ HalfReuse: )/14 AsIs: e.Files#1/12 HalfReuse: >/15 } </40 & AppendReferencesToBinary/41 (/42 e.IntermediateName#3/7/43 Tile{ HalfReuse: )/18 AsIs: e.References#4/16 HalfReuse: >/19 HalfReuse: </22 } & AppendIncorporatedToBinary/45 (/46 e.IntermediateName#3/7/47 Tile{ AsIs: )/23 AsIs: e.IncorporatedLibNames#5/2 AsIs: >/1 } Tile{ AsIs: </0 Reuse: & PostLinkRename/4 AsIs: t.Config#1/5 AsIs: (/9 AsIs: e.IntermediateName#3/7 AsIs: )/10 } (/49 Tile{ AsIs: e.TargetFileName#2/20 } )/50 >/51 Tile{ ]] }
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
  refalrts::reinit_close_bracket(context[14]);
  refalrts::reinit_close_call(context[15]);
  refalrts::reinit_close_bracket(context[18]);
  refalrts::reinit_close_call(context[19]);
  refalrts::reinit_open_call(context[22]);
  refalrts::update_name(context[4], functions[efunc_PostLinkRename]);
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
  res = refalrts::splice_evar( res, context[50], context[51] );
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

static refalrts::NativeReference nat_ref_gen_Linkm_Aux_A4("Link-Aux=4", 52442882U, 1826840892U, func_gen_Linkm_Aux_A4);


static refalrts::FnResult func_gen_Linkm_Aux_A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </20 Tile{ HalfReuse: [*]/0 Reuse: & Link-Aux=4/4 AsIs: t.Config#1/5 AsIs: (/9 AsIs: e.IntermediateName#3/7 AsIs: )/10 AsIs: s.FnCreatePrefix#1/11 AsIs: (/14 AsIs: e.Files#1/12 AsIs: )/15 AsIs: (/18 } Tile{ AsIs: e.References#4/2 } Tile{ AsIs: )/19 } (/21 Tile{ AsIs: e.TargetFileName#2/16 } )/22 {*}/23 </24 & Config-GetIncorporateds/25 t.Config#1/5/26 >/28 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[20]);
  refalrts::alloc_open_bracket(vm, context[21]);
  refalrts::alloc_close_bracket(vm, context[22]);
  refalrts::alloc_unwrapped_closure(vm, context[23], context[0]);
  refalrts::alloc_open_call(vm, context[24]);
  refalrts::alloc_name(vm, context[25], functions[efunc_Configm_GetIncorporateds]);
  refalrts::copy_evar(vm, context[26], context[27], context[5], context[6]);
  refalrts::alloc_close_call(vm, context[28]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_Linkm_Aux_A4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[28] );
  refalrts::push_stack( vm, context[24] );
  refalrts::link_brackets( context[21], context[22] );
  refalrts::link_brackets( context[18], context[19] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[22], context[28] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[18] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  refalrts::use( res );
  refalrts::wrap_closure( context[23] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Linkm_Aux_A3("Link-Aux=3", 52442882U, 1826840892U, func_gen_Linkm_Aux_A3);


static refalrts::FnResult func_gen_Linkm_Aux_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </16 [*]/17 & Link-Aux=3/18 t.Config#1/5/19 (/21 Tile{ AsIs: e.IntermediateName#3/2 } )/22 Tile{ AsIs: s.FnCreatePrefix#1/7 AsIs: (/10 AsIs: e.Files#1/8 AsIs: )/11 AsIs: (/14 AsIs: e.TargetFileName#2/12 AsIs: )/15 } {*}/23 Tile{ AsIs: </0 Reuse: & Config-GetReferences/4 AsIs: t.Config#1/5 } >/24 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[16]);
  refalrts::alloc_closure_head(vm, context[17]);
  refalrts::alloc_name(vm, context[18], functions[efunc_gen_Linkm_Aux_A3]);
  refalrts::copy_evar(vm, context[19], context[20], context[5], context[6]);
  refalrts::alloc_open_bracket(vm, context[21]);
  refalrts::alloc_close_bracket(vm, context[22]);
  refalrts::alloc_unwrapped_closure(vm, context[23], context[17]);
  refalrts::alloc_close_call(vm, context[24]);
  refalrts::update_name(context[4], functions[efunc_Configm_GetReferences]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[24] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::link_brackets( context[21], context[22] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[24], context[24] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[7], context[15] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[16], context[21] );
  refalrts::use( res );
  refalrts::wrap_closure( context[23] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Linkm_Aux_A2("Link-Aux=2", 52442882U, 1826840892U, func_gen_Linkm_Aux_A2);


static refalrts::FnResult func_gen_Linkm_Aux_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
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
  //RESULT: Tile{ [[ } </12 Tile{ HalfReuse: [*]/0 Reuse: & Link-Aux=2/4 AsIs: t.Config#1/5 AsIs: s.FnCreatePrefix#1/7 AsIs: (/10 AsIs: e.Files#1/8 AsIs: )/11 } (/13 Tile{ AsIs: e.TargetFileName#2/2 } )/14 {*}/15 e.TargetFileName#2/2/16".partial"/18 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[12]);
  refalrts::alloc_open_bracket(vm, context[13]);
  refalrts::alloc_close_bracket(vm, context[14]);
  refalrts::alloc_unwrapped_closure(vm, context[15], context[0]);
  refalrts::copy_evar(vm, context[16], context[17], context[2], context[3]);
  refalrts::alloc_chars(vm, context[18], context[19], ".partial", 8);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_Linkm_Aux_A2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[12] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[14], context[19] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  refalrts::use( res );
  refalrts::wrap_closure( context[15] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Linkm_Aux_A1("Link-Aux=1", 52442882U, 1826840892U, func_gen_Linkm_Aux_A1);


static refalrts::FnResult func_Linkm_Aux(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
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
  //RESULT: Tile{ [[ } </9 [*]/10 & Link-Aux=1/11 t.Config#1/7/12 Tile{ AsIs: s.FnCreatePrefix#1/6 } (/14 e.Files#1/2/15 )/17 {*}/18 Tile{ AsIs: </0 Reuse: & CalcTargetFileName/4 AsIs: s.TargetMode#1/5 } Tile{ AsIs: t.Config#1/7 AsIs: e.Files#1/2 AsIs: >/1 } >/19 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_closure_head(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_Linkm_Aux_A1]);
  refalrts::copy_evar(vm, context[12], context[13], context[7], context[8]);
  refalrts::alloc_open_bracket(vm, context[14]);
  refalrts::copy_evar(vm, context[15], context[16], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[17]);
  refalrts::alloc_unwrapped_closure(vm, context[18], context[10]);
  refalrts::alloc_close_call(vm, context[19]);
  refalrts::update_name(context[4], functions[efunc_CalcTargetFileName]);
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[14], context[17] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[7], context[1] );
  res = refalrts::splice_evar( res, context[0], context[5] );
  res = refalrts::splice_evar( res, context[14], context[18] );
  res = refalrts::splice_evar( res, context[6], context[6] );
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::use( res );
  refalrts::wrap_closure( context[18] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Linkm_Aux("Link-Aux", 52442882U, 1826840892U, func_Linkm_Aux);


static refalrts::FnResult func_gen_PreLinkCleanupTemporary_B1S2B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
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
    // </0 & PreLinkCleanupTemporary:1$2:1/4 (/7 e.Temporary#1/5 )/8 t.Config#1/13 # True/15 (/11 )/12 >/1
    if( ! refalrts::ident_term( identifiers[ident_True], context[15] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    // closed e.Temporary#1 as range 5
    //DEBUG: t.Config#1: 13
    //DEBUG: e.Temporary#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.Config#1/13 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Prout/4 HalfReuse: 'L'/7 } 'o'/16 Tile{ HalfReuse: 's'/8 }"t temporary file "/17 Tile{ AsIs: e.Temporary#1/5 }" is remo"/19 Tile{ HalfReuse: 'v'/15 HalfReuse: 'e'/11 HalfReuse: 'd'/12 AsIs: >/1 ]] }
    refalrts::alloc_char(vm, context[16], 'o');
    refalrts::alloc_chars(vm, context[17], context[18], "t temporary file ", 17);
    refalrts::alloc_chars(vm, context[19], context[20], " is remo", 8);
    refalrts::update_name(context[4], functions[efunc_Prout]);
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
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[16], context[16] );
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

static refalrts::NativeReference nat_ref_gen_PreLinkCleanupTemporary_B1S2B1("PreLinkCleanupTemporary:1$2:1", 52442882U, 1826840892U, func_gen_PreLinkCleanupTemporary_B1S2B1);


static refalrts::FnResult func_gen_PreLinkCleanupTemporary_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
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
    // </0 & PreLinkCleanupTemporary:1/4 (/7 e.Temporary#1/5 )/8 t.Config#1/9 # False/11 >/1
    if( ! refalrts::ident_term( identifiers[ident_False], context[11] ) )
      continue;
    // closed e.Temporary#1 as range 5
    //DEBUG: t.Config#1: 9
    //DEBUG: e.Temporary#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & PreLinkCleanupTemporary:1/4 (/7 e.Temporary#1/5 )/8 t.Config#1/9 # False/11 >/1 {REMOVED TILE}
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </12 Tile{ HalfReuse: [*]/0 Reuse: & PreLinkCleanupTemporary:1$2:1/4 AsIs: (/7 AsIs: e.Temporary#1/5 AsIs: )/8 AsIs: t.Config#1/9 HalfReuse: {*}/11 HalfReuse: </1 } & RemoveFile/13 e.Temporary#1/5/14 >/16 >/17 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_RemoveFile]);
  refalrts::copy_evar(vm, context[14], context[15], context[5], context[6]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_PreLinkCleanupTemporary_B1S2B1]);
  refalrts::reinit_unwrapped_closure(context[11], context[0]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[1] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[17] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  refalrts::use( res );
  refalrts::wrap_closure( context[11] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PreLinkCleanupTemporary_B1("PreLinkCleanupTemporary:1", 52442882U, 1826840892U, func_gen_PreLinkCleanupTemporary_B1);


static refalrts::FnResult func_PreLinkCleanupTemporary(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
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
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & PreLinkCleanupTemporary:1/7 (/8 e.Temporary#1/2/9 )/11 Tile{ AsIs: t.Config#1/5 } {*}/12 </13 & ExistFile/14 Tile{ AsIs: e.Temporary#1/2 } >/15 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_PreLinkCleanupTemporary_B1]);
  refalrts::alloc_open_bracket(vm, context[8]);
  refalrts::copy_evar(vm, context[9], context[10], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::alloc_unwrapped_closure(vm, context[12], context[4]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_ExistFile]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::reinit_closure_head(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[8], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[14] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[7], context[11] );
  refalrts::use( res );
  refalrts::wrap_closure( context[12] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PreLinkCleanupTemporary("PreLinkCleanupTemporary", 52442882U, 1826840892U, func_PreLinkCleanupTemporary);


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

static refalrts::NativeReference nat_ref_gen_CheckCppCompilationSuccessed_B1("CheckCppCompilationSuccessed:1", 52442882U, 1826840892U, func_gen_CheckCppCompilationSuccessed_B1);


static refalrts::FnResult func_CheckCppCompilationSuccessed(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & CheckCppCompilationSuccessed:1/7 Tile{ AsIs: t.Config#1/5 } {*}/8 </9 & ExistFile/10 Tile{ AsIs: e.TemporaryName#1/2 } >/11 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_CheckCppCompilationSuccessed_B1]);
  refalrts::alloc_unwrapped_closure(vm, context[8], context[4]);
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_ExistFile]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::reinit_closure_head(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[10] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  refalrts::wrap_closure( context[8] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckCppCompilationSuccessed("CheckCppCompilationSuccessed", 52442882U, 1826840892U, func_CheckCppCompilationSuccessed);


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

static refalrts::NativeReference nat_ref_gen_EnsureAligned4096_A1("EnsureAligned4096=1", 52442882U, 1826840892U, func_gen_EnsureAligned4096_A1);


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

static refalrts::NativeReference nat_ref_EnsureAligned4096("EnsureAligned4096", 52442882U, 1826840892U, func_EnsureAligned4096);


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

static refalrts::NativeReference nat_ref_gen_AlignToPage_B1("AlignToPage:1", 52442882U, 1826840892U, func_gen_AlignToPage_B1);


static refalrts::FnResult func_gen_AlignToPage_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </6 [*]/7 & AlignToPage:1/8 s.FileHandle#1/5/9 {*}/10 </11 & Mod/12 Tile{ AsIs: </0 Reuse: & FTell/4 AsIs: s.FileHandle#1/5 AsIs: >/1 } 4096/13 >/14 >/15 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_closure_head(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_AlignToPage_B1]);
  refalrts::copy_stvar(vm, context[9], context[5]);
  refalrts::alloc_unwrapped_closure(vm, context[10], context[7]);
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_Mod]);
  refalrts::alloc_number(vm, context[13], 4096UL);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::update_name(context[4], functions[efunc_FTell]);
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[15] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[6], context[12] );
  refalrts::use( res );
  refalrts::wrap_closure( context[10] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_AlignToPage_A1("AlignToPage=1", 52442882U, 1826840892U, func_gen_AlignToPage_A1);


static refalrts::FnResult func_AlignToPage(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </6 [*]/7 & AlignToPage=1/8 s.FileHandle#1/5/9 {*}/10 Tile{ AsIs: </0 Reuse: & FSeek/4 AsIs: s.FileHandle#1/5 HalfReuse: # END/1 } '-'/11 0/12 >/13 >/14 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_closure_head(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_AlignToPage_A1]);
  refalrts::copy_stvar(vm, context[9], context[5]);
  refalrts::alloc_unwrapped_closure(vm, context[10], context[7]);
  refalrts::alloc_char(vm, context[11], '-');
  refalrts::alloc_number(vm, context[12], 0UL);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::update_name(context[4], functions[efunc_FSeek]);
  refalrts::reinit_ident(context[1], identifiers[ident_END]);
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[14] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[6], context[10] );
  refalrts::use( res );
  refalrts::wrap_closure( context[10] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_AlignToPage("AlignToPage", 52442882U, 1826840892U, func_AlignToPage);


static refalrts::FnResult func_gen_AppendRASLToBinary_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & AppendRASLToBinary\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & AppendRASLToBinary\1/4 s.new#1/9 (/7 s.new#2/10 e.new#3/5 )/8 >/1
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
  // closed e.new#3 as range 5
  do {
    // </0 & AppendRASLToBinary\1/4 s.FileHandle#2/9 (/7 # RASL/10 e.OutputName#3/5 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_RASL], context[10] ) )
      continue;
    // closed e.OutputName#3 as range 5
    //DEBUG: s.FileHandle#2: 9
    //DEBUG: e.OutputName#3: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FWriteBytes/4 AsIs: s.FileHandle#2/9 HalfReuse: </7 HalfReuse: & LoadBytes/10 AsIs: e.OutputName#3/5 HalfReuse: >/8 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_FWriteBytes]);
    refalrts::reinit_open_call(context[7]);
    refalrts::reinit_name(context[10], functions[efunc_LoadBytes]);
    refalrts::reinit_close_call(context[8]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[7] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AppendRASLToBinary\1/4 s.FileHandle#2/9 (/7 # Native/10 e.NativeName#3/5 )/8 >/1
  if( ! refalrts::ident_term( identifiers[ident_Native], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.NativeName#3 as range 5
  //DEBUG: s.FileHandle#2: 9
  //DEBUG: e.NativeName#3: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & AppendRASLToBinary\1/4 s.FileHandle#2/9 (/7 # Native/10 e.NativeName#3/5 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_AppendRASLToBinary_L1("AppendRASLToBinary\\1", 52442882U, 1826840892U, func_gen_AppendRASLToBinary_L1);


static refalrts::FnResult func_gen_AppendRASLToBinary_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & AppendRASLToBinary=1/4 (/7 e.Files#1/5 )/8 s.FileHandle#2/9 >/1
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 HalfReuse: [*]/7 } & AppendRASLToBinary\1/10 s.FileHandle#2/9/11 {*}/12 Tile{ AsIs: e.Files#1/5 } >/13 </14 Tile{ HalfReuse: & FClose/8 AsIs: s.FileHandle#2/9 AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_AppendRASLToBinary_L1]);
  refalrts::copy_stvar(vm, context[11], context[9]);
  refalrts::alloc_unwrapped_closure(vm, context[12], context[7]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::update_name(context[4], functions[efunc_Map]);
  refalrts::reinit_closure_head(context[7]);
  refalrts::reinit_name(context[8], functions[efunc_FClose]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[10], context[12] );
  refalrts::use( res );
  refalrts::wrap_closure( context[12] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_AppendRASLToBinary_A1("AppendRASLToBinary=1", 52442882U, 1826840892U, func_gen_AppendRASLToBinary_A1);


static refalrts::FnResult func_AppendRASLToBinary(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & AppendRASLToBinary/4 (/7 e.BinaryName#1/5 )/8 e.Files#1/2 >/1
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
  // closed e.Files#1 as range 2
  //DEBUG: e.BinaryName#1: 5
  //DEBUG: e.Files#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 HalfReuse: & AppendRASLToBinary=1/7 } (/9 Tile{ AsIs: e.Files#1/2 } Tile{ AsIs: )/8 } {*}/10 </11 & FOpen/12 (/13"ab"/14 )/16 Tile{ AsIs: e.BinaryName#1/5 } >/17 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_unwrapped_closure(vm, context[10], context[4]);
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_FOpen]);
  refalrts::alloc_open_bracket(vm, context[13]);
  refalrts::alloc_chars(vm, context[14], context[15], "ab", 2);
  refalrts::alloc_close_bracket(vm, context[16]);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::reinit_closure_head(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_gen_AppendRASLToBinary_A1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[13], context[16] );
  refalrts::link_brackets( context[9], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[10], context[16] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  refalrts::wrap_closure( context[10] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_AppendRASLToBinary("AppendRASLToBinary", 52442882U, 1826840892U, func_AppendRASLToBinary);


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

static refalrts::NativeReference nat_ref_AppendReferencesToBinary("AppendReferencesToBinary", 52442882U, 1826840892U, func_AppendReferencesToBinary);


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

static refalrts::NativeReference nat_ref_AppendIncorporatedToBinary("AppendIncorporatedToBinary", 52442882U, 1826840892U, func_AppendIncorporatedToBinary);


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

static refalrts::NativeReference nat_ref_gen_AppendSimpleBlock_L1("AppendSimpleBlock\\1", 52442882U, 1826840892U, func_gen_AppendSimpleBlock_L1);


static refalrts::FnResult func_gen_AppendSimpleBlock_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </11 & Map/12 [*]/13 Tile{ HalfReuse: & AppendSimpleBlock\1/0 HalfReuse: s.FileHandle2 #10/4 AsIs: s.FnAdder#1/5 HalfReuse: {*}/8 AsIs: e.BlockItems#1/6 HalfReuse: >/9 } </14 & FClose/15 Tile{ AsIs: s.FileHandle#2/10 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_Map]);
  refalrts::alloc_closure_head(vm, context[13]);
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_FClose]);
  refalrts::reinit_name(context[0], functions[efunc_gen_AppendSimpleBlock_L1]);
  refalrts::reinit_svar( context[4], context[10] );
  refalrts::reinit_unwrapped_closure(context[8], context[13]);
  refalrts::reinit_close_call(context[9]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[10];
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[11], context[13] );
  refalrts::use( res );
  refalrts::wrap_closure( context[8] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_AppendSimpleBlock_A1("AppendSimpleBlock=1", 52442882U, 1826840892U, func_gen_AppendSimpleBlock_A1);


static refalrts::FnResult func_AppendSimpleBlock(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </10 Tile{ HalfReuse: [*]/0 Reuse: & AppendSimpleBlock=1/4 AsIs: s.FnAdder#1/5 AsIs: (/8 } Tile{ AsIs: e.BlockItems#1/2 } Tile{ AsIs: )/9 } {*}/11 </12 & FOpen/13 (/14"ab"/15 )/17 Tile{ AsIs: e.BinaryName#1/6 } >/18 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_unwrapped_closure(vm, context[11], context[0]);
  refalrts::alloc_open_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_FOpen]);
  refalrts::alloc_open_bracket(vm, context[14]);
  refalrts::alloc_chars(vm, context[15], context[16], "ab", 2);
  refalrts::alloc_close_bracket(vm, context[17]);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_AppendSimpleBlock_A1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[12] );
  refalrts::link_brackets( context[14], context[17] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[11], context[17] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  refalrts::use( res );
  refalrts::wrap_closure( context[11] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_AppendSimpleBlock("AppendSimpleBlock", 52442882U, 1826840892U, func_AppendSimpleBlock);


static refalrts::FnResult func_gen_PostLinkRename_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
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
    // </0 & PostLinkRename:1/4 t.Config#1/5 (/9 e.TemporaryName#1/7 )/10 (/13 e.TargetFileName#1/11 )/14 # True/15 >/1
    if( ! refalrts::ident_term( identifiers[ident_True], context[15] ) )
      continue;
    // closed e.TemporaryName#1 as range 7
    // closed e.TargetFileName#1 as range 11
    //DEBUG: t.Config#1: 5
    //DEBUG: e.TemporaryName#1: 7
    //DEBUG: e.TargetFileName#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} t.Config#1/5 {REMOVED TILE} e.TemporaryName#1/7 {REMOVED TILE} e.TargetFileName#1/11 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Prout/4 } Tile{ HalfReuse: '*'/10 HalfReuse: '*'/13 } Tile{ HalfReuse: ' '/9 }"Compilation completed successfully "/16 Tile{ HalfReuse: '*'/14 HalfReuse: '*'/15 AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[16], context[17], "Compilation completed successfully ", 35);
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
    res = refalrts::splice_evar( res, context[16], context[17] );
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

static refalrts::NativeReference nat_ref_gen_PostLinkRename_B1("PostLinkRename:1", 52442882U, 1826840892U, func_gen_PostLinkRename_B1);


static refalrts::FnResult func_gen_PostLinkRename_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </15 Tile{ HalfReuse: [*]/0 Reuse: & PostLinkRename:1/4 AsIs: t.Config#1/13 AsIs: (/11 AsIs: e.TemporaryName#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.TargetFileName#1/5 AsIs: )/8 HalfReuse: {*}/1 } </16 & RenameFile/17 (/18 e.TemporaryName#1/9/19 )/21 (/22 e.TargetFileName#1/5/23 )/25 >/26 >/27 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[15]);
  refalrts::alloc_open_call(vm, context[16]);
  refalrts::alloc_name(vm, context[17], functions[efunc_RenameFile]);
  refalrts::alloc_open_bracket(vm, context[18]);
  refalrts::copy_evar(vm, context[19], context[20], context[9], context[10]);
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::alloc_open_bracket(vm, context[22]);
  refalrts::copy_evar(vm, context[23], context[24], context[5], context[6]);
  refalrts::alloc_close_bracket(vm, context[25]);
  refalrts::alloc_close_call(vm, context[26]);
  refalrts::alloc_close_call(vm, context[27]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_PostLinkRename_B1]);
  refalrts::reinit_unwrapped_closure(context[1], context[0]);
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[26] );
  refalrts::push_stack( vm, context[16] );
  refalrts::link_brackets( context[22], context[25] );
  refalrts::link_brackets( context[18], context[21] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[16], context[27] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  refalrts::use( res );
  refalrts::wrap_closure( context[1] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PostLinkRename_A1("PostLinkRename=1", 52442882U, 1826840892U, func_gen_PostLinkRename_A1);


static refalrts::FnResult func_gen_PostLinkRename_A1B1S1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & PostLinkRename=1:1$1:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & PostLinkRename=1:1$1:1/4 t.new#1/9 (/13 e.new#2/11 )/14 s.new#3/15 (/7 e.new#4/5 )/8 >/1
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
    // </0 & PostLinkRename=1:1$1:1/4 t.Config#1/9 (/13 e.TargetFileName#1/11 )/14 # True/15 (/7 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_True], context[15] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.TargetFileName#1 as range 11
    //DEBUG: t.Config#1: 9
    //DEBUG: e.TargetFileName#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & PostLinkRename=1:1$1:1/4 t.Config#1/9 (/13 e.TargetFileName#1/11 )/14 # True/15 (/7 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PostLinkRename=1:1$1:1/4 t.Config#1/9 (/13 e.TargetFileName#1/11 )/14 # False/15 (/7 e.ErrorMessage#3/5 )/8 >/1
  if( ! refalrts::ident_term( identifiers[ident_False], context[15] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.TargetFileName#1 as range 11
  // closed e.ErrorMessage#3 as range 5
  //DEBUG: t.Config#1: 9
  //DEBUG: e.TargetFileName#1: 11
  //DEBUG: e.ErrorMessage#3: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & LinkError/4 AsIs: t.Config#1/9 HalfReuse: 'C'/13 } 'a'/16 Tile{ HalfReuse: 'n'/14 HalfReuse: '\''/15 HalfReuse: 't'/7 } ' '/17 Tile{ HalfReuse: 'r'/8 }"emove file "/18 Tile{ AsIs: e.TargetFileName#1/11 }", "/20 Tile{ AsIs: e.ErrorMessage#3/5 } Tile{ AsIs: >/1 ]] }
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

static refalrts::NativeReference nat_ref_gen_PostLinkRename_A1B1S1B1("PostLinkRename=1:1$1:1", 52442882U, 1826840892U, func_gen_PostLinkRename_A1B1S1B1);


static refalrts::FnResult func_gen_PostLinkRename_A1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
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
    // </0 & PostLinkRename=1:1/4 t.Config#1/5 (/9 e.TargetFileName#1/7 )/10 # True/11 >/1
    if( ! refalrts::ident_term( identifiers[ident_True], context[11] ) )
      continue;
    // closed e.TargetFileName#1 as range 7
    //DEBUG: t.Config#1: 5
    //DEBUG: e.TargetFileName#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </12 Tile{ HalfReuse: [*]/0 Reuse: & PostLinkRename=1:1$1:1/4 AsIs: t.Config#1/5 AsIs: (/9 AsIs: e.TargetFileName#1/7 AsIs: )/10 HalfReuse: {*}/11 HalfReuse: </1 } & RemoveFile/13 e.TargetFileName#1/7/14 >/16 >/17 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_RemoveFile]);
    refalrts::copy_evar(vm, context[14], context[15], context[7], context[8]);
    refalrts::alloc_close_call(vm, context[16]);
    refalrts::alloc_close_call(vm, context[17]);
    refalrts::reinit_closure_head(context[0]);
    refalrts::update_name(context[4], functions[efunc_gen_PostLinkRename_A1B1S1B1]);
    refalrts::reinit_unwrapped_closure(context[11], context[0]);
    refalrts::reinit_open_call(context[1]);
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[1] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[13], context[17] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    refalrts::use( res );
    refalrts::wrap_closure( context[11] );
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

static refalrts::NativeReference nat_ref_gen_PostLinkRename_A1B1("PostLinkRename=1:1", 52442882U, 1826840892U, func_gen_PostLinkRename_A1B1);


static refalrts::FnResult func_PostLinkRename(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </15 Tile{ HalfReuse: [*]/0 Reuse: & PostLinkRename=1/4 AsIs: t.Config#1/13 AsIs: (/11 AsIs: e.TemporaryName#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.TargetFileName#1/5 AsIs: )/8 HalfReuse: {*}/1 } </16 [*]/17 & PostLinkRename=1:1/18 t.Config#1/13/19 (/21 e.TargetFileName#1/5/22 )/24 {*}/25 </26 & ExistFile/27 e.TargetFileName#1/5/28 >/30 >/31 >/32 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[15]);
  refalrts::alloc_open_call(vm, context[16]);
  refalrts::alloc_closure_head(vm, context[17]);
  refalrts::alloc_name(vm, context[18], functions[efunc_gen_PostLinkRename_A1B1]);
  refalrts::copy_evar(vm, context[19], context[20], context[13], context[14]);
  refalrts::alloc_open_bracket(vm, context[21]);
  refalrts::copy_evar(vm, context[22], context[23], context[5], context[6]);
  refalrts::alloc_close_bracket(vm, context[24]);
  refalrts::alloc_unwrapped_closure(vm, context[25], context[17]);
  refalrts::alloc_open_call(vm, context[26]);
  refalrts::alloc_name(vm, context[27], functions[efunc_ExistFile]);
  refalrts::copy_evar(vm, context[28], context[29], context[5], context[6]);
  refalrts::alloc_close_call(vm, context[30]);
  refalrts::alloc_close_call(vm, context[31]);
  refalrts::alloc_close_call(vm, context[32]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_PostLinkRename_A1]);
  refalrts::reinit_unwrapped_closure(context[1], context[0]);
  refalrts::push_stack( vm, context[32] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[31] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[30] );
  refalrts::push_stack( vm, context[26] );
  refalrts::link_brackets( context[21], context[24] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[16], context[32] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  refalrts::use( res );
  refalrts::wrap_closure( context[1] );
  refalrts::wrap_closure( context[25] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PostLinkRename("PostLinkRename", 52442882U, 1826840892U, func_PostLinkRename);


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

static refalrts::NativeReference nat_ref_gen_FindPrefix_A1("FindPrefix=1", 52442882U, 1826840892U, func_gen_FindPrefix_A1);


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

static refalrts::NativeReference nat_ref_gen_FindPrefix_A1B1("FindPrefix=1:1", 52442882U, 1826840892U, func_gen_FindPrefix_A1B1);


static refalrts::FnResult func_FindPrefix(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
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
  //RESULT: Tile{ [[ } </7 [*]/8 & FindPrefix=1/9 (/10 Tile{ AsIs: e.Prefix#1/2 } )/11 t.Config#1/5/12 {*}/14 </15 & FindPrefix=1:1/16 Tile{ AsIs: </0 Reuse: & Config-GetTargetMode/4 AsIs: t.Config#1/5 } >/17 >/18 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_closure_head(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_gen_FindPrefix_A1]);
  refalrts::alloc_open_bracket(vm, context[10]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::copy_evar(vm, context[12], context[13], context[5], context[6]);
  refalrts::alloc_unwrapped_closure(vm, context[14], context[8]);
  refalrts::alloc_open_call(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_gen_FindPrefix_A1B1]);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::update_name(context[4], functions[efunc_Configm_GetTargetMode]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[11], context[16] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[10] );
  refalrts::use( res );
  refalrts::wrap_closure( context[14] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FindPrefix("FindPrefix", 52442882U, 1826840892U, func_FindPrefix);


static refalrts::FnResult func_gen_DoFindPrefix_S1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
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
    // </0 & DoFindPrefix$1:1/4 (/7 e.PrefixFileName#2/5 )/8 (/11 e.PrefixName#1/9 )/12 (/15 e.Folders#1/13 )/16 # True/17 >/1
    if( ! refalrts::ident_term( identifiers[ident_True], context[17] ) )
      continue;
    // closed e.PrefixFileName#2 as range 5
    // closed e.PrefixName#1 as range 9
    // closed e.Folders#1 as range 13
    //DEBUG: e.PrefixFileName#2: 5
    //DEBUG: e.PrefixName#1: 9
    //DEBUG: e.Folders#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} & DoFindPrefix$1:1/4 (/7 {REMOVED TILE} )/8 (/11 e.PrefixName#1/9 )/12 (/15 e.Folders#1/13 )/16 # True/17 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: # Success/0 } Tile{ AsIs: e.PrefixFileName#2/5 } Tile{ ]] }
    refalrts::reinit_ident(context[0], identifiers[ident_Success]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[5], context[6] );
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

static refalrts::NativeReference nat_ref_gen_DoFindPrefix_S1B1("DoFindPrefix$1:1", 52442882U, 1826840892U, func_gen_DoFindPrefix_S1B1);


static refalrts::FnResult func_gen_DoFindPrefix_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
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
  //RESULT: Tile{ [[ AsIs: </0 } [*]/13 & DoFindPrefix$1:1/14 (/15 e.PrefixFileName#2/2/16 Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.PrefixName#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Folders#1/9 AsIs: )/12 } {*}/18 </19 & ExistFile/20 Tile{ AsIs: e.PrefixFileName#2/2 } >/21 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_closure_head(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_gen_DoFindPrefix_S1B1]);
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::copy_evar(vm, context[16], context[17], context[2], context[3]);
  refalrts::alloc_unwrapped_closure(vm, context[18], context[13]);
  refalrts::alloc_open_call(vm, context[19]);
  refalrts::alloc_name(vm, context[20], functions[efunc_ExistFile]);
  refalrts::alloc_close_call(vm, context[21]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[19] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[15], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[18], context[20] );
  res = refalrts::splice_evar( res, context[4], context[12] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[13], context[15] );
  refalrts::use( res );
  refalrts::wrap_closure( context[18] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoFindPrefix_S1A1("DoFindPrefix$1=1", 52442882U, 1826840892U, func_gen_DoFindPrefix_S1A1);


static refalrts::FnResult func_DoFindPrefix(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
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
    // </0 & DoFindPrefix/4 (/7 e.PrefixName#1/5 )/8 (/13 e.NextFolder#1/11 )/14 e.Folders#1/9 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[9], context[10] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    // closed e.PrefixName#1 as range 5
    // closed e.NextFolder#1 as range 11
    // closed e.Folders#1 as range 9
    //DEBUG: e.PrefixName#1: 5
    //DEBUG: e.NextFolder#1: 11
    //DEBUG: e.Folders#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </15 Tile{ HalfReuse: [*]/0 Reuse: & DoFindPrefix$1=1/4 AsIs: (/7 AsIs: e.PrefixName#1/5 AsIs: )/8 AsIs: (/13 } Tile{ AsIs: e.Folders#1/9 } Tile{ AsIs: )/14 } {*}/16 </17 & GlueNames/18 (/19 Tile{ AsIs: e.NextFolder#1/11 } )/20 (/21 e.PrefixName#1/5/22 )/24 >/25 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_unwrapped_closure(vm, context[16], context[0]);
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[18], functions[efunc_GlueNames]);
    refalrts::alloc_open_bracket(vm, context[19]);
    refalrts::alloc_close_bracket(vm, context[20]);
    refalrts::alloc_open_bracket(vm, context[21]);
    refalrts::copy_evar(vm, context[22], context[23], context[5], context[6]);
    refalrts::alloc_close_bracket(vm, context[24]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::reinit_closure_head(context[0]);
    refalrts::update_name(context[4], functions[efunc_gen_DoFindPrefix_S1A1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[17] );
    refalrts::link_brackets( context[21], context[24] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[20], context[25] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[16], context[19] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[0], context[13] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    refalrts::use( res );
    refalrts::wrap_closure( context[16] );
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

static refalrts::NativeReference nat_ref_DoFindPrefix("DoFindPrefix", 52442882U, 1826840892U, func_DoFindPrefix);


static refalrts::FnResult func_GlueNames(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
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
    // </0 & GlueNames/4 (/7 # Current/15 )/8 (/11 e.FileName#1/9 )/12 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = refalrts::ident_left( identifiers[ident_Current], context[13], context[14] );
    if( ! context[15] )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    // closed e.FileName#1 as range 9
    //DEBUG: e.FileName#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & GlueNames/4 (/7 # Current/15 )/8 (/11 {REMOVED TILE} )/12 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.FileName#1/9 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[9], context[10] );
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
  //TRASH: {REMOVED TILE} </0 & GlueNames/4 (/7 {REMOVED TILE} )/8 (/11 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Folder#1/5 } Tile{ HalfReuse: '/'/12 } Tile{ AsIs: e.FileName#1/9 } Tile{ ]] }
  refalrts::reinit_char(context[12], '/');
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GlueNames("GlueNames", 52442882U, 1826840892U, func_GlueNames);


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

static refalrts::NativeReference nat_ref_CopyPrefix("CopyPrefix", 52442882U, 1826840892U, func_CopyPrefix);


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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Prout/4 }"LINK ERROR: "/7 Tile{ AsIs: e.Message#1/2 } >/9 </10 & CreateErrorFileMark/11 Tile{ AsIs: t.Config#1/5 } >/12 </13 & Exit/14 1/15 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[7], context[8], "LINK ERROR: ", 12);
  refalrts::alloc_close_call(vm, context[9]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_CreateErrorFileMark]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_Exit]);
  refalrts::alloc_number(vm, context[15], 1UL);
  refalrts::update_name(context[4], functions[efunc_Prout]);
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

static refalrts::NativeReference nat_ref_LinkError("LinkError", 52442882U, 1826840892U, func_LinkError);


static refalrts::FnResult func_GetBaseNameLowerCase(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & GetBaseNameLowerCase/4 e.FileName#1/2 '.'/9 'r'/8 'a'/7 's'/6 'l'/5 >/1
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
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & Lower/6 } Tile{ AsIs: </0 Reuse: & GetLastPartName/4 AsIs: e.FileName#1/2 HalfReuse: >/9 HalfReuse: >/8 } Tile{ ]] }
  refalrts::reinit_open_call(context[7]);
  refalrts::reinit_name(context[6], functions[efunc_Lower]);
  refalrts::update_name(context[4], functions[efunc_GetLastPartName]);
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

static refalrts::NativeReference nat_ref_GetBaseNameLowerCase("GetBaseNameLowerCase", 52442882U, 1826840892U, func_GetBaseNameLowerCase);


static refalrts::FnResult func_GetLastPartName(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & GetLastPartName/4 e.FileName#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.FileName#1 as range 2
  //DEBUG: e.FileName#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGetFileName/4 AsIs: e.FileName#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_DoGetFileName]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GetLastPartName("GetLastPartName", 52442882U, 1826840892U, func_GetLastPartName);


static refalrts::FnResult func_DoGetFileName(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & DoGetFileName/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & DoGetFileName/4 e.new#1/5 s.new#2/7 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_right( context[7], context[5], context[6] ) )
      continue;
    // closed e.new#1 as range 5
    do {
      // </0 & DoGetFileName/4 e.FileName#1/5 '/'/7 >/1
      if( ! refalrts::char_term( '/', context[7] ) )
        continue;
      // closed e.FileName#1 as range 5
      //DEBUG: e.FileName#1: 5

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & DoGetFileName/4 e.FileName#1/5 '/'/7 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoGetFileName/4 e.FileName#1/5 '\\'/7 >/1
      if( ! refalrts::char_term( '\\', context[7] ) )
        continue;
      // closed e.FileName#1 as range 5
      //DEBUG: e.FileName#1: 5

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & DoGetFileName/4 e.FileName#1/5 '\\'/7 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoGetFileName/4 e.FileName#1/5 s.Last#1/7 >/1
    // closed e.FileName#1 as range 5
    //DEBUG: s.Last#1: 7
    //DEBUG: e.FileName#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Last#1/7 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGetFileName/4 } Tile{ AsIs: e.FileName#1/5 } >/8 Tile{ HalfReuse: s.Last1 #7/1 ]] }
    refalrts::alloc_close_call(vm, context[8]);
    refalrts::reinit_svar( context[1], context[7] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoGetFileName/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DoGetFileName/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoGetFileName("DoGetFileName", 52442882U, 1826840892U, func_DoGetFileName);


//End of file
